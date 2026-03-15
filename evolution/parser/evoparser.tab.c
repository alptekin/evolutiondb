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
#define YYPURE 0

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
     DATABASE = 311,
     DEFERRABLE = 312,
     DEFERRED = 313,
     DISABLE = 314,
     DOMAIN = 315,
     DELAYED = 316,
     DAY_HOUR = 317,
     DAY_MICROSECOND = 318,
     DISTINCT = 319,
     DELETE = 320,
     DROP = 321,
     DAY_MINUTE = 322,
     DISTINCTROW = 323,
     DAY_SECOND = 324,
     DESC = 325,
     DEFAULT = 326,
     DOUBLE = 327,
     DATETIME = 328,
     DECIMAL = 329,
     DATE = 330,
     ENABLE = 331,
     ESCAPED = 332,
     ENUM = 333,
     END = 334,
     ELSE = 335,
     EXPLAIN = 336,
     FLOAT = 337,
     FORCE = 338,
     FOREIGN = 339,
     FROM = 340,
     FULL = 341,
     FULLTEXT = 342,
     FOR = 343,
     GROUP = 344,
     HOUR_MINUTE = 345,
     HOUR_MICROSECOND = 346,
     HIGH_PRIORITY = 347,
     HOUR_SECOND = 348,
     HAVING = 349,
     IMMEDIATE = 350,
     INITIALLY = 351,
     INTEGER = 352,
     INNER = 353,
     IGNORE = 354,
     INDEX = 355,
     IF = 356,
     INSERT = 357,
     INTO = 358,
     INT = 359,
     INTERVAL = 360,
     JOIN = 361,
     KEY = 362,
     LONGTEXT = 363,
     LOW_PRIORITY = 364,
     LEFT = 365,
     LEADING = 366,
     LIMIT = 367,
     OFFSET = 368,
     LONGBLOB = 369,
     MATCH = 370,
     MEDIUMTEXT = 371,
     MEDIUMBLOB = 372,
     MEDIUMINT = 373,
     NATURAL = 374,
     NO_ACTION = 375,
     NULLX = 376,
     OUTER = 377,
     ON = 378,
     ORDER = 379,
     ONDUPLICATE = 380,
     PARTIAL = 381,
     PRIMARY = 382,
     QUICK = 383,
     REAL = 384,
     RECLAIM = 385,
     REFERENCES = 386,
     RENAME = 387,
     RESTRICT = 388,
     ROLLUP = 389,
     RIGHT = 390,
     REPLACE = 391,
     SQL_SMALL_RESULT = 392,
     SCHEMA = 393,
     SOME = 394,
     SQL_CALC_FOUND_ROWS = 395,
     SQL_BIG_RESULT = 396,
     SIMPLE = 397,
     STRAIGHT_JOIN = 398,
     SMALLINT = 399,
     SET = 400,
     SELECT = 401,
     TINYTEXT = 402,
     TINYINT = 403,
     TO = 404,
     TEMPORARY = 405,
     TEXT = 406,
     TIMESTAMP = 407,
     TABLE = 408,
     THEN = 409,
     TRAILING = 410,
     TRUNCATE = 411,
     TINYBLOB = 412,
     TIME = 413,
     UPDATE = 414,
     UNSIGNED = 415,
     UNIQUE = 416,
     UUID = 417,
     USING = 418,
     USE = 419,
     HASH = 420,
     VALIDATE = 421,
     VARCHAR = 422,
     VALUES = 423,
     VARBINARY = 424,
     WHERE = 425,
     WHEN = 426,
     WITH = 427,
     YEAR = 428,
     YEAR_MONTH = 429,
     ZEROFILL = 430,
     EXISTS = 431,
     FSUBSTRING = 432,
     FTRIM = 433,
     FDATE_ADD = 434,
     FDATE_SUB = 435,
     FCOUNT = 436,
     FSUM = 437,
     FAVG = 438,
     FMIN = 439,
     FMAX = 440,
     FUPPER = 441,
     FLOWER = 442,
     FLENGTH = 443,
     FCONCAT = 444,
     FREPLACE = 445,
     FCOALESCE = 446,
     FGEN_RANDOM_UUID = 447,
     FGEN_RANDOM_UUID_V7 = 448,
     FSNOWFLAKE_ID = 449,
     FLAST_INSERT_ID = 450
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
#define DATABASE 311
#define DEFERRABLE 312
#define DEFERRED 313
#define DISABLE 314
#define DOMAIN 315
#define DELAYED 316
#define DAY_HOUR 317
#define DAY_MICROSECOND 318
#define DISTINCT 319
#define DELETE 320
#define DROP 321
#define DAY_MINUTE 322
#define DISTINCTROW 323
#define DAY_SECOND 324
#define DESC 325
#define DEFAULT 326
#define DOUBLE 327
#define DATETIME 328
#define DECIMAL 329
#define DATE 330
#define ENABLE 331
#define ESCAPED 332
#define ENUM 333
#define END 334
#define ELSE 335
#define EXPLAIN 336
#define FLOAT 337
#define FORCE 338
#define FOREIGN 339
#define FROM 340
#define FULL 341
#define FULLTEXT 342
#define FOR 343
#define GROUP 344
#define HOUR_MINUTE 345
#define HOUR_MICROSECOND 346
#define HIGH_PRIORITY 347
#define HOUR_SECOND 348
#define HAVING 349
#define IMMEDIATE 350
#define INITIALLY 351
#define INTEGER 352
#define INNER 353
#define IGNORE 354
#define INDEX 355
#define IF 356
#define INSERT 357
#define INTO 358
#define INT 359
#define INTERVAL 360
#define JOIN 361
#define KEY 362
#define LONGTEXT 363
#define LOW_PRIORITY 364
#define LEFT 365
#define LEADING 366
#define LIMIT 367
#define OFFSET 368
#define LONGBLOB 369
#define MATCH 370
#define MEDIUMTEXT 371
#define MEDIUMBLOB 372
#define MEDIUMINT 373
#define NATURAL 374
#define NO_ACTION 375
#define NULLX 376
#define OUTER 377
#define ON 378
#define ORDER 379
#define ONDUPLICATE 380
#define PARTIAL 381
#define PRIMARY 382
#define QUICK 383
#define REAL 384
#define RECLAIM 385
#define REFERENCES 386
#define RENAME 387
#define RESTRICT 388
#define ROLLUP 389
#define RIGHT 390
#define REPLACE 391
#define SQL_SMALL_RESULT 392
#define SCHEMA 393
#define SOME 394
#define SQL_CALC_FOUND_ROWS 395
#define SQL_BIG_RESULT 396
#define SIMPLE 397
#define STRAIGHT_JOIN 398
#define SMALLINT 399
#define SET 400
#define SELECT 401
#define TINYTEXT 402
#define TINYINT 403
#define TO 404
#define TEMPORARY 405
#define TEXT 406
#define TIMESTAMP 407
#define TABLE 408
#define THEN 409
#define TRAILING 410
#define TRUNCATE 411
#define TINYBLOB 412
#define TIME 413
#define UPDATE 414
#define UNSIGNED 415
#define UNIQUE 416
#define UUID 417
#define USING 418
#define USE 419
#define HASH 420
#define VALIDATE 421
#define VARCHAR 422
#define VALUES 423
#define VARBINARY 424
#define WHERE 425
#define WHEN 426
#define WITH 427
#define YEAR 428
#define YEAR_MONTH 429
#define ZEROFILL 430
#define EXISTS 431
#define FSUBSTRING 432
#define FTRIM 433
#define FDATE_ADD 434
#define FDATE_SUB 435
#define FCOUNT 436
#define FSUM 437
#define FAVG 438
#define FMIN 439
#define FMAX 440
#define FUPPER 441
#define FLOWER 442
#define FLENGTH 443
#define FCONCAT 444
#define FREPLACE 445
#define FCOALESCE 446
#define FGEN_RANDOM_UUID 447
#define FGEN_RANDOM_UUID_V7 448
#define FSNOWFLAKE_ID 449
#define FLAST_INSERT_ID 450




/* Copy the first part of user declarations.  */
#line 4 "parser/evoparser.y"

	#define _CRT_SECURE_NO_WARNINGS
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdio.h>
	#include "../db/database.h"
	#include "../db/expression.h"

	void yyerror(char *s, ...);
	void emit(char *s, ...);
	int yylex(void);

	/* Track alias for current select_expr */
	static char g_currentAlias[128];


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
#line 20 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 511 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 524 "parser/evoparser.tab.c"

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
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2895

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  210
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  437
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1030

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   450

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     207,   208,    26,    24,   209,    25,   206,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   205,
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
     204
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
     865,   867,   871,   873,   878,   883,   888,   895,   897,   901,
     903,   907,   909,   913,   915,   919,   925,   927,   938,   949,
     967,   980,  1000,  1012,  1019,  1028,  1035,  1042,  1049,  1051,
    1060,  1061,  1066,  1067,  1070,  1073,  1076,  1079,  1081,  1082,
    1083,  1087,  1089,  1093,  1097,  1098,  1105,  1107,  1109,  1113,
    1117,  1125,  1129,  1133,  1139,  1145,  1147,  1156,  1164,  1172,
    1174,  1183,  1184,  1187,  1190,  1194,  1200,  1206,  1214,  1216,
    1221,  1226,  1227,  1230,  1232,  1238,  1246,  1254,  1264,  1276,
    1278,  1281,  1285,  1287,  1297,  1309,  1310,  1315,  1319,  1329,
    1336,  1348,  1357,  1358,  1360,  1362,  1366,  1372,  1380,  1385,
    1390,  1396,  1402,  1407,  1414,  1426,  1440,  1454,  1470,  1475,
    1482,  1484,  1488,  1490,  1494,  1496,  1500,  1501,  1506,  1512,
    1517,  1523,  1528,  1534,  1539,  1545,  1550,  1555,  1559,  1563,
    1567,  1570,  1574,  1579,  1584,  1586,  1590,  1591,  1596,  1597,
    1601,  1604,  1608,  1612,  1616,  1620,  1626,  1632,  1638,  1642,
    1648,  1651,  1659,  1665,  1673,  1679,  1682,  1686,  1689,  1693,
    1696,  1700,  1706,  1711,  1717,  1725,  1734,  1743,  1751,  1758,
    1765,  1771,  1772,  1776,  1782,  1783,  1785,  1786,  1789,  1792,
    1793,  1798,  1802,  1805,  1809,  1813,  1817,  1821,  1825,  1829,
    1833,  1837,  1841,  1845,  1847,  1849,  1851,  1853,  1855,  1859,
    1865,  1868,  1873,  1875,  1877,  1879,  1881,  1885,  1889,  1893,
    1897,  1903,  1909,  1911,  1913,  1915,  1919,  1923,  1924,  1926,
    1928,  1930,  1934,  1938,  1941,  1943,  1947,  1951
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     211,     0,    -1,   220,   205,    -1,   220,   205,   211,    -1,
       3,    -1,     3,   206,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   130,    -1,   212,    24,
     212,    -1,   212,    25,   212,    -1,   212,    26,   212,    -1,
     212,    27,   212,    -1,   212,    28,   212,    -1,   212,    29,
     212,    -1,    25,   212,    -1,   207,   212,   208,    -1,   212,
      12,   212,    -1,   212,    10,   212,    -1,   212,    11,   212,
      -1,   212,    21,   212,    -1,   212,    22,   212,    -1,   212,
      30,   212,    -1,   212,    23,   212,    -1,    18,   212,    -1,
      17,   212,    -1,   212,    20,   212,    -1,   212,    20,   207,
     221,   208,    -1,   212,    20,    36,   207,   221,   208,    -1,
     212,    20,   148,   207,   221,   208,    -1,   212,    20,    34,
     207,   221,   208,    -1,   212,    15,   130,    -1,   212,    15,
      18,   130,    -1,   212,    15,     6,    -1,   212,    15,    18,
       6,    -1,     8,     9,   212,    -1,   212,    19,   212,    39,
     212,    -1,   212,    18,    19,   212,    39,   212,    -1,   212,
      -1,   212,   209,   213,    -1,    -1,   213,    -1,    -1,   212,
      16,   207,   215,   213,   208,    -1,    -1,   212,    18,    16,
     207,   216,   213,   208,    -1,   212,    16,   207,   221,   208,
      -1,   212,    18,    16,   207,   221,   208,    -1,   185,   207,
     221,   208,    -1,     3,   207,   214,   208,    -1,   190,   207,
      26,   208,    -1,   190,   207,   212,   208,    -1,   191,   207,
     212,   208,    -1,   192,   207,   212,   208,    -1,   193,   207,
     212,   208,    -1,   194,   207,   212,   208,    -1,   186,   207,
     212,   209,   212,   209,   212,   208,    -1,   186,   207,   212,
     209,   212,   208,    -1,   186,   207,   212,    94,   212,   208,
      -1,   186,   207,   212,    94,   212,    97,   212,   208,    -1,
     187,   207,   212,   208,    -1,   187,   207,   217,   212,    94,
     212,   208,    -1,   187,   207,   217,    94,   212,   208,    -1,
     195,   207,   212,   208,    -1,   196,   207,   212,   208,    -1,
     197,   207,   212,   208,    -1,   198,   207,   212,   209,   212,
     208,    -1,   199,   207,   212,   209,   212,   209,   212,   208,
      -1,   200,   207,   212,   209,   212,   208,    -1,   201,   207,
     208,    -1,   202,   207,   208,    -1,   203,   207,   208,    -1,
     204,   207,   208,    -1,   120,    -1,   164,    -1,    50,    -1,
     188,   207,   212,   209,   218,   208,    -1,   189,   207,   212,
     209,   218,   208,    -1,   114,   212,    71,    -1,   114,   212,
      72,    -1,   114,   212,    76,    -1,   114,   212,    78,    -1,
     114,   212,   183,    -1,   114,   212,   182,    -1,   114,   212,
     100,    -1,   114,   212,    99,    -1,   114,   212,   102,    -1,
      58,   212,   219,    88,    -1,    58,   212,   219,    89,   212,
      88,    -1,    58,   219,    88,    -1,    58,   219,    89,   212,
      88,    -1,   180,   212,   163,   212,    -1,   219,   180,   212,
     163,   212,    -1,   212,    14,   212,    -1,   212,    18,    14,
     212,    -1,   212,    13,   212,    -1,   212,    18,    13,   212,
      -1,    54,    -1,    61,    -1,    62,    -1,   221,    -1,   155,
     234,   235,    -1,   155,   234,   235,    94,   238,   222,   223,
     227,   228,   231,   232,    -1,    -1,   179,   212,    -1,    -1,
      98,    48,   224,   226,    -1,   212,   225,    -1,   224,   209,
     212,   225,    -1,    -1,    38,    -1,    79,    -1,    -1,   181,
     143,    -1,    -1,   103,   212,    -1,    -1,   133,    48,   229,
      -1,   230,    -1,   229,   209,   230,    -1,     3,   225,    -1,
      -1,   121,   212,    -1,   121,   212,   209,   212,    -1,   121,
     212,   122,   212,    -1,    -1,   112,   233,    -1,     3,    -1,
     233,   209,     3,    -1,    -1,   234,    34,    -1,   234,    73,
      -1,   234,    77,    -1,   234,   101,    -1,   234,   152,    -1,
     234,   146,    -1,   234,   150,    -1,   234,   149,    -1,   236,
      -1,   235,   209,   236,    -1,    26,    -1,   212,   237,    -1,
      40,     3,    -1,     3,    -1,    -1,   239,    -1,   238,   209,
     239,    -1,   240,    -1,   242,    -1,     3,   237,   249,    -1,
       3,   206,     3,   237,   249,    -1,   252,   241,     3,    -1,
     207,   238,   208,    -1,    40,    -1,    -1,   239,   243,   115,
     240,   247,    -1,   239,   152,   240,    -1,   239,   152,   240,
     132,   212,    -1,   239,   245,   244,   115,   240,   248,    -1,
     239,   128,   246,   115,   240,    -1,    -1,   107,    -1,    57,
      -1,    -1,   131,    -1,   119,    -1,   144,    -1,   119,   244,
      -1,   144,   244,    -1,    -1,    -1,   248,    -1,   132,   212,
      -1,   172,   207,   233,   208,    -1,   173,   116,   250,   207,
     251,   208,    -1,   108,   116,   250,   207,   251,   208,    -1,
      92,   116,   250,   207,   251,   208,    -1,    -1,    97,   115,
      -1,    -1,     3,    -1,   251,   209,     3,    -1,   207,   221,
     208,    -1,   253,    -1,    74,   254,    94,     3,   222,   228,
     231,    -1,   254,   118,    -1,   254,   137,    -1,   254,   108,
      -1,    -1,    74,   254,   255,    94,   238,   222,    -1,     3,
     256,    -1,   255,   209,     3,   256,    -1,    -1,   206,    26,
      -1,    74,   254,    94,   255,   172,   238,   222,    -1,   257,
      -1,    75,   162,     3,    -1,    75,   162,   110,   185,     3,
      -1,   258,    -1,    55,   109,     3,   132,     3,   207,   259,
     208,    -1,    55,   109,   110,   185,     3,   132,     3,   207,
     259,   208,    -1,    55,   170,   109,     3,   132,     3,   207,
     259,   208,    -1,    55,   170,   109,   110,   185,     3,   132,
       3,   207,   259,   208,    -1,    55,   109,     3,   132,     3,
     172,   174,   207,   259,   208,    -1,    55,   109,   110,   185,
       3,   132,     3,   172,   174,   207,   259,   208,    -1,    55,
     170,   109,     3,   132,     3,   172,   174,   207,   259,   208,
      -1,    55,   170,   109,   110,   185,     3,   132,     3,   172,
     174,   207,   259,   208,    -1,     3,    -1,   259,   209,     3,
      -1,   260,    -1,   195,   207,     3,   208,    -1,   196,   207,
       3,   208,    -1,   197,   207,     3,   208,    -1,   198,   207,
       3,   209,     3,   208,    -1,   261,    -1,    75,   109,     3,
      -1,   262,    -1,   165,   162,     3,    -1,   263,    -1,   139,
     162,     3,    -1,   264,    -1,    35,   162,     3,    -1,    35,
     162,     3,   206,     3,    -1,   265,    -1,    32,   162,     3,
      33,    53,     3,    59,   207,   212,   208,    -1,    32,   162,
       3,    33,    53,     3,   170,   207,   293,   208,    -1,    32,
     162,     3,    33,    53,     3,    93,   116,   207,   290,   208,
     140,     3,   207,   291,   208,   292,    -1,    32,   162,     3,
      33,    53,     3,    59,   207,   212,   208,    18,   175,    -1,
      32,   162,     3,    33,    53,     3,    93,   116,   207,   290,
     208,   140,     3,   207,   291,   208,   292,    18,   175,    -1,
      32,   162,     3,    33,    53,     3,   136,   116,   207,   289,
     208,    -1,    32,   162,     3,    75,    53,     3,    -1,    32,
     162,     3,   141,    53,     3,   158,     3,    -1,    32,   162,
       3,    85,    53,     3,    -1,    32,   162,     3,    68,    53,
       3,    -1,    32,   162,     3,   175,    53,     3,    -1,   266,
      -1,   111,   268,   269,     3,   270,   177,   272,   267,    -1,
      -1,   134,   116,   168,   275,    -1,    -1,   268,   118,    -1,
     268,    70,    -1,   268,   101,    -1,   268,   108,    -1,   112,
      -1,    -1,    -1,   207,   271,   208,    -1,     3,    -1,   271,
     209,     3,    -1,   207,   274,   208,    -1,    -1,   272,   209,
     273,   207,   274,   208,    -1,   212,    -1,    80,    -1,   274,
     209,   212,    -1,   274,   209,    80,    -1,   111,   268,   269,
       3,   154,   275,   267,    -1,     3,    20,   212,    -1,     3,
      20,    80,    -1,   275,   209,     3,    20,   212,    -1,   275,
     209,     3,    20,    80,    -1,   276,    -1,   145,   268,   269,
       3,   270,   177,   272,   267,    -1,   145,   268,   269,     3,
     154,   275,   267,    -1,   145,   268,   269,     3,   270,   221,
     267,    -1,   277,    -1,   168,   278,   238,   154,   279,   222,
     228,   231,    -1,    -1,   268,   118,    -1,   268,   108,    -1,
       3,    20,   212,    -1,     3,   206,     3,    20,   212,    -1,
     279,   209,     3,    20,   212,    -1,   279,   209,     3,   206,
       3,    20,   212,    -1,   280,    -1,    55,    65,   281,     3,
      -1,    55,   147,   281,     3,    -1,    -1,   110,   185,    -1,
     282,    -1,    55,    69,     3,    40,   300,    -1,    55,    69,
       3,    40,   300,    80,   212,    -1,    55,    69,     3,    40,
     300,    18,   130,    -1,    55,    69,     3,    40,   300,    59,
     207,   212,   208,    -1,    55,    69,     3,    40,   300,    18,
     130,    59,   207,   212,   208,    -1,   283,    -1,   173,     3,
      -1,   173,    65,     3,    -1,   284,    -1,    55,   286,   162,
     281,     3,   207,   287,   208,   285,    -1,    55,   286,   162,
     281,     3,   206,     3,   207,   287,   208,   285,    -1,    -1,
     285,    37,    20,     5,    -1,   285,    37,     5,    -1,    55,
     286,   162,   281,     3,   207,   287,   208,   302,    -1,    55,
     286,   162,   281,     3,   302,    -1,    55,   286,   162,   281,
       3,   206,     3,   207,   287,   208,   302,    -1,    55,   286,
     162,   281,     3,   206,     3,   302,    -1,    -1,   159,    -1,
     288,    -1,   287,   209,   288,    -1,   136,   116,   207,   289,
     208,    -1,    53,     3,   136,   116,   207,   289,   208,    -1,
     116,   207,   233,   208,    -1,   109,   207,   233,   208,    -1,
      96,   109,   207,   233,   208,    -1,    96,   116,   207,   233,
     208,    -1,    59,   207,   212,   208,    -1,    53,     3,    59,
     207,   212,   208,    -1,    93,   116,   207,   290,   208,   140,
       3,   207,   291,   208,   292,    -1,    93,   116,   207,   290,
     208,   140,     3,   206,     3,   207,   291,   208,   292,    -1,
      53,     3,    93,   116,   207,   290,   208,   140,     3,   207,
     291,   208,   292,    -1,    53,     3,    93,   116,   207,   290,
     208,   140,     3,   206,     3,   207,   291,   208,   292,    -1,
     170,   207,   293,   208,    -1,    53,     3,   170,   207,   293,
     208,    -1,     3,    -1,   289,   209,     3,    -1,     3,    -1,
     290,   209,     3,    -1,     3,    -1,   291,   209,     3,    -1,
      -1,   292,   132,    74,    56,    -1,   292,   132,    74,   154,
     130,    -1,   292,   132,    74,   142,    -1,   292,   132,    74,
     154,    80,    -1,   292,   132,   168,    56,    -1,   292,   132,
     168,   154,   130,    -1,   292,   132,   168,   142,    -1,   292,
     132,   168,   154,    80,    -1,   292,   132,    74,   129,    -1,
     292,   132,   168,   129,    -1,   292,   124,    95,    -1,   292,
     124,   151,    -1,   292,   124,   135,    -1,   292,    66,    -1,
     292,    18,    66,    -1,   292,    66,   105,    67,    -1,   292,
      66,   105,   104,    -1,     3,    -1,   293,   209,     3,    -1,
      -1,   294,     3,   300,   295,    -1,    -1,   295,    18,   130,
      -1,   295,   130,    -1,   295,    80,     4,    -1,   295,    80,
       5,    -1,   295,    80,     7,    -1,   295,    80,     6,    -1,
     295,    80,   201,   207,   208,    -1,   295,    80,   202,   207,
     208,    -1,   295,    80,   203,   207,   208,    -1,   295,    80,
      54,    -1,   295,    80,   207,   212,   208,    -1,   295,    37,
      -1,   295,    37,   207,     5,   209,     5,   208,    -1,   295,
      37,   207,     5,   208,    -1,   295,    42,   207,     5,   209,
       5,   208,    -1,   295,    42,   207,     5,   208,    -1,   295,
      42,    -1,   295,   170,   116,    -1,   295,   170,    -1,   295,
     136,   116,    -1,   295,   116,    -1,   295,    60,     4,    -1,
     295,    59,   207,   212,   208,    -1,   295,    53,     3,   170,
      -1,   295,    53,     3,   136,   116,    -1,   295,    53,     3,
      59,   207,   212,   208,    -1,   295,    43,    41,    40,   207,
     212,   208,    44,    -1,   295,    43,    41,    40,   207,   212,
     208,    45,    -1,   295,    43,    41,    40,   207,   212,   208,
      -1,   295,    40,   207,   212,   208,    44,    -1,   295,    40,
     207,   212,   208,    45,    -1,   295,    40,   207,   212,   208,
      -1,    -1,   207,     5,   208,    -1,   207,     5,   209,     5,
     208,    -1,    -1,    49,    -1,    -1,   298,   169,    -1,   298,
     184,    -1,    -1,   299,    63,   154,     4,    -1,   299,    64,
       4,    -1,    52,   296,    -1,   157,   296,   298,    -1,   153,
     296,   298,    -1,   127,   296,   298,    -1,   113,   296,   298,
      -1,   106,   296,   298,    -1,    51,   296,   298,    -1,   138,
     296,   298,    -1,    81,   296,   298,    -1,    91,   296,   298,
      -1,    83,   296,   298,    -1,    84,    -1,   167,    -1,   161,
      -1,    82,    -1,   182,    -1,    63,   296,   299,    -1,   176,
     207,     5,   208,   299,    -1,    49,   296,    -1,   178,   207,
       5,   208,    -1,   166,    -1,    46,    -1,   126,    -1,   123,
      -1,   156,   297,   299,    -1,   160,   297,   299,    -1,   125,
     297,   299,    -1,   117,   297,   299,    -1,    87,   207,   301,
     208,   299,    -1,   154,   207,   301,   208,   299,    -1,    47,
      -1,   171,    -1,     4,    -1,   301,   209,     4,    -1,   303,
     241,   221,    -1,    -1,   108,    -1,   145,    -1,   304,    -1,
     154,   147,     3,    -1,   154,   147,    80,    -1,   154,   305,
      -1,   306,    -1,   305,   209,   306,    -1,     8,    20,   212,
      -1,     8,     9,   212,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   297,   297,   298,   303,   310,   311,   312,   330,   338,
     346,   352,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     383,   384,   385,   386,   389,   390,   391,   392,   393,   396,
     397,   400,   401,   404,   405,   408,   408,   409,   409,   410,
     411,   412,   416,   420,   421,   422,   423,   424,   425,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   447,   454,   461,   467,   468,   469,   472,
     473,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     487,   489,   491,   493,   497,   505,   516,   517,   520,   521,
     524,   532,   540,   551,   561,   562,   576,   577,   578,   579,
     582,   589,   597,   598,   599,   602,   603,   606,   607,   610,
     611,   614,   615,   618,   626,   627,   628,   629,   632,   633,
     636,   637,   640,   641,   642,   643,   644,   645,   646,   647,
     648,   651,   652,   653,   661,   667,   668,   669,   672,   673,
     676,   677,   681,   687,   688,   689,   692,   693,   697,   699,
     701,   703,   705,   709,   710,   711,   714,   715,   718,   719,
     722,   723,   724,   727,   728,   731,   732,   736,   738,   740,
     742,   745,   746,   749,   750,   753,   757,   765,   773,   774,
     775,   776,   780,   783,   784,   787,   787,   789,   793,   800,
     807,   817,   824,   831,   841,   849,   859,   867,   876,   885,
     897,   902,   907,   913,   920,   927,   934,   944,   951,   960,
     967,   976,   983,   992,   999,  1005,  1016,  1019,  1025,  1031,
    1038,  1044,  1051,  1057,  1063,  1069,  1075,  1081,  1089,  1096,
    1104,  1105,  1108,  1109,  1110,  1111,  1112,  1115,  1115,  1118,
    1119,  1122,  1132,  1145,  1146,  1146,  1149,  1150,  1151,  1152,
    1155,  1159,  1160,  1161,  1162,  1168,  1171,  1177,  1182,  1188,
    1194,  1201,  1202,  1203,  1207,  1218,  1229,  1240,  1254,  1258,
    1259,  1262,  1263,  1267,  1271,  1273,  1275,  1277,  1279,  1284,
    1288,  1289,  1293,  1300,  1310,  1314,  1315,  1316,  1319,  1324,
    1328,  1333,  1337,  1338,  1341,  1342,  1345,  1346,  1347,  1348,
    1349,  1350,  1351,  1352,  1353,  1355,  1357,  1359,  1361,  1363,
    1367,  1368,  1371,  1372,  1375,  1376,  1379,  1380,  1381,  1382,
    1383,  1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,
    1393,  1394,  1395,  1396,  1399,  1400,  1403,  1403,  1413,  1414,
    1415,  1416,  1417,  1418,  1419,  1420,  1421,  1422,  1423,  1424,
    1431,  1432,  1433,  1434,  1435,  1436,  1437,  1438,  1439,  1440,
    1441,  1442,  1443,  1444,  1445,  1446,  1447,  1448,  1449,  1450,
    1451,  1454,  1455,  1456,  1459,  1460,  1463,  1464,  1465,  1468,
    1469,  1470,  1474,  1475,  1476,  1477,  1478,  1479,  1480,  1481,
    1482,  1483,  1484,  1485,  1486,  1487,  1488,  1489,  1490,  1491,
    1492,  1493,  1494,  1495,  1496,  1497,  1498,  1499,  1500,  1501,
    1502,  1503,  1504,  1505,  1508,  1509,  1512,  1516,  1517,  1518,
    1522,  1525,  1526,  1527,  1528,  1528,  1530,  1531
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
  "COMMENT", "CURRENT_DATE", "CURRENT_TIME", "CHAR", "COLLATE", "DATABASE",
  "DEFERRABLE", "DEFERRED", "DISABLE", "DOMAIN", "DELAYED", "DAY_HOUR",
  "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP", "DAY_MINUTE",
  "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE", "DATETIME",
  "DECIMAL", "DATE", "ENABLE", "ESCAPED", "ENUM", "END", "ELSE", "EXPLAIN",
  "FLOAT", "FORCE", "FOREIGN", "FROM", "FULL", "FULLTEXT", "FOR", "GROUP",
  "HOUR_MINUTE", "HOUR_MICROSECOND", "HIGH_PRIORITY", "HOUR_SECOND",
  "HAVING", "IMMEDIATE", "INITIALLY", "INTEGER", "INNER", "IGNORE",
  "INDEX", "IF", "INSERT", "INTO", "INT", "INTERVAL", "JOIN", "KEY",
  "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "OFFSET",
  "LONGBLOB", "MATCH", "MEDIUMTEXT", "MEDIUMBLOB", "MEDIUMINT", "NATURAL",
  "NO_ACTION", "NULLX", "OUTER", "ON", "ORDER", "ONDUPLICATE", "PARTIAL",
  "PRIMARY", "QUICK", "REAL", "RECLAIM", "REFERENCES", "RENAME",
  "RESTRICT", "ROLLUP", "RIGHT", "REPLACE", "SQL_SMALL_RESULT", "SCHEMA",
  "SOME", "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT", "SIMPLE",
  "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT", "TINYTEXT", "TINYINT",
  "TO", "TEMPORARY", "TEXT", "TIMESTAMP", "TABLE", "THEN", "TRAILING",
  "TRUNCATE", "TINYBLOB", "TIME", "UPDATE", "UNSIGNED", "UNIQUE", "UUID",
  "USING", "USE", "HASH", "VALIDATE", "VARCHAR", "VALUES", "VARBINARY",
  "WHERE", "WHEN", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS",
  "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT", "FSUM",
  "FAVG", "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH", "FCONCAT",
  "FREPLACE", "FCOALESCE", "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7",
  "FSNOWFLAKE_ID", "FLAST_INSERT_ID", "';'", "'.'", "'('", "')'", "','",
  "$accept", "stmt_list", "expr", "val_list", "opt_val_list", "@1", "@2",
  "trim_ltb", "interval_exp", "case_list", "stmt", "select_stmt",
  "opt_where", "opt_groupby", "groupby_list", "opt_asc_desc",
  "opt_with_rollup", "opt_having", "opt_orderby", "orderby_list",
  "orderby_item", "opt_limit", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "opt_as_alias",
  "table_references", "table_reference", "table_factor", "opt_as",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "drop_table_stmt", "create_index_stmt", "index_col_list", "index_expr",
  "drop_index_stmt", "truncate_table_stmt", "reclaim_table_stmt",
  "analyze_table_stmt", "alter_table_stmt", "insert_stmt",
  "opt_ondupupdate", "insert_opts", "opt_into", "opt_col_names",
  "insert_col_list", "insert_vals_list", "@3", "insert_vals",
  "insert_asgn_list", "replace_stmt", "update_stmt", "update_opts",
  "update_asgn_list", "create_database_stmt", "opt_if_not_exists",
  "create_domain_stmt", "use_database_stmt", "create_table_stmt",
  "opt_table_options", "opt_temporary", "create_col_list",
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
     446,   447,   448,   449,   450,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   210,   211,   211,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   213,   213,   214,   214,   215,   212,   216,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   217,   217,   217,   212,
     212,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     212,   212,   212,   212,   219,   219,   212,   212,   212,   212,
     212,   212,   212,   220,   221,   221,   222,   222,   223,   223,
     224,   224,   225,   225,   225,   226,   226,   227,   227,   228,
     228,   229,   229,   230,   231,   231,   231,   231,   232,   232,
     233,   233,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   235,   235,   235,   236,   237,   237,   237,   238,   238,
     239,   239,   240,   240,   240,   240,   241,   241,   242,   242,
     242,   242,   242,   243,   243,   243,   244,   244,   245,   245,
     246,   246,   246,   247,   247,   248,   248,   249,   249,   249,
     249,   250,   250,   251,   251,   252,   220,   253,   254,   254,
     254,   254,   253,   255,   255,   256,   256,   253,   220,   257,
     257,   220,   258,   258,   258,   258,   258,   258,   258,   258,
     259,   259,   259,   260,   260,   260,   260,   220,   261,   220,
     262,   220,   263,   220,   264,   264,   220,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   220,   266,
     267,   267,   268,   268,   268,   268,   268,   269,   269,   270,
     270,   271,   271,   272,   273,   272,   274,   274,   274,   274,
     266,   275,   275,   275,   275,   220,   276,   276,   276,   220,
     277,   278,   278,   278,   279,   279,   279,   279,   220,   280,
     280,   281,   281,   220,   282,   282,   282,   282,   282,   220,
     283,   283,   220,   284,   284,   285,   285,   285,   284,   284,
     284,   284,   286,   286,   287,   287,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     289,   289,   290,   290,   291,   291,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   293,   293,   294,   288,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   296,   296,   296,   297,   297,   298,   298,   298,   299,
     299,   299,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   301,   301,   302,   303,   303,   303,
     220,   304,   304,   304,   305,   305,   306,   306
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
       1,     3,     1,     4,     4,     4,     6,     1,     3,     1,
       3,     1,     3,     1,     3,     5,     1,    10,    10,    17,
      12,    19,    11,     6,     8,     6,     6,     6,     1,     8,
       0,     4,     0,     2,     2,     2,     2,     1,     0,     0,
       3,     1,     3,     3,     0,     6,     1,     1,     3,     3,
       7,     3,     3,     5,     5,     1,     8,     7,     7,     1,
       8,     0,     2,     2,     3,     5,     5,     7,     1,     4,
       4,     0,     2,     1,     5,     7,     7,     9,    11,     1,
       2,     3,     1,     9,    11,     0,     4,     3,     9,     6,
      11,     8,     0,     1,     1,     3,     5,     7,     4,     4,
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
       0,     0,     0,   302,   191,     0,   242,     0,   242,     0,
     132,     0,   242,     0,     0,     0,   103,   186,   198,   201,
     217,   219,   221,   223,   226,   238,   265,   269,   278,   283,
     289,   292,   430,     0,     0,   281,     0,     0,   281,   303,
       0,     0,     0,     0,     0,   248,     0,   248,     0,     0,
     433,   434,     0,     0,     0,     0,   290,     0,     1,     2,
       0,   224,     0,     0,     0,     0,     0,     0,     0,   281,
     195,     0,   190,   188,   189,     0,   218,   199,     0,   244,
     245,   246,   247,   243,     0,   222,     0,     0,     0,   431,
     432,     0,     4,     7,     8,    10,     9,     6,     0,     0,
       0,   143,   133,   100,     0,   101,   102,   134,   135,   136,
      11,   138,   140,   139,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,   104,   141,   220,
     246,   243,   147,     0,     0,   148,   150,   151,   157,   291,
       3,     0,     0,     0,     0,     0,     0,     0,   282,   279,
       0,     0,     0,   280,     0,     0,     0,     0,   193,   106,
       0,     0,     0,     0,   249,   249,   437,   436,   435,     0,
      43,     0,    28,    27,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,   180,     0,     0,     0,     0,
     165,   164,   168,   172,   169,     0,     0,   166,   156,     0,
       0,     0,     0,     0,     0,     0,   225,   413,   422,   381,
     381,   381,   381,   381,   406,   381,   403,     0,   381,   381,
     381,   384,   415,   384,   414,   381,   381,   381,     0,   384,
     381,   384,   405,   412,   404,   423,     0,     0,   407,   284,
       0,     0,     0,     0,   427,   196,     0,   119,     0,   106,
     195,   200,     0,     0,     0,     0,     0,     5,    41,    44,
       0,    38,     0,     0,    92,     0,     0,     0,     0,    78,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    19,    21,    22,    20,    98,    96,    36,     0,
      34,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    23,    24,    26,    12,    13,    14,    15,    16,
      17,    25,   145,   106,   142,   147,     0,     0,     0,   152,
     185,   155,     0,   106,   149,   166,   166,     0,   159,     0,
     167,     0,   154,     0,   236,   233,   235,     0,   237,     0,
     410,   386,   392,   389,   386,   386,     0,   386,   386,   386,
     385,   389,   389,   386,   386,   386,     0,   389,   386,   389,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     428,   429,     0,   346,   299,   157,   107,     0,   124,   106,
     192,   194,     0,   240,   251,     0,     0,   240,     0,   240,
       0,    52,     0,    90,     0,     0,     0,    51,     0,     0,
      63,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    66,    67,    68,     0,     0,     0,    37,    35,     0,
       0,    99,    97,    47,     0,     0,     0,     0,     0,     0,
     108,   180,   182,   182,   182,     0,     0,     0,   119,   170,
     171,     0,     0,   173,     0,     0,     0,     0,     0,     0,
       0,   398,   408,   400,   402,   424,     0,   401,   397,   396,
     419,   418,   395,   399,   394,     0,   416,   393,   417,     0,
       0,   286,     0,   285,     0,   210,     0,     0,     0,     0,
       0,   212,     0,     0,     0,     0,   427,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   304,     0,     0,     0,
       0,   187,   197,     0,     0,     0,   260,   250,     0,     0,
     240,   267,   240,   268,    42,    94,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,    39,     0,     0,     0,    30,     0,
     117,   153,     0,     0,     0,     0,   274,     0,     0,   124,
     162,   160,     0,     0,   158,   174,     0,     0,     0,     0,
       0,   234,   382,     0,   387,   388,     0,     0,   389,     0,
     389,   389,   411,     0,     0,     0,     0,     0,     0,     0,
     202,     0,     0,     0,     0,     0,     0,   346,   301,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   295,   346,
       0,   426,   112,   120,   121,   125,   262,   261,     0,     0,
     252,   257,   256,     0,   254,   239,   266,    91,    95,     0,
      61,    60,     0,    65,     0,     0,    79,    80,    69,     0,
      71,    46,     0,    50,    40,    33,    31,    32,     0,     0,
     119,   181,     0,     0,     0,     0,     0,     0,   270,   175,
       0,   161,     0,     0,     0,   344,     0,     0,     0,   391,
     420,   425,   421,   409,     0,   287,     0,     0,     0,     0,
       0,   211,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,     0,     0,
       0,     0,   293,   298,   305,   348,   113,   114,   123,     0,
       0,     0,     0,     0,   253,     0,     0,     0,     0,    64,
      81,    82,    83,    84,    88,    87,    89,    86,    85,     0,
      48,   112,   115,   118,   124,   183,     0,     0,     0,   275,
     276,     0,     0,   227,   322,     0,   320,     0,   228,     0,
     383,   390,     0,   206,   213,   214,   215,     0,     0,   203,
       0,     0,     0,   295,     0,     0,     0,     0,   312,     0,
       0,     0,   309,     0,   308,     0,   318,     0,   347,   122,
     127,   126,   241,   264,   263,   259,   258,     0,    62,    59,
      70,   110,     0,     0,   109,   128,   179,     0,   178,   177,
       0,   176,     0,     0,     0,   232,     0,   345,   288,     0,
       0,   208,     0,   205,   294,   300,     0,     0,     0,     0,
       0,   310,   311,   131,   306,   297,     0,     0,   360,     0,
     365,     0,     0,     0,     0,     0,   369,   350,     0,   367,
       0,   116,   112,     0,   105,   184,   277,   230,     0,   323,
     321,   216,   207,     0,   313,     0,     0,   319,     0,   296,
     349,     0,     0,     0,     0,     0,     0,   370,   351,   352,
     354,   353,   358,     0,     0,     0,     0,   368,   366,   255,
     111,   129,     0,   209,     0,   307,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   362,     0,   380,   364,     0,     0,     0,
     373,   371,   355,   356,   357,   359,   324,     0,     0,     0,
       0,     0,   378,   379,     0,     0,     0,   326,     0,     0,
       0,     0,   326,   361,   363,   377,   374,   229,   325,     0,
       0,     0,   314,   375,   376,     0,   340,     0,     0,     0,
     326,   326,     0,   341,   231,     0,   337,   339,   338,     0,
       0,     0,   316,   315,   342,   343,   327,   335,   329,     0,
     331,   336,   333,     0,   326,   330,   328,   334,   332,   317
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   308,   309,   310,   479,   591,   323,   584,   187,
      15,    16,   297,   600,   782,   758,   844,   700,   438,   663,
     664,   561,   894,   748,    52,   137,   138,   231,   144,   145,
     146,   249,   147,   246,   391,   247,   387,   614,   615,   379,
     603,   786,   148,    17,    42,    75,   168,    18,    19,   540,
     541,    20,    21,    22,    23,    24,    25,   566,    45,    84,
     304,   445,   570,   766,   673,   443,    26,    27,    55,   383,
      28,    63,    29,    30,    31,   752,    41,   555,   556,   797,
     795,   967,   987,   716,   557,   828,   400,   411,   511,   512,
     289,   516,   434,   435,    32,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -707
static const yytype_int16 yypact[] =
{
    2404,   -99,   -96,   292,  -707,   -70,  -707,   -94,  -707,    35,
    -707,   -88,     3,    31,   231,    36,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,   246,   248,   183,   296,    79,   183,  -707,
     245,   154,    96,   345,    81,   376,   347,   376,    53,    25,
     153,  -707,   386,   361,   327,     4,  -707,   402,  -707,  2404,
      22,   180,   223,   412,   379,   299,   257,   449,    88,   183,
     261,   454,  -707,  -707,  -707,   -24,  -707,  -707,   290,  -707,
    -707,  -707,  -707,  -707,   476,  -707,   480,  1509,  1509,  -707,
    -707,   446,    33,  -707,  -707,  -707,  -707,   481,  1509,  1509,
    1509,  -707,  -707,  -707,   725,  -707,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,   286,   297,   303,   317,   322,
     330,   335,   337,   417,   419,   424,   427,   432,   441,   443,
     445,   458,   463,   503,   505,  1509,  2709,   -22,  -707,  -707,
       5,    10,    16,     9,  -124,   353,  -707,  -707,   474,  -707,
    -707,   501,   508,   650,   691,   729,   737,   516,  -707,  -707,
    2457,   545,   775,  -707,   652,   614,   820,   811,  -707,   346,
      86,     4,   845,   850,  -109,  -105,  2790,  2790,  -707,   851,
    1509,  1509,   695,   695,  -707,  1509,  2280,   137,   701,  1509,
     495,  1509,  1509,   821,  1509,  1509,  1509,  1509,  1509,  1509,
    1509,  1509,  1509,  1509,   649,   651,   653,   654,  1571,  -707,
    1509,  1509,  1509,  1509,  1509,    26,   656,   622,  1509,   615,
    1509,  1509,  1509,  1509,  1509,  1509,  1509,  1509,  1509,  1509,
     855,  -707,     4,  1509,   873,   145,   669,   187,   875,     4,
    -707,  -707,  -707,   269,  -707,     4,   765,   750,  -707,   888,
     905,   906,   927,   928,   930,   931,  -707,  -707,  -707,   734,
     734,   734,   734,   734,  -707,   734,  -707,   735,   734,   734,
     734,   894,  -707,   894,  -707,   734,   734,   734,   738,   894,
     734,   894,  -707,  -707,  -707,  -707,   739,   740,  -707,   239,
    -130,   812,   945,   949,   107,  -707,  1509,   822,     4,  -103,
     261,  -707,   950,   951,   779,   950,   -97,  -707,   355,  -707,
     757,  2790,  2335,   167,  -707,  1509,  1509,   771,   262,  -707,
    -707,  -707,  1607,   932,   874,   948,   772,  1630,  1707,  1728,
    1762,  1783,  1806,  1829,  1850,  1045,  1081,  1148,  -707,  -707,
    -707,  -707,  -707,  2810,  2829,  2847,  2865,  2865,  -707,    27,
    -707,   701,  1509,  1509,   774,  1509,  2746,   776,   777,   778,
    1026,   743,   843,   711,   806,   540,   540,   952,   952,   952,
     952,  -707,  -707,  -103,  -707,   256,   871,   872,   876,  -707,
    -707,  -707,    -3,   142,   353,   750,   750,   880,   857,     4,
    -707,   881,  -707,   176,  -707,  -707,  -707,   833,  -707,   992,
    -707,  -707,  -707,  -707,  -707,  -707,   994,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,   994,  -707,  -707,  -707,
     995,   996,   869,   795,  1509,   829,    11,  1001,  -121,   895,
    -707,  -707,  1002,   373,  -707,   474,  2790,   987,   915,  -103,
    -707,  -707,  1017,   -77,  -707,   190,   831,   -77,   831,   907,
    1509,  -707,  1509,  -707,  1509,  2630,  2402,  -707,  1509,  1509,
    -707,  1509,  2578,   925,   925,  -707,  -707,  -707,  -707,  -707,
    -707,  -707,  -707,  -707,  1509,  1509,  1509,  -707,  -707,  1509,
     832,  2865,  2865,   701,  2768,  1509,   701,   701,   701,   834,
     947,   145,   953,   953,   953,  1509,  1043,  1044,   822,  -707,
    -707,     4,  1509,   -68,     4,   841,   933,   936,   846,  1051,
     209,    78,   241,    78,    78,  -707,   229,    78,    78,    78,
     241,   241,    78,    78,    78,   277,   241,    78,   241,   868,
     870,  1018,  1509,  2790,   878,  -707,   879,   882,   883,   891,
     298,  -707,  -118,   908,    11,  1076,   207,  1078,   909,   997,
     134,   934,   935,   998,   937,   314,  -707,  1109,   701,  1112,
    1509,  -707,  -707,  1180,  1021,  1135,  -707,  -707,  1137,  1258,
     120,  -707,   120,  -707,  -707,  2790,  2655,  -707,  1509,  1402,
      98,  1871,  1509,  1509,   938,   939,  1898,  1379,  1919,   940,
    -707,  1509,   941,  1509,   731,   942,   943,   944,  -707,  1095,
    1042,  -707,  1038,   958,   972,   973,  2790,  1134,     7,   915,
    -707,  2790,  1509,   975,  -707,  -707,   -68,  1509,   982,   983,
    1152,  -707,  -707,  1186,  -707,  -707,  1039,  1188,  -707,  1190,
    -707,  -707,  -707,   988,  1953,    11,  1193,  1196,  1197,  1198,
    -707,  1199,  1029,    11,   999,   319,    95,   373,  -707,   251,
    1509,  1000,  1003,  1024,  1201,  1201,  1025,  1152,    91,   373,
    2457,  -707,    -1,  1027,  -707,   312,  -707,  2790,  1040,  1189,
    -707,  -707,  2790,   325,  -707,  -707,  -707,  -707,  2790,  1509,
    -707,  -707,  1509,  -707,  1974,  2309,  -707,  -707,  -707,  1509,
    -707,  -707,  1031,  -707,   731,  -707,  -707,  -707,  1509,  1509,
     822,  -707,  1232,  1232,  1232,  1509,  1509,  1234,  -707,  2790,
    1201,  -707,  1997,  1237,  1240,  -707,   331,  1036,  1241,  -707,
     241,  -707,   241,   241,  1509,  -707,   338,  1041,  1047,  1048,
    1037,  -707,  1046,   342,    11,  -707,  1073,    11,   350,  1050,
    1132,  1136,  1052,  2020,  1237,  1201,  1201,  -707,   354,   383,
    1240,   392,  1213,  -707,  -707,  -707,  -707,  -707,  -707,  1112,
    1509,  1509,   950,  1281,  -707,  1486,  1060,  2041,  2062,  -707,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  -707,  2089,
    -707,  2676,   244,  2790,   915,  -707,   397,   399,   404,  2790,
    2790,  1231,   408,  1250,  -707,   420,  -707,   434,  -707,  1255,
    -707,  -707,  2110,  -707,  -707,  -707,  -707,  1266,    11,  -707,
     436,  1063,   447,    91,  1509,  1064,  1065,  1152,  -707,   455,
     466,   470,  -707,  1270,  -707,   492,  -707,   289,  2415,  -707,
    2790,  2790,  1068,  -707,  2790,  -707,  2790,  1258,  -707,  -707,
    -707,  -707,  1131,  1509,  -707,  1166,  -707,  1276,  -707,  -707,
    1509,  -707,  1105,  1141,  1279,  -707,  1288,  -707,  -707,  1084,
     496,  -707,    11,  -707,  1213,  -707,  2144,  1237,  1240,   498,
    1153,  -707,  -707,  -707,  -707,  -707,  1289,  1165,  1089,  1090,
    1093,  1260,  1299,  1096,  1300,    17,  -707,  -707,  1191,  1192,
     518,  -707,  2676,  1201,  -707,  -707,  2790,  -707,  1302,  -707,
    -707,  -707,  -707,   538,  -707,   566,   568,  -707,  1306,  -707,
    -707,  1308,  1509,  1309,  1271,   175,  1509,  -707,  -707,  -707,
    -707,  -707,  -707,  1108,  1110,  1111,  1509,  -707,  -707,  -707,
    -707,  1113,  1114,  -707,  1183,  -707,   258,   572,  2165,   580,
    1117,  1118,  1210,  -707,  2188,  1119,  1120,  1121,  2211,  1327,
    1328,  1329,  1327,  -707,  1331,   451,  -707,  1332,  1509,  1509,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,   584,   542,  1126,
     586,  1133,  -707,  -707,  1138,  2232,  2253,  -707,  1337,  1341,
    1327,  1327,  -707,  -707,  -707,   752,  -707,    69,  -707,  1127,
     612,   632,    70,  -707,  -707,    13,  1242,   110,   -34,  1327,
    -707,  -707,  1282,  -707,  -707,   193,  -707,  -707,  -707,   287,
     307,   634,    70,    70,  -707,  -707,  -707,  -707,  -707,   -30,
    -707,  -707,  -707,   -27,  -707,  -707,  -707,  -707,  -707,    70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -707,  1286,   -52,  -412,  -707,  -707,  -707,  -707,   885,  1164,
    -707,  -128,  -218,  -707,  -707,  -706,  -707,  -707,  -472,  -707,
     592,  -584,  -707,  -651,  -707,  -707,  1122,  -137,  -102,  1115,
    -236,   917,  -707,  -707,   459,  -707,  -707,  -707,   742,   862,
     356,   148,  -707,  -707,  -707,  1285,  1059,  -707,  -707,  -542,
    -707,  -707,  -707,  -707,  -707,  -707,  -707,  -418,   341,  1313,
    1187,  -707,   916,  -707,   526,  -304,  -707,  -707,  -707,  -707,
    -707,   210,  -707,  -707,  -707,   573,  -707,   749,   726,  -685,
    -683,  -525,  -509,  -637,  -707,  -707,   334,   197,   253,  -401,
     759,  1019,  -543,  -707,  -707,  -707,  1319
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -428
static const yytype_int16 yytable[] =
{
     136,   447,   645,   648,   749,   235,  -271,   142,  -273,   388,
     520,   521,   142,  -272,   535,   236,   526,   495,   528,   209,
     751,   918,   919,   920,   921,   708,   609,   706,    89,   571,
     238,   573,   348,   477,    56,   176,   177,   756,   574,    43,
    1009,   237,   425,    48,   349,   302,   182,   183,   184,   305,
    1025,   543,   186,  1027,   642,   151,   230,   564,    10,   792,
     317,   819,    87,    33,   612,   825,    34,   589,    46,   299,
     171,   922,   232,    88,    53,   841,   296,   426,   757,  1003,
     448,   440,    65,   208,    77,   239,   544,   995,  1002,   643,
     152,   164,    44,   726,   820,   821,    57,   153,   303,    70,
    1026,   733,   303,  1028,   613,    90,   239,   154,   210,   211,
     212,   213,   214,   215,   216,   753,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   311,
     373,  -427,   565,   312,  1010,   996,   996,   318,   322,   324,
     325,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   675,   503,   676,   490,   350,   478,   343,   344,
     345,   346,   347,   155,    10,   498,   356,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   449,   692,
     869,   136,    49,   906,   905,   172,   930,   233,  1004,    66,
      71,    78,   810,   997,   997,   812,   439,   156,   165,   430,
     845,   998,   998,   496,    72,  1006,   536,   537,   538,   539,
    -271,   143,  -273,   707,    73,   430,   143,  -272,   923,   924,
     925,   562,   234,   480,   926,   314,   315,   720,   784,   722,
     723,    58,   489,    74,   941,   505,   431,   376,   491,   179,
     180,    59,   931,   652,   436,  1007,  -427,   624,    67,    60,
     653,    61,   431,   377,   564,   453,   454,   422,   298,   209,
    1014,  1008,   625,   455,   456,   610,   860,   736,   616,   506,
     865,   462,   210,   211,   212,   213,   214,   215,   216,   166,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    62,   875,   172,   230,  1015,   423,    64,
     481,   482,   737,   484,   626,   627,   681,   682,   208,   876,
     739,   942,   507,   432,   433,   430,    69,   316,   378,   424,
     903,   296,   210,   211,   212,   213,   214,   215,   216,   674,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,  1016,   740,   943,   508,   316,    76,    47,
      85,   497,   431,    54,    68,   592,   458,    35,   595,   596,
     597,    36,    91,  1020,   139,   210,   211,   212,   213,   214,
     215,   216,   533,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   157,   741,   385,    92,
      93,    94,    95,    96,    97,   381,   239,    79,   567,   568,
     575,    37,   576,    98,    99,   149,   579,   580,   158,   581,
     240,   100,   101,   386,   647,   159,  1017,   622,   623,   160,
     102,   742,   586,   587,   588,   842,   547,   970,    80,  1018,
     661,   161,   548,   594,   760,   140,  1021,   628,   629,    38,
     103,  1019,   162,   606,   104,   141,    79,   105,   106,  1022,
     611,    39,   163,   843,    48,   990,   991,   169,   832,   107,
     241,  1023,    40,   108,   951,   952,   549,   167,  -163,   550,
     412,   459,   242,   992,  1011,   173,   417,    80,   419,   174,
     634,   243,   551,   175,    81,   630,   629,   109,    82,   552,
     181,  1012,  1013,   188,    83,   972,   973,   244,    92,    93,
      94,    95,    96,    97,   189,   245,   640,   641,   665,   553,
     190,   667,    98,    99,   248,  1029,   110,   672,  -195,   256,
     100,   761,   658,   659,   191,   296,   678,   735,   641,   192,
     684,   685,   111,   764,   765,   112,   113,   193,   114,   798,
     799,   694,   194,   554,   195,   319,   803,   641,   290,   103,
     809,   641,   167,   104,   250,  -195,   105,   106,   813,   659,
     709,   251,   822,   823,   450,   712,   225,   226,   227,   228,
     229,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   824,   823,   135,   401,   402,   403,   404,   743,   405,
     826,   799,   407,   408,   409,   846,   847,   848,   847,   413,
     414,   415,   849,   847,   418,   320,   851,   823,    92,    93,
      94,    95,    96,    97,   196,   110,   197,   767,   853,   854,
     768,   198,    98,    99,   199,   352,   353,   779,   354,   200,
     100,   355,   855,   856,   861,   641,   781,   783,   201,   357,
     202,   358,   203,   789,   790,   863,   641,   513,   514,   321,
     517,   518,   519,   870,   854,   204,   522,   523,   524,   103,
     205,   527,   802,   104,   871,   823,   105,   106,   872,   823,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     874,   856,   135,   252,   902,   641,   907,   799,   830,   831,
     206,   834,   207,   836,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   929,   765,    92,    93,
      94,    95,    96,    97,   222,   223,   224,   225,   226,   227,
     228,   229,    98,    99,   253,   110,   933,   641,   979,   980,
     100,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   866,   359,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   934,   854,   935,   856,   291,   103,
     953,   954,   254,   104,   292,   672,   105,   106,   956,   957,
     255,   892,   977,   978,   982,   978,   993,   994,   896,   293,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
    1000,   978,   360,   294,    92,    93,    94,    95,    96,    97,
     223,   224,   225,   226,   227,   228,   229,   295,    98,    99,
    1001,   978,  1024,   978,   499,   500,   100,   326,   300,   604,
     605,   787,   788,   301,   307,   110,    10,   338,   372,   339,
     938,   340,   341,   351,   944,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   948,   103,   375,   380,   382,   104,
     389,   390,   105,   106,   210,   211,   212,   213,   214,   215,
     216,   392,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   185,   975,   976,   393,   394,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     395,   396,   135,   397,   398,    92,    93,    94,    95,    96,
      97,   399,   406,   410,   427,   416,   420,   421,   428,    98,
      99,   110,   429,   442,   444,   437,   446,   100,   210,   211,
     212,   213,   214,   215,   216,   451,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   457,
     465,   483,   229,   486,   487,   488,   103,   492,   493,   502,
     104,   509,   494,   105,   106,   501,   504,   510,   515,   531,
     529,   530,   532,   534,   542,   546,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   461,   545,   135,    92,
      93,    94,    95,    96,    97,   559,   560,   563,   569,   583,
     590,   564,   598,    98,    99,   599,   607,   608,   617,   618,
     602,   100,   619,   620,   621,   210,   211,   212,   213,   214,
     215,   216,   110,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   631,   633,   632,   646,
     103,   649,   644,   463,   104,   635,   636,   105,   106,   637,
     638,   210,   211,   212,   213,   214,   215,   216,   639,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   660,   651,   656,   662,   650,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   668,   669,   135,
     670,   654,   655,   698,   657,   699,   686,   687,   691,   693,
     695,   696,   697,   701,   705,   715,   110,   464,   210,   211,
     212,   213,   214,   215,   216,   702,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   703,
     704,    10,   710,    92,    93,    94,    95,    96,    97,   713,
     714,   717,   719,   718,   721,   724,   727,    98,    99,   728,
     729,   730,   731,   732,   747,   100,   734,   744,   762,   763,
     745,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   746,   750,   135,   103,   785,   759,   791,   104,   780,
     794,   105,   106,   796,   800,   801,   807,   811,   815,   804,
     827,   850,   816,   808,   474,   805,   806,   814,   857,   817,
     666,    92,    93,    94,    95,    96,    97,   837,   852,   859,
     862,   867,   868,   873,   891,    98,    99,   565,   893,   895,
     897,   898,   899,   100,    92,    93,    94,    95,    96,    97,
     475,   900,   901,   908,   909,   910,   911,   912,    98,    99,
     913,   914,   915,   916,   917,   932,   100,   927,   928,   936,
     110,   940,   103,   937,   939,   945,   104,   946,   947,   105,
     106,   949,   823,   950,   958,   959,   960,   962,   963,   964,
     966,   968,   969,   981,   999,   103,   971,   974,   671,   104,
     988,   983,   105,   106,   989,   150,   984,  1005,  1003,   585,
     313,   829,   558,   601,   384,   374,   170,   476,   711,   441,
      86,   833,   306,   890,   572,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   754,   864,   135,   110,   210,
     211,   212,   213,   214,   215,   216,   738,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     178,   110,   210,   211,   212,   213,   214,   215,   216,   755,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,     0,     0,   525,     0,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     0,     0,   135,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,     0,     0,   135,    92,
      93,    94,    95,    96,    97,     0,     0,     0,     0,   679,
       0,     0,     0,    98,    99,     0,     0,     0,     0,     0,
       0,   100,    92,    93,    94,    95,    96,    97,     0,     0,
       0,     0,     0,     0,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
     103,     0,     0,     0,   104,     0,     0,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,     0,   835,   104,     0,     0,
     105,   106,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   689,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,     0,     0,     0,     0,     0,     0,     0,     0,
     680,     0,     0,     0,     0,     0,   110,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,     0,   110,
     210,   211,   212,   213,   214,   215,   216,     0,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,     0,     0,   135,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,     0,     0,   135,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   210,   211,
     212,   213,   214,   215,   216,     0,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   342,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   210,   211,   212,   213,   214,   215,   216,
       0,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     0,   460,   210,   211,   212,   213,
     214,   215,   216,     0,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,     0,   466,   210,
     211,   212,   213,   214,   215,   216,     0,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     210,   211,   212,   213,   214,   215,   216,     0,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   210,   211,   212,   213,   214,   215,   216,     0,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,     0,     0,     0,     0,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   467,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   210,
     211,   212,   213,   214,   215,   216,   468,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   210,   211,   212,   213,   214,   215,   216,
     469,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   210,   211,   212,   213,   214,   215,
     216,   470,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,     0,     0,   210,   211,   212,
     213,   214,   215,   216,   471,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,     0,     0,
     210,   211,   212,   213,   214,   215,   216,   472,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   210,   211,   212,   213,   214,   215,   216,   473,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   210,   211,   212,   213,   214,   215,   216,   683,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,     0,     0,     0,     0,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   688,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     210,   211,   212,   213,   214,   215,   216,   690,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   210,   211,   212,   213,   214,   215,
     216,   725,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   210,   211,   212,   213,   214,
     215,   216,   769,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   793,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   818,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   210,   211,   212,   213,   214,   215,   216,   838,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   210,   211,   212,   213,   214,   215,   216,
     839,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     0,     0,     0,     0,     0,     0,
     210,   211,   212,   213,   214,   215,   216,   840,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,     0,     0,     0,     0,     0,     0,     0,   858,   210,
     211,   212,   213,   214,   215,   216,     0,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
       0,     0,     0,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   904,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,     0,     0,     0,     0,
       0,     0,     0,   955,     0,     0,     0,     0,     0,     0,
     770,   771,     0,     0,     0,   772,     0,   773,     0,     0,
       0,     0,     0,     0,     0,     0,   961,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   774,   775,
       0,   776,   210,   211,   212,   213,   214,   215,   216,   965,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   877,     0,     0,     1,     0,     0,     2,
     985,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   878,     0,     0,   879,     0,   880,   881,     3,
     185,   986,     0,     0,     0,     0,     0,     0,   882,     0,
       0,     0,     0,     0,   883,   884,     0,     0,     4,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   777,   778,     0,     0,   885,     0,     0,   452,     0,
       0,     0,     0,   257,   258,     0,   259,     0,   260,   261,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
     262,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   886,     0,     0,     0,     0,     0,     0,   263,   264,
     265,   266,     0,     7,   267,   887,     0,     0,   268,     8,
       0,   888,     0,     0,     0,     0,     0,     0,     9,    10,
       0,     0,     0,   269,     0,   578,     0,     0,     0,    11,
     270,     0,    12,     0,   271,     0,     0,    13,     0,     0,
     272,     0,   273,   274,   275,   889,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   276,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,     0,
     277,   278,     0,   279,   280,     0,     0,   281,   282,     0,
       0,     0,     0,   283,   284,     0,     0,     0,   285,     0,
       0,     0,     0,   286,     0,   287,     0,     0,     0,   288,
     210,   211,   212,   213,   214,   215,   216,     0,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,     0,     0,     0,     0,   210,   211,   212,   213,   214,
     215,   216,   582,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   210,   211,   212,   213,
     214,   215,   216,     0,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,     0,     0,     0,
       0,     0,   209,     0,   756,     0,     0,     0,   577,   210,
     211,   212,   213,   214,   215,   216,     0,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
       0,     0,     0,   677,     0,     0,     0,     0,     0,   230,
       0,     0,     0,     0,     0,   757,   210,   211,   212,   213,
     214,   215,   216,     0,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,     0,   210,   211,
     212,   213,   214,   215,   216,   485,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,     0,
     210,   211,   212,   213,   214,   215,   216,   593,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   211,   212,   213,   214,   215,   216,     0,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   212,   213,   214,   215,   216,     0,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     213,   214,   215,   216,     0,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,  -428,  -428,
    -428,  -428,     0,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229
};

static const yytype_int16 yycheck[] =
{
      52,   305,   544,   546,   655,   142,     3,     3,     3,   245,
     411,   412,     3,     3,     3,   143,   417,    20,   419,     3,
     657,     4,     5,     6,     7,   609,   498,    20,     3,   447,
     154,   449,     6,     6,     3,    87,    88,    38,   450,   109,
      74,   143,   172,     8,    18,   154,    98,    99,   100,   154,
      80,   172,   104,    80,   172,    33,    40,   134,   155,   710,
     188,   744,     9,   162,   132,   750,   162,   479,   162,   171,
      94,    54,    94,    20,   162,   781,   179,   207,    79,    66,
     177,   299,     3,   135,     3,   209,   207,    18,    18,   207,
      68,     3,   162,   635,   745,   746,    65,    75,   207,     3,
     130,   643,   207,   130,   172,    80,   209,    85,    10,    11,
      12,    13,    14,    15,    16,   658,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   181,
     232,    40,   209,   185,   168,    66,    66,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   570,   389,   572,   373,   130,   130,   210,   211,
     212,   213,   214,   141,   155,   383,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   306,   591,
     817,   233,   147,   868,   867,   209,   892,   209,   175,   110,
      94,   110,   734,   124,   124,   737,   298,   175,   110,   108,
     784,   132,   132,   206,   108,    95,   195,   196,   197,   198,
     207,   207,   207,   206,   118,   108,   207,   207,   201,   202,
     203,   439,   206,   351,   207,    88,    89,   628,   700,   630,
     631,     0,   360,   137,    59,    59,   145,    92,   375,   206,
     207,   205,   893,   109,   296,   135,   155,   169,    38,     3,
     116,     3,   145,   108,   134,    88,    89,    18,   172,     3,
      67,   151,   184,   315,   316,   501,   808,   172,   504,    93,
     813,   323,    10,    11,    12,    13,    14,    15,    16,    69,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   110,     5,   209,    40,   104,    59,     3,
     352,   353,   207,   355,    63,    64,   208,   209,   360,    20,
      59,   136,   136,   206,   207,   108,   162,   180,   173,    80,
     862,   179,    10,    11,    12,    13,    14,    15,    16,   209,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    56,    93,   170,   170,   180,     3,     8,
       3,   209,   145,    12,   109,   483,    94,    65,   486,   487,
     488,    69,   209,    56,     3,    10,    11,    12,    13,    14,
      15,    16,   424,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   206,   136,   119,     3,
       4,     5,     6,     7,     8,   208,   209,    70,   208,   209,
     452,   109,   454,    17,    18,     3,   458,   459,   185,   461,
      57,    25,    26,   144,   207,     3,   129,   208,   209,    40,
      34,   170,   474,   475,   476,   181,    53,   952,   101,   142,
     558,   132,    59,   485,   122,   108,   129,   208,   209,   147,
      54,   154,   185,   495,    58,   118,    70,    61,    62,   142,
     502,   159,     3,   209,     8,   980,   981,     3,   762,    73,
     107,   154,   170,    77,   206,   207,    93,   206,   115,    96,
     273,   209,   119,   982,   999,   185,   279,   101,   281,     3,
     532,   128,   109,     3,   108,   208,   209,   101,   112,   116,
       9,  1000,  1001,   207,   118,    44,    45,   144,     3,     4,
       5,     6,     7,     8,   207,   152,   208,   209,   560,   136,
     207,   563,    17,    18,    40,  1024,   130,   569,   172,     3,
      25,   209,   208,   209,   207,   179,   578,   208,   209,   207,
     582,   583,   146,   208,   209,   149,   150,   207,   152,   208,
     209,   593,   207,   170,   207,    50,   208,   209,     3,    54,
     208,   209,   206,    58,    53,   209,    61,    62,   208,   209,
     612,    53,   208,   209,   209,   617,    26,    27,    28,    29,
      30,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   208,   209,   207,   260,   261,   262,   263,   650,   265,
     208,   209,   268,   269,   270,   208,   209,   208,   209,   275,
     276,   277,   208,   209,   280,   120,   208,   209,     3,     4,
       5,     6,     7,     8,   207,   130,   207,   679,   208,   209,
     682,   207,    17,    18,   207,    13,    14,   689,    16,   207,
      25,    19,   208,   209,   208,   209,   698,   699,   207,    34,
     207,    36,   207,   705,   706,   208,   209,   404,   405,   164,
     407,   408,   409,   208,   209,   207,   413,   414,   415,    54,
     207,   418,   724,    58,   208,   209,    61,    62,   208,   209,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     208,   209,   207,    53,   208,   209,   208,   209,   760,   761,
     207,   763,   207,   765,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   208,   209,     3,     4,
       5,     6,     7,     8,    23,    24,    25,    26,    27,    28,
      29,    30,    17,    18,    53,   130,   208,   209,   206,   207,
      25,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   814,   148,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   208,   209,   208,   209,     3,    54,
     208,   209,    53,    58,   132,   837,    61,    62,   208,   209,
      53,   843,   208,   209,   208,   209,    44,    45,   850,   185,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     208,   209,   207,     3,     3,     4,     5,     6,     7,     8,
      24,    25,    26,    27,    28,    29,    30,    26,    17,    18,
     208,   209,   208,   209,   385,   386,    25,    26,     3,   493,
     494,   703,   704,     3,     3,   130,   155,   208,     3,   208,
     912,   208,   208,   207,   916,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   926,    54,     3,   208,     3,    58,
     115,   131,    61,    62,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   180,   958,   959,     3,     3,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
       3,     3,   207,     3,     3,     3,     4,     5,     6,     7,
       8,   207,   207,    49,   132,   207,   207,   207,     3,    17,
      18,   130,     3,     3,     3,   133,   177,    25,    10,    11,
      12,    13,    14,    15,    16,   208,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   208,
     208,   207,    30,   207,   207,   207,    54,   116,   116,   132,
      58,   158,   116,    61,    62,   115,   115,     5,     4,   130,
       5,     5,   207,   174,     3,     3,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,    94,   132,   207,     3,
       4,     5,     6,     7,     8,    48,   121,    20,   207,   114,
     208,   134,   208,    17,    18,    98,     3,     3,   207,   116,
      97,    25,   116,   207,     3,    10,    11,    12,    13,    14,
      15,    16,   130,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   208,    59,   208,     3,
      54,     3,   174,   209,    58,   207,   207,    61,    62,   207,
     207,    10,    11,    12,    13,    14,    15,    16,   207,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     3,   116,   116,     3,   207,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   116,     3,   207,
       3,   207,   207,    48,   207,   103,   208,   208,   208,   208,
     208,   208,   208,   115,    20,     3,   130,   209,    10,    11,
      12,    13,    14,    15,    16,   207,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   207,
     207,   155,   207,     3,     4,     5,     6,     7,     8,   207,
     207,     5,     4,   154,     4,   207,     3,    17,    18,     3,
       3,     3,     3,   174,     3,    25,   207,   207,   168,    20,
     207,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   207,   207,   207,    54,     3,   209,     3,    58,   208,
       3,    61,    62,     3,   208,     4,   209,   174,   116,   208,
      37,    20,   116,   207,   209,   208,   208,   207,     3,   207,
      80,     3,     4,     5,     6,     7,     8,   207,    18,     3,
     207,   207,   207,     3,   143,    17,    18,   209,   112,     3,
     175,   140,     3,    25,     3,     4,     5,     6,     7,     8,
     209,     3,   208,   140,     5,   130,   207,   207,    17,    18,
     207,    41,     3,   207,     4,     3,    25,   116,   116,     3,
     130,    40,    54,     5,     5,   207,    58,   207,   207,    61,
      62,   207,   209,   140,   207,   207,   116,   208,   208,   208,
       3,     3,     3,   207,   207,    54,     5,     5,    80,    58,
       3,   208,    61,    62,     3,    59,   208,   105,    66,   464,
     186,   759,   435,   491,   239,   233,    71,   209,   616,   300,
      47,    80,   175,   837,   448,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   659,   813,   207,   130,    10,
      11,    12,    13,    14,    15,    16,   647,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      91,   130,    10,    11,    12,    13,    14,    15,    16,   660,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,   416,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,    -1,    -1,   207,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,    -1,    -1,   207,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    -1,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    80,    58,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   209,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,    -1,    -1,    -1,    -1,    -1,   130,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   130,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,    -1,    -1,   207,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,    -1,    -1,   207,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   208,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,   208,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,   208,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   208,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   208,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     208,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   208,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   208,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   208,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   208,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   208,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   208,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   208,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   208,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   208,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   208,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   208,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   208,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     208,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   208,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   208,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    76,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,
      -1,   102,    10,    11,    12,    13,    14,    15,    16,   208,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    18,    -1,    -1,    32,    -1,    -1,    35,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    40,    -1,    42,    43,    55,
     180,   208,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,   183,    -1,    -1,    80,    -1,    -1,   163,    -1,
      -1,    -1,    -1,    46,    47,    -1,    49,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    -1,   139,    87,   130,    -1,    -1,    91,   145,
      -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,   154,   155,
      -1,    -1,    -1,   106,    -1,   163,    -1,    -1,    -1,   165,
     113,    -1,   168,    -1,   117,    -1,    -1,   173,    -1,    -1,
     123,    -1,   125,   126,   127,   170,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   138,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
     153,   154,    -1,   156,   157,    -1,    -1,   160,   161,    -1,
      -1,    -1,    -1,   166,   167,    -1,    -1,    -1,   171,    -1,
      -1,    -1,    -1,   176,    -1,   178,    -1,    -1,    -1,   182,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    94,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    38,    -1,    -1,    -1,    88,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    79,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    10,    11,
      12,    13,    14,    15,    16,    39,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      10,    11,    12,    13,    14,    15,    16,    39,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    35,    55,    74,    75,   111,   139,   145,   154,
     155,   165,   168,   173,   211,   220,   221,   253,   257,   258,
     261,   262,   263,   264,   265,   266,   276,   277,   280,   282,
     283,   284,   304,   162,   162,    65,    69,   109,   147,   159,
     170,   286,   254,   109,   162,   268,   162,   268,     8,   147,
     305,   306,   234,   162,   268,   278,     3,    65,     0,   205,
       3,     3,   110,   281,     3,     3,   110,   281,   109,   162,
       3,    94,   108,   118,   137,   255,     3,     3,   110,    70,
     101,   108,   112,   118,   269,     3,   269,     9,    20,     3,
      80,   209,     3,     4,     5,     6,     7,     8,    17,    18,
      25,    26,    34,    54,    58,    61,    62,    73,    77,   101,
     130,   146,   149,   150,   152,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   207,   212,   235,   236,     3,
     108,   118,     3,   207,   238,   239,   240,   242,   252,     3,
     211,    33,    68,    75,    85,   141,   175,   206,   185,     3,
      40,   132,   185,     3,     3,   110,   281,   206,   256,     3,
     255,    94,   209,   185,     3,     3,   212,   212,   306,   206,
     207,     9,   212,   212,   212,   180,   212,   219,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   212,     3,
      10,    11,    12,    13,    14,    15,    16,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      40,   237,    94,   209,   206,   237,   221,   238,   154,   209,
      57,   107,   119,   128,   144,   152,   243,   245,    40,   241,
      53,    53,    53,    53,    53,    53,     3,    46,    47,    49,
      51,    52,    63,    81,    82,    83,    84,    87,    91,   106,
     113,   117,   123,   125,   126,   127,   138,   153,   154,   156,
     157,   160,   161,   166,   167,   171,   176,   178,   182,   300,
       3,     3,   132,   185,     3,    26,   179,   222,   172,   238,
       3,     3,   154,   207,   270,   154,   270,     3,   212,   213,
     214,   212,   212,   219,    88,    89,   180,   221,   212,    50,
     120,   164,   212,   217,   212,   212,    26,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   208,   208,
     208,   208,   208,   212,   212,   212,   212,   212,     6,    18,
     130,   207,    13,    14,    16,    19,   212,    34,    36,   148,
     207,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,     3,   238,   236,     3,    92,   108,   173,   249,
     208,   208,     3,   279,   239,   119,   144,   246,   240,   115,
     131,   244,     3,     3,     3,     3,     3,     3,     3,   207,
     296,   296,   296,   296,   296,   296,   207,   296,   296,   296,
      49,   297,   297,   296,   296,   296,   207,   297,   296,   297,
     207,   207,    18,    59,    80,   172,   207,   132,     3,     3,
     108,   145,   206,   207,   302,   303,   212,   133,   228,   238,
     222,   256,     3,   275,     3,   271,   177,   275,   177,   221,
     209,   208,   163,    88,    89,   212,   212,   208,    94,   209,
     208,    94,   212,   209,   209,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   209,   209,   209,     6,   130,   215,
     221,   212,   212,   207,   212,    39,   207,   207,   207,   221,
     222,   237,   116,   116,   116,    20,   206,   209,   222,   244,
     244,   115,   132,   240,   115,    59,    93,   136,   170,   158,
       5,   298,   299,   298,   298,     4,   301,   298,   298,   298,
     299,   299,   298,   298,   298,   301,   299,   298,   299,     5,
       5,   130,   207,   212,   174,     3,   195,   196,   197,   198,
     259,   260,     3,   172,   207,   132,     3,    53,    59,    93,
      96,   109,   116,   136,   170,   287,   288,   294,   241,    48,
     121,   231,   222,    20,   134,   209,   267,   208,   209,   207,
     272,   267,   272,   267,   213,   212,   212,    88,   163,   212,
     212,   212,    94,   114,   218,   218,   212,   212,   212,   213,
     208,   216,   221,    39,   212,   221,   221,   221,   208,    98,
     223,   249,    97,   250,   250,   250,   212,     3,     3,   228,
     240,   212,   132,   172,   247,   248,   240,   207,   116,   116,
     207,     3,   208,   209,   169,   184,    63,    64,   208,   209,
     208,   208,   208,    59,   212,   207,   207,   207,   207,   207,
     208,   209,   172,   207,   174,   259,     3,   207,   302,     3,
     207,   116,   109,   116,   207,   207,   116,   207,   208,   209,
       3,   221,     3,   229,   230,   212,    80,   212,   116,     3,
       3,    80,   212,   274,   209,   267,   267,    88,   212,    97,
     208,   208,   209,   208,   212,   212,   208,   208,   208,   209,
     208,   208,   213,   208,   212,   208,   208,   208,    48,   103,
     227,   115,   207,   207,   207,    20,    20,   206,   231,   212,
     207,   248,   212,   207,   207,     3,   293,     5,   154,     4,
     299,     4,   299,   299,   207,   208,   259,     3,     3,     3,
       3,     3,   174,   259,   207,   208,   172,   207,   287,    59,
      93,   136,   170,   212,   207,   207,   207,     3,   233,   233,
     207,   293,   285,   302,   288,   300,    38,    79,   225,   209,
     122,   209,   168,    20,   208,   209,   273,   212,   212,   208,
      71,    72,    76,    78,    99,   100,   102,   182,   183,   212,
     208,   212,   224,   212,   228,     3,   251,   251,   251,   212,
     212,     3,   233,   208,     3,   290,     3,   289,   208,   209,
     208,     4,   212,   208,   208,   208,   208,   209,   207,   208,
     259,   174,   259,   208,   207,   116,   116,   207,   208,   290,
     233,   233,   208,   209,   208,   289,   208,    37,   295,   230,
     212,   212,   275,    80,   212,    80,   212,   207,   208,   208,
     208,   225,   181,   209,   226,   231,   208,   209,   208,   208,
      20,   208,    18,   208,   209,   208,   209,     3,   208,     3,
     259,   208,   207,   208,   285,   302,   212,   207,   207,   293,
     208,   208,   208,     3,   208,     5,    20,    18,    37,    40,
      42,    43,    53,    59,    60,    80,   116,   130,   136,   170,
     274,   143,   212,   112,   232,     3,   212,   175,   140,     3,
       3,   208,   208,   259,   208,   290,   289,   208,   140,     5,
     130,   207,   207,   207,    41,     3,   207,     4,     4,     5,
       6,     7,    54,   201,   202,   203,   207,   116,   116,   208,
     225,   233,     3,   208,   208,   208,     3,     5,   212,     5,
      40,    59,   136,   170,   212,   207,   207,   207,   212,   207,
     140,   206,   207,   208,   209,   208,   208,   209,   207,   207,
     116,   208,   208,   208,   208,   208,     3,   291,     3,     3,
     291,     5,    44,    45,     5,   212,   212,   208,   209,   206,
     207,   207,   208,   208,   208,   208,   208,   292,     3,     3,
     291,   291,   292,    44,    45,    18,    66,   124,   132,   207,
     208,   208,    18,    66,   175,   105,    95,   135,   151,    74,
     168,   291,   292,   292,    67,   104,    56,   129,   142,   154,
      56,   129,   142,   154,   208,    80,   130,    80,   130,   292
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
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
#line 304 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 310 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 311 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 313 "parser/evoparser.y"
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
#line 331 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 339 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 347 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 353 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 360 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 361 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 362 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 363 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 364 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 365 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 366 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 367 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 368 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 369 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 370 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 371 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 372 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 373 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 374 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 375 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 376 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 378 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 383 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 384 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 385 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 386 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 389 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 390 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 391 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 392 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 393 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 396 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 397 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 400 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_inListCount < MAX_IN_LIST) g_inListExprs[g_inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 401 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_inListCount; _i>0; _i--) g_inListExprs[_i]=g_inListExprs[_i-1]; g_inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_inListCount++; } ;}
    break;

  case 43:
#line 404 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 408 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 46:
#line 408 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 47:
#line 409 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 48:
#line 409 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 49:
#line 410 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 411 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 412 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 416 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 420 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 421 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 422 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 423 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 424 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 425 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 427 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 428 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 429 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 430 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 431 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 432 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 433 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 434 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 435 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 436 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 437 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 438 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 439 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 440 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 447 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 454 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 461 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 467 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 77:
#line 468 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 78:
#line 469 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 79:
#line 472 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 80:
#line 473 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 81:
#line 476 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 82:
#line 477 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 83:
#line 478 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 84:
#line 479 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 85:
#line 480 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 86:
#line 481 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 87:
#line 482 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 88:
#line 483 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 89:
#line 484 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 90:
#line 488 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_caseWhenCount, NULL); ;}
    break;

  case 91:
#line 490 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 92:
#line 492 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, NULL); ;}
    break;

  case 93:
#line 494 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 94:
#line 498 "parser/evoparser.y"
    {
        g_caseWhenCount = 0;
        g_caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 95:
#line 506 "parser/evoparser.y"
    {
        if (g_caseWhenCount < MAX_CASE_WHENS) {
            g_caseWhenExprs[g_caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_caseThenExprs[g_caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 96:
#line 516 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 97:
#line 517 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 98:
#line 520 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 99:
#line 521 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 100:
#line 525 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 533 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 541 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 552 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 104:
#line 561 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_selectDistinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 105:
#line 566 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (11)].intval), (yyvsp[(3) - (11)].intval), (yyvsp[(5) - (11)].intval));
        g_selectDistinct = ((yyvsp[(2) - (11)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (11)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 107:
#line 577 "parser/evoparser.y"
    { emit("WHERE"); g_whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 109:
#line 579 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 110:
#line 582 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_groupByCount = 0;
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 111:
#line 589 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 112:
#line 597 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 598 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 114:
#line 599 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 115:
#line 602 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 603 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 118:
#line 607 "parser/evoparser.y"
    { emit("HAVING"); g_havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 123:
#line 619 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 124:
#line 626 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 125:
#line 627 "parser/evoparser.y"
    { emit("LIMIT 1"); g_limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 126:
#line 628 "parser/evoparser.y"
    { emit("LIMIT 2"); g_offsetExpr = (yyvsp[(2) - (4)].exprval); g_limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 127:
#line 629 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_limitExpr = (yyvsp[(2) - (4)].exprval); g_offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 129:
#line 633 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 130:
#line 636 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 131:
#line 637 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 132:
#line 640 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 133:
#line 641 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 134:
#line 642 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 135:
#line 643 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 136:
#line 644 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 137:
#line 645 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 138:
#line 646 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 139:
#line 647 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 140:
#line 648 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 141:
#line 651 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 142:
#line 652 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 143:
#line 654 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 144:
#line 662 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 145:
#line 667 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 146:
#line 668 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 147:
#line 669 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 148:
#line 672 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 149:
#line 673 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 152:
#line 682 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 153:
#line 687 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 154:
#line 688 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 155:
#line 689 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 158:
#line 698 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 159:
#line 700 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 160:
#line 702 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 161:
#line 704 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 162:
#line 706 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 163:
#line 709 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 164:
#line 710 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 165:
#line 711 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 166:
#line 714 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 167:
#line 715 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 168:
#line 718 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 169:
#line 719 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 170:
#line 722 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 171:
#line 723 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 172:
#line 724 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 175:
#line 731 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 176:
#line 732 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 177:
#line 737 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 178:
#line 739 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 179:
#line 741 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 181:
#line 745 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 182:
#line 746 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 183:
#line 749 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 184:
#line 750 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 185:
#line 753 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 186:
#line 758 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 187:
#line 766 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 188:
#line 773 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 189:
#line 774 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 190:
#line 775 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 191:
#line 776 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 192:
#line 780 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 193:
#line 783 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 194:
#line 784 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 197:
#line 789 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 198:
#line 794 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 199:
#line 801 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_dropIfExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 200:
#line 808 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_dropIfExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 201:
#line 818 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 202:
#line 825 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 203:
#line 832 "parser/evoparser.y"
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
#line 842 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 205:
#line 850 "parser/evoparser.y"
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
#line 860 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 207:
#line 868 "parser/evoparser.y"
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
#line 877 "parser/evoparser.y"
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
#line 886 "parser/evoparser.y"
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
#line 898 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 211:
#line 903 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 212:
#line 908 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 213:
#line 914 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 214:
#line 921 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 215:
#line 928 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 216:
#line 935 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 217:
#line 945 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 218:
#line 952 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 219:
#line 961 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 220:
#line 968 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 221:
#line 977 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 222:
#line 984 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 223:
#line 993 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 224:
#line 1000 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 225:
#line 1006 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 226:
#line 1016 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 227:
#line 1020 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 228:
#line 1026 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 229:
#line 1032 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 230:
#line 1039 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 231:
#line 1045 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 232:
#line 1052 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 233:
#line 1058 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 234:
#line 1064 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 235:
#line 1070 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 236:
#line 1076 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 237:
#line 1082 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 238:
#line 1090 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 239:
#line 1097 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 241:
#line 1105 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 242:
#line 1108 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 243:
#line 1109 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 244:
#line 1110 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 245:
#line 1111 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 246:
#line 1112 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 250:
#line 1119 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 251:
#line 1123 "parser/evoparser.y"
    {
        g_insertColumnCount = 0;
        strncpy(g_insertColumns[g_insertColumnCount], (yyvsp[(1) - (1)].strval), 127);
        g_insertColumns[g_insertColumnCount][127] = '\0';
        g_insertColumnCount++;
        emit("COLUMN %s", (yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 252:
#line 1133 "parser/evoparser.y"
    {
        if (g_insertColumnCount < 64) {
            strncpy(g_insertColumns[g_insertColumnCount], (yyvsp[(3) - (3)].strval), 127);
            g_insertColumns[g_insertColumnCount][127] = '\0';
            g_insertColumnCount++;
        }
        emit("COLUMN %s", (yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
        (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1;
    ;}
    break;

  case 253:
#line 1145 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 254:
#line 1146 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 255:
#line 1146 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 256:
#line 1149 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 257:
#line 1150 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 258:
#line 1151 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 259:
#line 1152 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 260:
#line 1156 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 261:
#line 1159 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 262:
#line 1160 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 263:
#line 1161 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 264:
#line 1162 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 265:
#line 1168 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 266:
#line 1174 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 267:
#line 1179 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 268:
#line 1184 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 269:
#line 1189 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 270:
#line 1196 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 271:
#line 1201 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 272:
#line 1202 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 273:
#line 1203 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 274:
#line 1208 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) {
            yyerror("bad update assignment to %s", (yyvsp[(1) - (3)].strval));
            YYERROR; 
        }
        emit("ASSIGN1 %s", (yyvsp[(1) - (3)].strval));
        GetUpdateColumnName((yyvsp[(1) - (3)].strval)); /*for first column name after the SET Terminal symbol*/
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 275:
#line 1219 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) {
            yyerror("bad update assignment to %s", (yyvsp[(1) - (5)].strval));
            YYERROR;
        }
        emit("ASSIGN2 %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval));
        free((yyvsp[(1) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 276:
#line 1230 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) {
            yyerror("bad update assignment to %s", (yyvsp[(3) - (5)].strval));
            YYERROR;
        }
        emit("ASSIGN3 %s", (yyvsp[(3) - (5)].strval));
        GetUpdateColumnName((yyvsp[(3) - (5)].strval)); /*for other column names*/
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 277:
#line 1241 "parser/evoparser.y"
    {
        if ((yyvsp[(6) - (7)].subtok) != 4) {
            yyerror("bad update assignment to %s.$s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval));
            YYERROR;
        }
        emit("ASSIGN4 %s.%s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval));
        free((yyvsp[(3) - (7)].strval));
        free((yyvsp[(5) - (7)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 278:
#line 1254 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 279:
#line 1258 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 280:
#line 1259 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 281:
#line 1262 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 282:
#line 1263 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 283:
#line 1267 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 284:
#line 1272 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 285:
#line 1274 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 286:
#line 1276 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 287:
#line 1278 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 288:
#line 1280 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 289:
#line 1284 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 290:
#line 1288 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 291:
#line 1289 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 292:
#line 1294 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 293:
#line 1302 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 294:
#line 1311 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 296:
#line 1315 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 297:
#line 1316 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 298:
#line 1321 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 299:
#line 1325 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 300:
#line 1330 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 301:
#line 1334 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 302:
#line 1337 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 303:
#line 1338 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 304:
#line 1341 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 305:
#line 1342 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 306:
#line 1345 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 307:
#line 1346 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 308:
#line 1347 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 309:
#line 1348 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 310:
#line 1349 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 311:
#line 1350 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 312:
#line 1351 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 313:
#line 1352 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 314:
#line 1354 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 315:
#line 1356 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 316:
#line 1358 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 317:
#line 1360 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 318:
#line 1362 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 319:
#line 1364 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 320:
#line 1367 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 321:
#line 1368 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 322:
#line 1371 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 323:
#line 1372 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 324:
#line 1375 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 325:
#line 1376 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 327:
#line 1380 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 328:
#line 1381 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 329:
#line 1382 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 330:
#line 1383 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 331:
#line 1384 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 332:
#line 1385 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 333:
#line 1386 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 334:
#line 1387 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 335:
#line 1388 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 336:
#line 1389 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 337:
#line 1390 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 338:
#line 1391 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 339:
#line 1392 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 340:
#line 1393 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 341:
#line 1394 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 342:
#line 1395 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 343:
#line 1396 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 344:
#line 1399 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 345:
#line 1400 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 346:
#line 1403 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 347:
#line 1405 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 348:
#line 1413 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 349:
#line 1414 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 351:
#line 1416 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 352:
#line 1417 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 353:
#line 1418 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 354:
#line 1419 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 355:
#line 1420 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 356:
#line 1421 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 357:
#line 1422 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 358:
#line 1423 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 359:
#line 1424 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 360:
#line 1431 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 361:
#line 1432 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 362:
#line 1433 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 363:
#line 1434 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 364:
#line 1435 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 365:
#line 1436 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 366:
#line 1437 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 367:
#line 1438 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 368:
#line 1439 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 369:
#line 1440 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 370:
#line 1441 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 371:
#line 1442 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 372:
#line 1443 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 373:
#line 1444 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 374:
#line 1445 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 375:
#line 1446 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 376:
#line 1447 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 377:
#line 1448 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 378:
#line 1449 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 379:
#line 1450 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 380:
#line 1451 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 381:
#line 1454 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 382:
#line 1455 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 383:
#line 1456 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 384:
#line 1459 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 385:
#line 1460 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 386:
#line 1463 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 387:
#line 1464 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 388:
#line 1465 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 390:
#line 1469 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 391:
#line 1470 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 392:
#line 1474 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 393:
#line 1475 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 394:
#line 1476 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 395:
#line 1477 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 396:
#line 1478 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 397:
#line 1479 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 398:
#line 1480 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 399:
#line 1481 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 400:
#line 1482 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 401:
#line 1483 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 402:
#line 1484 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 403:
#line 1485 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 404:
#line 1486 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 405:
#line 1487 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 406:
#line 1488 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 407:
#line 1489 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 408:
#line 1490 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 409:
#line 1491 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 410:
#line 1492 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 411:
#line 1493 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 412:
#line 1494 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 413:
#line 1495 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 414:
#line 1496 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 415:
#line 1497 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 416:
#line 1498 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 417:
#line 1499 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 418:
#line 1500 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 419:
#line 1501 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 420:
#line 1502 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 421:
#line 1503 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 422:
#line 1504 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 423:
#line 1505 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 424:
#line 1508 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 425:
#line 1509 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 426:
#line 1513 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 427:
#line 1516 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 428:
#line 1517 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 429:
#line 1518 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 430:
#line 1522 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 431:
#line 1525 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 432:
#line 1526 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 436:
#line 1530 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 437:
#line 1531 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5497 "parser/evoparser.tab.c"
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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
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
		      yytoken, &yylval);
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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


#line 1534 "parser/evoparser.y"

void emit(char *s, ...)
{
	extern int yylineno;
	va_list ap;
	if (g_gui_mode) return;
	va_start(ap, s);
	printf("rpn: ");
	vfprintf(stdout, s, ap);
	printf("\n");
}
void yyerror(char *s, ...)
{
	extern int yylineno;
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "%d: error: ", yylineno);
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
}
