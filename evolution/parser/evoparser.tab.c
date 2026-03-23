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
     ALL = 280,
     ANALYZE = 281,
     ANY = 282,
     AUTO_INCREMENT = 283,
     ASC = 284,
     AND = 285,
     AS = 286,
     ALWAYS = 287,
     IDENTITY = 288,
     GENERATED = 289,
     STORED = 290,
     VIRTUAL = 291,
     BLOB = 292,
     BOOLEAN = 293,
     BY = 294,
     BINARY = 295,
     BOTH = 296,
     BIGINT = 297,
     BIT = 298,
     CONSTRAINT = 299,
     CURRENT_TIMESTAMP = 300,
     CREATE = 301,
     CASCADE = 302,
     CROSS = 303,
     CASE = 304,
     CHECK = 305,
     COMMENT = 306,
     CURRENT_DATE = 307,
     CURRENT_TIME = 308,
     CHAR = 309,
     COLLATE = 310,
     COLUMN = 311,
     CONCURRENTLY = 312,
     DATABASE = 313,
     DEFERRABLE = 314,
     DEFERRED = 315,
     DISABLE = 316,
     DOMAIN = 317,
     DELAYED = 318,
     DAY_HOUR = 319,
     DAY_MICROSECOND = 320,
     DISTINCT = 321,
     DELETE = 322,
     DROP = 323,
     DAY_MINUTE = 324,
     DISTINCTROW = 325,
     DAY_SECOND = 326,
     DESC = 327,
     DEFAULT = 328,
     DOUBLE = 329,
     DATETIME = 330,
     DECIMAL = 331,
     DATE = 332,
     ENABLE = 333,
     ESCAPED = 334,
     ENUM = 335,
     END = 336,
     ELSE = 337,
     EXPLAIN = 338,
     FLOAT = 339,
     FORCE = 340,
     FOREIGN = 341,
     FROM = 342,
     FULL = 343,
     FULLTEXT = 344,
     FOR = 345,
     GROUP = 346,
     HOUR_MINUTE = 347,
     HOUR_MICROSECOND = 348,
     HIGH_PRIORITY = 349,
     HOUR_SECOND = 350,
     HAVING = 351,
     IMMEDIATE = 352,
     INITIALLY = 353,
     INTEGER = 354,
     INNER = 355,
     IGNORE = 356,
     INDEX = 357,
     IF = 358,
     INSERT = 359,
     INTO = 360,
     INT = 361,
     INTERVAL = 362,
     JOIN = 363,
     KEY = 364,
     LONGTEXT = 365,
     LOW_PRIORITY = 366,
     LEFT = 367,
     LEADING = 368,
     LIMIT = 369,
     OFFSET = 370,
     LONGBLOB = 371,
     MATCH = 372,
     MEDIUMTEXT = 373,
     MEDIUMBLOB = 374,
     MEDIUMINT = 375,
     NATURAL = 376,
     NO_ACTION = 377,
     NULLX = 378,
     OUTER = 379,
     ON = 380,
     ORDER = 381,
     ONDUPLICATE = 382,
     PARTIAL = 383,
     PRIMARY = 384,
     QUICK = 385,
     REAL = 386,
     RECLAIM = 387,
     REFERENCES = 388,
     RENAME = 389,
     RESTRICT = 390,
     ROLLUP = 391,
     RIGHT = 392,
     REPLACE = 393,
     SQL_SMALL_RESULT = 394,
     SCHEMA = 395,
     SOME = 396,
     SQL_CALC_FOUND_ROWS = 397,
     SQL_BIG_RESULT = 398,
     SIMPLE = 399,
     STRAIGHT_JOIN = 400,
     SMALLINT = 401,
     SET = 402,
     SELECT = 403,
     TINYTEXT = 404,
     TINYINT = 405,
     TO = 406,
     TEMPORARY = 407,
     GLOBAL = 408,
     PRESERVE = 409,
     TEXT = 410,
     TIMESTAMP = 411,
     TABLE = 412,
     THEN = 413,
     TRAILING = 414,
     TRUNCATE = 415,
     TINYBLOB = 416,
     TIME = 417,
     UPDATE = 418,
     UNSIGNED = 419,
     UNIQUE = 420,
     UUID = 421,
     USING = 422,
     USE = 423,
     HASH = 424,
     VALIDATE = 425,
     VARCHAR = 426,
     VALUES = 427,
     VARBINARY = 428,
     WHERE = 429,
     WHEN = 430,
     WITH = 431,
     YEAR = 432,
     YEAR_MONTH = 433,
     ZEROFILL = 434,
     EXISTS = 435,
     FSUBSTRING = 436,
     FTRIM = 437,
     FDATE_ADD = 438,
     FDATE_SUB = 439,
     FCOUNT = 440,
     FSUM = 441,
     FAVG = 442,
     FMIN = 443,
     FMAX = 444,
     FUPPER = 445,
     FLOWER = 446,
     FLENGTH = 447,
     FCONCAT = 448,
     FREPLACE = 449,
     FCOALESCE = 450,
     FGEN_RANDOM_UUID = 451,
     FGEN_RANDOM_UUID_V7 = 452,
     FSNOWFLAKE_ID = 453,
     FLAST_INSERT_ID = 454
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
#define ALL 280
#define ANALYZE 281
#define ANY 282
#define AUTO_INCREMENT 283
#define ASC 284
#define AND 285
#define AS 286
#define ALWAYS 287
#define IDENTITY 288
#define GENERATED 289
#define STORED 290
#define VIRTUAL 291
#define BLOB 292
#define BOOLEAN 293
#define BY 294
#define BINARY 295
#define BOTH 296
#define BIGINT 297
#define BIT 298
#define CONSTRAINT 299
#define CURRENT_TIMESTAMP 300
#define CREATE 301
#define CASCADE 302
#define CROSS 303
#define CASE 304
#define CHECK 305
#define COMMENT 306
#define CURRENT_DATE 307
#define CURRENT_TIME 308
#define CHAR 309
#define COLLATE 310
#define COLUMN 311
#define CONCURRENTLY 312
#define DATABASE 313
#define DEFERRABLE 314
#define DEFERRED 315
#define DISABLE 316
#define DOMAIN 317
#define DELAYED 318
#define DAY_HOUR 319
#define DAY_MICROSECOND 320
#define DISTINCT 321
#define DELETE 322
#define DROP 323
#define DAY_MINUTE 324
#define DISTINCTROW 325
#define DAY_SECOND 326
#define DESC 327
#define DEFAULT 328
#define DOUBLE 329
#define DATETIME 330
#define DECIMAL 331
#define DATE 332
#define ENABLE 333
#define ESCAPED 334
#define ENUM 335
#define END 336
#define ELSE 337
#define EXPLAIN 338
#define FLOAT 339
#define FORCE 340
#define FOREIGN 341
#define FROM 342
#define FULL 343
#define FULLTEXT 344
#define FOR 345
#define GROUP 346
#define HOUR_MINUTE 347
#define HOUR_MICROSECOND 348
#define HIGH_PRIORITY 349
#define HOUR_SECOND 350
#define HAVING 351
#define IMMEDIATE 352
#define INITIALLY 353
#define INTEGER 354
#define INNER 355
#define IGNORE 356
#define INDEX 357
#define IF 358
#define INSERT 359
#define INTO 360
#define INT 361
#define INTERVAL 362
#define JOIN 363
#define KEY 364
#define LONGTEXT 365
#define LOW_PRIORITY 366
#define LEFT 367
#define LEADING 368
#define LIMIT 369
#define OFFSET 370
#define LONGBLOB 371
#define MATCH 372
#define MEDIUMTEXT 373
#define MEDIUMBLOB 374
#define MEDIUMINT 375
#define NATURAL 376
#define NO_ACTION 377
#define NULLX 378
#define OUTER 379
#define ON 380
#define ORDER 381
#define ONDUPLICATE 382
#define PARTIAL 383
#define PRIMARY 384
#define QUICK 385
#define REAL 386
#define RECLAIM 387
#define REFERENCES 388
#define RENAME 389
#define RESTRICT 390
#define ROLLUP 391
#define RIGHT 392
#define REPLACE 393
#define SQL_SMALL_RESULT 394
#define SCHEMA 395
#define SOME 396
#define SQL_CALC_FOUND_ROWS 397
#define SQL_BIG_RESULT 398
#define SIMPLE 399
#define STRAIGHT_JOIN 400
#define SMALLINT 401
#define SET 402
#define SELECT 403
#define TINYTEXT 404
#define TINYINT 405
#define TO 406
#define TEMPORARY 407
#define GLOBAL 408
#define PRESERVE 409
#define TEXT 410
#define TIMESTAMP 411
#define TABLE 412
#define THEN 413
#define TRAILING 414
#define TRUNCATE 415
#define TINYBLOB 416
#define TIME 417
#define UPDATE 418
#define UNSIGNED 419
#define UNIQUE 420
#define UUID 421
#define USING 422
#define USE 423
#define HASH 424
#define VALIDATE 425
#define VARCHAR 426
#define VALUES 427
#define VARBINARY 428
#define WHERE 429
#define WHEN 430
#define WITH 431
#define YEAR 432
#define YEAR_MONTH 433
#define ZEROFILL 434
#define EXISTS 435
#define FSUBSTRING 436
#define FTRIM 437
#define FDATE_ADD 438
#define FDATE_SUB 439
#define FCOUNT 440
#define FSUM 441
#define FAVG 442
#define FMIN 443
#define FMAX 444
#define FUPPER 445
#define FLOWER 446
#define FLENGTH 447
#define FCONCAT 448
#define FREPLACE 449
#define FCOALESCE 450
#define FGEN_RANDOM_UUID 451
#define FGEN_RANDOM_UUID_V7 452
#define FSNOWFLAKE_ID 453
#define FLAST_INSERT_ID 454




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
#line 524 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 537 "parser/evoparser.tab.c"

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
#define YYLAST   2922

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  214
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  447
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1081

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   454

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     211,   212,    26,    24,   213,    25,   210,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   209,
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
     204,   205,   206,   207,   208
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
     312,   321,   328,   332,   336,   340,   344,   346,   348,   350,
     357,   364,   368,   372,   376,   380,   384,   388,   392,   396,
     400,   405,   412,   416,   422,   427,   433,   437,   442,   446,
     451,   453,   455,   457,   459,   463,   475,   476,   479,   480,
     485,   488,   493,   494,   496,   498,   499,   502,   503,   506,
     507,   511,   513,   517,   520,   521,   524,   529,   534,   535,
     538,   540,   544,   545,   548,   551,   554,   557,   560,   563,
     566,   569,   571,   575,   577,   580,   583,   585,   586,   588,
     592,   594,   596,   600,   606,   610,   614,   616,   617,   623,
     627,   633,   640,   646,   647,   649,   651,   652,   654,   656,
     658,   661,   664,   665,   666,   668,   671,   676,   683,   690,
     697,   698,   701,   702,   704,   708,   712,   714,   722,   725,
     728,   731,   732,   739,   742,   747,   748,   751,   759,   761,
     765,   771,   773,   782,   793,   803,   815,   826,   839,   851,
     865,   875,   887,   898,   911,   923,   936,   938,   942,   944,
     949,   954,   959,   966,   968,   972,   974,   978,   980,   984,
     986,   990,   996,   998,  1009,  1020,  1038,  1051,  1071,  1083,
    1090,  1099,  1106,  1113,  1120,  1128,  1130,  1139,  1140,  1145,
    1146,  1149,  1152,  1155,  1158,  1160,  1161,  1162,  1166,  1168,
    1172,  1176,  1177,  1184,  1186,  1188,  1192,  1196,  1204,  1208,
    1212,  1218,  1224,  1226,  1235,  1243,  1251,  1253,  1262,  1263,
    1266,  1269,  1273,  1279,  1285,  1293,  1295,  1300,  1305,  1306,
    1309,  1311,  1317,  1325,  1333,  1343,  1355,  1357,  1360,  1364,
    1366,  1376,  1388,  1389,  1394,  1398,  1404,  1410,  1420,  1427,
    1439,  1448,  1449,  1451,  1454,  1456,  1460,  1466,  1474,  1479,
    1484,  1490,  1496,  1501,  1508,  1520,  1534,  1548,  1564,  1569,
    1576,  1578,  1582,  1584,  1588,  1590,  1594,  1595,  1600,  1606,
    1611,  1617,  1622,  1628,  1633,  1639,  1644,  1649,  1653,  1657,
    1661,  1664,  1668,  1673,  1678,  1680,  1684,  1685,  1690,  1691,
    1695,  1698,  1702,  1706,  1710,  1714,  1720,  1726,  1732,  1736,
    1742,  1745,  1753,  1759,  1767,  1773,  1776,  1780,  1783,  1787,
    1790,  1794,  1800,  1805,  1811,  1819,  1828,  1837,  1845,  1852,
    1859,  1865,  1866,  1870,  1876,  1877,  1879,  1880,  1883,  1886,
    1887,  1892,  1896,  1899,  1903,  1907,  1911,  1915,  1919,  1923,
    1927,  1931,  1935,  1939,  1941,  1943,  1945,  1947,  1949,  1953,
    1959,  1962,  1967,  1969,  1971,  1973,  1975,  1979,  1983,  1987,
    1991,  1997,  2003,  2005,  2007,  2009,  2013,  2017,  2018,  2020,
    2022,  2024,  2028,  2032,  2035,  2037,  2041,  2045
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     215,     0,    -1,   224,   209,    -1,   224,   209,   215,    -1,
       3,    -1,     3,   210,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   132,    -1,   216,    24,
     216,    -1,   216,    25,   216,    -1,   216,    26,   216,    -1,
     216,    27,   216,    -1,   216,    28,   216,    -1,   216,    29,
     216,    -1,    25,   216,    -1,   211,   216,   212,    -1,   216,
      12,   216,    -1,   216,    10,   216,    -1,   216,    11,   216,
      -1,   216,    21,   216,    -1,   216,    22,   216,    -1,   216,
      30,   216,    -1,   216,    23,   216,    -1,    18,   216,    -1,
      17,   216,    -1,   216,    20,   216,    -1,   216,    20,   211,
     225,   212,    -1,   216,    20,    36,   211,   225,   212,    -1,
     216,    20,   150,   211,   225,   212,    -1,   216,    20,    34,
     211,   225,   212,    -1,   216,    15,   132,    -1,   216,    15,
      18,   132,    -1,   216,    15,     6,    -1,   216,    15,    18,
       6,    -1,     8,     9,   216,    -1,   216,    19,   216,    39,
     216,    -1,   216,    18,    19,   216,    39,   216,    -1,   216,
      -1,   216,   213,   217,    -1,    -1,   217,    -1,    -1,   216,
      16,   211,   219,   217,   212,    -1,    -1,   216,    18,    16,
     211,   220,   217,   212,    -1,   216,    16,   211,   225,   212,
      -1,   216,    18,    16,   211,   225,   212,    -1,   189,   211,
     225,   212,    -1,     3,   211,   218,   212,    -1,   194,   211,
      26,   212,    -1,   194,   211,   216,   212,    -1,   195,   211,
     216,   212,    -1,   196,   211,   216,   212,    -1,   197,   211,
     216,   212,    -1,   198,   211,   216,   212,    -1,   190,   211,
     216,   213,   216,   213,   216,   212,    -1,   190,   211,   216,
     213,   216,   212,    -1,   190,   211,   216,    96,   216,   212,
      -1,   190,   211,   216,    96,   216,    99,   216,   212,    -1,
     191,   211,   216,   212,    -1,   191,   211,   221,   216,    96,
     216,   212,    -1,   191,   211,   221,    96,   216,   212,    -1,
     199,   211,   216,   212,    -1,   200,   211,   216,   212,    -1,
     201,   211,   216,   212,    -1,   202,   211,   216,   213,   216,
     212,    -1,   203,   211,   216,   213,   216,   213,   216,   212,
      -1,   204,   211,   216,   213,   216,   212,    -1,   205,   211,
     212,    -1,   206,   211,   212,    -1,   207,   211,   212,    -1,
     208,   211,   212,    -1,   122,    -1,   168,    -1,    50,    -1,
     192,   211,   216,   213,   222,   212,    -1,   193,   211,   216,
     213,   222,   212,    -1,   116,   216,    73,    -1,   116,   216,
      74,    -1,   116,   216,    78,    -1,   116,   216,    80,    -1,
     116,   216,   187,    -1,   116,   216,   186,    -1,   116,   216,
     102,    -1,   116,   216,   101,    -1,   116,   216,   104,    -1,
      58,   216,   223,    90,    -1,    58,   216,   223,    91,   216,
      90,    -1,    58,   223,    90,    -1,    58,   223,    91,   216,
      90,    -1,   184,   216,   167,   216,    -1,   223,   184,   216,
     167,   216,    -1,   216,    14,   216,    -1,   216,    18,    14,
     216,    -1,   216,    13,   216,    -1,   216,    18,    13,   216,
      -1,    54,    -1,    61,    -1,    62,    -1,   225,    -1,   157,
     238,   239,    -1,   157,   238,   239,    96,   242,   226,   227,
     231,   232,   235,   236,    -1,    -1,   183,   216,    -1,    -1,
     100,    48,   228,   230,    -1,   216,   229,    -1,   228,   213,
     216,   229,    -1,    -1,    38,    -1,    81,    -1,    -1,   185,
     145,    -1,    -1,   105,   216,    -1,    -1,   135,    48,   233,
      -1,   234,    -1,   233,   213,   234,    -1,     3,   229,    -1,
      -1,   123,   216,    -1,   123,   216,   213,   216,    -1,   123,
     216,   124,   216,    -1,    -1,   114,   237,    -1,     3,    -1,
     237,   213,     3,    -1,    -1,   238,    34,    -1,   238,    75,
      -1,   238,    79,    -1,   238,   103,    -1,   238,   154,    -1,
     238,   148,    -1,   238,   152,    -1,   238,   151,    -1,   240,
      -1,   239,   213,   240,    -1,    26,    -1,   216,   241,    -1,
      40,     3,    -1,     3,    -1,    -1,   243,    -1,   242,   213,
     243,    -1,   244,    -1,   246,    -1,     3,   241,   253,    -1,
       3,   210,     3,   241,   253,    -1,   256,   245,     3,    -1,
     211,   242,   212,    -1,    40,    -1,    -1,   243,   247,   117,
     244,   251,    -1,   243,   154,   244,    -1,   243,   154,   244,
     134,   216,    -1,   243,   249,   248,   117,   244,   252,    -1,
     243,   130,   250,   117,   244,    -1,    -1,   109,    -1,    57,
      -1,    -1,   133,    -1,   121,    -1,   146,    -1,   121,   248,
      -1,   146,   248,    -1,    -1,    -1,   252,    -1,   134,   216,
      -1,   176,   211,   237,   212,    -1,   177,   118,   254,   211,
     255,   212,    -1,   110,   118,   254,   211,   255,   212,    -1,
      94,   118,   254,   211,   255,   212,    -1,    -1,    99,   117,
      -1,    -1,     3,    -1,   255,   213,     3,    -1,   211,   225,
     212,    -1,   257,    -1,    76,   258,    96,     3,   226,   232,
     235,    -1,   258,   120,    -1,   258,   139,    -1,   258,   110,
      -1,    -1,    76,   258,   259,    96,   242,   226,    -1,     3,
     260,    -1,   259,   213,     3,   260,    -1,    -1,   210,    26,
      -1,    76,   258,    96,   259,   176,   242,   226,    -1,   261,
      -1,    77,   166,     3,    -1,    77,   166,   112,   189,     3,
      -1,   262,    -1,    55,   111,     3,   134,     3,   211,   263,
     212,    -1,    55,   111,   112,   189,     3,   134,     3,   211,
     263,   212,    -1,    55,   174,   111,     3,   134,     3,   211,
     263,   212,    -1,    55,   174,   111,   112,   189,     3,   134,
       3,   211,   263,   212,    -1,    55,   111,     3,   134,     3,
     176,   178,   211,   263,   212,    -1,    55,   111,   112,   189,
       3,   134,     3,   176,   178,   211,   263,   212,    -1,    55,
     174,   111,     3,   134,     3,   176,   178,   211,   263,   212,
      -1,    55,   174,   111,   112,   189,     3,   134,     3,   176,
     178,   211,   263,   212,    -1,    55,   111,    66,     3,   134,
       3,   211,   263,   212,    -1,    55,   111,    66,   112,   189,
       3,   134,     3,   211,   263,   212,    -1,    55,   174,   111,
      66,     3,   134,     3,   211,   263,   212,    -1,    55,   174,
     111,    66,   112,   189,     3,   134,     3,   211,   263,   212,
      -1,    55,   111,    66,     3,   134,     3,   176,   178,   211,
     263,   212,    -1,    55,   174,   111,    66,     3,   134,     3,
     176,   178,   211,   263,   212,    -1,     3,    -1,   263,   213,
       3,    -1,   264,    -1,   199,   211,     3,   212,    -1,   200,
     211,     3,   212,    -1,   201,   211,     3,   212,    -1,   202,
     211,     3,   213,     3,   212,    -1,   265,    -1,    77,   111,
       3,    -1,   266,    -1,   169,   166,     3,    -1,   267,    -1,
     141,   166,     3,    -1,   268,    -1,    35,   166,     3,    -1,
      35,   166,     3,   210,     3,    -1,   269,    -1,    32,   166,
       3,    33,    53,     3,    59,   211,   216,   212,    -1,    32,
     166,     3,    33,    53,     3,   174,   211,   297,   212,    -1,
      32,   166,     3,    33,    53,     3,    95,   118,   211,   294,
     212,   142,     3,   211,   295,   212,   296,    -1,    32,   166,
       3,    33,    53,     3,    59,   211,   216,   212,    18,   179,
      -1,    32,   166,     3,    33,    53,     3,    95,   118,   211,
     294,   212,   142,     3,   211,   295,   212,   296,    18,   179,
      -1,    32,   166,     3,    33,    53,     3,   138,   118,   211,
     293,   212,    -1,    32,   166,     3,    77,    53,     3,    -1,
      32,   166,     3,   143,    53,     3,   160,     3,    -1,    32,
     166,     3,    87,    53,     3,    -1,    32,   166,     3,    70,
      53,     3,    -1,    32,   166,     3,   179,    53,     3,    -1,
      32,   166,     3,    33,    65,     3,   304,    -1,   270,    -1,
     113,   272,   273,     3,   274,   181,   276,   271,    -1,    -1,
     136,   118,   172,   279,    -1,    -1,   272,   120,    -1,   272,
      72,    -1,   272,   103,    -1,   272,   110,    -1,   114,    -1,
      -1,    -1,   211,   275,   212,    -1,     3,    -1,   275,   213,
       3,    -1,   211,   278,   212,    -1,    -1,   276,   213,   277,
     211,   278,   212,    -1,   216,    -1,    82,    -1,   278,   213,
     216,    -1,   278,   213,    82,    -1,   113,   272,   273,     3,
     156,   279,   271,    -1,     3,    20,   216,    -1,     3,    20,
      82,    -1,   279,   213,     3,    20,   216,    -1,   279,   213,
       3,    20,    82,    -1,   280,    -1,   147,   272,   273,     3,
     274,   181,   276,   271,    -1,   147,   272,   273,     3,   156,
     279,   271,    -1,   147,   272,   273,     3,   274,   225,   271,
      -1,   281,    -1,   172,   282,   242,   156,   283,   226,   232,
     235,    -1,    -1,   272,   120,    -1,   272,   110,    -1,     3,
      20,   216,    -1,     3,   210,     3,    20,   216,    -1,   283,
     213,     3,    20,   216,    -1,   283,   213,     3,   210,     3,
      20,   216,    -1,   284,    -1,    55,    67,   285,     3,    -1,
      55,   149,   285,     3,    -1,    -1,   112,   189,    -1,   286,
      -1,    55,    71,     3,    40,   304,    -1,    55,    71,     3,
      40,   304,    82,   216,    -1,    55,    71,     3,    40,   304,
      18,   132,    -1,    55,    71,     3,    40,   304,    59,   211,
     216,   212,    -1,    55,    71,     3,    40,   304,    18,   132,
      59,   211,   216,   212,    -1,   287,    -1,   177,     3,    -1,
     177,    67,     3,    -1,   288,    -1,    55,   290,   166,   285,
       3,   211,   291,   212,   289,    -1,    55,   290,   166,   285,
       3,   210,     3,   211,   291,   212,   289,    -1,    -1,   289,
      37,    20,     5,    -1,   289,    37,     5,    -1,   289,   134,
       3,    76,     3,    -1,   289,   134,     3,   163,     3,    -1,
      55,   290,   166,   285,     3,   211,   291,   212,   306,    -1,
      55,   290,   166,   285,     3,   306,    -1,    55,   290,   166,
     285,     3,   210,     3,   211,   291,   212,   306,    -1,    55,
     290,   166,   285,     3,   210,     3,   306,    -1,    -1,   161,
      -1,   162,   161,    -1,   292,    -1,   291,   213,   292,    -1,
     138,   118,   211,   293,   212,    -1,    53,     3,   138,   118,
     211,   293,   212,    -1,   118,   211,   237,   212,    -1,   111,
     211,   237,   212,    -1,    98,   111,   211,   237,   212,    -1,
      98,   118,   211,   237,   212,    -1,    59,   211,   216,   212,
      -1,    53,     3,    59,   211,   216,   212,    -1,    95,   118,
     211,   294,   212,   142,     3,   211,   295,   212,   296,    -1,
      95,   118,   211,   294,   212,   142,     3,   210,     3,   211,
     295,   212,   296,    -1,    53,     3,    95,   118,   211,   294,
     212,   142,     3,   211,   295,   212,   296,    -1,    53,     3,
      95,   118,   211,   294,   212,   142,     3,   210,     3,   211,
     295,   212,   296,    -1,   174,   211,   297,   212,    -1,    53,
       3,   174,   211,   297,   212,    -1,     3,    -1,   293,   213,
       3,    -1,     3,    -1,   294,   213,     3,    -1,     3,    -1,
     295,   213,     3,    -1,    -1,   296,   134,    76,    56,    -1,
     296,   134,    76,   156,   132,    -1,   296,   134,    76,   144,
      -1,   296,   134,    76,   156,    82,    -1,   296,   134,   172,
      56,    -1,   296,   134,   172,   156,   132,    -1,   296,   134,
     172,   144,    -1,   296,   134,   172,   156,    82,    -1,   296,
     134,    76,   131,    -1,   296,   134,   172,   131,    -1,   296,
     126,    97,    -1,   296,   126,   153,    -1,   296,   126,   137,
      -1,   296,    68,    -1,   296,    18,    68,    -1,   296,    68,
     107,    69,    -1,   296,    68,   107,   106,    -1,     3,    -1,
     297,   213,     3,    -1,    -1,   298,     3,   304,   299,    -1,
      -1,   299,    18,   132,    -1,   299,   132,    -1,   299,    82,
       4,    -1,   299,    82,     5,    -1,   299,    82,     7,    -1,
     299,    82,     6,    -1,   299,    82,   205,   211,   212,    -1,
     299,    82,   206,   211,   212,    -1,   299,    82,   207,   211,
     212,    -1,   299,    82,    54,    -1,   299,    82,   211,   216,
     212,    -1,   299,    37,    -1,   299,    37,   211,     5,   213,
       5,   212,    -1,   299,    37,   211,     5,   212,    -1,   299,
      42,   211,     5,   213,     5,   212,    -1,   299,    42,   211,
       5,   212,    -1,   299,    42,    -1,   299,   174,   118,    -1,
     299,   174,    -1,   299,   138,   118,    -1,   299,   118,    -1,
     299,    60,     4,    -1,   299,    59,   211,   216,   212,    -1,
     299,    53,     3,   174,    -1,   299,    53,     3,   138,   118,
      -1,   299,    53,     3,    59,   211,   216,   212,    -1,   299,
      43,    41,    40,   211,   216,   212,    44,    -1,   299,    43,
      41,    40,   211,   216,   212,    45,    -1,   299,    43,    41,
      40,   211,   216,   212,    -1,   299,    40,   211,   216,   212,
      44,    -1,   299,    40,   211,   216,   212,    45,    -1,   299,
      40,   211,   216,   212,    -1,    -1,   211,     5,   212,    -1,
     211,     5,   213,     5,   212,    -1,    -1,    49,    -1,    -1,
     302,   173,    -1,   302,   188,    -1,    -1,   303,    63,   156,
       4,    -1,   303,    64,     4,    -1,    52,   300,    -1,   159,
     300,   302,    -1,   155,   300,   302,    -1,   129,   300,   302,
      -1,   115,   300,   302,    -1,   108,   300,   302,    -1,    51,
     300,   302,    -1,   140,   300,   302,    -1,    83,   300,   302,
      -1,    93,   300,   302,    -1,    85,   300,   302,    -1,    86,
      -1,   171,    -1,   165,    -1,    84,    -1,   186,    -1,    63,
     300,   303,    -1,   180,   211,     5,   212,   303,    -1,    49,
     300,    -1,   182,   211,     5,   212,    -1,   170,    -1,    46,
      -1,   128,    -1,   125,    -1,   158,   301,   303,    -1,   164,
     301,   303,    -1,   127,   301,   303,    -1,   119,   301,   303,
      -1,    89,   211,   305,   212,   303,    -1,   156,   211,   305,
     212,   303,    -1,    47,    -1,   175,    -1,     4,    -1,   305,
     213,     4,    -1,   307,   245,   225,    -1,    -1,   110,    -1,
     147,    -1,   308,    -1,   156,   149,     3,    -1,   156,   149,
      82,    -1,   156,   309,    -1,   310,    -1,   309,   213,   310,
      -1,     8,    20,   216,    -1,     8,     9,   216,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   310,   310,   311,   316,   323,   324,   325,   343,   351,
     359,   365,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     396,   397,   398,   399,   402,   403,   404,   405,   406,   409,
     410,   413,   414,   417,   418,   421,   421,   422,   422,   423,
     424,   425,   429,   433,   434,   435,   436,   437,   438,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   460,   467,   474,   480,   481,   482,   485,
     486,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     500,   502,   504,   506,   510,   518,   529,   530,   533,   534,
     537,   545,   553,   564,   574,   575,   589,   590,   591,   592,
     595,   602,   610,   611,   612,   615,   616,   619,   620,   623,
     624,   627,   628,   631,   639,   640,   641,   642,   645,   646,
     649,   650,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   664,   665,   666,   674,   680,   681,   682,   685,   686,
     689,   690,   694,   700,   701,   702,   705,   706,   710,   712,
     714,   716,   718,   722,   723,   724,   727,   728,   731,   732,
     735,   736,   737,   740,   741,   744,   745,   749,   751,   753,
     755,   758,   759,   762,   763,   766,   770,   778,   786,   787,
     788,   789,   793,   796,   797,   800,   800,   802,   806,   813,
     820,   830,   837,   844,   854,   862,   872,   880,   889,   898,
     908,   916,   925,   934,   944,   953,   965,   970,   975,   981,
     988,   995,  1002,  1012,  1019,  1028,  1035,  1044,  1051,  1060,
    1067,  1073,  1084,  1087,  1093,  1099,  1106,  1112,  1119,  1125,
    1131,  1137,  1143,  1149,  1155,  1163,  1170,  1178,  1179,  1182,
    1183,  1184,  1185,  1186,  1189,  1189,  1192,  1193,  1196,  1206,
    1219,  1220,  1220,  1223,  1224,  1225,  1226,  1229,  1233,  1234,
    1235,  1236,  1242,  1245,  1251,  1256,  1262,  1268,  1275,  1276,
    1277,  1281,  1292,  1303,  1314,  1328,  1332,  1333,  1336,  1337,
    1341,  1345,  1347,  1349,  1351,  1353,  1358,  1362,  1363,  1367,
    1376,  1386,  1390,  1391,  1392,  1393,  1394,  1397,  1412,  1425,
    1440,  1453,  1454,  1455,  1458,  1459,  1462,  1463,  1464,  1465,
    1466,  1467,  1468,  1469,  1470,  1472,  1474,  1476,  1478,  1480,
    1484,  1485,  1488,  1489,  1492,  1493,  1496,  1497,  1498,  1499,
    1500,  1501,  1502,  1503,  1504,  1505,  1506,  1507,  1508,  1509,
    1510,  1511,  1512,  1513,  1516,  1517,  1520,  1520,  1530,  1531,
    1532,  1533,  1534,  1535,  1536,  1537,  1538,  1539,  1540,  1541,
    1548,  1549,  1550,  1551,  1552,  1553,  1554,  1555,  1556,  1557,
    1558,  1559,  1560,  1561,  1562,  1563,  1564,  1565,  1566,  1567,
    1568,  1571,  1572,  1573,  1576,  1577,  1580,  1581,  1582,  1585,
    1586,  1587,  1591,  1592,  1593,  1594,  1595,  1596,  1597,  1598,
    1599,  1600,  1601,  1602,  1603,  1604,  1605,  1606,  1607,  1608,
    1609,  1610,  1611,  1612,  1613,  1614,  1615,  1616,  1617,  1618,
    1619,  1620,  1621,  1622,  1625,  1626,  1629,  1642,  1643,  1644,
    1648,  1651,  1652,  1653,  1654,  1654,  1656,  1657
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
  "ADD", "ALL", "ANALYZE", "ANY", "AUTO_INCREMENT", "ASC", "AND", "AS",
  "ALWAYS", "IDENTITY", "GENERATED", "STORED", "VIRTUAL", "BLOB",
  "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT", "CONSTRAINT",
  "CURRENT_TIMESTAMP", "CREATE", "CASCADE", "CROSS", "CASE", "CHECK",
  "COMMENT", "CURRENT_DATE", "CURRENT_TIME", "CHAR", "COLLATE", "COLUMN",
  "CONCURRENTLY", "DATABASE", "DEFERRABLE", "DEFERRED", "DISABLE",
  "DOMAIN", "DELAYED", "DAY_HOUR", "DAY_MICROSECOND", "DISTINCT", "DELETE",
  "DROP", "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT",
  "DOUBLE", "DATETIME", "DECIMAL", "DATE", "ENABLE", "ESCAPED", "ENUM",
  "END", "ELSE", "EXPLAIN", "FLOAT", "FORCE", "FOREIGN", "FROM", "FULL",
  "FULLTEXT", "FOR", "GROUP", "HOUR_MINUTE", "HOUR_MICROSECOND",
  "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "IMMEDIATE", "INITIALLY",
  "INTEGER", "INNER", "IGNORE", "INDEX", "IF", "INSERT", "INTO", "INT",
  "INTERVAL", "JOIN", "KEY", "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING",
  "LIMIT", "OFFSET", "LONGBLOB", "MATCH", "MEDIUMTEXT", "MEDIUMBLOB",
  "MEDIUMINT", "NATURAL", "NO_ACTION", "NULLX", "OUTER", "ON", "ORDER",
  "ONDUPLICATE", "PARTIAL", "PRIMARY", "QUICK", "REAL", "RECLAIM",
  "REFERENCES", "RENAME", "RESTRICT", "ROLLUP", "RIGHT", "REPLACE",
  "SQL_SMALL_RESULT", "SCHEMA", "SOME", "SQL_CALC_FOUND_ROWS",
  "SQL_BIG_RESULT", "SIMPLE", "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT",
  "TINYTEXT", "TINYINT", "TO", "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT",
  "TIMESTAMP", "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME",
  "UPDATE", "UNSIGNED", "UNIQUE", "UUID", "USING", "USE", "HASH",
  "VALIDATE", "VARCHAR", "VALUES", "VARBINARY", "WHERE", "WHEN", "WITH",
  "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM",
  "FDATE_ADD", "FDATE_SUB", "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX",
  "FUPPER", "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE", "FCOALESCE",
  "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID",
  "FLAST_INSERT_ID", "';'", "'.'", "'('", "')'", "','", "$accept",
  "stmt_list", "expr", "val_list", "opt_val_list", "@1", "@2", "trim_ltb",
  "interval_exp", "case_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_orderby", "orderby_list", "orderby_item", "opt_limit",
  "opt_into_list", "column_list", "select_opts", "select_expr_list",
  "select_expr", "opt_as_alias", "table_references", "table_reference",
  "table_factor", "opt_as", "join_table", "opt_inner_cross", "opt_outer",
  "left_or_right", "opt_left_or_right_outer", "opt_join_condition",
  "join_condition", "index_hint", "opt_for_join", "index_list",
  "table_subquery", "delete_stmt", "delete_opts", "delete_list",
  "opt_dot_star", "drop_table_stmt", "create_index_stmt", "index_col_list",
  "index_expr", "drop_index_stmt", "truncate_table_stmt",
  "reclaim_table_stmt", "analyze_table_stmt", "alter_table_stmt",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_col_list", "insert_vals_list", "@3",
  "insert_vals", "insert_asgn_list", "replace_stmt", "update_stmt",
  "update_opts", "update_asgn_list", "create_database_stmt",
  "opt_if_not_exists", "create_domain_stmt", "use_database_stmt",
  "create_table_stmt", "opt_table_options", "opt_temporary",
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
     446,   447,   448,   449,   450,   451,   452,   453,   454,    59,
      46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   214,   215,   215,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   217,   217,   218,   218,   219,   216,   220,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   221,   221,   221,   216,
     216,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     216,   216,   216,   216,   223,   223,   216,   216,   216,   216,
     216,   216,   216,   224,   225,   225,   226,   226,   227,   227,
     228,   228,   229,   229,   229,   230,   230,   231,   231,   232,
     232,   233,   233,   234,   235,   235,   235,   235,   236,   236,
     237,   237,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   239,   239,   239,   240,   241,   241,   241,   242,   242,
     243,   243,   244,   244,   244,   244,   245,   245,   246,   246,
     246,   246,   246,   247,   247,   247,   248,   248,   249,   249,
     250,   250,   250,   251,   251,   252,   252,   253,   253,   253,
     253,   254,   254,   255,   255,   256,   224,   257,   258,   258,
     258,   258,   257,   259,   259,   260,   260,   257,   224,   261,
     261,   224,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   263,   263,   263,   264,
     264,   264,   264,   224,   265,   224,   266,   224,   267,   224,
     268,   268,   224,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   224,   270,   271,   271,   272,
     272,   272,   272,   272,   273,   273,   274,   274,   275,   275,
     276,   277,   276,   278,   278,   278,   278,   270,   279,   279,
     279,   279,   224,   280,   280,   280,   224,   281,   282,   282,
     282,   283,   283,   283,   283,   224,   284,   284,   285,   285,
     224,   286,   286,   286,   286,   286,   224,   287,   287,   224,
     288,   288,   289,   289,   289,   289,   289,   288,   288,   288,
     288,   290,   290,   290,   291,   291,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     293,   293,   294,   294,   295,   295,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   297,   297,   298,   292,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   300,   300,   300,   301,   301,   302,   302,   302,   303,
     303,   303,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   305,   305,   306,   307,   307,   307,
     224,   308,   308,   308,   309,   309,   310,   310
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
       8,     6,     3,     3,     3,     3,     1,     1,     1,     6,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     6,     3,     5,     4,     5,     3,     4,     3,     4,
       1,     1,     1,     1,     3,    11,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     1,     3,     2,     0,     2,     4,     4,     0,     2,
       1,     3,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     1,     2,     2,     1,     0,     1,     3,
       1,     1,     3,     5,     3,     3,     1,     0,     5,     3,
       5,     6,     5,     0,     1,     1,     0,     1,     1,     1,
       2,     2,     0,     0,     1,     2,     4,     6,     6,     6,
       0,     2,     0,     1,     3,     3,     1,     7,     2,     2,
       2,     0,     6,     2,     4,     0,     2,     7,     1,     3,
       5,     1,     8,    10,     9,    11,    10,    12,    11,    13,
       9,    11,    10,    12,    11,    12,     1,     3,     1,     4,
       4,     4,     6,     1,     3,     1,     3,     1,     3,     1,
       3,     5,     1,    10,    10,    17,    12,    19,    11,     6,
       8,     6,     6,     6,     7,     1,     8,     0,     4,     0,
       2,     2,     2,     2,     1,     0,     0,     3,     1,     3,
       3,     0,     6,     1,     1,     3,     3,     7,     3,     3,
       5,     5,     1,     8,     7,     7,     1,     8,     0,     2,
       2,     3,     5,     5,     7,     1,     4,     4,     0,     2,
       1,     5,     7,     7,     9,    11,     1,     2,     3,     1,
       9,    11,     0,     4,     3,     5,     5,     9,     6,    11,
       8,     0,     1,     2,     1,     3,     5,     7,     4,     4,
       5,     5,     4,     6,    11,    13,    13,    15,     4,     6,
       1,     3,     1,     3,     1,     3,     0,     4,     5,     4,
       5,     4,     5,     4,     5,     4,     4,     3,     3,     3,
       2,     3,     4,     4,     1,     3,     0,     4,     0,     3,
       2,     3,     3,     3,     3,     5,     5,     5,     3,     5,
       2,     7,     5,     7,     5,     2,     3,     2,     3,     2,
       3,     5,     4,     5,     7,     8,     8,     7,     6,     6,
       5,     0,     3,     5,     0,     1,     0,     2,     2,     0,
       4,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     3,     5,
       2,     4,     1,     1,     1,     1,     3,     3,     3,     3,
       5,     5,     1,     1,     1,     3,     3,     0,     1,     1,
       1,     3,     3,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   311,   191,     0,   249,     0,   249,     0,
     132,     0,   249,     0,     0,     0,   103,   186,   198,   201,
     223,   225,   227,   229,   232,   245,   272,   276,   285,   290,
     296,   299,   440,     0,     0,   288,     0,     0,   288,   312,
       0,     0,     0,     0,     0,     0,   255,     0,   255,     0,
       0,   443,   444,     0,     0,     0,     0,   297,     0,     1,
       2,     0,   230,     0,     0,     0,     0,     0,     0,     0,
     313,     0,   288,   195,     0,   190,   188,   189,     0,   224,
     199,     0,   251,   252,   253,   254,   250,     0,   228,     0,
       0,     0,   441,   442,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   143,   133,   100,     0,   101,   102,
     134,   135,   136,    11,   138,   140,   139,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
     104,   141,   226,   253,   250,   147,     0,     0,   148,   150,
     151,   157,   298,     3,     0,     0,     0,     0,     0,     0,
       0,   289,   286,     0,     0,     0,     0,     0,   287,     0,
       0,     0,     0,     0,   193,   106,     0,     0,     0,     0,
     256,   256,   447,   446,   445,     0,    43,     0,    28,    27,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,     0,     0,
       0,   180,     0,     0,     0,     0,   165,   164,   168,   172,
     169,     0,     0,   166,   156,     0,     0,     0,     0,     0,
       0,     0,     0,   231,   423,   432,   391,   391,   391,   391,
     391,   416,   391,   413,     0,   391,   391,   391,   394,   425,
     394,   424,   391,   391,   391,     0,   394,   391,   394,   415,
     422,   414,   433,     0,     0,   417,   291,     0,     0,     0,
       0,     0,     0,     0,     0,   437,   196,     0,   119,     0,
     106,   195,   200,     0,     0,     0,     0,     0,     5,    41,
      44,     0,    38,     0,     0,    92,     0,     0,     0,     0,
      78,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    19,    21,    22,    20,    98,    96,    36,
       0,    34,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    23,    24,    26,    12,    13,    14,    15,
      16,    17,    25,   145,   106,   142,   147,     0,     0,     0,
     152,   185,   155,     0,   106,   149,   166,   166,     0,   159,
       0,   167,     0,   154,     0,     0,   242,   239,   241,     0,
     243,     0,   420,   396,   402,   399,   396,   396,     0,   396,
     396,   396,   395,   399,   399,   396,   396,   396,     0,   399,
     396,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   438,   439,     0,   356,
     308,   157,   107,     0,   124,   106,   192,   194,     0,   247,
     258,     0,     0,   247,     0,   247,     0,    52,     0,    90,
       0,     0,     0,    51,     0,     0,    63,     0,     0,     0,
       0,    53,    54,    55,    56,    57,    58,    66,    67,    68,
       0,     0,     0,    37,    35,     0,     0,    99,    97,    47,
       0,     0,     0,     0,     0,     0,   108,   180,   182,   182,
     182,     0,     0,     0,   119,   170,   171,     0,     0,   173,
       0,     0,     0,     0,     0,   244,     0,     0,   408,   418,
     410,   412,   434,     0,   411,   407,   406,   429,   428,   405,
     409,   404,     0,   426,   403,   427,     0,     0,   293,     0,
     292,     0,   216,     0,     0,     0,     0,     0,   218,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   437,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   314,     0,
       0,     0,     0,   187,   197,     0,     0,     0,   267,   257,
       0,     0,   247,   274,   247,   275,    42,    94,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,    39,     0,     0,     0,
      30,     0,   117,   153,     0,     0,     0,     0,   281,     0,
       0,   124,   162,   160,     0,     0,   158,   174,     0,     0,
       0,     0,     0,   240,   392,     0,   397,   398,     0,     0,
     399,     0,   399,   399,   421,     0,     0,     0,     0,     0,
       0,     0,   202,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   356,   310,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   302,   356,     0,   436,
     112,   120,   121,   125,   269,   268,     0,     0,   259,   264,
     263,     0,   261,   246,   273,    91,    95,     0,    61,    60,
       0,    65,     0,     0,    79,    80,    69,     0,    71,    46,
       0,    50,    40,    33,    31,    32,     0,     0,   119,   181,
       0,     0,     0,     0,     0,     0,   277,   175,     0,   161,
       0,     0,     0,   354,     0,     0,     0,   401,   430,   435,
     431,   419,     0,   294,     0,     0,     0,     0,     0,   217,
       0,   210,     0,     0,     0,     0,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,     0,     0,     0,     0,   300,   307,   315,   358,
     113,   114,   123,     0,     0,     0,     0,     0,   260,     0,
       0,     0,     0,    64,    81,    82,    83,    84,    88,    87,
      89,    86,    85,     0,    48,   112,   115,   118,   124,   183,
       0,     0,     0,   282,   283,     0,     0,   233,   332,     0,
     330,     0,   234,     0,   393,   400,     0,   206,   219,   220,
     221,     0,     0,     0,     0,   203,     0,     0,   212,     0,
       0,     0,   302,     0,     0,     0,     0,   322,     0,     0,
       0,   319,     0,   318,     0,   328,     0,     0,   357,   122,
     127,   126,   248,   271,   270,   266,   265,     0,    62,    59,
      70,   110,     0,     0,   109,   128,   179,     0,   178,   177,
       0,   176,     0,     0,     0,   238,     0,   355,   295,     0,
     214,   211,     0,   208,     0,     0,     0,   205,   301,   309,
       0,     0,     0,     0,     0,   320,   321,   131,   316,   304,
       0,     0,     0,   370,     0,   375,     0,     0,     0,     0,
       0,   379,   360,     0,   377,     0,   116,   112,     0,   105,
     184,   284,   236,     0,   333,   331,   222,   207,   215,   213,
       0,   323,     0,     0,   329,     0,   303,     0,     0,   359,
       0,     0,     0,     0,     0,     0,   380,   361,   362,   364,
     363,   368,     0,     0,     0,     0,   378,   376,   262,   111,
     129,     0,   209,     0,   317,     0,   305,   306,     0,     0,
       0,     0,     0,     0,   382,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,     0,   390,   374,     0,     0,
       0,   383,   381,   365,   366,   367,   369,   334,     0,     0,
       0,     0,     0,   388,   389,     0,     0,     0,   336,     0,
       0,     0,     0,   336,   371,   373,   387,   384,   235,   335,
       0,     0,     0,   324,   385,   386,     0,   350,     0,     0,
       0,   336,   336,     0,   351,   237,     0,   347,   349,   348,
       0,     0,     0,   326,   325,   352,   353,   337,   345,   339,
       0,   341,   346,   343,     0,   336,   340,   338,   344,   342,
     327
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   319,   320,   321,   495,   613,   334,   606,   193,
      15,    16,   308,   622,   816,   792,   884,   728,   454,   691,
     692,   583,   939,   782,    53,   140,   141,   237,   147,   148,
     149,   255,   150,   252,   402,   253,   398,   636,   637,   390,
     625,   820,   151,    17,    43,    78,   174,    18,    19,   557,
     558,    20,    21,    22,    23,    24,    25,   588,    46,    87,
     315,   461,   592,   800,   701,   459,    26,    27,    56,   394,
      28,    64,    29,    30,    31,   786,    42,   577,   578,   831,
     829,  1018,  1038,   744,   579,   868,   412,   423,   528,   529,
     296,   533,   450,   451,    32,    51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -782
static const yytype_int16 yypact[] =
{
    2530,   -90,   -87,   201,  -782,   -59,  -782,   -85,  -782,    19,
    -782,   -74,     7,    44,    98,   -76,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,   133,   231,    99,   276,   235,    99,  -782,
      86,   192,   140,   157,   317,    29,   284,   340,   284,   380,
      40,   190,  -782,   320,   393,   257,     8,  -782,   413,  -782,
    2530,    18,   243,   270,   461,   427,   339,    81,   303,   491,
    -782,   241,    99,   287,   527,  -782,  -782,  -782,   -28,  -782,
    -782,   350,  -782,  -782,  -782,  -782,  -782,   541,  -782,   543,
    1451,  1451,  -782,  -782,   550,   239,  -782,  -782,  -782,  -782,
     552,  1451,  1451,  1451,  -782,  -782,  -782,   771,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   365,   373,
     382,   384,   468,   529,   532,   534,   581,   582,   583,   584,
     587,   588,   590,   591,   592,   599,   600,   601,  1451,  2797,
     -24,  -782,  -782,    13,    14,    17,    12,  -110,   -15,  -782,
    -782,   577,  -782,  -782,   277,   596,   665,   760,   761,   762,
     813,  -782,  -782,  2526,   814,   686,   632,   819,  -782,   689,
      84,   639,   828,   808,  -782,   175,  -109,     8,   832,   833,
     -92,   -86,  2874,  2874,  -782,   846,  1451,  1451,   406,   406,
    -782,  1451,  2418,    36,   693,  1451,   437,  1451,  1451,   801,
    1451,  1451,  1451,  1451,  1451,  1451,  1451,  1451,  1451,  1451,
     640,   641,   642,   644,  1721,  -782,  1451,  1451,  1451,  1451,
    1451,    59,   646,   447,  1451,   560,  1451,  1451,  1451,  1451,
    1451,  1451,  1451,  1451,  1451,  1451,   848,  -782,     8,  1451,
     855,   139,   648,   206,   858,     8,  -782,  -782,  -782,   -50,
    -782,     8,   754,   752,  -782,   883,   890,   891,   892,   893,
     894,   895,   896,  -782,  -782,  -782,   694,   694,   694,   694,
     694,  -782,   694,  -782,   695,   694,   694,   694,   851,  -782,
     851,  -782,   694,   694,   694,   696,   851,   694,   851,  -782,
    -782,  -782,  -782,   699,   700,  -782,    27,    69,   901,   910,
     781,   913,   783,   729,   916,   122,  -782,  1451,   785,     8,
    -130,   287,  -782,   918,   920,   743,   918,   -84,  -782,  1254,
    -782,   713,  2874,  2506,   118,  -782,  1451,  1451,   714,   701,
    -782,  -782,  -782,  1742,   884,  1471,  1504,   715,  1791,  1812,
    1833,  1857,  1879,  1916,  1937,  1958,  1574,  1595,  1653,  -782,
    -782,  -782,  -782,  -782,  1274,  1422,  1189,  2892,  2892,  -782,
      38,  -782,   693,  1451,  1451,   717,  1451,  2830,   718,   719,
     720,  1039,   661,   478,   574,   383,   507,   507,   902,   902,
     902,   902,  -782,  -782,  -130,  -782,    88,   816,   817,   821,
    -782,  -782,  -782,     2,   136,   -15,   752,   752,   820,   802,
       8,  -782,   823,  -782,   162,  2526,  -782,  -782,  -782,   784,
    -782,   936,  -782,  -782,  -782,  -782,  -782,  -782,   939,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   939,  -782,
    -782,  -782,   942,   943,   822,   738,  1451,   772,    15,    79,
     824,   948,   123,   949,   950,   825,  -782,  -782,   978,   197,
    -782,   577,  2874,   935,   861,  -130,  -782,  -782,   965,   -81,
    -782,   244,   775,   -81,   775,   852,  1451,  -782,  1451,  -782,
    1451,  2724,  2527,  -782,  1451,  1451,  -782,  1451,  2703,   871,
     871,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    1451,  1451,  1451,  -782,  -782,  1451,   777,  2892,  2892,   693,
    2852,  1451,   693,   693,   693,   798,   911,   139,   914,   914,
     914,  1451,  1011,  1012,   785,  -782,  -782,     8,  1451,   128,
       8,   827,   906,   921,   829,  -782,  1038,   263,   217,   414,
     217,   217,  -782,   341,   217,   217,   217,   414,   414,   217,
     217,   217,   358,   414,   217,   414,   836,   837,   991,  1451,
    2874,   840,  -782,   841,   842,   843,   844,   360,  -782,   880,
      15,  1056,   155,   882,    15,   168,   927,  1059,   -17,  1060,
     857,   947,   275,   859,   860,   951,   885,   362,  -782,  1069,
     693,  1091,  1451,  -782,  -782,  1116,   980,  1096,  -782,  -782,
    1099,  1139,   -78,  -782,   -78,  -782,  -782,  2874,  2745,  -782,
    1451,  1700,   854,  1986,  1451,  1451,   897,   898,  2007,  1675,
    2028,   899,  -782,  1451,   900,  1451,   818,   903,   904,   905,
    -782,  1055,   999,  -782,   988,   907,   915,   917,  2874,  1086,
      16,   861,  -782,  2874,  1451,   919,  -782,  -782,   128,  1451,
     924,   925,  1104,  -782,  -782,  1103,  -782,  -782,   957,  1110,
    -782,  1121,  -782,  -782,  -782,   926,  2052,    15,  1124,  1126,
    1129,  1135,  -782,  1136,   929,   367,   937,   971,    15,   940,
     370,   972,    15,  1149,   181,   197,  -782,   202,  1451,   944,
     952,   954,  1150,  1150,   955,  1104,    89,   197,  2526,  -782,
      37,   941,  -782,  1007,  -782,  2874,   986,  1140,  -782,  -782,
    2874,   375,  -782,  -782,  -782,  -782,  2874,  1451,  -782,  -782,
    1451,  -782,  2074,  2397,  -782,  -782,  -782,  1451,  -782,  -782,
     956,  -782,   818,  -782,  -782,  -782,  1451,  1451,   785,  -782,
    1156,  1156,  1156,  1451,  1451,  1158,  -782,  2874,  1150,  -782,
    2095,  1159,  1164,  -782,   377,   960,  1165,  -782,   414,  -782,
     414,   414,  1451,  -782,   379,   961,   963,   964,   966,  -782,
      15,  -782,    15,   969,   394,    15,  -782,   970,   396,   973,
    1004,    15,   398,   974,  1065,  1068,   976,  2132,  1159,  1150,
    1150,  -782,   400,   403,  1164,   407,    71,  -782,  -782,  -782,
    -782,  -782,  -782,  1091,  1451,  1451,   918,  1348,  -782,  1371,
     977,  2153,  2181,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  2202,  -782,  2766,   108,  2874,   861,  -782,
     411,   434,   438,  2874,  2874,  1169,   440,  1172,  -782,   443,
    -782,   446,  -782,  1188,  -782,  -782,  2223,  -782,  -782,  -782,
    -782,  1191,   448,   450,    15,  -782,   453,    15,  -782,    15,
     981,   455,    89,  1451,   984,   995,  1104,  -782,   457,   459,
     463,  -782,  1196,  -782,   465,  -782,   386,  1219,   223,  -782,
    2874,  2874,  1010,  -782,  2874,  -782,  2874,  1139,  -782,  -782,
    -782,  -782,  1079,  1451,  -782,  1111,  -782,  1223,  -782,  -782,
    1451,  -782,  1048,  1107,  1248,  -782,  1249,  -782,  -782,  1041,
    -782,  -782,   481,  -782,   483,   485,    15,  -782,    71,  -782,
    2247,  1159,  1164,   488,  1112,  -782,  -782,  -782,  -782,  -782,
    1250,   -43,  1125,  1045,  1047,  1049,  1218,  1258,  1051,  1259,
      24,  -782,  -782,  1173,  1207,   490,  -782,  2766,  1150,  -782,
    -782,  2874,  -782,  1323,  -782,  -782,  -782,  -782,  -782,  -782,
     492,  -782,   494,   496,  -782,  1345,  -782,  1346,  1354,  -782,
    1353,  1451,  1355,  1319,    65,  1451,  -782,  -782,  -782,  -782,
    -782,  -782,  1151,  1152,  1153,  1451,  -782,  -782,  -782,  -782,
    1148,  1157,  -782,  1225,  -782,   259,  -782,  -782,   520,  2269,
     522,  1160,  1161,  1251,  -782,  2290,  1168,  1170,  1171,  2311,
    1367,  1378,  1381,  1367,  -782,  1380,   441,  -782,  1382,  1451,
    1451,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   524,   528,
    1175,   535,  1178,  -782,  -782,  1179,  2348,  2376,  -782,  1389,
    1390,  1367,  1367,  -782,  -782,  -782,   725,  -782,    72,  -782,
    1183,   568,   570,   183,  -782,  -782,    21,  1288,   161,   -35,
    1367,  -782,  -782,  1329,  -782,  -782,   216,  -782,  -782,  -782,
     208,   228,   572,   183,   183,  -782,  -782,  -782,  -782,  -782,
     -20,  -782,  -782,  -782,   -16,  -782,  -782,  -782,  -782,  -782,
     183
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -782,  1338,   -53,  -426,  -782,  -782,  -782,  -782,   923,  1208,
    -782,  -134,  -271,  -782,  -782,  -780,  -782,  -782,  -506,  -782,
     606,  -608,  -782,  -679,  -782,  -782,  1162,  -138,  -121,  1163,
    -242,   953,  -782,  -782,   376,  -782,  -782,  -782,   767,   908,
     281,    55,  -782,  -782,  -782,  1333,  1100,  -782,  -782,  -558,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -402,   439,  1364,
    1232,  -782,   958,  -782,   537,  -315,  -782,  -782,  -782,  -782,
    -782,   342,  -782,  -782,  -782,   564,  -782,   742,   731,  -750,
    -752,  -630,  -781,  -661,  -782,  -782,   273,  -206,    63,  -410,
    -400,   992,  -565,  -782,  -782,  -782,  1325
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -438
static const yytype_int16 yytable[] =
{
     139,   463,   665,   676,   783,   525,   670,   241,   631,   399,
    -278,   145,   242,   537,   538,   145,  -280,  -279,   552,   543,
     215,   545,   511,   736,   785,   243,   858,    49,   967,   968,
     969,   970,    80,   957,   864,   881,   734,   182,   183,   456,
     596,  1060,   246,    92,   493,   434,   244,    57,   188,   189,
     190,   154,    44,   307,   192,   586,   310,   236,   586,   826,
     328,   593,  1076,   595,   313,   359,  1078,   309,   177,   611,
     316,   396,   238,    10,   424,   790,    33,   360,   971,    34,
     429,    47,   431,   245,   165,   214,   435,   302,   155,  1054,
    1046,   215,    54,   446,   247,   156,   397,   464,    59,   754,
     859,   860,  -163,   245,   178,   157,   248,    45,   866,   436,
     764,    58,  1077,   506,   768,   249,  1079,   384,   791,   314,
     958,   787,    93,   514,   992,   314,   325,   326,   236,  -437,
     447,   250,   587,    60,   322,   702,    61,  1061,   323,   251,
    1047,    81,   329,   333,   335,   336,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   979,   519,   952,
      73,   158,   953,   354,   355,   356,   357,   358,    50,    10,
     494,   367,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   465,   584,   178,   139,   720,   455,   239,
     703,   361,   704,   166,   675,   913,   303,   159,  1048,   446,
    1055,  1053,   842,   993,   843,   867,  1049,   846,   469,   470,
     885,    63,   512,   851,   553,   554,   555,   556,  -278,   146,
     327,   521,   818,   146,  -280,  -279,   735,   240,   496,   972,
     973,   974,   446,   387,    62,   975,   447,   505,    66,   994,
     748,   922,   750,   751,   169,   437,  -437,    70,   507,   388,
     569,  1047,  1043,    74,   452,   559,   570,   522,  1057,   980,
     923,   773,   634,   924,  1067,   925,   926,    75,    35,   447,
    1063,  1064,    36,   471,   472,   632,   927,    76,   638,    65,
     438,   478,   928,   929,  1071,  1065,   902,   909,   789,   904,
     560,   905,   571,   882,  1080,   572,    77,   774,  1058,   563,
     523,    67,   327,    71,   635,   930,    72,   170,   573,  1048,
     497,   498,    37,   500,  1059,   574,   389,  1049,   214,   307,
      79,   883,  1066,    95,    96,    97,    98,    99,   100,    82,
     256,   667,   448,   449,   564,   575,   524,   101,   102,  1068,
     775,   931,   257,    88,   671,   103,   104,    68,   950,   513,
      38,  -195,  1069,   171,   105,   932,    82,   770,   307,  1072,
      83,   933,    39,    40,  1070,   614,   668,   143,   617,   618,
     619,   576,  1073,  1021,   106,    41,   776,   144,   107,   672,
      69,   108,   109,   550,  1074,   173,   680,    83,  -195,    90,
     646,   919,   771,   681,    84,   110,   142,   934,    85,   111,
      91,  1041,  1042,    94,    86,   647,   920,   229,   230,   231,
     232,   233,   234,   235,   172,   597,   152,   598,   392,   245,
    1062,   601,   602,   112,   603,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   608,   609,   610,
      95,    96,    97,    98,    99,   100,   689,    48,   616,   185,
     186,    55,   113,   160,   101,   102,   589,   590,   628,   161,
     363,   364,   103,   365,   162,   633,   366,   163,   114,  1002,
    1003,   115,   116,   164,   117,   644,   645,   648,   649,   530,
     531,   872,   534,   535,   536,  1023,  1024,   330,   539,   540,
     541,   106,   167,   544,   168,   107,   656,   173,   108,   109,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   693,
     175,   138,   695,   231,   232,   233,   234,   235,   700,   179,
     413,   414,   415,   416,   180,   417,   181,   706,   419,   420,
     421,   712,   713,   650,   651,   425,   426,   427,    49,   331,
     430,   187,   722,    95,    96,    97,    98,    99,   100,   113,
     652,   651,   662,   663,   686,   687,   194,   101,   102,   761,
     663,   737,   766,   663,   195,   103,   740,   798,   799,   832,
     833,   837,   663,   196,   368,   197,   369,   228,   229,   230,
     231,   232,   233,   234,   235,   332,   845,   663,   848,   663,
     852,   687,   861,   862,   106,   863,   862,   254,   107,   865,
     833,   108,   109,   886,   887,   777,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   888,   887,   138,   258,
     889,   887,   891,   862,   801,   893,   894,   802,   895,   896,
     900,   663,   901,   663,   813,   903,   663,   907,   663,   914,
     894,   915,   862,   815,   817,   916,   862,   918,   896,   198,
     823,   824,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   113,   947,   663,   948,   663,   949,   663,   836,
     954,   833,   978,   799,   982,   663,   983,   894,   984,   896,
     370,   216,   217,   218,   219,   220,   221,   222,   259,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,  1004,  1005,  1007,  1008,  1028,  1029,  1030,  1031,
     199,   870,   871,   200,   874,   201,   876,  1033,  1029,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,  1044,
    1045,   371,   515,   516,    95,    96,    97,    98,    99,   100,
    1051,  1029,  1052,  1029,  1075,  1029,   821,   822,   101,   102,
     626,   627,   202,   203,   204,   205,   103,   474,   206,   207,
     910,   208,   209,   210,    95,    96,    97,    98,    99,   100,
     211,   212,   213,   260,   261,   262,   263,   297,   101,   102,
     298,   299,   300,   301,   700,   106,   103,   337,   304,   107,
     937,   305,   108,   109,   306,   311,   312,   941,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   318,
      10,   383,   349,   350,   351,   106,   352,   362,   386,   107,
     391,   393,   108,   109,   216,   217,   218,   219,   220,   221,
     222,   400,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   401,   403,    95,    96,    97,
      98,    99,   100,   404,   405,   406,   407,   408,   409,   410,
     422,   101,   102,   113,   439,   411,   418,   428,   989,   103,
     432,   433,   995,   440,   475,   441,   442,   443,   444,   445,
     453,   458,   999,   460,   462,   467,   473,   481,   499,   502,
     503,   504,   235,   113,   508,   509,   518,   517,   106,   510,
     520,   527,   107,   532,   526,   108,   109,   546,   547,   549,
     551,   562,   565,   566,   548,   191,  1026,  1027,   561,   567,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     477,   568,   138,   581,   582,   585,   591,   605,   586,   612,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     620,   621,   138,   624,   629,   630,   113,   216,   217,   218,
     219,   220,   221,   222,   640,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   639,   641,
     642,   643,    95,    96,    97,    98,    99,   100,   653,   654,
     655,   657,   658,   659,   660,   661,   101,   102,   664,   666,
     669,   673,   674,   677,   103,   679,   709,   710,   678,   684,
     682,   683,   688,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   106,   690,   138,   685,   107,   696,   697,
     108,   109,   698,   726,   727,   729,   733,   743,   745,   714,
     715,   719,   721,   746,   747,   723,   724,   725,   730,    95,
      96,    97,    98,    99,   100,   749,   731,   755,   732,   756,
     738,   794,   757,   101,   102,   741,   742,   752,   758,   759,
     760,   103,    95,    96,    97,    98,    99,   100,   762,   763,
     767,   765,   769,   781,   793,   778,   101,   102,   796,   819,
     797,   825,   828,   779,   103,   780,   784,   830,   814,   835,
     106,   113,   834,   838,   107,   839,   840,   108,   109,   841,
     844,   847,   850,   854,   849,   853,   855,   856,   877,   890,
     892,   897,   906,   106,   899,   911,    10,   107,   694,   917,
     108,   109,   219,   220,   221,   222,   912,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     795,   699,   921,   587,   936,   938,   940,   942,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   113,   943,
     138,   944,   945,   946,   955,   956,   960,   959,   961,   963,
     962,   964,   965,   966,   216,   217,   218,   219,   220,   221,
     222,   113,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   217,   218,   219,   220,   221,
     222,   976,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   977,   981,   138,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   985,   986,
     138,    95,    96,    97,    98,    99,   100,   987,   988,   991,
     990,   862,   996,   997,   998,   101,   102,  1001,  1000,  1011,
    1017,  1009,  1010,   103,    95,    96,    97,    98,    99,   100,
    1013,  1019,  1014,  1015,  1020,  1022,  1032,  1025,   101,   102,
    1034,  1035,  1039,  1040,  1050,  1056,   103,  1054,   153,   869,
     324,   385,   106,   607,   580,   739,   107,   176,   395,   108,
     109,   457,    89,   317,   935,   623,   908,   772,   788,   184,
     542,     0,   594,     0,     0,   106,     0,     0,     0,   107,
     873,     0,   108,   109,   218,   219,   220,   221,   222,     0,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   875,    95,    96,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,     0,   466,   101,   102,
       0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
     113,   216,   217,   218,   219,   220,   221,   222,     0,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,     0,   113,     0,   106,     0,     0,     0,   107,
       0,     0,   108,   109,   216,   217,   218,   219,   220,   221,
     222,     0,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,     0,   138,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,     0,   138,   113,   216,   217,   218,   219,   220,   221,
     222,     0,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   216,   217,   218,   219,   220,
     221,   222,     0,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,     0,   138,   216,   217,   218,   219,   220,   221,   222,
       0,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   479,   216,   217,   218,   219,   220,
     221,   222,     0,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     0,     0,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   480,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   216,   217,   218,   219,   220,   221,   222,     0,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   216,   217,   218,   219,   220,   221,   222,     0,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   490,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   707,
       0,   216,   217,   218,   219,   220,   221,   222,   491,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   216,   217,   218,   219,   220,   221,   222,     0,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   216,   217,   218,   219,   220,   221,   222,
       0,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,     0,     0,   492,   216,   217,   218,
     219,   220,   221,   222,     0,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   717,   216,
     217,   218,   219,   220,   221,   222,     0,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
       0,     0,   708,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   353,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   216,   217,   218,
     219,   220,   221,   222,   476,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   216,   217,
     218,   219,   220,   221,   222,     0,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,     0,
       0,     0,     0,     0,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   482,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   216,   217,   218,
     219,   220,   221,   222,   483,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   216,   217,
     218,   219,   220,   221,   222,   484,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,     0,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   485,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,     0,   216,   217,   218,   219,   220,   221,
     222,   486,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   216,   217,   218,   219,   220,
     221,   222,     0,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     0,     0,   487,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,   217,   218,   219,   220,   221,   222,   488,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   216,   217,   218,   219,   220,   221,   222,
     489,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,     0,     0,     0,     0,     0,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   711,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   216,   217,   218,   219,   220,   221,   222,   716,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   216,   217,   218,   219,   220,   221,   222,
     718,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,     0,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   753,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,     0,   216,
     217,   218,   219,   220,   221,   222,   803,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     216,   217,   218,   219,   220,   221,   222,   827,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   216,   217,   218,   219,   220,   221,   222,     0,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,     0,     0,   857,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   878,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,     0,
       0,     0,     0,     0,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   879,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   216,   217,   218,
     219,   220,   221,   222,   880,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   216,   217,
     218,   219,   220,   221,   222,   898,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   951,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     804,   805,     0,     0,     0,   806,     0,   807,     0,     0,
       0,  1006,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   808,   809,
       0,   810,  1012,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   216,   217,   218,   219,
     220,   221,   222,  1016,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   216,   217,   218,
     219,   220,   221,   222,     0,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,     0,     0,
    1036,     0,     1,     0,     0,     2,     0,     0,     0,     0,
       0,     0,   264,   265,     0,   266,     0,   267,   268,     0,
       0,     0,     0,   811,   812,     3,     0,     0,  1037,   269,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,     0,     4,     5,     0,   270,
     271,   272,   273,     0,     0,   274,     0,     0,     0,   275,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   276,     0,     0,     0,     0,     0,
       0,   277,     0,     6,     0,   278,     0,     0,     0,     0,
       0,   279,     0,   280,   281,   282,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   283,     0,     0,     0,
       0,     7,     0,   468,     0,     0,     0,     8,     0,     0,
       0,   284,   285,     0,   286,   287,     9,    10,     0,     0,
     288,   289,     0,     0,   600,     0,   290,   291,     0,    11,
       0,   292,    12,     0,     0,     0,   293,    13,   294,     0,
       0,     0,   295,   216,   217,   218,   219,   220,   221,   222,
       0,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   216,   217,   218,   219,   220,   221,
     222,     0,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   216,   217,   218,   219,   220,
     221,   222,     0,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   216,   217,   218,   219,
     220,   221,   222,     0,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,     0,   604,
     215,     0,     0,     0,   790,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   599,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,     0,     0,
       0,     0,     0,     0,     0,   705,     0,   236,     0,     0,
     216,   217,   218,   219,   220,   221,   222,   791,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,     0,   216,   217,   218,   219,   220,   221,   222,   501,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,     0,   216,   217,   218,   219,   220,   221,
     222,   615,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,  -438,  -438,  -438,  -438,     0,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235
};

static const yytype_int16 yycheck[] =
{
      53,   316,   560,   568,   683,   405,   564,   145,   514,   251,
       3,     3,   146,   423,   424,     3,     3,     3,     3,   429,
       3,   431,    20,   631,   685,   146,   778,     8,     4,     5,
       6,     7,     3,    76,   784,   815,    20,    90,    91,   310,
     466,    76,    57,     3,     6,    18,   156,     3,   101,   102,
     103,    33,   111,   183,   107,   136,   177,    40,   136,   738,
     194,   463,    82,   465,   156,     6,    82,   176,    96,   495,
     156,   121,    96,   157,   280,    38,   166,    18,    54,   166,
     286,   166,   288,   213,     3,   138,    59,     3,    70,    68,
      18,     3,   166,   110,   109,    77,   146,   181,     0,   657,
     779,   780,   117,   213,   213,    87,   121,   166,    37,    82,
     668,    67,   132,   384,   672,   130,   132,   238,    81,   211,
     163,   686,    82,   394,    59,   211,    90,    91,    40,    40,
     147,   146,   213,   209,   187,   213,     3,   172,   191,   154,
      68,   112,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   937,   400,   911,
       3,   143,   912,   216,   217,   218,   219,   220,   149,   157,
     132,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   317,   455,   213,   239,   613,   309,   213,
     592,   132,   594,   112,   211,   856,   112,   179,   126,   110,
     179,    18,   760,   138,   762,   134,   134,   765,    90,    91,
     818,   112,   210,   771,   199,   200,   201,   202,   211,   211,
     184,    59,   728,   211,   211,   211,   210,   210,   362,   205,
     206,   207,   110,    94,     3,   211,   147,   371,     3,   174,
     650,    18,   652,   653,     3,   176,   157,   161,   386,   110,
      53,    68,  1033,    96,   307,   176,    59,    95,    97,   938,
      37,    59,   134,    40,    56,    42,    43,   110,    67,   147,
    1051,  1052,    71,   326,   327,   517,    53,   120,   520,     3,
     211,   334,    59,    60,    56,    69,   844,   852,   688,   847,
     211,   849,    95,   185,  1075,    98,   139,    95,   137,   176,
     138,    66,   184,   111,   176,    82,   166,    66,   111,   126,
     363,   364,   111,   366,   153,   118,   177,   134,   371,   183,
       3,   213,   106,     3,     4,     5,     6,     7,     8,    72,
      53,   176,   210,   211,   211,   138,   174,    17,    18,   131,
     138,   118,    65,     3,   176,    25,    26,   112,   906,   213,
     149,   176,   144,   112,    34,   132,    72,   176,   183,   131,
     103,   138,   161,   162,   156,   499,   211,   110,   502,   503,
     504,   174,   144,  1003,    54,   174,   174,   120,    58,   211,
      38,    61,    62,   436,   156,   210,   111,   103,   213,     9,
     173,     5,   211,   118,   110,    75,     3,   174,   114,    79,
      20,  1031,  1032,   213,   120,   188,    20,    24,    25,    26,
      27,    28,    29,    30,    72,   468,     3,   470,   212,   213,
    1050,   474,   475,   103,   477,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   490,   491,   492,
       3,     4,     5,     6,     7,     8,   580,     8,   501,   210,
     211,    12,   132,   210,    17,    18,   212,   213,   511,   189,
      13,    14,    25,    16,     3,   518,    19,    40,   148,   210,
     211,   151,   152,   134,   154,   212,   213,    63,    64,   416,
     417,   796,   419,   420,   421,    44,    45,    50,   425,   426,
     427,    54,   189,   430,     3,    58,   549,   210,    61,    62,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   582,
       3,   211,   585,    26,    27,    28,    29,    30,   591,   189,
     267,   268,   269,   270,     3,   272,     3,   600,   275,   276,
     277,   604,   605,   212,   213,   282,   283,   284,     8,   122,
     287,     9,   615,     3,     4,     5,     6,     7,     8,   132,
     212,   213,   212,   213,   212,   213,   211,    17,    18,   212,
     213,   634,   212,   213,   211,    25,   639,   212,   213,   212,
     213,   212,   213,   211,    34,   211,    36,    23,    24,    25,
      26,    27,    28,    29,    30,   168,   212,   213,   212,   213,
     212,   213,   212,   213,    54,   212,   213,    40,    58,   212,
     213,    61,    62,   212,   213,   678,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   212,   213,   211,    53,
     212,   213,   212,   213,   707,   212,   213,   710,   212,   213,
     212,   213,   212,   213,   717,   212,   213,   212,   213,   212,
     213,   212,   213,   726,   727,   212,   213,   212,   213,   211,
     733,   734,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   132,   212,   213,   212,   213,   212,   213,   752,
     212,   213,   212,   213,   212,   213,   212,   213,   212,   213,
     150,    10,    11,    12,    13,    14,    15,    16,    53,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   212,   213,   212,   213,   212,   213,   210,   211,
     211,   794,   795,   211,   797,   211,   799,   212,   213,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,    44,
      45,   211,   396,   397,     3,     4,     5,     6,     7,     8,
     212,   213,   212,   213,   212,   213,   731,   732,    17,    18,
     509,   510,   211,   211,   211,   211,    25,    96,   211,   211,
     853,   211,   211,   211,     3,     4,     5,     6,     7,     8,
     211,   211,   211,    53,    53,    53,     3,     3,    17,    18,
     134,   189,     3,   134,   877,    54,    25,    26,   189,    58,
     883,     3,    61,    62,    26,     3,     3,   890,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
     157,     3,   212,   212,   212,    54,   212,   211,     3,    58,
     212,     3,    61,    62,    10,    11,    12,    13,    14,    15,
      16,   117,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   133,     3,     3,     4,     5,
       6,     7,     8,     3,     3,     3,     3,     3,     3,     3,
      49,    17,    18,   132,     3,   211,   211,   211,   961,    25,
     211,   211,   965,     3,   213,   134,     3,   134,   189,     3,
     135,     3,   975,     3,   181,   212,   212,   212,   211,   211,
     211,   211,    30,   132,   118,   118,   134,   117,    54,   118,
     117,     5,    58,     4,   160,    61,    62,     5,     5,   211,
     178,     3,     3,     3,   132,   184,  1009,  1010,   134,   134,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
      96,     3,   211,    48,   123,    20,   211,   116,   136,   212,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     212,   100,   211,    99,     3,     3,   132,    10,    11,    12,
      13,    14,    15,    16,   118,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   211,   118,
     211,     3,     3,     4,     5,     6,     7,     8,   212,   212,
      59,   211,   211,   211,   211,   211,    17,    18,   178,     3,
     178,   134,     3,     3,    25,   118,   212,   213,   211,   118,
     211,   211,     3,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,    54,     3,   211,   211,    58,   118,     3,
      61,    62,     3,    48,   105,   117,    20,     3,     5,   212,
     212,   212,   212,   156,     4,   212,   212,   212,   211,     3,
       4,     5,     6,     7,     8,     4,   211,     3,   211,     3,
     211,   124,     3,    17,    18,   211,   211,   211,     3,     3,
     211,    25,     3,     4,     5,     6,     7,     8,   211,   178,
     178,   211,     3,     3,   213,   211,    17,    18,   172,     3,
      20,     3,     3,   211,    25,   211,   211,     3,   212,     4,
      54,   132,   212,   212,    58,   212,   212,    61,    62,   213,
     211,   211,   178,   118,   211,   211,   118,   211,   211,    20,
      18,     3,   211,    54,     3,   211,   157,    58,    82,     3,
      61,    62,    13,    14,    15,    16,   211,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     213,    82,     3,   213,   145,   114,     3,   179,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   132,   142,
     211,     3,     3,   212,   142,     5,   211,   132,   211,    41,
     211,     3,   211,     4,    10,    11,    12,    13,    14,    15,
      16,   132,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    11,    12,    13,    14,    15,
      16,   118,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   118,     3,   211,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,     3,     3,
     211,     3,     4,     5,     6,     7,     8,     3,     5,    40,
       5,   213,   211,   211,   211,    17,    18,   142,   211,   118,
       3,   211,   211,    25,     3,     4,     5,     6,     7,     8,
     212,     3,   212,   212,     3,     5,   211,     5,    17,    18,
     212,   212,     3,     3,   211,   107,    25,    68,    60,   793,
     192,   239,    54,   480,   451,   638,    58,    74,   245,    61,
      62,   311,    48,   181,   877,   507,   852,   675,   687,    94,
     428,    -1,   464,    -1,    -1,    54,    -1,    -1,    -1,    58,
      82,    -1,    61,    62,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    82,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,
     132,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   132,    -1,    54,    -1,    -1,    -1,    58,
      -1,    -1,    61,    62,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,    -1,    -1,   211,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
      -1,    -1,   211,   132,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
      -1,    -1,   211,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   213,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   213,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    10,    11,    12,    13,    14,    15,    16,   213,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,   213,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   213,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   212,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   212,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   212,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   212,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   212,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   212,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    10,    11,    12,    13,    14,    15,
      16,   212,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,   212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   212,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     212,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   212,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   212,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     212,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   212,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    10,
      11,    12,    13,    14,    15,    16,   212,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   212,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   212,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   212,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   212,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   212,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,
      -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
      -1,   104,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   212,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
     212,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    49,    -1,    51,    52,    -1,
      -1,    -1,    -1,   186,   187,    55,    -1,    -1,   212,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   184,    -1,    -1,    -1,    76,    77,    -1,    83,
      84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   113,    -1,   119,    -1,    -1,    -1,    -1,
      -1,   125,    -1,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,
      -1,   141,    -1,   167,    -1,    -1,    -1,   147,    -1,    -1,
      -1,   155,   156,    -1,   158,   159,   156,   157,    -1,    -1,
     164,   165,    -1,    -1,   167,    -1,   170,   171,    -1,   169,
      -1,   175,   172,    -1,    -1,    -1,   180,   177,   182,    -1,
      -1,    -1,   186,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    96,
       3,    -1,    -1,    -1,    38,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    90,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    40,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    81,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    10,    11,    12,    13,    14,    15,    16,    39,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    10,    11,    12,    13,    14,    15,
      16,    39,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    35,    55,    76,    77,   113,   141,   147,   156,
     157,   169,   172,   177,   215,   224,   225,   257,   261,   262,
     265,   266,   267,   268,   269,   270,   280,   281,   284,   286,
     287,   288,   308,   166,   166,    67,    71,   111,   149,   161,
     162,   174,   290,   258,   111,   166,   272,   166,   272,     8,
     149,   309,   310,   238,   166,   272,   282,     3,    67,     0,
     209,     3,     3,   112,   285,     3,     3,    66,   112,   285,
     161,   111,   166,     3,    96,   110,   120,   139,   259,     3,
       3,   112,    72,   103,   110,   114,   120,   273,     3,   273,
       9,    20,     3,    82,   213,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    34,    54,    58,    61,    62,
      75,    79,   103,   132,   148,   151,   152,   154,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   211,   216,
     239,   240,     3,   110,   120,     3,   211,   242,   243,   244,
     246,   256,     3,   215,    33,    70,    77,    87,   143,   179,
     210,   189,     3,    40,   134,     3,   112,   189,     3,     3,
      66,   112,   285,   210,   260,     3,   259,    96,   213,   189,
       3,     3,   216,   216,   310,   210,   211,     9,   216,   216,
     216,   184,   216,   223,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   216,     3,    10,    11,    12,    13,
      14,    15,    16,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    40,   241,    96,   213,
     210,   241,   225,   242,   156,   213,    57,   109,   121,   130,
     146,   154,   247,   249,    40,   245,    53,    65,    53,    53,
      53,    53,    53,     3,    46,    47,    49,    51,    52,    63,
      83,    84,    85,    86,    89,    93,   108,   115,   119,   125,
     127,   128,   129,   140,   155,   156,   158,   159,   164,   165,
     170,   171,   175,   180,   182,   186,   304,     3,   134,   189,
       3,   134,     3,   112,   189,     3,    26,   183,   226,   176,
     242,     3,     3,   156,   211,   274,   156,   274,     3,   216,
     217,   218,   216,   216,   223,    90,    91,   184,   225,   216,
      50,   122,   168,   216,   221,   216,   216,    26,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   212,
     212,   212,   212,   212,   216,   216,   216,   216,   216,     6,
      18,   132,   211,    13,    14,    16,    19,   216,    34,    36,
     150,   211,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,     3,   242,   240,     3,    94,   110,   177,
     253,   212,   212,     3,   283,   243,   121,   146,   250,   244,
     117,   133,   248,     3,     3,     3,     3,     3,     3,     3,
       3,   211,   300,   300,   300,   300,   300,   300,   211,   300,
     300,   300,    49,   301,   301,   300,   300,   300,   211,   301,
     300,   301,   211,   211,    18,    59,    82,   176,   211,     3,
       3,   134,     3,   134,   189,     3,   110,   147,   210,   211,
     306,   307,   216,   135,   232,   242,   226,   260,     3,   279,
       3,   275,   181,   279,   181,   225,   213,   212,   167,    90,
      91,   216,   216,   212,    96,   213,   212,    96,   216,   213,
     213,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     213,   213,   213,     6,   132,   219,   225,   216,   216,   211,
     216,    39,   211,   211,   211,   225,   226,   241,   118,   118,
     118,    20,   210,   213,   226,   248,   248,   117,   134,   244,
     117,    59,    95,   138,   174,   304,   160,     5,   302,   303,
     302,   302,     4,   305,   302,   302,   302,   303,   303,   302,
     302,   302,   305,   303,   302,   303,     5,     5,   132,   211,
     216,   178,     3,   199,   200,   201,   202,   263,   264,   176,
     211,   134,     3,   176,   211,     3,     3,   134,     3,    53,
      59,    95,    98,   111,   118,   138,   174,   291,   292,   298,
     245,    48,   123,   235,   226,    20,   136,   213,   271,   212,
     213,   211,   276,   271,   276,   271,   217,   216,   216,    90,
     167,   216,   216,   216,    96,   116,   222,   222,   216,   216,
     216,   217,   212,   220,   225,    39,   216,   225,   225,   225,
     212,   100,   227,   253,    99,   254,   254,   254,   216,     3,
       3,   232,   244,   216,   134,   176,   251,   252,   244,   211,
     118,   118,   211,     3,   212,   213,   173,   188,    63,    64,
     212,   213,   212,   212,   212,    59,   216,   211,   211,   211,
     211,   211,   212,   213,   178,   263,     3,   176,   211,   178,
     263,   176,   211,   134,     3,   211,   306,     3,   211,   118,
     111,   118,   211,   211,   118,   211,   212,   213,     3,   225,
       3,   233,   234,   216,    82,   216,   118,     3,     3,    82,
     216,   278,   213,   271,   271,    90,   216,    99,   212,   212,
     213,   212,   216,   216,   212,   212,   212,   213,   212,   212,
     217,   212,   216,   212,   212,   212,    48,   105,   231,   117,
     211,   211,   211,    20,    20,   210,   235,   216,   211,   252,
     216,   211,   211,     3,   297,     5,   156,     4,   303,     4,
     303,   303,   211,   212,   263,     3,     3,     3,     3,     3,
     211,   212,   211,   178,   263,   211,   212,   178,   263,     3,
     176,   211,   291,    59,    95,   138,   174,   216,   211,   211,
     211,     3,   237,   237,   211,   297,   289,   306,   292,   304,
      38,    81,   229,   213,   124,   213,   172,    20,   212,   213,
     277,   216,   216,   212,    73,    74,    78,    80,   101,   102,
     104,   186,   187,   216,   212,   216,   228,   216,   232,     3,
     255,   255,   255,   216,   216,     3,   237,   212,     3,   294,
       3,   293,   212,   213,   212,     4,   216,   212,   212,   212,
     212,   213,   263,   263,   211,   212,   263,   211,   212,   211,
     178,   263,   212,   211,   118,   118,   211,   212,   294,   237,
     237,   212,   213,   212,   293,   212,    37,   134,   299,   234,
     216,   216,   279,    82,   216,    82,   216,   211,   212,   212,
     212,   229,   185,   213,   230,   235,   212,   213,   212,   212,
      20,   212,    18,   212,   213,   212,   213,     3,   212,     3,
     212,   212,   263,   212,   263,   263,   211,   212,   289,   306,
     216,   211,   211,   297,   212,   212,   212,     3,   212,     5,
      20,     3,    18,    37,    40,    42,    43,    53,    59,    60,
      82,   118,   132,   138,   174,   278,   145,   216,   114,   236,
       3,   216,   179,   142,     3,     3,   212,   212,   212,   212,
     263,   212,   294,   293,   212,   142,     5,    76,   163,   132,
     211,   211,   211,    41,     3,   211,     4,     4,     5,     6,
       7,    54,   205,   206,   207,   211,   118,   118,   212,   229,
     237,     3,   212,   212,   212,     3,     3,     3,     5,   216,
       5,    40,    59,   138,   174,   216,   211,   211,   211,   216,
     211,   142,   210,   211,   212,   213,   212,   212,   213,   211,
     211,   118,   212,   212,   212,   212,   212,     3,   295,     3,
       3,   295,     5,    44,    45,     5,   216,   216,   212,   213,
     210,   211,   211,   212,   212,   212,   212,   212,   296,     3,
       3,   295,   295,   296,    44,    45,    18,    68,   126,   134,
     211,   212,   212,    18,    68,   179,   107,    97,   137,   153,
      76,   172,   295,   296,   296,    69,   106,    56,   131,   144,
     156,    56,   131,   144,   156,   212,    82,   132,    82,   132,
     296
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
#line 317 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 323 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 324 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 326 "parser/evoparser.y"
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
#line 344 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 352 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 360 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 366 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 373 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 374 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 375 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 376 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 377 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 378 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 379 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 380 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 381 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 382 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 383 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 384 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 385 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 386 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 387 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 388 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 389 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 391 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 396 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 397 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 398 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 399 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 402 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 403 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 404 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 405 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 406 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 409 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 410 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 413 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 414 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 43:
#line 417 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 421 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 46:
#line 421 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 47:
#line 422 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 48:
#line 422 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 49:
#line 423 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 424 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 425 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 429 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 433 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 434 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 435 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 436 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 437 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 438 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 440 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 441 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 442 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 443 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 444 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 445 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 446 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 447 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 448 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 449 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 450 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 451 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 452 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 453 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 460 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 467 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 474 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 480 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 77:
#line 481 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 78:
#line 482 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 79:
#line 485 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 80:
#line 486 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 81:
#line 489 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 82:
#line 490 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 83:
#line 491 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 84:
#line 492 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 85:
#line 493 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 86:
#line 494 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 87:
#line 495 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 88:
#line 496 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 89:
#line 497 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 90:
#line 501 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 91:
#line 503 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 92:
#line 505 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 93:
#line 507 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 94:
#line 511 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 95:
#line 519 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 96:
#line 529 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 97:
#line 530 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 98:
#line 533 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 99:
#line 534 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 100:
#line 538 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 546 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 554 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 565 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 104:
#line 574 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 105:
#line 579 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (11)].intval), (yyvsp[(3) - (11)].intval), (yyvsp[(5) - (11)].intval));
        g_sel.distinct = ((yyvsp[(2) - (11)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (11)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 107:
#line 590 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 109:
#line 592 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 110:
#line 595 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 111:
#line 602 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 112:
#line 610 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 611 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 114:
#line 612 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 115:
#line 615 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 616 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 118:
#line 620 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 123:
#line 632 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 124:
#line 639 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 125:
#line 640 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 126:
#line 641 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 127:
#line 642 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 129:
#line 646 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 130:
#line 649 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 131:
#line 650 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 132:
#line 653 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 133:
#line 654 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 134:
#line 655 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 135:
#line 656 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 136:
#line 657 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 137:
#line 658 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 138:
#line 659 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 139:
#line 660 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 140:
#line 661 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 141:
#line 664 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 142:
#line 665 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 143:
#line 667 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 144:
#line 675 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 145:
#line 680 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 146:
#line 681 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 147:
#line 682 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 148:
#line 685 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 149:
#line 686 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 152:
#line 695 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 153:
#line 700 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 154:
#line 701 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 155:
#line 702 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 158:
#line 711 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 159:
#line 713 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 160:
#line 715 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 161:
#line 717 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 162:
#line 719 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 163:
#line 722 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 164:
#line 723 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 165:
#line 724 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 166:
#line 727 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 167:
#line 728 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 168:
#line 731 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 169:
#line 732 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 170:
#line 735 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 171:
#line 736 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 172:
#line 737 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 175:
#line 744 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 176:
#line 745 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 177:
#line 750 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 178:
#line 752 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 179:
#line 754 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 181:
#line 758 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 182:
#line 759 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 183:
#line 762 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 184:
#line 763 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 185:
#line 766 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 186:
#line 771 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 187:
#line 779 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 188:
#line 786 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 189:
#line 787 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 190:
#line 788 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 191:
#line 789 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 192:
#line 793 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 193:
#line 796 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 194:
#line 797 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 197:
#line 802 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 198:
#line 807 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 199:
#line 814 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 200:
#line 821 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 201:
#line 831 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 202:
#line 838 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 203:
#line 845 "parser/evoparser.y"
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

  case 204:
#line 855 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 205:
#line 863 "parser/evoparser.y"
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

  case 206:
#line 873 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 207:
#line 881 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 208:
#line 890 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 209:
#line 899 "parser/evoparser.y"
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

  case 210:
#line 909 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 211:
#line 917 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 212:
#line 926 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 213:
#line 935 "parser/evoparser.y"
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

  case 214:
#line 945 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 215:
#line 954 "parser/evoparser.y"
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

  case 216:
#line 966 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 217:
#line 971 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 218:
#line 976 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 219:
#line 982 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 220:
#line 989 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 221:
#line 996 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 222:
#line 1003 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 223:
#line 1013 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 224:
#line 1020 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 225:
#line 1029 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 226:
#line 1036 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 227:
#line 1045 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 228:
#line 1052 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 229:
#line 1061 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 230:
#line 1068 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 231:
#line 1074 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 232:
#line 1084 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 233:
#line 1088 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 234:
#line 1094 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 235:
#line 1100 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 236:
#line 1107 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 237:
#line 1113 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 238:
#line 1120 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 239:
#line 1126 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 240:
#line 1132 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 241:
#line 1138 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 242:
#line 1144 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 243:
#line 1150 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 244:
#line 1156 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        AlterTableAddColumn((yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(6) - (7)].strval));
    ;}
    break;

  case 245:
#line 1164 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 246:
#line 1171 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 248:
#line 1179 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 249:
#line 1182 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 250:
#line 1183 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 251:
#line 1184 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 252:
#line 1185 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 253:
#line 1186 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 257:
#line 1193 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 258:
#line 1197 "parser/evoparser.y"
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

  case 259:
#line 1207 "parser/evoparser.y"
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

  case 260:
#line 1219 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 261:
#line 1220 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 262:
#line 1220 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 263:
#line 1223 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 264:
#line 1224 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 265:
#line 1225 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 266:
#line 1226 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 267:
#line 1230 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 268:
#line 1233 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1234 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 270:
#line 1235 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 271:
#line 1236 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 272:
#line 1242 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 273:
#line 1248 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 274:
#line 1253 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 275:
#line 1258 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 276:
#line 1263 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 277:
#line 1270 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 278:
#line 1275 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 279:
#line 1276 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 280:
#line 1277 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 281:
#line 1282 "parser/evoparser.y"
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

  case 282:
#line 1293 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s", (yyvsp[(1) - (5)].strval));
            YYERROR;
        }
        emit("ASSIGN2 %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval));
        free((yyvsp[(1) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 283:
#line 1304 "parser/evoparser.y"
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

  case 284:
#line 1315 "parser/evoparser.y"
    {
        if ((yyvsp[(6) - (7)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s.$s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval));
            YYERROR;
        }
        emit("ASSIGN4 %s.%s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval));
        free((yyvsp[(3) - (7)].strval));
        free((yyvsp[(5) - (7)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 285:
#line 1328 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 286:
#line 1332 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 287:
#line 1333 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 288:
#line 1336 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 289:
#line 1337 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 290:
#line 1341 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 291:
#line 1346 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 292:
#line 1348 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 293:
#line 1350 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 294:
#line 1352 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 295:
#line 1354 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 296:
#line 1358 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 297:
#line 1362 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 298:
#line 1363 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 299:
#line 1368 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 300:
#line 1378 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 301:
#line 1387 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 303:
#line 1391 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 304:
#line 1392 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 305:
#line 1393 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 306:
#line 1394 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 307:
#line 1399 "parser/evoparser.y"
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

  case 308:
#line 1413 "parser/evoparser.y"
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

  case 309:
#line 1427 "parser/evoparser.y"
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

  case 310:
#line 1441 "parser/evoparser.y"
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

  case 311:
#line 1453 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 312:
#line 1454 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 313:
#line 1455 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 314:
#line 1458 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 315:
#line 1459 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 316:
#line 1462 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 317:
#line 1463 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 318:
#line 1464 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 319:
#line 1465 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 320:
#line 1466 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 321:
#line 1467 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 322:
#line 1468 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 323:
#line 1469 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 324:
#line 1471 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 325:
#line 1473 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 326:
#line 1475 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 327:
#line 1477 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 328:
#line 1479 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 329:
#line 1481 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 330:
#line 1484 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 331:
#line 1485 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 332:
#line 1488 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 333:
#line 1489 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 334:
#line 1492 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 335:
#line 1493 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 337:
#line 1497 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 338:
#line 1498 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 339:
#line 1499 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 340:
#line 1500 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 341:
#line 1501 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 342:
#line 1502 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 343:
#line 1503 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 344:
#line 1504 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 345:
#line 1505 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 346:
#line 1506 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 347:
#line 1507 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 348:
#line 1508 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 349:
#line 1509 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 350:
#line 1510 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 351:
#line 1511 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 352:
#line 1512 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 353:
#line 1513 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 354:
#line 1516 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 355:
#line 1517 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 356:
#line 1520 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 357:
#line 1522 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 358:
#line 1530 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 359:
#line 1531 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 361:
#line 1533 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 362:
#line 1534 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 363:
#line 1535 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 364:
#line 1536 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 365:
#line 1537 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 366:
#line 1538 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 367:
#line 1539 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 368:
#line 1540 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 369:
#line 1541 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 370:
#line 1548 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 371:
#line 1549 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 372:
#line 1550 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 373:
#line 1551 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 374:
#line 1552 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 375:
#line 1553 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 376:
#line 1554 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 377:
#line 1555 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 378:
#line 1556 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 379:
#line 1557 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 380:
#line 1558 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 381:
#line 1559 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 382:
#line 1560 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 383:
#line 1561 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 384:
#line 1562 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 385:
#line 1563 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 386:
#line 1564 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 387:
#line 1565 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 388:
#line 1566 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 389:
#line 1567 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 390:
#line 1568 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 391:
#line 1571 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 392:
#line 1572 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 393:
#line 1573 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 394:
#line 1576 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 395:
#line 1577 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 396:
#line 1580 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 397:
#line 1581 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 398:
#line 1582 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 400:
#line 1586 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 401:
#line 1587 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 402:
#line 1591 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 403:
#line 1592 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 404:
#line 1593 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 405:
#line 1594 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 406:
#line 1595 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 407:
#line 1596 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 408:
#line 1597 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 409:
#line 1598 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 410:
#line 1599 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 411:
#line 1600 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 412:
#line 1601 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 413:
#line 1602 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 414:
#line 1603 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 415:
#line 1604 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 416:
#line 1605 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 417:
#line 1606 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 418:
#line 1607 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 419:
#line 1608 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 420:
#line 1609 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 421:
#line 1610 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 422:
#line 1611 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 423:
#line 1612 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 424:
#line 1613 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 425:
#line 1614 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 426:
#line 1615 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 427:
#line 1616 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 428:
#line 1617 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 429:
#line 1618 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 430:
#line 1619 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 431:
#line 1620 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 432:
#line 1621 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 433:
#line 1622 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 434:
#line 1625 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 435:
#line 1626 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 436:
#line 1630 "parser/evoparser.y"
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

  case 437:
#line 1642 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 438:
#line 1643 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 439:
#line 1644 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 440:
#line 1648 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 441:
#line 1651 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 442:
#line 1652 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 446:
#line 1656 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 447:
#line 1657 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5700 "parser/evoparser.tab.c"
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


#line 1660 "parser/evoparser.y"

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
