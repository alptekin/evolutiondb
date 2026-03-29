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
     ENUM = 339,
     END = 340,
     ELSE = 341,
     EXPLAIN = 342,
     FIRST = 343,
     FLOAT = 344,
     FORCE = 345,
     FOREIGN = 346,
     FROM = 347,
     FULL = 348,
     FULLTEXT = 349,
     FOR = 350,
     GROUP = 351,
     HOUR_MINUTE = 352,
     HOUR_MICROSECOND = 353,
     HIGH_PRIORITY = 354,
     HOUR_SECOND = 355,
     HAVING = 356,
     IMMEDIATE = 357,
     INITIALLY = 358,
     INTEGER = 359,
     INNER = 360,
     IGNORE = 361,
     INDEX = 362,
     IF = 363,
     INSERT = 364,
     INTO = 365,
     INT = 366,
     INTERVAL = 367,
     JOIN = 368,
     KEY = 369,
     LESS = 370,
     LONGTEXT = 371,
     LOW_PRIORITY = 372,
     LEFT = 373,
     LEADING = 374,
     LIMIT = 375,
     LOCKED = 376,
     OFFSET = 377,
     LONGBLOB = 378,
     MATCH = 379,
     MAXVALUE = 380,
     MEDIUMTEXT = 381,
     MODIFY = 382,
     MEDIUMBLOB = 383,
     MEDIUMINT = 384,
     NATURAL = 385,
     NODE = 386,
     NO_ACTION = 387,
     NULLX = 388,
     OUTER = 389,
     ON = 390,
     ORDER = 391,
     ONDUPLICATE = 392,
     PARTIAL = 393,
     PRIMARY = 394,
     QUICK = 395,
     RANGE = 396,
     REAL = 397,
     RECLAIM = 398,
     REFERENCES = 399,
     RENAME = 400,
     RESTRICT = 401,
     ROLLUP = 402,
     RIGHT = 403,
     REPLACE = 404,
     SQL_SMALL_RESULT = 405,
     SCHEMA = 406,
     SHARD = 407,
     SHARDS = 408,
     SHARE = 409,
     SKIP = 410,
     SOME = 411,
     SQL_CALC_FOUND_ROWS = 412,
     SQL_BIG_RESULT = 413,
     SIMPLE = 414,
     STRAIGHT_JOIN = 415,
     SMALLINT = 416,
     SET = 417,
     SELECT = 418,
     TINYTEXT = 419,
     TINYINT = 420,
     TO = 421,
     TEMPORARY = 422,
     GLOBAL = 423,
     PRESERVE = 424,
     TEXT = 425,
     THAN = 426,
     TIMESTAMP = 427,
     TABLE = 428,
     THEN = 429,
     TRAILING = 430,
     TRUNCATE = 431,
     TINYBLOB = 432,
     TIME = 433,
     UPDATE = 434,
     UNSIGNED = 435,
     UNIQUE = 436,
     UUID = 437,
     USING = 438,
     USE = 439,
     HASH = 440,
     VALIDATE = 441,
     VARCHAR = 442,
     VALUES = 443,
     VARBINARY = 444,
     WHERE = 445,
     WHEN = 446,
     WITH = 447,
     YEAR = 448,
     YEAR_MONTH = 449,
     ZEROFILL = 450,
     EXISTS = 451,
     FSUBSTRING = 452,
     FTRIM = 453,
     FDATE_ADD = 454,
     FDATE_SUB = 455,
     FCOUNT = 456,
     FSUM = 457,
     FAVG = 458,
     FMIN = 459,
     FMAX = 460,
     FUPPER = 461,
     FLOWER = 462,
     FLENGTH = 463,
     FCONCAT = 464,
     FREPLACE = 465,
     FCOALESCE = 466,
     FGEN_RANDOM_UUID = 467,
     FGEN_RANDOM_UUID_V7 = 468,
     FSNOWFLAKE_ID = 469,
     FLAST_INSERT_ID = 470,
     FEVO_SLEEP = 471,
     FEVO_JITTER = 472
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
#define ENUM 339
#define END 340
#define ELSE 341
#define EXPLAIN 342
#define FIRST 343
#define FLOAT 344
#define FORCE 345
#define FOREIGN 346
#define FROM 347
#define FULL 348
#define FULLTEXT 349
#define FOR 350
#define GROUP 351
#define HOUR_MINUTE 352
#define HOUR_MICROSECOND 353
#define HIGH_PRIORITY 354
#define HOUR_SECOND 355
#define HAVING 356
#define IMMEDIATE 357
#define INITIALLY 358
#define INTEGER 359
#define INNER 360
#define IGNORE 361
#define INDEX 362
#define IF 363
#define INSERT 364
#define INTO 365
#define INT 366
#define INTERVAL 367
#define JOIN 368
#define KEY 369
#define LESS 370
#define LONGTEXT 371
#define LOW_PRIORITY 372
#define LEFT 373
#define LEADING 374
#define LIMIT 375
#define LOCKED 376
#define OFFSET 377
#define LONGBLOB 378
#define MATCH 379
#define MAXVALUE 380
#define MEDIUMTEXT 381
#define MODIFY 382
#define MEDIUMBLOB 383
#define MEDIUMINT 384
#define NATURAL 385
#define NODE 386
#define NO_ACTION 387
#define NULLX 388
#define OUTER 389
#define ON 390
#define ORDER 391
#define ONDUPLICATE 392
#define PARTIAL 393
#define PRIMARY 394
#define QUICK 395
#define RANGE 396
#define REAL 397
#define RECLAIM 398
#define REFERENCES 399
#define RENAME 400
#define RESTRICT 401
#define ROLLUP 402
#define RIGHT 403
#define REPLACE 404
#define SQL_SMALL_RESULT 405
#define SCHEMA 406
#define SHARD 407
#define SHARDS 408
#define SHARE 409
#define SKIP 410
#define SOME 411
#define SQL_CALC_FOUND_ROWS 412
#define SQL_BIG_RESULT 413
#define SIMPLE 414
#define STRAIGHT_JOIN 415
#define SMALLINT 416
#define SET 417
#define SELECT 418
#define TINYTEXT 419
#define TINYINT 420
#define TO 421
#define TEMPORARY 422
#define GLOBAL 423
#define PRESERVE 424
#define TEXT 425
#define THAN 426
#define TIMESTAMP 427
#define TABLE 428
#define THEN 429
#define TRAILING 430
#define TRUNCATE 431
#define TINYBLOB 432
#define TIME 433
#define UPDATE 434
#define UNSIGNED 435
#define UNIQUE 436
#define UUID 437
#define USING 438
#define USE 439
#define HASH 440
#define VALIDATE 441
#define VARCHAR 442
#define VALUES 443
#define VARBINARY 444
#define WHERE 445
#define WHEN 446
#define WITH 447
#define YEAR 448
#define YEAR_MONTH 449
#define ZEROFILL 450
#define EXISTS 451
#define FSUBSTRING 452
#define FTRIM 453
#define FDATE_ADD 454
#define FDATE_SUB 455
#define FCOUNT 456
#define FSUM 457
#define FAVG 458
#define FMIN 459
#define FMAX 460
#define FUPPER 461
#define FLOWER 462
#define FLENGTH 463
#define FCONCAT 464
#define FREPLACE 465
#define FCOALESCE 466
#define FGEN_RANDOM_UUID 467
#define FGEN_RANDOM_UUID_V7 468
#define FSNOWFLAKE_ID 469
#define FLAST_INSERT_ID 470
#define FEVO_SLEEP 471
#define FEVO_JITTER 472




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
#line 560 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 573 "parser/evoparser.tab.c"

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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3021

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  232
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  480
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1180

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   472

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     229,   230,    26,    24,   231,    25,   228,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   227,
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
     224,   225,   226
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
     312,   321,   328,   332,   336,   340,   344,   349,   356,   358,
     360,   362,   369,   376,   380,   384,   388,   392,   396,   400,
     404,   408,   412,   417,   424,   428,   434,   439,   445,   449,
     454,   458,   463,   465,   467,   469,   471,   475,   488,   489,
     492,   493,   498,   501,   506,   507,   509,   511,   512,   515,
     516,   519,   520,   524,   526,   530,   533,   534,   537,   542,
     547,   548,   551,   554,   559,   564,   565,   568,   570,   574,
     575,   578,   581,   584,   587,   590,   593,   596,   599,   601,
     605,   607,   610,   613,   615,   616,   618,   622,   624,   626,
     630,   636,   640,   644,   646,   647,   653,   657,   663,   670,
     676,   677,   679,   681,   682,   684,   686,   688,   691,   694,
     695,   696,   698,   701,   706,   713,   720,   727,   728,   731,
     732,   734,   738,   742,   744,   752,   755,   758,   761,   762,
     769,   772,   777,   778,   781,   789,   791,   795,   801,   803,
     812,   823,   833,   845,   856,   869,   881,   895,   905,   917,
     928,   941,   953,   966,   968,   972,   974,   979,   984,   989,
     996,   998,  1002,  1005,  1009,  1015,  1017,  1021,  1022,  1025,
    1028,  1032,  1036,  1038,  1042,  1044,  1048,  1054,  1056,  1067,
    1078,  1096,  1109,  1129,  1141,  1148,  1157,  1164,  1171,  1178,
    1188,  1195,  1201,  1210,  1218,  1228,  1237,  1248,  1258,  1259,
    1261,  1264,  1266,  1275,  1282,  1283,  1288,  1289,  1292,  1295,
    1298,  1301,  1303,  1304,  1305,  1309,  1311,  1315,  1319,  1320,
    1327,  1329,  1331,  1335,  1339,  1347,  1351,  1355,  1361,  1367,
    1369,  1378,  1386,  1394,  1396,  1405,  1406,  1409,  1412,  1416,
    1422,  1428,  1436,  1438,  1443,  1448,  1449,  1452,  1454,  1460,
    1468,  1476,  1486,  1498,  1500,  1503,  1507,  1509,  1519,  1531,
    1532,  1537,  1541,  1547,  1553,  1563,  1574,  1576,  1580,  1590,
    1600,  1610,  1617,  1629,  1638,  1639,  1641,  1644,  1646,  1650,
    1656,  1664,  1669,  1674,  1680,  1686,  1691,  1698,  1710,  1724,
    1738,  1754,  1759,  1766,  1768,  1772,  1774,  1778,  1780,  1784,
    1785,  1790,  1796,  1801,  1807,  1812,  1818,  1823,  1829,  1834,
    1839,  1843,  1847,  1851,  1854,  1858,  1863,  1868,  1870,  1874,
    1875,  1880,  1881,  1885,  1888,  1892,  1896,  1900,  1904,  1910,
    1916,  1922,  1926,  1932,  1935,  1943,  1949,  1957,  1963,  1966,
    1970,  1973,  1977,  1980,  1984,  1990,  1995,  2001,  2009,  2018,
    2027,  2035,  2042,  2049,  2055,  2056,  2060,  2066,  2067,  2069,
    2070,  2073,  2076,  2077,  2082,  2086,  2089,  2093,  2097,  2101,
    2105,  2109,  2113,  2117,  2121,  2125,  2129,  2131,  2133,  2135,
    2137,  2139,  2143,  2149,  2152,  2157,  2159,  2161,  2163,  2165,
    2169,  2173,  2177,  2181,  2187,  2193,  2195,  2197,  2199,  2203,
    2207,  2208,  2210,  2212,  2214,  2218,  2222,  2225,  2227,  2231,
    2235
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     233,     0,    -1,   242,   227,    -1,   242,   227,   233,    -1,
       3,    -1,     3,   228,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   142,    -1,   234,    24,
     234,    -1,   234,    25,   234,    -1,   234,    26,   234,    -1,
     234,    27,   234,    -1,   234,    28,   234,    -1,   234,    29,
     234,    -1,    25,   234,    -1,   229,   234,   230,    -1,   234,
      12,   234,    -1,   234,    10,   234,    -1,   234,    11,   234,
      -1,   234,    21,   234,    -1,   234,    22,   234,    -1,   234,
      30,   234,    -1,   234,    23,   234,    -1,    18,   234,    -1,
      17,   234,    -1,   234,    20,   234,    -1,   234,    20,   229,
     243,   230,    -1,   234,    20,    37,   229,   243,   230,    -1,
     234,    20,   165,   229,   243,   230,    -1,   234,    20,    35,
     229,   243,   230,    -1,   234,    15,   142,    -1,   234,    15,
      18,   142,    -1,   234,    15,     6,    -1,   234,    15,    18,
       6,    -1,     8,     9,   234,    -1,   234,    19,   234,    40,
     234,    -1,   234,    18,    19,   234,    40,   234,    -1,   234,
      -1,   234,   231,   235,    -1,    -1,   235,    -1,    -1,   234,
      16,   229,   237,   235,   230,    -1,    -1,   234,    18,    16,
     229,   238,   235,   230,    -1,   234,    16,   229,   243,   230,
      -1,   234,    18,    16,   229,   243,   230,    -1,   205,   229,
     243,   230,    -1,     3,   229,   236,   230,    -1,   210,   229,
      26,   230,    -1,   210,   229,   234,   230,    -1,   211,   229,
     234,   230,    -1,   212,   229,   234,   230,    -1,   213,   229,
     234,   230,    -1,   214,   229,   234,   230,    -1,   206,   229,
     234,   231,   234,   231,   234,   230,    -1,   206,   229,   234,
     231,   234,   230,    -1,   206,   229,   234,   101,   234,   230,
      -1,   206,   229,   234,   101,   234,   104,   234,   230,    -1,
     207,   229,   234,   230,    -1,   207,   229,   239,   234,   101,
     234,   230,    -1,   207,   229,   239,   101,   234,   230,    -1,
     215,   229,   234,   230,    -1,   216,   229,   234,   230,    -1,
     217,   229,   234,   230,    -1,   218,   229,   234,   231,   234,
     230,    -1,   219,   229,   234,   231,   234,   231,   234,   230,
      -1,   220,   229,   234,   231,   234,   230,    -1,   221,   229,
     230,    -1,   222,   229,   230,    -1,   223,   229,   230,    -1,
     224,   229,   230,    -1,   225,   229,   234,   230,    -1,   226,
     229,   234,   231,   234,   230,    -1,   128,    -1,   184,    -1,
      53,    -1,   208,   229,   234,   231,   240,   230,    -1,   209,
     229,   234,   231,   240,   230,    -1,   121,   234,    77,    -1,
     121,   234,    78,    -1,   121,   234,    82,    -1,   121,   234,
      84,    -1,   121,   234,   203,    -1,   121,   234,   202,    -1,
     121,   234,   107,    -1,   121,   234,   106,    -1,   121,   234,
     109,    -1,    62,   234,   241,    94,    -1,    62,   234,   241,
      95,   234,    94,    -1,    62,   241,    94,    -1,    62,   241,
      95,   234,    94,    -1,   200,   234,   183,   234,    -1,   241,
     200,   234,   183,   234,    -1,   234,    14,   234,    -1,   234,
      18,    14,   234,    -1,   234,    13,   234,    -1,   234,    18,
      13,   234,    -1,    57,    -1,    65,    -1,    66,    -1,   243,
      -1,   172,   257,   258,    -1,   172,   257,   258,   101,   261,
     244,   245,   249,   250,   253,   254,   255,    -1,    -1,   199,
     234,    -1,    -1,   105,    51,   246,   248,    -1,   234,   247,
      -1,   246,   231,   234,   247,    -1,    -1,    39,    -1,    85,
      -1,    -1,   201,   156,    -1,    -1,   110,   234,    -1,    -1,
     145,    51,   251,    -1,   252,    -1,   251,   231,   252,    -1,
       3,   247,    -1,    -1,   129,   234,    -1,   129,   234,   231,
     234,    -1,   129,   234,   131,   234,    -1,    -1,   104,   188,
      -1,   104,   163,    -1,   104,   188,   164,   130,    -1,   104,
     163,   164,   130,    -1,    -1,   119,   256,    -1,     3,    -1,
     256,   231,     3,    -1,    -1,   257,    35,    -1,   257,    79,
      -1,   257,    83,    -1,   257,   108,    -1,   257,   169,    -1,
     257,   159,    -1,   257,   167,    -1,   257,   166,    -1,   259,
      -1,   258,   231,   259,    -1,    26,    -1,   234,   260,    -1,
      41,     3,    -1,     3,    -1,    -1,   262,    -1,   261,   231,
     262,    -1,   263,    -1,   265,    -1,     3,   260,   272,    -1,
       3,   228,     3,   260,   272,    -1,   275,   264,     3,    -1,
     229,   261,   230,    -1,    41,    -1,    -1,   262,   266,   122,
     263,   270,    -1,   262,   169,   263,    -1,   262,   169,   263,
     144,   234,    -1,   262,   268,   267,   122,   263,   271,    -1,
     262,   139,   269,   122,   263,    -1,    -1,   114,    -1,    61,
      -1,    -1,   143,    -1,   127,    -1,   157,    -1,   127,   267,
      -1,   157,   267,    -1,    -1,    -1,   271,    -1,   144,   234,
      -1,   192,   229,   256,   230,    -1,   193,   123,   273,   229,
     274,   230,    -1,   115,   123,   273,   229,   274,   230,    -1,
      99,   123,   273,   229,   274,   230,    -1,    -1,   104,   122,
      -1,    -1,     3,    -1,   274,   231,     3,    -1,   229,   243,
     230,    -1,   276,    -1,    80,   277,   101,     3,   244,   250,
     253,    -1,   277,   126,    -1,   277,   149,    -1,   277,   115,
      -1,    -1,    80,   277,   278,   101,   261,   244,    -1,     3,
     279,    -1,   278,   231,     3,   279,    -1,    -1,   228,    26,
      -1,    80,   277,   101,   278,   192,   261,   244,    -1,   280,
      -1,    81,   182,     3,    -1,    81,   182,   117,   205,     3,
      -1,   281,    -1,    58,   116,     3,   144,     3,   229,   282,
     230,    -1,    58,   116,   117,   205,     3,   144,     3,   229,
     282,   230,    -1,    58,   190,   116,     3,   144,     3,   229,
     282,   230,    -1,    58,   190,   116,   117,   205,     3,   144,
       3,   229,   282,   230,    -1,    58,   116,     3,   144,     3,
     192,   194,   229,   282,   230,    -1,    58,   116,   117,   205,
       3,   144,     3,   192,   194,   229,   282,   230,    -1,    58,
     190,   116,     3,   144,     3,   192,   194,   229,   282,   230,
      -1,    58,   190,   116,   117,   205,     3,   144,     3,   192,
     194,   229,   282,   230,    -1,    58,   116,    70,     3,   144,
       3,   229,   282,   230,    -1,    58,   116,    70,   117,   205,
       3,   144,     3,   229,   282,   230,    -1,    58,   190,   116,
      70,     3,   144,     3,   229,   282,   230,    -1,    58,   190,
     116,    70,   117,   205,     3,   144,     3,   229,   282,   230,
      -1,    58,   116,    70,     3,   144,     3,   192,   194,   229,
     282,   230,    -1,    58,   190,   116,    70,     3,   144,     3,
     192,   194,   229,   282,   230,    -1,     3,    -1,   282,   231,
       3,    -1,   283,    -1,   215,   229,     3,   230,    -1,   216,
     229,     3,   230,    -1,   217,   229,     3,   230,    -1,   218,
     229,     3,   231,     3,   230,    -1,   284,    -1,    81,   116,
       3,    -1,   285,   287,    -1,   185,   182,     3,    -1,   185,
     182,     3,   231,   286,    -1,     3,    -1,   286,   231,     3,
      -1,    -1,   287,    59,    -1,   287,   155,    -1,   287,    45,
      43,    -1,   287,    44,    43,    -1,   288,    -1,   152,   182,
       3,    -1,   289,    -1,    36,   182,     3,    -1,    36,   182,
       3,   228,     3,    -1,   290,    -1,    32,   182,     3,    33,
      56,     3,    63,   229,   234,   230,    -1,    32,   182,     3,
      33,    56,     3,   190,   229,   321,   230,    -1,    32,   182,
       3,    33,    56,     3,   100,   123,   229,   318,   230,   153,
       3,   229,   319,   230,   320,    -1,    32,   182,     3,    33,
      56,     3,    63,   229,   234,   230,    18,   195,    -1,    32,
     182,     3,    33,    56,     3,   100,   123,   229,   318,   230,
     153,     3,   229,   319,   230,   320,    18,   195,    -1,    32,
     182,     3,    33,    56,     3,   148,   123,   229,   317,   230,
      -1,    32,   182,     3,    81,    56,     3,    -1,    32,   182,
       3,   154,    56,     3,   175,     3,    -1,    32,   182,     3,
      91,    56,     3,    -1,    32,   182,     3,    74,    56,     3,
      -1,    32,   182,     3,   195,    56,     3,    -1,    32,   182,
       3,    33,    69,     3,   328,   323,   291,    -1,    32,   182,
       3,    81,    69,     3,    -1,    32,   182,     3,    81,     3,
      -1,    32,   182,     3,   154,    69,     3,   175,     3,    -1,
      32,   182,     3,   154,     3,   175,     3,    -1,    32,   182,
       3,   136,    69,     3,   328,   323,   291,    -1,    32,   182,
       3,   136,     3,   328,   323,   291,    -1,    32,   182,     3,
      60,    69,     3,     3,   328,   323,   291,    -1,    32,   182,
       3,    60,     3,     3,   328,   323,   291,    -1,    -1,    97,
      -1,    34,     3,    -1,   292,    -1,   118,   294,   295,     3,
     296,   197,   298,   293,    -1,   118,   294,   295,     3,   296,
     243,    -1,    -1,   146,   123,   188,   301,    -1,    -1,   294,
     126,    -1,   294,    76,    -1,   294,   108,    -1,   294,   115,
      -1,   119,    -1,    -1,    -1,   229,   297,   230,    -1,     3,
      -1,   297,   231,     3,    -1,   229,   300,   230,    -1,    -1,
     298,   231,   299,   229,   300,   230,    -1,   234,    -1,    86,
      -1,   300,   231,   234,    -1,   300,   231,    86,    -1,   118,
     294,   295,     3,   171,   301,   293,    -1,     3,    20,   234,
      -1,     3,    20,    86,    -1,   301,   231,     3,    20,   234,
      -1,   301,   231,     3,    20,    86,    -1,   302,    -1,   158,
     294,   295,     3,   296,   197,   298,   293,    -1,   158,   294,
     295,     3,   171,   301,   293,    -1,   158,   294,   295,     3,
     296,   243,   293,    -1,   303,    -1,   188,   304,   261,   171,
     305,   244,   250,   253,    -1,    -1,   294,   126,    -1,   294,
     115,    -1,     3,    20,   234,    -1,     3,   228,     3,    20,
     234,    -1,   305,   231,     3,    20,   234,    -1,   305,   231,
       3,   228,     3,    20,   234,    -1,   306,    -1,    58,    71,
     307,     3,    -1,    58,   160,   307,     3,    -1,    -1,   117,
     205,    -1,   308,    -1,    58,    75,     3,    41,   328,    -1,
      58,    75,     3,    41,   328,    86,   234,    -1,    58,    75,
       3,    41,   328,    18,   142,    -1,    58,    75,     3,    41,
     328,    63,   229,   234,   230,    -1,    58,    75,     3,    41,
     328,    18,   142,    63,   229,   234,   230,    -1,   309,    -1,
     193,     3,    -1,   193,    71,     3,    -1,   310,    -1,    58,
     314,   182,   307,     3,   229,   315,   230,   311,    -1,    58,
     314,   182,   307,     3,   228,     3,   229,   315,   230,   311,
      -1,    -1,   311,    38,    20,     5,    -1,   311,    38,     5,
      -1,   311,   144,     3,    80,     3,    -1,   311,   144,     3,
     178,     3,    -1,   311,   161,    51,   194,   229,     3,   230,
     162,     5,    -1,   311,   161,    51,   150,   229,     3,   230,
     229,   312,   230,    -1,   313,    -1,   312,   231,   313,    -1,
     161,     3,   197,   124,   180,     4,   144,   140,     5,    -1,
     161,     3,   197,   124,   180,   134,   144,   140,     5,    -1,
      58,   314,   182,   307,     3,   229,   315,   230,   330,    -1,
      58,   314,   182,   307,     3,   330,    -1,    58,   314,   182,
     307,     3,   228,     3,   229,   315,   230,   330,    -1,    58,
     314,   182,   307,     3,   228,     3,   330,    -1,    -1,   176,
      -1,   177,   176,    -1,   316,    -1,   315,   231,   316,    -1,
     148,   123,   229,   317,   230,    -1,    56,     3,   148,   123,
     229,   317,   230,    -1,   123,   229,   256,   230,    -1,   116,
     229,   256,   230,    -1,   103,   116,   229,   256,   230,    -1,
     103,   123,   229,   256,   230,    -1,    63,   229,   234,   230,
      -1,    56,     3,    63,   229,   234,   230,    -1,   100,   123,
     229,   318,   230,   153,     3,   229,   319,   230,   320,    -1,
     100,   123,   229,   318,   230,   153,     3,   228,     3,   229,
     319,   230,   320,    -1,    56,     3,   100,   123,   229,   318,
     230,   153,     3,   229,   319,   230,   320,    -1,    56,     3,
     100,   123,   229,   318,   230,   153,     3,   228,     3,   229,
     319,   230,   320,    -1,   190,   229,   321,   230,    -1,    56,
       3,   190,   229,   321,   230,    -1,     3,    -1,   317,   231,
       3,    -1,     3,    -1,   318,   231,     3,    -1,     3,    -1,
     319,   231,     3,    -1,    -1,   320,   144,    80,    59,    -1,
     320,   144,    80,   171,   142,    -1,   320,   144,    80,   155,
      -1,   320,   144,    80,   171,    86,    -1,   320,   144,   188,
      59,    -1,   320,   144,   188,   171,   142,    -1,   320,   144,
     188,   155,    -1,   320,   144,   188,   171,    86,    -1,   320,
     144,    80,   141,    -1,   320,   144,   188,   141,    -1,   320,
     133,   102,    -1,   320,   133,   168,    -1,   320,   133,   147,
      -1,   320,    72,    -1,   320,    18,    72,    -1,   320,    72,
     112,    73,    -1,   320,    72,   112,   111,    -1,     3,    -1,
     321,   231,     3,    -1,    -1,   322,     3,   328,   323,    -1,
      -1,   323,    18,   142,    -1,   323,   142,    -1,   323,    86,
       4,    -1,   323,    86,     5,    -1,   323,    86,     7,    -1,
     323,    86,     6,    -1,   323,    86,   221,   229,   230,    -1,
     323,    86,   222,   229,   230,    -1,   323,    86,   223,   229,
     230,    -1,   323,    86,    57,    -1,   323,    86,   229,   234,
     230,    -1,   323,    38,    -1,   323,    38,   229,     5,   231,
       5,   230,    -1,   323,    38,   229,     5,   230,    -1,   323,
      43,   229,     5,   231,     5,   230,    -1,   323,    43,   229,
       5,   230,    -1,   323,    43,    -1,   323,   190,   123,    -1,
     323,   190,    -1,   323,   148,   123,    -1,   323,   123,    -1,
     323,    64,     4,    -1,   323,    63,   229,   234,   230,    -1,
     323,    56,     3,   190,    -1,   323,    56,     3,   148,   123,
      -1,   323,    56,     3,    63,   229,   234,   230,    -1,   323,
      46,    42,    41,   229,   234,   230,    47,    -1,   323,    46,
      42,    41,   229,   234,   230,    48,    -1,   323,    46,    42,
      41,   229,   234,   230,    -1,   323,    41,   229,   234,   230,
      47,    -1,   323,    41,   229,   234,   230,    48,    -1,   323,
      41,   229,   234,   230,    -1,    -1,   229,     5,   230,    -1,
     229,     5,   231,     5,   230,    -1,    -1,    52,    -1,    -1,
     326,   189,    -1,   326,   204,    -1,    -1,   327,    67,   171,
       4,    -1,   327,    68,     4,    -1,    55,   324,    -1,   174,
     324,   326,    -1,   170,   324,   326,    -1,   138,   324,   326,
      -1,   120,   324,   326,    -1,   113,   324,   326,    -1,    54,
     324,   326,    -1,   151,   324,   326,    -1,    87,   324,   326,
      -1,    98,   324,   326,    -1,    89,   324,   326,    -1,    90,
      -1,   187,    -1,   181,    -1,    88,    -1,   202,    -1,    67,
     324,   327,    -1,   196,   229,     5,   230,   327,    -1,    52,
     324,    -1,   198,   229,     5,   230,    -1,   186,    -1,    49,
      -1,   137,    -1,   132,    -1,   173,   325,   327,    -1,   179,
     325,   327,    -1,   135,   325,   327,    -1,   125,   325,   327,
      -1,    93,   229,   329,   230,   327,    -1,   171,   229,   329,
     230,   327,    -1,    50,    -1,   191,    -1,     4,    -1,   329,
     231,     4,    -1,   331,   264,   243,    -1,    -1,   115,    -1,
     158,    -1,   332,    -1,   171,   160,     3,    -1,   171,   160,
      86,    -1,   171,   333,    -1,   334,    -1,   333,   231,   334,
      -1,     8,    20,   234,    -1,     8,     9,   234,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   328,   328,   329,   334,   341,   342,   343,   361,   369,
     377,   383,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     414,   415,   416,   417,   420,   421,   422,   423,   424,   427,
     428,   431,   432,   435,   436,   439,   439,   440,   440,   441,
     442,   443,   447,   451,   452,   453,   454,   455,   456,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   478,   485,   492,   496,   500,   506,   507,
     508,   511,   512,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   526,   528,   530,   532,   536,   544,   555,   556,
     559,   560,   563,   571,   579,   590,   600,   601,   615,   616,
     617,   618,   621,   628,   636,   637,   638,   641,   642,   645,
     646,   649,   650,   653,   654,   657,   665,   666,   667,   668,
     671,   672,   673,   674,   675,   678,   679,   682,   683,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   697,   698,
     699,   707,   713,   714,   715,   718,   719,   722,   723,   727,
     734,   735,   736,   739,   740,   744,   746,   748,   750,   752,
     756,   757,   758,   761,   762,   765,   766,   769,   770,   771,
     774,   775,   778,   779,   783,   785,   787,   789,   792,   793,
     796,   797,   800,   804,   814,   822,   823,   824,   825,   829,
     833,   835,   839,   839,   841,   846,   853,   860,   870,   877,
     884,   894,   902,   912,   920,   929,   938,   948,   956,   965,
     974,   984,   993,  1005,  1010,  1015,  1021,  1028,  1035,  1042,
    1052,  1059,  1068,  1075,  1081,  1089,  1095,  1103,  1104,  1105,
    1106,  1107,  1111,  1118,  1127,  1134,  1140,  1151,  1154,  1160,
    1166,  1173,  1179,  1186,  1192,  1198,  1204,  1210,  1216,  1222,
    1228,  1234,  1240,  1246,  1252,  1258,  1264,  1270,  1278,  1279,
    1280,  1283,  1291,  1297,  1310,  1311,  1314,  1315,  1316,  1317,
    1318,  1321,  1321,  1324,  1325,  1328,  1338,  1351,  1352,  1352,
    1355,  1356,  1357,  1358,  1361,  1365,  1366,  1367,  1368,  1374,
    1377,  1383,  1388,  1394,  1402,  1411,  1412,  1413,  1417,  1428,
    1440,  1451,  1466,  1470,  1471,  1474,  1475,  1479,  1483,  1485,
    1487,  1489,  1491,  1496,  1500,  1501,  1505,  1514,  1524,  1528,
    1529,  1530,  1531,  1532,  1533,  1535,  1539,  1540,  1543,  1558,
    1565,  1580,  1593,  1608,  1621,  1622,  1623,  1626,  1627,  1630,
    1631,  1632,  1633,  1634,  1635,  1636,  1637,  1638,  1640,  1642,
    1644,  1646,  1648,  1652,  1653,  1656,  1657,  1660,  1661,  1664,
    1665,  1666,  1667,  1668,  1669,  1670,  1671,  1672,  1673,  1674,
    1675,  1676,  1677,  1678,  1679,  1680,  1681,  1684,  1685,  1688,
    1688,  1698,  1699,  1700,  1701,  1702,  1703,  1704,  1705,  1706,
    1707,  1708,  1709,  1716,  1717,  1718,  1719,  1720,  1721,  1722,
    1723,  1724,  1725,  1726,  1727,  1728,  1729,  1730,  1731,  1732,
    1733,  1734,  1735,  1736,  1739,  1740,  1741,  1744,  1745,  1748,
    1749,  1750,  1753,  1754,  1755,  1759,  1760,  1761,  1762,  1763,
    1764,  1765,  1766,  1767,  1768,  1769,  1770,  1771,  1772,  1773,
    1774,  1775,  1776,  1777,  1778,  1779,  1780,  1781,  1782,  1783,
    1784,  1785,  1786,  1787,  1788,  1789,  1790,  1793,  1794,  1797,
    1810,  1811,  1812,  1816,  1819,  1820,  1821,  1822,  1822,  1824,
    1825
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
  "DECIMAL", "DATE", "ENABLE", "ESCAPED", "ENUM", "END", "ELSE", "EXPLAIN",
  "FIRST", "FLOAT", "FORCE", "FOREIGN", "FROM", "FULL", "FULLTEXT", "FOR",
  "GROUP", "HOUR_MINUTE", "HOUR_MICROSECOND", "HIGH_PRIORITY",
  "HOUR_SECOND", "HAVING", "IMMEDIATE", "INITIALLY", "INTEGER", "INNER",
  "IGNORE", "INDEX", "IF", "INSERT", "INTO", "INT", "INTERVAL", "JOIN",
  "KEY", "LESS", "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT",
  "LOCKED", "OFFSET", "LONGBLOB", "MATCH", "MAXVALUE", "MEDIUMTEXT",
  "MODIFY", "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NODE", "NO_ACTION",
  "NULLX", "OUTER", "ON", "ORDER", "ONDUPLICATE", "PARTIAL", "PRIMARY",
  "QUICK", "RANGE", "REAL", "RECLAIM", "REFERENCES", "RENAME", "RESTRICT",
  "ROLLUP", "RIGHT", "REPLACE", "SQL_SMALL_RESULT", "SCHEMA", "SHARD",
  "SHARDS", "SHARE", "SKIP", "SOME", "SQL_CALC_FOUND_ROWS",
  "SQL_BIG_RESULT", "SIMPLE", "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT",
  "TINYTEXT", "TINYINT", "TO", "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT",
  "THAN", "TIMESTAMP", "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB",
  "TIME", "UPDATE", "UNSIGNED", "UNIQUE", "UUID", "USING", "USE", "HASH",
  "VALIDATE", "VARCHAR", "VALUES", "VARBINARY", "WHERE", "WHEN", "WITH",
  "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM",
  "FDATE_ADD", "FDATE_SUB", "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX",
  "FUPPER", "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE", "FCOALESCE",
  "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID",
  "FLAST_INSERT_ID", "FEVO_SLEEP", "FEVO_JITTER", "';'", "'.'", "'('",
  "')'", "','", "$accept", "stmt_list", "expr", "val_list", "opt_val_list",
  "@1", "@2", "trim_ltb", "interval_exp", "case_list", "stmt",
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
  "opt_col_names", "insert_col_list", "insert_vals_list", "@3",
  "insert_vals", "insert_asgn_list", "replace_stmt", "update_stmt",
  "update_opts", "update_asgn_list", "create_database_stmt",
  "opt_if_not_exists", "create_domain_stmt", "use_database_stmt",
  "create_table_stmt", "opt_table_options", "shard_range_list",
  "shard_range_def", "opt_temporary", "create_col_list",
  "create_definition", "pk_column_list", "fk_column_list",
  "fk_ref_column_list", "fk_actions", "unique_column_list", "@4",
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
     466,   467,   468,   469,   470,   471,   472,    59,    46,    40,
      41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   232,   233,   233,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   235,   235,   236,   236,   237,   234,   238,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   239,   239,
     239,   234,   234,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   234,   234,   234,   234,   241,   241,   234,   234,
     234,   234,   234,   234,   234,   242,   243,   243,   244,   244,
     245,   245,   246,   246,   247,   247,   247,   248,   248,   249,
     249,   250,   250,   251,   251,   252,   253,   253,   253,   253,
     254,   254,   254,   254,   254,   255,   255,   256,   256,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   258,   258,
     258,   259,   260,   260,   260,   261,   261,   262,   262,   263,
     263,   263,   263,   264,   264,   265,   265,   265,   265,   265,
     266,   266,   266,   267,   267,   268,   268,   269,   269,   269,
     270,   270,   271,   271,   272,   272,   272,   272,   273,   273,
     274,   274,   275,   242,   276,   277,   277,   277,   277,   276,
     278,   278,   279,   279,   276,   242,   280,   280,   242,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   282,   282,   282,   283,   283,   283,   283,
     242,   284,   242,   285,   285,   286,   286,   287,   287,   287,
     287,   287,   242,   288,   242,   289,   289,   242,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   291,   291,
     291,   242,   292,   292,   293,   293,   294,   294,   294,   294,
     294,   295,   295,   296,   296,   297,   297,   298,   299,   298,
     300,   300,   300,   300,   292,   301,   301,   301,   301,   242,
     302,   302,   302,   242,   303,   304,   304,   304,   305,   305,
     305,   305,   242,   306,   306,   307,   307,   242,   308,   308,
     308,   308,   308,   242,   309,   309,   242,   310,   310,   311,
     311,   311,   311,   311,   311,   311,   312,   312,   313,   313,
     310,   310,   310,   310,   314,   314,   314,   315,   315,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   317,   317,   318,   318,   319,   319,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   321,   321,   322,
     316,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   324,   324,   324,   325,   325,   326,
     326,   326,   327,   327,   327,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   329,   329,   330,
     331,   331,   331,   242,   332,   332,   332,   333,   333,   334,
     334
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
       8,     6,     3,     3,     3,     3,     4,     6,     1,     1,
       1,     6,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     6,     3,     5,     4,     5,     3,     4,
       3,     4,     1,     1,     1,     1,     3,    12,     0,     2,
       0,     4,     2,     4,     0,     1,     1,     0,     2,     0,
       2,     0,     3,     1,     3,     2,     0,     2,     4,     4,
       0,     2,     2,     4,     4,     0,     2,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     3,
       1,     2,     2,     1,     0,     1,     3,     1,     1,     3,
       5,     3,     3,     1,     0,     5,     3,     5,     6,     5,
       0,     1,     1,     0,     1,     1,     1,     2,     2,     0,
       0,     1,     2,     4,     6,     6,     6,     0,     2,     0,
       1,     3,     3,     1,     7,     2,     2,     2,     0,     6,
       2,     4,     0,     2,     7,     1,     3,     5,     1,     8,
      10,     9,    11,    10,    12,    11,    13,     9,    11,    10,
      12,    11,    12,     1,     3,     1,     4,     4,     4,     6,
       1,     3,     2,     3,     5,     1,     3,     0,     2,     2,
       3,     3,     1,     3,     1,     3,     5,     1,    10,    10,
      17,    12,    19,    11,     6,     8,     6,     6,     6,     9,
       6,     5,     8,     7,     9,     8,    10,     9,     0,     1,
       2,     1,     8,     6,     0,     4,     0,     2,     2,     2,
       2,     1,     0,     0,     3,     1,     3,     3,     0,     6,
       1,     1,     3,     3,     7,     3,     3,     5,     5,     1,
       8,     7,     7,     1,     8,     0,     2,     2,     3,     5,
       5,     7,     1,     4,     4,     0,     2,     1,     5,     7,
       7,     9,    11,     1,     2,     3,     1,     9,    11,     0,
       4,     3,     5,     5,     9,    10,     1,     3,     9,     9,
       9,     6,    11,     8,     0,     1,     2,     1,     3,     5,
       7,     4,     4,     5,     5,     4,     6,    11,    13,    13,
      15,     4,     6,     1,     3,     1,     3,     1,     3,     0,
       4,     5,     4,     5,     4,     5,     4,     5,     4,     4,
       3,     3,     3,     2,     3,     4,     4,     1,     3,     0,
       4,     0,     3,     2,     3,     3,     3,     3,     5,     5,
       5,     3,     5,     2,     7,     5,     7,     5,     2,     3,
       2,     3,     2,     3,     5,     4,     5,     7,     8,     8,
       7,     6,     6,     5,     0,     3,     5,     0,     1,     0,
       2,     2,     0,     4,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     3,     5,     2,     4,     1,     1,     1,     1,     3,
       3,     3,     3,     5,     5,     1,     1,     1,     3,     3,
       0,     1,     1,     1,     3,     3,     2,     1,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   344,   198,     0,   276,     0,   276,     0,
     139,     0,   276,     0,     0,     0,   105,   193,   205,   208,
     230,   237,   242,   244,   247,   271,   299,   303,   312,   317,
     323,   326,   473,     0,     0,   315,     0,     0,   315,   345,
       0,     0,     0,     0,     0,     0,   282,     0,   282,     0,
       0,   476,   477,     0,     0,     0,     0,   324,     0,     1,
       2,   232,     0,   245,     0,     0,     0,     0,     0,     0,
       0,   346,     0,   315,   202,     0,   197,   195,   196,     0,
     231,   206,     0,   278,   279,   280,   281,   277,     0,   243,
       0,     0,     0,   474,   475,     0,     4,     7,     8,    10,
       9,     6,     0,     0,     0,   150,   140,   102,     0,   103,
     104,   141,   142,   143,    11,   145,   147,   146,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   154,   106,   148,   233,   280,   277,   154,     0,
       0,   155,   157,   158,   164,   325,     3,     0,     0,   238,
     239,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     316,   313,     0,     0,     0,     0,     0,   314,     0,     0,
       0,     0,     0,   200,   108,     0,     0,     0,     0,   283,
     283,   480,   479,   478,     0,    43,     0,    28,    27,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   151,     0,
       0,     0,     0,   187,     0,     0,     0,     0,   172,   171,
     175,   179,   176,     0,     0,   173,   163,     0,   241,   240,
       0,     0,     0,     0,     0,   261,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,   456,   465,   424,   424,
     424,   424,   424,   449,   424,   446,     0,   424,   424,   424,
     427,   458,   427,   457,   424,   424,   424,     0,   427,   424,
     427,   448,   455,   447,   466,     0,     0,   450,   318,     0,
       0,     0,     0,     0,     0,     0,     0,   470,   203,     0,
     121,     0,   108,   202,   207,     0,     0,     0,     0,     0,
       5,    41,    44,     0,    38,     0,     0,    94,     0,     0,
       0,     0,    80,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,     0,     0,    19,    21,    22,
      20,   100,    98,    36,     0,    34,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    23,    24,    26,
      12,    13,    14,    15,    16,    17,    25,   152,   108,   149,
     235,   234,   154,     0,     0,     0,   159,   192,   162,     0,
     108,   156,   173,   173,     0,   166,     0,   174,     0,   161,
       0,     0,     0,     0,   257,   254,   260,   256,   391,     0,
       0,     0,     0,   258,     0,   453,   429,   435,   432,   429,
     429,     0,   429,   429,   429,   428,   432,   432,   429,   429,
     429,     0,   432,   429,   432,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   471,
     472,     0,   389,   341,   164,   109,     0,   126,   108,   199,
     201,     0,   274,   285,     0,     0,   273,   274,     0,   274,
       0,    52,     0,    92,     0,     0,     0,    51,     0,     0,
      63,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    66,    67,    68,     0,     0,     0,    76,     0,    37,
      35,     0,     0,   101,    99,    47,     0,     0,     0,     0,
       0,     0,   110,     0,   187,   189,   189,   189,     0,     0,
       0,   121,   177,   178,     0,     0,   180,     0,     0,     0,
       0,     0,   391,   391,     0,   268,   391,   263,     0,     0,
       0,   441,   451,   443,   445,   467,     0,   444,   440,   439,
     462,   461,   438,   442,   437,     0,   459,   436,   460,     0,
       0,   320,     0,   319,     0,   223,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,   194,   204,     0,     0,
       0,   294,   284,     0,     0,   274,   301,   274,   302,    42,
      96,     0,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
      39,     0,     0,     0,    30,     0,   119,   236,   160,     0,
       0,     0,     0,   308,     0,     0,   126,   169,   167,     0,
       0,   165,   181,     0,     0,     0,     0,     0,   268,   268,
     391,     0,     0,   403,     0,   408,     0,     0,     0,     0,
       0,   269,   412,   393,     0,   410,   265,   268,   255,   262,
     425,     0,   430,   431,     0,     0,   432,     0,   432,   432,
     454,     0,     0,     0,     0,     0,     0,     0,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   389,   343,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   329,   389,     0,   469,   114,   122,   123,   127,
     296,   295,     0,     0,   286,   291,   290,     0,   288,   272,
     300,    93,    97,     0,    61,    60,     0,    65,     0,     0,
      81,    82,    69,     0,    71,    77,    46,     0,    50,    40,
      33,    31,    32,     0,     0,   121,   188,     0,     0,     0,
       0,     0,     0,   304,   182,     0,   168,     0,     0,     0,
     387,     0,   259,   267,   268,   392,   270,     0,     0,     0,
       0,     0,     0,   413,   394,   395,   397,   396,   401,     0,
       0,     0,     0,   411,   409,   264,     0,     0,   434,   463,
     468,   464,   452,     0,   321,     0,     0,     0,     0,     0,
     224,     0,   217,     0,     0,     0,     0,   211,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   137,     0,     0,     0,     0,   327,   340,   348,
     391,   115,   116,   125,     0,     0,     0,     0,     0,   287,
       0,     0,     0,     0,    64,    83,    84,    85,    86,    90,
      89,    91,    88,    87,     0,    48,   114,   117,   120,   126,
     190,     0,     0,     0,   309,   310,     0,     0,   248,   365,
       0,   363,     0,   249,     0,   266,     0,     0,     0,     0,
       0,     0,   415,     0,     0,     0,     0,     0,   426,   433,
       0,   213,   226,   227,   228,     0,     0,     0,     0,   210,
       0,     0,   219,     0,     0,     0,   329,     0,     0,     0,
       0,   355,     0,     0,     0,   352,     0,   351,     0,   361,
       0,     0,     0,   390,   124,   129,   128,   275,   298,   297,
     293,   292,     0,    62,    59,    70,   112,     0,     0,   111,
     130,   186,     0,   185,   184,     0,   183,     0,     0,     0,
     253,     0,   388,   405,     0,   423,   407,     0,     0,     0,
     416,   414,   398,   399,   400,   402,   322,     0,   221,   218,
       0,   215,     0,     0,     0,   212,   328,   342,     0,     0,
       0,     0,     0,   353,   354,   138,   349,   331,     0,     0,
       0,     0,   118,   114,     0,   135,   191,   311,   251,     0,
     366,   364,     0,   421,   422,     0,     0,     0,   229,   214,
     222,   220,     0,   356,     0,     0,   362,     0,   330,     0,
       0,     0,     0,   289,   113,   132,   131,     0,   107,     0,
     404,   406,   420,   417,   216,     0,   350,     0,   332,   333,
       0,     0,     0,     0,   136,     0,   418,   419,     0,     0,
       0,     0,     0,   134,   133,   367,     0,     0,     0,     0,
       0,     0,   369,     0,     0,     0,     0,   369,     0,     0,
     250,   368,     0,     0,     0,   357,     0,     0,   336,   334,
       0,   383,     0,     0,     0,   369,   369,     0,     0,   335,
       0,   384,   252,     0,   380,   382,   381,     0,     0,     0,
     359,   358,     0,   337,   385,   386,   370,   378,   372,     0,
     374,   379,   376,     0,   369,     0,   373,   371,   377,   375,
     360,     0,     0,     0,     0,     0,     0,     0,   338,   339
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   341,   342,   343,   531,   657,   356,   649,   202,
      15,    16,   330,   666,   907,   883,   989,   795,   487,   757,
     758,   626,  1045,  1078,   873,    53,   143,   144,   248,   150,
     151,   152,   267,   153,   264,   428,   265,   424,   681,   682,
     416,   670,   911,   154,    17,    43,    79,   183,    18,    19,
     600,   601,    20,    21,   411,    61,    22,    23,    24,   706,
      25,   631,    46,    88,   337,   494,   635,   891,   767,   492,
      26,    27,    56,   420,    28,    65,    29,    30,    31,   877,
    1127,  1128,    42,   620,   621,   922,   920,  1106,  1120,   811,
     622,   565,   445,   456,   571,   572,   318,   576,   483,   484,
      32,    51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -877
static const yytype_int16 yypact[] =
{
    2491,   -95,   -92,   457,  -877,   124,  -877,   -69,  -877,    21,
    -877,   -42,    12,    56,   123,    71,  -877,  -877,  -877,  -877,
    -877,  -877,  -877,  -877,  -877,  -877,  -877,  -877,  -877,  -877,
    -877,  -877,  -877,   315,   323,   359,   416,   279,   359,  -877,
     278,   378,   316,   166,   518,    29,   381,   561,   381,   299,
      50,   345,  -877,   221,   577,   404,    14,  -877,   582,  -877,
    2491,   447,   264,   388,   382,   609,   586,   488,    31,   441,
     626,  -877,   308,   359,   409,   657,  -877,  -877,  -877,   -58,
    -877,  -877,   483,  -877,  -877,  -877,  -877,  -877,   689,  -877,
     696,  1511,  1511,  -877,  -877,   700,   182,  -877,  -877,  -877,
    -877,   725,  1511,  1511,  1511,  -877,  -877,  -877,   636,  -877,
    -877,  -877,  -877,  -877,  -877,  -877,  -877,  -877,  -877,   484,
     510,   517,   528,   534,   539,   551,   555,   568,   602,   605,
     611,   665,   674,   687,   699,   705,   737,   751,   758,   759,
     760,  1511,  2850,    27,  -877,   680,    19,    20,    16,    28,
    -110,   452,  -877,  -877,   950,  -877,  -877,   947,   951,  -877,
    -877,   460,   348,   936,   277,   941,   351,   337,   942,   996,
    -877,  -877,  2601,   997,   857,   797,  1001,  -877,   861,   113,
     801,  1012,  1003,  -877,   339,   230,    14,  1027,  1028,   150,
     241,  2934,  2934,  -877,  1029,  1511,  1511,  1196,  1196,  -877,
    1511,  2370,   288,   864,  1511,   461,  1511,  1511,   865,  1511,
    1511,  1511,  1511,  1511,  1511,  1511,  1511,  1511,  1511,   803,
     807,   808,   809,  1511,  1511,  1590,  -877,  1511,  1511,  1511,
    1511,  1511,   111,   812,   681,  1511,   593,  1511,  1511,  1511,
    1511,  1511,  1511,  1511,  1511,  1511,  1511,  1039,  -877,    14,
    1511,  1042,  1043,   -59,   824,   362,  1065,    14,  -877,  -877,
    -877,   354,  -877,    14,   970,   926,  -877,  1090,  -877,  -877,
    1092,  1093,  1116,  1126,  1140,  -877,  1141,  1142,  1143,  2601,
    1144,   973,  1146,  1154,  1155,  -877,  -877,  -877,   930,   930,
     930,   930,   930,  -877,   930,  -877,   931,   930,   930,   930,
    1109,  -877,  1109,  -877,   930,   930,   930,   933,  1109,   930,
    1109,  -877,  -877,  -877,  -877,   934,   935,  -877,    26,   268,
    1164,  1165,  1025,  1167,  1030,   966,  1169,   173,  -877,  1511,
    1031,    14,   294,   409,  -877,  1172,  1174,   410,  1172,   411,
    -877,    81,  -877,   948,  2934,  2450,   290,  -877,  1511,  1511,
     952,   193,  -877,  -877,  -877,  1619,   892,   533,   949,   976,
    1655,  1731,  1752,  1781,  1803,  1832,  1853,  1876,   998,  1037,
    1112,  -877,  -877,  -877,  -877,  1897,  1368,  -877,  2954,  2973,
    2682,  2991,  2991,  -877,    30,  -877,   864,  1511,  1511,   979,
    1511,  2888,   980,   982,   983,   978,  1305,  1401,   747,   800,
     677,   677,  1149,  1149,  1149,  1149,  -877,  -877,   294,  -877,
    -877,   999,    83,  1058,  1104,  1105,  -877,  -877,  -877,     4,
     302,   452,   926,   926,  1110,  1087,    14,  -877,  1111,  -877,
     205,  2601,  2601,  1232,  -877,  -877,  -877,  -877,  -877,  2601,
    1233,  1068,  1069,  -877,  1240,  -877,  -877,  -877,  -877,  -877,
    -877,  1242,  -877,  -877,  -877,  -877,  -877,  -877,  -877,  -877,
    -877,  1242,  -877,  -877,  -877,  1243,  1244,  1108,  1018,  1511,
    1059,    18,   291,  1113,  1251,   295,  1252,  1253,  1114,  -877,
    -877,  1257,   633,  -877,   950,  2934,  1210,  1145,   294,  -877,
    -877,  1249,  -113,  -877,   384,  1041,  -877,  -113,  1041,  1125,
    1511,  -877,  1511,  -877,  1511,  2735,  2471,  -877,  1511,  1511,
    -877,  1511,  2577,  1151,  1151,  -877,  -877,  -877,  -877,  -877,
    -877,  -877,  -877,  -877,  1511,  1511,  1511,  -877,  1511,  -877,
    -877,  1511,  1045,  2991,  2991,   864,  2911,  1511,   864,   864,
     864,  1048,  1168,  1276,   -59,  1176,  1176,  1176,  1511,  1278,
    1279,  1031,  -877,  -877,    14,  1511,  -107,    14,  1054,  1162,
    1163,  1060,  -877,  -877,  2601,  2487,  -877,  -877,  1284,  1285,
     392,   110,   469,   110,   110,  -877,   394,   110,   110,   110,
     469,   469,   110,   110,   110,   405,   469,   110,   469,  1062,
    1063,  1231,  1511,  2934,  1066,  -877,  1083,  1084,  1085,  1086,
     418,  -877,  1103,    18,  1295,   313,  1123,    18,   342,  1175,
    1315,   178,  1319,  1094,  1213,   387,  1115,  1117,  1214,  1118,
     421,  -877,  1335,   864,  1336,  1511,  -877,  -877,  1148,  1217,
    1338,  -877,  -877,  1339,  1234,  -111,  -877,  -111,  -877,  -877,
    2934,  2794,  -877,  1511,  1568,    54,  1918,  1511,  1511,  1119,
    1120,  1944,  1392,  1965,  1994,  1121,  -877,  1511,  1122,  1511,
    1281,  1170,  1179,  1202,  -877,  1297,  1265,  -877,  -877,  1263,
    1204,  1205,  1206,  2934,  1379,    32,  1145,  -877,  2934,  1511,
    1207,  -877,  -877,  -107,  1511,  1208,  1209,  1458,  2487,  2487,
    -877,  1320,  1483,  1258,  1266,  1267,  1455,  1495,  1270,  1496,
      41,  -877,  -877,  -877,  1378,  1382,  -877,  2487,  -877,  -877,
    -877,  1497,  -877,  -877,  1337,  1502,  -877,  1503,  -877,  -877,
    -877,  1280,  2016,    18,  1507,  1509,  1510,  1517,  -877,  1518,
    1293,   426,  1294,  1330,    18,  1296,   432,  1332,    18,  1524,
     376,   633,  -877,   314,  1511,  1301,  1302,  1303,  1530,  1530,
    1306,  1458,   158,   633,  2601,  -877,   424,  1307,  -877,   346,
    -877,  2934,  1346,  1519,  -877,  -877,  2934,   434,  -877,  -877,
    -877,  -877,  2934,  1511,  -877,  -877,  1511,  -877,  2045,  2344,
    -877,  -877,  -877,  1511,  -877,  -877,  -877,  1310,  -877,  1281,
    -877,  -877,  -877,  1511,  1511,  1031,  -877,  1534,  1534,  1534,
    1511,  1511,  1538,  -877,  2934,  1530,  -877,  2066,  1539,  1541,
    -877,   485,  -877,  -877,  2487,  -877,  -877,  1540,  1511,  1542,
    1505,   196,  1511,  -877,  -877,  -877,  -877,  -877,  -877,  1321,
    1324,  1325,  1511,  -877,  -877,  -877,  1326,  1545,  -877,   469,
    -877,   469,   469,  1511,  -877,   491,  1327,  1328,  1329,  1331,
    -877,    18,  -877,    18,  1334,   497,    18,  -877,  1340,   501,
    1341,  1361,    18,   507,  1342,  1437,  1438,  1345,  2089,  1539,
    1530,  1530,  -877,   512,   514,  1541,   520,   -12,  -877,  -877,
    -877,  -877,  -877,  -877,  1336,  1511,  1511,  1172,  1259,  -877,
    1486,  1356,  2110,  2131,  -877,  -877,  -877,  -877,  -877,  -877,
    -877,  -877,  -877,  -877,  2157,  -877,  2820,   334,  2934,  1145,
    -877,   522,   524,   529,  2934,  2934,  1544,   531,  1547,  -877,
     536,  -877,   558,  -877,  1563,  -877,   564,  2178,   590,  1393,
    1395,  1444,  -877,  2207,  1377,  1391,  1396,  2229,  -877,  -877,
    2258,  -877,  -877,  -877,  -877,  1572,   608,   644,    18,  -877,
     646,    18,  -877,    18,  1398,   648,   158,  1511,  1407,  1421,
    1458,  -877,   650,   654,   656,  -877,  1622,  -877,   658,  -877,
     297,  1648,  1601,  2496,  -877,  2934,  2934,  1423,  -877,  2934,
    -877,  2934,  1234,  -877,  -877,  -877,  -877,  1499,  1511,  -877,
    1552,  -877,  1654,  -877,  -877,  1511,  -877,  1463,  1506,  1657,
    -877,  1658,  -877,  -877,  1659,   816,  -877,  1681,  1511,  1511,
    -877,  -877,  -877,  -877,  -877,  -877,  -877,  1432,  -877,  -877,
     662,  -877,   671,   675,    18,  -877,   -12,  -877,  2279,  1539,
    1541,   682,  1535,  -877,  -877,  -877,  -877,  -877,  1682,   211,
     -79,   684,  -877,  2820,   425,  1570,  -877,  2934,  -877,  1660,
    -877,  -877,  1460,  -877,  -877,  1484,  2302,  2323,  -877,  -877,
    -877,  -877,   688,  -877,   690,   693,  -877,  1710,  -877,  1735,
    1736,  1554,  1555,  -877,  -877,  1584,  1605,  1530,  -877,  1556,
    -877,  -877,   819,  -877,  -877,  1633,  -877,   679,  -877,  -877,
    1784,  1785,  1704,  1705,  1558,  1787,  -877,  -877,  1809,  1833,
    1787,  1607,  1608,  -877,  -877,  -877,   695,   704,  1610,   706,
    1611,  1679,  -877,  1867,  1881,  1787,  1787,  -877,  1732,  1909,
     248,  -877,  1706,   708,   710,   271,  1946,   713,  -877,  -877,
     -45,  1838,   306,   -22,  1787,  -877,  -877,  1879,  1755,  -877,
    1732,  -877,  -877,   228,  -877,  -877,  -877,   250,   344,   715,
     271,   271,  1829,  -877,  -877,  -877,  -877,  -877,  -877,   -23,
    -877,  -877,  -877,   366,  -877,  1816,  -877,  -877,  -877,  -877,
     271,   131,  1854,  1855,  1857,  1860,  1996,  1997,  -877,  -877
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -877,  1943,   -53,  -386,  -877,  -877,  -877,  -877,  1533,  1824,
    -877,  -141,  -278,  -877,  -877,  -876,  -877,  -877,  -544,  -877,
    1166,  -667,  -877,  -877,  -745,  -877,  -877,  1798,  -143,   -18,
    1792,  -247,  1567,  -877,  -877,   525,  -877,  -877,  -877,  1369,
    1553,   406,   152,  -877,  -877,  -877,  1978,  1721,  -877,  -877,
    -601,  -877,  -877,  -877,  -877,  -877,  -877,  -877,  -877,  -366,
    -877,  -358,   401,  2050,  1972,  -877,  1665,  -877,  1182,  -337,
    -877,  -877,  -877,  -877,  -877,   252,  -877,  -877,  -877,  1254,
    -877,  1026,  -877,  1424,  1456,  -850,  -828,  -496,  -595,  -723,
    -877,  -552,   420,   276,   333,  -444,  -237,  1750,  -608,  -877,
    -877,  -877,  2117
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -471
static const yytype_int16 yytable[] =
{
     142,   497,   731,   742,   874,   253,   736,   676,   254,   803,
     688,   689,   580,   581,   707,  -305,   425,   148,   586,   226,
     588,   595,  -307,  -306,   548,   968,   970,  1141,   876,    49,
     986,   148,    81,   629,   174,   629,   529,   679,   191,   192,
     413,   962,   438,   186,   467,   824,   825,   826,   827,   197,
     198,   199,   801,    93,   489,   201,   414,   247,  1147,    57,
     917,   256,   350,  1166,   227,   228,   229,   230,   231,   232,
     233,  1071,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   680,   226,    33,   225,   468,
      34,   227,   228,   229,   230,   231,   232,   233,   828,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   469,    47,   639,  1072,   324,   383,   630,  1167,
     768,   257,   845,    59,   247,   963,   964,    58,   249,   384,
     542,   255,   971,   855,   415,  1172,    94,   859,   814,   636,
      54,   638,   551,   344,   878,   655,    82,   345,   175,   972,
    1142,   351,   355,   357,   358,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,  1148,  1074,   332,    74,
     375,   376,   530,   187,   378,   379,   380,   381,   382,   556,
    1065,    50,   391,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   562,   563,   496,   142,   499,  -470,
      10,  1064,   566,   227,   228,   229,   230,   231,   232,   233,
     627,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    96,    97,    98,    99,   100,   101,
     325,   408,   549,   596,   597,   598,   599,  1031,   102,   103,
      44,  -305,   990,   149,   252,   532,   104,   105,  -307,  -306,
     946,   909,   947,   385,   541,   950,   106,   149,   250,   930,
     802,   955,   829,   830,   831,  1173,  1130,    75,   558,   544,
     832,   787,   839,   479,   841,   842,   485,   769,   107,   770,
     275,    76,    67,   108,   775,   776,   109,   110,   479,  1137,
      70,  1069,    77,   479,   508,   505,   506,   161,    60,   712,
     111,  1154,  1037,   512,   112,   559,    45,   677,    91,  1156,
     683,   178,   500,   488,   713,    78,   480,  1038,    62,    92,
    1131,   335,   812,   813,   162,   181,    63,   690,   973,   113,
    -470,   480,  1094,   276,   533,   534,   480,   536,   163,  1155,
     281,   835,   225,  1131,   931,   164,   277,  1020,  1027,    68,
    1022,   272,  1023,   560,   279,   165,   227,   228,   229,   230,
     231,   232,   233,   114,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   864,   179,   336,
     115,  1132,   347,   348,   503,   504,   932,   116,   117,  1070,
     118,  1157,  1133,   282,   658,   561,    69,   661,   662,   663,
     166,   481,   482,  1160,  1132,  1158,   283,   741,  1144,    48,
     194,   195,   338,    55,   865,  1133,   593,   273,   167,    66,
     280,  1159,   331,  1062,   509,   180,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   925,   640,
     141,   641,  1168,  1145,    71,   644,   645,    83,   646,   168,
     470,   187,   866,   881,    96,    97,    98,    99,   100,   101,
     336,   651,   652,   653,  1146,   654,    64,   885,   102,   103,
      83,   422,   755,   602,   660,  1161,   104,   606,   349,    84,
     349,   157,   158,   329,    72,   673,    85,   471,    73,  1162,
      86,   329,   678,   746,   867,   733,   159,    87,  1169,   882,
     747,   423,    84,   258,   352,  1163,   270,   880,   107,   146,
     603,    80,  1125,   108,   607,   257,   109,   110,    35,   271,
     147,  -202,    36,   550,   737,   987,   714,   715,   329,   722,
    1150,  1151,   734,   227,   228,   229,   230,   231,   232,   233,
     977,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    89,   988,   259,   182,   861,  1170,
    -202,   738,   759,    37,  -170,   761,    95,   886,   457,   260,
     145,   766,    10,    10,   462,   155,   464,   170,  1075,   353,
     772,   261,   418,   257,   778,   779,    96,    97,    98,    99,
     100,   101,   160,   114,  1109,   862,   789,   495,   498,   262,
     102,   103,   171,  1076,   632,   633,   169,    38,   104,  1123,
    1124,   263,   710,   711,   716,   717,   804,   172,   392,   177,
     393,   807,   173,    39,    40,   718,   717,   182,  1149,    96,
      97,    98,    99,   100,   101,   354,   176,    41,   728,   729,
     107,   752,   753,   102,   103,   108,   852,   729,   109,   110,
     184,   104,   857,   729,   889,   890,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   188,   612,
     141,   868,   189,   107,   387,   388,   613,   389,   108,   190,
     390,   109,   110,   242,   243,   244,   245,   246,    49,   446,
     447,   448,   449,   203,   450,   923,   924,   452,   453,   454,
     892,   941,   729,   893,   458,   459,   460,   949,   729,   463,
     904,   952,   729,   614,   196,   114,   615,   956,   753,   204,
     906,   908,   965,   966,   967,   966,   205,   914,   915,   616,
     969,   924,   991,   992,   993,   992,   617,   206,   394,   994,
     992,   996,   966,   207,   513,   927,   998,   999,   208,   933,
     239,   240,   241,   242,   243,   244,   245,   246,   114,   937,
     209,   618,   573,   574,   210,   577,   578,   579,  1000,  1001,
     940,   582,   583,   584,  1003,  1004,   587,   211,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
    1006,  1007,   395,   619,   240,   241,   242,   243,   244,   245,
     246,   212,   975,   976,   213,   979,   200,   981,  1018,   729,
     214,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,  1053,  1054,   141,  1096,  1097,    96,    97,
      98,    99,   100,   101,  1019,   729,  1021,   729,  1025,   729,
    1032,   999,   102,   103,  1033,   966,  1034,   966,  1036,  1001,
     104,   359,  1059,   729,   215,    96,    97,    98,    99,   100,
     101,  1060,   729,   216,  1028,  1061,   729,  1099,  1100,   102,
     103,   251,  1066,   924,  1073,   890,   217,   104,  1084,   729,
    1085,   999,   107,  1086,  1001,  1112,  1113,   108,   218,   766,
     109,   110,  1114,  1115,   219,  1043,  1117,  1113,  1135,  1113,
    1136,  1113,  1047,  1139,  1140,  1164,  1113,   552,   553,   107,
     912,   913,   671,   672,   108,  1056,  1057,   109,   110,   227,
     228,   229,   230,   231,   232,   233,   220,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     221,    96,    97,    98,    99,   100,   101,   222,   223,   224,
     268,   266,   274,   511,   269,   102,   103,   278,   284,   285,
     319,   320,   321,   104,   322,   323,   326,   114,   227,   228,
     229,   230,   231,   232,   233,   327,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   328,
     333,   334,   340,   371,   114,   107,    10,   372,   373,   374,
     108,   386,   407,   109,   110,   410,   412,   227,   228,   229,
     230,   231,   232,   233,   417,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   419,   427,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   426,   429,   141,   430,   431,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   432,
     114,   141,   227,   228,   229,   230,   231,   232,   233,   433,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   434,   435,   436,   437,   439,   440,   441,
      10,    96,    97,    98,    99,   100,   101,   442,   443,   444,
     451,   455,   461,   465,   466,   102,   103,   472,   473,   474,
     475,   477,   478,   104,   476,   491,   486,   493,   501,   246,
     514,   545,   507,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   107,   515,   141,   535,   538,
     108,   539,   540,   109,   110,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   546,   547,   524,
     543,   555,   554,   557,   760,   564,   567,    96,    97,    98,
      99,   100,   101,   568,   569,   570,   575,   592,   589,   590,
     591,   102,   103,   594,   605,   608,   609,   604,   610,   104,
     611,   624,    96,    97,    98,    99,   100,   101,   525,   628,
     634,   629,   648,   665,   625,   656,   102,   103,   664,   667,
     669,   674,   675,   684,   104,   685,   686,   708,   709,   687,
     114,   107,   719,   720,   721,   723,   108,   730,   732,   109,
     110,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   724,   725,   726,   727,   107,   735,   740,   739,
     765,   108,   743,   744,   109,   110,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   745,   750,   754,   756,
     762,   763,   764,   526,   748,   978,   749,   751,   793,   780,
     781,   786,   788,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   794,   114,   141,   227,   228,
     229,   230,   231,   232,   233,   796,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   800,
     790,   114,   227,   228,   229,   230,   231,   232,   233,   791,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   792,   797,   798,   799,   805,   808,   809,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   810,   815,   141,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   816,   817,   141,    96,
      97,    98,    99,   100,   101,   818,   819,   820,   821,   822,
     823,   833,   836,   102,   103,   834,   838,   840,   837,   843,
     846,   104,   847,   848,    96,    97,    98,    99,   100,   101,
     849,   850,   851,   853,   854,   856,   858,   860,   102,   103,
     869,   870,   871,   872,   887,   875,   104,   910,   884,   888,
     905,   916,   919,   107,   921,   926,   929,   928,   108,   939,
     934,   109,   110,   935,   936,   954,   938,   942,   943,   944,
     958,   959,   945,   948,   995,   997,  1002,  1010,   107,   951,
     953,   957,   980,   108,   960,  1017,   109,   110,   227,   228,
     229,   230,   231,   232,   233,   982,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   528,
     227,   228,   229,   230,   231,   232,   233,  1012,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,  1013,  1008,   783,  1009,  1035,  1014,  1024,   114,   227,
     228,   229,   230,   231,   232,   233,  1029,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
    1030,  1039,  1040,   114,   630,  1042,  1044,  1046,  1048,  1049,
    1050,  1051,  1058,  1079,  1052,   227,   228,   229,   230,   231,
     232,   233,   773,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,  1055,  1068,  1067,  1077,
    1080,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,  1087,  1081,   141,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,  1088,  1089,
     141,   227,   228,   229,   230,   231,   232,   233,  1092,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   227,   228,   229,   230,   231,   232,   233,  1093,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,  1090,  1091,  1095,  1098,  1101,  1102,   966,
    1105,   227,   228,   229,   230,   231,   232,   233,   774,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,  1107,   227,   228,   229,   230,   231,   232,   233,
     377,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,  1103,  1104,  1108,  1110,  1111,  1116,
    1118,  1119,   227,   228,   229,   230,   231,   232,   233,   510,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   227,   228,   229,   230,   231,   232,   233,
    1121,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,  1122,   516,   227,   228,   229,   230,
     231,   232,   233,  1126,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   227,   228,   229,
     230,   231,   232,   233,  1129,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   227,   228,
     229,   230,   231,   232,   233,  1134,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,  1138,
    1143,  1141,  1152,  1165,   227,   228,   229,   230,   231,   232,
     233,   517,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   227,   228,   229,   230,   231,
     232,   233,   518,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,  1171,  1176,  1174,  1175,
    1177,  1178,  1179,   156,   227,   228,   229,   230,   231,   232,
     233,   519,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   346,   227,   228,   229,   230,
     231,   232,   233,   520,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   650,   409,   421,
     974,   623,   806,   185,   490,   227,   228,   229,   230,   231,
     232,   233,   521,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   227,   228,   229,   230,
     231,   232,   233,   522,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   668,    90,   227,
     228,   229,   230,   231,   232,   233,   523,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     227,   228,   229,   230,   231,   232,   233,   527,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   227,   228,   229,   230,   231,   232,   233,   777,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   339,   637,  1041,   863,  1153,   227,   228,   229,
     230,   231,   232,   233,   782,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   227,   228,
     229,   230,   231,   232,   233,   784,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   879,
    1026,   585,   193,     0,     0,     0,     0,   227,   228,   229,
     230,   231,   232,   233,   785,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   227,
     228,   229,   230,   231,   232,   233,   844,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,   227,   228,
     229,   230,   231,   232,   233,   894,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   227,
     228,   229,   230,   231,   232,   233,   918,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       0,     0,   227,   228,   229,   230,   231,   232,   233,   961,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   227,   228,   229,   230,   231,   232,   233,
     983,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   227,   228,   229,   230,   231,   232,
     233,   984,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,     0,     0,     0,     0,
     227,   228,   229,   230,   231,   232,   233,   985,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,     0,     0,     0,     0,     0,     0,     0,  1005,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   895,   896,     0,     0,     0,   897,     0,   898,     0,
       0,     0,     0,     0,     0,     0,     0,  1011,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     899,   900,     0,   901,     0,     0,     0,     0,     0,  1015,
     227,   228,   229,   230,   231,   232,   233,     0,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   227,   228,   229,   230,   231,   232,   233,  1016,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     0,     0,     0,   691,     0,     0,     0,  1063,
       0,     0,     0,     0,   691,     0,     0,     0,     0,     0,
       0,   692,     0,     1,     0,   693,     0,     2,   694,     0,
     695,     0,  1082,   696,   693,     0,     0,   694,     0,   695,
       0,     0,   696,   697,     0,     0,   902,   903,     0,     3,
     698,   699,   697,  1083,     0,     0,     0,     0,     0,   698,
     699,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     200,     4,     5,   700,     0,     0,     0,     0,     0,     0,
       0,     0,   700,     0,   701,     0,     0,   227,   228,   229,
     230,   231,   232,   233,     0,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,     6,
     702,     0,     0,     0,     0,     0,     0,     0,     0,   702,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   703,
       0,     0,     0,   502,     0,   704,     0,     0,   703,     0,
       0,     0,     0,     7,   704,     0,     0,     0,     0,     8,
     286,   287,     0,   288,   643,   289,   290,     0,     0,     0,
       0,     0,     9,    10,     0,     0,     0,     0,   291,     0,
       0,     0,     0,     0,     0,     0,    11,   705,   647,    12,
       0,     0,     0,     0,    13,     0,   705,     0,   292,   293,
     294,   295,     0,     0,   296,   230,   231,   232,   233,   297,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,     0,   298,     0,     0,     0,     0,     0,
       0,   299,     0,     0,     0,     0,   300,     0,     0,     0,
       0,     0,     0,   301,     0,     0,   302,     0,   303,   304,
       0,     0,     0,     0,     0,   227,   228,   229,   230,   231,
     232,   233,   305,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,     0,     0,     0,
       0,   306,   307,     0,   308,   309,     0,     0,     0,     0,
     310,     0,   311,     0,     0,     0,     0,   312,   313,     0,
       0,     0,   314,     0,     0,     0,     0,   315,     0,   316,
       0,     0,     0,   317,   227,   228,   229,   230,   231,   232,
     233,     0,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,     0,     0,     0,   642,
     227,   228,   229,   230,   231,   232,   233,     0,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,     0,     0,   226,     0,     0,     0,     0,     0,   881,
     227,   228,   229,   230,   231,   232,   233,     0,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,     0,     0,     0,     0,     0,     0,     0,   771,     0,
       0,   247,     0,     0,     0,     0,     0,     0,   227,   228,
     229,   230,   231,   232,   233,   882,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
       0,   227,   228,   229,   230,   231,   232,   233,   537,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     0,     0,   227,   228,   229,   230,   231,   232,
     233,   659,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   228,   229,   230,   231,   232,
     233,     0,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   229,   230,   231,   232,   233,
       0,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,  -471,  -471,  -471,  -471,     0,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246
};

static const yytype_int16 yycheck[] =
{
      53,   338,   603,   611,   749,   148,   607,   551,   149,   676,
     562,   563,   456,   457,   566,     3,   263,     3,   462,     3,
     464,     3,     3,     3,    20,   875,    38,    72,   751,     8,
     906,     3,     3,   146,     3,   146,     6,   144,    91,    92,
      99,   869,   279,   101,    18,     4,     5,     6,     7,   102,
     103,   104,    20,     3,   332,   108,   115,    41,    80,     3,
     805,   171,   203,    86,    10,    11,    12,    13,    14,    15,
      16,   150,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   192,     3,   182,   141,    63,
     182,    10,    11,    12,    13,    14,    15,    16,    57,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    86,   182,   500,   194,     3,     6,   231,   142,
     231,   231,   723,     0,    41,   870,   871,    71,   101,    18,
     408,   149,   144,   734,   193,     4,    86,   738,   690,   497,
     182,   499,   420,   196,   752,   531,   117,   200,   117,   161,
     195,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   188,  1043,   186,     3,
     223,   224,   142,   231,   227,   228,   229,   230,   231,   426,
    1030,   160,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   431,   432,   337,   250,   339,    41,
     172,  1029,   439,    10,    11,    12,    13,    14,    15,    16,
     488,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     3,     4,     5,     6,     7,     8,
     117,   249,   228,   215,   216,   217,   218,   960,    17,    18,
     116,   229,   909,   229,   228,   386,    25,    26,   229,   229,
     851,   795,   853,   142,   395,   856,    35,   229,   231,    63,
     228,   862,   221,   222,   223,   134,    18,   101,    63,   412,
     229,   657,   716,   115,   718,   719,   329,   635,    57,   637,
       3,   115,     3,    62,   230,   231,    65,    66,   115,    18,
      38,    80,   126,   115,   101,   348,   349,    33,   227,   189,
      79,    73,     5,   356,    83,   100,   182,   554,     9,    59,
     557,     3,   231,   331,   204,   149,   158,    20,     3,    20,
      72,   171,   688,   689,    60,    73,     3,   564,   880,   108,
     172,   158,  1077,    56,   387,   388,   158,   390,    74,   111,
       3,   707,   395,    72,   148,    81,    69,   948,   956,    70,
     951,     3,   953,   148,     3,    91,    10,    11,    12,    13,
      14,    15,    16,   142,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    63,    70,   229,
     159,   133,    94,    95,    94,    95,   190,   166,   167,   178,
     169,   141,   144,    56,   535,   190,   117,   538,   539,   540,
     136,   228,   229,    59,   133,   155,    69,   229,   102,     8,
     228,   229,   171,    12,   100,   144,   469,    69,   154,     3,
      69,   171,   192,  1024,   231,   117,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   814,   502,
     229,   504,    86,   147,   176,   508,   509,    76,   511,   195,
     192,   231,   148,    39,     3,     4,     5,     6,     7,     8,
     229,   524,   525,   526,   168,   528,   117,   131,    17,    18,
      76,   127,   623,   192,   537,   141,    25,   192,   200,   108,
     200,    44,    45,   199,   116,   548,   115,   229,   182,   155,
     119,   199,   555,   116,   190,   192,    59,   126,   142,    85,
     123,   157,   108,    61,    53,   171,    56,   754,    57,   115,
     229,     3,  1117,    62,   229,   231,    65,    66,    71,    69,
     126,   192,    75,   231,   192,   201,    67,    68,   199,   592,
    1135,  1136,   229,    10,    11,    12,    13,    14,    15,    16,
     887,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     3,   231,   114,   228,   192,  1164,
     231,   229,   625,   116,   122,   628,   231,   231,   302,   127,
       3,   634,   172,   172,   308,     3,   310,   205,   163,   128,
     643,   139,   230,   231,   647,   648,     3,     4,     5,     6,
       7,     8,   155,   142,  1100,   229,   659,   197,   197,   157,
      17,    18,     3,   188,   230,   231,   228,   160,    25,  1115,
    1116,   169,   230,   231,   230,   231,   679,    41,    35,     3,
      37,   684,   144,   176,   177,   230,   231,   228,  1134,     3,
       4,     5,     6,     7,     8,   184,   205,   190,   230,   231,
      57,   230,   231,    17,    18,    62,   230,   231,    65,    66,
       3,    25,   230,   231,   230,   231,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   205,    56,
     229,   744,     3,    57,    13,    14,    63,    16,    62,     3,
      19,    65,    66,    26,    27,    28,    29,    30,     8,   289,
     290,   291,   292,   229,   294,   230,   231,   297,   298,   299,
     773,   230,   231,   776,   304,   305,   306,   230,   231,   309,
     783,   230,   231,   100,     9,   142,   103,   230,   231,   229,
     793,   794,   230,   231,   230,   231,   229,   800,   801,   116,
     230,   231,   230,   231,   230,   231,   123,   229,   165,   230,
     231,   230,   231,   229,   231,   818,   230,   231,   229,   822,
      23,    24,    25,    26,    27,    28,    29,    30,   142,   832,
     229,   148,   449,   450,   229,   452,   453,   454,   230,   231,
     843,   458,   459,   460,   230,   231,   463,   229,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     230,   231,   229,   190,    24,    25,    26,    27,    28,    29,
      30,   229,   885,   886,   229,   888,   200,   890,   230,   231,
     229,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,    47,    48,   229,    47,    48,     3,     4,
       5,     6,     7,     8,   230,   231,   230,   231,   230,   231,
     230,   231,    17,    18,   230,   231,   230,   231,   230,   231,
      25,    26,   230,   231,   229,     3,     4,     5,     6,     7,
       8,   230,   231,   229,   957,   230,   231,   228,   229,    17,
      18,   231,   230,   231,   230,   231,   229,    25,   230,   231,
     230,   231,    57,   230,   231,   230,   231,    62,   229,   982,
      65,    66,   228,   229,   229,   988,   230,   231,   230,   231,
     230,   231,   995,   230,   231,   230,   231,   422,   423,    57,
     798,   799,   546,   547,    62,  1008,  1009,    65,    66,    10,
      11,    12,    13,    14,    15,    16,   229,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     229,     3,     4,     5,     6,     7,     8,   229,   229,   229,
      43,    41,    56,   101,    43,    17,    18,    56,    56,     3,
       3,   144,   205,    25,     3,   144,   205,   142,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    26,
       3,     3,     3,   230,   142,    57,   172,   230,   230,   230,
      62,   229,     3,    65,    66,     3,     3,    10,    11,    12,
      13,    14,    15,    16,   230,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,   143,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   122,     3,   229,     3,     3,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,     3,
     142,   229,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     3,     3,     3,     3,     3,   175,     3,
     172,     3,     4,     5,     6,     7,     8,     3,     3,   229,
     229,    52,   229,   229,   229,    17,    18,     3,     3,   144,
       3,   205,     3,    25,   144,     3,   145,     3,   230,    30,
     231,   123,   230,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,    57,   230,   229,   229,   229,
      62,   229,   229,    65,    66,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   123,   123,   231,
     231,   144,   122,   122,    86,     3,     3,     3,     4,     5,
       6,     7,     8,   175,   175,     5,     4,   229,     5,     5,
     142,    17,    18,   194,     3,     3,     3,   144,   144,    25,
       3,    51,     3,     4,     5,     6,     7,     8,   231,    20,
     229,   146,   121,   105,   129,   230,    17,    18,   230,     3,
     104,     3,     3,   229,    25,   123,   123,     3,     3,   229,
     142,    57,   230,   230,    63,   229,    62,   194,     3,    65,
      66,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   229,   229,   229,   229,    57,   194,     3,   144,
      86,    62,     3,   229,    65,    66,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   123,   123,     3,     3,
     123,     3,     3,   231,   229,    86,   229,   229,    51,   230,
     230,   230,   230,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   110,   142,   229,    10,    11,
      12,    13,    14,    15,    16,   122,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    20,
     230,   142,    10,    11,    12,    13,    14,    15,    16,   230,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   230,   229,   229,   229,   229,   229,   229,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,     3,   142,   229,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,     3,   229,   229,     3,
       4,     5,     6,     7,     8,   229,   229,    42,     3,   229,
       4,   123,     5,    17,    18,   123,     4,     4,   171,   229,
       3,    25,     3,     3,     3,     4,     5,     6,     7,     8,
       3,     3,   229,   229,   194,   229,   194,     3,    17,    18,
     229,   229,   229,     3,   188,   229,    25,     3,   231,    20,
     230,     3,     3,    57,     3,     5,    41,     5,    62,     4,
     229,    65,    66,   229,   229,   194,   230,   230,   230,   230,
     123,   123,   231,   229,    20,    18,     3,   123,    57,   229,
     229,   229,    86,    62,   229,     3,    65,    66,    10,    11,
      12,    13,    14,    15,    16,   229,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   231,
      10,    11,    12,    13,    14,    15,    16,   230,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   230,   229,   231,   229,     3,   230,   229,   142,    10,
      11,    12,    13,    14,    15,    16,   229,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     229,     3,    51,   142,   231,   156,   104,     3,   195,   153,
       3,     3,   230,     3,     5,    10,    11,    12,    13,    14,
      15,    16,   104,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     5,     5,   153,   119,
     230,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,     3,   230,   229,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,     3,     3,
     229,    10,    11,    12,    13,    14,    15,    16,   164,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   164,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   229,   229,   229,   153,     3,     3,   231,
       3,    10,    11,    12,    13,    14,    15,    16,   230,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     3,    10,    11,    12,    13,    14,    15,    16,
     230,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   130,   130,     3,   230,   230,   229,
     229,   162,    10,    11,    12,    13,    14,    15,    16,   230,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     3,   230,    10,    11,    12,    13,
      14,    15,    16,   161,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,     5,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   229,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
     112,    72,   197,   124,    10,    11,    12,    13,    14,    15,
      16,   230,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   230,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   180,   140,   144,   144,
     140,     5,     5,    60,    10,    11,    12,    13,    14,    15,
      16,   230,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   201,    10,    11,    12,    13,
      14,    15,    16,   230,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   514,   250,   257,
     884,   484,   683,    75,   333,    10,    11,    12,    13,    14,
      15,    16,   230,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   230,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   544,    48,    10,
      11,    12,    13,    14,    15,    16,   230,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   230,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   230,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   190,   498,   982,   741,  1140,    10,    11,    12,
      13,    14,    15,    16,   230,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   230,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   753,
     956,   461,    95,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   230,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    10,
      11,    12,    13,    14,    15,    16,   230,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   230,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   230,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   230,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     230,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   230,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   230,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    82,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,    -1,   230,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   230,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    18,    -1,    -1,    -1,   230,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    32,    -1,    38,    -1,    36,    41,    -1,
      43,    -1,   230,    46,    38,    -1,    -1,    41,    -1,    43,
      -1,    -1,    46,    56,    -1,    -1,   202,   203,    -1,    58,
      63,    64,    56,   230,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     200,    80,    81,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    97,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   118,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,   183,    -1,   148,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   152,   148,    -1,    -1,    -1,    -1,   158,
      49,    50,    -1,    52,   183,    54,    55,    -1,    -1,    -1,
      -1,    -1,   171,   172,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   185,   190,   101,   188,
      -1,    -1,    -1,    -1,   193,    -1,   190,    -1,    87,    88,
      89,    90,    -1,    -1,    93,    13,    14,    15,    16,    98,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,   113,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,   135,    -1,   137,   138,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   151,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,   170,   171,    -1,   173,   174,    -1,    -1,    -1,    -1,
     179,    -1,   181,    -1,    -1,    -1,    -1,   186,   187,    -1,
      -1,    -1,   191,    -1,    -1,    -1,    -1,   196,    -1,   198,
      -1,    -1,    -1,   202,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    94,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    39,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    85,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    40,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    40,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    80,    81,   118,   152,   158,   171,
     172,   185,   188,   193,   233,   242,   243,   276,   280,   281,
     284,   285,   288,   289,   290,   292,   302,   303,   306,   308,
     309,   310,   332,   182,   182,    71,    75,   116,   160,   176,
     177,   190,   314,   277,   116,   182,   294,   182,   294,     8,
     160,   333,   334,   257,   182,   294,   304,     3,    71,     0,
     227,   287,     3,     3,   117,   307,     3,     3,    70,   117,
     307,   176,   116,   182,     3,   101,   115,   126,   149,   278,
       3,     3,   117,    76,   108,   115,   119,   126,   295,     3,
     295,     9,    20,     3,    86,   231,     3,     4,     5,     6,
       7,     8,    17,    18,    25,    26,    35,    57,    62,    65,
      66,    79,    83,   108,   142,   159,   166,   167,   169,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   229,   234,   258,   259,     3,   115,   126,     3,   229,
     261,   262,   263,   265,   275,     3,   233,    44,    45,    59,
     155,    33,    60,    74,    81,    91,   136,   154,   195,   228,
     205,     3,    41,   144,     3,   117,   205,     3,     3,    70,
     117,   307,   228,   279,     3,   278,   101,   231,   205,     3,
       3,   234,   234,   334,   228,   229,     9,   234,   234,   234,
     200,   234,   241,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   234,     3,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    41,   260,   101,
     231,   231,   228,   260,   243,   261,   171,   231,    61,   114,
     127,   139,   157,   169,   266,   268,    41,   264,    43,    43,
      56,    69,     3,    69,    56,     3,    56,    69,    56,     3,
      69,     3,    56,    69,    56,     3,    49,    50,    52,    54,
      55,    67,    87,    88,    89,    90,    93,    98,   113,   120,
     125,   132,   135,   137,   138,   151,   170,   171,   173,   174,
     179,   181,   186,   187,   191,   196,   198,   202,   328,     3,
     144,   205,     3,   144,     3,   117,   205,     3,    26,   199,
     244,   192,   261,     3,     3,   171,   229,   296,   171,   296,
       3,   234,   235,   236,   234,   234,   241,    94,    95,   200,
     243,   234,    53,   128,   184,   234,   239,   234,   234,    26,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   230,   230,   230,   230,   234,   234,   230,   234,   234,
     234,   234,   234,     6,    18,   142,   229,    13,    14,    16,
      19,   234,    35,    37,   165,   229,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,     3,   261,   259,
       3,   286,     3,    99,   115,   193,   272,   230,   230,     3,
     305,   262,   127,   157,   269,   263,   122,   143,   267,     3,
       3,     3,     3,     3,     3,     3,     3,     3,   328,     3,
     175,     3,     3,     3,   229,   324,   324,   324,   324,   324,
     324,   229,   324,   324,   324,    52,   325,   325,   324,   324,
     324,   229,   325,   324,   325,   229,   229,    18,    63,    86,
     192,   229,     3,     3,   144,     3,   144,   205,     3,   115,
     158,   228,   229,   330,   331,   234,   145,   250,   261,   244,
     279,     3,   301,     3,   297,   197,   243,   301,   197,   243,
     231,   230,   183,    94,    95,   234,   234,   230,   101,   231,
     230,   101,   234,   231,   231,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   231,   231,   231,   230,   231,     6,
     142,   237,   243,   234,   234,   229,   234,    40,   229,   229,
     229,   243,   244,   231,   260,   123,   123,   123,    20,   228,
     231,   244,   267,   267,   122,   144,   263,   122,    63,   100,
     148,   190,   328,   328,     3,   323,   328,     3,   175,   175,
       5,   326,   327,   326,   326,     4,   329,   326,   326,   326,
     327,   327,   326,   326,   326,   329,   327,   326,   327,     5,
       5,   142,   229,   234,   194,     3,   215,   216,   217,   218,
     282,   283,   192,   229,   144,     3,   192,   229,     3,     3,
     144,     3,    56,    63,   100,   103,   116,   123,   148,   190,
     315,   316,   322,   264,    51,   129,   253,   244,    20,   146,
     231,   293,   230,   231,   229,   298,   293,   298,   293,   235,
     234,   234,    94,   183,   234,   234,   234,   101,   121,   240,
     240,   234,   234,   234,   234,   235,   230,   238,   243,    40,
     234,   243,   243,   243,   230,   105,   245,     3,   272,   104,
     273,   273,   273,   234,     3,     3,   250,   263,   234,   144,
     192,   270,   271,   263,   229,   123,   123,   229,   323,   323,
     328,    18,    34,    38,    41,    43,    46,    56,    63,    64,
      86,    97,   123,   142,   148,   190,   291,   323,     3,     3,
     230,   231,   189,   204,    67,    68,   230,   231,   230,   230,
     230,    63,   234,   229,   229,   229,   229,   229,   230,   231,
     194,   282,     3,   192,   229,   194,   282,   192,   229,   144,
       3,   229,   330,     3,   229,   123,   116,   123,   229,   229,
     123,   229,   230,   231,     3,   243,     3,   251,   252,   234,
      86,   234,   123,     3,     3,    86,   234,   300,   231,   293,
     293,    94,   234,   104,   230,   230,   231,   230,   234,   234,
     230,   230,   230,   231,   230,   230,   230,   235,   230,   234,
     230,   230,   230,    51,   110,   249,   122,   229,   229,   229,
      20,    20,   228,   253,   234,   229,   271,   234,   229,   229,
       3,   321,   291,   291,   323,   142,     3,   229,   229,   229,
      42,     3,   229,     4,     4,     5,     6,     7,    57,   221,
     222,   223,   229,   123,   123,   291,     5,   171,     4,   327,
       4,   327,   327,   229,   230,   282,     3,     3,     3,     3,
       3,   229,   230,   229,   194,   282,   229,   230,   194,   282,
       3,   192,   229,   315,    63,   100,   148,   190,   234,   229,
     229,   229,     3,   256,   256,   229,   321,   311,   330,   316,
     328,    39,    85,   247,   231,   131,   231,   188,    20,   230,
     231,   299,   234,   234,   230,    77,    78,    82,    84,   106,
     107,   109,   202,   203,   234,   230,   234,   246,   234,   250,
       3,   274,   274,   274,   234,   234,     3,   256,   230,     3,
     318,     3,   317,   230,   231,   291,     5,   234,     5,    41,
      63,   148,   190,   234,   229,   229,   229,   234,   230,     4,
     234,   230,   230,   230,   230,   231,   282,   282,   229,   230,
     282,   229,   230,   229,   194,   282,   230,   229,   123,   123,
     229,   230,   318,   256,   256,   230,   231,   230,   317,   230,
      38,   144,   161,   323,   252,   234,   234,   301,    86,   234,
      86,   234,   229,   230,   230,   230,   247,   201,   231,   248,
     253,   230,   231,   230,   230,    20,   230,    18,   230,   231,
     230,   231,     3,   230,   231,   230,   230,   231,   229,   229,
     123,   230,   230,   230,   230,   230,   230,     3,   230,   230,
     282,   230,   282,   282,   229,   230,   311,   330,   234,   229,
     229,   321,   230,   230,   230,     3,   230,     5,    20,     3,
      51,   300,   156,   234,   104,   254,     3,   234,   195,   153,
       3,     3,     5,    47,    48,     5,   234,   234,   230,   230,
     230,   230,   282,   230,   318,   317,   230,   153,     5,    80,
     178,   150,   194,   230,   247,   163,   188,   119,   255,     3,
     230,   230,   230,   230,   230,   230,   230,     3,     3,     3,
     229,   229,   164,   164,   256,   229,    47,    48,   153,   228,
     229,     3,     3,   130,   130,     3,   319,     3,     3,   319,
     230,   230,   230,   231,   228,   229,   229,   230,   229,   162,
     320,     3,     3,   319,   319,   320,   161,   312,   313,     5,
      18,    72,   133,   144,   229,   230,   230,    18,     3,   230,
     231,    72,   195,   112,   102,   147,   168,    80,   188,   319,
     320,   320,   197,   313,    73,   111,    59,   141,   155,   171,
      59,   141,   155,   171,   230,   124,    86,   142,    86,   142,
     320,   180,     4,   134,   144,   144,   140,   140,     5,     5
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
#line 335 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 341 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 342 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 344 "parser/evoparser.y"
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
#line 362 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 370 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 378 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 384 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 391 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 392 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 393 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 394 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 395 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 396 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 397 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 398 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 399 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 400 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 401 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 402 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 403 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 404 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 405 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 406 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 407 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 409 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 414 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 415 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 416 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 417 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 420 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 421 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 422 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 423 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 424 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 427 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 428 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 431 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 432 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 43:
#line 435 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 439 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 46:
#line 439 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 47:
#line 440 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 48:
#line 440 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 49:
#line 441 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 442 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 443 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 447 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 451 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 452 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 453 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 454 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 455 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 456 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 458 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 459 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 460 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 461 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 462 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 463 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 464 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 465 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 466 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 467 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 468 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 469 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 470 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 471 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 478 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 485 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 492 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 496 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 77:
#line 500 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 78:
#line 506 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 79:
#line 507 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 80:
#line 508 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 81:
#line 511 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 82:
#line 512 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 83:
#line 515 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 84:
#line 516 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 85:
#line 517 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 86:
#line 518 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 87:
#line 519 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 88:
#line 520 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 89:
#line 521 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 90:
#line 522 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 91:
#line 523 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 92:
#line 527 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 93:
#line 529 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 94:
#line 531 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 95:
#line 533 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 96:
#line 537 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 97:
#line 545 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 98:
#line 555 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 99:
#line 556 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 100:
#line 559 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 101:
#line 560 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 102:
#line 564 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 572 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 104:
#line 580 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 105:
#line 591 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 106:
#line 600 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 107:
#line 605 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 109:
#line 616 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 111:
#line 618 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 112:
#line 621 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 113:
#line 628 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 114:
#line 636 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 115:
#line 637 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 638 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 117:
#line 641 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 118:
#line 642 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 120:
#line 646 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 125:
#line 658 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 126:
#line 665 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 127:
#line 666 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 128:
#line 667 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 129:
#line 668 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 130:
#line 671 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 131:
#line 672 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 132:
#line 673 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 133:
#line 674 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 134:
#line 675 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 136:
#line 679 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 137:
#line 682 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 138:
#line 683 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 139:
#line 686 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 140:
#line 687 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 141:
#line 688 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 142:
#line 689 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 143:
#line 690 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 144:
#line 691 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 145:
#line 692 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 146:
#line 693 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 147:
#line 694 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 148:
#line 697 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 149:
#line 698 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 150:
#line 700 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 151:
#line 708 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 152:
#line 713 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 153:
#line 714 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 154:
#line 715 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 155:
#line 718 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 156:
#line 719 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 159:
#line 728 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 160:
#line 734 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 161:
#line 735 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 162:
#line 736 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 165:
#line 745 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 166:
#line 747 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 167:
#line 749 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 168:
#line 751 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 169:
#line 753 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 170:
#line 756 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 171:
#line 757 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 172:
#line 758 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 173:
#line 761 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 174:
#line 762 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 175:
#line 765 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 176:
#line 766 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 177:
#line 769 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 178:
#line 770 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 179:
#line 771 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 182:
#line 778 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 183:
#line 779 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 184:
#line 784 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 185:
#line 786 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 186:
#line 788 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 188:
#line 792 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 189:
#line 793 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 190:
#line 796 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 191:
#line 797 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 192:
#line 800 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 193:
#line 805 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 194:
#line 815 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 195:
#line 822 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 196:
#line 823 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 197:
#line 824 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 198:
#line 825 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 199:
#line 830 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 200:
#line 834 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 201:
#line 836 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 204:
#line 842 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 205:
#line 847 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 206:
#line 854 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 207:
#line 861 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 208:
#line 871 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 209:
#line 878 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 210:
#line 885 "parser/evoparser.y"
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

  case 211:
#line 895 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 212:
#line 903 "parser/evoparser.y"
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

  case 213:
#line 913 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 214:
#line 921 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 215:
#line 930 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 216:
#line 939 "parser/evoparser.y"
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

  case 217:
#line 949 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 218:
#line 957 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 219:
#line 966 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 220:
#line 975 "parser/evoparser.y"
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

  case 221:
#line 985 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 222:
#line 994 "parser/evoparser.y"
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

  case 223:
#line 1006 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 224:
#line 1011 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 225:
#line 1016 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 226:
#line 1022 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 227:
#line 1029 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 228:
#line 1036 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 229:
#line 1043 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 230:
#line 1053 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 231:
#line 1060 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 232:
#line 1069 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 233:
#line 1076 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 234:
#line 1082 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 235:
#line 1090 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 236:
#line 1096 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 238:
#line 1104 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 239:
#line 1105 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 240:
#line 1106 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 241:
#line 1107 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 242:
#line 1112 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 243:
#line 1119 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 244:
#line 1128 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 245:
#line 1135 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 246:
#line 1141 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 247:
#line 1151 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 248:
#line 1155 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 249:
#line 1161 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 250:
#line 1167 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 251:
#line 1174 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 252:
#line 1180 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 253:
#line 1187 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 254:
#line 1193 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 255:
#line 1199 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 256:
#line 1205 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 257:
#line 1211 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 258:
#line 1217 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 259:
#line 1223 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 260:
#line 1229 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 261:
#line 1235 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 262:
#line 1241 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 263:
#line 1247 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 264:
#line 1253 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 265:
#line 1259 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 266:
#line 1265 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 267:
#line 1271 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 268:
#line 1278 "parser/evoparser.y"
    { ;}
    break;

  case 269:
#line 1279 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 270:
#line 1280 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 271:
#line 1284 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 272:
#line 1292 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 273:
#line 1298 "parser/evoparser.y"
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

  case 275:
#line 1311 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 276:
#line 1314 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 277:
#line 1315 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 278:
#line 1316 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 279:
#line 1317 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 280:
#line 1318 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 284:
#line 1325 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 285:
#line 1329 "parser/evoparser.y"
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

  case 286:
#line 1339 "parser/evoparser.y"
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

  case 287:
#line 1351 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 288:
#line 1352 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 289:
#line 1352 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 290:
#line 1355 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 291:
#line 1356 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 292:
#line 1357 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 293:
#line 1358 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 294:
#line 1362 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 295:
#line 1365 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 296:
#line 1366 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 297:
#line 1367 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 298:
#line 1368 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 299:
#line 1374 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 300:
#line 1380 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 301:
#line 1385 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 302:
#line 1390 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 303:
#line 1395 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 304:
#line 1404 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 305:
#line 1411 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 306:
#line 1412 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 307:
#line 1413 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 308:
#line 1418 "parser/evoparser.y"
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

  case 309:
#line 1429 "parser/evoparser.y"
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

  case 310:
#line 1441 "parser/evoparser.y"
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

  case 311:
#line 1452 "parser/evoparser.y"
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

  case 312:
#line 1466 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 313:
#line 1470 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 314:
#line 1471 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 315:
#line 1474 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 316:
#line 1475 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 317:
#line 1479 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 318:
#line 1484 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 319:
#line 1486 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 320:
#line 1488 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 321:
#line 1490 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 322:
#line 1492 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 323:
#line 1496 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 324:
#line 1500 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 325:
#line 1501 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 326:
#line 1506 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 327:
#line 1516 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 328:
#line 1525 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 330:
#line 1529 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 331:
#line 1530 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 332:
#line 1531 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 333:
#line 1532 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 334:
#line 1534 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 335:
#line 1536 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 338:
#line 1544 "parser/evoparser.y"
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

  case 339:
#line 1559 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 340:
#line 1567 "parser/evoparser.y"
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

  case 341:
#line 1581 "parser/evoparser.y"
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

  case 342:
#line 1595 "parser/evoparser.y"
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

  case 343:
#line 1609 "parser/evoparser.y"
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

  case 344:
#line 1621 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 345:
#line 1622 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 346:
#line 1623 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 347:
#line 1626 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 348:
#line 1627 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 349:
#line 1630 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 350:
#line 1631 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 351:
#line 1632 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 352:
#line 1633 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 353:
#line 1634 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 354:
#line 1635 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 355:
#line 1636 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 356:
#line 1637 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 357:
#line 1639 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 358:
#line 1641 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 359:
#line 1643 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 360:
#line 1645 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 361:
#line 1647 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 362:
#line 1649 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 363:
#line 1652 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 364:
#line 1653 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 365:
#line 1656 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 366:
#line 1657 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 367:
#line 1660 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 368:
#line 1661 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 370:
#line 1665 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 371:
#line 1666 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 372:
#line 1667 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 373:
#line 1668 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 374:
#line 1669 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 375:
#line 1670 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 376:
#line 1671 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 377:
#line 1672 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 378:
#line 1673 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 379:
#line 1674 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 380:
#line 1675 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 381:
#line 1676 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 382:
#line 1677 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 383:
#line 1678 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 384:
#line 1679 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 385:
#line 1680 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 386:
#line 1681 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 387:
#line 1684 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 388:
#line 1685 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 389:
#line 1688 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 390:
#line 1690 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 391:
#line 1698 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 392:
#line 1699 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 394:
#line 1701 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 395:
#line 1702 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 396:
#line 1703 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 397:
#line 1704 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 398:
#line 1705 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 399:
#line 1706 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 400:
#line 1707 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 401:
#line 1708 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 402:
#line 1709 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 403:
#line 1716 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 404:
#line 1717 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 405:
#line 1718 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 406:
#line 1719 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 407:
#line 1720 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 408:
#line 1721 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 409:
#line 1722 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 410:
#line 1723 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 411:
#line 1724 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 412:
#line 1725 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 413:
#line 1726 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 414:
#line 1727 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 415:
#line 1728 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 416:
#line 1729 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 417:
#line 1730 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 418:
#line 1731 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 419:
#line 1732 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 420:
#line 1733 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 421:
#line 1734 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 422:
#line 1735 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 423:
#line 1736 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 424:
#line 1739 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 425:
#line 1740 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 426:
#line 1741 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 427:
#line 1744 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 428:
#line 1745 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 429:
#line 1748 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 430:
#line 1749 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 431:
#line 1750 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 433:
#line 1754 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 434:
#line 1755 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 435:
#line 1759 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 436:
#line 1760 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 437:
#line 1761 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 438:
#line 1762 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 439:
#line 1763 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 440:
#line 1764 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 441:
#line 1765 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 442:
#line 1766 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 443:
#line 1767 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 444:
#line 1768 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 445:
#line 1769 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 446:
#line 1770 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 447:
#line 1771 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 448:
#line 1772 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 449:
#line 1773 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 450:
#line 1774 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 451:
#line 1775 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 452:
#line 1776 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 453:
#line 1777 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 454:
#line 1778 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 455:
#line 1779 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 456:
#line 1780 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 457:
#line 1781 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 458:
#line 1782 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 459:
#line 1783 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 460:
#line 1784 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 461:
#line 1785 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 462:
#line 1786 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 463:
#line 1787 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 464:
#line 1788 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 465:
#line 1789 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 466:
#line 1790 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 467:
#line 1793 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 468:
#line 1794 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 469:
#line 1798 "parser/evoparser.y"
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

  case 470:
#line 1810 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 471:
#line 1811 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 472:
#line 1812 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 473:
#line 1816 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 474:
#line 1819 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 475:
#line 1820 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 479:
#line 1824 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 480:
#line 1825 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 6064 "parser/evoparser.tab.c"
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


#line 1828 "parser/evoparser.y"

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
