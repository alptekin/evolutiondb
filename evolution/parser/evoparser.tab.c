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
     FLEFT = 460,
     FRIGHT = 461,
     FLPAD = 462,
     FRPAD = 463,
     FREVERSE = 464,
     FREPEAT = 465,
     FINSTR = 466,
     FLOCATE = 467,
     FABS = 468,
     FCEIL = 469,
     FFLOOR = 470,
     FROUND = 471,
     FPOWER = 472,
     FSQRT = 473,
     FMOD = 474,
     FRAND = 475,
     FLOG = 476,
     FLOG10 = 477,
     FSIGN = 478,
     FPI = 479,
     FCOUNT = 480,
     FSUM = 481,
     FAVG = 482,
     FMIN = 483,
     FMAX = 484,
     FUPPER = 485,
     FLOWER = 486,
     FLENGTH = 487,
     FCONCAT = 488,
     FREPLACE = 489,
     FCOALESCE = 490,
     FGEN_RANDOM_UUID = 491,
     FGEN_RANDOM_UUID_V7 = 492,
     FSNOWFLAKE_ID = 493,
     FLAST_INSERT_ID = 494,
     FEVO_SLEEP = 495,
     FEVO_JITTER = 496
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
#define FLEFT 460
#define FRIGHT 461
#define FLPAD 462
#define FRPAD 463
#define FREVERSE 464
#define FREPEAT 465
#define FINSTR 466
#define FLOCATE 467
#define FABS 468
#define FCEIL 469
#define FFLOOR 470
#define FROUND 471
#define FPOWER 472
#define FSQRT 473
#define FMOD 474
#define FRAND 475
#define FLOG 476
#define FLOG10 477
#define FSIGN 478
#define FPI 479
#define FCOUNT 480
#define FSUM 481
#define FAVG 482
#define FMIN 483
#define FMAX 484
#define FUPPER 485
#define FLOWER 486
#define FLENGTH 487
#define FCONCAT 488
#define FREPLACE 489
#define FCOALESCE 490
#define FGEN_RANDOM_UUID 491
#define FGEN_RANDOM_UUID_V7 492
#define FSNOWFLAKE_ID 493
#define FLAST_INSERT_ID 494
#define FEVO_SLEEP 495
#define FEVO_JITTER 496




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
#line 633 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 646 "parser/evoparser.tab.c"

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
#define YYLAST   4194

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  256
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  516
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1313

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   496

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     253,   254,    26,    24,   255,    25,   252,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   251,
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
     244,   245,   246,   247,   248,   249,   250
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
     469,   478,   489,   493,   497,   501,   505,   510,   517,   519,
     521,   523,   530,   537,   541,   545,   549,   553,   557,   561,
     565,   569,   573,   578,   585,   589,   595,   600,   606,   610,
     615,   619,   624,   626,   628,   630,   632,   636,   649,   650,
     653,   654,   659,   662,   667,   668,   670,   672,   673,   676,
     677,   680,   681,   685,   687,   691,   694,   697,   698,   701,
     706,   711,   712,   715,   718,   723,   728,   729,   732,   734,
     738,   739,   742,   745,   748,   751,   754,   757,   760,   763,
     765,   769,   771,   774,   777,   779,   780,   782,   786,   788,
     790,   794,   800,   804,   808,   810,   811,   817,   821,   827,
     834,   840,   841,   843,   845,   846,   848,   850,   852,   855,
     858,   859,   860,   862,   865,   870,   877,   884,   891,   892,
     895,   896,   898,   902,   906,   908,   916,   919,   922,   925,
     926,   933,   936,   941,   942,   945,   953,   955,   959,   965,
     967,   976,   987,   997,  1009,  1020,  1033,  1045,  1059,  1069,
    1081,  1092,  1105,  1117,  1130,  1132,  1136,  1138,  1143,  1148,
    1153,  1160,  1162,  1166,  1169,  1173,  1179,  1181,  1185,  1186,
    1189,  1192,  1196,  1200,  1202,  1206,  1208,  1212,  1218,  1220,
    1231,  1242,  1260,  1273,  1293,  1305,  1312,  1321,  1328,  1335,
    1342,  1352,  1359,  1365,  1374,  1382,  1392,  1401,  1412,  1422,
    1423,  1425,  1428,  1430,  1439,  1446,  1447,  1452,  1453,  1456,
    1459,  1462,  1465,  1467,  1468,  1469,  1473,  1475,  1479,  1483,
    1484,  1491,  1493,  1495,  1499,  1503,  1511,  1515,  1519,  1525,
    1531,  1533,  1542,  1550,  1558,  1560,  1569,  1570,  1573,  1576,
    1580,  1586,  1592,  1600,  1606,  1608,  1613,  1618,  1622,  1628,
    1632,  1638,  1639,  1642,  1644,  1650,  1658,  1666,  1676,  1688,
    1690,  1693,  1697,  1699,  1709,  1721,  1722,  1727,  1731,  1737,
    1743,  1753,  1764,  1766,  1770,  1780,  1790,  1800,  1807,  1819,
    1828,  1829,  1831,  1834,  1836,  1840,  1846,  1854,  1859,  1864,
    1870,  1876,  1881,  1888,  1900,  1914,  1928,  1944,  1949,  1956,
    1958,  1962,  1964,  1968,  1970,  1974,  1975,  1980,  1986,  1991,
    1997,  2002,  2008,  2013,  2019,  2024,  2029,  2033,  2037,  2041,
    2044,  2048,  2053,  2058,  2060,  2064,  2065,  2070,  2071,  2075,
    2078,  2082,  2086,  2090,  2094,  2100,  2106,  2112,  2116,  2122,
    2125,  2133,  2139,  2147,  2153,  2156,  2160,  2163,  2167,  2170,
    2174,  2180,  2185,  2191,  2199,  2208,  2217,  2225,  2232,  2239,
    2245,  2246,  2250,  2256,  2257,  2259,  2260,  2263,  2266,  2267,
    2272,  2276,  2279,  2283,  2287,  2291,  2295,  2299,  2303,  2307,
    2311,  2315,  2319,  2321,  2323,  2325,  2327,  2329,  2333,  2339,
    2342,  2347,  2349,  2351,  2353,  2355,  2359,  2363,  2367,  2371,
    2377,  2383,  2385,  2387,  2389,  2393,  2397,  2398,  2400,  2402,
    2404,  2408,  2412,  2415,  2417,  2421,  2425
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     257,     0,    -1,   273,   251,    -1,   273,   251,   257,    -1,
       3,    -1,     3,   252,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   145,    -1,   258,    24,
     258,    -1,   258,    25,   258,    -1,   258,    26,   258,    -1,
     258,    27,   258,    -1,   258,    28,   258,    -1,   258,    29,
     258,    -1,    25,   258,    -1,   253,   258,   254,    -1,   258,
      12,   258,    -1,   258,    10,   258,    -1,   258,    11,   258,
      -1,   258,    21,   258,    -1,   258,    22,   258,    -1,   258,
      30,   258,    -1,   258,    23,   258,    -1,    18,   258,    -1,
      17,   258,    -1,   258,    20,   258,    -1,    -1,   258,    20,
     253,   259,   274,   254,    -1,    -1,   258,    20,    37,   253,
     260,   274,   254,    -1,    -1,   258,    20,   168,   253,   261,
     274,   254,    -1,    -1,   258,    20,    35,   253,   262,   274,
     254,    -1,   258,    15,   145,    -1,   258,    15,    18,   145,
      -1,   258,    15,     6,    -1,   258,    15,    18,     6,    -1,
       8,     9,   258,    -1,   258,    19,   258,    40,   258,    -1,
     258,    18,    19,   258,    40,   258,    -1,   258,    -1,   258,
     255,   263,    -1,    -1,   263,    -1,    -1,   258,    16,   253,
     265,   263,   254,    -1,    -1,   258,    18,    16,   253,   266,
     263,   254,    -1,    -1,   258,    16,   253,   267,   274,   254,
      -1,    -1,   258,    18,    16,   253,   268,   274,   254,    -1,
      -1,   209,   253,   269,   274,   254,    -1,     3,   253,   264,
     254,    -1,   234,   253,    26,   254,    -1,   234,   253,   258,
     254,    -1,   235,   253,   258,   254,    -1,   236,   253,   258,
     254,    -1,   237,   253,   258,   254,    -1,   238,   253,   258,
     254,    -1,   210,   253,   258,   255,   258,   255,   258,   254,
      -1,   210,   253,   258,   255,   258,   254,    -1,   210,   253,
     258,   102,   258,   254,    -1,   210,   253,   258,   102,   258,
     105,   258,   254,    -1,   211,   253,   258,   254,    -1,   211,
     253,   270,   258,   102,   258,   254,    -1,   211,   253,   270,
     102,   258,   254,    -1,   239,   253,   258,   254,    -1,   240,
     253,   258,   254,    -1,   241,   253,   258,   254,    -1,   242,
     253,   258,   255,   258,   254,    -1,   243,   253,   258,   255,
     258,   255,   258,   254,    -1,   244,   253,   258,   255,   258,
     254,    -1,   214,   253,   258,   255,   258,   254,    -1,   215,
     253,   258,   255,   258,   254,    -1,   216,   253,   258,   255,
     258,   255,   258,   254,    -1,   217,   253,   258,   255,   258,
     255,   258,   254,    -1,   218,   253,   258,   254,    -1,   219,
     253,   258,   255,   258,   254,    -1,   220,   253,   258,   255,
     258,   254,    -1,   221,   253,   258,   255,   258,   254,    -1,
     222,   253,   258,   254,    -1,   223,   253,   258,   254,    -1,
     224,   253,   258,   254,    -1,   225,   253,   258,   255,   258,
     254,    -1,   225,   253,   258,   254,    -1,   226,   253,   258,
     255,   258,   254,    -1,   227,   253,   258,   254,    -1,   228,
     253,   258,   255,   258,   254,    -1,   229,   253,   254,    -1,
     230,   253,   258,   254,    -1,   231,   253,   258,   254,    -1,
     232,   253,   258,   254,    -1,   233,   253,   254,    -1,   242,
     253,   258,   255,   258,   255,   258,   254,    -1,   242,   253,
     258,   255,   258,   255,   258,   255,   258,   254,    -1,   245,
     253,   254,    -1,   246,   253,   254,    -1,   247,   253,   254,
      -1,   248,   253,   254,    -1,   249,   253,   258,   254,    -1,
     250,   253,   258,   255,   258,   254,    -1,   130,    -1,   187,
      -1,    53,    -1,   212,   253,   258,   255,   271,   254,    -1,
     213,   253,   258,   255,   271,   254,    -1,   123,   258,    77,
      -1,   123,   258,    78,    -1,   123,   258,    82,    -1,   123,
     258,    84,    -1,   123,   258,   207,    -1,   123,   258,   206,
      -1,   123,   258,   108,    -1,   123,   258,   107,    -1,   123,
     258,   110,    -1,    62,   258,   272,    95,    -1,    62,   258,
     272,    96,   258,    95,    -1,    62,   272,    95,    -1,    62,
     272,    96,   258,    95,    -1,   204,   258,   186,   258,    -1,
     272,   204,   258,   186,   258,    -1,   258,    14,   258,    -1,
     258,    18,    14,   258,    -1,   258,    13,   258,    -1,   258,
      18,    13,   258,    -1,    57,    -1,    65,    -1,    66,    -1,
     274,    -1,   175,   288,   289,    -1,   175,   288,   289,   102,
     292,   275,   276,   280,   281,   284,   285,   286,    -1,    -1,
     203,   258,    -1,    -1,   106,    51,   277,   279,    -1,   258,
     278,    -1,   277,   255,   258,   278,    -1,    -1,    39,    -1,
      85,    -1,    -1,   205,   159,    -1,    -1,   111,   258,    -1,
      -1,   148,    51,   282,    -1,   283,    -1,   282,   255,   283,
      -1,     3,   278,    -1,     5,   278,    -1,    -1,   131,   258,
      -1,   131,   258,   255,   258,    -1,   131,   258,   133,   258,
      -1,    -1,   105,   191,    -1,   105,   166,    -1,   105,   191,
     167,   132,    -1,   105,   166,   167,   132,    -1,    -1,   121,
     287,    -1,     3,    -1,   287,   255,     3,    -1,    -1,   288,
      35,    -1,   288,    79,    -1,   288,    83,    -1,   288,   109,
      -1,   288,   172,    -1,   288,   162,    -1,   288,   170,    -1,
     288,   169,    -1,   290,    -1,   289,   255,   290,    -1,    26,
      -1,   258,   291,    -1,    41,     3,    -1,     3,    -1,    -1,
     293,    -1,   292,   255,   293,    -1,   294,    -1,   296,    -1,
       3,   291,   303,    -1,     3,   252,     3,   291,   303,    -1,
     306,   295,     3,    -1,   253,   292,   254,    -1,    41,    -1,
      -1,   293,   297,   124,   294,   301,    -1,   293,   172,   294,
      -1,   293,   172,   294,   147,   258,    -1,   293,   299,   298,
     124,   294,   302,    -1,   293,   142,   300,   124,   294,    -1,
      -1,   115,    -1,    61,    -1,    -1,   146,    -1,   129,    -1,
     160,    -1,   129,   298,    -1,   160,   298,    -1,    -1,    -1,
     302,    -1,   147,   258,    -1,   196,   253,   287,   254,    -1,
     197,   125,   304,   253,   305,   254,    -1,   116,   125,   304,
     253,   305,   254,    -1,   100,   125,   304,   253,   305,   254,
      -1,    -1,   105,   124,    -1,    -1,     3,    -1,   305,   255,
       3,    -1,   253,   274,   254,    -1,   307,    -1,    80,   308,
     102,     3,   275,   281,   284,    -1,   308,   128,    -1,   308,
     152,    -1,   308,   116,    -1,    -1,    80,   308,   309,   102,
     292,   275,    -1,     3,   310,    -1,   309,   255,     3,   310,
      -1,    -1,   252,    26,    -1,    80,   308,   102,   309,   196,
     292,   275,    -1,   311,    -1,    81,   185,     3,    -1,    81,
     185,   118,   209,     3,    -1,   312,    -1,    58,   117,     3,
     147,     3,   253,   313,   254,    -1,    58,   117,   118,   209,
       3,   147,     3,   253,   313,   254,    -1,    58,   194,   117,
       3,   147,     3,   253,   313,   254,    -1,    58,   194,   117,
     118,   209,     3,   147,     3,   253,   313,   254,    -1,    58,
     117,     3,   147,     3,   196,   198,   253,   313,   254,    -1,
      58,   117,   118,   209,     3,   147,     3,   196,   198,   253,
     313,   254,    -1,    58,   194,   117,     3,   147,     3,   196,
     198,   253,   313,   254,    -1,    58,   194,   117,   118,   209,
       3,   147,     3,   196,   198,   253,   313,   254,    -1,    58,
     117,    70,     3,   147,     3,   253,   313,   254,    -1,    58,
     117,    70,   118,   209,     3,   147,     3,   253,   313,   254,
      -1,    58,   194,   117,    70,     3,   147,     3,   253,   313,
     254,    -1,    58,   194,   117,    70,   118,   209,     3,   147,
       3,   253,   313,   254,    -1,    58,   117,    70,     3,   147,
       3,   196,   198,   253,   313,   254,    -1,    58,   194,   117,
      70,     3,   147,     3,   196,   198,   253,   313,   254,    -1,
       3,    -1,   313,   255,     3,    -1,   314,    -1,   239,   253,
       3,   254,    -1,   240,   253,     3,   254,    -1,   241,   253,
       3,   254,    -1,   242,   253,     3,   255,     3,   254,    -1,
     315,    -1,    81,   117,     3,    -1,   316,   318,    -1,   188,
     185,     3,    -1,   188,   185,     3,   255,   317,    -1,     3,
      -1,   317,   255,     3,    -1,    -1,   318,    59,    -1,   318,
     158,    -1,   318,    45,    43,    -1,   318,    44,    43,    -1,
     319,    -1,   155,   185,     3,    -1,   320,    -1,    36,   185,
       3,    -1,    36,   185,     3,   252,     3,    -1,   321,    -1,
      32,   185,     3,    33,    56,     3,    63,   253,   258,   254,
      -1,    32,   185,     3,    33,    56,     3,   194,   253,   352,
     254,    -1,    32,   185,     3,    33,    56,     3,   101,   125,
     253,   349,   254,   156,     3,   253,   350,   254,   351,    -1,
      32,   185,     3,    33,    56,     3,    63,   253,   258,   254,
      18,   199,    -1,    32,   185,     3,    33,    56,     3,   101,
     125,   253,   349,   254,   156,     3,   253,   350,   254,   351,
      18,   199,    -1,    32,   185,     3,    33,    56,     3,   151,
     125,   253,   348,   254,    -1,    32,   185,     3,    81,    56,
       3,    -1,    32,   185,     3,   157,    56,     3,   178,     3,
      -1,    32,   185,     3,    91,    56,     3,    -1,    32,   185,
       3,    74,    56,     3,    -1,    32,   185,     3,   199,    56,
       3,    -1,    32,   185,     3,    33,    69,     3,   359,   354,
     322,    -1,    32,   185,     3,    81,    69,     3,    -1,    32,
     185,     3,    81,     3,    -1,    32,   185,     3,   157,    69,
       3,   178,     3,    -1,    32,   185,     3,   157,     3,   178,
       3,    -1,    32,   185,     3,   139,    69,     3,   359,   354,
     322,    -1,    32,   185,     3,   139,     3,   359,   354,   322,
      -1,    32,   185,     3,    60,    69,     3,     3,   359,   354,
     322,    -1,    32,   185,     3,    60,     3,     3,   359,   354,
     322,    -1,    -1,    98,    -1,    34,     3,    -1,   323,    -1,
     119,   325,   326,     3,   327,   201,   329,   324,    -1,   119,
     325,   326,     3,   327,   274,    -1,    -1,   149,   125,   191,
     332,    -1,    -1,   325,   128,    -1,   325,    76,    -1,   325,
     109,    -1,   325,   116,    -1,   121,    -1,    -1,    -1,   253,
     328,   254,    -1,     3,    -1,   328,   255,     3,    -1,   253,
     331,   254,    -1,    -1,   329,   255,   330,   253,   331,   254,
      -1,   258,    -1,    86,    -1,   331,   255,   258,    -1,   331,
     255,    86,    -1,   119,   325,   326,     3,   174,   332,   324,
      -1,     3,    20,   258,    -1,     3,    20,    86,    -1,   332,
     255,     3,    20,   258,    -1,   332,   255,     3,    20,    86,
      -1,   333,    -1,   161,   325,   326,     3,   327,   201,   329,
     324,    -1,   161,   325,   326,     3,   174,   332,   324,    -1,
     161,   325,   326,     3,   327,   274,   324,    -1,   334,    -1,
     191,   335,   292,   174,   336,   275,   281,   284,    -1,    -1,
     325,   128,    -1,   325,   116,    -1,     3,    20,   258,    -1,
       3,   252,     3,    20,   258,    -1,   336,   255,     3,    20,
     258,    -1,   336,   255,     3,   252,     3,    20,   258,    -1,
     157,   185,     3,   178,     3,    -1,   337,    -1,    58,    71,
     338,     3,    -1,    58,   163,   338,     3,    -1,    81,    71,
       3,    -1,    81,    71,   118,   209,     3,    -1,    81,   163,
       3,    -1,    81,   163,   118,   209,     3,    -1,    -1,   118,
     209,    -1,   339,    -1,    58,    75,     3,    41,   359,    -1,
      58,    75,     3,    41,   359,    86,   258,    -1,    58,    75,
       3,    41,   359,    18,   145,    -1,    58,    75,     3,    41,
     359,    63,   253,   258,   254,    -1,    58,    75,     3,    41,
     359,    18,   145,    63,   253,   258,   254,    -1,   340,    -1,
     197,     3,    -1,   197,    71,     3,    -1,   341,    -1,    58,
     345,   185,   338,     3,   253,   346,   254,   342,    -1,    58,
     345,   185,   338,     3,   252,     3,   253,   346,   254,   342,
      -1,    -1,   342,    38,    20,     5,    -1,   342,    38,     5,
      -1,   342,   147,     3,    80,     3,    -1,   342,   147,     3,
     181,     3,    -1,   342,   164,    51,   198,   253,     3,   254,
     165,     5,    -1,   342,   164,    51,   153,   253,     3,   254,
     253,   343,   254,    -1,   344,    -1,   343,   255,   344,    -1,
     164,     3,   201,   126,   183,     4,   147,   143,     5,    -1,
     164,     3,   201,   126,   183,   136,   147,   143,     5,    -1,
      58,   345,   185,   338,     3,   253,   346,   254,   361,    -1,
      58,   345,   185,   338,     3,   361,    -1,    58,   345,   185,
     338,     3,   252,     3,   253,   346,   254,   361,    -1,    58,
     345,   185,   338,     3,   252,     3,   361,    -1,    -1,   179,
      -1,   180,   179,    -1,   347,    -1,   346,   255,   347,    -1,
     151,   125,   253,   348,   254,    -1,    56,     3,   151,   125,
     253,   348,   254,    -1,   125,   253,   287,   254,    -1,   117,
     253,   287,   254,    -1,   104,   117,   253,   287,   254,    -1,
     104,   125,   253,   287,   254,    -1,    63,   253,   258,   254,
      -1,    56,     3,    63,   253,   258,   254,    -1,   101,   125,
     253,   349,   254,   156,     3,   253,   350,   254,   351,    -1,
     101,   125,   253,   349,   254,   156,     3,   252,     3,   253,
     350,   254,   351,    -1,    56,     3,   101,   125,   253,   349,
     254,   156,     3,   253,   350,   254,   351,    -1,    56,     3,
     101,   125,   253,   349,   254,   156,     3,   252,     3,   253,
     350,   254,   351,    -1,   194,   253,   352,   254,    -1,    56,
       3,   194,   253,   352,   254,    -1,     3,    -1,   348,   255,
       3,    -1,     3,    -1,   349,   255,     3,    -1,     3,    -1,
     350,   255,     3,    -1,    -1,   351,   147,    80,    59,    -1,
     351,   147,    80,   174,   145,    -1,   351,   147,    80,   158,
      -1,   351,   147,    80,   174,    86,    -1,   351,   147,   191,
      59,    -1,   351,   147,   191,   174,   145,    -1,   351,   147,
     191,   158,    -1,   351,   147,   191,   174,    86,    -1,   351,
     147,    80,   144,    -1,   351,   147,   191,   144,    -1,   351,
     135,   103,    -1,   351,   135,   171,    -1,   351,   135,   150,
      -1,   351,    72,    -1,   351,    18,    72,    -1,   351,    72,
     113,    73,    -1,   351,    72,   113,   112,    -1,     3,    -1,
     352,   255,     3,    -1,    -1,   353,     3,   359,   354,    -1,
      -1,   354,    18,   145,    -1,   354,   145,    -1,   354,    86,
       4,    -1,   354,    86,     5,    -1,   354,    86,     7,    -1,
     354,    86,     6,    -1,   354,    86,   245,   253,   254,    -1,
     354,    86,   246,   253,   254,    -1,   354,    86,   247,   253,
     254,    -1,   354,    86,    57,    -1,   354,    86,   253,   258,
     254,    -1,   354,    38,    -1,   354,    38,   253,     5,   255,
       5,   254,    -1,   354,    38,   253,     5,   254,    -1,   354,
      43,   253,     5,   255,     5,   254,    -1,   354,    43,   253,
       5,   254,    -1,   354,    43,    -1,   354,   194,   125,    -1,
     354,   194,    -1,   354,   151,   125,    -1,   354,   125,    -1,
     354,    64,     4,    -1,   354,    63,   253,   258,   254,    -1,
     354,    56,     3,   194,    -1,   354,    56,     3,   151,   125,
      -1,   354,    56,     3,    63,   253,   258,   254,    -1,   354,
      46,    42,    41,   253,   258,   254,    47,    -1,   354,    46,
      42,    41,   253,   258,   254,    48,    -1,   354,    46,    42,
      41,   253,   258,   254,    -1,   354,    41,   253,   258,   254,
      47,    -1,   354,    41,   253,   258,   254,    48,    -1,   354,
      41,   253,   258,   254,    -1,    -1,   253,     5,   254,    -1,
     253,     5,   255,     5,   254,    -1,    -1,    52,    -1,    -1,
     357,   192,    -1,   357,   208,    -1,    -1,   358,    67,   174,
       4,    -1,   358,    68,     4,    -1,    55,   355,    -1,   177,
     355,   357,    -1,   173,   355,   357,    -1,   141,   355,   357,
      -1,   122,   355,   357,    -1,   114,   355,   357,    -1,    54,
     355,   357,    -1,   154,   355,   357,    -1,    87,   355,   357,
      -1,    99,   355,   357,    -1,    89,   355,   357,    -1,    90,
      -1,   190,    -1,   184,    -1,    88,    -1,   206,    -1,    67,
     355,   358,    -1,   200,   253,     5,   254,   358,    -1,    52,
     355,    -1,   202,   253,     5,   254,    -1,   189,    -1,    49,
      -1,   140,    -1,   134,    -1,   176,   356,   358,    -1,   182,
     356,   358,    -1,   137,   356,   358,    -1,   127,   356,   358,
      -1,    94,   253,   360,   254,   358,    -1,   174,   253,   360,
     254,   358,    -1,    50,    -1,   195,    -1,     4,    -1,   360,
     255,     4,    -1,   362,   295,   274,    -1,    -1,   116,    -1,
     161,    -1,   363,    -1,   174,   163,     3,    -1,   174,   163,
      86,    -1,   174,   364,    -1,   365,    -1,   364,   255,   365,
      -1,     8,    20,   258,    -1,     8,     9,   258,    -1
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
     555,   556,   557,   564,   571,   578,   582,   586,   592,   593,
     594,   597,   598,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   612,   614,   616,   618,   622,   630,   641,   642,
     645,   646,   649,   657,   665,   676,   686,   687,   701,   702,
     703,   704,   707,   714,   722,   723,   724,   727,   728,   731,
     732,   735,   736,   739,   740,   743,   749,   758,   759,   760,
     761,   764,   765,   766,   767,   768,   771,   772,   775,   776,
     779,   780,   781,   782,   783,   784,   785,   786,   787,   790,
     791,   792,   800,   806,   807,   808,   811,   812,   815,   816,
     820,   827,   828,   829,   832,   833,   837,   839,   841,   843,
     845,   849,   850,   851,   854,   855,   858,   859,   862,   863,
     864,   867,   868,   871,   872,   876,   878,   880,   882,   885,
     886,   889,   890,   893,   897,   907,   915,   916,   917,   918,
     922,   926,   928,   932,   932,   934,   939,   946,   953,   963,
     970,   977,   987,   995,  1005,  1013,  1022,  1031,  1041,  1049,
    1058,  1067,  1077,  1086,  1098,  1103,  1108,  1114,  1121,  1128,
    1135,  1145,  1152,  1161,  1168,  1174,  1182,  1188,  1196,  1197,
    1198,  1199,  1200,  1204,  1211,  1220,  1227,  1233,  1244,  1247,
    1253,  1259,  1266,  1272,  1279,  1285,  1291,  1297,  1303,  1309,
    1315,  1321,  1327,  1333,  1339,  1345,  1351,  1357,  1363,  1371,
    1372,  1373,  1376,  1384,  1390,  1403,  1404,  1407,  1408,  1409,
    1410,  1411,  1414,  1414,  1417,  1418,  1421,  1431,  1444,  1445,
    1445,  1448,  1449,  1450,  1451,  1454,  1458,  1459,  1460,  1461,
    1467,  1470,  1476,  1481,  1487,  1495,  1504,  1505,  1506,  1510,
    1521,  1533,  1544,  1559,  1564,  1568,  1569,  1573,  1575,  1577,
    1579,  1583,  1584,  1588,  1592,  1594,  1596,  1598,  1600,  1605,
    1609,  1610,  1614,  1623,  1633,  1637,  1638,  1639,  1640,  1641,
    1642,  1644,  1648,  1649,  1652,  1667,  1674,  1689,  1702,  1717,
    1730,  1731,  1732,  1735,  1736,  1739,  1740,  1741,  1742,  1743,
    1744,  1745,  1746,  1747,  1749,  1751,  1753,  1755,  1757,  1761,
    1762,  1765,  1766,  1769,  1770,  1773,  1774,  1775,  1776,  1777,
    1778,  1779,  1780,  1781,  1782,  1783,  1784,  1785,  1786,  1787,
    1788,  1789,  1790,  1793,  1794,  1797,  1797,  1807,  1808,  1809,
    1810,  1811,  1812,  1813,  1814,  1815,  1816,  1817,  1818,  1825,
    1826,  1827,  1828,  1829,  1830,  1831,  1832,  1833,  1834,  1835,
    1836,  1837,  1838,  1839,  1840,  1841,  1842,  1843,  1844,  1845,
    1848,  1849,  1850,  1853,  1854,  1857,  1858,  1859,  1862,  1863,
    1864,  1868,  1869,  1870,  1871,  1872,  1873,  1874,  1875,  1876,
    1877,  1878,  1879,  1880,  1881,  1882,  1883,  1884,  1885,  1886,
    1887,  1888,  1889,  1890,  1891,  1892,  1893,  1894,  1895,  1896,
    1897,  1898,  1899,  1902,  1903,  1906,  1919,  1920,  1921,  1925,
    1928,  1929,  1930,  1931,  1931,  1933,  1934
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
  "FDATE_ADD", "FDATE_SUB", "FLEFT", "FRIGHT", "FLPAD", "FRPAD",
  "FREVERSE", "FREPEAT", "FINSTR", "FLOCATE", "FABS", "FCEIL", "FFLOOR",
  "FROUND", "FPOWER", "FSQRT", "FMOD", "FRAND", "FLOG", "FLOG10", "FSIGN",
  "FPI", "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER", "FLOWER",
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
     496,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   256,   257,   257,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     259,   258,   260,   258,   261,   258,   262,   258,   258,   258,
     258,   258,   258,   258,   258,   263,   263,   264,   264,   265,
     258,   266,   258,   267,   258,   268,   258,   269,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   270,   270,
     270,   258,   258,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   258,   258,   258,   258,   272,   272,   258,   258,
     258,   258,   258,   258,   258,   273,   274,   274,   275,   275,
     276,   276,   277,   277,   278,   278,   278,   279,   279,   280,
     280,   281,   281,   282,   282,   283,   283,   284,   284,   284,
     284,   285,   285,   285,   285,   285,   286,   286,   287,   287,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   289,
     289,   289,   290,   291,   291,   291,   292,   292,   293,   293,
     294,   294,   294,   294,   295,   295,   296,   296,   296,   296,
     296,   297,   297,   297,   298,   298,   299,   299,   300,   300,
     300,   301,   301,   302,   302,   303,   303,   303,   303,   304,
     304,   305,   305,   306,   273,   307,   308,   308,   308,   308,
     307,   309,   309,   310,   310,   307,   273,   311,   311,   273,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   313,   313,   313,   314,   314,   314,
     314,   273,   315,   273,   316,   316,   317,   317,   318,   318,
     318,   318,   318,   273,   319,   273,   320,   320,   273,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   322,
     322,   322,   273,   323,   323,   324,   324,   325,   325,   325,
     325,   325,   326,   326,   327,   327,   328,   328,   329,   330,
     329,   331,   331,   331,   331,   323,   332,   332,   332,   332,
     273,   333,   333,   333,   273,   334,   335,   335,   335,   336,
     336,   336,   336,   273,   273,   337,   337,   273,   273,   273,
     273,   338,   338,   273,   339,   339,   339,   339,   339,   273,
     340,   340,   273,   341,   341,   342,   342,   342,   342,   342,
     342,   342,   343,   343,   344,   344,   341,   341,   341,   341,
     345,   345,   345,   346,   346,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   348,
     348,   349,   349,   350,   350,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   352,   352,   353,   347,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     355,   355,   355,   356,   356,   357,   357,   357,   358,   358,
     358,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   360,   360,   361,   362,   362,   362,   273,
     363,   363,   363,   364,   364,   365,   365
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
       8,    10,     3,     3,     3,     3,     4,     6,     1,     1,
       1,     6,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     6,     3,     5,     4,     5,     3,     4,
       3,     4,     1,     1,     1,     1,     3,    12,     0,     2,
       0,     4,     2,     4,     0,     1,     1,     0,     2,     0,
       2,     0,     3,     1,     3,     2,     2,     0,     2,     4,
       4,     0,     2,     2,     4,     4,     0,     2,     1,     3,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       3,     1,     2,     2,     1,     0,     1,     3,     1,     1,
       3,     5,     3,     3,     1,     0,     5,     3,     5,     6,
       5,     0,     1,     1,     0,     1,     1,     1,     2,     2,
       0,     0,     1,     2,     4,     6,     6,     6,     0,     2,
       0,     1,     3,     3,     1,     7,     2,     2,     2,     0,
       6,     2,     4,     0,     2,     7,     1,     3,     5,     1,
       8,    10,     9,    11,    10,    12,    11,    13,     9,    11,
      10,    12,    11,    12,     1,     3,     1,     4,     4,     4,
       6,     1,     3,     2,     3,     5,     1,     3,     0,     2,
       2,     3,     3,     1,     3,     1,     3,     5,     1,    10,
      10,    17,    12,    19,    11,     6,     8,     6,     6,     6,
       9,     6,     5,     8,     7,     9,     8,    10,     9,     0,
       1,     2,     1,     8,     6,     0,     4,     0,     2,     2,
       2,     2,     1,     0,     0,     3,     1,     3,     3,     0,
       6,     1,     1,     3,     3,     7,     3,     3,     5,     5,
       1,     8,     7,     7,     1,     8,     0,     2,     2,     3,
       5,     5,     7,     5,     1,     4,     4,     3,     5,     3,
       5,     0,     2,     1,     5,     7,     7,     9,    11,     1,
       2,     3,     1,     9,    11,     0,     4,     3,     5,     5,
       9,    10,     1,     3,     9,     9,     9,     6,    11,     8,
       0,     1,     2,     1,     3,     5,     7,     4,     4,     5,
       5,     4,     6,    11,    13,    13,    15,     4,     6,     1,
       3,     1,     3,     1,     3,     0,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     4,     3,     3,     3,     2,
       3,     4,     4,     1,     3,     0,     4,     0,     3,     2,
       3,     3,     3,     3,     5,     5,     5,     3,     5,     2,
       7,     5,     7,     5,     2,     3,     2,     3,     2,     3,
       5,     4,     5,     7,     8,     8,     7,     6,     6,     5,
       0,     3,     5,     0,     1,     0,     2,     2,     0,     4,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     3,     5,     2,
       4,     1,     1,     1,     1,     3,     3,     3,     3,     5,
       5,     1,     1,     1,     3,     3,     0,     1,     1,     1,
       3,     3,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   380,   229,     0,   307,     0,     0,   307,
       0,   170,     0,   307,     0,     0,     0,   135,   224,   236,
     239,   261,   268,   273,   275,   278,   302,   330,   334,   344,
     353,   359,   362,   509,     0,     0,   351,     0,     0,   351,
     381,     0,     0,     0,     0,     0,     0,     0,     0,   313,
       0,     0,   313,     0,     0,   512,   513,     0,     0,     0,
       0,   360,     0,     1,     2,   263,     0,   276,     0,     0,
       0,     0,     0,     0,     0,   382,     0,   351,   233,     0,
     228,   226,   227,     0,   347,     0,   262,   349,     0,   237,
       0,   309,   310,   311,   312,   308,     0,   274,     0,     0,
       0,     0,   510,   511,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   181,   171,   132,     0,   133,   134,
     172,   173,   174,    11,   176,   178,   177,   175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   185,   136,   179,   264,   311,   308,   185,     0,     0,
     186,   188,   189,   195,   361,     3,     0,     0,   269,   270,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     345,     0,     0,     0,     0,     0,   346,     0,     0,     0,
       0,     0,   231,   138,     0,     0,     0,     0,     0,     0,
     314,     0,   314,   516,   515,   514,     0,    47,     0,    28,
      27,    18,     0,     0,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   184,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     182,     0,     0,     0,     0,   218,     0,     0,     0,     0,
     203,   202,   206,   210,   207,     0,     0,   204,   194,     0,
     272,   271,     0,     0,     0,     0,     0,   292,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277,   492,   501,
     460,   460,   460,   460,   460,   485,   460,   482,     0,   460,
     460,   460,   463,   494,   463,   493,   460,   460,   460,     0,
     463,   460,   463,   484,   491,   483,   502,     0,     0,   486,
     354,     0,     0,     0,     0,     0,     0,     0,     0,   506,
     234,     0,   151,     0,   138,   233,   348,   350,   238,     0,
       0,     0,   343,     0,     0,     5,    45,    48,     0,    42,
       0,     0,   124,     0,     0,     0,     0,   110,   108,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   105,
       0,     0,    19,    21,    22,    20,   130,   128,    40,     0,
      38,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    29,    23,    24,    26,    12,    13,    14,    15,    16,
      17,    25,   183,   138,   180,   266,   265,   185,     0,     0,
       0,   190,   223,   193,     0,   138,   187,   204,   204,     0,
     197,     0,   205,     0,   192,     0,     0,     0,     0,   288,
     285,   291,   287,   427,     0,     0,     0,     0,   289,     0,
     489,   465,   471,   468,   465,   465,     0,   465,   465,   465,
     464,   468,   468,   465,   465,   465,     0,   468,   465,   468,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   507,   508,     0,   425,   377,   195,
     139,     0,   157,   138,   230,   232,     0,   305,   316,     0,
       0,   304,   305,     0,   305,     0,    59,     0,   122,     0,
       0,     0,     0,     0,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,    87,    88,
      89,    91,     0,     0,    93,     0,    96,    97,    98,    60,
      61,    62,    63,    64,    65,    73,    74,    75,     0,     0,
       0,   106,     0,    41,    39,     0,     0,   131,   129,    51,
       0,     0,    36,    32,    34,     0,   140,     0,   218,   220,
     220,   220,     0,     0,     0,   151,   208,   209,     0,     0,
     211,     0,     0,     0,     0,     0,   427,   427,     0,   299,
     427,   294,     0,     0,     0,   477,   487,   479,   481,   503,
       0,   480,   476,   475,   498,   497,   474,   478,   473,     0,
     495,   472,   496,     0,     0,   356,     0,   355,     0,   254,
       0,     0,     0,     0,     0,   256,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   506,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   383,     0,     0,     0,     0,
     225,   235,     0,     0,     0,   325,   315,     0,     0,   305,
     332,   305,   333,    46,   126,     0,   125,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,   149,   267,   191,     0,     0,     0,     0,   339,     0,
       0,   157,   200,   198,     0,     0,   196,   212,     0,     0,
       0,     0,     0,   299,   299,   427,     0,     0,   439,     0,
     444,     0,     0,     0,     0,     0,   300,   448,   429,     0,
     446,   296,   299,   286,   293,   461,     0,   466,   467,     0,
       0,   468,     0,   468,   468,   490,     0,     0,     0,     0,
       0,     0,     0,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   425,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   365,   425,     0,
     505,   144,   144,   152,   153,   158,   327,   326,     0,     0,
     317,   322,   321,     0,   319,   303,   331,   123,   127,     0,
      68,    67,     0,    72,     0,     0,   111,   112,    79,    80,
       0,     0,    84,    85,    86,    90,    92,    94,    76,     0,
       0,    78,   107,    50,    54,     0,     0,    44,     0,     0,
       0,    31,     0,     0,   151,   219,     0,     0,     0,     0,
       0,     0,   335,   213,     0,   199,     0,     0,     0,   423,
       0,   290,   298,   299,   428,   301,     0,     0,     0,     0,
       0,     0,   449,   430,   431,   433,   432,   437,     0,     0,
       0,     0,   447,   445,   295,     0,     0,   470,   499,   504,
     500,   488,     0,   357,     0,     0,     0,     0,     0,   255,
       0,   248,     0,     0,     0,     0,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,     0,     0,     0,     0,   363,   376,   384,   427,
     145,   146,   155,   156,     0,     0,     0,     0,     0,   318,
       0,     0,     0,     0,    71,   113,   114,   115,   116,   120,
     119,   121,   118,   117,     0,     0,     0,     0,    52,    56,
      37,    33,    35,   144,   147,   150,   157,   221,     0,     0,
       0,   340,   341,     0,     0,   279,   401,     0,   399,     0,
     280,     0,   297,     0,     0,     0,     0,     0,     0,   451,
       0,     0,     0,     0,     0,   462,   469,     0,   244,   257,
     258,   259,     0,     0,     0,     0,   241,     0,     0,   250,
       0,     0,     0,   365,     0,     0,     0,     0,   391,     0,
       0,     0,   388,     0,   387,     0,   397,     0,     0,     0,
     426,   154,   160,   159,   306,   329,   328,   324,   323,     0,
      69,    66,    81,    82,   100,     0,    77,   142,     0,     0,
     141,   161,   217,     0,   216,   215,     0,   214,     0,     0,
       0,   284,     0,   424,   441,     0,   459,   443,     0,     0,
       0,   452,   450,   434,   435,   436,   438,   358,     0,   252,
     249,     0,   246,     0,     0,     0,   243,   364,   378,     0,
       0,     0,     0,     0,   389,   390,   169,   385,   367,     0,
       0,     0,     0,     0,   148,   144,     0,   166,   222,   342,
     282,     0,   402,   400,     0,   457,   458,     0,     0,     0,
     260,   245,   253,   251,     0,   392,     0,     0,   398,     0,
     366,     0,     0,     0,     0,   320,   101,   143,   163,   162,
       0,   137,     0,   440,   442,   456,   453,   247,     0,   386,
       0,   368,   369,     0,     0,     0,     0,   167,     0,   454,
     455,     0,     0,     0,     0,     0,   165,   164,   403,     0,
       0,     0,     0,     0,     0,   405,     0,     0,     0,     0,
     405,     0,     0,   281,   404,     0,     0,     0,   393,     0,
       0,   372,   370,     0,   419,     0,     0,     0,   405,   405,
       0,     0,   371,     0,   420,   283,     0,   416,   418,   417,
       0,     0,     0,   395,   394,     0,   373,   421,   422,   406,
     414,   408,     0,   410,   415,   412,     0,   405,     0,   409,
     407,   413,   411,   396,     0,     0,     0,     0,     0,     0,
       0,   374,   375
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,   396,   635,   767,   768,   766,   397,   398,   625,
     762,   626,   763,   405,   411,   744,   234,    16,    17,   382,
     771,  1034,  1002,  1120,   914,   562,   863,   864,   720,  1177,
    1211,   992,    57,   172,   173,   300,   179,   180,   181,   319,
     182,   316,   503,   317,   499,   786,   787,   491,   775,  1038,
     183,    18,    44,    83,   212,    19,    20,   694,   695,    21,
      22,   486,    65,    23,    24,    25,   811,    26,   725,    49,
      96,   391,   569,   729,  1011,   873,   567,    27,    28,    60,
     495,    29,    69,    30,    31,    32,   996,  1260,  1261,    43,
     714,   715,  1049,  1047,  1239,  1253,   930,   716,   659,   520,
     531,   665,   666,   370,   670,   558,   559,    33,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -959
static const yytype_int16 yypact[] =
{
    3759,   -66,   -43,   397,  -959,   212,  -959,   -34,   153,  -959,
      53,  -959,   173,    13,   299,   128,   229,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,   361,   460,   410,   544,    54,   410,
    -959,   385,   442,   328,    25,    48,   580,   131,   146,   466,
     587,   594,   466,   331,    59,   325,  -959,   745,   600,   368,
      14,  -959,   654,  -959,  3759,   254,   319,   341,   377,   722,
     629,   581,   160,   526,   758,  -959,    60,   410,   481,   766,
    -959,  -959,  -959,    16,  -959,   574,  -959,  -959,   578,  -959,
     592,  -959,  -959,  -959,  -959,  -959,   802,  -959,   634,   816,
    2292,  2292,  -959,  -959,   815,   213,  -959,  -959,  -959,  -959,
     826,  2292,  2292,  2292,  -959,  -959,  -959,  1355,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,   588,   621,
     628,   632,   633,   635,   636,   638,   639,   640,   643,   644,
     645,   646,   647,   650,   651,   653,   655,   656,   657,   658,
     659,   660,   663,   672,   686,   687,   688,   689,   693,   694,
     697,   699,   743,   744,   746,   747,   754,   755,   756,   757,
    2292,  3843,    21,  -959,   596,    15,    19,    17,    39,   122,
     193,  -959,  -959,   818,  -959,  -959,   844,   859,  -959,  -959,
     265,    62,   887,   313,   955,   304,   320,   956,  1010,  -959,
    -959,  3872,  1011,   870,   809,  1016,  -959,   873,   167,   812,
    1019,   999,  -959,   314,   113,    14,  1021,  1023,  1032,  1046,
    -121,  1047,  -110,  4009,  4009,  -959,  1050,  2292,  2292,   624,
     624,  -959,  2292,  3750,   195,  -959,  2292,   998,  2292,  2292,
    2292,  2292,  2292,  2292,  2292,  2292,  2292,  2292,  2292,  2292,
    2292,  2292,  2292,  2292,  2292,   800,  2292,  2292,  2292,   803,
    1401,  2292,  2292,  2292,  2292,  2292,  2292,  2292,  2292,  2292,
    2292,   805,   807,   811,   813,  2292,  2292,  2590,  -959,  2292,
    2292,  2292,  2292,  2292,    23,   827,   565,  2292,  1104,  2292,
    2292,  2292,  2292,  2292,  2292,  2292,  2292,  2292,  2292,  1053,
    -959,    14,  2292,  1063,  1065,   181,   837,   215,  1078,    14,
    -959,  -959,  -959,   155,  -959,    14,   981,   960,  -959,  1110,
    -959,  -959,  1111,  1112,  1113,  1114,  1115,  -959,  1116,  1117,
    1120,  3872,  1121,   947,  1123,  1124,  1137,  -959,  -959,  -959,
     889,   889,   889,   889,   889,  -959,   889,  -959,   891,   889,
     889,   889,  1093,  -959,  1093,  -959,   889,   889,   889,   893,
    1093,   889,  1093,  -959,  -959,  -959,  -959,   894,   895,  -959,
     276,   148,  1146,  1147,  1004,  1149,  1006,   945,  1152,    -1,
    -959,  2292,  1008,    14,   111,   481,  -959,  -959,  -959,  1154,
    1155,   310,  -959,  1154,   311,  -959,   690,  -959,   905,  4009,
    1074,   205,  -959,  2292,  2292,   985,    57,  -959,  -959,  -959,
    2612,  1652,   908,  1018,  1168,  1264,  1418,  1458,  2658,  1483,
    1510,  1721,  2679,  2700,  2721,    82,  1788,  2742,  1809,  -959,
    2774,  2802,  2827,  -959,   910,  2849,  2870,  2895,  2916,  2937,
    2958,  2979,  3011,  2085,  2106,  2352,  -959,  -959,  -959,  -959,
    3039,  2374,  -959,  4145,  4164,  1282,  1753,  1753,  -959,    29,
    -959,   987,  2292,  2292,   912,  2292,  4091,   914,   915,   918,
    2292,  1049,  1108,   649,   730,   528,   528,  1142,  1142,  1142,
    1142,  -959,  -959,   111,  -959,  -959,   919,   395,  1048,  1051,
    1052,  -959,  -959,  -959,     4,   129,   193,   960,   960,  1075,
    1028,    14,  -959,  1076,  -959,   192,  3872,  3872,  1198,  -959,
    -959,  -959,  -959,  -959,  3872,  1199,  1025,  1026,  -959,  1200,
    -959,  -959,  -959,  -959,  -959,  -959,  1202,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  1202,  -959,  -959,  -959,
    1245,  1247,  1109,  1000,  2292,  1057,    20,   266,  1118,  1253,
     271,  1254,  1255,  1119,  -959,  -959,  1256,   270,  -959,   818,
    4009,  1210,  1131,   111,  -959,  -959,  1243,   -90,  -959,   228,
    1014,  -959,   -90,  1014,  1122,  2292,  -959,  2292,  -959,  2292,
    1967,  1371,  1015,  2292,  2292,  -959,  2292,  1668,  1141,  1141,
    2292,  2292,  2292,  2292,  -959,  2292,  2292,  2292,  -959,  -959,
    -959,  -959,  2292,  2292,  -959,  2292,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  2292,  2292,
    2292,  -959,  2292,  -959,  -959,  2292,   985,  1753,  1753,  1095,
    4122,  2292,  -959,  -959,  -959,   985,  1162,  1278,   181,  1194,
    1194,  1194,  2292,  1352,  1353,  1008,  -959,  -959,    14,  2292,
     163,    14,  1125,  1239,  1240,  1126,  -959,  -959,  3872,   750,
    -959,  -959,  1363,  1364,   296,   -71,   500,   -71,   -71,  -959,
     334,   -71,   -71,   -71,   500,   500,   -71,   -71,   -71,   347,
     500,   -71,   500,  1134,  1148,  1305,  2292,  4009,  1150,  -959,
    1157,  1158,  1160,  1161,   353,  -959,  1171,    20,  1367,   277,
    1173,    20,   278,  1227,  1372,     0,  1373,  1163,  1252,   424,
    1169,  1172,  1290,  1182,   356,  -959,  1421,   985,   389,  2292,
    -959,  -959,  1698,  1324,  1447,  -959,  -959,  1448,  1949,   101,
    -959,   101,  -959,  -959,  4009,  2264,  -959,  2292,  -959,  2557,
     404,  3064,  2292,  2292,  1201,  1203,  3086,  3107,  2395,  2420,
    3132,  3153,  3174,  3195,  3216,  3248,   427,  2536,  3276,  3301,
    1205,  1206,  2292,   985,  2292,   667,   985,   985,   985,  1207,
    1402,  1341,  -959,  -959,  1330,  1209,  1211,  1212,  4009,  1436,
       5,  1131,  -959,  4009,  2292,  1222,  -959,  -959,   163,  2292,
    1236,  1237,  1488,   750,   750,  -959,  1347,  1511,  1262,  1263,
    1265,  1475,  1524,  1288,  1538,    42,  -959,  -959,  -959,  1419,
    1420,  -959,   750,  -959,  -959,  -959,  1542,  -959,  -959,  1369,
    1544,  -959,  1545,  -959,  -959,  -959,  1297,  3323,    20,  1548,
    1549,  1550,  1551,  -959,  1552,  1303,   359,  1307,  1360,    20,
    1308,   363,  1365,    20,  1559,   279,   270,  -959,   210,  2292,
    1354,  1356,  1399,  1603,  1603,  1400,  1488,   188,   270,  3872,
    -959,   396,   396,  1406,  -959,   479,  -959,  4009,  1471,  1643,
    -959,  -959,  4009,   401,  -959,  -959,  -959,  -959,  4009,  2292,
    -959,  -959,  2292,  -959,  3344,  3722,  -959,  -959,  -959,  -959,
    2292,  2292,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  2292,
    2292,  -959,  -959,  -959,  -959,  1410,  1411,   667,  1412,  1413,
    1414,  -959,  2292,  2292,  1008,  -959,  1669,  1669,  1669,  2292,
    2292,  1671,  -959,  4009,  1603,  -959,  3369,  1672,  1673,  -959,
     406,  -959,  -959,   750,  -959,  -959,  1666,  2292,  1680,  1658,
     -25,  2292,  -959,  -959,  -959,  -959,  -959,  -959,  1454,  1455,
    1457,  2292,  -959,  -959,  -959,  1446,  1707,  -959,   500,  -959,
     500,   500,  2292,  -959,   409,  1465,  1466,  1467,  1469,  -959,
      20,  -959,    20,  1459,   412,    20,  -959,  1472,   414,  1473,
    1529,    20,   429,  1476,  1597,  1605,  1499,  3390,  1672,  1603,
    1603,  -959,   444,   485,  1673,   488,   118,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,   389,  2292,  2292,  1154,  1995,  -959,
    2246,  1500,  3411,  3432,  -959,  -959,  -959,  -959,  -959,  -959,
    -959,  -959,  -959,  -959,  3453,  3485,   612,  3513,  -959,  -959,
    -959,  -959,  -959,  4069,  -117,  4009,  1131,  -959,   490,   492,
     510,  4009,  4009,  1708,   512,  1738,  -959,   518,  -959,   520,
    -959,  1754,  -959,   522,  3538,   524,  1505,  1506,  1636,  -959,
    3560,  1508,  1531,  1532,  3581,  -959,  -959,  3606,  -959,  -959,
    -959,  -959,  1784,   527,   531,    20,  -959,   535,    20,  -959,
      20,  1535,   540,   188,  2292,  1536,  1537,  1488,  -959,   543,
     545,   549,  -959,  1789,  -959,   554,  -959,   109,  1790,  1740,
    3764,  -959,  4009,  4009,  1539,  -959,  4009,  -959,  4009,  1949,
    -959,  -959,  -959,  -959,  -959,  2292,  -959,  -959,  1637,  2292,
    -959,  1690,  -959,  1802,  -959,  -959,  2292,  -959,  1627,  1684,
    1838,  -959,  1839,  -959,  -959,  1840,   768,  -959,  1841,  2292,
    2292,  -959,  -959,  -959,  -959,  -959,  -959,  -959,  1590,  -959,
    -959,   563,  -959,   566,   572,    20,  -959,   118,  -959,  3627,
    1672,  1673,   575,  1691,  -959,  -959,  -959,  -959,  -959,  1843,
     -14,   -36,   577,  3648,  -959,  4069,   164,  1728,  -959,  4009,
    -959,  1847,  -959,  -959,  1598,  -959,  -959,  1599,  3669,  3690,
    -959,  -959,  -959,  -959,   583,  -959,   585,   590,  -959,  1848,
    -959,  1851,  1852,  1604,  1606,  -959,  -959,  -959,  1689,  1693,
    1603,  -959,  1650,  -959,  -959,   799,  -959,  -959,  1702,  -959,
     597,  -959,  -959,  1901,  1903,  1817,  1818,  1703,  1956,  -959,
    -959,  1957,  1958,  1956,  1709,  1710,  -959,  -959,  -959,   598,
     605,  1712,   606,  1715,  1797,  -959,  1966,  1968,  1956,  1956,
    -959,  1806,  1970,   256,  -959,  1719,   610,   614,   324,  1981,
     616,  -959,  -959,   -45,  1860,   217,   -41,  1956,  -959,  -959,
    1932,  1804,  -959,  1806,  -959,  -959,    52,  -959,  -959,  -959,
     -22,   183,   618,   324,   324,  1881,  -959,  -959,  -959,  -959,
    -959,  -959,   245,  -959,  -959,  -959,   316,  -959,  1825,  -959,
    -959,  -959,  -959,   324,    22,  1862,  1863,  1873,  1874,  2013,
    2014,  -959,  -959
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -959,  1959,   -57,  -959,  -959,  -959,  -959,  -535,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  1432,  1791,  -959,  -147,  -348,
    -959,  -959,  -857,  -959,  -959,  -635,  -959,  1022,  -766,  -959,
    -959,  -850,  -959,  -959,  1720,  -168,   -58,  1716,  -303,  1468,
    -959,  -959,   379,  -959,  -959,  -959,  1241,  1390,   238,   -35,
    -959,  -959,  -959,  1951,  1646,  -959,  -959,  -695,  -959,  -959,
    -959,  -959,  -959,  -959,  -959,  -959,  -760,  -959,  -483,   398,
    1980,  1811,  -959,  1461,  -959,   927,  -392,  -959,  -959,  -959,
    -959,  -959,   439,  -959,  -959,  -959,   954,  -959,   765,  -959,
    1193,  1183,  -944,  -958,  -696,  -725,  -824,  -959,  -649,   380,
     161,    71,  -518,  -286,  1504,  -702,  -959,  -959,  -959,  1938
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -507
static const yytype_int16 yytable[] =
{
     171,   572,   836,   847,   993,  1003,   841,   793,   794,   305,
     781,   812,   500,   674,   675,   922,  -336,   177,  -338,   680,
     278,   682,  -337,   689,   642,   920,  1305,  1274,    78,   458,
    1089,   306,   995,   931,   932,   623,   564,  1289,  1057,  1280,
     733,   459,   177,   223,   224,   513,   943,   944,   945,   946,
    1095,    84,   954,   389,   229,   230,   231,    71,   299,   723,
     233,    53,   102,   207,   393,   324,  1201,   279,   280,   281,
     282,   283,   284,   285,  1044,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,  1118,   730,
     760,   732,   279,   280,   281,   282,   283,   284,   285,   947,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   277,  1168,   554,   554,  1203,   215,    34,
     307,   817,  1290,   301,    72,  1287,  1058,    79,    63,  1169,
     208,   325,   390,   964,    87,   636,  1291,   818,  1119,  1090,
    1091,    80,    35,   390,   974,   103,   933,   645,   978,    89,
    1281,    50,  1292,    81,  1275,   997,  1097,   384,  1306,   583,
     555,   555,  1204,   203,  1288,   724,    85,  1202,   460,  1059,
     376,   399,    73,  1052,   624,   400,  1117,    82,   209,   406,
     410,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   650,   430,
     431,   432,  1196,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,    11,   721,    54,  1197,   450,   451,
     656,   657,   453,   454,   455,   456,   457,   905,   660,  -506,
     466,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,  1293,   483,   571,   171,   875,   574,   876,    88,
     723,   556,   557,   846,   310,   652,   643,   921,   582,   690,
     691,   692,   693,  1162,    90,  1098,  -336,   178,  -338,   304,
    1121,   216,  -337,   983,  1263,  1073,   302,  1074,   204,  1036,
    1077,   488,  1099,    45,   497,   377,  1082,   948,   949,   950,
     402,   403,   178,   653,   542,   951,   308,   489,   186,   187,
     578,   579,    61,   958,   554,   960,   961,   331,   311,   383,
     784,   984,   584,   188,   381,   498,   327,  -201,  1207,   638,
    1277,   322,   312,   333,   560,   563,   706,  1294,  1264,    46,
    1208,  1299,   381,   707,   323,   313,   601,   602,    51,   543,
     100,  1295,  1270,   654,   545,   782,   580,   581,   788,   555,
    1100,   101,   190,   314,   587,  1209,   874,  1296,    58,   785,
    1227,   985,   544,  -506,    66,   315,   309,  1278,   216,   328,
      62,   708,   795,   332,   709,    47,   334,   309,   490,   191,
    1151,  1158,   329,  1153,   644,  1154,   655,   710,  1279,   335,
    1300,  1265,   861,   192,   862,   711,  1264,    48,   278,   404,
     193,   546,  1301,  1266,   986,   627,   628,    52,   630,   404,
     194,    59,   189,   277,   279,   280,   281,   282,   283,   284,
     285,   712,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,  1000,   299,   279,   280,   281,
     282,   283,   284,   285,    91,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   195,  1265,
    1194,  1302,   696,    67,   713,   226,   227,   700,    36,   493,
     309,  1266,    37,   838,   842,   980,   196,    92,    74,   761,
      64,  1001,   726,   727,   175,    11,    11,   687,   769,   279,
     280,   281,   282,   283,   284,   285,   176,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
    -233,   570,   573,    77,    38,   532,   210,   381,   197,   697,
     734,   537,   735,   539,   701,  1258,   739,   740,    68,   741,
     839,   843,   981,   746,   747,   748,   749,  1242,   750,   751,
     752,   851,    91,  1283,  1284,   753,   754,    70,   755,   852,
     815,   816,  1256,  1257,   294,   295,   296,   297,   298,    76,
      39,   756,   757,   758,    75,   759,   211,   819,   820,  -233,
     860,  1282,  1303,   999,   765,    92,    40,    41,   462,   463,
     104,   464,    93,    86,   465,   778,   199,    94,   821,   822,
      97,    42,   783,   198,    95,   667,   668,    98,   671,   672,
     673,   823,   822,   174,   676,   677,   678,   833,   834,   681,
     857,   858,  1005,   971,   834,  1104,   906,   976,   834,   908,
     909,   910,   279,   280,   281,   282,   283,   284,   285,   827,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,  1009,  1010,   184,   881,   882,
    1050,  1051,   865,  1068,   834,   867,  1076,   834,  1079,   834,
     201,   872,   291,   292,   293,   294,   295,   296,   297,   298,
     878,   898,   899,  1083,   858,   884,   885,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,  1092,  1093,
     279,   280,   281,   282,   283,   284,   285,   907,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   521,   522,   523,   524,   200,   525,   923,   202,   527,
     528,   529,   926,   211,  1006,   205,   533,   534,   535,  1094,
    1093,   538,  1096,  1051,  1122,  1123,  1124,  1123,   105,   106,
     107,   108,   109,   110,   292,   293,   294,   295,   296,   297,
     298,   206,   111,   112,  1125,  1123,  1127,  1093,   796,   213,
     113,   114,  1129,  1130,  1131,  1132,  1134,  1135,  1137,  1138,
     115,  1149,   834,   217,   797,  1150,   834,   218,   798,  1152,
     834,   799,   987,   800,  1156,   834,   801,  1163,  1130,  1164,
    1093,   219,   116,  1165,  1093,   220,   802,   117,  1167,  1132,
     118,   119,   221,   803,   804,  1185,  1186,  1191,   834,   222,
    1192,   834,  1012,    53,   120,  1013,  1193,   834,   121,  1198,
    1051,  1205,  1010,  1024,  1025,   228,   805,  1217,   834,  1218,
    1130,   235,  1026,  1027,  1219,  1132,  1229,  1230,   806,  1232,
    1233,   303,  1245,  1246,   122,  1033,  1035,  1247,  1248,   318,
    1250,  1246,  1041,  1042,  1268,  1246,  1114,  1115,  1269,  1246,
    1272,  1273,  1297,  1246,   236,   807,   646,   647,   776,   777,
    1054,   237,  1039,  1040,  1060,   238,   239,   320,   240,   241,
     123,   242,   243,   244,  1064,   808,   245,   246,   247,   248,
     249,   809,   321,   250,   251,  1067,   252,   124,   253,   254,
     255,   256,   257,   258,   125,   126,   259,   127,   279,   280,
     281,   282,   283,   284,   285,   260,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   261,
     262,   263,   264,   326,   810,   575,   265,   266,  1102,  1103,
     267,  1106,   268,  1108,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   269,   270,   170,   271,
     272,   105,   106,   107,   108,   109,   110,   273,   274,   275,
     276,   330,   336,   337,   371,   111,   112,   372,   373,   374,
     375,   378,   379,   113,   385,   380,   386,  1159,   279,   280,
     281,   282,   283,   284,   285,   387,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   388,
     392,   407,   872,   395,   429,   116,   482,   433,  1173,   446,
     117,   447,  1175,   118,   119,   448,   485,   449,   487,  1179,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     461,   494,  1188,  1189,   279,   280,   281,   282,   283,   284,
     285,   492,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   501,   502,   105,   106,   107,
     108,   109,   110,   504,   505,   506,   507,   508,   509,   510,
     511,   111,   112,   512,   514,   515,   516,   517,   408,   113,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   467,
     518,   468,   519,   123,   526,   530,   536,   540,   541,   547,
     548,   549,   550,   551,   552,   553,   561,   566,   568,   576,
      11,   116,   -53,   588,   609,   629,   117,   632,   633,   118,
     119,   634,   298,   639,   637,   649,   640,   641,   279,   280,
     281,   282,   283,   284,   285,   409,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   648,
     651,   658,   661,   662,   663,   664,   669,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   123,
     683,   170,   684,   686,   685,   688,   699,   702,   703,   705,
     577,   718,   719,   722,   743,   698,   704,   728,   770,   738,
     -55,   723,   469,   589,   279,   280,   281,   282,   283,   284,
     285,   772,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   282,   283,   284,   285,   774,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   779,   780,   470,   105,   106,
     107,   108,   109,   110,   790,   791,   813,   814,   826,   835,
     837,   840,   111,   112,   844,   845,   848,   850,   789,   792,
     113,   279,   280,   281,   282,   283,   284,   285,   824,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   825,   828,   105,   106,   107,   108,   109,   110,
     829,   830,   116,   831,   832,   855,   849,   117,   111,   112,
     118,   119,   853,   590,   859,   854,   113,   434,   279,   280,
     281,   282,   283,   284,   285,   856,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   868,
     869,   870,   913,   912,   915,   886,   919,   887,   116,   903,
     904,   911,   916,   117,   917,   918,   118,   119,   279,   280,
     281,   282,   283,   284,   285,   924,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   927,
     928,   929,   934,   279,   280,   281,   282,   283,   284,   285,
     123,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   935,   936,   937,   939,   938,   591,
     279,   280,   281,   282,   283,   284,   285,   940,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   941,   942,   956,   952,   953,   123,   955,   957,   959,
     962,   965,   966,   967,   968,   969,   970,   737,   973,   232,
     972,   975,   979,   977,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   991,   988,   170,   989,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   990,   994,   170,   105,   106,   107,   108,   109,
     110,  1004,  1007,  1008,  1028,  1029,  1030,  1031,  1032,   111,
     112,  1053,  1037,   592,  1043,  1046,  1048,   113,   279,   280,
     281,   282,   283,   284,   285,  1055,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,  1056,
    1065,   105,   106,   107,   108,   109,   110,  1061,  1062,   116,
    1063,  1066,  1075,   593,   117,   111,   112,   118,   119,  1069,
    1070,  1071,  1085,   113,  1072,  1078,  1080,  1081,  1126,  1084,
    1086,   279,   280,   281,   282,   283,   284,   285,   595,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,  1087,  1109,   586,   116,  1128,  1133,  1139,  1140,
     117,  1141,  1143,   118,   119,   596,  -507,  -507,  -507,  -507,
     742,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   866,  1144,  1145,  1148,  1155,  1160,
    1161,  1171,  1166,  1170,   724,  1176,  1174,   123,   279,   280,
     281,   282,   283,   284,   285,  1178,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   279,
     280,   281,   282,   283,   284,   285,  1180,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
    1181,  1182,  1183,   123,  1190,  1184,  1187,  1199,  1200,  1210,
    1212,  1220,  1213,  1214,  1221,  1222,  1225,  1223,  1231,  1224,
    1226,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,  1228,  1234,   170,  1235,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,  1236,
    1237,   170,   105,   106,   107,   108,   109,   110,  1093,  1238,
    1240,  1241,  1252,  1243,  1244,  1249,   111,   112,  1251,  1254,
    1259,  1255,  1267,  1276,   113,  1262,   597,   279,   280,   281,
     282,   283,   284,   285,  1271,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   105,   106,
     107,   108,   109,   110,  1274,  1285,   116,  1298,  1304,  1307,
    1308,   117,   111,   112,   118,   119,  1309,  1310,  1311,  1312,
     113,   745,   484,   185,   401,   496,  1101,   717,   773,   925,
     214,   565,    99,   394,   731,   871,  1172,  1157,  1286,   982,
     679,   998,   225,   603,     0,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,     0,   117,     0,     0,
     118,   119,   736,     0,   605,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,   279,   280,   281,   282,   283,
     284,   285,     0,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   279,   280,   281,   282,
     283,   284,   285,     0,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,     0,   170,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,     0,   170,   105,
     106,   107,   108,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,   111,   112,     0,     0,     0,     0,     0,
       0,   113,     0,     0,   279,   280,   281,   282,   283,   284,
     285,     0,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   105,   106,   107,   108,   109,
     110,     0,     0,   116,     0,     0,     0,     0,   117,   111,
     112,   118,   119,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1107,     0,     0,     0,     0,     0,     0,     0,
     618,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,     0,   117,     0,     0,   118,   119,   877,
       0,   619,   279,   280,   281,   282,   283,   284,   285,     0,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     0,   279,   280,   281,   282,   283,   284,
     285,   123,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   279,   280,   281,   282,   283,
     284,   285,     0,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,     0,
     279,   280,   281,   282,   283,   284,   285,   123,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,     0,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,     0,     0,   170,
       0,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,     0,     0,   170,   279,   280,   281,   282,
     283,   284,   285,     0,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   279,   280,   281,
     282,   283,   284,   285,     0,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     279,   280,   281,   282,   283,   284,   285,   620,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,     0,   279,   280,   281,   282,   283,   284,   285,   622,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,     0,     0,     0,     0,
     890,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   879,     0,     0,     0,     0,     0,   279,   280,
     281,   282,   283,   284,   285,   891,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   279,
     280,   281,   282,   283,   284,   285,     0,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     279,   280,   281,   282,   283,   284,   285,     0,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   279,   280,   281,   282,   283,   284,   285,     0,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   279,   280,   281,   282,   283,   284,   285,     0,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   279,   280,   281,   282,   283,   284,
     285,   900,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,     0,     0,
       0,   880,   279,   280,   281,   282,   283,   284,   285,     0,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,     0,   279,   280,   281,
     282,   283,   284,   285,   452,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,     0,   279,
     280,   281,   282,   283,   284,   285,   585,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     279,   280,   281,   282,   283,   284,   285,     0,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,     0,   279,   280,   281,   282,   283,
     284,   285,   594,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   279,   280,   281,   282,
     283,   284,   285,   598,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   279,   280,   281,
     282,   283,   284,   285,   599,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   279,   280,
     281,   282,   283,   284,   285,   600,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   279,
     280,   281,   282,   283,   284,   285,   604,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   279,   280,   281,   282,   283,   284,   285,   606,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,     0,     0,     0,     0,   279,
     280,   281,   282,   283,   284,   285,   607,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,     0,   279,   280,   281,   282,   283,   284,
     285,   608,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     0,   279,   280,   281,   282,
     283,   284,   285,   610,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   279,   280,   281,
     282,   283,   284,   285,   611,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,     0,   279,   280,   281,   282,   283,   284,   285,   612,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   279,   280,   281,   282,   283,   284,   285,
     613,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   279,   280,   281,   282,   283,   284,
     285,   614,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   279,   280,   281,   282,   283,
     284,   285,   615,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   279,   280,   281,   282,
     283,   284,   285,   616,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   279,   280,
     281,   282,   283,   284,   285,   617,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,     0,     0,     0,     0,   279,   280,   281,   282,
     283,   284,   285,   621,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
       0,   279,   280,   281,   282,   283,   284,   285,   883,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,     0,   279,   280,   281,   282,   283,   284,   285,
     888,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   279,   280,   281,   282,   283,   284,
     285,   889,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,     0,   279,
     280,   281,   282,   283,   284,   285,   892,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     279,   280,   281,   282,   283,   284,   285,   893,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   279,   280,   281,   282,   283,   284,   285,   894,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   279,   280,   281,   282,   283,   284,   285,   895,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   279,   280,   281,   282,   283,   284,   285,
     896,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   279,   280,   281,   282,   283,
     284,   285,   897,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,     0,
       0,     0,     0,   279,   280,   281,   282,   283,   284,   285,
     901,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,     0,   279,   280,
     281,   282,   283,   284,   285,   902,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,     0,
     279,   280,   281,   282,   283,   284,   285,   963,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   279,   280,   281,   282,   283,   284,   285,  1014,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,     0,   279,   280,   281,   282,
     283,   284,   285,  1045,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   279,   280,   281,
     282,   283,   284,   285,  1088,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   279,   280,
     281,   282,   283,   284,   285,  1110,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   279,
     280,   281,   282,   283,   284,   285,  1111,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     279,   280,   281,   282,   283,   284,   285,  1112,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   279,   280,   281,   282,   283,   284,   285,  1113,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,     0,     0,     0,     0,
     279,   280,   281,   282,   283,   284,   285,  1116,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,     0,   796,     0,     0,     0,     0,     0,     0,     0,
       0,     1,  1136,     0,     0,     2,     0,     0,     0,  1015,
    1016,     0,   798,     0,  1017,   799,  1018,   800,     0,     0,
     801,     0,     0,     0,  1142,     0,     0,     3,     0,     0,
     802,     0,     0,     0,     0,     0,     0,   803,   804,  1019,
    1020,     0,  1021,     0,     0,  1146,     0,     0,     0,     4,
       5,     0,     0,     0,     0,     0,   278,     0,     0,     0,
     805,     0,     0,   279,   280,   281,   282,   283,   284,   285,
    1147,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,     0,     6,     0,
       0,  1195,     0,     0,   299,     0,     0,     0,     0,   807,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1206,     0,     0,     0,     0,     0,     0,   808,
       0,     0,     0,     0,     7,   809,     8,     0,     0,     0,
       9,   338,   339,  1215,   340,     0,   341,   342,  1022,  1023,
       0,     0,     0,    10,    11,     0,     0,     0,     0,   343,
       0,     0,     0,     0,  1216,     0,     0,    12,     0,     0,
      13,     0,     0,     0,   232,     0,    14,     0,   810,   344,
     345,   346,   347,     0,     0,     0,   348,     0,     0,     0,
       0,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,   351,     0,     0,     0,     0,   352,
       0,     0,     0,     0,     0,     0,   353,     0,     0,   354,
       0,     0,   355,   356,     0,     0,     0,     0,     0,   279,
     280,   281,   282,   283,   284,   285,   357,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,     0,     0,   358,   359,     0,   360,   361,
       0,     0,     0,     0,   362,     0,   363,     0,     0,     0,
       0,   364,   365,     0,     0,     0,     0,   366,     0,     0,
       0,     0,   367,     0,   368,     0,     0,     0,   369,   279,
     280,   281,   282,   283,   284,   285,     0,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
       0,   279,   280,   281,   282,   283,   284,   285,  1000,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   631,   279,   280,   281,   282,   283,   284,   285,     0,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     0,  1001,     0,   280,   281,   282,   283,
     284,   285,   764,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   281,   282,   283,   284,
     285,     0,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298
};

static const yytype_int16 yycheck[] =
{
      57,   393,   697,   705,   854,   862,   701,   656,   657,   177,
     645,   660,   315,   531,   532,   781,     3,     3,     3,   537,
       3,   539,     3,     3,    20,    20,     4,    72,     3,     6,
     988,   178,   856,   793,   794,     6,   384,    59,    63,    80,
     575,    18,     3,   100,   101,   331,     4,     5,     6,     7,
     994,     3,   812,   174,   111,   112,   113,     3,    41,   149,
     117,     8,     3,     3,   174,     3,    80,    10,    11,    12,
      13,    14,    15,    16,   924,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   205,   572,
     625,   574,    10,    11,    12,    13,    14,    15,    16,    57,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   170,     5,   116,   116,   153,   102,   185,
     178,   192,   144,   102,    70,    73,   151,   102,     0,    20,
      70,    69,   253,   828,     3,   483,   158,   208,   255,   989,
     990,   116,   185,   253,   839,    86,   795,   495,   843,     3,
     191,   185,   174,   128,   199,   857,    38,   215,   136,   102,
     161,   161,   198,     3,   112,   255,   118,   181,   145,   194,
       3,   228,   118,   933,   145,   232,  1033,   152,   118,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   501,   256,
     257,   258,  1160,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   175,   563,   163,  1161,   275,   276,
     506,   507,   279,   280,   281,   282,   283,   762,   514,    41,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,    59,   301,   391,   302,   729,   394,   731,   118,
     149,   252,   253,   253,    61,    63,   252,   252,   405,   239,
     240,   241,   242,  1087,   118,   147,   253,   253,   253,   252,
    1036,   255,   253,    63,    18,   970,   255,   972,   118,   914,
     975,   100,   164,    71,   129,   118,   981,   245,   246,   247,
      95,    96,   253,   101,    18,   253,   174,   116,    44,    45,
      95,    96,     3,   821,   116,   823,   824,     3,   115,   196,
     147,   101,   255,    59,   203,   160,     3,   124,  1175,   487,
     103,    56,   129,     3,   381,   383,    56,   144,    72,   117,
     166,    86,   203,    63,    69,   142,   254,   255,   185,    63,
       9,   158,    18,   151,   196,   648,   403,   404,   651,   161,
     999,    20,    33,   160,   411,   191,   255,   174,   185,   196,
    1210,   151,    86,   175,     3,   172,   255,   150,   255,    56,
      71,   101,   658,    69,   104,   163,    56,   255,   197,    60,
    1075,  1083,    69,  1078,   255,  1080,   194,   117,   171,    69,
     145,   135,     3,    74,     5,   125,    72,   185,     3,   204,
      81,   253,    86,   147,   194,   462,   463,     9,   465,   204,
      91,    13,   158,   470,    10,    11,    12,    13,    14,    15,
      16,   151,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    39,    41,    10,    11,    12,
      13,    14,    15,    16,    76,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   139,   135,
    1155,   145,   196,     3,   194,   252,   253,   196,    71,   254,
     255,   147,    75,   196,   196,   196,   157,   109,    39,   626,
     251,    85,   254,   255,   116,   175,   175,   544,   635,    10,
      11,    12,    13,    14,    15,    16,   128,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     196,   201,   201,   185,   117,   354,    77,   203,   199,   253,
     577,   360,   579,   362,   253,  1250,   583,   584,   118,   586,
     253,   253,   253,   590,   591,   592,   593,  1233,   595,   596,
     597,   117,    76,  1268,  1269,   602,   603,     3,   605,   125,
     254,   255,  1248,  1249,    26,    27,    28,    29,    30,   117,
     163,   618,   619,   620,   179,   622,   252,    67,    68,   255,
     717,  1267,  1297,   859,   631,   109,   179,   180,    13,    14,
     255,    16,   116,     3,    19,   642,   209,   121,   254,   255,
       3,   194,   649,   252,   128,   524,   525,     3,   527,   528,
     529,   254,   255,     3,   533,   534,   535,   254,   255,   538,
     254,   255,   133,   254,   255,  1007,   763,   254,   255,   766,
     767,   768,    10,    11,    12,    13,    14,    15,    16,   686,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   254,   255,     3,   254,   255,
     254,   255,   719,   254,   255,   722,   254,   255,   254,   255,
      41,   728,    23,    24,    25,    26,    27,    28,    29,    30,
     737,   254,   255,   254,   255,   742,   743,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   254,   255,
      10,    11,    12,    13,    14,    15,    16,   764,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   341,   342,   343,   344,     3,   346,   784,   147,   349,
     350,   351,   789,   252,   255,   209,   356,   357,   358,   254,
     255,   361,   254,   255,   254,   255,   254,   255,     3,     4,
       5,     6,     7,     8,    24,    25,    26,    27,    28,    29,
      30,     3,    17,    18,   254,   255,   254,   255,    18,     3,
      25,    26,   254,   255,   254,   255,   254,   255,   254,   255,
      35,   254,   255,   209,    34,   254,   255,   209,    38,   254,
     255,    41,   849,    43,   254,   255,    46,   254,   255,   254,
     255,   209,    57,   254,   255,     3,    56,    62,   254,   255,
      65,    66,   178,    63,    64,    47,    48,   254,   255,     3,
     254,   255,   879,     8,    79,   882,   254,   255,    83,   254,
     255,   254,   255,   890,   891,     9,    86,   254,   255,   254,
     255,   253,   899,   900,   254,   255,    47,    48,    98,   252,
     253,   255,   254,   255,   109,   912,   913,   252,   253,    41,
     254,   255,   919,   920,   254,   255,   254,   255,   254,   255,
     254,   255,   254,   255,   253,   125,   497,   498,   640,   641,
     937,   253,   917,   918,   941,   253,   253,    43,   253,   253,
     145,   253,   253,   253,   951,   145,   253,   253,   253,   253,
     253,   151,    43,   253,   253,   962,   253,   162,   253,   253,
     253,   253,   253,   253,   169,   170,   253,   172,    10,    11,
      12,    13,    14,    15,    16,   253,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   253,
     253,   253,   253,    56,   194,   255,   253,   253,  1005,  1006,
     253,  1008,   253,  1010,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   253,   253,   253,   253,
     253,     3,     4,     5,     6,     7,     8,   253,   253,   253,
     253,    56,    56,     3,     3,    17,    18,   147,   209,     3,
     147,   209,     3,    25,     3,    26,     3,  1084,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
       3,    53,  1109,     3,   254,    57,     3,   254,  1115,   254,
      62,   254,  1119,    65,    66,   254,     3,   254,     3,  1126,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     253,     3,  1139,  1140,    10,    11,    12,    13,    14,    15,
      16,   254,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   124,   146,     3,     4,     5,
       6,     7,     8,     3,     3,     3,     3,     3,     3,     3,
       3,    17,    18,     3,     3,   178,     3,     3,   130,    25,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    35,
       3,    37,   253,   145,   253,    52,   253,   253,   253,     3,
       3,   147,     3,   147,   209,     3,   148,     3,     3,   254,
     175,    57,   175,   255,   254,   253,    62,   253,   253,    65,
      66,   253,    30,   125,   255,   147,   125,   125,    10,    11,
      12,    13,    14,    15,    16,   187,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   124,
     124,     3,     3,   178,   178,     5,     4,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   145,
       5,   253,     5,   253,   145,   198,     3,     3,     3,     3,
     186,    51,   131,    20,   123,   147,   147,   253,   106,   254,
     175,   149,   168,   255,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    13,    14,    15,    16,   105,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,     3,     3,   253,     3,     4,
       5,     6,     7,     8,   125,   125,     3,     3,    63,   198,
       3,   198,    17,    18,   147,     3,     3,   125,   253,   253,
      25,    10,    11,    12,    13,    14,    15,    16,   254,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   254,   253,     3,     4,     5,     6,     7,     8,
     253,   253,    57,   253,   253,   125,   253,    62,    17,    18,
      65,    66,   253,   255,     3,   253,    25,    26,    10,    11,
      12,    13,    14,    15,    16,   253,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   125,
       3,     3,   111,    51,   124,   254,    20,   254,    57,   254,
     254,   254,   253,    62,   253,   253,    65,    66,    10,    11,
      12,    13,    14,    15,    16,   253,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   253,
     253,     3,   145,    10,    11,    12,    13,    14,    15,    16,
     145,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     3,   253,   253,    42,   253,   255,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   253,     4,   174,   125,   125,   145,     5,     4,     4,
     253,     3,     3,     3,     3,     3,   253,   186,   198,   204,
     253,   253,     3,   198,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,     3,   253,   253,   253,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   253,   253,   253,     3,     4,     5,     6,     7,
       8,   255,   191,    20,   254,   254,   254,   254,   254,    17,
      18,     5,     3,   255,     3,     3,     3,    25,    10,    11,
      12,    13,    14,    15,    16,     5,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    41,
     254,     3,     4,     5,     6,     7,     8,   253,   253,    57,
     253,     4,   253,   255,    62,    17,    18,    65,    66,   254,
     254,   254,   125,    25,   255,   253,   253,   198,    20,   253,
     125,    10,    11,    12,    13,    14,    15,    16,   255,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   253,   253,   102,    57,    18,     3,   253,   253,
      62,   125,   254,    65,    66,   255,    13,    14,    15,    16,
     102,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    86,   254,   254,     3,   253,   253,
     253,    51,     3,     3,   255,   105,   159,   145,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   199,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     156,     3,     3,   145,   254,     5,     5,   156,     5,   121,
       3,     3,   254,   254,     3,     3,   167,   253,   156,   253,
     167,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   253,     3,   253,     3,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   132,
     132,   253,     3,     4,     5,     6,     7,     8,   255,     3,
       3,     3,   165,   254,   254,   253,    17,    18,   253,     3,
     164,     3,   253,   113,    25,     5,   255,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,     4,
       5,     6,     7,     8,    72,   201,    57,   126,   183,   147,
     147,    62,    17,    18,    65,    66,   143,   143,     5,     5,
      25,   589,   302,    64,   233,   309,  1004,   559,   638,   788,
      79,   385,    52,   222,   573,    86,  1109,  1083,  1273,   846,
     536,   858,   104,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    95,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
     145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,   253,    -1,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,   253,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     3,     4,     5,     6,     7,
       8,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    17,
      18,    65,    66,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    95,
      -1,   255,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    10,    11,    12,    13,    14,    15,
      16,   145,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   145,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,   253,
      -1,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,   253,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   255,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    10,    11,    12,    13,    14,    15,    16,   255,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   255,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   255,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,   254,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   254,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    10,
      11,    12,    13,    14,    15,    16,   254,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   254,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   254,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   254,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   254,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   254,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   254,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   254,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   254,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,   254,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   254,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   254,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     254,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   254,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   254,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   254,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   254,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   254,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   254,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
     254,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   254,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   254,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   254,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   254,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   254,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     254,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   254,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     254,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   254,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      10,    11,    12,    13,    14,    15,    16,   254,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   254,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   254,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   254,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   254,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   254,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   254,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   254,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   254,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,   254,    -1,    -1,    36,    -1,    -1,    -1,    77,
      78,    -1,    38,    -1,    82,    41,    84,    43,    -1,    -1,
      46,    -1,    -1,    -1,   254,    -1,    -1,    58,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,   107,
     108,    -1,   110,    -1,    -1,   254,    -1,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      86,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     254,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,   119,    -1,
      -1,   254,    -1,    -1,    41,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   155,   151,   157,    -1,    -1,    -1,
     161,    49,    50,   254,    52,    -1,    54,    55,   206,   207,
      -1,    -1,    -1,   174,   175,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   188,    -1,    -1,
     191,    -1,    -1,    -1,   204,    -1,   197,    -1,   194,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,   127,
      -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,   137,
      -1,    -1,   140,   141,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   154,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,   173,   174,    -1,   176,   177,
      -1,    -1,    -1,    -1,   182,    -1,   184,    -1,    -1,    -1,
      -1,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,    -1,
      -1,    -1,   200,    -1,   202,    -1,    -1,    -1,   206,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    10,    11,    12,    13,    14,    15,    16,    39,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    85,    -1,    11,    12,    13,    14,
      15,    16,    40,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    80,    81,   119,   155,   157,   161,
     174,   175,   188,   191,   197,   257,   273,   274,   307,   311,
     312,   315,   316,   319,   320,   321,   323,   333,   334,   337,
     339,   340,   341,   363,   185,   185,    71,    75,   117,   163,
     179,   180,   194,   345,   308,    71,   117,   163,   185,   325,
     185,   185,   325,     8,   163,   364,   365,   288,   185,   325,
     335,     3,    71,     0,   251,   318,     3,     3,   118,   338,
       3,     3,    70,   118,   338,   179,   117,   185,     3,   102,
     116,   128,   152,   309,     3,   118,     3,     3,   118,     3,
     118,    76,   109,   116,   121,   128,   326,     3,     3,   326,
       9,    20,     3,    86,   255,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    35,    57,    62,    65,    66,
      79,    83,   109,   145,   162,   169,   170,   172,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     253,   258,   289,   290,     3,   116,   128,     3,   253,   292,
     293,   294,   296,   306,     3,   257,    44,    45,    59,   158,
      33,    60,    74,    81,    91,   139,   157,   199,   252,   209,
       3,    41,   147,     3,   118,   209,     3,     3,    70,   118,
     338,   252,   310,     3,   309,   102,   255,   209,   209,   209,
       3,   178,     3,   258,   258,   365,   252,   253,     9,   258,
     258,   258,   204,   258,   272,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   258,     3,    10,
      11,    12,    13,    14,    15,    16,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    41,
     291,   102,   255,   255,   252,   291,   274,   292,   174,   255,
      61,   115,   129,   142,   160,   172,   297,   299,    41,   295,
      43,    43,    56,    69,     3,    69,    56,     3,    56,    69,
      56,     3,    69,     3,    56,    69,    56,     3,    49,    50,
      52,    54,    55,    67,    87,    88,    89,    90,    94,    99,
     114,   122,   127,   134,   137,   140,   141,   154,   173,   174,
     176,   177,   182,   184,   189,   190,   195,   200,   202,   206,
     359,     3,   147,   209,     3,   147,     3,   118,   209,     3,
      26,   203,   275,   196,   292,     3,     3,     3,     3,   174,
     253,   327,     3,   174,   327,     3,   258,   263,   264,   258,
     258,   272,    95,    96,   204,   269,   258,    53,   130,   187,
     258,   270,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   254,
     258,   258,   258,   254,    26,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   254,   254,   254,   254,
     258,   258,   254,   258,   258,   258,   258,   258,     6,    18,
     145,   253,    13,    14,    16,    19,   258,    35,    37,   168,
     253,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,     3,   292,   290,     3,   317,     3,   100,   116,
     197,   303,   254,   254,     3,   336,   293,   129,   160,   300,
     294,   124,   146,   298,     3,     3,     3,     3,     3,     3,
       3,     3,     3,   359,     3,   178,     3,     3,     3,   253,
     355,   355,   355,   355,   355,   355,   253,   355,   355,   355,
      52,   356,   356,   355,   355,   355,   253,   356,   355,   356,
     253,   253,    18,    63,    86,   196,   253,     3,     3,   147,
       3,   147,   209,     3,   116,   161,   252,   253,   361,   362,
     258,   148,   281,   292,   275,   310,     3,   332,     3,   328,
     201,   274,   332,   201,   274,   255,   254,   186,    95,    96,
     258,   258,   274,   102,   255,   254,   102,   258,   255,   255,
     255,   255,   255,   255,   254,   255,   255,   255,   254,   254,
     254,   254,   255,   255,   254,   255,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   255,   255,
     255,   254,   255,     6,   145,   265,   267,   258,   258,   253,
     258,    40,   253,   253,   253,   259,   275,   255,   291,   125,
     125,   125,    20,   252,   255,   275,   298,   298,   124,   147,
     294,   124,    63,   101,   151,   194,   359,   359,     3,   354,
     359,     3,   178,   178,     5,   357,   358,   357,   357,     4,
     360,   357,   357,   357,   358,   358,   357,   357,   357,   360,
     358,   357,   358,     5,     5,   145,   253,   258,   198,     3,
     239,   240,   241,   242,   313,   314,   196,   253,   147,     3,
     196,   253,     3,     3,   147,     3,    56,    63,   101,   104,
     117,   125,   151,   194,   346,   347,   353,   295,    51,   131,
     284,   275,    20,   149,   255,   324,   254,   255,   253,   329,
     324,   329,   324,   263,   258,   258,    95,   186,   254,   258,
     258,   258,   102,   123,   271,   271,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     263,   274,   266,   268,    40,   258,   262,   260,   261,   274,
     106,   276,     3,   303,   105,   304,   304,   304,   258,     3,
       3,   281,   294,   258,   147,   196,   301,   302,   294,   253,
     125,   125,   253,   354,   354,   359,    18,    34,    38,    41,
      43,    46,    56,    63,    64,    86,    98,   125,   145,   151,
     194,   322,   354,     3,     3,   254,   255,   192,   208,    67,
      68,   254,   255,   254,   254,   254,    63,   258,   253,   253,
     253,   253,   253,   254,   255,   198,   313,     3,   196,   253,
     198,   313,   196,   253,   147,     3,   253,   361,     3,   253,
     125,   117,   125,   253,   253,   125,   253,   254,   255,     3,
     274,     3,     5,   282,   283,   258,    86,   258,   125,     3,
       3,    86,   258,   331,   255,   324,   324,    95,   258,   105,
     254,   254,   255,   254,   258,   258,   254,   254,   254,   254,
     255,   255,   254,   254,   254,   254,   254,   254,   254,   255,
     255,   254,   254,   254,   254,   263,   274,   258,   274,   274,
     274,   254,    51,   111,   280,   124,   253,   253,   253,    20,
      20,   252,   284,   258,   253,   302,   258,   253,   253,     3,
     352,   322,   322,   354,   145,     3,   253,   253,   253,    42,
       3,   253,     4,     4,     5,     6,     7,    57,   245,   246,
     247,   253,   125,   125,   322,     5,   174,     4,   358,     4,
     358,   358,   253,   254,   313,     3,     3,     3,     3,     3,
     253,   254,   253,   198,   313,   253,   254,   198,   313,     3,
     196,   253,   346,    63,   101,   151,   194,   258,   253,   253,
     253,     3,   287,   287,   253,   352,   342,   361,   347,   359,
      39,    85,   278,   278,   255,   133,   255,   191,    20,   254,
     255,   330,   258,   258,   254,    77,    78,    82,    84,   107,
     108,   110,   206,   207,   258,   258,   258,   258,   254,   254,
     254,   254,   254,   258,   277,   258,   281,     3,   305,   305,
     305,   258,   258,     3,   287,   254,     3,   349,     3,   348,
     254,   255,   322,     5,   258,     5,    41,    63,   151,   194,
     258,   253,   253,   253,   258,   254,     4,   258,   254,   254,
     254,   254,   255,   313,   313,   253,   254,   313,   253,   254,
     253,   198,   313,   254,   253,   125,   125,   253,   254,   349,
     287,   287,   254,   255,   254,   348,   254,    38,   147,   164,
     354,   283,   258,   258,   332,    86,   258,    86,   258,   253,
     254,   254,   254,   254,   254,   255,   254,   278,   205,   255,
     279,   284,   254,   255,   254,   254,    20,   254,    18,   254,
     255,   254,   255,     3,   254,   255,   254,   254,   255,   253,
     253,   125,   254,   254,   254,   254,   254,   254,     3,   254,
     254,   313,   254,   313,   313,   253,   254,   342,   361,   258,
     253,   253,   352,   254,   254,   254,     3,   254,     5,    20,
       3,    51,   331,   258,   159,   258,   105,   285,     3,   258,
     199,   156,     3,     3,     5,    47,    48,     5,   258,   258,
     254,   254,   254,   254,   313,   254,   349,   348,   254,   156,
       5,    80,   181,   153,   198,   254,   254,   278,   166,   191,
     121,   286,     3,   254,   254,   254,   254,   254,   254,   254,
       3,     3,     3,   253,   253,   167,   167,   287,   253,    47,
      48,   156,   252,   253,     3,     3,   132,   132,     3,   350,
       3,     3,   350,   254,   254,   254,   255,   252,   253,   253,
     254,   253,   165,   351,     3,     3,   350,   350,   351,   164,
     343,   344,     5,    18,    72,   135,   147,   253,   254,   254,
      18,     3,   254,   255,    72,   199,   113,   103,   150,   171,
      80,   191,   350,   351,   351,   201,   344,    73,   112,    59,
     144,   158,   174,    59,   144,   158,   174,   254,   126,    86,
     145,    86,   145,   351,   183,     4,   136,   147,   147,   143,
     143,     5,     5
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
#line 555 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 101:
#line 556 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 102:
#line 557 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 103:
#line 564 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 104:
#line 571 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 105:
#line 578 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 106:
#line 582 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 107:
#line 586 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 108:
#line 592 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 109:
#line 593 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 110:
#line 594 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 111:
#line 597 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 112:
#line 598 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 113:
#line 601 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 114:
#line 602 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 115:
#line 603 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 116:
#line 604 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 117:
#line 605 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 118:
#line 606 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 119:
#line 607 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 120:
#line 608 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 121:
#line 609 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 122:
#line 613 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 123:
#line 615 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 124:
#line 617 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 125:
#line 619 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 126:
#line 623 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 127:
#line 631 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 128:
#line 641 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 129:
#line 642 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 130:
#line 645 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 131:
#line 646 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 132:
#line 650 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 133:
#line 658 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 134:
#line 666 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 135:
#line 677 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 136:
#line 686 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 137:
#line 691 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 139:
#line 702 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 141:
#line 704 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 142:
#line 707 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 143:
#line 714 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 144:
#line 722 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 145:
#line 723 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 146:
#line 724 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 147:
#line 727 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 148:
#line 728 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 150:
#line 732 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 155:
#line 744 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 156:
#line 750 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 157:
#line 758 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 158:
#line 759 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 159:
#line 760 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 160:
#line 761 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 161:
#line 764 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 162:
#line 765 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 163:
#line 766 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 164:
#line 767 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 165:
#line 768 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 167:
#line 772 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 168:
#line 775 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 169:
#line 776 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 170:
#line 779 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 171:
#line 780 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 172:
#line 781 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 173:
#line 782 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 174:
#line 783 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 175:
#line 784 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 176:
#line 785 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 177:
#line 786 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 178:
#line 787 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 179:
#line 790 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 180:
#line 791 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 181:
#line 793 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 182:
#line 801 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 183:
#line 806 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 184:
#line 807 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 185:
#line 808 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 186:
#line 811 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 187:
#line 812 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 190:
#line 821 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 191:
#line 827 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 192:
#line 828 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 193:
#line 829 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 196:
#line 838 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 197:
#line 840 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 198:
#line 842 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 199:
#line 844 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 200:
#line 846 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 201:
#line 849 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 202:
#line 850 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 203:
#line 851 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 204:
#line 854 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 205:
#line 855 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 206:
#line 858 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 207:
#line 859 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 208:
#line 862 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 209:
#line 863 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 210:
#line 864 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 213:
#line 871 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 214:
#line 872 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 215:
#line 877 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 216:
#line 879 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 217:
#line 881 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 219:
#line 885 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 220:
#line 886 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 221:
#line 889 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 222:
#line 890 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 223:
#line 893 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 224:
#line 898 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 225:
#line 908 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 226:
#line 915 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 227:
#line 916 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 228:
#line 917 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 229:
#line 918 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 230:
#line 923 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 231:
#line 927 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 232:
#line 929 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 235:
#line 935 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 236:
#line 940 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 237:
#line 947 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 238:
#line 954 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 239:
#line 964 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 240:
#line 971 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 241:
#line 978 "parser/evoparser.y"
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

  case 242:
#line 988 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 243:
#line 996 "parser/evoparser.y"
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

  case 244:
#line 1006 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 245:
#line 1014 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 246:
#line 1023 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 247:
#line 1032 "parser/evoparser.y"
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

  case 248:
#line 1042 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 249:
#line 1050 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 250:
#line 1059 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 251:
#line 1068 "parser/evoparser.y"
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

  case 252:
#line 1078 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 253:
#line 1087 "parser/evoparser.y"
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

  case 254:
#line 1099 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 255:
#line 1104 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 256:
#line 1109 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 257:
#line 1115 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 258:
#line 1122 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 259:
#line 1129 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 260:
#line 1136 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 261:
#line 1146 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 262:
#line 1153 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 263:
#line 1162 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 264:
#line 1169 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 265:
#line 1175 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 266:
#line 1183 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 267:
#line 1189 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 269:
#line 1197 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 270:
#line 1198 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 271:
#line 1199 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 272:
#line 1200 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 273:
#line 1205 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 274:
#line 1212 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 275:
#line 1221 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 276:
#line 1228 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 277:
#line 1234 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 278:
#line 1244 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 279:
#line 1248 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 280:
#line 1254 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 281:
#line 1260 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 282:
#line 1267 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 283:
#line 1273 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 284:
#line 1280 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 285:
#line 1286 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 286:
#line 1292 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 287:
#line 1298 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 288:
#line 1304 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 289:
#line 1310 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 290:
#line 1316 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 291:
#line 1322 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 292:
#line 1328 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 293:
#line 1334 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 294:
#line 1340 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 295:
#line 1346 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 296:
#line 1352 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 297:
#line 1358 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 298:
#line 1364 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 299:
#line 1371 "parser/evoparser.y"
    { ;}
    break;

  case 300:
#line 1372 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 301:
#line 1373 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 302:
#line 1377 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 303:
#line 1385 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 304:
#line 1391 "parser/evoparser.y"
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

  case 306:
#line 1404 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 307:
#line 1407 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 308:
#line 1408 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 309:
#line 1409 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 310:
#line 1410 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 311:
#line 1411 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 315:
#line 1418 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 316:
#line 1422 "parser/evoparser.y"
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

  case 317:
#line 1432 "parser/evoparser.y"
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

  case 318:
#line 1444 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 319:
#line 1445 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 320:
#line 1445 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 321:
#line 1448 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 322:
#line 1449 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 323:
#line 1450 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 324:
#line 1451 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 325:
#line 1455 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 326:
#line 1458 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 327:
#line 1459 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 328:
#line 1460 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 329:
#line 1461 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 330:
#line 1467 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 331:
#line 1473 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 332:
#line 1478 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 333:
#line 1483 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 334:
#line 1488 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 335:
#line 1497 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 336:
#line 1504 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 337:
#line 1505 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 338:
#line 1506 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 339:
#line 1511 "parser/evoparser.y"
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

  case 340:
#line 1522 "parser/evoparser.y"
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

  case 341:
#line 1534 "parser/evoparser.y"
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

  case 342:
#line 1545 "parser/evoparser.y"
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

  case 343:
#line 1560 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 344:
#line 1564 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 345:
#line 1568 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 346:
#line 1569 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 347:
#line 1574 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 348:
#line 1576 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 349:
#line 1578 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 350:
#line 1580 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 351:
#line 1583 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1584 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 353:
#line 1588 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 354:
#line 1593 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 355:
#line 1595 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 356:
#line 1597 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 357:
#line 1599 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 358:
#line 1601 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 359:
#line 1605 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 360:
#line 1609 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 361:
#line 1610 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 362:
#line 1615 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 363:
#line 1625 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 364:
#line 1634 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 366:
#line 1638 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 367:
#line 1639 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 368:
#line 1640 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 369:
#line 1641 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 370:
#line 1643 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 371:
#line 1645 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 374:
#line 1653 "parser/evoparser.y"
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

  case 375:
#line 1668 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 376:
#line 1676 "parser/evoparser.y"
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

  case 377:
#line 1690 "parser/evoparser.y"
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

  case 378:
#line 1704 "parser/evoparser.y"
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

  case 379:
#line 1718 "parser/evoparser.y"
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

  case 380:
#line 1730 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 381:
#line 1731 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 382:
#line 1732 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 383:
#line 1735 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 384:
#line 1736 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 385:
#line 1739 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 386:
#line 1740 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 387:
#line 1741 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 388:
#line 1742 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 389:
#line 1743 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 390:
#line 1744 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 391:
#line 1745 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 392:
#line 1746 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 393:
#line 1748 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 394:
#line 1750 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 395:
#line 1752 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 396:
#line 1754 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 397:
#line 1756 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 398:
#line 1758 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 399:
#line 1761 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 400:
#line 1762 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 401:
#line 1765 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 402:
#line 1766 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 403:
#line 1769 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 404:
#line 1770 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 406:
#line 1774 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 407:
#line 1775 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 408:
#line 1776 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 409:
#line 1777 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 410:
#line 1778 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 411:
#line 1779 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 412:
#line 1780 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 413:
#line 1781 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 414:
#line 1782 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 415:
#line 1783 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 416:
#line 1784 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 417:
#line 1785 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 418:
#line 1786 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 419:
#line 1787 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 420:
#line 1788 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 421:
#line 1789 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 422:
#line 1790 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 423:
#line 1793 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 424:
#line 1794 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 425:
#line 1797 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 426:
#line 1799 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 427:
#line 1807 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 428:
#line 1808 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 430:
#line 1810 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 431:
#line 1811 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 432:
#line 1812 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 433:
#line 1813 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 434:
#line 1814 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 435:
#line 1815 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 436:
#line 1816 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 437:
#line 1817 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 438:
#line 1818 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 439:
#line 1825 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 440:
#line 1826 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 441:
#line 1827 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 442:
#line 1828 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 443:
#line 1829 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 444:
#line 1830 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 445:
#line 1831 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 446:
#line 1832 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 447:
#line 1833 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 448:
#line 1834 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 449:
#line 1835 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 450:
#line 1836 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 451:
#line 1837 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 452:
#line 1838 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 453:
#line 1839 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 454:
#line 1840 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 455:
#line 1841 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 456:
#line 1842 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 457:
#line 1843 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 458:
#line 1844 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 459:
#line 1845 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 460:
#line 1848 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 461:
#line 1849 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 462:
#line 1850 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 463:
#line 1853 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 464:
#line 1854 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 465:
#line 1857 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 466:
#line 1858 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 467:
#line 1859 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 469:
#line 1863 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 470:
#line 1864 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 471:
#line 1868 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 472:
#line 1869 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 473:
#line 1870 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 474:
#line 1871 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 475:
#line 1872 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 476:
#line 1873 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 477:
#line 1874 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 478:
#line 1875 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 479:
#line 1876 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 480:
#line 1877 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 481:
#line 1878 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 482:
#line 1879 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 483:
#line 1880 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 484:
#line 1881 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 485:
#line 1882 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 486:
#line 1883 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 487:
#line 1884 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 488:
#line 1885 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 489:
#line 1886 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 490:
#line 1887 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 491:
#line 1888 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 492:
#line 1889 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 493:
#line 1890 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 494:
#line 1891 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 495:
#line 1892 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 496:
#line 1893 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 497:
#line 1894 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 498:
#line 1895 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 499:
#line 1896 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 500:
#line 1897 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 501:
#line 1898 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 502:
#line 1899 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 503:
#line 1902 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 504:
#line 1903 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 505:
#line 1907 "parser/evoparser.y"
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

  case 506:
#line 1919 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 507:
#line 1920 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 508:
#line 1921 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 509:
#line 1925 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 510:
#line 1928 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 511:
#line 1929 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 515:
#line 1933 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 516:
#line 1934 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 6662 "parser/evoparser.tab.c"
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


#line 1937 "parser/evoparser.y"

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
