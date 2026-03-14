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
     IDENTITY = 287,
     BLOB = 288,
     BOOLEAN = 289,
     BY = 290,
     BINARY = 291,
     BOTH = 292,
     BIGINT = 293,
     BIT = 294,
     CONSTRAINT = 295,
     CURRENT_TIMESTAMP = 296,
     CREATE = 297,
     CASCADE = 298,
     CROSS = 299,
     CASE = 300,
     CHECK = 301,
     COMMENT = 302,
     CURRENT_DATE = 303,
     CURRENT_TIME = 304,
     CHAR = 305,
     COLLATE = 306,
     DATABASE = 307,
     DEFERRABLE = 308,
     DEFERRED = 309,
     DISABLE = 310,
     DOMAIN = 311,
     DELAYED = 312,
     DAY_HOUR = 313,
     DAY_MICROSECOND = 314,
     DISTINCT = 315,
     DELETE = 316,
     DROP = 317,
     DAY_MINUTE = 318,
     DISTINCTROW = 319,
     DAY_SECOND = 320,
     DESC = 321,
     DEFAULT = 322,
     DOUBLE = 323,
     DATETIME = 324,
     DECIMAL = 325,
     DATE = 326,
     ENABLE = 327,
     ESCAPED = 328,
     ENUM = 329,
     END = 330,
     ELSE = 331,
     EXPLAIN = 332,
     FLOAT = 333,
     FORCE = 334,
     FOREIGN = 335,
     FROM = 336,
     FULL = 337,
     FULLTEXT = 338,
     FOR = 339,
     GROUP = 340,
     HOUR_MINUTE = 341,
     HOUR_MICROSECOND = 342,
     HIGH_PRIORITY = 343,
     HOUR_SECOND = 344,
     HAVING = 345,
     IMMEDIATE = 346,
     INITIALLY = 347,
     INTEGER = 348,
     INNER = 349,
     IGNORE = 350,
     INDEX = 351,
     IF = 352,
     INSERT = 353,
     INTO = 354,
     INT = 355,
     INTERVAL = 356,
     JOIN = 357,
     KEY = 358,
     LONGTEXT = 359,
     LOW_PRIORITY = 360,
     LEFT = 361,
     LEADING = 362,
     LIMIT = 363,
     OFFSET = 364,
     LONGBLOB = 365,
     MATCH = 366,
     MEDIUMTEXT = 367,
     MEDIUMBLOB = 368,
     MEDIUMINT = 369,
     NATURAL = 370,
     NO_ACTION = 371,
     NULLX = 372,
     OUTER = 373,
     ON = 374,
     ORDER = 375,
     ONDUPLICATE = 376,
     PARTIAL = 377,
     PRIMARY = 378,
     QUICK = 379,
     REAL = 380,
     RECLAIM = 381,
     REFERENCES = 382,
     RENAME = 383,
     RESTRICT = 384,
     ROLLUP = 385,
     RIGHT = 386,
     REPLACE = 387,
     SQL_SMALL_RESULT = 388,
     SCHEMA = 389,
     SOME = 390,
     SQL_CALC_FOUND_ROWS = 391,
     SQL_BIG_RESULT = 392,
     SIMPLE = 393,
     STRAIGHT_JOIN = 394,
     SMALLINT = 395,
     SET = 396,
     SELECT = 397,
     TINYTEXT = 398,
     TINYINT = 399,
     TO = 400,
     TEMPORARY = 401,
     TEXT = 402,
     TIMESTAMP = 403,
     TABLE = 404,
     THEN = 405,
     TRAILING = 406,
     TRUNCATE = 407,
     TINYBLOB = 408,
     TIME = 409,
     UPDATE = 410,
     UNSIGNED = 411,
     UNIQUE = 412,
     UUID = 413,
     USING = 414,
     USE = 415,
     HASH = 416,
     VALIDATE = 417,
     VARCHAR = 418,
     VALUES = 419,
     VARBINARY = 420,
     WHERE = 421,
     WHEN = 422,
     WITH = 423,
     YEAR = 424,
     YEAR_MONTH = 425,
     ZEROFILL = 426,
     EXISTS = 427,
     FSUBSTRING = 428,
     FTRIM = 429,
     FDATE_ADD = 430,
     FDATE_SUB = 431,
     FCOUNT = 432,
     FSUM = 433,
     FAVG = 434,
     FMIN = 435,
     FMAX = 436,
     FUPPER = 437,
     FLOWER = 438,
     FLENGTH = 439,
     FCONCAT = 440,
     FREPLACE = 441,
     FCOALESCE = 442,
     FGEN_RANDOM_UUID = 443,
     FGEN_RANDOM_UUID_V7 = 444,
     FSNOWFLAKE_ID = 445,
     FLAST_INSERT_ID = 446
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
#define IDENTITY 287
#define BLOB 288
#define BOOLEAN 289
#define BY 290
#define BINARY 291
#define BOTH 292
#define BIGINT 293
#define BIT 294
#define CONSTRAINT 295
#define CURRENT_TIMESTAMP 296
#define CREATE 297
#define CASCADE 298
#define CROSS 299
#define CASE 300
#define CHECK 301
#define COMMENT 302
#define CURRENT_DATE 303
#define CURRENT_TIME 304
#define CHAR 305
#define COLLATE 306
#define DATABASE 307
#define DEFERRABLE 308
#define DEFERRED 309
#define DISABLE 310
#define DOMAIN 311
#define DELAYED 312
#define DAY_HOUR 313
#define DAY_MICROSECOND 314
#define DISTINCT 315
#define DELETE 316
#define DROP 317
#define DAY_MINUTE 318
#define DISTINCTROW 319
#define DAY_SECOND 320
#define DESC 321
#define DEFAULT 322
#define DOUBLE 323
#define DATETIME 324
#define DECIMAL 325
#define DATE 326
#define ENABLE 327
#define ESCAPED 328
#define ENUM 329
#define END 330
#define ELSE 331
#define EXPLAIN 332
#define FLOAT 333
#define FORCE 334
#define FOREIGN 335
#define FROM 336
#define FULL 337
#define FULLTEXT 338
#define FOR 339
#define GROUP 340
#define HOUR_MINUTE 341
#define HOUR_MICROSECOND 342
#define HIGH_PRIORITY 343
#define HOUR_SECOND 344
#define HAVING 345
#define IMMEDIATE 346
#define INITIALLY 347
#define INTEGER 348
#define INNER 349
#define IGNORE 350
#define INDEX 351
#define IF 352
#define INSERT 353
#define INTO 354
#define INT 355
#define INTERVAL 356
#define JOIN 357
#define KEY 358
#define LONGTEXT 359
#define LOW_PRIORITY 360
#define LEFT 361
#define LEADING 362
#define LIMIT 363
#define OFFSET 364
#define LONGBLOB 365
#define MATCH 366
#define MEDIUMTEXT 367
#define MEDIUMBLOB 368
#define MEDIUMINT 369
#define NATURAL 370
#define NO_ACTION 371
#define NULLX 372
#define OUTER 373
#define ON 374
#define ORDER 375
#define ONDUPLICATE 376
#define PARTIAL 377
#define PRIMARY 378
#define QUICK 379
#define REAL 380
#define RECLAIM 381
#define REFERENCES 382
#define RENAME 383
#define RESTRICT 384
#define ROLLUP 385
#define RIGHT 386
#define REPLACE 387
#define SQL_SMALL_RESULT 388
#define SCHEMA 389
#define SOME 390
#define SQL_CALC_FOUND_ROWS 391
#define SQL_BIG_RESULT 392
#define SIMPLE 393
#define STRAIGHT_JOIN 394
#define SMALLINT 395
#define SET 396
#define SELECT 397
#define TINYTEXT 398
#define TINYINT 399
#define TO 400
#define TEMPORARY 401
#define TEXT 402
#define TIMESTAMP 403
#define TABLE 404
#define THEN 405
#define TRAILING 406
#define TRUNCATE 407
#define TINYBLOB 408
#define TIME 409
#define UPDATE 410
#define UNSIGNED 411
#define UNIQUE 412
#define UUID 413
#define USING 414
#define USE 415
#define HASH 416
#define VALIDATE 417
#define VARCHAR 418
#define VALUES 419
#define VARBINARY 420
#define WHERE 421
#define WHEN 422
#define WITH 423
#define YEAR 424
#define YEAR_MONTH 425
#define ZEROFILL 426
#define EXISTS 427
#define FSUBSTRING 428
#define FTRIM 429
#define FDATE_ADD 430
#define FDATE_SUB 431
#define FCOUNT 432
#define FSUM 433
#define FAVG 434
#define FMIN 435
#define FMAX 436
#define FUPPER 437
#define FLOWER 438
#define FLENGTH 439
#define FCONCAT 440
#define FREPLACE 441
#define FCOALESCE 442
#define FGEN_RANDOM_UUID 443
#define FGEN_RANDOM_UUID_V7 444
#define FSNOWFLAKE_ID 445
#define FLAST_INSERT_ID 446




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
#line 503 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 516 "parser/evoparser.tab.c"

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
#define YYLAST   2756

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  206
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  431
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1016

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   446

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     203,   204,    26,    24,   205,    25,   202,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   201,
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
     194,   195,   196,   197,   198,   199,   200
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
    1696,  1700,  1706,  1711,  1717,  1725,  1726,  1730,  1736,  1737,
    1739,  1740,  1743,  1746,  1747,  1752,  1756,  1759,  1763,  1767,
    1771,  1775,  1779,  1783,  1787,  1791,  1795,  1799,  1801,  1803,
    1805,  1807,  1809,  1813,  1819,  1822,  1827,  1829,  1831,  1833,
    1835,  1839,  1843,  1847,  1851,  1857,  1863,  1865,  1867,  1869,
    1873,  1877,  1878,  1880,  1882,  1884,  1888,  1892,  1895,  1897,
    1901,  1905
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     207,     0,    -1,   216,   201,    -1,   216,   201,   207,    -1,
       3,    -1,     3,   202,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   126,    -1,   208,    24,
     208,    -1,   208,    25,   208,    -1,   208,    26,   208,    -1,
     208,    27,   208,    -1,   208,    28,   208,    -1,   208,    29,
     208,    -1,    25,   208,    -1,   203,   208,   204,    -1,   208,
      12,   208,    -1,   208,    10,   208,    -1,   208,    11,   208,
      -1,   208,    21,   208,    -1,   208,    22,   208,    -1,   208,
      30,   208,    -1,   208,    23,   208,    -1,    18,   208,    -1,
      17,   208,    -1,   208,    20,   208,    -1,   208,    20,   203,
     217,   204,    -1,   208,    20,    36,   203,   217,   204,    -1,
     208,    20,   144,   203,   217,   204,    -1,   208,    20,    34,
     203,   217,   204,    -1,   208,    15,   126,    -1,   208,    15,
      18,   126,    -1,   208,    15,     6,    -1,   208,    15,    18,
       6,    -1,     8,     9,   208,    -1,   208,    19,   208,    39,
     208,    -1,   208,    18,    19,   208,    39,   208,    -1,   208,
      -1,   208,   205,   209,    -1,    -1,   209,    -1,    -1,   208,
      16,   203,   211,   209,   204,    -1,    -1,   208,    18,    16,
     203,   212,   209,   204,    -1,   208,    16,   203,   217,   204,
      -1,   208,    18,    16,   203,   217,   204,    -1,   181,   203,
     217,   204,    -1,     3,   203,   210,   204,    -1,   186,   203,
      26,   204,    -1,   186,   203,   208,   204,    -1,   187,   203,
     208,   204,    -1,   188,   203,   208,   204,    -1,   189,   203,
     208,   204,    -1,   190,   203,   208,   204,    -1,   182,   203,
     208,   205,   208,   205,   208,   204,    -1,   182,   203,   208,
     205,   208,   204,    -1,   182,   203,   208,    90,   208,   204,
      -1,   182,   203,   208,    90,   208,    93,   208,   204,    -1,
     183,   203,   208,   204,    -1,   183,   203,   213,   208,    90,
     208,   204,    -1,   183,   203,   213,    90,   208,   204,    -1,
     191,   203,   208,   204,    -1,   192,   203,   208,   204,    -1,
     193,   203,   208,   204,    -1,   194,   203,   208,   205,   208,
     204,    -1,   195,   203,   208,   205,   208,   205,   208,   204,
      -1,   196,   203,   208,   205,   208,   204,    -1,   197,   203,
     204,    -1,   198,   203,   204,    -1,   199,   203,   204,    -1,
     200,   203,   204,    -1,   116,    -1,   160,    -1,    46,    -1,
     184,   203,   208,   205,   214,   204,    -1,   185,   203,   208,
     205,   214,   204,    -1,   110,   208,    67,    -1,   110,   208,
      68,    -1,   110,   208,    72,    -1,   110,   208,    74,    -1,
     110,   208,   179,    -1,   110,   208,   178,    -1,   110,   208,
      96,    -1,   110,   208,    95,    -1,   110,   208,    98,    -1,
      54,   208,   215,    84,    -1,    54,   208,   215,    85,   208,
      84,    -1,    54,   215,    84,    -1,    54,   215,    85,   208,
      84,    -1,   176,   208,   159,   208,    -1,   215,   176,   208,
     159,   208,    -1,   208,    14,   208,    -1,   208,    18,    14,
     208,    -1,   208,    13,   208,    -1,   208,    18,    13,   208,
      -1,    50,    -1,    57,    -1,    58,    -1,   217,    -1,   151,
     230,   231,    -1,   151,   230,   231,    90,   234,   218,   219,
     223,   224,   227,   228,    -1,    -1,   175,   208,    -1,    -1,
      94,    44,   220,   222,    -1,   208,   221,    -1,   220,   205,
     208,   221,    -1,    -1,    38,    -1,    75,    -1,    -1,   177,
     139,    -1,    -1,    99,   208,    -1,    -1,   129,    44,   225,
      -1,   226,    -1,   225,   205,   226,    -1,     3,   221,    -1,
      -1,   117,   208,    -1,   117,   208,   205,   208,    -1,   117,
     208,   118,   208,    -1,    -1,   108,   229,    -1,     3,    -1,
     229,   205,     3,    -1,    -1,   230,    34,    -1,   230,    69,
      -1,   230,    73,    -1,   230,    97,    -1,   230,   148,    -1,
     230,   142,    -1,   230,   146,    -1,   230,   145,    -1,   232,
      -1,   231,   205,   232,    -1,    26,    -1,   208,   233,    -1,
      40,     3,    -1,     3,    -1,    -1,   235,    -1,   234,   205,
     235,    -1,   236,    -1,   238,    -1,     3,   233,   245,    -1,
       3,   202,     3,   233,   245,    -1,   248,   237,     3,    -1,
     203,   234,   204,    -1,    40,    -1,    -1,   235,   239,   111,
     236,   243,    -1,   235,   148,   236,    -1,   235,   148,   236,
     128,   208,    -1,   235,   241,   240,   111,   236,   244,    -1,
     235,   124,   242,   111,   236,    -1,    -1,   103,    -1,    53,
      -1,    -1,   127,    -1,   115,    -1,   140,    -1,   115,   240,
      -1,   140,   240,    -1,    -1,    -1,   244,    -1,   128,   208,
      -1,   168,   203,   229,   204,    -1,   169,   112,   246,   203,
     247,   204,    -1,   104,   112,   246,   203,   247,   204,    -1,
      88,   112,   246,   203,   247,   204,    -1,    -1,    93,   111,
      -1,    -1,     3,    -1,   247,   205,     3,    -1,   203,   217,
     204,    -1,   249,    -1,    70,   250,    90,     3,   218,   224,
     227,    -1,   250,   114,    -1,   250,   133,    -1,   250,   104,
      -1,    -1,    70,   250,   251,    90,   234,   218,    -1,     3,
     252,    -1,   251,   205,     3,   252,    -1,    -1,   202,    26,
      -1,    70,   250,    90,   251,   168,   234,   218,    -1,   253,
      -1,    71,   158,     3,    -1,    71,   158,   106,   181,     3,
      -1,   254,    -1,    51,   105,     3,   128,     3,   203,   255,
     204,    -1,    51,   105,   106,   181,     3,   128,     3,   203,
     255,   204,    -1,    51,   166,   105,     3,   128,     3,   203,
     255,   204,    -1,    51,   166,   105,   106,   181,     3,   128,
       3,   203,   255,   204,    -1,    51,   105,     3,   128,     3,
     168,   170,   203,   255,   204,    -1,    51,   105,   106,   181,
       3,   128,     3,   168,   170,   203,   255,   204,    -1,    51,
     166,   105,     3,   128,     3,   168,   170,   203,   255,   204,
      -1,    51,   166,   105,   106,   181,     3,   128,     3,   168,
     170,   203,   255,   204,    -1,     3,    -1,   255,   205,     3,
      -1,   256,    -1,   191,   203,     3,   204,    -1,   192,   203,
       3,   204,    -1,   193,   203,     3,   204,    -1,   194,   203,
       3,   205,     3,   204,    -1,   257,    -1,    71,   105,     3,
      -1,   258,    -1,   161,   158,     3,    -1,   259,    -1,   135,
     158,     3,    -1,   260,    -1,    35,   158,     3,    -1,    35,
     158,     3,   202,     3,    -1,   261,    -1,    32,   158,     3,
      33,    49,     3,    55,   203,   208,   204,    -1,    32,   158,
       3,    33,    49,     3,   166,   203,   289,   204,    -1,    32,
     158,     3,    33,    49,     3,    89,   112,   203,   286,   204,
     136,     3,   203,   287,   204,   288,    -1,    32,   158,     3,
      33,    49,     3,    55,   203,   208,   204,    18,   171,    -1,
      32,   158,     3,    33,    49,     3,    89,   112,   203,   286,
     204,   136,     3,   203,   287,   204,   288,    18,   171,    -1,
      32,   158,     3,    33,    49,     3,   132,   112,   203,   285,
     204,    -1,    32,   158,     3,    71,    49,     3,    -1,    32,
     158,     3,   137,    49,     3,   154,     3,    -1,    32,   158,
       3,    81,    49,     3,    -1,    32,   158,     3,    64,    49,
       3,    -1,    32,   158,     3,   171,    49,     3,    -1,   262,
      -1,   107,   264,   265,     3,   266,   173,   268,   263,    -1,
      -1,   130,   112,   164,   271,    -1,    -1,   264,   114,    -1,
     264,    66,    -1,   264,    97,    -1,   264,   104,    -1,   108,
      -1,    -1,    -1,   203,   267,   204,    -1,     3,    -1,   267,
     205,     3,    -1,   203,   270,   204,    -1,    -1,   268,   205,
     269,   203,   270,   204,    -1,   208,    -1,    76,    -1,   270,
     205,   208,    -1,   270,   205,    76,    -1,   107,   264,   265,
       3,   150,   271,   263,    -1,     3,    20,   208,    -1,     3,
      20,    76,    -1,   271,   205,     3,    20,   208,    -1,   271,
     205,     3,    20,    76,    -1,   272,    -1,   141,   264,   265,
       3,   266,   173,   268,   263,    -1,   141,   264,   265,     3,
     150,   271,   263,    -1,   141,   264,   265,     3,   266,   217,
     263,    -1,   273,    -1,   164,   274,   234,   150,   275,   218,
     224,   227,    -1,    -1,   264,   114,    -1,   264,   104,    -1,
       3,    20,   208,    -1,     3,   202,     3,    20,   208,    -1,
     275,   205,     3,    20,   208,    -1,   275,   205,     3,   202,
       3,    20,   208,    -1,   276,    -1,    51,    61,   277,     3,
      -1,    51,   143,   277,     3,    -1,    -1,   106,   181,    -1,
     278,    -1,    51,    65,     3,    40,   296,    -1,    51,    65,
       3,    40,   296,    76,   208,    -1,    51,    65,     3,    40,
     296,    18,   126,    -1,    51,    65,     3,    40,   296,    55,
     203,   208,   204,    -1,    51,    65,     3,    40,   296,    18,
     126,    55,   203,   208,   204,    -1,   279,    -1,   169,     3,
      -1,   169,    61,     3,    -1,   280,    -1,    51,   282,   158,
     277,     3,   203,   283,   204,   281,    -1,    51,   282,   158,
     277,     3,   202,     3,   203,   283,   204,   281,    -1,    -1,
     281,    37,    20,     5,    -1,   281,    37,     5,    -1,    51,
     282,   158,   277,     3,   203,   283,   204,   298,    -1,    51,
     282,   158,   277,     3,   298,    -1,    51,   282,   158,   277,
       3,   202,     3,   203,   283,   204,   298,    -1,    51,   282,
     158,   277,     3,   202,     3,   298,    -1,    -1,   155,    -1,
     284,    -1,   283,   205,   284,    -1,   132,   112,   203,   285,
     204,    -1,    49,     3,   132,   112,   203,   285,   204,    -1,
     112,   203,   229,   204,    -1,   105,   203,   229,   204,    -1,
      92,   105,   203,   229,   204,    -1,    92,   112,   203,   229,
     204,    -1,    55,   203,   208,   204,    -1,    49,     3,    55,
     203,   208,   204,    -1,    89,   112,   203,   286,   204,   136,
       3,   203,   287,   204,   288,    -1,    89,   112,   203,   286,
     204,   136,     3,   202,     3,   203,   287,   204,   288,    -1,
      49,     3,    89,   112,   203,   286,   204,   136,     3,   203,
     287,   204,   288,    -1,    49,     3,    89,   112,   203,   286,
     204,   136,     3,   202,     3,   203,   287,   204,   288,    -1,
     166,   203,   289,   204,    -1,    49,     3,   166,   203,   289,
     204,    -1,     3,    -1,   285,   205,     3,    -1,     3,    -1,
     286,   205,     3,    -1,     3,    -1,   287,   205,     3,    -1,
      -1,   288,   128,    70,    52,    -1,   288,   128,    70,   150,
     126,    -1,   288,   128,    70,   138,    -1,   288,   128,    70,
     150,    76,    -1,   288,   128,   164,    52,    -1,   288,   128,
     164,   150,   126,    -1,   288,   128,   164,   138,    -1,   288,
     128,   164,   150,    76,    -1,   288,   128,    70,   125,    -1,
     288,   128,   164,   125,    -1,   288,   120,    91,    -1,   288,
     120,   147,    -1,   288,   120,   131,    -1,   288,    62,    -1,
     288,    18,    62,    -1,   288,    62,   101,    63,    -1,   288,
      62,   101,   100,    -1,     3,    -1,   289,   205,     3,    -1,
      -1,   290,     3,   296,   291,    -1,    -1,   291,    18,   126,
      -1,   291,   126,    -1,   291,    76,     4,    -1,   291,    76,
       5,    -1,   291,    76,     7,    -1,   291,    76,     6,    -1,
     291,    76,   197,   203,   204,    -1,   291,    76,   198,   203,
     204,    -1,   291,    76,   199,   203,   204,    -1,   291,    76,
      50,    -1,   291,    76,   203,   208,   204,    -1,   291,    37,
      -1,   291,    37,   203,     5,   205,     5,   204,    -1,   291,
      37,   203,     5,   204,    -1,   291,    41,   203,     5,   205,
       5,   204,    -1,   291,    41,   203,     5,   204,    -1,   291,
      41,    -1,   291,   166,   112,    -1,   291,   166,    -1,   291,
     132,   112,    -1,   291,   112,    -1,   291,    56,     4,    -1,
     291,    55,   203,   208,   204,    -1,   291,    49,     3,   166,
      -1,   291,    49,     3,   132,   112,    -1,   291,    49,     3,
      55,   203,   208,   204,    -1,    -1,   203,     5,   204,    -1,
     203,     5,   205,     5,   204,    -1,    -1,    45,    -1,    -1,
     294,   165,    -1,   294,   180,    -1,    -1,   295,    59,   150,
       4,    -1,   295,    60,     4,    -1,    48,   292,    -1,   153,
     292,   294,    -1,   149,   292,   294,    -1,   123,   292,   294,
      -1,   109,   292,   294,    -1,   102,   292,   294,    -1,    47,
     292,   294,    -1,   134,   292,   294,    -1,    77,   292,   294,
      -1,    87,   292,   294,    -1,    79,   292,   294,    -1,    80,
      -1,   163,    -1,   157,    -1,    78,    -1,   178,    -1,    59,
     292,   295,    -1,   172,   203,     5,   204,   295,    -1,    45,
     292,    -1,   174,   203,     5,   204,    -1,   162,    -1,    42,
      -1,   122,    -1,   119,    -1,   152,   293,   295,    -1,   156,
     293,   295,    -1,   121,   293,   295,    -1,   113,   293,   295,
      -1,    83,   203,   297,   204,   295,    -1,   150,   203,   297,
     204,   295,    -1,    43,    -1,   167,    -1,     4,    -1,   297,
     205,     4,    -1,   299,   237,   217,    -1,    -1,   104,    -1,
     141,    -1,   300,    -1,   150,   143,     3,    -1,   150,   143,
      76,    -1,   150,   301,    -1,   302,    -1,   301,   205,   302,
      -1,     8,    20,   208,    -1,     8,     9,   208,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   293,   293,   294,   299,   306,   307,   308,   326,   334,
     342,   348,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     379,   380,   381,   382,   385,   386,   387,   388,   389,   392,
     393,   396,   397,   400,   401,   404,   404,   405,   405,   406,
     407,   408,   412,   416,   417,   418,   419,   420,   421,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   443,   450,   457,   463,   464,   465,   468,
     469,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     483,   485,   487,   489,   493,   501,   512,   513,   516,   517,
     520,   528,   536,   547,   557,   558,   572,   573,   574,   575,
     578,   585,   593,   594,   595,   598,   599,   602,   603,   606,
     607,   610,   611,   614,   622,   623,   624,   625,   628,   629,
     632,   633,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   647,   648,   649,   657,   663,   664,   665,   668,   669,
     672,   673,   677,   683,   684,   685,   688,   689,   693,   695,
     697,   699,   701,   705,   706,   707,   710,   711,   714,   715,
     718,   719,   720,   723,   724,   727,   728,   732,   734,   736,
     738,   741,   742,   745,   746,   749,   753,   761,   769,   770,
     771,   772,   776,   779,   780,   783,   783,   785,   789,   796,
     803,   813,   820,   827,   837,   845,   855,   863,   872,   881,
     893,   898,   903,   909,   916,   923,   930,   940,   947,   956,
     963,   972,   979,   988,   995,  1001,  1012,  1015,  1021,  1027,
    1034,  1040,  1047,  1053,  1059,  1065,  1071,  1077,  1085,  1092,
    1100,  1101,  1104,  1105,  1106,  1107,  1108,  1111,  1111,  1114,
    1115,  1118,  1128,  1141,  1142,  1142,  1145,  1146,  1147,  1148,
    1151,  1155,  1156,  1157,  1158,  1164,  1167,  1173,  1178,  1184,
    1190,  1197,  1198,  1199,  1203,  1214,  1225,  1236,  1250,  1254,
    1255,  1258,  1259,  1263,  1267,  1269,  1271,  1273,  1275,  1280,
    1284,  1285,  1289,  1296,  1306,  1310,  1311,  1312,  1315,  1320,
    1324,  1329,  1333,  1334,  1337,  1338,  1341,  1342,  1343,  1344,
    1345,  1346,  1347,  1348,  1349,  1351,  1353,  1355,  1357,  1359,
    1363,  1364,  1367,  1368,  1371,  1372,  1375,  1376,  1377,  1378,
    1379,  1380,  1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,
    1389,  1390,  1391,  1392,  1395,  1396,  1399,  1399,  1409,  1410,
    1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,  1420,
    1427,  1428,  1429,  1430,  1431,  1432,  1433,  1434,  1435,  1436,
    1437,  1438,  1439,  1440,  1441,  1444,  1445,  1446,  1449,  1450,
    1453,  1454,  1455,  1458,  1459,  1460,  1464,  1465,  1466,  1467,
    1468,  1469,  1470,  1471,  1472,  1473,  1474,  1475,  1476,  1477,
    1478,  1479,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1487,
    1488,  1489,  1490,  1491,  1492,  1493,  1494,  1495,  1498,  1499,
    1502,  1506,  1507,  1508,  1512,  1515,  1516,  1517,  1518,  1518,
    1520,  1521
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
  "IDENTITY", "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT",
  "CONSTRAINT", "CURRENT_TIMESTAMP", "CREATE", "CASCADE", "CROSS", "CASE",
  "CHECK", "COMMENT", "CURRENT_DATE", "CURRENT_TIME", "CHAR", "COLLATE",
  "DATABASE", "DEFERRABLE", "DEFERRED", "DISABLE", "DOMAIN", "DELAYED",
  "DAY_HOUR", "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP",
  "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE",
  "DATETIME", "DECIMAL", "DATE", "ENABLE", "ESCAPED", "ENUM", "END",
  "ELSE", "EXPLAIN", "FLOAT", "FORCE", "FOREIGN", "FROM", "FULL",
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
  "TINYTEXT", "TINYINT", "TO", "TEMPORARY", "TEXT", "TIMESTAMP", "TABLE",
  "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME", "UPDATE", "UNSIGNED",
  "UNIQUE", "UUID", "USING", "USE", "HASH", "VALIDATE", "VARCHAR",
  "VALUES", "VARBINARY", "WHERE", "WHEN", "WITH", "YEAR", "YEAR_MONTH",
  "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB",
  "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH",
  "FCONCAT", "FREPLACE", "FCOALESCE", "FGEN_RANDOM_UUID",
  "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID", "FLAST_INSERT_ID", "';'", "'.'",
  "'('", "')'", "','", "$accept", "stmt_list", "expr", "val_list",
  "opt_val_list", "@1", "@2", "trim_ltb", "interval_exp", "case_list",
  "stmt", "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_orderby",
  "orderby_list", "orderby_item", "opt_limit", "opt_into_list",
  "column_list", "select_opts", "select_expr_list", "select_expr",
  "opt_as_alias", "table_references", "table_reference", "table_factor",
  "opt_as", "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
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
     446,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   206,   207,   207,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   209,   209,   210,   210,   211,   208,   212,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   213,   213,   213,   208,
     208,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     208,   208,   208,   208,   215,   215,   208,   208,   208,   208,
     208,   208,   208,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   221,   222,   222,   223,   223,   224,
     224,   225,   225,   226,   227,   227,   227,   227,   228,   228,
     229,   229,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   231,   231,   231,   232,   233,   233,   233,   234,   234,
     235,   235,   236,   236,   236,   236,   237,   237,   238,   238,
     238,   238,   238,   239,   239,   239,   240,   240,   241,   241,
     242,   242,   242,   243,   243,   244,   244,   245,   245,   245,
     245,   246,   246,   247,   247,   248,   216,   249,   250,   250,
     250,   250,   249,   251,   251,   252,   252,   249,   216,   253,
     253,   216,   254,   254,   254,   254,   254,   254,   254,   254,
     255,   255,   255,   256,   256,   256,   256,   216,   257,   216,
     258,   216,   259,   216,   260,   260,   216,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   216,   262,
     263,   263,   264,   264,   264,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   269,   268,   270,   270,   270,   270,
     262,   271,   271,   271,   271,   216,   272,   272,   272,   216,
     273,   274,   274,   274,   275,   275,   275,   275,   216,   276,
     276,   277,   277,   216,   278,   278,   278,   278,   278,   216,
     279,   279,   216,   280,   280,   281,   281,   281,   280,   280,
     280,   280,   282,   282,   283,   283,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     285,   285,   286,   286,   287,   287,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   289,   289,   290,   284,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   292,   292,   292,   293,   293,
     294,   294,   294,   295,   295,   295,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   297,   297,
     298,   299,   299,   299,   216,   300,   300,   300,   301,   301,
     302,   302
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
       3,     5,     4,     5,     7,     0,     3,     5,     0,     1,
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
       0,     0,     0,   302,   191,     0,   242,     0,   242,     0,
     132,     0,   242,     0,     0,     0,   103,   186,   198,   201,
     217,   219,   221,   223,   226,   238,   265,   269,   278,   283,
     289,   292,   424,     0,     0,   281,     0,     0,   281,   303,
       0,     0,     0,     0,     0,   248,     0,   248,     0,     0,
     427,   428,     0,     0,     0,     0,   290,     0,     1,     2,
       0,   224,     0,     0,     0,     0,     0,     0,     0,   281,
     195,     0,   190,   188,   189,     0,   218,   199,     0,   244,
     245,   246,   247,   243,     0,   222,     0,     0,     0,   425,
     426,     0,     4,     7,     8,    10,     9,     6,     0,     0,
       0,   143,   133,   100,     0,   101,   102,   134,   135,   136,
      11,   138,   140,   139,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,   104,   141,   220,
     246,   243,   147,     0,     0,   148,   150,   151,   157,   291,
       3,     0,     0,     0,     0,     0,     0,     0,   282,   279,
       0,     0,     0,   280,     0,     0,     0,     0,   193,   106,
       0,     0,     0,     0,   249,   249,   431,   430,   429,     0,
      43,     0,    28,    27,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,   180,     0,     0,     0,     0,
     165,   164,   168,   172,   169,     0,     0,   166,   156,     0,
       0,     0,     0,     0,     0,     0,   225,   407,   416,   375,
     375,   375,   375,   375,   400,   375,   397,     0,   375,   375,
     375,   378,   409,   378,   408,   375,   375,   375,     0,   378,
     375,   378,   399,   406,   398,   417,     0,     0,   401,   284,
       0,     0,     0,     0,   421,   196,     0,   119,     0,   106,
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
     404,   380,   386,   383,   380,   380,     0,   380,   380,   380,
     379,   383,   383,   380,   380,   380,     0,   383,   380,   383,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     422,   423,     0,   346,   299,   157,   107,     0,   124,   106,
     192,   194,     0,   240,   251,     0,     0,   240,     0,   240,
       0,    52,     0,    90,     0,     0,     0,    51,     0,     0,
      63,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    66,    67,    68,     0,     0,     0,    37,    35,     0,
       0,    99,    97,    47,     0,     0,     0,     0,     0,     0,
     108,   180,   182,   182,   182,     0,     0,     0,   119,   170,
     171,     0,     0,   173,     0,     0,     0,     0,     0,     0,
       0,   392,   402,   394,   396,   418,     0,   395,   391,   390,
     413,   412,   389,   393,   388,     0,   410,   387,   411,     0,
       0,   286,     0,   285,     0,   210,     0,     0,     0,     0,
       0,   212,     0,     0,     0,     0,   421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   304,     0,     0,     0,
       0,   187,   197,     0,     0,     0,   260,   250,     0,     0,
     240,   267,   240,   268,    42,    94,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,    39,     0,     0,     0,    30,     0,
     117,   153,     0,     0,     0,     0,   274,     0,     0,   124,
     162,   160,     0,     0,   158,   174,     0,     0,     0,     0,
       0,   234,   376,     0,   381,   382,     0,     0,   383,     0,
     383,   383,   405,     0,     0,     0,     0,     0,     0,     0,
     202,     0,     0,     0,     0,     0,     0,   346,   301,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   295,   346,
       0,   420,   112,   120,   121,   125,   262,   261,     0,     0,
     252,   257,   256,     0,   254,   239,   266,    91,    95,     0,
      61,    60,     0,    65,     0,     0,    79,    80,    69,     0,
      71,    46,     0,    50,    40,    33,    31,    32,     0,     0,
     119,   181,     0,     0,     0,     0,     0,     0,   270,   175,
       0,   161,     0,     0,     0,   344,     0,     0,     0,   385,
     414,   419,   415,   403,     0,   287,     0,     0,     0,     0,
       0,   211,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,     0,     0,
       0,     0,   293,   298,   305,   348,   113,   114,   123,     0,
       0,     0,     0,     0,   253,     0,     0,     0,     0,    64,
      81,    82,    83,    84,    88,    87,    89,    86,    85,     0,
      48,   112,   115,   118,   124,   183,     0,     0,     0,   275,
     276,     0,     0,   227,   322,     0,   320,     0,   228,     0,
     377,   384,     0,   206,   213,   214,   215,     0,     0,   203,
       0,     0,     0,   295,     0,     0,     0,     0,   312,     0,
       0,     0,   309,     0,   308,     0,   318,     0,   347,   122,
     127,   126,   241,   264,   263,   259,   258,     0,    62,    59,
      70,   110,     0,     0,   109,   128,   179,     0,   178,   177,
       0,   176,     0,     0,     0,   232,     0,   345,   288,     0,
       0,   208,     0,   205,   294,   300,     0,     0,     0,     0,
       0,   310,   311,   131,   306,   297,     0,     0,   360,   365,
       0,     0,     0,     0,   369,   350,     0,   367,     0,   116,
     112,     0,   105,   184,   277,   230,     0,   323,   321,   216,
     207,     0,   313,     0,     0,   319,     0,   296,   349,     0,
       0,     0,     0,   370,   351,   352,   354,   353,   358,     0,
       0,     0,     0,   368,   366,   255,   111,   129,     0,   209,
       0,   307,     0,     0,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   362,     0,   364,
       0,     0,   373,   371,   355,   356,   357,   359,   324,     0,
       0,     0,     0,     0,     0,     0,   326,     0,     0,     0,
       0,   326,   361,   363,   374,   229,   325,     0,     0,     0,
     314,     0,   340,     0,     0,     0,   326,   326,     0,   341,
     231,     0,   337,   339,   338,     0,     0,     0,   316,   315,
     342,   343,   327,   335,   329,     0,   331,   336,   333,     0,
     326,   330,   328,   334,   332,   317
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   308,   309,   310,   479,   591,   323,   584,   187,
      15,    16,   297,   600,   782,   758,   844,   700,   438,   663,
     664,   561,   892,   748,    52,   137,   138,   231,   144,   145,
     146,   249,   147,   246,   391,   247,   387,   614,   615,   379,
     603,   786,   148,    17,    42,    75,   168,    18,    19,   540,
     541,    20,    21,    22,    23,    24,    25,   566,    45,    84,
     304,   445,   570,   766,   673,   443,    26,    27,    55,   383,
      28,    63,    29,    30,    31,   752,    41,   555,   556,   797,
     795,   959,   975,   716,   557,   828,   400,   411,   511,   512,
     289,   516,   434,   435,    32,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -711
static const yytype_int16 yypact[] =
{
     690,   -88,   -84,   244,  -711,   -54,  -711,   -81,  -711,    13,
    -711,   -79,     9,    39,    82,  -115,  -711,  -711,  -711,  -711,
    -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,
    -711,  -711,  -711,   246,   251,   128,   256,    29,   128,  -711,
     142,   104,    89,   315,    30,   332,   328,   332,   230,   223,
      88,  -711,   387,   383,   335,    10,  -711,   415,  -711,   690,
      17,   145,   181,   425,   324,   306,   261,   435,    84,   128,
     255,   465,  -711,  -711,  -711,   -53,  -711,  -711,   289,  -711,
    -711,  -711,  -711,  -711,   473,  -711,   482,  1510,  1510,  -711,
    -711,   489,   252,  -711,  -711,  -711,  -711,   490,  1510,  1510,
    1510,  -711,  -711,  -711,   732,  -711,  -711,  -711,  -711,  -711,
    -711,  -711,  -711,  -711,  -711,   307,   331,   339,   343,   347,
     409,   417,   449,   474,   504,   507,   509,   511,   518,   521,
     530,   548,   565,   593,   627,  1510,  2659,   -22,  -711,  -711,
      11,    14,    26,     4,    56,   350,  -711,  -711,   476,  -711,
    -711,   573,   621,   801,   806,   815,   817,   555,  -711,  -711,
    2383,   864,   868,  -711,   744,   692,   871,   849,  -711,   291,
      47,    10,   873,   874,    92,   160,  2726,  2726,  -711,   875,
    1510,  1510,   639,   639,  -711,  1510,  2265,   -45,   749,  1510,
     497,  1510,  1510,   811,  1510,  1510,  1510,  1510,  1510,  1510,
    1510,  1510,  1510,  1510,   699,   700,   701,   702,   355,  -711,
    1510,  1510,  1510,  1510,  1510,    38,   704,   493,  1510,   698,
    1510,  1510,  1510,  1510,  1510,  1510,  1510,  1510,  1510,  1510,
     899,  -711,    10,  1510,   906,   257,   706,   268,   908,    10,
    -711,  -711,  -711,   118,  -711,    10,   822,   785,  -711,   931,
     933,   942,   956,   957,   958,   959,  -711,  -711,  -711,   760,
     760,   760,   760,   760,  -711,   760,  -711,   761,   760,   760,
     760,   926,  -711,   926,  -711,   760,   760,   760,   769,   926,
     760,   926,  -711,  -711,  -711,  -711,   770,   771,  -711,    20,
    -113,   847,   973,   974,   213,  -711,  1510,   852,    10,  -121,
     255,  -711,   975,   979,   810,   975,   238,  -711,  1180,  -711,
     780,  2726,  2315,   172,  -711,  1510,  1510,   781,   262,  -711,
    -711,  -711,  1704,   962,  1378,  1478,   782,  1725,  1754,  1775,
    1807,  1828,  1849,  1870,  1891,  1566,  1587,  1619,  -711,  -711,
    -711,  -711,  -711,  1155,   751,  1008,  2631,  2631,  -711,    59,
    -711,   749,  1510,  1510,   786,  1510,  2682,   787,   788,   812,
    1037,  1075,  1097,   615,   819,   510,   510,   983,   983,   983,
     983,  -711,  -711,  -121,  -711,   313,   876,   905,   913,  -711,
    -711,  -711,    -1,    62,   350,   785,   785,   907,   911,    10,
    -711,   936,  -711,   180,  -711,  -711,  -711,   894,  -711,  1044,
    -711,  -711,  -711,  -711,  -711,  -711,  1046,  -711,  -711,  -711,
    -711,  -711,  -711,  -711,  -711,  -711,  1046,  -711,  -711,  -711,
    1048,  1051,   925,   854,  1510,   888,     5,  1056,  -104,   932,
    -711,  -711,  1058,   359,  -711,   476,  2726,  1025,   953,  -121,
    -711,  -711,  1052,   -99,  -711,   290,   870,   -99,   870,   941,
    1510,  -711,  1510,  -711,  1510,  2559,  2389,  -711,  1510,  1510,
    -711,  1510,   581,   964,   964,  -711,  -711,  -711,  -711,  -711,
    -711,  -711,  -711,  -711,  1510,  1510,  1510,  -711,  -711,  1510,
     872,  2631,  2631,   749,  2704,  1510,   749,   749,   749,   877,
     981,   257,   986,   986,   986,  1510,  1077,  1079,   852,  -711,
    -711,    10,  1510,   229,    10,   880,   972,   977,   883,  1087,
     316,  -122,   464,  -122,  -122,  -711,   323,  -122,  -122,  -122,
     464,   464,  -122,  -122,  -122,   340,   464,  -122,   464,   889,
     902,  1053,  1510,  2726,   904,  -711,   909,   910,   912,   927,
     344,  -711,  -101,   922,     5,  1106,   112,  1108,   929,  1004,
     -36,   934,   935,  1016,   937,   348,  -711,  1126,   749,  1128,
    1510,  -711,  -711,  1060,  1022,  1132,  -711,  -711,  1136,  1261,
     220,  -711,   220,  -711,  -711,  2726,  2580,  -711,  1510,    98,
     314,  1912,  1510,  1510,   938,   960,  1941,  1640,  1962,   968,
    -711,  1510,   985,  1510,   779,   993,  1007,  1009,  -711,  1143,
    1042,  -711,  1101,  1011,  1012,  1013,  2726,  1197,     0,   953,
    -711,  2726,  1510,  1035,  -711,  -711,   229,  1510,  1036,  1059,
    1258,  -711,  -711,  1265,  -711,  -711,  1121,  1268,  -711,  1269,
    -711,  -711,  -711,  1071,  1994,     5,  1272,  1273,  1274,  1277,
    -711,  1278,  1112,     5,  1080,   352,   249,   359,  -711,   190,
    1510,  1081,  1082,  1090,  1291,  1291,  1092,  1258,    90,   359,
    2383,  -711,   222,  1091,  -711,   928,  -711,  2726,  1133,  1279,
    -711,  -711,  2726,   357,  -711,  -711,  -711,  -711,  2726,  1510,
    -711,  -711,  1510,  -711,  2015,  2294,  -711,  -711,  -711,  1510,
    -711,  -711,  1094,  -711,   779,  -711,  -711,  -711,  1510,  1510,
     852,  -711,  1297,  1297,  1297,  1510,  1510,  1300,  -711,  2726,
    1291,  -711,  2036,  1301,  1302,  -711,   362,  1102,  1303,  -711,
     464,  -711,   464,   464,  1510,  -711,   384,  1104,  1109,  1110,
    1105,  -711,  1113,   410,     5,  -711,  1142,     5,   424,  1114,
    1208,  1209,  1119,  2057,  1301,  1291,  1291,  -711,   430,   444,
    1302,   446,  1286,  -711,  -711,  -711,  -711,  -711,  -711,  1128,
    1510,  1510,   975,  1284,  -711,  1359,  1122,  2078,  2099,  -711,
    -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,  2128,
    -711,  2601,  -120,  2726,   953,  -711,   451,   469,   471,  2726,
    2726,  1304,   494,  1308,  -711,   513,  -711,   515,  -711,  1324,
    -711,  -711,  2149,  -711,  -711,  -711,  -711,  1325,     5,  -711,
     522,  1127,   524,    90,  1510,  1129,  1130,  1258,  -711,   526,
     538,   540,  -711,  1326,  -711,   542,  -711,   231,  2402,  -711,
    2726,  2726,  1131,  -711,  2726,  -711,  2726,  1261,  -711,  -711,
    -711,  -711,  1192,  1510,  -711,  1227,  -711,  1336,  -711,  -711,
    1510,  -711,  1169,  1207,  1341,  -711,  1342,  -711,  -711,  1144,
     549,  -711,     5,  -711,  1286,  -711,  2181,  1301,  1302,   554,
    1210,  -711,  -711,  -711,  -711,  -711,  1344,  1221,  1147,  1148,
    1349,  1150,  1350,    21,  -711,  -711,  1243,  1244,   579,  -711,
    2601,  1291,  -711,  -711,  2726,  -711,  1354,  -711,  -711,  -711,
    -711,   583,  -711,   588,   590,  -711,  1355,  -711,  -711,  1356,
    1363,    77,  1510,  -711,  -711,  -711,  -711,  -711,  -711,  1156,
    1166,  1167,  1510,  -711,  -711,  -711,  -711,  1168,  1171,  -711,
    1235,  -711,   361,   606,   608,  1172,  1260,  -711,  2202,  1174,
    1175,  1176,  2223,  1379,  1380,  1383,  1379,  -711,  1376,  -711,
    1390,  1510,  -711,  -711,  -711,  -711,  -711,  -711,  -711,   616,
     620,  1211,   622,  1214,  1215,  2244,  -711,  1408,  1409,  1379,
    1379,  -711,  -711,  -711,  -711,   186,  -711,  1212,   628,   630,
     193,    16,  1319,   -42,   140,  1379,  -711,  -711,  1360,  -711,
    -711,   288,  -711,  -711,  -711,   169,   173,   634,   193,   193,
    -711,  -711,  -711,  -711,  -711,   -35,  -711,  -711,  -711,   170,
    -711,  -711,  -711,  -711,  -711,   193
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -711,  1362,   -52,  -426,  -711,  -711,  -711,  -711,   961,  1237,
    -711,  -128,  -276,  -711,  -711,  -701,  -711,  -711,  -492,  -711,
     665,  -579,  -711,  -651,  -711,  -711,  1193,  -137,   -98,  1188,
    -236,   994,  -711,  -711,   467,  -711,  -711,  -711,   814,   940,
     363,   159,  -711,  -711,  -711,  1357,  1134,  -711,  -711,  -542,
    -711,  -711,  -711,  -711,  -711,  -711,  -711,  -386,   419,  1385,
    1262,  -711,   988,  -711,   596,  -304,  -711,  -711,  -711,  -711,
    -711,    34,  -711,  -711,  -711,   625,  -711,   792,   803,  -688,
    -710,  -550,  -524,  -635,  -711,  -711,   356,   196,    74,  -401,
     826,  1024,  -543,  -711,  -711,  -711,  1372
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -422
static const yytype_int16 yytable[] =
{
     136,   447,   645,   648,   749,   235,   609,   142,   535,   388,
     520,   521,  -271,   142,  -273,   236,   526,  -272,   528,   495,
     706,    48,   751,   440,   574,   914,   915,   916,   917,   209,
     708,   564,    65,    77,   819,   176,   177,   171,   422,   314,
     315,  1011,    56,   624,   348,   237,   182,   183,   184,   992,
     151,    43,   186,   589,   296,   425,   349,   842,   625,   792,
     317,   571,   825,   573,   543,   477,   230,   642,   232,   652,
      33,   918,    67,   299,    34,   423,   653,    46,   989,    53,
     841,   152,    58,   208,   239,   843,    59,   164,   153,   993,
     426,  1012,    70,   726,   820,   821,   424,   490,   154,   544,
      57,   733,   643,   166,    44,   994,   565,   498,   210,   211,
     212,   213,   214,   215,   216,   753,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   311,
    -421,   316,   935,   312,   373,    66,    78,   318,   322,   324,
     325,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   172,   503,   155,    10,    49,   903,   343,   344,
     345,   346,   347,   562,   350,   692,   356,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   449,    71,
     904,   136,   869,   233,   675,   478,   676,   990,   156,   926,
     165,   679,   810,    72,   430,   812,   536,   537,   538,   539,
     439,   496,   707,    73,   981,   845,   238,   143,   784,   936,
     995,   988,  -271,   143,  -273,   298,   430,  -272,   919,   920,
     921,  1002,    74,   480,   922,  1006,    89,   720,   234,   722,
     723,   431,   489,   385,    62,   505,   875,   296,   491,    87,
     927,  -421,   302,   937,   436,   739,  1013,    68,   982,    60,
      88,   876,   172,   431,    61,   982,   453,   454,   386,    64,
     756,   239,    69,   455,   456,   610,   860,   497,   616,   506,
     865,   462,   210,   211,   212,   213,   214,   215,   216,   740,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    91,  1003,   303,  1014,   757,  1007,    90,
     481,   482,   680,   484,   996,    35,   983,  1004,   208,    36,
     305,  1008,   507,   983,   984,   647,   209,   430,    76,  1005,
     901,   984,   741,  1009,   210,   211,   212,   213,   214,   215,
     216,    85,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   376,   508,   157,   316,    37,
     564,  1000,   458,   230,   431,   592,   742,   612,   595,   596,
     597,   377,   158,   303,   160,   210,   211,   212,   213,   214,
     215,   216,   533,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   139,    38,  1001,    10,
      92,    93,    94,    95,    96,    97,   962,   613,    79,    39,
     575,    79,   576,   240,    98,    99,   579,   580,   547,   581,
      40,   448,   100,   101,   548,   432,   433,   736,   149,   978,
     979,   102,   586,   587,   588,   674,   378,    47,   159,    80,
     661,    54,    80,   594,   161,   997,    81,   103,   163,   140,
      82,   104,   162,   606,   105,   106,    83,   980,   549,   141,
     611,   550,   737,   241,   179,   180,   107,   167,   832,  -195,
     108,  -163,   998,   999,   551,   242,   296,   459,   169,   412,
     173,   552,   381,   239,   243,   417,   174,   419,   513,   514,
     634,   517,   518,   519,   109,   175,  1015,   522,   523,   524,
     244,   553,   527,   167,   567,   568,  -195,    48,   245,   181,
      92,    93,    94,    95,    96,    97,   352,   353,   665,   354,
     188,   667,   355,   110,    98,    99,   248,   672,   681,   682,
     622,   623,   100,   626,   627,   554,   678,   628,   629,   111,
     684,   685,   112,   113,   189,   114,   225,   226,   227,   228,
     229,   694,   190,   319,   630,   629,   191,   103,   640,   641,
     192,   104,   658,   659,   105,   106,   735,   641,   256,   342,
     709,   764,   765,   945,   946,   712,   798,   799,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   803,   641,
     135,   210,   211,   212,   213,   214,   215,   216,   743,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   193,   320,   809,   641,   401,   402,   403,   404,
     194,   405,   250,   110,   407,   408,   409,   767,   813,   659,
     768,   413,   414,   415,   822,   823,   418,   779,   222,   223,
     224,   225,   226,   227,   228,   229,   781,   783,   824,   823,
     826,   799,   195,   789,   790,   846,   847,   321,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     251,   582,   802,   848,   847,   849,   847,   196,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   851,   823,
     135,    92,    93,    94,    95,    96,    97,   197,   830,   831,
     198,   834,   199,   836,   200,    98,    99,   853,   854,   855,
     856,   201,     1,   100,   202,     2,   861,   641,   863,   641,
     870,   854,   357,   203,   358,    92,    93,    94,    95,    96,
      97,     3,   871,   823,   872,   823,   874,   856,   103,    98,
      99,   204,   104,   900,   641,   105,   106,   100,   905,   799,
       4,     5,   866,   212,   213,   214,   215,   216,   205,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   103,   925,   765,   672,   104,   929,   641,   105,
     106,   890,   930,   854,   931,   856,   206,     6,   894,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     947,   948,   949,   950,    92,    93,    94,    95,    96,    97,
     966,   967,   968,   969,   110,     7,   971,   967,    98,    99,
     207,     8,   986,   967,   987,   967,   100,   326,  1010,   967,
       9,    10,   359,   223,   224,   225,   226,   227,   228,   229,
     252,    11,   499,   500,    12,   253,   604,   605,   110,    13,
     938,   103,   787,   788,   254,   104,   255,   290,   105,   106,
     942,   291,   292,   293,   294,   295,   300,   301,   307,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   965,
      10,   360,   372,   338,   339,   340,   341,   351,   185,   375,
     380,   382,   390,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   389,   392,   135,   393,   110,   210,   211,
     212,   213,   214,   215,   216,   394,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   395,
     396,   397,   398,   399,   406,    92,    93,    94,    95,    96,
      97,   410,   416,   420,   421,   427,   428,   429,   442,    98,
      99,   437,   444,   446,   451,   457,   465,   100,   492,   483,
     486,   487,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   103,   229,   135,   488,   104,   493,   501,   105,
     106,   213,   214,   215,   216,   494,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   502,
      92,    93,    94,    95,    96,    97,   760,   504,   509,   510,
     515,   531,   461,   529,    98,    99,   530,   532,   534,   542,
     545,   546,   100,    92,    93,    94,    95,    96,    97,   559,
     560,   564,   563,   569,   583,   599,   590,    98,    99,   602,
     607,   598,   608,   617,   618,   100,   620,   103,   110,   619,
     621,   104,   644,   631,   105,   106,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   632,   635,   633,   646,
     103,   649,   636,   637,   104,   638,   651,   105,   106,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   656,   660,
     639,   662,   650,   761,   668,   669,   666,   654,   655,   670,
     657,   699,   686,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   110,   687,   135,   211,   212,   213,   214,
     215,   216,   691,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   110,   698,    10,   693,
     210,   211,   212,   213,   214,   215,   216,   695,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   696,   701,   697,   702,   703,   704,   705,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   710,   713,
     135,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   715,   714,   135,    92,    93,    94,    95,    96,    97,
     717,   718,   719,   721,   724,   727,   728,   729,    98,    99,
     730,   731,   732,   734,   744,   745,   100,    92,    93,    94,
      95,    96,    97,   746,   747,   750,   759,   762,   780,   763,
     785,    98,    99,   791,   794,   796,   800,   801,   804,   100,
     807,   103,   811,   805,   806,   104,   808,   814,   105,   106,
     815,   816,   817,   827,   850,   837,   852,   857,   859,   873,
     862,   889,   867,   868,   103,   891,   565,   671,   104,   893,
     895,   105,   106,   896,   897,   898,   906,   908,   899,   907,
     909,   910,   911,   912,   913,   923,   924,   928,   932,   939,
     833,   933,    92,    93,    94,    95,    96,    97,   934,   940,
     941,   944,   952,   823,   943,   951,    98,    99,   954,   955,
     956,   963,   958,   960,   100,   450,   961,   110,   210,   211,
     212,   213,   214,   215,   216,   964,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   103,
     110,   976,   977,   104,   970,   985,   105,   106,   972,   973,
     991,   150,   989,   313,   829,   585,   374,   384,   170,   558,
     711,   601,    86,   888,   441,   835,   572,   306,   864,   738,
     525,     0,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   754,   178,   135,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   110,   755,   135,   210,   211,
     212,   213,   214,   215,   216,     0,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,     0,
       0,     0,     0,    92,    93,    94,    95,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     103,     0,   135,     0,   104,     0,     0,   105,   106,     0,
       0,     0,     0,     0,     0,     0,   210,   211,   212,   213,
     214,   215,   216,   463,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   110,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     210,   211,   212,   213,   214,   215,   216,     0,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   464,     0,     0,     0,     0,     0,     0,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,     0,     0,   135,   210,   211,   212,   213,   214,   215,
     216,     0,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   210,   211,   212,   213,   214,
     215,   216,     0,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,     0,     0,     0,     0,
       0,     0,     0,     0,   210,   211,   212,   213,   214,   215,
     216,   474,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   210,   211,   212,   213,   214,
     215,   216,   475,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   210,   211,   212,
     213,   214,   215,   216,   476,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   210,   211,
     212,   213,   214,   215,   216,   689,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   210,
     211,   212,   213,   214,   215,   216,     0,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     210,   211,   212,   213,   214,   215,   216,     0,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   210,   211,   212,   213,   214,   215,   216,   460,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   210,   211,   212,   213,   214,   215,   216,   466,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,     0,     0,     0,     0,     0,     0,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   467,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   210,   211,   212,   213,   214,   215,   216,   468,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   210,   211,   212,   213,   214,   215,
     216,   469,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   210,   211,   212,   213,   214,
     215,   216,   470,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   210,   211,   212,   213,
     214,   215,   216,   471,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   210,   211,   212,
     213,   214,   215,   216,   472,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   210,   211,
     212,   213,   214,   215,   216,   473,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   210,
     211,   212,   213,   214,   215,   216,   683,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
       0,     0,     0,     0,     0,     0,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   688,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   210,
     211,   212,   213,   214,   215,   216,   690,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   725,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   210,   211,   212,   213,   214,   215,   216,   769,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   210,   211,   212,   213,   214,   215,   216,
     793,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   210,   211,   212,   213,   214,   215,
     216,   818,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   210,   211,   212,   213,   214,
     215,   216,   838,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,     0,     0,     0,     0,
       0,     0,     0,   839,   210,   211,   212,   213,   214,   215,
     216,     0,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   210,   211,   212,   213,   214,
     215,   216,   840,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,     0,     0,     0,     0,
       0,     0,     0,   858,     0,     0,     0,     0,     0,     0,
       0,   770,   771,     0,     0,     0,   772,     0,   773,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   902,     0,     0,     0,   774,
     775,     0,   776,     0,     0,     0,     0,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   953,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     877,     0,     0,     0,     0,   257,   258,   957,   259,     0,
     260,   261,     0,     0,     0,     0,     0,     0,     0,   878,
       0,   185,   262,   879,     0,     0,     0,     0,   974,     0,
       0,   880,     0,     0,     0,     0,     0,   881,   882,     0,
     263,   264,   265,   266,     0,     0,   267,     0,     0,     0,
     268,     0,   777,   778,   452,     0,     0,     0,   883,     0,
       0,     0,     0,     0,     0,   269,     0,     0,     0,     0,
       0,     0,   270,     0,     0,     0,   271,     0,     0,     0,
       0,     0,   272,     0,   273,   274,   275,     0,     0,     0,
       0,     0,     0,     0,   884,     0,     0,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   885,     0,
       0,     0,   277,   278,   886,   279,   280,     0,     0,   281,
     282,     0,     0,     0,     0,   283,   284,     0,   578,     0,
     285,     0,     0,     0,     0,   286,     0,   287,     0,     0,
       0,   288,     0,     0,     0,     0,     0,     0,   887,   210,
     211,   212,   213,   214,   215,   216,     0,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     210,   211,   212,   213,   214,   215,   216,     0,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   210,   211,   212,   213,   214,   215,   216,     0,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,     0,     0,     0,     0,     0,     0,     0,   756,
       0,     0,     0,   577,  -422,  -422,  -422,  -422,     0,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   209,     0,   677,     0,     0,     0,     0,   210,
     211,   212,   213,   214,   215,   216,   757,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   230,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,     0,   210,   211,   212,   213,   214,   215,
     216,   485,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,     0,   210,   211,   212,   213,
     214,   215,   216,   593,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229
};

static const yytype_int16 yycheck[] =
{
      52,   305,   544,   546,   655,   142,   498,     3,     3,   245,
     411,   412,     3,     3,     3,   143,   417,     3,   419,    20,
      20,     8,   657,   299,   450,     4,     5,     6,     7,     3,
     609,   130,     3,     3,   744,    87,    88,    90,    18,    84,
      85,    76,     3,   165,     6,   143,    98,    99,   100,    91,
      33,   105,   104,   479,   175,   168,    18,   177,   180,   710,
     188,   447,   750,   449,   168,     6,    40,   168,    90,   105,
     158,    50,    38,   171,   158,    55,   112,   158,    62,   158,
     781,    64,     0,   135,   205,   205,   201,     3,    71,   131,
     203,   126,     3,   635,   745,   746,    76,   373,    81,   203,
      61,   643,   203,    69,   158,   147,   205,   383,    10,    11,
      12,    13,    14,    15,    16,   658,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   181,
      40,   176,    55,   185,   232,   106,   106,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   205,   389,   137,   151,   143,   867,   210,   211,
     212,   213,   214,   439,   126,   591,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   306,    90,
     868,   233,   817,   205,   570,   126,   572,   171,   171,   890,
     106,    93,   734,   104,   104,   737,   191,   192,   193,   194,
     298,   202,   202,   114,    18,   784,   150,   203,   700,   132,
      70,    18,   203,   203,   203,   168,   104,   203,   197,   198,
     199,    52,   133,   351,   203,    52,     3,   628,   202,   630,
     631,   141,   360,   115,   106,    55,     5,   175,   375,     9,
     891,   151,   150,   166,   296,    55,    76,   105,    62,     3,
      20,    20,   205,   141,     3,    62,    84,    85,   140,     3,
      38,   205,   158,   315,   316,   501,   808,   205,   504,    89,
     813,   323,    10,    11,    12,    13,    14,    15,    16,    89,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   205,   125,   203,   126,    75,   125,    76,
     352,   353,   204,   355,   164,    61,   120,   138,   360,    65,
     150,   138,   132,   120,   128,   203,     3,   104,     3,   150,
     862,   128,   132,   150,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    88,   166,   202,   176,   105,
     130,    63,    90,    40,   141,   483,   166,   128,   486,   487,
     488,   104,   181,   203,    40,    10,    11,    12,    13,    14,
      15,    16,   424,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     3,   143,   100,   151,
       3,     4,     5,     6,     7,     8,   946,   168,    66,   155,
     452,    66,   454,    53,    17,    18,   458,   459,    49,   461,
     166,   173,    25,    26,    55,   202,   203,   168,     3,   969,
     970,    34,   474,   475,   476,   205,   169,     8,     3,    97,
     558,    12,    97,   485,   128,   985,   104,    50,     3,   104,
     108,    54,   181,   495,    57,    58,   114,   971,    89,   114,
     502,    92,   203,   103,   202,   203,    69,   202,   762,   168,
      73,   111,   986,   987,   105,   115,   175,   205,     3,   273,
     181,   112,   204,   205,   124,   279,     3,   281,   404,   405,
     532,   407,   408,   409,    97,     3,  1010,   413,   414,   415,
     140,   132,   418,   202,   204,   205,   205,     8,   148,     9,
       3,     4,     5,     6,     7,     8,    13,    14,   560,    16,
     203,   563,    19,   126,    17,    18,    40,   569,   204,   205,
     204,   205,    25,    59,    60,   166,   578,   204,   205,   142,
     582,   583,   145,   146,   203,   148,    26,    27,    28,    29,
      30,   593,   203,    46,   204,   205,   203,    50,   204,   205,
     203,    54,   204,   205,    57,    58,   204,   205,     3,   204,
     612,   204,   205,   202,   203,   617,   204,   205,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   204,   205,
     203,    10,    11,    12,    13,    14,    15,    16,   650,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   203,   116,   204,   205,   260,   261,   262,   263,
     203,   265,    49,   126,   268,   269,   270,   679,   204,   205,
     682,   275,   276,   277,   204,   205,   280,   689,    23,    24,
      25,    26,    27,    28,    29,    30,   698,   699,   204,   205,
     204,   205,   203,   705,   706,   204,   205,   160,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      49,    90,   724,   204,   205,   204,   205,   203,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   204,   205,
     203,     3,     4,     5,     6,     7,     8,   203,   760,   761,
     203,   763,   203,   765,   203,    17,    18,   204,   205,   204,
     205,   203,    32,    25,   203,    35,   204,   205,   204,   205,
     204,   205,    34,   203,    36,     3,     4,     5,     6,     7,
       8,    51,   204,   205,   204,   205,   204,   205,    50,    17,
      18,   203,    54,   204,   205,    57,    58,    25,   204,   205,
      70,    71,   814,    12,    13,    14,    15,    16,   203,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    50,   204,   205,   837,    54,   204,   205,    57,
      58,   843,   204,   205,   204,   205,   203,   107,   850,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     204,   205,   204,   205,     3,     4,     5,     6,     7,     8,
     204,   205,   202,   203,   126,   135,   204,   205,    17,    18,
     203,   141,   204,   205,   204,   205,    25,    26,   204,   205,
     150,   151,   144,    24,    25,    26,    27,    28,    29,    30,
      49,   161,   385,   386,   164,    49,   493,   494,   126,   169,
     912,    50,   703,   704,    49,    54,    49,     3,    57,    58,
     922,     3,   128,   181,     3,    26,     3,     3,     3,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   951,
     151,   203,     3,   204,   204,   204,   204,   203,   176,     3,
     204,     3,   127,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   111,     3,   203,     3,   126,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
       3,     3,     3,   203,   203,     3,     4,     5,     6,     7,
       8,    45,   203,   203,   203,   128,     3,     3,     3,    17,
      18,   129,     3,   173,   204,   204,   204,    25,   112,   203,
     203,   203,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,    50,    30,   203,   203,    54,   112,   111,    57,
      58,    13,    14,    15,    16,   112,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   128,
       3,     4,     5,     6,     7,     8,   118,   111,   154,     5,
       4,   126,    90,     5,    17,    18,     5,   203,   170,     3,
     128,     3,    25,     3,     4,     5,     6,     7,     8,    44,
     117,   130,    20,   203,   110,    94,   204,    17,    18,    93,
       3,   204,     3,   203,   112,    25,   203,    50,   126,   112,
       3,    54,   170,   204,    57,    58,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   204,   203,    55,     3,
      50,     3,   203,   203,    54,   203,   112,    57,    58,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   112,     3,
     203,     3,   203,   205,   112,     3,    76,   203,   203,     3,
     203,    99,   204,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   126,   204,   203,    11,    12,    13,    14,
      15,    16,   204,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   126,    44,   151,   204,
      10,    11,    12,    13,    14,    15,    16,   204,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   204,   111,   204,   203,   203,   203,    20,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   203,   203,
     203,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,     3,   203,   203,     3,     4,     5,     6,     7,     8,
       5,   150,     4,     4,   203,     3,     3,     3,    17,    18,
       3,     3,   170,   203,   203,   203,    25,     3,     4,     5,
       6,     7,     8,   203,     3,   203,   205,   164,   204,    20,
       3,    17,    18,     3,     3,     3,   204,     4,   204,    25,
     205,    50,   170,   204,   204,    54,   203,   203,    57,    58,
     112,   112,   203,    37,    20,   203,    18,     3,     3,     3,
     203,   139,   203,   203,    50,   108,   205,    76,    54,     3,
     171,    57,    58,   136,     3,     3,   136,   126,   204,     5,
     203,   203,     3,   203,     4,   112,   112,     3,     3,   203,
      76,     5,     3,     4,     5,     6,     7,     8,     5,   203,
     203,   136,   112,   205,   203,   203,    17,    18,   204,   204,
     204,     5,     3,     3,    25,   205,     3,   126,    10,    11,
      12,    13,    14,    15,    16,     5,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    50,
     126,     3,     3,    54,   203,   203,    57,    58,   204,   204,
     101,    59,    62,   186,   759,   464,   233,   239,    71,   435,
     616,   491,    47,   837,   300,    76,   448,   175,   813,   647,
     416,    -1,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   659,    91,   203,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   126,   660,   203,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
      50,    -1,   203,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   205,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   126,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,    -1,    -1,   203,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   205,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   205,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   205,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   205,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   204,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   204,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   204,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   204,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   204,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   204,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   204,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   204,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   204,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   204,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   204,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   204,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   204,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   204,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     204,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   204,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   204,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   204,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    -1,    -1,    -1,    72,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    95,
      96,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   204,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      18,    -1,    -1,    -1,    -1,    42,    43,   204,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,   176,    59,    41,    -1,    -1,    -1,    -1,   204,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,
      87,    -1,   178,   179,   159,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,    -1,   113,    -1,    -1,    -1,
      -1,    -1,   119,    -1,   121,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   134,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,
      -1,    -1,   149,   150,   132,   152,   153,    -1,    -1,   156,
     157,    -1,    -1,    -1,    -1,   162,   163,    -1,   159,    -1,
     167,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,    -1,
      -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,   166,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    84,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     3,    -1,    84,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    75,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    10,    11,    12,    13,    14,    15,
      16,    39,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,    39,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    35,    51,    70,    71,   107,   135,   141,   150,
     151,   161,   164,   169,   207,   216,   217,   249,   253,   254,
     257,   258,   259,   260,   261,   262,   272,   273,   276,   278,
     279,   280,   300,   158,   158,    61,    65,   105,   143,   155,
     166,   282,   250,   105,   158,   264,   158,   264,     8,   143,
     301,   302,   230,   158,   264,   274,     3,    61,     0,   201,
       3,     3,   106,   277,     3,     3,   106,   277,   105,   158,
       3,    90,   104,   114,   133,   251,     3,     3,   106,    66,
      97,   104,   108,   114,   265,     3,   265,     9,    20,     3,
      76,   205,     3,     4,     5,     6,     7,     8,    17,    18,
      25,    26,    34,    50,    54,    57,    58,    69,    73,    97,
     126,   142,   145,   146,   148,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   203,   208,   231,   232,     3,
     104,   114,     3,   203,   234,   235,   236,   238,   248,     3,
     207,    33,    64,    71,    81,   137,   171,   202,   181,     3,
      40,   128,   181,     3,     3,   106,   277,   202,   252,     3,
     251,    90,   205,   181,     3,     3,   208,   208,   302,   202,
     203,     9,   208,   208,   208,   176,   208,   215,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   208,     3,
      10,    11,    12,    13,    14,    15,    16,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      40,   233,    90,   205,   202,   233,   217,   234,   150,   205,
      53,   103,   115,   124,   140,   148,   239,   241,    40,   237,
      49,    49,    49,    49,    49,    49,     3,    42,    43,    45,
      47,    48,    59,    77,    78,    79,    80,    83,    87,   102,
     109,   113,   119,   121,   122,   123,   134,   149,   150,   152,
     153,   156,   157,   162,   163,   167,   172,   174,   178,   296,
       3,     3,   128,   181,     3,    26,   175,   218,   168,   234,
       3,     3,   150,   203,   266,   150,   266,     3,   208,   209,
     210,   208,   208,   215,    84,    85,   176,   217,   208,    46,
     116,   160,   208,   213,   208,   208,    26,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   204,   204,
     204,   204,   204,   208,   208,   208,   208,   208,     6,    18,
     126,   203,    13,    14,    16,    19,   208,    34,    36,   144,
     203,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,     3,   234,   232,     3,    88,   104,   169,   245,
     204,   204,     3,   275,   235,   115,   140,   242,   236,   111,
     127,   240,     3,     3,     3,     3,     3,     3,     3,   203,
     292,   292,   292,   292,   292,   292,   203,   292,   292,   292,
      45,   293,   293,   292,   292,   292,   203,   293,   292,   293,
     203,   203,    18,    55,    76,   168,   203,   128,     3,     3,
     104,   141,   202,   203,   298,   299,   208,   129,   224,   234,
     218,   252,     3,   271,     3,   267,   173,   271,   173,   217,
     205,   204,   159,    84,    85,   208,   208,   204,    90,   205,
     204,    90,   208,   205,   205,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   205,   205,   205,     6,   126,   211,
     217,   208,   208,   203,   208,    39,   203,   203,   203,   217,
     218,   233,   112,   112,   112,    20,   202,   205,   218,   240,
     240,   111,   128,   236,   111,    55,    89,   132,   166,   154,
       5,   294,   295,   294,   294,     4,   297,   294,   294,   294,
     295,   295,   294,   294,   294,   297,   295,   294,   295,     5,
       5,   126,   203,   208,   170,     3,   191,   192,   193,   194,
     255,   256,     3,   168,   203,   128,     3,    49,    55,    89,
      92,   105,   112,   132,   166,   283,   284,   290,   237,    44,
     117,   227,   218,    20,   130,   205,   263,   204,   205,   203,
     268,   263,   268,   263,   209,   208,   208,    84,   159,   208,
     208,   208,    90,   110,   214,   214,   208,   208,   208,   209,
     204,   212,   217,    39,   208,   217,   217,   217,   204,    94,
     219,   245,    93,   246,   246,   246,   208,     3,     3,   224,
     236,   208,   128,   168,   243,   244,   236,   203,   112,   112,
     203,     3,   204,   205,   165,   180,    59,    60,   204,   205,
     204,   204,   204,    55,   208,   203,   203,   203,   203,   203,
     204,   205,   168,   203,   170,   255,     3,   203,   298,     3,
     203,   112,   105,   112,   203,   203,   112,   203,   204,   205,
       3,   217,     3,   225,   226,   208,    76,   208,   112,     3,
       3,    76,   208,   270,   205,   263,   263,    84,   208,    93,
     204,   204,   205,   204,   208,   208,   204,   204,   204,   205,
     204,   204,   209,   204,   208,   204,   204,   204,    44,    99,
     223,   111,   203,   203,   203,    20,    20,   202,   227,   208,
     203,   244,   208,   203,   203,     3,   289,     5,   150,     4,
     295,     4,   295,   295,   203,   204,   255,     3,     3,     3,
       3,     3,   170,   255,   203,   204,   168,   203,   283,    55,
      89,   132,   166,   208,   203,   203,   203,     3,   229,   229,
     203,   289,   281,   298,   284,   296,    38,    75,   221,   205,
     118,   205,   164,    20,   204,   205,   269,   208,   208,   204,
      67,    68,    72,    74,    95,    96,    98,   178,   179,   208,
     204,   208,   220,   208,   224,     3,   247,   247,   247,   208,
     208,     3,   229,   204,     3,   286,     3,   285,   204,   205,
     204,     4,   208,   204,   204,   204,   204,   205,   203,   204,
     255,   170,   255,   204,   203,   112,   112,   203,   204,   286,
     229,   229,   204,   205,   204,   285,   204,    37,   291,   226,
     208,   208,   271,    76,   208,    76,   208,   203,   204,   204,
     204,   221,   177,   205,   222,   227,   204,   205,   204,   204,
      20,   204,    18,   204,   205,   204,   205,     3,   204,     3,
     255,   204,   203,   204,   281,   298,   208,   203,   203,   289,
     204,   204,   204,     3,   204,     5,    20,    18,    37,    41,
      49,    55,    56,    76,   112,   126,   132,   166,   270,   139,
     208,   108,   228,     3,   208,   171,   136,     3,     3,   204,
     204,   255,   204,   286,   285,   204,   136,     5,   126,   203,
     203,     3,   203,     4,     4,     5,     6,     7,    50,   197,
     198,   199,   203,   112,   112,   204,   221,   229,     3,   204,
     204,   204,     3,     5,     5,    55,   132,   166,   208,   203,
     203,   203,   208,   203,   136,   202,   203,   204,   205,   204,
     205,   203,   112,   204,   204,   204,   204,   204,     3,   287,
       3,     3,   287,     5,     5,   208,   204,   205,   202,   203,
     203,   204,   204,   204,   204,   288,     3,     3,   287,   287,
     288,    18,    62,   120,   128,   203,   204,   204,    18,    62,
     171,   101,    91,   131,   147,    70,   164,   287,   288,   288,
      63,   100,    52,   125,   138,   150,    52,   125,   138,   150,
     204,    76,   126,    76,   126,   288
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
#line 300 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 306 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 307 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 309 "parser/evoparser.y"
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
#line 327 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 335 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 343 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 349 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 356 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 357 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 358 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 359 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 360 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 361 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 362 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 363 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 364 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 365 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 366 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 367 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 368 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 369 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 370 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 371 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 372 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 374 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 379 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 380 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 381 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 382 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 385 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 386 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 387 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 388 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 389 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 392 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 393 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 396 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_inListCount < MAX_IN_LIST) g_inListExprs[g_inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 397 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_inListCount; _i>0; _i--) g_inListExprs[_i]=g_inListExprs[_i-1]; g_inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_inListCount++; } ;}
    break;

  case 43:
#line 400 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 404 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 46:
#line 404 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 47:
#line 405 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 48:
#line 405 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 49:
#line 406 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 407 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 408 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 412 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 416 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 417 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 418 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 419 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 420 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 421 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 423 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 424 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 425 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 426 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 427 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 428 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 429 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 430 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 431 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 432 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 433 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 434 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 435 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 436 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 443 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 450 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 457 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 463 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 77:
#line 464 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 78:
#line 465 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 79:
#line 468 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 80:
#line 469 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 81:
#line 472 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 82:
#line 473 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 83:
#line 474 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 84:
#line 475 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 85:
#line 476 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 86:
#line 477 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 87:
#line 478 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 88:
#line 479 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 89:
#line 480 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 90:
#line 484 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_caseWhenCount, NULL); ;}
    break;

  case 91:
#line 486 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 92:
#line 488 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, NULL); ;}
    break;

  case 93:
#line 490 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 94:
#line 494 "parser/evoparser.y"
    {
        g_caseWhenCount = 0;
        g_caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 95:
#line 502 "parser/evoparser.y"
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
#line 512 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 97:
#line 513 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 98:
#line 516 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 99:
#line 517 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 100:
#line 521 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 529 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 537 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 548 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 104:
#line 557 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_selectDistinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 105:
#line 562 "parser/evoparser.y"
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
#line 573 "parser/evoparser.y"
    { emit("WHERE"); g_whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 109:
#line 575 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 110:
#line 578 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_groupByCount = 0;
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 111:
#line 585 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 112:
#line 593 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 594 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 114:
#line 595 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 115:
#line 598 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 599 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 118:
#line 603 "parser/evoparser.y"
    { emit("HAVING"); g_havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 123:
#line 615 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 124:
#line 622 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 125:
#line 623 "parser/evoparser.y"
    { emit("LIMIT 1"); g_limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 126:
#line 624 "parser/evoparser.y"
    { emit("LIMIT 2"); g_offsetExpr = (yyvsp[(2) - (4)].exprval); g_limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 127:
#line 625 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_limitExpr = (yyvsp[(2) - (4)].exprval); g_offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 129:
#line 629 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 130:
#line 632 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 131:
#line 633 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 132:
#line 636 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 133:
#line 637 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 134:
#line 638 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 135:
#line 639 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 136:
#line 640 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 137:
#line 641 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 138:
#line 642 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 139:
#line 643 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 140:
#line 644 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 141:
#line 647 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 142:
#line 648 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 143:
#line 650 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 144:
#line 658 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 145:
#line 663 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 146:
#line 664 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 147:
#line 665 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 148:
#line 668 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 149:
#line 669 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 152:
#line 678 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 153:
#line 683 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 154:
#line 684 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 155:
#line 685 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 158:
#line 694 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 159:
#line 696 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 160:
#line 698 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 161:
#line 700 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 162:
#line 702 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 163:
#line 705 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 164:
#line 706 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 165:
#line 707 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 166:
#line 710 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 167:
#line 711 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 168:
#line 714 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 169:
#line 715 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 170:
#line 718 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 171:
#line 719 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 172:
#line 720 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 175:
#line 727 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 176:
#line 728 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 177:
#line 733 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 178:
#line 735 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 179:
#line 737 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 181:
#line 741 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 182:
#line 742 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 183:
#line 745 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 184:
#line 746 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 185:
#line 749 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 186:
#line 754 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 187:
#line 762 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 188:
#line 769 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 189:
#line 770 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 190:
#line 771 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 191:
#line 772 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 192:
#line 776 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 193:
#line 779 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 194:
#line 780 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 197:
#line 785 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 198:
#line 790 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 199:
#line 797 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_dropIfExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 200:
#line 804 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_dropIfExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 201:
#line 814 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 202:
#line 821 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 203:
#line 828 "parser/evoparser.y"
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
#line 838 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 205:
#line 846 "parser/evoparser.y"
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
#line 856 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 207:
#line 864 "parser/evoparser.y"
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
#line 873 "parser/evoparser.y"
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
#line 882 "parser/evoparser.y"
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
#line 894 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 211:
#line 899 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 212:
#line 904 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 213:
#line 910 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 214:
#line 917 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 215:
#line 924 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 216:
#line 931 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 217:
#line 941 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 218:
#line 948 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 219:
#line 957 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 220:
#line 964 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 221:
#line 973 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 222:
#line 980 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 223:
#line 989 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 224:
#line 996 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 225:
#line 1002 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 226:
#line 1012 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 227:
#line 1016 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 228:
#line 1022 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 229:
#line 1028 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 230:
#line 1035 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 231:
#line 1041 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 232:
#line 1048 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 233:
#line 1054 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 234:
#line 1060 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 235:
#line 1066 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 236:
#line 1072 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 237:
#line 1078 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 238:
#line 1086 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 239:
#line 1093 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 241:
#line 1101 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 242:
#line 1104 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 243:
#line 1105 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 244:
#line 1106 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 245:
#line 1107 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 246:
#line 1108 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 250:
#line 1115 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 251:
#line 1119 "parser/evoparser.y"
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
#line 1129 "parser/evoparser.y"
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
#line 1141 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 254:
#line 1142 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 255:
#line 1142 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 256:
#line 1145 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 257:
#line 1146 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 258:
#line 1147 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 259:
#line 1148 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 260:
#line 1152 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 261:
#line 1155 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 262:
#line 1156 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 263:
#line 1157 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 264:
#line 1158 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 265:
#line 1164 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 266:
#line 1170 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 267:
#line 1175 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 268:
#line 1180 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 269:
#line 1185 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 270:
#line 1192 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 271:
#line 1197 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 272:
#line 1198 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 273:
#line 1199 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 274:
#line 1204 "parser/evoparser.y"
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
#line 1215 "parser/evoparser.y"
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
#line 1226 "parser/evoparser.y"
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
#line 1237 "parser/evoparser.y"
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
#line 1250 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 279:
#line 1254 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 280:
#line 1255 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 281:
#line 1258 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 282:
#line 1259 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 283:
#line 1263 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 284:
#line 1268 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 285:
#line 1270 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 286:
#line 1272 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 287:
#line 1274 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 288:
#line 1276 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 289:
#line 1280 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 290:
#line 1284 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 291:
#line 1285 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 292:
#line 1290 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 293:
#line 1298 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 294:
#line 1307 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 296:
#line 1311 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 297:
#line 1312 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 298:
#line 1317 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 299:
#line 1321 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 300:
#line 1326 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 301:
#line 1330 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 302:
#line 1333 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 303:
#line 1334 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 304:
#line 1337 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 305:
#line 1338 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 306:
#line 1341 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 307:
#line 1342 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 308:
#line 1343 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 309:
#line 1344 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 310:
#line 1345 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 311:
#line 1346 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 312:
#line 1347 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 313:
#line 1348 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 314:
#line 1350 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 315:
#line 1352 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 316:
#line 1354 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 317:
#line 1356 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 318:
#line 1358 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 319:
#line 1360 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 320:
#line 1363 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 321:
#line 1364 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 322:
#line 1367 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 323:
#line 1368 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 324:
#line 1371 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 325:
#line 1372 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 327:
#line 1376 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 328:
#line 1377 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 329:
#line 1378 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 330:
#line 1379 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 331:
#line 1380 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 332:
#line 1381 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 333:
#line 1382 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 334:
#line 1383 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 335:
#line 1384 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 336:
#line 1385 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 337:
#line 1386 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 338:
#line 1387 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 339:
#line 1388 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 340:
#line 1389 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 341:
#line 1390 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 342:
#line 1391 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 343:
#line 1392 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 344:
#line 1395 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 345:
#line 1396 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 346:
#line 1399 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 347:
#line 1401 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 348:
#line 1409 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 349:
#line 1410 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 351:
#line 1412 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 352:
#line 1413 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 353:
#line 1414 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 354:
#line 1415 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 355:
#line 1416 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 356:
#line 1417 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 357:
#line 1418 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 358:
#line 1419 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 359:
#line 1420 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 360:
#line 1427 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 361:
#line 1428 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 362:
#line 1429 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 363:
#line 1430 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 364:
#line 1431 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 365:
#line 1432 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 366:
#line 1433 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 367:
#line 1434 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 368:
#line 1435 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 369:
#line 1436 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 370:
#line 1437 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 371:
#line 1438 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 372:
#line 1439 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 373:
#line 1440 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 374:
#line 1441 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 375:
#line 1444 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 376:
#line 1445 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 377:
#line 1446 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 378:
#line 1449 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 379:
#line 1450 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 380:
#line 1453 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 381:
#line 1454 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 382:
#line 1455 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 384:
#line 1459 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 385:
#line 1460 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 386:
#line 1464 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 387:
#line 1465 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 388:
#line 1466 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 389:
#line 1467 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 390:
#line 1468 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 391:
#line 1469 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 392:
#line 1470 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 393:
#line 1471 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 394:
#line 1472 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 395:
#line 1473 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 396:
#line 1474 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 397:
#line 1475 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 398:
#line 1476 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 399:
#line 1477 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 400:
#line 1478 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 401:
#line 1479 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 402:
#line 1480 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 403:
#line 1481 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 404:
#line 1482 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 405:
#line 1483 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 406:
#line 1484 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 407:
#line 1485 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 408:
#line 1486 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 409:
#line 1487 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 410:
#line 1488 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 411:
#line 1489 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 412:
#line 1490 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 413:
#line 1491 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 414:
#line 1492 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 415:
#line 1493 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 416:
#line 1494 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 417:
#line 1495 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 418:
#line 1498 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 419:
#line 1499 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 420:
#line 1503 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 421:
#line 1506 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 422:
#line 1507 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 423:
#line 1508 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 424:
#line 1512 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 425:
#line 1515 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 426:
#line 1516 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 430:
#line 1520 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 431:
#line 1521 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5421 "parser/evoparser.tab.c"
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


#line 1524 "parser/evoparser.y"

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
