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
#line 29 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 608 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 621 "parser/evoparser.tab.c"

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
#define YYLAST   4155

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  256
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  509
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1306

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
      97,   103,   110,   117,   124,   128,   133,   137,   142,   146,
     152,   159,   161,   165,   166,   168,   169,   176,   177,   185,
     191,   198,   203,   208,   213,   218,   223,   228,   233,   238,
     247,   254,   261,   270,   275,   283,   290,   295,   300,   305,
     312,   321,   328,   335,   342,   351,   360,   365,   372,   379,
     386,   391,   396,   401,   408,   413,   420,   425,   432,   436,
     441,   446,   451,   455,   464,   475,   479,   483,   487,   491,
     496,   503,   505,   507,   509,   516,   523,   527,   531,   535,
     539,   543,   547,   551,   555,   559,   564,   571,   575,   581,
     586,   592,   596,   601,   605,   610,   612,   614,   616,   618,
     622,   635,   636,   639,   640,   645,   648,   653,   654,   656,
     658,   659,   662,   663,   666,   667,   671,   673,   677,   680,
     683,   684,   687,   692,   697,   698,   701,   704,   709,   714,
     715,   718,   720,   724,   725,   728,   731,   734,   737,   740,
     743,   746,   749,   751,   755,   757,   760,   763,   765,   766,
     768,   772,   774,   776,   780,   786,   790,   794,   796,   797,
     803,   807,   813,   820,   826,   827,   829,   831,   832,   834,
     836,   838,   841,   844,   845,   846,   848,   851,   856,   863,
     870,   877,   878,   881,   882,   884,   888,   892,   894,   902,
     905,   908,   911,   912,   919,   922,   927,   928,   931,   939,
     941,   945,   951,   953,   962,   973,   983,   995,  1006,  1019,
    1031,  1045,  1055,  1067,  1078,  1091,  1103,  1116,  1118,  1122,
    1124,  1129,  1134,  1139,  1146,  1148,  1152,  1155,  1159,  1165,
    1167,  1171,  1172,  1175,  1178,  1182,  1186,  1188,  1192,  1194,
    1198,  1204,  1206,  1217,  1228,  1246,  1259,  1279,  1291,  1298,
    1307,  1314,  1321,  1328,  1338,  1345,  1351,  1360,  1368,  1378,
    1387,  1398,  1408,  1409,  1411,  1414,  1416,  1425,  1432,  1433,
    1438,  1439,  1442,  1445,  1448,  1451,  1453,  1454,  1455,  1459,
    1461,  1465,  1469,  1470,  1477,  1479,  1481,  1485,  1489,  1497,
    1501,  1505,  1511,  1517,  1519,  1528,  1536,  1544,  1546,  1555,
    1556,  1559,  1562,  1566,  1572,  1578,  1586,  1592,  1594,  1599,
    1604,  1608,  1614,  1618,  1624,  1625,  1628,  1630,  1636,  1644,
    1652,  1662,  1674,  1676,  1679,  1683,  1685,  1695,  1707,  1708,
    1713,  1717,  1723,  1729,  1739,  1750,  1752,  1756,  1766,  1776,
    1786,  1793,  1805,  1814,  1815,  1817,  1820,  1822,  1826,  1832,
    1840,  1845,  1850,  1856,  1862,  1867,  1874,  1886,  1900,  1914,
    1930,  1935,  1942,  1944,  1948,  1950,  1954,  1956,  1960,  1961,
    1966,  1972,  1977,  1983,  1988,  1994,  1999,  2005,  2010,  2015,
    2019,  2023,  2027,  2030,  2034,  2039,  2044,  2046,  2050,  2051,
    2056,  2057,  2061,  2064,  2068,  2072,  2076,  2080,  2086,  2092,
    2098,  2102,  2108,  2111,  2119,  2125,  2133,  2139,  2142,  2146,
    2149,  2153,  2156,  2160,  2166,  2171,  2177,  2185,  2194,  2203,
    2211,  2218,  2225,  2231,  2232,  2236,  2242,  2243,  2245,  2246,
    2249,  2252,  2253,  2258,  2262,  2265,  2269,  2273,  2277,  2281,
    2285,  2289,  2293,  2297,  2301,  2305,  2307,  2309,  2311,  2313,
    2315,  2319,  2325,  2328,  2333,  2335,  2337,  2339,  2341,  2345,
    2349,  2353,  2357,  2363,  2369,  2371,  2373,  2375,  2379,  2383,
    2384,  2386,  2388,  2390,  2394,  2398,  2401,  2403,  2407,  2411
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     257,     0,    -1,   266,   251,    -1,   266,   251,   257,    -1,
       3,    -1,     3,   252,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   145,    -1,   258,    24,
     258,    -1,   258,    25,   258,    -1,   258,    26,   258,    -1,
     258,    27,   258,    -1,   258,    28,   258,    -1,   258,    29,
     258,    -1,    25,   258,    -1,   253,   258,   254,    -1,   258,
      12,   258,    -1,   258,    10,   258,    -1,   258,    11,   258,
      -1,   258,    21,   258,    -1,   258,    22,   258,    -1,   258,
      30,   258,    -1,   258,    23,   258,    -1,    18,   258,    -1,
      17,   258,    -1,   258,    20,   258,    -1,   258,    20,   253,
     267,   254,    -1,   258,    20,    37,   253,   267,   254,    -1,
     258,    20,   168,   253,   267,   254,    -1,   258,    20,    35,
     253,   267,   254,    -1,   258,    15,   145,    -1,   258,    15,
      18,   145,    -1,   258,    15,     6,    -1,   258,    15,    18,
       6,    -1,     8,     9,   258,    -1,   258,    19,   258,    40,
     258,    -1,   258,    18,    19,   258,    40,   258,    -1,   258,
      -1,   258,   255,   259,    -1,    -1,   259,    -1,    -1,   258,
      16,   253,   261,   259,   254,    -1,    -1,   258,    18,    16,
     253,   262,   259,   254,    -1,   258,    16,   253,   267,   254,
      -1,   258,    18,    16,   253,   267,   254,    -1,   209,   253,
     267,   254,    -1,     3,   253,   260,   254,    -1,   234,   253,
      26,   254,    -1,   234,   253,   258,   254,    -1,   235,   253,
     258,   254,    -1,   236,   253,   258,   254,    -1,   237,   253,
     258,   254,    -1,   238,   253,   258,   254,    -1,   210,   253,
     258,   255,   258,   255,   258,   254,    -1,   210,   253,   258,
     255,   258,   254,    -1,   210,   253,   258,   102,   258,   254,
      -1,   210,   253,   258,   102,   258,   105,   258,   254,    -1,
     211,   253,   258,   254,    -1,   211,   253,   263,   258,   102,
     258,   254,    -1,   211,   253,   263,   102,   258,   254,    -1,
     239,   253,   258,   254,    -1,   240,   253,   258,   254,    -1,
     241,   253,   258,   254,    -1,   242,   253,   258,   255,   258,
     254,    -1,   243,   253,   258,   255,   258,   255,   258,   254,
      -1,   244,   253,   258,   255,   258,   254,    -1,   214,   253,
     258,   255,   258,   254,    -1,   215,   253,   258,   255,   258,
     254,    -1,   216,   253,   258,   255,   258,   255,   258,   254,
      -1,   217,   253,   258,   255,   258,   255,   258,   254,    -1,
     218,   253,   258,   254,    -1,   219,   253,   258,   255,   258,
     254,    -1,   220,   253,   258,   255,   258,   254,    -1,   221,
     253,   258,   255,   258,   254,    -1,   222,   253,   258,   254,
      -1,   223,   253,   258,   254,    -1,   224,   253,   258,   254,
      -1,   225,   253,   258,   255,   258,   254,    -1,   225,   253,
     258,   254,    -1,   226,   253,   258,   255,   258,   254,    -1,
     227,   253,   258,   254,    -1,   228,   253,   258,   255,   258,
     254,    -1,   229,   253,   254,    -1,   230,   253,   258,   254,
      -1,   231,   253,   258,   254,    -1,   232,   253,   258,   254,
      -1,   233,   253,   254,    -1,   242,   253,   258,   255,   258,
     255,   258,   254,    -1,   242,   253,   258,   255,   258,   255,
     258,   255,   258,   254,    -1,   245,   253,   254,    -1,   246,
     253,   254,    -1,   247,   253,   254,    -1,   248,   253,   254,
      -1,   249,   253,   258,   254,    -1,   250,   253,   258,   255,
     258,   254,    -1,   130,    -1,   187,    -1,    53,    -1,   212,
     253,   258,   255,   264,   254,    -1,   213,   253,   258,   255,
     264,   254,    -1,   123,   258,    77,    -1,   123,   258,    78,
      -1,   123,   258,    82,    -1,   123,   258,    84,    -1,   123,
     258,   207,    -1,   123,   258,   206,    -1,   123,   258,   108,
      -1,   123,   258,   107,    -1,   123,   258,   110,    -1,    62,
     258,   265,    95,    -1,    62,   258,   265,    96,   258,    95,
      -1,    62,   265,    95,    -1,    62,   265,    96,   258,    95,
      -1,   204,   258,   186,   258,    -1,   265,   204,   258,   186,
     258,    -1,   258,    14,   258,    -1,   258,    18,    14,   258,
      -1,   258,    13,   258,    -1,   258,    18,    13,   258,    -1,
      57,    -1,    65,    -1,    66,    -1,   267,    -1,   175,   281,
     282,    -1,   175,   281,   282,   102,   285,   268,   269,   273,
     274,   277,   278,   279,    -1,    -1,   203,   258,    -1,    -1,
     106,    51,   270,   272,    -1,   258,   271,    -1,   270,   255,
     258,   271,    -1,    -1,    39,    -1,    85,    -1,    -1,   205,
     159,    -1,    -1,   111,   258,    -1,    -1,   148,    51,   275,
      -1,   276,    -1,   275,   255,   276,    -1,     3,   271,    -1,
       5,   271,    -1,    -1,   131,   258,    -1,   131,   258,   255,
     258,    -1,   131,   258,   133,   258,    -1,    -1,   105,   191,
      -1,   105,   166,    -1,   105,   191,   167,   132,    -1,   105,
     166,   167,   132,    -1,    -1,   121,   280,    -1,     3,    -1,
     280,   255,     3,    -1,    -1,   281,    35,    -1,   281,    79,
      -1,   281,    83,    -1,   281,   109,    -1,   281,   172,    -1,
     281,   162,    -1,   281,   170,    -1,   281,   169,    -1,   283,
      -1,   282,   255,   283,    -1,    26,    -1,   258,   284,    -1,
      41,     3,    -1,     3,    -1,    -1,   286,    -1,   285,   255,
     286,    -1,   287,    -1,   289,    -1,     3,   284,   296,    -1,
       3,   252,     3,   284,   296,    -1,   299,   288,     3,    -1,
     253,   285,   254,    -1,    41,    -1,    -1,   286,   290,   124,
     287,   294,    -1,   286,   172,   287,    -1,   286,   172,   287,
     147,   258,    -1,   286,   292,   291,   124,   287,   295,    -1,
     286,   142,   293,   124,   287,    -1,    -1,   115,    -1,    61,
      -1,    -1,   146,    -1,   129,    -1,   160,    -1,   129,   291,
      -1,   160,   291,    -1,    -1,    -1,   295,    -1,   147,   258,
      -1,   196,   253,   280,   254,    -1,   197,   125,   297,   253,
     298,   254,    -1,   116,   125,   297,   253,   298,   254,    -1,
     100,   125,   297,   253,   298,   254,    -1,    -1,   105,   124,
      -1,    -1,     3,    -1,   298,   255,     3,    -1,   253,   267,
     254,    -1,   300,    -1,    80,   301,   102,     3,   268,   274,
     277,    -1,   301,   128,    -1,   301,   152,    -1,   301,   116,
      -1,    -1,    80,   301,   302,   102,   285,   268,    -1,     3,
     303,    -1,   302,   255,     3,   303,    -1,    -1,   252,    26,
      -1,    80,   301,   102,   302,   196,   285,   268,    -1,   304,
      -1,    81,   185,     3,    -1,    81,   185,   118,   209,     3,
      -1,   305,    -1,    58,   117,     3,   147,     3,   253,   306,
     254,    -1,    58,   117,   118,   209,     3,   147,     3,   253,
     306,   254,    -1,    58,   194,   117,     3,   147,     3,   253,
     306,   254,    -1,    58,   194,   117,   118,   209,     3,   147,
       3,   253,   306,   254,    -1,    58,   117,     3,   147,     3,
     196,   198,   253,   306,   254,    -1,    58,   117,   118,   209,
       3,   147,     3,   196,   198,   253,   306,   254,    -1,    58,
     194,   117,     3,   147,     3,   196,   198,   253,   306,   254,
      -1,    58,   194,   117,   118,   209,     3,   147,     3,   196,
     198,   253,   306,   254,    -1,    58,   117,    70,     3,   147,
       3,   253,   306,   254,    -1,    58,   117,    70,   118,   209,
       3,   147,     3,   253,   306,   254,    -1,    58,   194,   117,
      70,     3,   147,     3,   253,   306,   254,    -1,    58,   194,
     117,    70,   118,   209,     3,   147,     3,   253,   306,   254,
      -1,    58,   117,    70,     3,   147,     3,   196,   198,   253,
     306,   254,    -1,    58,   194,   117,    70,     3,   147,     3,
     196,   198,   253,   306,   254,    -1,     3,    -1,   306,   255,
       3,    -1,   307,    -1,   239,   253,     3,   254,    -1,   240,
     253,     3,   254,    -1,   241,   253,     3,   254,    -1,   242,
     253,     3,   255,     3,   254,    -1,   308,    -1,    81,   117,
       3,    -1,   309,   311,    -1,   188,   185,     3,    -1,   188,
     185,     3,   255,   310,    -1,     3,    -1,   310,   255,     3,
      -1,    -1,   311,    59,    -1,   311,   158,    -1,   311,    45,
      43,    -1,   311,    44,    43,    -1,   312,    -1,   155,   185,
       3,    -1,   313,    -1,    36,   185,     3,    -1,    36,   185,
       3,   252,     3,    -1,   314,    -1,    32,   185,     3,    33,
      56,     3,    63,   253,   258,   254,    -1,    32,   185,     3,
      33,    56,     3,   194,   253,   345,   254,    -1,    32,   185,
       3,    33,    56,     3,   101,   125,   253,   342,   254,   156,
       3,   253,   343,   254,   344,    -1,    32,   185,     3,    33,
      56,     3,    63,   253,   258,   254,    18,   199,    -1,    32,
     185,     3,    33,    56,     3,   101,   125,   253,   342,   254,
     156,     3,   253,   343,   254,   344,    18,   199,    -1,    32,
     185,     3,    33,    56,     3,   151,   125,   253,   341,   254,
      -1,    32,   185,     3,    81,    56,     3,    -1,    32,   185,
       3,   157,    56,     3,   178,     3,    -1,    32,   185,     3,
      91,    56,     3,    -1,    32,   185,     3,    74,    56,     3,
      -1,    32,   185,     3,   199,    56,     3,    -1,    32,   185,
       3,    33,    69,     3,   352,   347,   315,    -1,    32,   185,
       3,    81,    69,     3,    -1,    32,   185,     3,    81,     3,
      -1,    32,   185,     3,   157,    69,     3,   178,     3,    -1,
      32,   185,     3,   157,     3,   178,     3,    -1,    32,   185,
       3,   139,    69,     3,   352,   347,   315,    -1,    32,   185,
       3,   139,     3,   352,   347,   315,    -1,    32,   185,     3,
      60,    69,     3,     3,   352,   347,   315,    -1,    32,   185,
       3,    60,     3,     3,   352,   347,   315,    -1,    -1,    98,
      -1,    34,     3,    -1,   316,    -1,   119,   318,   319,     3,
     320,   201,   322,   317,    -1,   119,   318,   319,     3,   320,
     267,    -1,    -1,   149,   125,   191,   325,    -1,    -1,   318,
     128,    -1,   318,    76,    -1,   318,   109,    -1,   318,   116,
      -1,   121,    -1,    -1,    -1,   253,   321,   254,    -1,     3,
      -1,   321,   255,     3,    -1,   253,   324,   254,    -1,    -1,
     322,   255,   323,   253,   324,   254,    -1,   258,    -1,    86,
      -1,   324,   255,   258,    -1,   324,   255,    86,    -1,   119,
     318,   319,     3,   174,   325,   317,    -1,     3,    20,   258,
      -1,     3,    20,    86,    -1,   325,   255,     3,    20,   258,
      -1,   325,   255,     3,    20,    86,    -1,   326,    -1,   161,
     318,   319,     3,   320,   201,   322,   317,    -1,   161,   318,
     319,     3,   174,   325,   317,    -1,   161,   318,   319,     3,
     320,   267,   317,    -1,   327,    -1,   191,   328,   285,   174,
     329,   268,   274,   277,    -1,    -1,   318,   128,    -1,   318,
     116,    -1,     3,    20,   258,    -1,     3,   252,     3,    20,
     258,    -1,   329,   255,     3,    20,   258,    -1,   329,   255,
       3,   252,     3,    20,   258,    -1,   157,   185,     3,   178,
       3,    -1,   330,    -1,    58,    71,   331,     3,    -1,    58,
     163,   331,     3,    -1,    81,    71,     3,    -1,    81,    71,
     118,   209,     3,    -1,    81,   163,     3,    -1,    81,   163,
     118,   209,     3,    -1,    -1,   118,   209,    -1,   332,    -1,
      58,    75,     3,    41,   352,    -1,    58,    75,     3,    41,
     352,    86,   258,    -1,    58,    75,     3,    41,   352,    18,
     145,    -1,    58,    75,     3,    41,   352,    63,   253,   258,
     254,    -1,    58,    75,     3,    41,   352,    18,   145,    63,
     253,   258,   254,    -1,   333,    -1,   197,     3,    -1,   197,
      71,     3,    -1,   334,    -1,    58,   338,   185,   331,     3,
     253,   339,   254,   335,    -1,    58,   338,   185,   331,     3,
     252,     3,   253,   339,   254,   335,    -1,    -1,   335,    38,
      20,     5,    -1,   335,    38,     5,    -1,   335,   147,     3,
      80,     3,    -1,   335,   147,     3,   181,     3,    -1,   335,
     164,    51,   198,   253,     3,   254,   165,     5,    -1,   335,
     164,    51,   153,   253,     3,   254,   253,   336,   254,    -1,
     337,    -1,   336,   255,   337,    -1,   164,     3,   201,   126,
     183,     4,   147,   143,     5,    -1,   164,     3,   201,   126,
     183,   136,   147,   143,     5,    -1,    58,   338,   185,   331,
       3,   253,   339,   254,   354,    -1,    58,   338,   185,   331,
       3,   354,    -1,    58,   338,   185,   331,     3,   252,     3,
     253,   339,   254,   354,    -1,    58,   338,   185,   331,     3,
     252,     3,   354,    -1,    -1,   179,    -1,   180,   179,    -1,
     340,    -1,   339,   255,   340,    -1,   151,   125,   253,   341,
     254,    -1,    56,     3,   151,   125,   253,   341,   254,    -1,
     125,   253,   280,   254,    -1,   117,   253,   280,   254,    -1,
     104,   117,   253,   280,   254,    -1,   104,   125,   253,   280,
     254,    -1,    63,   253,   258,   254,    -1,    56,     3,    63,
     253,   258,   254,    -1,   101,   125,   253,   342,   254,   156,
       3,   253,   343,   254,   344,    -1,   101,   125,   253,   342,
     254,   156,     3,   252,     3,   253,   343,   254,   344,    -1,
      56,     3,   101,   125,   253,   342,   254,   156,     3,   253,
     343,   254,   344,    -1,    56,     3,   101,   125,   253,   342,
     254,   156,     3,   252,     3,   253,   343,   254,   344,    -1,
     194,   253,   345,   254,    -1,    56,     3,   194,   253,   345,
     254,    -1,     3,    -1,   341,   255,     3,    -1,     3,    -1,
     342,   255,     3,    -1,     3,    -1,   343,   255,     3,    -1,
      -1,   344,   147,    80,    59,    -1,   344,   147,    80,   174,
     145,    -1,   344,   147,    80,   158,    -1,   344,   147,    80,
     174,    86,    -1,   344,   147,   191,    59,    -1,   344,   147,
     191,   174,   145,    -1,   344,   147,   191,   158,    -1,   344,
     147,   191,   174,    86,    -1,   344,   147,    80,   144,    -1,
     344,   147,   191,   144,    -1,   344,   135,   103,    -1,   344,
     135,   171,    -1,   344,   135,   150,    -1,   344,    72,    -1,
     344,    18,    72,    -1,   344,    72,   113,    73,    -1,   344,
      72,   113,   112,    -1,     3,    -1,   345,   255,     3,    -1,
      -1,   346,     3,   352,   347,    -1,    -1,   347,    18,   145,
      -1,   347,   145,    -1,   347,    86,     4,    -1,   347,    86,
       5,    -1,   347,    86,     7,    -1,   347,    86,     6,    -1,
     347,    86,   245,   253,   254,    -1,   347,    86,   246,   253,
     254,    -1,   347,    86,   247,   253,   254,    -1,   347,    86,
      57,    -1,   347,    86,   253,   258,   254,    -1,   347,    38,
      -1,   347,    38,   253,     5,   255,     5,   254,    -1,   347,
      38,   253,     5,   254,    -1,   347,    43,   253,     5,   255,
       5,   254,    -1,   347,    43,   253,     5,   254,    -1,   347,
      43,    -1,   347,   194,   125,    -1,   347,   194,    -1,   347,
     151,   125,    -1,   347,   125,    -1,   347,    64,     4,    -1,
     347,    63,   253,   258,   254,    -1,   347,    56,     3,   194,
      -1,   347,    56,     3,   151,   125,    -1,   347,    56,     3,
      63,   253,   258,   254,    -1,   347,    46,    42,    41,   253,
     258,   254,    47,    -1,   347,    46,    42,    41,   253,   258,
     254,    48,    -1,   347,    46,    42,    41,   253,   258,   254,
      -1,   347,    41,   253,   258,   254,    47,    -1,   347,    41,
     253,   258,   254,    48,    -1,   347,    41,   253,   258,   254,
      -1,    -1,   253,     5,   254,    -1,   253,     5,   255,     5,
     254,    -1,    -1,    52,    -1,    -1,   350,   192,    -1,   350,
     208,    -1,    -1,   351,    67,   174,     4,    -1,   351,    68,
       4,    -1,    55,   348,    -1,   177,   348,   350,    -1,   173,
     348,   350,    -1,   141,   348,   350,    -1,   122,   348,   350,
      -1,   114,   348,   350,    -1,    54,   348,   350,    -1,   154,
     348,   350,    -1,    87,   348,   350,    -1,    99,   348,   350,
      -1,    89,   348,   350,    -1,    90,    -1,   190,    -1,   184,
      -1,    88,    -1,   206,    -1,    67,   348,   351,    -1,   200,
     253,     5,   254,   351,    -1,    52,   348,    -1,   202,   253,
       5,   254,    -1,   189,    -1,    49,    -1,   140,    -1,   134,
      -1,   176,   349,   351,    -1,   182,   349,   351,    -1,   137,
     349,   351,    -1,   127,   349,   351,    -1,    94,   253,   353,
     254,   351,    -1,   174,   253,   353,   254,   351,    -1,    50,
      -1,   195,    -1,     4,    -1,   353,   255,     4,    -1,   355,
     288,   267,    -1,    -1,   116,    -1,   161,    -1,   356,    -1,
     174,   163,     3,    -1,   174,   163,    86,    -1,   174,   357,
      -1,   358,    -1,   357,   255,   358,    -1,     8,    20,   258,
      -1,     8,     9,   258,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   334,   334,   335,   340,   347,   348,   349,   367,   375,
     383,   389,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     420,   421,   422,   423,   426,   427,   428,   429,   430,   433,
     434,   437,   438,   441,   442,   445,   445,   446,   446,   447,
     448,   449,   453,   457,   458,   459,   460,   461,   462,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   507,   514,   521,   525,
     529,   535,   536,   537,   540,   541,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   555,   557,   559,   561,   565,
     573,   584,   585,   588,   589,   592,   600,   608,   619,   629,
     630,   644,   645,   646,   647,   650,   657,   665,   666,   667,
     670,   671,   674,   675,   678,   679,   682,   683,   686,   692,
     701,   702,   703,   704,   707,   708,   709,   710,   711,   714,
     715,   718,   719,   722,   723,   724,   725,   726,   727,   728,
     729,   730,   733,   734,   735,   743,   749,   750,   751,   754,
     755,   758,   759,   763,   770,   771,   772,   775,   776,   780,
     782,   784,   786,   788,   792,   793,   794,   797,   798,   801,
     802,   805,   806,   807,   810,   811,   814,   815,   819,   821,
     823,   825,   828,   829,   832,   833,   836,   840,   850,   858,
     859,   860,   861,   865,   869,   871,   875,   875,   877,   882,
     889,   896,   906,   913,   920,   930,   938,   948,   956,   965,
     974,   984,   992,  1001,  1010,  1020,  1029,  1041,  1046,  1051,
    1057,  1064,  1071,  1078,  1088,  1095,  1104,  1111,  1117,  1125,
    1131,  1139,  1140,  1141,  1142,  1143,  1147,  1154,  1163,  1170,
    1176,  1187,  1190,  1196,  1202,  1209,  1215,  1222,  1228,  1234,
    1240,  1246,  1252,  1258,  1264,  1270,  1276,  1282,  1288,  1294,
    1300,  1306,  1314,  1315,  1316,  1319,  1327,  1333,  1346,  1347,
    1350,  1351,  1352,  1353,  1354,  1357,  1357,  1360,  1361,  1364,
    1374,  1387,  1388,  1388,  1391,  1392,  1393,  1394,  1397,  1401,
    1402,  1403,  1404,  1410,  1413,  1419,  1424,  1430,  1438,  1447,
    1448,  1449,  1453,  1464,  1476,  1487,  1502,  1507,  1511,  1512,
    1516,  1518,  1520,  1522,  1526,  1527,  1531,  1535,  1537,  1539,
    1541,  1543,  1548,  1552,  1553,  1557,  1566,  1576,  1580,  1581,
    1582,  1583,  1584,  1585,  1587,  1591,  1592,  1595,  1610,  1617,
    1632,  1645,  1660,  1673,  1674,  1675,  1678,  1679,  1682,  1683,
    1684,  1685,  1686,  1687,  1688,  1689,  1690,  1692,  1694,  1696,
    1698,  1700,  1704,  1705,  1708,  1709,  1712,  1713,  1716,  1717,
    1718,  1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,  1727,
    1728,  1729,  1730,  1731,  1732,  1733,  1736,  1737,  1740,  1740,
    1750,  1751,  1752,  1753,  1754,  1755,  1756,  1757,  1758,  1759,
    1760,  1761,  1768,  1769,  1770,  1771,  1772,  1773,  1774,  1775,
    1776,  1777,  1778,  1779,  1780,  1781,  1782,  1783,  1784,  1785,
    1786,  1787,  1788,  1791,  1792,  1793,  1796,  1797,  1800,  1801,
    1802,  1805,  1806,  1807,  1811,  1812,  1813,  1814,  1815,  1816,
    1817,  1818,  1819,  1820,  1821,  1822,  1823,  1824,  1825,  1826,
    1827,  1828,  1829,  1830,  1831,  1832,  1833,  1834,  1835,  1836,
    1837,  1838,  1839,  1840,  1841,  1842,  1845,  1846,  1849,  1862,
    1863,  1864,  1868,  1871,  1872,  1873,  1874,  1874,  1876,  1877
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
  "expr", "val_list", "opt_val_list", "@1", "@2", "trim_ltb",
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
  "insert_vals_list", "@3", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_domain_stmt",
  "use_database_stmt", "create_table_stmt", "opt_table_options",
  "shard_range_list", "shard_range_def", "opt_temporary",
  "create_col_list", "create_definition", "pk_column_list",
  "fk_column_list", "fk_ref_column_list", "fk_actions",
  "unique_column_list", "@4", "column_atts", "opt_length", "opt_binary",
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
     496,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   256,   257,   257,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   259,   259,   260,   260,   261,   258,   262,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   263,   263,   263,   258,   258,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   258,   258,   258,   258,   265,
     265,   258,   258,   258,   258,   258,   258,   258,   266,   267,
     267,   268,   268,   269,   269,   270,   270,   271,   271,   271,
     272,   272,   273,   273,   274,   274,   275,   275,   276,   276,
     277,   277,   277,   277,   278,   278,   278,   278,   278,   279,
     279,   280,   280,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   282,   282,   282,   283,   284,   284,   284,   285,
     285,   286,   286,   287,   287,   287,   287,   288,   288,   289,
     289,   289,   289,   289,   290,   290,   290,   291,   291,   292,
     292,   293,   293,   293,   294,   294,   295,   295,   296,   296,
     296,   296,   297,   297,   298,   298,   299,   266,   300,   301,
     301,   301,   301,   300,   302,   302,   303,   303,   300,   266,
     304,   304,   266,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   306,   306,   306,
     307,   307,   307,   307,   266,   308,   266,   309,   309,   310,
     310,   311,   311,   311,   311,   311,   266,   312,   266,   313,
     313,   266,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   315,   315,   315,   266,   316,   316,   317,   317,
     318,   318,   318,   318,   318,   319,   319,   320,   320,   321,
     321,   322,   323,   322,   324,   324,   324,   324,   316,   325,
     325,   325,   325,   266,   326,   326,   326,   266,   327,   328,
     328,   328,   329,   329,   329,   329,   266,   266,   330,   330,
     266,   266,   266,   266,   331,   331,   266,   332,   332,   332,
     332,   332,   266,   333,   333,   266,   334,   334,   335,   335,
     335,   335,   335,   335,   335,   336,   336,   337,   337,   334,
     334,   334,   334,   338,   338,   338,   339,   339,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   341,   341,   342,   342,   343,   343,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   345,   345,   346,   340,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   348,   348,   348,   349,   349,   350,   350,
     350,   351,   351,   351,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   353,   353,   354,   355,
     355,   355,   266,   356,   356,   356,   357,   357,   358,   358
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       5,     6,     6,     6,     3,     4,     3,     4,     3,     5,
       6,     1,     3,     0,     1,     0,     6,     0,     7,     5,
       6,     4,     4,     4,     4,     4,     4,     4,     4,     8,
       6,     6,     8,     4,     7,     6,     4,     4,     4,     6,
       8,     6,     6,     6,     8,     8,     4,     6,     6,     6,
       4,     4,     4,     6,     4,     6,     4,     6,     3,     4,
       4,     4,     3,     8,    10,     3,     3,     3,     3,     4,
       6,     1,     1,     1,     6,     6,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     6,     3,     5,     4,
       5,     3,     4,     3,     4,     1,     1,     1,     1,     3,
      12,     0,     2,     0,     4,     2,     4,     0,     1,     1,
       0,     2,     0,     2,     0,     3,     1,     3,     2,     2,
       0,     2,     4,     4,     0,     2,     2,     4,     4,     0,
       2,     1,     3,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     1,     2,     2,     1,     0,     1,
       3,     1,     1,     3,     5,     3,     3,     1,     0,     5,
       3,     5,     6,     5,     0,     1,     1,     0,     1,     1,
       1,     2,     2,     0,     0,     1,     2,     4,     6,     6,
       6,     0,     2,     0,     1,     3,     3,     1,     7,     2,
       2,     2,     0,     6,     2,     4,     0,     2,     7,     1,
       3,     5,     1,     8,    10,     9,    11,    10,    12,    11,
      13,     9,    11,    10,    12,    11,    12,     1,     3,     1,
       4,     4,     4,     6,     1,     3,     2,     3,     5,     1,
       3,     0,     2,     2,     3,     3,     1,     3,     1,     3,
       5,     1,    10,    10,    17,    12,    19,    11,     6,     8,
       6,     6,     6,     9,     6,     5,     8,     7,     9,     8,
      10,     9,     0,     1,     2,     1,     8,     6,     0,     4,
       0,     2,     2,     2,     2,     1,     0,     0,     3,     1,
       3,     3,     0,     6,     1,     1,     3,     3,     7,     3,
       3,     5,     5,     1,     8,     7,     7,     1,     8,     0,
       2,     2,     3,     5,     5,     7,     5,     1,     4,     4,
       3,     5,     3,     5,     0,     2,     1,     5,     7,     7,
       9,    11,     1,     2,     3,     1,     9,    11,     0,     4,
       3,     5,     5,     9,    10,     1,     3,     9,     9,     9,
       6,    11,     8,     0,     1,     2,     1,     3,     5,     7,
       4,     4,     5,     5,     4,     6,    11,    13,    13,    15,
       4,     6,     1,     3,     1,     3,     1,     3,     0,     4,
       5,     4,     5,     4,     5,     4,     5,     4,     4,     3,
       3,     3,     2,     3,     4,     4,     1,     3,     0,     4,
       0,     3,     2,     3,     3,     3,     3,     5,     5,     5,
       3,     5,     2,     7,     5,     7,     5,     2,     3,     2,
       3,     2,     3,     5,     4,     5,     7,     8,     8,     7,
       6,     6,     5,     0,     3,     5,     0,     1,     0,     2,
       2,     0,     4,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       3,     5,     2,     4,     1,     1,     1,     1,     3,     3,
       3,     3,     5,     5,     1,     1,     1,     3,     3,     0,
       1,     1,     1,     3,     3,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   373,   222,     0,   300,     0,     0,   300,
       0,   163,     0,   300,     0,     0,     0,   128,   217,   229,
     232,   254,   261,   266,   268,   271,   295,   323,   327,   337,
     346,   352,   355,   502,     0,     0,   344,     0,     0,   344,
     374,     0,     0,     0,     0,     0,     0,     0,     0,   306,
       0,     0,   306,     0,     0,   505,   506,     0,     0,     0,
       0,   353,     0,     1,     2,   256,     0,   269,     0,     0,
       0,     0,     0,     0,     0,   375,     0,   344,   226,     0,
     221,   219,   220,     0,   340,     0,   255,   342,     0,   230,
       0,   302,   303,   304,   305,   301,     0,   267,     0,     0,
       0,     0,   503,   504,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   174,   164,   125,     0,   126,   127,
     165,   166,   167,    11,   169,   171,   170,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   178,   129,   172,   257,   304,   301,   178,     0,     0,
     179,   181,   182,   188,   354,     3,     0,     0,   262,   263,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   345,
     338,     0,     0,     0,     0,     0,   339,     0,     0,     0,
       0,     0,   224,   131,     0,     0,     0,     0,     0,     0,
     307,     0,   307,   509,   508,   507,     0,    43,     0,    28,
      27,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     175,     0,     0,     0,     0,   211,     0,     0,     0,     0,
     196,   195,   199,   203,   200,     0,     0,   197,   187,     0,
     265,   264,     0,     0,     0,     0,     0,   285,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   270,   485,   494,
     453,   453,   453,   453,   453,   478,   453,   475,     0,   453,
     453,   453,   456,   487,   456,   486,   453,   453,   453,     0,
     456,   453,   456,   477,   484,   476,   495,     0,     0,   479,
     347,     0,     0,     0,     0,     0,     0,     0,     0,   499,
     227,     0,   144,     0,   131,   226,   341,   343,   231,     0,
       0,     0,   336,     0,     0,     5,    41,    44,     0,    38,
       0,     0,   117,     0,     0,     0,     0,   103,   101,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96,    97,    98,
       0,     0,    19,    21,    22,    20,   123,   121,    36,     0,
      34,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    23,    24,    26,    12,    13,    14,    15,    16,
      17,    25,   176,   131,   173,   259,   258,   178,     0,     0,
       0,   183,   216,   186,     0,   131,   180,   197,   197,     0,
     190,     0,   198,     0,   185,     0,     0,     0,     0,   281,
     278,   284,   280,   420,     0,     0,     0,     0,   282,     0,
     482,   458,   464,   461,   458,   458,     0,   458,   458,   458,
     457,   461,   461,   458,   458,   458,     0,   461,   458,   461,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   500,   501,     0,   418,   370,   188,
     132,     0,   150,   131,   223,   225,     0,   298,   309,     0,
       0,   297,   298,     0,   298,     0,    52,     0,   115,     0,
       0,     0,    51,     0,     0,    63,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,    80,    81,
      82,    84,     0,     0,    86,     0,    89,    90,    91,    53,
      54,    55,    56,    57,    58,    66,    67,    68,     0,     0,
       0,    99,     0,    37,    35,     0,     0,   124,   122,    47,
       0,     0,     0,     0,     0,     0,   133,     0,   211,   213,
     213,   213,     0,     0,     0,   144,   201,   202,     0,     0,
     204,     0,     0,     0,     0,     0,   420,   420,     0,   292,
     420,   287,     0,     0,     0,   470,   480,   472,   474,   496,
       0,   473,   469,   468,   491,   490,   467,   471,   466,     0,
     488,   465,   489,     0,     0,   349,     0,   348,     0,   247,
       0,     0,     0,     0,     0,   249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   499,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   376,     0,     0,     0,     0,
     218,   228,     0,     0,     0,   318,   308,     0,     0,   298,
     325,   298,   326,    42,   119,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,    39,     0,     0,     0,    30,     0,
     142,   260,   184,     0,     0,     0,     0,   332,     0,     0,
     150,   193,   191,     0,     0,   189,   205,     0,     0,     0,
       0,     0,   292,   292,   420,     0,     0,   432,     0,   437,
       0,     0,     0,     0,     0,   293,   441,   422,     0,   439,
     289,   292,   279,   286,   454,     0,   459,   460,     0,     0,
     461,     0,   461,   461,   483,     0,     0,     0,     0,     0,
       0,     0,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   418,   372,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   358,   418,     0,   498,
     137,   137,   145,   146,   151,   320,   319,     0,     0,   310,
     315,   314,     0,   312,   296,   324,   116,   120,     0,    61,
      60,     0,    65,     0,     0,   104,   105,    72,    73,     0,
       0,    77,    78,    79,    83,    85,    87,    69,     0,     0,
      71,   100,    46,     0,    50,    40,    33,    31,    32,     0,
       0,   144,   212,     0,     0,     0,     0,     0,     0,   328,
     206,     0,   192,     0,     0,     0,   416,     0,   283,   291,
     292,   421,   294,     0,     0,     0,     0,     0,     0,   442,
     423,   424,   426,   425,   430,     0,     0,     0,     0,   440,
     438,   288,     0,     0,   463,   492,   497,   493,   481,     0,
     350,     0,     0,     0,     0,     0,   248,     0,   241,     0,
       0,     0,     0,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,     0,
       0,     0,     0,   356,   369,   377,   420,   138,   139,   148,
     149,     0,     0,     0,     0,     0,   311,     0,     0,     0,
       0,    64,   106,   107,   108,   109,   113,   112,   114,   111,
     110,     0,     0,     0,     0,    48,   137,   140,   143,   150,
     214,     0,     0,     0,   333,   334,     0,     0,   272,   394,
       0,   392,     0,   273,     0,   290,     0,     0,     0,     0,
       0,     0,   444,     0,     0,     0,     0,     0,   455,   462,
       0,   237,   250,   251,   252,     0,     0,     0,     0,   234,
       0,     0,   243,     0,     0,     0,   358,     0,     0,     0,
       0,   384,     0,     0,     0,   381,     0,   380,     0,   390,
       0,     0,     0,   419,   147,   153,   152,   299,   322,   321,
     317,   316,     0,    62,    59,    74,    75,    93,     0,    70,
     135,     0,     0,   134,   154,   210,     0,   209,   208,     0,
     207,     0,     0,     0,   277,     0,   417,   434,     0,   452,
     436,     0,     0,     0,   445,   443,   427,   428,   429,   431,
     351,     0,   245,   242,     0,   239,     0,     0,     0,   236,
     357,   371,     0,     0,     0,     0,     0,   382,   383,   162,
     378,   360,     0,     0,     0,     0,     0,   141,   137,     0,
     159,   215,   335,   275,     0,   395,   393,     0,   450,   451,
       0,     0,     0,   253,   238,   246,   244,     0,   385,     0,
       0,   391,     0,   359,     0,     0,     0,     0,   313,    94,
     136,   156,   155,     0,   130,     0,   433,   435,   449,   446,
     240,     0,   379,     0,   361,   362,     0,     0,     0,     0,
     160,     0,   447,   448,     0,     0,     0,     0,     0,   158,
     157,   396,     0,     0,     0,     0,     0,     0,   398,     0,
       0,     0,     0,   398,     0,     0,   274,   397,     0,     0,
       0,   386,     0,     0,   365,   363,     0,   412,     0,     0,
       0,   398,   398,     0,     0,   364,     0,   413,   276,     0,
     409,   411,   410,     0,     0,     0,   388,   387,     0,   366,
     414,   415,   399,   407,   401,     0,   403,   408,   405,     0,
     398,     0,   402,   400,   406,   404,   389,     0,     0,     0,
       0,     0,     0,     0,   367,   368
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,   396,   397,   398,   625,   761,   411,   743,   234,
      16,    17,   382,   770,  1027,   999,  1113,   911,   562,   862,
     863,   720,  1170,  1204,   989,    57,   172,   173,   300,   179,
     180,   181,   319,   182,   316,   503,   317,   499,   785,   786,
     491,   774,  1031,   183,    18,    44,    83,   212,    19,    20,
     694,   695,    21,    22,   486,    65,    23,    24,    25,   810,
      26,   725,    49,    96,   391,   569,   729,  1008,   872,   567,
      27,    28,    60,   495,    29,    69,    30,    31,    32,   993,
    1253,  1254,    43,   714,   715,  1042,  1040,  1232,  1246,   927,
     716,   659,   520,   531,   665,   666,   370,   670,   558,   559,
      33,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -938
static const yytype_int16 yypact[] =
{
    3743,   -45,   -40,   443,  -938,   285,  -938,   -26,   103,  -938,
     119,  -938,   250,    12,    66,    82,    78,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,   328,   401,   281,   418,    60,   281,
    -938,   258,   325,   255,   147,    44,   442,    50,    56,   455,
     492,   522,   455,   301,    65,   275,  -938,   694,   539,   441,
      14,  -938,   546,  -938,  3743,     7,   252,   292,   344,   553,
     517,   419,   130,   372,   570,  -938,   244,   281,   316,   583,
    -938,  -938,  -938,    26,  -938,   384,  -938,  -938,   391,  -938,
     399,  -938,  -938,  -938,  -938,  -938,   610,  -938,   432,   623,
    2561,  2561,  -938,  -938,   664,   148,  -938,  -938,  -938,  -938,
     619,  2561,  2561,  2561,  -938,  -938,  -938,  1313,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,   424,   426,
     434,   438,   452,   465,   472,   477,   479,   481,   489,   502,
     505,   523,   578,   585,   587,   612,   637,   696,   728,   751,
     762,   763,   764,   765,   766,   774,   789,   790,   791,   793,
     794,   795,   796,   797,   799,   800,   801,   803,   804,   805,
    2561,  4060,    29,  -938,   490,    15,    17,    21,    39,  -103,
     395,  -938,  -938,   655,  -938,  -938,   830,   833,  -938,  -938,
     485,    72,   824,   303,  1003,   300,   459,  1004,  1058,  -938,
    -938,  3753,  1060,   917,   862,  1069,  -938,   926,   146,   865,
    1074,  1055,  -938,   320,  -120,    14,  1079,  1080,  1081,  1082,
    -100,  1083,   -97,  4107,  4107,  -938,  1085,  2561,  2561,   742,
     742,  -938,  2561,  2095,   239,   915,  2561,   948,  2561,  2561,
    2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,
    2561,  2561,  2561,  2561,  2561,   835,  2561,  2561,  2561,   837,
    1359,  2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,
    2561,   838,   840,   841,   842,  2561,  2561,  2438,  -938,  2561,
    2561,  2561,  2561,  2561,    27,   845,   425,  2561,  1062,  2561,
    2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,  2561,  1102,
    -938,    14,  2561,  1117,  1118,   195,   868,   297,  1120,    14,
    -938,  -938,  -938,   -24,  -938,    14,  1001,   980,  -938,  1127,
    -938,  -938,  1128,  1129,  1130,  1131,  1140,  -938,  1196,  1197,
    1199,  3753,  1200,   951,  1201,  1202,  1203,  -938,  -938,  -938,
     955,   955,   955,   955,   955,  -938,   955,  -938,   956,   955,
     955,   955,  1158,  -938,  1158,  -938,   955,   955,   955,   958,
    1158,   955,  1158,  -938,  -938,  -938,  -938,   959,   960,  -938,
     282,   126,  1211,  1212,  1070,  1215,  1073,  1007,  1218,   128,
    -938,  2561,  1103,    14,    87,   316,  -938,  -938,  -938,  1219,
    1262,   310,  -938,  1219,   311,  -938,   786,  -938,  1012,  4107,
    1329,   242,  -938,  2561,  2561,  1013,    96,  -938,  -938,  -938,
    2630,  1610,   964,  1126,  1213,  1234,  1376,  1416,  2651,  1451,
    1472,  1626,  2675,  2697,  2718,    73,  1667,  2739,  1738,  -938,
    2816,  2837,  2867,  -938,  1014,  2888,  2912,  2934,  2955,  2976,
    2997,  3018,  3039,  1773,  1874,  2036,  -938,  -938,  -938,  -938,
    3074,  2122,  -938,  1010,  1088,  2067,  4125,  4125,  -938,    22,
    -938,   915,  2561,  2561,  1016,  2561,  4014,  1017,  1061,  1071,
    1716,   871,   821,   859,   627,   687,   687,  1283,  1283,  1283,
    1283,  -938,  -938,    87,  -938,  -938,  1067,   322,  1198,  1204,
    1207,  -938,  -938,  -938,     5,   110,   395,   980,   980,  1209,
    1178,    14,  -938,  1210,  -938,   190,  3753,  3753,  1323,  -938,
    -938,  -938,  -938,  -938,  3753,  1324,  1150,  1157,  -938,  1331,
    -938,  -938,  -938,  -938,  -938,  -938,  1333,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  1333,  -938,  -938,  -938,
    1341,  1355,  1216,  1115,  2561,  1171,    20,   144,  1224,  1369,
     157,  1370,  1371,  1233,  -938,  -938,  1379,   260,  -938,   655,
    4107,  1332,  1276,    87,  -938,  -938,  1373,   -92,  -938,   323,
    1155,  -938,   -92,  1155,  1260,  2561,  -938,  2561,  -938,  2561,
    3950,  1984,  -938,  2561,  2561,  -938,  2561,  2282,  1287,  1287,
    2561,  2561,  2561,  2561,  -938,  2561,  2561,  2561,  -938,  -938,
    -938,  -938,  2561,  2561,  -938,  2561,  -938,  -938,  -938,  -938,
    -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  2561,  2561,
    2561,  -938,  2561,  -938,  -938,  2561,  1159,  4125,  4125,   915,
    4084,  2561,   915,   915,   915,  1160,  1305,  1409,   195,  1310,
    1310,  1310,  2561,  1414,  1415,  1103,  -938,  -938,    14,  2561,
     -67,    14,  1166,  1295,  1297,  1170,  -938,  -938,  3753,  3731,
    -938,  -938,  1430,  1444,   336,   -50,   531,   -50,   -50,  -938,
     348,   -50,   -50,   -50,   531,   531,   -50,   -50,   -50,   361,
     531,   -50,   531,  1194,  1195,  1387,  2561,  4107,  1206,  -938,
    1250,  1252,  1253,  1254,   364,  -938,  1255,    20,  1448,   194,
    1256,    20,   197,  1308,  1449,   -80,  1453,  1257,  1335,   396,
    1258,  1259,  1383,  1261,   366,  -938,  1454,   915,   304,  2561,
    -938,  -938,  1967,  1384,  1510,  -938,  -938,  1513,  2013,   -85,
    -938,   -85,  -938,  -938,  4107,  3971,  -938,  2561,  2579,   404,
    3104,  2561,  2561,  1264,  1265,  3125,  3149,  2333,  2392,  3171,
    3192,  3213,  3234,  3255,  3276,   453,  2413,  3297,  3319,  1266,
    -938,  2561,  1267,  2561,   758,  1311,  1356,  1357,  -938,  1516,
    1508,  -938,  -938,  1440,  1367,  1368,  1372,  4107,  1602,     6,
    1276,  -938,  4107,  2561,  1377,  -938,  -938,   -67,  2561,  1380,
    1381,  1620,  3731,  3731,  -938,  1479,  1623,  1390,  1404,  1405,
    1587,  1629,  1406,  1656,    33,  -938,  -938,  -938,  1536,  1537,
    -938,  3731,  -938,  -938,  -938,  1658,  -938,  -938,  1490,  1661,
    -938,  1662,  -938,  -938,  -938,  1417,  3341,    20,  1665,  1666,
    1670,  1671,  -938,  1681,  1445,   370,  1446,  1502,    20,  1450,
     406,  1503,    20,  1699,   199,   260,  -938,   193,  2561,  1452,
    1455,  1456,  1701,  1701,  1457,  1620,   214,   260,  3753,  -938,
     254,   254,  1458,  -938,   478,  -938,  4107,  1520,  1687,  -938,
    -938,  4107,   409,  -938,  -938,  -938,  -938,  4107,  2561,  -938,
    -938,  2561,  -938,  3362,  3708,  -938,  -938,  -938,  -938,  2561,
    2561,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  2561,  2561,
    -938,  -938,  -938,  1460,  -938,   758,  -938,  -938,  -938,  2561,
    2561,  1103,  -938,  1712,  1712,  1712,  2561,  2561,  1713,  -938,
    4107,  1701,  -938,  3386,  1714,  1715,  -938,   413,  -938,  -938,
    3731,  -938,  -938,  1720,  2561,  1721,  1688,   -17,  2561,  -938,
    -938,  -938,  -938,  -938,  -938,  1475,  1477,  1478,  2561,  -938,
    -938,  -938,  1481,  1728,  -938,   531,  -938,   531,   531,  2561,
    -938,   415,  1482,  1483,  1484,  1485,  -938,    20,  -938,    20,
    1486,   440,    20,  -938,  1489,   449,  1491,  1545,    20,   467,
    1492,  1621,  1622,  1517,  3408,  1714,  1701,  1701,  -938,   469,
     473,  1715,   482,    -3,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,   304,  2561,  2561,  1219,  2264,  -938,  2310,  1518,  3429,
    3450,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  3471,  3492,   620,  3513,  -938,  3992,   202,  4107,  1276,
    -938,   484,   486,   495,  4107,  4107,  1749,   520,  1754,  -938,
     535,  -938,   538,  -938,  1771,  -938,   540,  3534,   563,  1522,
    1523,  1652,  -938,  3556,  1525,  1526,  1550,  3578,  -938,  -938,
    3599,  -938,  -938,  -938,  -938,  1787,   565,   568,    20,  -938,
     571,    20,  -938,    20,  1552,   573,   214,  2561,  1553,  1554,
    1620,  -938,   575,   580,   582,  -938,  1805,  -938,   600,  -938,
     527,  1806,  1759,   541,  -938,  4107,  4107,  1556,  -938,  4107,
    -938,  4107,  2013,  -938,  -938,  -938,  -938,  -938,  2561,  -938,
    -938,  1653,  2561,  -938,  1708,  -938,  1811,  -938,  -938,  2561,
    -938,  1616,  1660,  1814,  -938,  1815,  -938,  -938,  1857,   662,
    -938,  1859,  2561,  2561,  -938,  -938,  -938,  -938,  -938,  -938,
    -938,  1611,  -938,  -938,   603,  -938,   607,   613,    20,  -938,
      -3,  -938,  3623,  1714,  1715,   615,  1710,  -938,  -938,  -938,
    -938,  -938,  1862,   189,   205,   617,  3645,  -938,  3992,   318,
    1747,  -938,  4107,  -938,  1866,  -938,  -938,  1617,  -938,  -938,
    1618,  3666,  3687,  -938,  -938,  -938,  -938,   624,  -938,   703,
     705,  -938,  1867,  -938,  1870,  1871,  1624,  1625,  -938,  -938,
    -938,  1709,  1739,  1701,  -938,  1627,  -938,  -938,   914,  -938,
    -938,  1719,  -938,   711,  -938,  -938,  1876,  1879,  1751,  1775,
    1650,  1905,  -938,  -938,  1906,  1907,  1905,  1657,  1659,  -938,
    -938,  -938,   713,   717,  1663,   741,  1664,  1750,  -938,  1909,
    1911,  1905,  1905,  -938,  1755,  1913,   236,  -938,  1668,   743,
     745,   314,  1917,   748,  -938,  -938,   -42,  1810,   217,    75,
    1905,  -938,  -938,  1852,  1766,  -938,  1755,  -938,  -938,    -8,
    -938,  -938,  -938,   192,   238,   752,   314,   314,  1842,  -938,
    -938,  -938,  -938,  -938,  -938,   212,  -938,  -938,  -938,   215,
    -938,  1793,  -938,  -938,  -938,  -938,   314,    30,  1830,  1831,
    1836,  1837,  1976,  1977,  -938,  -938
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -938,  1919,   -57,  -546,  -938,  -938,  -938,  -938,  1397,  1756,
    -938,  -174,  -335,  -938,  -938,  -850,  -938,  -938,  -635,  -938,
     986,  -758,  -938,  -938,  -848,  -938,  -938,  1686,  -170,  -137,
    1682,  -299,  1431,  -938,  -938,   474,  -938,  -938,  -938,  1214,
    1385,   368,    97,  -938,  -938,  -938,  1936,  1637,  -938,  -938,
    -695,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -938,  -761,
    -938,  -502,   306,  1973,  1804,  -938,  1461,  -938,   925,  -392,
    -938,  -938,  -938,  -938,  -938,   359,  -938,  -938,  -938,   961,
    -938,   769,  -938,  1191,  1182,  -933,  -937,  -646,  -673,  -828,
    -938,  -648,   332,   247,   219,  -518,  -264,  1504,  -702,  -938,
    -938,  -938,  1937
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -500
static const yytype_int16 yytable[] =
{
     171,   572,   835,   846,   306,   990,   840,   305,   792,   793,
     780,  1000,   811,   674,   675,  -329,   500,   177,  -331,   680,
    -330,   682,   919,   689,   278,   642,   917,   992,   623,   733,
    1267,   928,   929,   458,  1298,  1090,   554,   940,   941,   942,
     943,   307,   177,   223,   224,   459,  1050,    84,  1082,   564,
     951,   186,   187,    87,   229,   230,   231,   723,  1088,    89,
     233,   405,   299,    71,   723,  1280,   188,   513,   102,    61,
     730,   308,   732,  1037,   389,   324,   383,   393,   384,   759,
     783,   555,    63,   279,   280,   281,   282,   283,   284,   285,
     944,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,  1281,   497,   279,   280,   281,   282,
     283,   284,   285,   277,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,    53,   215,   784,
      72,   301,   961,   203,  1051,   216,   498,    62,  1083,  1084,
      34,   325,   816,   971,  1091,    35,   930,   975,   636,   376,
      78,   103,   309,   390,   994,  1273,   390,  1268,   817,    50,
     645,  1092,    85,   724,   483,   189,  1299,   624,    88,  1045,
     873,   399,   460,   845,    90,   400,  1110,  1052,    73,   406,
     410,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   583,   430,
     431,   432,   650,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,    11,   903,  1189,   571,   450,   451,
     574,  1190,   453,   454,   455,   456,   457,   874,   721,   875,
     466,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   656,   657,   554,   171,   563,   207,   204,    79,
     660,  1282,  1155,   652,  1256,  -499,   980,   643,   918,   690,
     691,   692,   693,    80,   377,  -329,  1274,   178,  -331,  1194,
    -330,  1114,  1066,   304,  1067,    81,  1029,  1070,   945,   946,
     947,   216,    54,  1075,   302,   190,   948,   626,    51,   555,
     381,   653,   178,   997,   981,   488,   635,  1286,  1292,    82,
     542,  1294,   955,   331,   957,   958,   327,   860,  1257,   861,
     100,   489,   191,   381,   208,    52,   706,   638,  1200,    59,
    1270,   101,   545,   707,   560,   278,   192,   601,   602,    64,
     554,    66,  1263,   193,   402,   403,  1283,   578,   579,   998,
     696,   654,   309,   194,   982,   543,   580,   581,  1093,   781,
    1284,   584,   787,   700,   587,  1220,    45,  1293,  1196,   328,
    1295,   708,   209,   299,   709,   644,  1285,  1271,   544,   332,
    1195,  1258,   329,  1144,  1151,   555,  1146,   710,  1147,   546,
     556,   557,  1287,  1259,   655,   711,  1257,   983,  1272,  -499,
     837,   195,   490,   841,   794,   977,  1288,   697,    74,    68,
     226,   227,    46,  1197,    67,   627,   628,  1111,   630,   196,
     701,   712,  1289,   277,   279,   280,   281,   282,   283,   284,
     285,    70,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,    58,   210,    75,   462,   463,
      77,   464,    76,   404,   465,    86,   404,   838,    47,  1258,
     842,   197,   978,  1187,   713,   762,   310,  1112,   765,   766,
     767,  1259,   333,   279,   280,   281,   282,   283,   284,   285,
      48,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,  1201,    11,    11,   687,   279,   280,
     281,   282,   283,   284,   285,    97,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,  1202,
     311,   570,   573,   850,    36,   334,  -226,    91,    37,  -194,
     734,   851,   735,   381,   312,    98,   738,   739,   335,   740,
     104,    91,  1161,   745,   746,   747,   748,   313,   749,   750,
     751,   322,   174,   859,   198,   752,   753,  1162,   754,   184,
      92,   493,   309,   199,   323,   314,   200,   175,   201,   795,
      38,   755,   756,   757,    92,   758,   202,   315,   211,   176,
    1251,    93,   211,   206,   764,  -226,    94,   726,   727,   797,
    1235,   205,   798,    95,   799,   777,   213,   800,  1276,  1277,
     814,   815,   782,   217,   996,  1249,  1250,   801,   818,   819,
     218,   532,   820,   821,   802,   803,    39,   537,   219,   539,
     221,  1002,  1097,   220,  1275,   822,   821,  1296,   832,   833,
     856,   857,    40,    41,   968,   833,   222,   804,   228,   826,
     279,   280,   281,   282,   283,   284,   285,    42,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   292,   293,   294,   295,   296,   297,   298,   880,   881,
     973,   833,   864,  1006,  1007,   866,   806,  1043,  1044,  1061,
     833,   871,    53,   521,   522,   523,   524,   235,   525,   236,
     877,   527,   528,   529,   883,   884,   807,   237,   533,   534,
     535,   238,   808,   538,  1069,   833,   318,   105,   106,   107,
     108,   109,   110,  1072,   833,   239,   905,   897,   898,  1178,
    1179,   111,   112,   294,   295,   296,   297,   298,   240,   113,
     114,  1076,   857,  1085,  1086,   241,   920,  1087,  1086,   115,
     242,   923,   243,  1003,   244,   809,  1089,  1044,  1115,  1116,
    1117,  1116,   245,   667,   668,   303,   671,   672,   673,  1118,
    1116,   116,   676,   677,   678,   246,   117,   681,   247,   118,
     119,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   120,  1120,  1086,   248,   121,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,  1122,
    1123,   984,  1124,  1125,  1127,  1128,   279,   280,   281,   282,
     283,   284,   285,   122,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,  1130,  1131,  1142,
     833,  1009,  1143,   833,  1010,  1145,   833,  1149,   833,  1156,
    1123,   249,  1021,  1022,  1157,  1086,  1158,  1086,   250,   123,
     251,  1023,  1024,   290,   291,   292,   293,   294,   295,   296,
     297,   298,  1026,  1028,  1160,  1125,   124,  1184,   833,  1034,
    1035,  1185,   833,   125,   126,   252,   127,  1186,   833,  1191,
    1044,  1198,  1007,   320,  1107,  1108,   321,  1047,  1210,   833,
     326,  1053,   291,   292,   293,   294,   295,   296,   297,   298,
     253,  1057,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,  1060,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,  1095,  1096,   170,  1099,   254,
    1101,   105,   106,   107,   108,   109,   110,  1211,  1123,  1212,
    1125,  1222,  1223,  1225,  1226,   111,   112,  1238,  1239,  1240,
    1241,   646,   647,   113,   279,   280,   281,   282,   283,   284,
     285,   255,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,  1243,  1239,  1261,  1239,  1262,
    1239,   407,  1265,  1266,   256,   116,  1290,  1239,   775,   776,
     117,  1032,  1033,   118,   119,   257,   258,   259,   260,   261,
    1152,   280,   281,   282,   283,   284,   285,   262,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   575,   263,   264,   265,   871,   266,   267,   268,   269,
     270,  1166,   271,   272,   273,  1168,   274,   275,   276,   330,
     336,   337,  1172,   371,   372,   105,   106,   107,   108,   109,
     110,   373,   374,   375,   378,  1181,  1182,   379,   408,   111,
     112,   380,   385,   386,   387,   388,   392,   113,   395,   429,
      11,   433,   446,   123,   447,   448,   449,   467,   461,   468,
     281,   282,   283,   284,   285,   482,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   116,
     485,   487,   492,   494,   117,   501,   502,   118,   119,   515,
     504,   505,   506,   507,   508,   409,   279,   280,   281,   282,
     283,   284,   285,   509,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   510,
     511,   170,   512,   514,   516,   517,   518,   123,   519,   526,
     530,   536,   540,   541,   547,   548,   552,   549,   550,   588,
     551,   553,   566,   279,   280,   281,   282,   283,   284,   285,
     469,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   279,   280,   281,   282,   283,   284,
     285,   561,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   568,   576,   582,   609,   629,
     632,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   298,   633,   470,   105,   106,   107,   108,
     109,   110,   637,   639,   634,   649,   658,   661,   662,   640,
     111,   112,   641,   648,   651,   663,   664,   669,   113,   279,
     280,   281,   282,   283,   284,   285,   683,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     684,   685,   105,   106,   107,   108,   109,   110,   686,   688,
     116,   698,   699,   702,   703,   117,   111,   112,   118,   119,
     704,   589,   705,   718,   113,   434,   279,   280,   281,   282,
     283,   284,   285,   722,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   719,   728,   723,
     742,   769,   771,   760,   768,   773,   116,   778,   779,   788,
     789,   117,   790,   791,   118,   119,   279,   280,   281,   282,
     283,   284,   285,   812,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   813,   823,   824,
     825,   836,   844,   834,   839,   843,   847,   858,   123,   827,
     849,   279,   280,   281,   282,   283,   284,   285,   590,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   279,   280,   281,   282,   283,   284,   285,   591,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   828,   123,   829,   830,   831,   854,   867,
     848,   852,   853,   868,   855,   577,   869,   232,   885,   886,
     902,   904,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   912,   906,   170,   909,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     907,   908,   170,   105,   106,   107,   108,   109,   110,   910,
     913,   914,   916,   926,   931,   915,   932,   111,   112,   936,
     921,   592,   937,   924,   925,   113,   279,   280,   281,   282,
     283,   284,   285,   933,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   934,   935,   938,
     939,   949,   950,   952,   953,   954,   956,   116,   962,   963,
     959,   593,   117,   964,   965,   118,   119,   279,   280,   281,
     282,   283,   284,   285,   966,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   967,   969,
     970,   974,   976,   972,   988,   985,   595,  1005,   986,   987,
     991,  1004,   586,  1001,  1025,  1030,  1036,  1039,  1041,   105,
     106,   107,   108,   109,   110,  1046,  1048,   596,  1054,  1049,
    1055,  1056,  1059,   111,   112,  1058,  1062,  1063,  1064,  1068,
    1065,   113,  1071,  1074,  1073,  1077,  1078,  1079,   279,   280,
     281,   282,   283,   284,   285,   123,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,  1119,
    1080,  1102,  1121,   116,  1126,  1132,  1133,  1134,   117,  1136,
    1137,   118,   119,   279,   280,   281,   282,   283,   284,   285,
    1141,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,  1138,  1148,  1153,  1154,  1159,  1163,
    1164,   724,  1167,  1169,  1171,  1173,  1174,  1175,  1176,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   123,  1177,   170,  1180,  1183,  1192,  1193,  1203,  1205,
    1213,  1206,  1207,  1214,  1215,  1224,  1218,  1216,  1217,  1227,
    1221,   597,  1228,  1229,   279,   280,   281,   282,   283,   284,
     285,    11,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,  1086,  1219,  1230,  1231,  1233,
    1234,  1236,  1247,  1237,  1248,  1245,  1242,  1244,  1255,  1252,
    1264,  1260,   603,  1269,  1267,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,  1278,  1291,   170,
     105,   106,   107,   108,   109,   110,  1297,  1300,  1301,  1302,
    1303,  1304,  1305,   185,   111,   112,   744,  1094,   484,   401,
     717,   496,   113,   605,   279,   280,   281,   282,   283,   284,
     285,   922,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   214,   105,   106,   107,   108,
     109,   110,   565,   772,   116,    99,   394,  1165,   618,   117,
     111,   112,   118,   119,   731,  1279,   979,  1150,   113,   995,
     679,   225,     0,     0,     0,     0,   279,   280,   281,   282,
     283,   284,   285,   865,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,     0,     0,     0,
     116,     0,     0,     0,     0,   117,     0,     0,   118,   119,
     282,   283,   284,   285,     0,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,     0,   870,
       0,     0,     0,     0,     0,   279,   280,   281,   282,   283,
     284,   285,   123,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   619,
       0,     0,   279,   280,   281,   282,   283,   284,   285,     0,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     737,     0,     0,     0,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,     0,
     170,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,     0,     0,   170,   105,   106,   107,
     108,   109,   110,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   112,     0,     0,     0,     0,     0,     0,   113,
       0,   620,   279,   280,   281,   282,   283,   284,   285,   232,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   105,   106,   107,   108,   109,   110,     0,
       0,   116,     0,     0,     0,     0,   117,   111,   112,   118,
     119,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,   279,   280,   281,   282,   283,   284,   285,
    1098,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,   116,     0,     0,
       0,     0,   117,     0,     0,   118,   119,   622,     0,     0,
       0,     0,     0,     0,   741,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1100,     0,     0,     0,
       0,     0,   279,   280,   281,   282,   283,   284,   285,   123,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   279,   280,   281,   282,   283,   284,   285,
       0,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,     0,     0,     0,     0,   279,   280,
     281,   282,   283,   284,   285,   123,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,     0,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,     0,     0,   170,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,     0,     0,   170,   105,   106,   107,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,   111,   112,
       0,     0,     0,     0,     0,     0,   113,     0,   889,   279,
     280,   281,   282,   283,   284,   285,     0,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,     0,     0,     0,     0,     0,   116,     0,
       0,     0,     0,   117,     0,     0,   118,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     279,   280,   281,   282,   283,   284,   285,   890,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   279,   280,   281,   282,   283,   284,   285,   899,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,     0,     0,   878,   279,   280,   281,   282,   283,
     284,   285,   452,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   123,   279,   280,   281,
     282,   283,   284,   285,     0,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   279,   280,
     281,   282,   283,   284,   285,     0,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   279,
     280,   281,   282,   283,   284,   285,     0,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,     0,     0,   170,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   279,   280,   281,   282,
     283,   284,   285,   879,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   279,   280,   281,
     282,   283,   284,   285,     0,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   279,   280,   281,
     282,   283,   284,   285,   585,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   279,   280,
     281,   282,   283,   284,   285,   594,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,   279,   280,   281,   282,   283,   284,   285,   598,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     0,   279,   280,   281,   282,   283,   284,
     285,   599,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   279,   280,   281,   282,   283,
     284,   285,   600,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   279,   280,   281,   282,
     283,   284,   285,   604,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   279,   280,   281,
     282,   283,   284,   285,     0,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   279,   280,
     281,   282,   283,   284,   285,     0,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   279,
     280,   281,   282,   283,   284,   285,     0,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     606,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   279,   280,   281,   282,   283,   284,
     285,   607,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   279,   280,   281,   282,   283,   284,
     285,   608,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   279,   280,   281,   282,   283,
     284,   285,   610,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,     0,     0,     0,   279,
     280,   281,   282,   283,   284,   285,   611,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
       0,   279,   280,   281,   282,   283,   284,   285,   612,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   279,   280,   281,   282,   283,   284,   285,   613,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   279,   280,   281,   282,   283,   284,   285,
     614,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   279,   280,   281,   282,   283,   284,
     285,   615,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   279,   280,   281,   282,   283,
     284,   285,   616,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   279,   280,   281,   282,
     283,   284,   285,   617,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   279,   280,   281,
     282,   283,   284,   285,     0,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   621,   279,
     280,   281,   282,   283,   284,   285,     0,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
       0,   279,   280,   281,   282,   283,   284,   285,   882,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   279,   280,   281,   282,   283,   284,   285,   887,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     0,     0,     0,   279,   280,   281,   282,
     283,   284,   285,   888,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,     0,   279,   280,
     281,   282,   283,   284,   285,   891,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   279,
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
     295,   296,   297,   298,   279,   280,   281,   282,   283,   284,
     285,   900,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     0,   279,   280,   281,   282,
     283,   284,   285,   901,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,     0,   279,   280,
     281,   282,   283,   284,   285,   960,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   279,
     280,   281,   282,   283,   284,   285,  1011,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
       0,     0,     0,   279,   280,   281,   282,   283,   284,   285,
    1038,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,     0,   279,   280,   281,   282,   283,
     284,   285,  1081,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   279,   280,   281,   282,
     283,   284,   285,  1103,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   279,   280,   281,
     282,   283,   284,   285,  1104,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   279,   280,
     281,   282,   283,   284,   285,  1105,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,     0,
       0,     0,     0,     0,     0,     0,  1106,     0,     0,   795,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   796,     0,  1109,     0,   797,
       0,     0,   798,     0,   799,     1,     0,   800,     0,     2,
       0,     0,     0,     0,     0,  1012,  1013,   801,  1129,     0,
    1014,     0,  1015,     0,   802,   803,     0,     0,     0,     0,
       0,     3,   338,   339,     0,   340,     0,   341,   342,     0,
    1135,     0,     0,     0,     0,  1016,  1017,   804,  1018,     0,
     343,     0,     0,     4,     5,     0,     0,     0,     0,   805,
       0,     0,  1139,     0,     0,     0,     0,     0,     0,     0,
     344,   345,   346,   347,     0,     0,     0,   348,     0,     0,
       0,     0,   349,  1140,     0,     0,   806,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,   350,     0,     0,
       0,     0,     0,     0,     0,   351,   807,  1188,     0,     0,
     352,     0,   808,     0,     0,     0,     0,   353,     0,     0,
     354,     0,     0,   355,   356,     0,     0,     0,     7,  1199,
       8,     0,     0,     0,     9,     0,     0,   357,     0,     0,
       0,     0,     0,     0,  1019,  1020,     0,    10,    11,     0,
    1208,     0,     0,     0,     0,   809,   358,   359,     0,   360,
     361,    12,     0,     0,    13,   362,     0,   363,     0,     0,
      14,  1209,   364,   365,     0,     0,     0,     0,   366,     0,
       0,     0,     0,   367,     0,   368,     0,     0,     0,   369,
     279,   280,   281,   282,   283,   284,   285,     0,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   279,   280,   281,   282,   283,   284,   285,     0,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   279,   280,   281,   282,   283,   284,   285,     0,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     0,   279,   280,   281,   282,   283,   284,
     285,   997,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   736,     0,     0,     0,     0,
       0,     0,     0,     0,   631,     0,     0,     0,     0,     0,
       0,     0,     0,   278,     0,     0,   876,     0,     0,     0,
     279,   280,   281,   282,   283,   284,   285,   998,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,     0,     0,     0,   279,   280,   281,   282,   283,   284,
     285,   299,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     0,     0,   279,   280,   281,
     282,   283,   284,   285,   763,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,  -500,  -500,
    -500,  -500,     0,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298
};

static const yytype_int16 yycheck[] =
{
      57,   393,   697,   705,   178,   853,   701,   177,   656,   657,
     645,   861,   660,   531,   532,     3,   315,     3,     3,   537,
       3,   539,   780,     3,     3,    20,    20,   855,     6,   575,
      72,   792,   793,     6,     4,    38,   116,     4,     5,     6,
       7,   178,     3,   100,   101,    18,    63,     3,   985,   384,
     811,    44,    45,     3,   111,   112,   113,   149,   991,     3,
     117,   235,    41,     3,   149,    73,    59,   331,     3,     3,
     572,   174,   574,   921,   174,     3,   196,   174,   215,   625,
     147,   161,     0,    10,    11,    12,    13,    14,    15,    16,
      57,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   112,   129,    10,    11,    12,    13,
      14,    15,    16,   170,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     8,   102,   196,
      70,   102,   827,     3,   151,   255,   160,    71,   986,   987,
     185,    69,   192,   838,   147,   185,   794,   842,   483,     3,
       3,    86,   255,   253,   856,    80,   253,   199,   208,   185,
     495,   164,   118,   255,   301,   158,   136,   145,   118,   930,
     255,   228,   145,   253,   118,   232,  1026,   194,   118,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   102,   256,
     257,   258,   501,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   175,   761,  1153,   391,   275,   276,
     394,  1154,   279,   280,   281,   282,   283,   729,   563,   731,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   506,   507,   116,   302,   383,     3,   118,   102,
     514,    59,  1080,    63,    18,    41,    63,   252,   252,   239,
     240,   241,   242,   116,   118,   253,   191,   253,   253,    80,
     253,  1029,   967,   252,   969,   128,   911,   972,   245,   246,
     247,   255,   163,   978,   255,    33,   253,   461,   185,   161,
     203,   101,   253,    39,   101,   100,   470,    59,    86,   152,
      18,    86,   820,     3,   822,   823,     3,     3,    72,     5,
       9,   116,    60,   203,    70,     9,    56,   487,  1168,    13,
     103,    20,   196,    63,   381,     3,    74,   254,   255,   251,
     116,     3,    18,    81,    95,    96,   144,    95,    96,    85,
     196,   151,   255,    91,   151,    63,   403,   404,   996,   648,
     158,   255,   651,   196,   411,  1203,    71,   145,   153,    56,
     145,   101,   118,    41,   104,   255,   174,   150,    86,    69,
     181,   135,    69,  1068,  1076,   161,  1071,   117,  1073,   253,
     252,   253,   144,   147,   194,   125,    72,   194,   171,   175,
     196,   139,   197,   196,   658,   196,   158,   253,    39,   118,
     252,   253,   117,   198,     3,   462,   463,   205,   465,   157,
     253,   151,   174,   470,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   185,    77,   179,    13,    14,
     185,    16,   117,   204,    19,     3,   204,   253,   163,   135,
     253,   199,   253,  1148,   194,   629,    61,   255,   632,   633,
     634,   147,     3,    10,    11,    12,    13,    14,    15,    16,
     185,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   166,   175,   175,   544,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   191,
     115,   201,   201,   117,    71,    56,   196,    76,    75,   124,
     577,   125,   579,   203,   129,     3,   583,   584,    69,   586,
     255,    76,     5,   590,   591,   592,   593,   142,   595,   596,
     597,    56,     3,   717,   252,   602,   603,    20,   605,     3,
     109,   254,   255,   209,    69,   160,     3,   116,    41,    18,
     117,   618,   619,   620,   109,   622,   147,   172,   252,   128,
    1243,   116,   252,     3,   631,   255,   121,   254,   255,    38,
    1226,   209,    41,   128,    43,   642,     3,    46,  1261,  1262,
     254,   255,   649,   209,   858,  1241,  1242,    56,    67,    68,
     209,   354,   254,   255,    63,    64,   163,   360,   209,   362,
     178,   133,  1004,     3,  1260,   254,   255,  1290,   254,   255,
     254,   255,   179,   180,   254,   255,     3,    86,     9,   686,
      10,    11,    12,    13,    14,    15,    16,   194,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    24,    25,    26,    27,    28,    29,    30,   254,   255,
     254,   255,   719,   254,   255,   722,   125,   254,   255,   254,
     255,   728,     8,   341,   342,   343,   344,   253,   346,   253,
     737,   349,   350,   351,   741,   742,   145,   253,   356,   357,
     358,   253,   151,   361,   254,   255,    41,     3,     4,     5,
       6,     7,     8,   254,   255,   253,   763,   254,   255,    47,
      48,    17,    18,    26,    27,    28,    29,    30,   253,    25,
      26,   254,   255,   254,   255,   253,   783,   254,   255,    35,
     253,   788,   253,   255,   253,   194,   254,   255,   254,   255,
     254,   255,   253,   524,   525,   255,   527,   528,   529,   254,
     255,    57,   533,   534,   535,   253,    62,   538,   253,    65,
      66,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    79,   254,   255,   253,    83,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   254,
     255,   848,   254,   255,   254,   255,    10,    11,    12,    13,
      14,    15,    16,   109,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   254,   255,   254,
     255,   878,   254,   255,   881,   254,   255,   254,   255,   254,
     255,   253,   889,   890,   254,   255,   254,   255,   253,   145,
     253,   898,   899,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   909,   910,   254,   255,   162,   254,   255,   916,
     917,   254,   255,   169,   170,   253,   172,   254,   255,   254,
     255,   254,   255,    43,   254,   255,    43,   934,   254,   255,
      56,   938,    23,    24,    25,    26,    27,    28,    29,    30,
     253,   948,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   959,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,  1002,  1003,   253,  1005,   253,
    1007,     3,     4,     5,     6,     7,     8,   254,   255,   254,
     255,    47,    48,   252,   253,    17,    18,   254,   255,   252,
     253,   497,   498,    25,    10,    11,    12,    13,    14,    15,
      16,   253,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   254,   255,   254,   255,   254,
     255,    53,   254,   255,   253,    57,   254,   255,   640,   641,
      62,   914,   915,    65,    66,   253,   253,   253,   253,   253,
    1077,    11,    12,    13,    14,    15,    16,   253,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   255,   253,   253,   253,  1102,   253,   253,   253,   253,
     253,  1108,   253,   253,   253,  1112,   253,   253,   253,    56,
      56,     3,  1119,     3,   147,     3,     4,     5,     6,     7,
       8,   209,     3,   147,   209,  1132,  1133,     3,   130,    17,
      18,    26,     3,     3,     3,     3,     3,    25,     3,   254,
     175,   254,   254,   145,   254,   254,   254,    35,   253,    37,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    57,
       3,     3,   254,     3,    62,   124,   146,    65,    66,   178,
       3,     3,     3,     3,     3,   187,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,     3,
       3,   253,     3,     3,     3,     3,     3,   145,   253,   253,
      52,   253,   253,   253,     3,     3,   209,   147,     3,   255,
     147,     3,     3,    10,    11,    12,    13,    14,    15,    16,
     168,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   148,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     3,   254,   254,   254,   253,
     253,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,    30,   253,   253,     3,     4,     5,     6,
       7,     8,   255,   125,   253,   147,     3,     3,   178,   125,
      17,    18,   125,   124,   124,   178,     5,     4,    25,    10,
      11,    12,    13,    14,    15,    16,     5,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       5,   145,     3,     4,     5,     6,     7,     8,   253,   198,
      57,   147,     3,     3,     3,    62,    17,    18,    65,    66,
     147,   255,     3,    51,    25,    26,    10,    11,    12,    13,
      14,    15,    16,    20,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   131,   253,   149,
     123,   106,     3,   254,   254,   105,    57,     3,     3,   253,
     125,    62,   125,   253,    65,    66,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     3,   254,   254,
      63,     3,     3,   198,   198,   147,     3,     3,   145,   253,
     125,    10,    11,    12,    13,    14,    15,    16,   255,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   255,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   253,   145,   253,   253,   253,   125,   125,
     253,   253,   253,     3,   253,   186,     3,   204,   254,   254,
     254,   254,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   124,   254,   253,    51,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     254,   254,   253,     3,     4,     5,     6,     7,     8,   111,
     253,   253,    20,     3,   145,   253,     3,    17,    18,    42,
     253,   255,     3,   253,   253,    25,    10,    11,    12,    13,
      14,    15,    16,   253,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   253,   253,   253,
       4,   125,   125,     5,   174,     4,     4,    57,     3,     3,
     253,   255,    62,     3,     3,    65,    66,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   253,   253,
     198,   198,     3,   253,     3,   253,   255,    20,   253,   253,
     253,   191,   102,   255,   254,     3,     3,     3,     3,     3,
       4,     5,     6,     7,     8,     5,     5,   255,   253,    41,
     253,   253,     4,    17,    18,   254,   254,   254,   254,   253,
     255,    25,   253,   198,   253,   253,   125,   125,    10,    11,
      12,    13,    14,    15,    16,   145,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    20,
     253,   253,    18,    57,     3,   253,   253,   125,    62,   254,
     254,    65,    66,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   254,   253,   253,   253,     3,     3,
      51,   255,   159,   105,     3,   199,   156,     3,     3,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   145,     5,   253,     5,   254,   156,     5,   121,     3,
       3,   254,   254,     3,     3,   156,   167,   253,   253,     3,
     253,   255,     3,   132,    10,    11,    12,    13,    14,    15,
      16,   175,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   255,   167,   132,     3,     3,
       3,   254,     3,   254,     3,   165,   253,   253,     5,   164,
       3,   253,   255,   113,    72,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   201,   126,   253,
       3,     4,     5,     6,     7,     8,   183,   147,   147,   143,
     143,     5,     5,    64,    17,    18,   589,  1001,   302,   233,
     559,   309,    25,   255,    10,    11,    12,    13,    14,    15,
      16,   787,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    79,     3,     4,     5,     6,
       7,     8,   385,   638,    57,    52,   222,  1102,   255,    62,
      17,    18,    65,    66,   573,  1266,   845,  1076,    25,   857,
     536,   104,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    86,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   145,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,   255,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,    -1,    -1,    -1,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
     253,    -1,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,   253,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,   255,    10,    11,    12,    13,    14,    15,    16,   204,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     3,     4,     5,     6,     7,     8,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    62,    17,    18,    65,
      66,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      86,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   145,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   145,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,   253,    -1,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,   253,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,   255,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   255,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   255,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,   105,    10,    11,    12,    13,    14,
      15,    16,   254,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   145,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   254,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   254,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   254,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   254,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    10,    11,    12,    13,    14,    15,
      16,   254,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   254,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   254,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   254,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   254,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   254,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   254,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    10,    11,    12,    13,    14,    15,    16,   254,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   254,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     254,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   254,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   254,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   254,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   254,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    10,    11,    12,    13,    14,    15,    16,   254,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   254,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   254,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    10,    11,
      12,    13,    14,    15,    16,   254,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
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
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   254,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,   254,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    10,    11,
      12,    13,    14,    15,    16,   254,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   254,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     254,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,   254,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   254,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   254,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   254,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,   254,    -1,    38,
      -1,    -1,    41,    -1,    43,    32,    -1,    46,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    77,    78,    56,   254,    -1,
      82,    -1,    84,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    58,    49,    50,    -1,    52,    -1,    54,    55,    -1,
     254,    -1,    -1,    -1,    -1,   107,   108,    86,   110,    -1,
      67,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    99,   254,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   145,   254,    -1,    -1,
     127,    -1,   151,    -1,    -1,    -1,    -1,   134,    -1,    -1,
     137,    -1,    -1,   140,   141,    -1,    -1,    -1,   155,   254,
     157,    -1,    -1,    -1,   161,    -1,    -1,   154,    -1,    -1,
      -1,    -1,    -1,    -1,   206,   207,    -1,   174,   175,    -1,
     254,    -1,    -1,    -1,    -1,   194,   173,   174,    -1,   176,
     177,   188,    -1,    -1,   191,   182,    -1,   184,    -1,    -1,
     197,   254,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,
      -1,    -1,    -1,   200,    -1,   202,    -1,    -1,    -1,   206,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    10,    11,    12,    13,    14,    15,
      16,    39,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    95,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    85,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    41,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    40,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    80,    81,   119,   155,   157,   161,
     174,   175,   188,   191,   197,   257,   266,   267,   300,   304,
     305,   308,   309,   312,   313,   314,   316,   326,   327,   330,
     332,   333,   334,   356,   185,   185,    71,    75,   117,   163,
     179,   180,   194,   338,   301,    71,   117,   163,   185,   318,
     185,   185,   318,     8,   163,   357,   358,   281,   185,   318,
     328,     3,    71,     0,   251,   311,     3,     3,   118,   331,
       3,     3,    70,   118,   331,   179,   117,   185,     3,   102,
     116,   128,   152,   302,     3,   118,     3,     3,   118,     3,
     118,    76,   109,   116,   121,   128,   319,     3,     3,   319,
       9,    20,     3,    86,   255,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    35,    57,    62,    65,    66,
      79,    83,   109,   145,   162,   169,   170,   172,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     253,   258,   282,   283,     3,   116,   128,     3,   253,   285,
     286,   287,   289,   299,     3,   257,    44,    45,    59,   158,
      33,    60,    74,    81,    91,   139,   157,   199,   252,   209,
       3,    41,   147,     3,   118,   209,     3,     3,    70,   118,
     331,   252,   303,     3,   302,   102,   255,   209,   209,   209,
       3,   178,     3,   258,   258,   358,   252,   253,     9,   258,
     258,   258,   204,   258,   265,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   258,     3,    10,
      11,    12,    13,    14,    15,    16,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    41,
     284,   102,   255,   255,   252,   284,   267,   285,   174,   255,
      61,   115,   129,   142,   160,   172,   290,   292,    41,   288,
      43,    43,    56,    69,     3,    69,    56,     3,    56,    69,
      56,     3,    69,     3,    56,    69,    56,     3,    49,    50,
      52,    54,    55,    67,    87,    88,    89,    90,    94,    99,
     114,   122,   127,   134,   137,   140,   141,   154,   173,   174,
     176,   177,   182,   184,   189,   190,   195,   200,   202,   206,
     352,     3,   147,   209,     3,   147,     3,   118,   209,     3,
      26,   203,   268,   196,   285,     3,     3,     3,     3,   174,
     253,   320,     3,   174,   320,     3,   258,   259,   260,   258,
     258,   265,    95,    96,   204,   267,   258,    53,   130,   187,
     258,   263,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   254,
     258,   258,   258,   254,    26,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   254,   254,   254,   254,
     258,   258,   254,   258,   258,   258,   258,   258,     6,    18,
     145,   253,    13,    14,    16,    19,   258,    35,    37,   168,
     253,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,     3,   285,   283,     3,   310,     3,   100,   116,
     197,   296,   254,   254,     3,   329,   286,   129,   160,   293,
     287,   124,   146,   291,     3,     3,     3,     3,     3,     3,
       3,     3,     3,   352,     3,   178,     3,     3,     3,   253,
     348,   348,   348,   348,   348,   348,   253,   348,   348,   348,
      52,   349,   349,   348,   348,   348,   253,   349,   348,   349,
     253,   253,    18,    63,    86,   196,   253,     3,     3,   147,
       3,   147,   209,     3,   116,   161,   252,   253,   354,   355,
     258,   148,   274,   285,   268,   303,     3,   325,     3,   321,
     201,   267,   325,   201,   267,   255,   254,   186,    95,    96,
     258,   258,   254,   102,   255,   254,   102,   258,   255,   255,
     255,   255,   255,   255,   254,   255,   255,   255,   254,   254,
     254,   254,   255,   255,   254,   255,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   255,   255,
     255,   254,   255,     6,   145,   261,   267,   258,   258,   253,
     258,    40,   253,   253,   253,   267,   268,   255,   284,   125,
     125,   125,    20,   252,   255,   268,   291,   291,   124,   147,
     287,   124,    63,   101,   151,   194,   352,   352,     3,   347,
     352,     3,   178,   178,     5,   350,   351,   350,   350,     4,
     353,   350,   350,   350,   351,   351,   350,   350,   350,   353,
     351,   350,   351,     5,     5,   145,   253,   258,   198,     3,
     239,   240,   241,   242,   306,   307,   196,   253,   147,     3,
     196,   253,     3,     3,   147,     3,    56,    63,   101,   104,
     117,   125,   151,   194,   339,   340,   346,   288,    51,   131,
     277,   268,    20,   149,   255,   317,   254,   255,   253,   322,
     317,   322,   317,   259,   258,   258,    95,   186,   258,   258,
     258,   102,   123,   264,   264,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   259,
     254,   262,   267,    40,   258,   267,   267,   267,   254,   106,
     269,     3,   296,   105,   297,   297,   297,   258,     3,     3,
     274,   287,   258,   147,   196,   294,   295,   287,   253,   125,
     125,   253,   347,   347,   352,    18,    34,    38,    41,    43,
      46,    56,    63,    64,    86,    98,   125,   145,   151,   194,
     315,   347,     3,     3,   254,   255,   192,   208,    67,    68,
     254,   255,   254,   254,   254,    63,   258,   253,   253,   253,
     253,   253,   254,   255,   198,   306,     3,   196,   253,   198,
     306,   196,   253,   147,     3,   253,   354,     3,   253,   125,
     117,   125,   253,   253,   125,   253,   254,   255,     3,   267,
       3,     5,   275,   276,   258,    86,   258,   125,     3,     3,
      86,   258,   324,   255,   317,   317,    95,   258,   105,   254,
     254,   255,   254,   258,   258,   254,   254,   254,   254,   255,
     255,   254,   254,   254,   254,   254,   254,   254,   255,   255,
     254,   254,   254,   259,   254,   258,   254,   254,   254,    51,
     111,   273,   124,   253,   253,   253,    20,    20,   252,   277,
     258,   253,   295,   258,   253,   253,     3,   345,   315,   315,
     347,   145,     3,   253,   253,   253,    42,     3,   253,     4,
       4,     5,     6,     7,    57,   245,   246,   247,   253,   125,
     125,   315,     5,   174,     4,   351,     4,   351,   351,   253,
     254,   306,     3,     3,     3,     3,     3,   253,   254,   253,
     198,   306,   253,   254,   198,   306,     3,   196,   253,   339,
      63,   101,   151,   194,   258,   253,   253,   253,     3,   280,
     280,   253,   345,   335,   354,   340,   352,    39,    85,   271,
     271,   255,   133,   255,   191,    20,   254,   255,   323,   258,
     258,   254,    77,    78,    82,    84,   107,   108,   110,   206,
     207,   258,   258,   258,   258,   254,   258,   270,   258,   274,
       3,   298,   298,   298,   258,   258,     3,   280,   254,     3,
     342,     3,   341,   254,   255,   315,     5,   258,     5,    41,
      63,   151,   194,   258,   253,   253,   253,   258,   254,     4,
     258,   254,   254,   254,   254,   255,   306,   306,   253,   254,
     306,   253,   254,   253,   198,   306,   254,   253,   125,   125,
     253,   254,   342,   280,   280,   254,   255,   254,   341,   254,
      38,   147,   164,   347,   276,   258,   258,   325,    86,   258,
      86,   258,   253,   254,   254,   254,   254,   254,   255,   254,
     271,   205,   255,   272,   277,   254,   255,   254,   254,    20,
     254,    18,   254,   255,   254,   255,     3,   254,   255,   254,
     254,   255,   253,   253,   125,   254,   254,   254,   254,   254,
     254,     3,   254,   254,   306,   254,   306,   306,   253,   254,
     335,   354,   258,   253,   253,   345,   254,   254,   254,     3,
     254,     5,    20,     3,    51,   324,   258,   159,   258,   105,
     278,     3,   258,   199,   156,     3,     3,     5,    47,    48,
       5,   258,   258,   254,   254,   254,   254,   306,   254,   342,
     341,   254,   156,     5,    80,   181,   153,   198,   254,   254,
     271,   166,   191,   121,   279,     3,   254,   254,   254,   254,
     254,   254,   254,     3,     3,     3,   253,   253,   167,   167,
     280,   253,    47,    48,   156,   252,   253,     3,     3,   132,
     132,     3,   343,     3,     3,   343,   254,   254,   254,   255,
     252,   253,   253,   254,   253,   165,   344,     3,     3,   343,
     343,   344,   164,   336,   337,     5,    18,    72,   135,   147,
     253,   254,   254,    18,     3,   254,   255,    72,   199,   113,
     103,   150,   171,    80,   191,   343,   344,   344,   201,   337,
      73,   112,    59,   144,   158,   174,    59,   144,   158,   174,
     254,   126,    86,   145,    86,   145,   344,   183,     4,   136,
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
#line 341 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 347 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 348 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 350 "parser/evoparser.y"
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
#line 368 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 376 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 384 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 390 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 397 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 398 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 399 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 400 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 401 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 402 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 403 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 404 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 405 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 406 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 407 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 408 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 409 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 410 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 411 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 412 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 413 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 415 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 420 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 421 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 422 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 423 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 426 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 427 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 428 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 429 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 430 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 433 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 434 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 437 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 438 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 43:
#line 441 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 445 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 46:
#line 445 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 47:
#line 446 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 48:
#line 446 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 49:
#line 447 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 448 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 449 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 453 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 457 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 458 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 459 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 460 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 461 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 462 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 464 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 465 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 466 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 467 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 468 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 469 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 470 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 471 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 472 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 473 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 474 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 475 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 476 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 477 "parser/evoparser.y"
    { emit("CALL 2 LEFT"); (yyval.exprval) = expr_make_func2(EXPR_LEFT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LEFT"); ;}
    break;

  case 73:
#line 478 "parser/evoparser.y"
    { emit("CALL 2 RIGHT"); (yyval.exprval) = expr_make_func2(EXPR_RIGHT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "RIGHT"); ;}
    break;

  case 74:
#line 479 "parser/evoparser.y"
    { emit("CALL 3 LPAD"); (yyval.exprval) = expr_make_func3(EXPR_LPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "LPAD"); ;}
    break;

  case 75:
#line 480 "parser/evoparser.y"
    { emit("CALL 3 RPAD"); (yyval.exprval) = expr_make_func3(EXPR_RPAD, (yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval), "RPAD"); ;}
    break;

  case 76:
#line 481 "parser/evoparser.y"
    { emit("CALL 1 REVERSE"); (yyval.exprval) = expr_make_func1(EXPR_REVERSE, (yyvsp[(3) - (4)].exprval), "REVERSE"); ;}
    break;

  case 77:
#line 482 "parser/evoparser.y"
    { emit("CALL 2 REPEAT"); (yyval.exprval) = expr_make_func2(EXPR_REPEAT, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "REPEAT"); ;}
    break;

  case 78:
#line 483 "parser/evoparser.y"
    { emit("CALL 2 INSTR"); (yyval.exprval) = expr_make_func2(EXPR_INSTR, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "INSTR"); ;}
    break;

  case 79:
#line 484 "parser/evoparser.y"
    { emit("CALL 2 LOCATE"); (yyval.exprval) = expr_make_func2(EXPR_LOCATE, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "LOCATE"); ;}
    break;

  case 80:
#line 485 "parser/evoparser.y"
    { emit("CALL 1 ABS"); (yyval.exprval) = expr_make_func1(EXPR_ABS, (yyvsp[(3) - (4)].exprval), "ABS"); ;}
    break;

  case 81:
#line 486 "parser/evoparser.y"
    { emit("CALL 1 CEIL"); (yyval.exprval) = expr_make_func1(EXPR_CEIL, (yyvsp[(3) - (4)].exprval), "CEIL"); ;}
    break;

  case 82:
#line 487 "parser/evoparser.y"
    { emit("CALL 1 FLOOR"); (yyval.exprval) = expr_make_func1(EXPR_FLOOR, (yyvsp[(3) - (4)].exprval), "FLOOR"); ;}
    break;

  case 83:
#line 488 "parser/evoparser.y"
    { emit("CALL 2 ROUND"); (yyval.exprval) = expr_make_func2(EXPR_ROUND, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "ROUND"); ;}
    break;

  case 84:
#line 489 "parser/evoparser.y"
    { emit("CALL 1 ROUND"); (yyval.exprval) = expr_make_func1(EXPR_ROUND, (yyvsp[(3) - (4)].exprval), "ROUND"); ;}
    break;

  case 85:
#line 490 "parser/evoparser.y"
    { emit("CALL 2 POWER"); (yyval.exprval) = expr_make_func2(EXPR_POWER, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "POWER"); ;}
    break;

  case 86:
#line 491 "parser/evoparser.y"
    { emit("CALL 1 SQRT"); (yyval.exprval) = expr_make_func1(EXPR_SQRT, (yyvsp[(3) - (4)].exprval), "SQRT"); ;}
    break;

  case 87:
#line 492 "parser/evoparser.y"
    { emit("CALL 2 MOD"); (yyval.exprval) = expr_make_func2(EXPR_MODFN, (yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), "MOD"); ;}
    break;

  case 88:
#line 493 "parser/evoparser.y"
    { emit("CALL 0 RAND"); (yyval.exprval) = expr_make_func0(EXPR_RAND, "RAND"); ;}
    break;

  case 89:
#line 494 "parser/evoparser.y"
    { emit("CALL 1 LOG"); (yyval.exprval) = expr_make_func1(EXPR_LOG, (yyvsp[(3) - (4)].exprval), "LOG"); ;}
    break;

  case 90:
#line 495 "parser/evoparser.y"
    { emit("CALL 1 LOG10"); (yyval.exprval) = expr_make_func1(EXPR_LOG10, (yyvsp[(3) - (4)].exprval), "LOG10"); ;}
    break;

  case 91:
#line 496 "parser/evoparser.y"
    { emit("CALL 1 SIGN"); (yyval.exprval) = expr_make_func1(EXPR_SIGN, (yyvsp[(3) - (4)].exprval), "SIGN"); ;}
    break;

  case 92:
#line 497 "parser/evoparser.y"
    { emit("CALL 0 PI"); (yyval.exprval) = expr_make_func0(EXPR_PI, "PI"); ;}
    break;

  case 93:
#line 498 "parser/evoparser.y"
    { emit("CALL 3 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval)), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 94:
#line 499 "parser/evoparser.y"
    { emit("CALL 4 CONCAT"); (yyval.exprval) = expr_make_concat(expr_make_concat(expr_make_concat((yyvsp[(3) - (10)].exprval), (yyvsp[(5) - (10)].exprval)), (yyvsp[(7) - (10)].exprval)), (yyvsp[(9) - (10)].exprval)); ;}
    break;

  case 95:
#line 500 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 96:
#line 507 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 97:
#line 514 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 98:
#line 521 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 99:
#line 525 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 100:
#line 529 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 101:
#line 535 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 102:
#line 536 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 103:
#line 537 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 104:
#line 540 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 105:
#line 541 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 106:
#line 544 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 107:
#line 545 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 108:
#line 546 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 109:
#line 547 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 110:
#line 548 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 111:
#line 549 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 112:
#line 550 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 113:
#line 551 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 114:
#line 552 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 115:
#line 556 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 116:
#line 558 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 117:
#line 560 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 118:
#line 562 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 119:
#line 566 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 120:
#line 574 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 121:
#line 584 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 122:
#line 585 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 123:
#line 588 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 124:
#line 589 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 125:
#line 593 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 126:
#line 601 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 127:
#line 609 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 128:
#line 620 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 129:
#line 629 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 130:
#line 634 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 132:
#line 645 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 134:
#line 647 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 135:
#line 650 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 136:
#line 657 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 137:
#line 665 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 138:
#line 666 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 139:
#line 667 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 140:
#line 670 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 141:
#line 671 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 143:
#line 675 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 148:
#line 687 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 149:
#line 693 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 150:
#line 701 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 151:
#line 702 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 152:
#line 703 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 153:
#line 704 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 154:
#line 707 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 155:
#line 708 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 156:
#line 709 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 157:
#line 710 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 158:
#line 711 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 160:
#line 715 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 161:
#line 718 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 162:
#line 719 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 163:
#line 722 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 164:
#line 723 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 165:
#line 724 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 166:
#line 725 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 167:
#line 726 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 168:
#line 727 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 169:
#line 728 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 170:
#line 729 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 171:
#line 730 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 172:
#line 733 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 173:
#line 734 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 174:
#line 736 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 175:
#line 744 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 176:
#line 749 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 177:
#line 750 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 178:
#line 751 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 179:
#line 754 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 180:
#line 755 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 183:
#line 764 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 184:
#line 770 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 185:
#line 771 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 186:
#line 772 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 189:
#line 781 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 190:
#line 783 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 191:
#line 785 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 192:
#line 787 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 193:
#line 789 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 194:
#line 792 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 195:
#line 793 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 196:
#line 794 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 197:
#line 797 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 198:
#line 798 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 199:
#line 801 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 200:
#line 802 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 201:
#line 805 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 202:
#line 806 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 203:
#line 807 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 206:
#line 814 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 207:
#line 815 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 208:
#line 820 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 209:
#line 822 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 210:
#line 824 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 212:
#line 828 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 213:
#line 829 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 214:
#line 832 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 215:
#line 833 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 216:
#line 836 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 217:
#line 841 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 218:
#line 851 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 219:
#line 858 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 220:
#line 859 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 221:
#line 860 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 222:
#line 861 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 223:
#line 866 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 224:
#line 870 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 225:
#line 872 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 228:
#line 878 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 229:
#line 883 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 230:
#line 890 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 231:
#line 897 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 232:
#line 907 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 233:
#line 914 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 234:
#line 921 "parser/evoparser.y"
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

  case 235:
#line 931 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 236:
#line 939 "parser/evoparser.y"
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

  case 237:
#line 949 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 238:
#line 957 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 239:
#line 966 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 240:
#line 975 "parser/evoparser.y"
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

  case 241:
#line 985 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 242:
#line 993 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 243:
#line 1002 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 244:
#line 1011 "parser/evoparser.y"
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

  case 245:
#line 1021 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 246:
#line 1030 "parser/evoparser.y"
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

  case 247:
#line 1042 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 248:
#line 1047 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 249:
#line 1052 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 250:
#line 1058 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 251:
#line 1065 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 252:
#line 1072 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 253:
#line 1079 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 254:
#line 1089 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 255:
#line 1096 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 256:
#line 1105 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 257:
#line 1112 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 258:
#line 1118 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 259:
#line 1126 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 260:
#line 1132 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 262:
#line 1140 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 263:
#line 1141 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 264:
#line 1142 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 265:
#line 1143 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 266:
#line 1148 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 267:
#line 1155 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 268:
#line 1164 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 269:
#line 1171 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 270:
#line 1177 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 271:
#line 1187 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 272:
#line 1191 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 273:
#line 1197 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 274:
#line 1203 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 275:
#line 1210 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 276:
#line 1216 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 277:
#line 1223 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 278:
#line 1229 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 279:
#line 1235 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 280:
#line 1241 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 281:
#line 1247 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 282:
#line 1253 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 283:
#line 1259 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 284:
#line 1265 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 285:
#line 1271 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 286:
#line 1277 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 287:
#line 1283 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 288:
#line 1289 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 289:
#line 1295 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 290:
#line 1301 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 291:
#line 1307 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 292:
#line 1314 "parser/evoparser.y"
    { ;}
    break;

  case 293:
#line 1315 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 294:
#line 1316 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 295:
#line 1320 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 296:
#line 1328 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 297:
#line 1334 "parser/evoparser.y"
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

  case 299:
#line 1347 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 300:
#line 1350 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 301:
#line 1351 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 302:
#line 1352 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 303:
#line 1353 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 304:
#line 1354 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 308:
#line 1361 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 309:
#line 1365 "parser/evoparser.y"
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

  case 310:
#line 1375 "parser/evoparser.y"
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

  case 311:
#line 1387 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 312:
#line 1388 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 313:
#line 1388 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 314:
#line 1391 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 315:
#line 1392 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 316:
#line 1393 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 317:
#line 1394 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 318:
#line 1398 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 319:
#line 1401 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 320:
#line 1402 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 321:
#line 1403 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 322:
#line 1404 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 323:
#line 1410 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 324:
#line 1416 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 325:
#line 1421 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 326:
#line 1426 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 327:
#line 1431 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 328:
#line 1440 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 329:
#line 1447 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 330:
#line 1448 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 331:
#line 1449 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 332:
#line 1454 "parser/evoparser.y"
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

  case 333:
#line 1465 "parser/evoparser.y"
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

  case 334:
#line 1477 "parser/evoparser.y"
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

  case 335:
#line 1488 "parser/evoparser.y"
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

  case 336:
#line 1503 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 337:
#line 1507 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 338:
#line 1511 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 339:
#line 1512 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 340:
#line 1517 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 341:
#line 1519 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 342:
#line 1521 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 343:
#line 1523 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 344:
#line 1526 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 345:
#line 1527 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 346:
#line 1531 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 347:
#line 1536 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 348:
#line 1538 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 349:
#line 1540 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 350:
#line 1542 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 351:
#line 1544 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 352:
#line 1548 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 353:
#line 1552 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 354:
#line 1553 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 355:
#line 1558 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 356:
#line 1568 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 357:
#line 1577 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 359:
#line 1581 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 360:
#line 1582 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 361:
#line 1583 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 362:
#line 1584 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 363:
#line 1586 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 364:
#line 1588 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 367:
#line 1596 "parser/evoparser.y"
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

  case 368:
#line 1611 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 369:
#line 1619 "parser/evoparser.y"
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

  case 370:
#line 1633 "parser/evoparser.y"
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

  case 371:
#line 1647 "parser/evoparser.y"
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

  case 372:
#line 1661 "parser/evoparser.y"
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

  case 373:
#line 1673 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 374:
#line 1674 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 375:
#line 1675 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 376:
#line 1678 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 377:
#line 1679 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 378:
#line 1682 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 379:
#line 1683 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 380:
#line 1684 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 381:
#line 1685 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 382:
#line 1686 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 383:
#line 1687 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 384:
#line 1688 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 385:
#line 1689 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 386:
#line 1691 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 387:
#line 1693 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 388:
#line 1695 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 389:
#line 1697 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 390:
#line 1699 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 391:
#line 1701 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 392:
#line 1704 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 393:
#line 1705 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 394:
#line 1708 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 395:
#line 1709 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 396:
#line 1712 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 397:
#line 1713 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 399:
#line 1717 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 400:
#line 1718 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 401:
#line 1719 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 402:
#line 1720 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 403:
#line 1721 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 404:
#line 1722 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 405:
#line 1723 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 406:
#line 1724 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 407:
#line 1725 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 408:
#line 1726 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 409:
#line 1727 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 410:
#line 1728 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 411:
#line 1729 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 412:
#line 1730 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 413:
#line 1731 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 414:
#line 1732 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 415:
#line 1733 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 416:
#line 1736 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 417:
#line 1737 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 418:
#line 1740 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 419:
#line 1742 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 420:
#line 1750 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 421:
#line 1751 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 423:
#line 1753 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 424:
#line 1754 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 425:
#line 1755 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 426:
#line 1756 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 427:
#line 1757 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 428:
#line 1758 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 429:
#line 1759 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 430:
#line 1760 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 431:
#line 1761 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 432:
#line 1768 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 433:
#line 1769 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 434:
#line 1770 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 435:
#line 1771 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 436:
#line 1772 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 437:
#line 1773 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 438:
#line 1774 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 439:
#line 1775 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 440:
#line 1776 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 441:
#line 1777 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 442:
#line 1778 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 443:
#line 1779 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 444:
#line 1780 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 445:
#line 1781 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 446:
#line 1782 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 447:
#line 1783 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 448:
#line 1784 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 449:
#line 1785 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 450:
#line 1786 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 451:
#line 1787 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 452:
#line 1788 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 453:
#line 1791 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 454:
#line 1792 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 455:
#line 1793 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 456:
#line 1796 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 457:
#line 1797 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 458:
#line 1800 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 459:
#line 1801 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 460:
#line 1802 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 462:
#line 1806 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 463:
#line 1807 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 464:
#line 1811 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 465:
#line 1812 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 466:
#line 1813 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 467:
#line 1814 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 468:
#line 1815 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 469:
#line 1816 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 470:
#line 1817 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 471:
#line 1818 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 472:
#line 1819 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 473:
#line 1820 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 474:
#line 1821 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 475:
#line 1822 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 476:
#line 1823 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 477:
#line 1824 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 478:
#line 1825 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 479:
#line 1826 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 480:
#line 1827 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 481:
#line 1828 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 482:
#line 1829 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 483:
#line 1830 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 484:
#line 1831 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 485:
#line 1832 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 486:
#line 1833 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 487:
#line 1834 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 488:
#line 1835 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 489:
#line 1836 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 490:
#line 1837 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 491:
#line 1838 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 492:
#line 1839 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 493:
#line 1840 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 494:
#line 1841 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 495:
#line 1842 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 496:
#line 1845 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 497:
#line 1846 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 498:
#line 1850 "parser/evoparser.y"
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

  case 499:
#line 1862 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 500:
#line 1863 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 501:
#line 1864 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 502:
#line 1868 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 503:
#line 1871 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 504:
#line 1872 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 508:
#line 1876 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 509:
#line 1877 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 6560 "parser/evoparser.tab.c"
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


#line 1880 "parser/evoparser.y"

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
