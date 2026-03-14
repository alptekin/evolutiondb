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
     BLOB = 287,
     BOOLEAN = 288,
     BY = 289,
     BINARY = 290,
     BOTH = 291,
     BIGINT = 292,
     BIT = 293,
     CONSTRAINT = 294,
     CURRENT_TIMESTAMP = 295,
     CREATE = 296,
     CASCADE = 297,
     CROSS = 298,
     CASE = 299,
     CHECK = 300,
     COMMENT = 301,
     CURRENT_DATE = 302,
     CURRENT_TIME = 303,
     CHAR = 304,
     COLLATE = 305,
     DATABASE = 306,
     DEFERRABLE = 307,
     DEFERRED = 308,
     DISABLE = 309,
     DOMAIN = 310,
     DELAYED = 311,
     DAY_HOUR = 312,
     DAY_MICROSECOND = 313,
     DISTINCT = 314,
     DELETE = 315,
     DROP = 316,
     DAY_MINUTE = 317,
     DISTINCTROW = 318,
     DAY_SECOND = 319,
     DESC = 320,
     DEFAULT = 321,
     DOUBLE = 322,
     DATETIME = 323,
     DECIMAL = 324,
     DATE = 325,
     ENABLE = 326,
     ESCAPED = 327,
     ENUM = 328,
     END = 329,
     ELSE = 330,
     EXPLAIN = 331,
     FLOAT = 332,
     FORCE = 333,
     FOREIGN = 334,
     FROM = 335,
     FULL = 336,
     FULLTEXT = 337,
     FOR = 338,
     GROUP = 339,
     HOUR_MINUTE = 340,
     HOUR_MICROSECOND = 341,
     HIGH_PRIORITY = 342,
     HOUR_SECOND = 343,
     HAVING = 344,
     IMMEDIATE = 345,
     INITIALLY = 346,
     INTEGER = 347,
     INNER = 348,
     IGNORE = 349,
     INDEX = 350,
     IF = 351,
     INSERT = 352,
     INTO = 353,
     INT = 354,
     INTERVAL = 355,
     JOIN = 356,
     KEY = 357,
     LONGTEXT = 358,
     LOW_PRIORITY = 359,
     LEFT = 360,
     LEADING = 361,
     LIMIT = 362,
     OFFSET = 363,
     LONGBLOB = 364,
     MATCH = 365,
     MEDIUMTEXT = 366,
     MEDIUMBLOB = 367,
     MEDIUMINT = 368,
     NATURAL = 369,
     NO_ACTION = 370,
     NULLX = 371,
     OUTER = 372,
     ON = 373,
     ORDER = 374,
     ONDUPLICATE = 375,
     PARTIAL = 376,
     PRIMARY = 377,
     QUICK = 378,
     REAL = 379,
     RECLAIM = 380,
     REFERENCES = 381,
     RENAME = 382,
     RESTRICT = 383,
     ROLLUP = 384,
     RIGHT = 385,
     REPLACE = 386,
     SQL_SMALL_RESULT = 387,
     SCHEMA = 388,
     SOME = 389,
     SQL_CALC_FOUND_ROWS = 390,
     SQL_BIG_RESULT = 391,
     SIMPLE = 392,
     STRAIGHT_JOIN = 393,
     SMALLINT = 394,
     SET = 395,
     SELECT = 396,
     TINYTEXT = 397,
     TINYINT = 398,
     TO = 399,
     TEMPORARY = 400,
     TEXT = 401,
     TIMESTAMP = 402,
     TABLE = 403,
     THEN = 404,
     TRAILING = 405,
     TRUNCATE = 406,
     TINYBLOB = 407,
     TIME = 408,
     UPDATE = 409,
     UNSIGNED = 410,
     UNIQUE = 411,
     UUID = 412,
     USING = 413,
     USE = 414,
     HASH = 415,
     VALIDATE = 416,
     VARCHAR = 417,
     VALUES = 418,
     VARBINARY = 419,
     WHERE = 420,
     WHEN = 421,
     WITH = 422,
     YEAR = 423,
     YEAR_MONTH = 424,
     ZEROFILL = 425,
     EXISTS = 426,
     FSUBSTRING = 427,
     FTRIM = 428,
     FDATE_ADD = 429,
     FDATE_SUB = 430,
     FCOUNT = 431,
     FSUM = 432,
     FAVG = 433,
     FMIN = 434,
     FMAX = 435,
     FUPPER = 436,
     FLOWER = 437,
     FLENGTH = 438,
     FCONCAT = 439,
     FREPLACE = 440,
     FCOALESCE = 441,
     FGEN_RANDOM_UUID = 442,
     FGEN_RANDOM_UUID_V7 = 443,
     FSNOWFLAKE_ID = 444,
     FLAST_INSERT_ID = 445
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
#define BLOB 287
#define BOOLEAN 288
#define BY 289
#define BINARY 290
#define BOTH 291
#define BIGINT 292
#define BIT 293
#define CONSTRAINT 294
#define CURRENT_TIMESTAMP 295
#define CREATE 296
#define CASCADE 297
#define CROSS 298
#define CASE 299
#define CHECK 300
#define COMMENT 301
#define CURRENT_DATE 302
#define CURRENT_TIME 303
#define CHAR 304
#define COLLATE 305
#define DATABASE 306
#define DEFERRABLE 307
#define DEFERRED 308
#define DISABLE 309
#define DOMAIN 310
#define DELAYED 311
#define DAY_HOUR 312
#define DAY_MICROSECOND 313
#define DISTINCT 314
#define DELETE 315
#define DROP 316
#define DAY_MINUTE 317
#define DISTINCTROW 318
#define DAY_SECOND 319
#define DESC 320
#define DEFAULT 321
#define DOUBLE 322
#define DATETIME 323
#define DECIMAL 324
#define DATE 325
#define ENABLE 326
#define ESCAPED 327
#define ENUM 328
#define END 329
#define ELSE 330
#define EXPLAIN 331
#define FLOAT 332
#define FORCE 333
#define FOREIGN 334
#define FROM 335
#define FULL 336
#define FULLTEXT 337
#define FOR 338
#define GROUP 339
#define HOUR_MINUTE 340
#define HOUR_MICROSECOND 341
#define HIGH_PRIORITY 342
#define HOUR_SECOND 343
#define HAVING 344
#define IMMEDIATE 345
#define INITIALLY 346
#define INTEGER 347
#define INNER 348
#define IGNORE 349
#define INDEX 350
#define IF 351
#define INSERT 352
#define INTO 353
#define INT 354
#define INTERVAL 355
#define JOIN 356
#define KEY 357
#define LONGTEXT 358
#define LOW_PRIORITY 359
#define LEFT 360
#define LEADING 361
#define LIMIT 362
#define OFFSET 363
#define LONGBLOB 364
#define MATCH 365
#define MEDIUMTEXT 366
#define MEDIUMBLOB 367
#define MEDIUMINT 368
#define NATURAL 369
#define NO_ACTION 370
#define NULLX 371
#define OUTER 372
#define ON 373
#define ORDER 374
#define ONDUPLICATE 375
#define PARTIAL 376
#define PRIMARY 377
#define QUICK 378
#define REAL 379
#define RECLAIM 380
#define REFERENCES 381
#define RENAME 382
#define RESTRICT 383
#define ROLLUP 384
#define RIGHT 385
#define REPLACE 386
#define SQL_SMALL_RESULT 387
#define SCHEMA 388
#define SOME 389
#define SQL_CALC_FOUND_ROWS 390
#define SQL_BIG_RESULT 391
#define SIMPLE 392
#define STRAIGHT_JOIN 393
#define SMALLINT 394
#define SET 395
#define SELECT 396
#define TINYTEXT 397
#define TINYINT 398
#define TO 399
#define TEMPORARY 400
#define TEXT 401
#define TIMESTAMP 402
#define TABLE 403
#define THEN 404
#define TRAILING 405
#define TRUNCATE 406
#define TINYBLOB 407
#define TIME 408
#define UPDATE 409
#define UNSIGNED 410
#define UNIQUE 411
#define UUID 412
#define USING 413
#define USE 414
#define HASH 415
#define VALIDATE 416
#define VARCHAR 417
#define VALUES 418
#define VARBINARY 419
#define WHERE 420
#define WHEN 421
#define WITH 422
#define YEAR 423
#define YEAR_MONTH 424
#define ZEROFILL 425
#define EXISTS 426
#define FSUBSTRING 427
#define FTRIM 428
#define FDATE_ADD 429
#define FDATE_SUB 430
#define FCOUNT 431
#define FSUM 432
#define FAVG 433
#define FMIN 434
#define FMAX 435
#define FUPPER 436
#define FLOWER 437
#define FLENGTH 438
#define FCONCAT 439
#define FREPLACE 440
#define FCOALESCE 441
#define FGEN_RANDOM_UUID 442
#define FGEN_RANDOM_UUID_V7 443
#define FSNOWFLAKE_ID 444
#define FLAST_INSERT_ID 445




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
#line 501 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 514 "parser/evoparser.tab.c"

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
#define YYLAST   2724

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  205
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  424
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1000

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   445

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     202,   203,    26,    24,   204,    25,   201,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   200,
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
     194,   195,   196,   197,   198,   199
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
    1278,  1281,  1285,  1287,  1296,  1307,  1317,  1324,  1336,  1345,
    1346,  1348,  1350,  1354,  1360,  1368,  1373,  1378,  1384,  1390,
    1395,  1402,  1414,  1428,  1442,  1458,  1463,  1470,  1472,  1476,
    1478,  1482,  1484,  1488,  1489,  1494,  1500,  1505,  1511,  1516,
    1522,  1527,  1533,  1538,  1543,  1547,  1551,  1555,  1558,  1562,
    1567,  1572,  1574,  1578,  1579,  1584,  1585,  1589,  1592,  1596,
    1600,  1604,  1608,  1614,  1620,  1626,  1630,  1633,  1641,  1647,
    1651,  1654,  1658,  1661,  1665,  1671,  1676,  1682,  1690,  1691,
    1695,  1701,  1702,  1704,  1705,  1708,  1711,  1712,  1717,  1721,
    1724,  1728,  1732,  1736,  1740,  1744,  1748,  1752,  1756,  1760,
    1764,  1766,  1768,  1770,  1772,  1774,  1778,  1784,  1787,  1792,
    1794,  1796,  1798,  1800,  1804,  1808,  1812,  1816,  1822,  1828,
    1830,  1832,  1834,  1838,  1842,  1843,  1845,  1847,  1849,  1853,
    1857,  1860,  1862,  1866,  1870
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     206,     0,    -1,   215,   200,    -1,   215,   200,   206,    -1,
       3,    -1,     3,   201,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   125,    -1,   207,    24,
     207,    -1,   207,    25,   207,    -1,   207,    26,   207,    -1,
     207,    27,   207,    -1,   207,    28,   207,    -1,   207,    29,
     207,    -1,    25,   207,    -1,   202,   207,   203,    -1,   207,
      12,   207,    -1,   207,    10,   207,    -1,   207,    11,   207,
      -1,   207,    21,   207,    -1,   207,    22,   207,    -1,   207,
      30,   207,    -1,   207,    23,   207,    -1,    18,   207,    -1,
      17,   207,    -1,   207,    20,   207,    -1,   207,    20,   202,
     216,   203,    -1,   207,    20,    36,   202,   216,   203,    -1,
     207,    20,   143,   202,   216,   203,    -1,   207,    20,    34,
     202,   216,   203,    -1,   207,    15,   125,    -1,   207,    15,
      18,   125,    -1,   207,    15,     6,    -1,   207,    15,    18,
       6,    -1,     8,     9,   207,    -1,   207,    19,   207,    39,
     207,    -1,   207,    18,    19,   207,    39,   207,    -1,   207,
      -1,   207,   204,   208,    -1,    -1,   208,    -1,    -1,   207,
      16,   202,   210,   208,   203,    -1,    -1,   207,    18,    16,
     202,   211,   208,   203,    -1,   207,    16,   202,   216,   203,
      -1,   207,    18,    16,   202,   216,   203,    -1,   180,   202,
     216,   203,    -1,     3,   202,   209,   203,    -1,   185,   202,
      26,   203,    -1,   185,   202,   207,   203,    -1,   186,   202,
     207,   203,    -1,   187,   202,   207,   203,    -1,   188,   202,
     207,   203,    -1,   189,   202,   207,   203,    -1,   181,   202,
     207,   204,   207,   204,   207,   203,    -1,   181,   202,   207,
     204,   207,   203,    -1,   181,   202,   207,    89,   207,   203,
      -1,   181,   202,   207,    89,   207,    92,   207,   203,    -1,
     182,   202,   207,   203,    -1,   182,   202,   212,   207,    89,
     207,   203,    -1,   182,   202,   212,    89,   207,   203,    -1,
     190,   202,   207,   203,    -1,   191,   202,   207,   203,    -1,
     192,   202,   207,   203,    -1,   193,   202,   207,   204,   207,
     203,    -1,   194,   202,   207,   204,   207,   204,   207,   203,
      -1,   195,   202,   207,   204,   207,   203,    -1,   196,   202,
     203,    -1,   197,   202,   203,    -1,   198,   202,   203,    -1,
     199,   202,   203,    -1,   115,    -1,   159,    -1,    45,    -1,
     183,   202,   207,   204,   213,   203,    -1,   184,   202,   207,
     204,   213,   203,    -1,   109,   207,    66,    -1,   109,   207,
      67,    -1,   109,   207,    71,    -1,   109,   207,    73,    -1,
     109,   207,   178,    -1,   109,   207,   177,    -1,   109,   207,
      95,    -1,   109,   207,    94,    -1,   109,   207,    97,    -1,
      53,   207,   214,    83,    -1,    53,   207,   214,    84,   207,
      83,    -1,    53,   214,    83,    -1,    53,   214,    84,   207,
      83,    -1,   175,   207,   158,   207,    -1,   214,   175,   207,
     158,   207,    -1,   207,    14,   207,    -1,   207,    18,    14,
     207,    -1,   207,    13,   207,    -1,   207,    18,    13,   207,
      -1,    49,    -1,    56,    -1,    57,    -1,   216,    -1,   150,
     229,   230,    -1,   150,   229,   230,    89,   233,   217,   218,
     222,   223,   226,   227,    -1,    -1,   174,   207,    -1,    -1,
      93,    43,   219,   221,    -1,   207,   220,    -1,   219,   204,
     207,   220,    -1,    -1,    38,    -1,    74,    -1,    -1,   176,
     138,    -1,    -1,    98,   207,    -1,    -1,   128,    43,   224,
      -1,   225,    -1,   224,   204,   225,    -1,     3,   220,    -1,
      -1,   116,   207,    -1,   116,   207,   204,   207,    -1,   116,
     207,   117,   207,    -1,    -1,   107,   228,    -1,     3,    -1,
     228,   204,     3,    -1,    -1,   229,    34,    -1,   229,    68,
      -1,   229,    72,    -1,   229,    96,    -1,   229,   147,    -1,
     229,   141,    -1,   229,   145,    -1,   229,   144,    -1,   231,
      -1,   230,   204,   231,    -1,    26,    -1,   207,   232,    -1,
      40,     3,    -1,     3,    -1,    -1,   234,    -1,   233,   204,
     234,    -1,   235,    -1,   237,    -1,     3,   232,   244,    -1,
       3,   201,     3,   232,   244,    -1,   247,   236,     3,    -1,
     202,   233,   203,    -1,    40,    -1,    -1,   234,   238,   110,
     235,   242,    -1,   234,   147,   235,    -1,   234,   147,   235,
     127,   207,    -1,   234,   240,   239,   110,   235,   243,    -1,
     234,   123,   241,   110,   235,    -1,    -1,   102,    -1,    52,
      -1,    -1,   126,    -1,   114,    -1,   139,    -1,   114,   239,
      -1,   139,   239,    -1,    -1,    -1,   243,    -1,   127,   207,
      -1,   167,   202,   228,   203,    -1,   168,   111,   245,   202,
     246,   203,    -1,   103,   111,   245,   202,   246,   203,    -1,
      87,   111,   245,   202,   246,   203,    -1,    -1,    92,   110,
      -1,    -1,     3,    -1,   246,   204,     3,    -1,   202,   216,
     203,    -1,   248,    -1,    69,   249,    89,     3,   217,   223,
     226,    -1,   249,   113,    -1,   249,   132,    -1,   249,   103,
      -1,    -1,    69,   249,   250,    89,   233,   217,    -1,     3,
     251,    -1,   250,   204,     3,   251,    -1,    -1,   201,    26,
      -1,    69,   249,    89,   250,   167,   233,   217,    -1,   252,
      -1,    70,   157,     3,    -1,    70,   157,   105,   180,     3,
      -1,   253,    -1,    50,   104,     3,   127,     3,   202,   254,
     203,    -1,    50,   104,   105,   180,     3,   127,     3,   202,
     254,   203,    -1,    50,   165,   104,     3,   127,     3,   202,
     254,   203,    -1,    50,   165,   104,   105,   180,     3,   127,
       3,   202,   254,   203,    -1,    50,   104,     3,   127,     3,
     167,   169,   202,   254,   203,    -1,    50,   104,   105,   180,
       3,   127,     3,   167,   169,   202,   254,   203,    -1,    50,
     165,   104,     3,   127,     3,   167,   169,   202,   254,   203,
      -1,    50,   165,   104,   105,   180,     3,   127,     3,   167,
     169,   202,   254,   203,    -1,     3,    -1,   254,   204,     3,
      -1,   255,    -1,   190,   202,     3,   203,    -1,   191,   202,
       3,   203,    -1,   192,   202,     3,   203,    -1,   193,   202,
       3,   204,     3,   203,    -1,   256,    -1,    70,   104,     3,
      -1,   257,    -1,   160,   157,     3,    -1,   258,    -1,   134,
     157,     3,    -1,   259,    -1,    35,   157,     3,    -1,    35,
     157,     3,   201,     3,    -1,   260,    -1,    32,   157,     3,
      33,    48,     3,    54,   202,   207,   203,    -1,    32,   157,
       3,    33,    48,     3,   165,   202,   287,   203,    -1,    32,
     157,     3,    33,    48,     3,    88,   111,   202,   284,   203,
     135,     3,   202,   285,   203,   286,    -1,    32,   157,     3,
      33,    48,     3,    54,   202,   207,   203,    18,   170,    -1,
      32,   157,     3,    33,    48,     3,    88,   111,   202,   284,
     203,   135,     3,   202,   285,   203,   286,    18,   170,    -1,
      32,   157,     3,    33,    48,     3,   131,   111,   202,   283,
     203,    -1,    32,   157,     3,    70,    48,     3,    -1,    32,
     157,     3,   136,    48,     3,   153,     3,    -1,    32,   157,
       3,    80,    48,     3,    -1,    32,   157,     3,    63,    48,
       3,    -1,    32,   157,     3,   170,    48,     3,    -1,   261,
      -1,   106,   263,   264,     3,   265,   172,   267,   262,    -1,
      -1,   129,   111,   163,   270,    -1,    -1,   263,   113,    -1,
     263,    65,    -1,   263,    96,    -1,   263,   103,    -1,   107,
      -1,    -1,    -1,   202,   266,   203,    -1,     3,    -1,   266,
     204,     3,    -1,   202,   269,   203,    -1,    -1,   267,   204,
     268,   202,   269,   203,    -1,   207,    -1,    75,    -1,   269,
     204,   207,    -1,   269,   204,    75,    -1,   106,   263,   264,
       3,   149,   270,   262,    -1,     3,    20,   207,    -1,     3,
      20,    75,    -1,   270,   204,     3,    20,   207,    -1,   270,
     204,     3,    20,    75,    -1,   271,    -1,   140,   263,   264,
       3,   265,   172,   267,   262,    -1,   140,   263,   264,     3,
     149,   270,   262,    -1,   140,   263,   264,     3,   265,   216,
     262,    -1,   272,    -1,   163,   273,   233,   149,   274,   217,
     223,   226,    -1,    -1,   263,   113,    -1,   263,   103,    -1,
       3,    20,   207,    -1,     3,   201,     3,    20,   207,    -1,
     274,   204,     3,    20,   207,    -1,   274,   204,     3,   201,
       3,    20,   207,    -1,   275,    -1,    50,    60,   276,     3,
      -1,    50,   142,   276,     3,    -1,    -1,   105,   180,    -1,
     277,    -1,    50,    64,     3,    40,   294,    -1,    50,    64,
       3,    40,   294,    75,   207,    -1,    50,    64,     3,    40,
     294,    18,   125,    -1,    50,    64,     3,    40,   294,    54,
     202,   207,   203,    -1,    50,    64,     3,    40,   294,    18,
     125,    54,   202,   207,   203,    -1,   278,    -1,   168,     3,
      -1,   168,    60,     3,    -1,   279,    -1,    50,   280,   157,
     276,     3,   202,   281,   203,    -1,    50,   280,   157,   276,
       3,   201,     3,   202,   281,   203,    -1,    50,   280,   157,
     276,     3,   202,   281,   203,   296,    -1,    50,   280,   157,
     276,     3,   296,    -1,    50,   280,   157,   276,     3,   201,
       3,   202,   281,   203,   296,    -1,    50,   280,   157,   276,
       3,   201,     3,   296,    -1,    -1,   154,    -1,   282,    -1,
     281,   204,   282,    -1,   131,   111,   202,   283,   203,    -1,
      48,     3,   131,   111,   202,   283,   203,    -1,   111,   202,
     228,   203,    -1,   104,   202,   228,   203,    -1,    91,   104,
     202,   228,   203,    -1,    91,   111,   202,   228,   203,    -1,
      54,   202,   207,   203,    -1,    48,     3,    54,   202,   207,
     203,    -1,    88,   111,   202,   284,   203,   135,     3,   202,
     285,   203,   286,    -1,    88,   111,   202,   284,   203,   135,
       3,   201,     3,   202,   285,   203,   286,    -1,    48,     3,
      88,   111,   202,   284,   203,   135,     3,   202,   285,   203,
     286,    -1,    48,     3,    88,   111,   202,   284,   203,   135,
       3,   201,     3,   202,   285,   203,   286,    -1,   165,   202,
     287,   203,    -1,    48,     3,   165,   202,   287,   203,    -1,
       3,    -1,   283,   204,     3,    -1,     3,    -1,   284,   204,
       3,    -1,     3,    -1,   285,   204,     3,    -1,    -1,   286,
     127,    69,    51,    -1,   286,   127,    69,   149,   125,    -1,
     286,   127,    69,   137,    -1,   286,   127,    69,   149,    75,
      -1,   286,   127,   163,    51,    -1,   286,   127,   163,   149,
     125,    -1,   286,   127,   163,   137,    -1,   286,   127,   163,
     149,    75,    -1,   286,   127,    69,   124,    -1,   286,   127,
     163,   124,    -1,   286,   119,    90,    -1,   286,   119,   146,
      -1,   286,   119,   130,    -1,   286,    61,    -1,   286,    18,
      61,    -1,   286,    61,   100,    62,    -1,   286,    61,   100,
      99,    -1,     3,    -1,   287,   204,     3,    -1,    -1,   288,
       3,   294,   289,    -1,    -1,   289,    18,   125,    -1,   289,
     125,    -1,   289,    75,     4,    -1,   289,    75,     5,    -1,
     289,    75,     7,    -1,   289,    75,     6,    -1,   289,    75,
     196,   202,   203,    -1,   289,    75,   197,   202,   203,    -1,
     289,    75,   198,   202,   203,    -1,   289,    75,    49,    -1,
     289,    37,    -1,   289,    37,   202,     5,   204,     5,   203,
      -1,   289,    37,   202,     5,   203,    -1,   289,   165,   111,
      -1,   289,   165,    -1,   289,   131,   111,    -1,   289,   111,
      -1,   289,    55,     4,    -1,   289,    54,   202,   207,   203,
      -1,   289,    48,     3,   165,    -1,   289,    48,     3,   131,
     111,    -1,   289,    48,     3,    54,   202,   207,   203,    -1,
      -1,   202,     5,   203,    -1,   202,     5,   204,     5,   203,
      -1,    -1,    44,    -1,    -1,   292,   164,    -1,   292,   179,
      -1,    -1,   293,    58,   149,     4,    -1,   293,    59,     4,
      -1,    47,   290,    -1,   152,   290,   292,    -1,   148,   290,
     292,    -1,   122,   290,   292,    -1,   108,   290,   292,    -1,
     101,   290,   292,    -1,    46,   290,   292,    -1,   133,   290,
     292,    -1,    76,   290,   292,    -1,    86,   290,   292,    -1,
      78,   290,   292,    -1,    79,    -1,   162,    -1,   156,    -1,
      77,    -1,   177,    -1,    58,   290,   293,    -1,   171,   202,
       5,   203,   293,    -1,    44,   290,    -1,   173,   202,     5,
     203,    -1,   161,    -1,    41,    -1,   121,    -1,   118,    -1,
     151,   291,   293,    -1,   155,   291,   293,    -1,   120,   291,
     293,    -1,   112,   291,   293,    -1,    82,   202,   295,   203,
     293,    -1,   149,   202,   295,   203,   293,    -1,    42,    -1,
     166,    -1,     4,    -1,   295,   204,     4,    -1,   297,   236,
     216,    -1,    -1,   103,    -1,   140,    -1,   298,    -1,   149,
     142,     3,    -1,   149,   142,    75,    -1,   149,   299,    -1,
     300,    -1,   299,   204,   300,    -1,     8,    20,   207,    -1,
       8,     9,   207,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   291,   291,   292,   297,   304,   305,   306,   324,   332,
     340,   346,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     377,   378,   379,   380,   383,   384,   385,   386,   387,   390,
     391,   394,   395,   398,   399,   402,   402,   403,   403,   404,
     405,   406,   410,   414,   415,   416,   417,   418,   419,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   441,   448,   455,   461,   462,   463,   466,
     467,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     481,   483,   485,   487,   491,   499,   510,   511,   514,   515,
     518,   526,   534,   545,   555,   556,   570,   571,   572,   573,
     576,   583,   591,   592,   593,   596,   597,   600,   601,   604,
     605,   608,   609,   612,   620,   621,   622,   623,   626,   627,
     630,   631,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   645,   646,   647,   655,   661,   662,   663,   666,   667,
     670,   671,   675,   681,   682,   683,   686,   687,   691,   693,
     695,   697,   699,   703,   704,   705,   708,   709,   712,   713,
     716,   717,   718,   721,   722,   725,   726,   730,   732,   734,
     736,   739,   740,   743,   744,   747,   751,   759,   767,   768,
     769,   770,   774,   777,   778,   781,   781,   783,   787,   794,
     801,   811,   818,   825,   835,   843,   853,   861,   870,   879,
     891,   896,   901,   907,   914,   921,   928,   938,   945,   954,
     961,   970,   977,   986,   993,   999,  1010,  1013,  1019,  1025,
    1032,  1038,  1045,  1051,  1057,  1063,  1069,  1075,  1083,  1090,
    1098,  1099,  1102,  1103,  1104,  1105,  1106,  1109,  1109,  1112,
    1113,  1116,  1126,  1139,  1140,  1140,  1143,  1144,  1145,  1146,
    1149,  1153,  1154,  1155,  1156,  1162,  1165,  1171,  1176,  1182,
    1188,  1195,  1196,  1197,  1201,  1212,  1223,  1234,  1248,  1252,
    1253,  1256,  1257,  1261,  1265,  1267,  1269,  1271,  1273,  1278,
    1282,  1283,  1287,  1294,  1304,  1308,  1313,  1317,  1322,  1326,
    1327,  1330,  1331,  1334,  1335,  1336,  1337,  1338,  1339,  1340,
    1341,  1342,  1344,  1346,  1348,  1350,  1352,  1356,  1357,  1360,
    1361,  1364,  1365,  1368,  1369,  1370,  1371,  1372,  1373,  1374,
    1375,  1376,  1377,  1378,  1379,  1380,  1381,  1382,  1383,  1384,
    1385,  1388,  1389,  1392,  1392,  1402,  1403,  1404,  1405,  1406,
    1407,  1408,  1409,  1410,  1411,  1412,  1413,  1414,  1415,  1416,
    1417,  1418,  1419,  1420,  1421,  1422,  1423,  1424,  1427,  1428,
    1429,  1432,  1433,  1436,  1437,  1438,  1441,  1442,  1443,  1447,
    1448,  1449,  1450,  1451,  1452,  1453,  1454,  1455,  1456,  1457,
    1458,  1459,  1460,  1461,  1462,  1463,  1464,  1465,  1466,  1467,
    1468,  1469,  1470,  1471,  1472,  1473,  1474,  1475,  1476,  1477,
    1478,  1481,  1482,  1485,  1489,  1490,  1491,  1495,  1498,  1499,
    1500,  1501,  1501,  1503,  1504
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
  "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT", "CONSTRAINT",
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
  "opt_temporary", "create_col_list", "create_definition",
  "pk_column_list", "fk_column_list", "fk_ref_column_list", "fk_actions",
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
      59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   205,   206,   206,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   208,   208,   209,   209,   210,   207,   211,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   212,   212,   212,   207,
     207,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     207,   207,   207,   207,   214,   214,   207,   207,   207,   207,
     207,   207,   207,   215,   216,   216,   217,   217,   218,   218,
     219,   219,   220,   220,   220,   221,   221,   222,   222,   223,
     223,   224,   224,   225,   226,   226,   226,   226,   227,   227,
     228,   228,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   230,   230,   230,   231,   232,   232,   232,   233,   233,
     234,   234,   235,   235,   235,   235,   236,   236,   237,   237,
     237,   237,   237,   238,   238,   238,   239,   239,   240,   240,
     241,   241,   241,   242,   242,   243,   243,   244,   244,   244,
     244,   245,   245,   246,   246,   247,   215,   248,   249,   249,
     249,   249,   248,   250,   250,   251,   251,   248,   215,   252,
     252,   215,   253,   253,   253,   253,   253,   253,   253,   253,
     254,   254,   254,   255,   255,   255,   255,   215,   256,   215,
     257,   215,   258,   215,   259,   259,   215,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   215,   261,
     262,   262,   263,   263,   263,   263,   263,   264,   264,   265,
     265,   266,   266,   267,   268,   267,   269,   269,   269,   269,
     261,   270,   270,   270,   270,   215,   271,   271,   271,   215,
     272,   273,   273,   273,   274,   274,   274,   274,   215,   275,
     275,   276,   276,   215,   277,   277,   277,   277,   277,   215,
     278,   278,   215,   279,   279,   279,   279,   279,   279,   280,
     280,   281,   281,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   283,   283,   284,
     284,   285,   285,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   287,   287,   288,   282,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   290,   290,
     290,   291,   291,   292,   292,   292,   293,   293,   293,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   295,   295,   296,   297,   297,   297,   215,   298,   298,
     298,   299,   299,   300,   300
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
       2,     3,     1,     8,    10,     9,     6,    11,     8,     0,
       1,     1,     3,     5,     7,     4,     4,     5,     5,     4,
       6,    11,    13,    13,    15,     4,     6,     1,     3,     1,
       3,     1,     3,     0,     4,     5,     4,     5,     4,     5,
       4,     5,     4,     4,     3,     3,     3,     2,     3,     4,
       4,     1,     3,     0,     4,     0,     3,     2,     3,     3,
       3,     3,     5,     5,     5,     3,     2,     7,     5,     3,
       2,     3,     2,     3,     5,     4,     5,     7,     0,     3,
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
       0,     0,     0,   299,   191,     0,   242,     0,   242,     0,
     132,     0,   242,     0,     0,     0,   103,   186,   198,   201,
     217,   219,   221,   223,   226,   238,   265,   269,   278,   283,
     289,   292,   417,     0,     0,   281,     0,     0,   281,   300,
       0,     0,     0,     0,     0,   248,     0,   248,     0,     0,
     420,   421,     0,     0,     0,     0,   290,     0,     1,     2,
       0,   224,     0,     0,     0,     0,     0,     0,     0,   281,
     195,     0,   190,   188,   189,     0,   218,   199,     0,   244,
     245,   246,   247,   243,     0,   222,     0,     0,     0,   418,
     419,     0,     4,     7,     8,    10,     9,     6,     0,     0,
       0,   143,   133,   100,     0,   101,   102,   134,   135,   136,
      11,   138,   140,   139,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,   104,   141,   220,
     246,   243,   147,     0,     0,   148,   150,   151,   157,   291,
       3,     0,     0,     0,     0,     0,     0,     0,   282,   279,
       0,     0,     0,   280,     0,     0,     0,     0,   193,   106,
       0,     0,     0,     0,   249,   249,   424,   423,   422,     0,
      43,     0,    28,    27,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,   180,     0,     0,     0,     0,
     165,   164,   168,   172,   169,     0,     0,   166,   156,     0,
       0,     0,     0,     0,     0,     0,   225,   400,   409,   368,
     368,   368,   368,   368,   393,   368,   390,     0,   368,   368,
     368,   371,   402,   371,   401,   368,   368,   368,     0,   371,
     368,   371,   392,   399,   391,   410,     0,     0,   394,   284,
       0,     0,     0,     0,   414,   196,     0,   119,     0,   106,
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
     397,   373,   379,   376,   373,   373,     0,   373,   373,   373,
     372,   376,   376,   373,   373,   373,     0,   376,   373,   376,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     415,   416,     0,   343,   296,   157,   107,     0,   124,   106,
     192,   194,     0,   240,   251,     0,     0,   240,     0,   240,
       0,    52,     0,    90,     0,     0,     0,    51,     0,     0,
      63,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    66,    67,    68,     0,     0,     0,    37,    35,     0,
       0,    99,    97,    47,     0,     0,     0,     0,     0,     0,
     108,   180,   182,   182,   182,     0,     0,     0,   119,   170,
     171,     0,     0,   173,     0,     0,     0,     0,     0,     0,
       0,   385,   395,   387,   389,   411,     0,   388,   384,   383,
     406,   405,   382,   386,   381,     0,   403,   380,   404,     0,
       0,   286,     0,   285,     0,   210,     0,     0,     0,     0,
       0,   212,     0,     0,     0,     0,   414,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   301,     0,     0,     0,
       0,   187,   197,     0,     0,     0,   260,   250,     0,     0,
     240,   267,   240,   268,    42,    94,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,    39,     0,     0,     0,    30,     0,
     117,   153,     0,     0,     0,     0,   274,     0,     0,   124,
     162,   160,     0,     0,   158,   174,     0,     0,     0,     0,
       0,   234,   369,     0,   374,   375,     0,     0,   376,     0,
     376,   376,   398,     0,     0,     0,     0,     0,     0,     0,
     202,     0,     0,     0,     0,     0,     0,   343,   298,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   414,   343,
       0,   413,   112,   120,   121,   125,   262,   261,     0,     0,
     252,   257,   256,     0,   254,   239,   266,    91,    95,     0,
      61,    60,     0,    65,     0,     0,    79,    80,    69,     0,
      71,    46,     0,    50,    40,    33,    31,    32,     0,     0,
     119,   181,     0,     0,     0,     0,     0,     0,   270,   175,
       0,   161,     0,     0,     0,   341,     0,     0,     0,   378,
     407,   412,   408,   396,     0,   287,     0,     0,     0,     0,
       0,   211,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,     0,     0,
       0,     0,   295,   302,   345,   113,   114,   123,     0,     0,
       0,     0,     0,   253,     0,     0,     0,     0,    64,    81,
      82,    83,    84,    88,    87,    89,    86,    85,     0,    48,
     112,   115,   118,   124,   183,     0,     0,     0,   275,   276,
       0,     0,   227,   319,     0,   317,     0,   228,     0,   370,
     377,     0,   206,   213,   214,   215,     0,     0,   203,     0,
       0,     0,   414,     0,     0,     0,     0,   309,     0,     0,
       0,   306,     0,   305,     0,   315,   344,   122,   127,   126,
     241,   264,   263,   259,   258,     0,    62,    59,    70,   110,
       0,     0,   109,   128,   179,     0,   178,   177,     0,   176,
       0,     0,     0,   232,     0,   342,   288,     0,     0,   208,
       0,   205,   297,     0,     0,     0,     0,     0,   307,   308,
     131,   303,     0,   356,     0,     0,     0,     0,   362,   347,
       0,   360,     0,   116,   112,     0,   105,   184,   277,   230,
       0,   320,   318,   216,   207,     0,   310,     0,     0,   316,
       0,   346,     0,     0,     0,   363,   348,   349,   351,   350,
     355,     0,     0,     0,   361,   359,   255,   111,   129,     0,
     209,     0,   304,     0,     0,     0,     0,   365,     0,     0,
       0,     0,     0,     0,     0,     0,   358,     0,     0,   366,
     364,   352,   353,   354,   321,     0,     0,     0,     0,     0,
       0,   323,     0,     0,     0,     0,   323,   357,   367,   229,
     322,     0,     0,     0,   311,     0,   337,     0,     0,     0,
     323,   323,     0,   338,   231,     0,   334,   336,   335,     0,
       0,     0,   313,   312,   339,   340,   324,   332,   326,     0,
     328,   333,   330,     0,   323,   327,   325,   331,   329,   314
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   308,   309,   310,   479,   591,   323,   584,   187,
      15,    16,   297,   600,   781,   757,   842,   700,   438,   663,
     664,   561,   886,   748,    52,   137,   138,   231,   144,   145,
     146,   249,   147,   246,   391,   247,   387,   614,   615,   379,
     603,   785,   148,    17,    42,    75,   168,    18,    19,   540,
     541,    20,    21,    22,    23,    24,    25,   566,    45,    84,
     304,   445,   570,   765,   673,   443,    26,    27,    55,   383,
      28,    63,    29,    30,    31,    41,   555,   556,   796,   794,
     945,   959,   716,   557,   826,   400,   411,   511,   512,   289,
     516,   434,   435,    32,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -753
static const yytype_int16 yypact[] =
{
     708,  -130,  -117,   189,  -753,   -59,  -753,    39,  -753,    21,
    -753,    73,     7,   238,   105,   -12,  -753,  -753,  -753,  -753,
    -753,  -753,  -753,  -753,  -753,  -753,  -753,  -753,  -753,  -753,
    -753,  -753,  -753,   273,   287,   262,   392,    81,   262,  -753,
     327,   277,   149,   441,    84,   329,   448,   329,   406,    28,
     278,  -753,   495,   455,   332,    14,  -753,   486,  -753,   708,
     198,   290,   336,   515,   483,   398,   347,   536,    88,   262,
     360,   544,  -753,  -753,  -753,   -68,  -753,  -753,   384,  -753,
    -753,  -753,  -753,  -753,   563,  -753,   572,  1382,  1382,  -753,
    -753,   598,   161,  -753,  -753,  -753,  -753,   588,  1382,  1382,
    1382,  -753,  -753,  -753,   279,  -753,  -753,  -753,  -753,  -753,
    -753,  -753,  -753,  -753,  -753,   424,   433,   439,   443,   450,
     507,   520,   543,   545,   553,   555,   568,   573,   580,   590,
     608,   611,   621,   632,   634,  1382,  2580,   -20,  -753,  -753,
      15,    16,     9,     4,  -110,   609,  -753,  -753,   686,  -753,
    -753,   683,   712,   742,   757,   789,   792,   635,  -753,  -753,
    2304,   838,   841,  -753,   718,   669,   851,   829,  -753,   245,
     143,    14,   853,   866,   -98,   111,  2655,  2655,  -753,   869,
    1382,  1382,   928,   928,  -753,  1382,  2217,   246,   723,  1382,
     194,  1382,  1382,   794,  1382,  1382,  1382,  1382,  1382,  1382,
    1382,  1382,  1382,  1382,   672,   676,   677,   678,  1617,  -753,
    1382,  1382,  1382,  1382,  1382,    32,   680,   524,  1382,   710,
    1382,  1382,  1382,  1382,  1382,  1382,  1382,  1382,  1382,  1382,
     880,  -753,    14,  1382,   881,   137,   682,   244,   884,    14,
    -753,  -753,  -753,   -80,  -753,    14,   778,   763,  -753,   908,
     917,   918,   919,   920,   921,   922,  -753,  -753,  -753,   724,
     724,   724,   724,   724,  -753,   724,  -753,   727,   724,   724,
     724,   886,  -753,   886,  -753,   724,   724,   724,   729,   886,
     724,   886,  -753,  -753,  -753,  -753,   730,   731,  -753,   271,
     199,   807,   933,   934,   119,  -753,  1382,   810,    14,   165,
     360,  -753,   936,   937,   769,   936,   173,  -753,   558,  -753,
     739,  2655,  2285,   254,  -753,  1382,  1382,   740,    98,  -753,
    -753,  -753,  1638,   821,  1018,  1267,   741,  1685,  1706,  1727,
    1748,  1782,  1803,  1824,  1845,  1430,  1467,  1490,  -753,  -753,
    -753,  -753,  -753,  2675,  2694,  1285,  1508,  1508,  -753,    31,
    -753,   723,  1382,  1382,   743,  1382,  2611,   758,   759,   760,
     910,   641,   837,   675,   529,   595,   595,   935,   935,   935,
     935,  -753,  -753,   165,  -753,   330,   857,   858,   859,  -753,
    -753,  -753,    -7,   237,   609,   763,   763,   854,   844,    14,
    -753,   862,  -753,   -31,  -753,  -753,  -753,   820,  -753,   989,
    -753,  -753,  -753,  -753,  -753,  -753,   991,  -753,  -753,  -753,
    -753,  -753,  -753,  -753,  -753,  -753,   991,  -753,  -753,  -753,
     992,   993,   874,   798,  1382,   852,    82,  1019,   236,   897,
    -753,  -753,  1022,   431,  -753,   686,  2655,   983,   911,   165,
    -753,  -753,  1041,   -97,  -753,   252,   860,   -97,   860,   941,
    1382,  -753,  1382,  -753,  1382,  2493,  2306,  -753,  1382,  1382,
    -753,  1382,  2472,   954,   954,  -753,  -753,  -753,  -753,  -753,
    -753,  -753,  -753,  -753,  1382,  1382,  1382,  -753,  -753,  1382,
     868,  1508,  1508,   723,  2633,  1382,   723,   723,   723,   870,
     979,   137,   982,   982,   982,  1382,  1072,  1073,   810,  -753,
    -753,    14,  1382,   -72,    14,   875,   969,   970,   882,  1079,
     292,   185,   381,   185,   185,  -753,   301,   185,   185,   185,
     381,   381,   185,   185,   185,   303,   381,   185,   381,   885,
     912,  1031,  1382,  2655,   887,  -753,   909,   914,   923,   924,
     311,  -753,   250,   944,    82,  1080,   208,  1084,   925,  1008,
     316,   926,   927,  1009,   929,   342,  -753,  1118,   723,  1119,
    1382,  -753,  -753,  1061,  1012,  1121,  -753,  -753,  1127,  1136,
     -40,  -753,   -40,  -753,  -753,  2655,  2514,  -753,  1382,  1596,
      52,  1871,  1382,  1382,   930,   931,  1892,  1575,  1913,   932,
    -753,  1382,   942,  1382,  1029,   943,   945,   946,  -753,  1089,
    1039,  -753,  1028,   948,   949,   950,  2655,  1135,     2,   911,
    -753,  2655,  1382,   955,  -753,  -753,   -72,  1382,   956,   957,
    1144,  -753,  -753,  1151,  -753,  -753,  1011,  1164,  -753,  1165,
    -753,  -753,  -753,   968,  1934,    82,  1168,  1169,  1170,  1171,
    -753,  1172,  1010,    82,   976,   346,   251,   431,  -753,   191,
    1382,   978,   980,   981,  1178,  1178,   985,  1144,    80,   431,
    2304,  -753,   147,   984,  -753,   589,  -753,  2655,  1027,  1174,
    -753,  -753,  2655,   386,  -753,  -753,  -753,  -753,  2655,  1382,
    -753,  -753,  1382,  -753,  1968,  2196,  -753,  -753,  -753,  1382,
    -753,  -753,   988,  -753,  1029,  -753,  -753,  -753,  1382,  1382,
     810,  -753,  1192,  1192,  1192,  1382,  1382,  1193,  -753,  2655,
    1178,  -753,  1989,  1194,  1195,  -753,   389,   996,  1196,  -753,
     381,  -753,   381,   381,  1382,  -753,   391,   998,   999,  1000,
    1001,  -753,  1002,   425,    82,  -753,  1037,    82,   428,  1005,
    1098,  1099,  1015,  2010,  1194,  1178,  1178,  -753,   430,   440,
    1195,   445,  -753,  -753,  -753,  -753,  -753,  -753,  1119,  1382,
    1382,   936,  1159,  -753,  1359,  1016,  2031,  2057,  -753,  -753,
    -753,  -753,  -753,  -753,  -753,  -753,  -753,  -753,  2078,  -753,
    2544,   140,  2655,   911,  -753,   447,   452,   454,  2655,  2655,
    1199,   456,  1202,  -753,   470,  -753,   492,  -753,  1210,  -753,
    -753,  2099,  -753,  -753,  -753,  -753,  1211,    82,  -753,   517,
    1021,   521,   126,  1382,  1023,  1024,  1144,  -753,   526,   530,
     533,  -753,  1218,  -753,   535,  -753,   240,  -753,  2655,  2655,
    1020,  -753,  2655,  -753,  2655,  1136,  -753,  -753,  -753,  -753,
    1090,  1382,  -753,  1120,  -753,  1226,  -753,  -753,  1382,  -753,
    1060,  1096,  1229,  -753,  1230,  -753,  -753,  1032,   538,  -753,
      82,  -753,  -753,  2120,  1194,  1195,   546,  1101,  -753,  -753,
    -753,  -753,  1112,  1036,  1236,  1038,  1258,    37,  -753,  -753,
    1153,  1154,   548,  -753,  2544,  1178,  -753,  -753,  2655,  -753,
    1263,  -753,  -753,  -753,  -753,   550,  -753,   561,   565,  -753,
    1264,  -753,  1265,    77,  1382,  -753,  -753,  -753,  -753,  -753,
    -753,  1066,  1067,  1069,  -753,  -753,  -753,  -753,  1068,  1071,
    -753,  1139,  -753,   331,   581,  1074,  1191,  -753,  2154,  1133,
    1134,  1156,  1272,  1357,  1365,  1272,  -753,  1364,  1382,  -753,
    -753,  -753,  -753,  -753,  -753,   591,   602,  1173,   603,  1167,
    2175,  -753,  1368,  1369,  1272,  1272,  -753,  -753,  -753,   187,
    -753,  1176,   605,   612,   289,   -35,  1273,   227,    19,  1272,
    -753,  -753,  1313,  -753,  -753,   299,  -753,  -753,  -753,   175,
     203,   614,   289,   289,  -753,  -753,  -753,  -753,  -753,   216,
    -753,  -753,  -753,   217,  -753,  -753,  -753,  -753,  -753,   289
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -753,  1320,   -52,  -426,  -753,  -753,  -753,  -753,   916,  1197,
    -753,  -128,  -193,  -753,  -753,  -752,  -753,  -753,  -493,  -753,
     623,  -579,  -753,  -649,  -753,  -753,  1149,  -138,   -41,  1152,
    -234,   958,  -753,  -753,   436,  -753,  -753,  -753,   776,   903,
     337,   129,  -753,  -753,  -753,  1324,  1097,  -753,  -753,  -542,
    -753,  -753,  -753,  -753,  -753,  -753,  -753,  -357,    46,  1349,
    1223,  -753,   953,  -753,   567,  -304,  -753,  -753,  -753,  -753,
    -753,   -13,  -753,  -753,  -753,  -753,   756,   745,  -651,  -711,
    -445,  -557,  -637,  -753,  -753,   511,   255,    79,  -403,   746,
     994,  -543,  -753,  -753,  -753,  1314
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -295
static const yytype_int16 yytable[] =
{
     136,   447,   645,   648,   235,   609,   749,   142,   520,   521,
    -271,   388,   209,   495,   526,   236,   528,   142,  -273,  -272,
     751,   171,   706,   505,   574,    67,   973,    33,   839,    48,
     708,    89,   564,   818,   385,   176,   177,   477,   348,   238,
      34,   906,   907,   908,   909,    43,   182,   183,   184,   230,
     349,   302,   186,   589,    47,   612,   166,   506,    54,   386,
     317,   791,   210,   211,   212,   213,   214,   215,   216,   232,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   208,    65,   535,   910,    77,   979,   564,
     571,   164,   573,   726,   239,   613,   819,   820,    44,   824,
     507,   733,   237,    90,   303,    58,   440,   565,   210,   211,
     212,   213,   214,   215,   216,   752,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   311,
     299,   925,   917,   312,   508,   974,   172,   318,   322,   324,
     325,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,    70,   897,    10,   503,   478,   350,   343,   344,
     345,   346,   347,    49,   674,   692,   356,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   449,   866,
     490,   136,   980,   430,   233,   755,    66,   458,    59,    78,
     498,   373,   809,   165,   496,   811,    46,    92,    93,    94,
      95,    96,    97,   707,   843,   965,   143,   783,   926,  -271,
     234,    98,    99,   675,   898,   676,   143,  -273,  -272,   100,
     431,   756,   430,   480,   376,   720,   986,   722,   723,   430,
      53,   151,   489,   911,   912,   913,   918,   491,    71,   319,
     377,    56,   927,   103,   436,   739,   562,   104,   966,    35,
     105,   106,    72,    36,   990,   681,   682,   439,   872,   431,
     305,   152,    73,   455,   456,   858,   431,   610,   153,   862,
     616,   462,   536,   537,   538,   539,    60,   873,   154,   740,
    -293,    74,    92,    93,    94,    95,    96,    97,   874,   422,
      61,   995,   997,    37,   875,   876,    98,    99,    57,   987,
     481,   482,   459,   484,   100,   378,   967,   972,   208,   320,
     298,   430,   988,   303,   968,   877,   840,   976,   895,   110,
     432,   433,   741,    10,   989,   423,  -294,   991,   103,   314,
     315,    38,   104,   209,   155,   105,   106,   453,   454,   296,
     992,   996,   998,    39,   841,   448,   424,   172,   431,   624,
     966,   878,   993,   321,    40,   592,   742,   977,   595,   596,
     597,   984,   179,   180,   625,   879,   425,    62,   156,   239,
     230,   880,   533,   978,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    79,    64,   135,    79,   985,   964,
     575,   426,   576,   543,   110,   881,   579,   580,   967,   581,
     647,   296,  -195,   982,   983,    87,   968,   642,   736,   296,
     652,   316,   586,   587,   588,    80,    88,   653,    80,   316,
     661,    68,    81,   594,    69,   140,    82,   999,   544,   626,
     627,   497,    83,   606,    76,   141,   167,   381,   239,  -195,
     611,    85,   643,   737,   185,   567,   568,   830,   139,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   547,
     634,   135,    91,   513,   514,   548,   517,   518,   519,   149,
     948,   157,   522,   523,   524,   622,   623,   527,    92,    93,
      94,    95,    96,    97,   628,   629,   630,   629,   665,   962,
     963,   667,    98,    99,   640,   641,   158,   672,   159,   549,
     100,   101,   550,   160,   981,   161,   678,   162,   412,   102,
     684,   685,   934,   935,   417,   551,   419,   352,   353,   163,
     354,   694,   552,   355,   103,   658,   659,   169,   104,   735,
     641,   105,   106,   223,   224,   225,   226,   227,   228,   229,
     709,   167,   553,   107,   173,   712,   174,   108,   210,   211,
     212,   213,   214,   215,   216,   175,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   763,
     764,   109,   797,   798,   802,   641,   554,   181,   743,   210,
     211,   212,   213,   214,   215,   216,    48,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     110,   225,   226,   227,   228,   229,   188,   766,   808,   641,
     767,   812,   659,   821,   822,   189,   111,   778,   256,   112,
     113,   190,   114,   823,   822,   191,   780,   782,   825,   798,
     844,   845,   192,   788,   789,   846,   845,   847,   845,   849,
     822,   240,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   801,   851,   852,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   853,   854,   135,   222,   223,
     224,   225,   226,   227,   228,   229,   759,   828,   829,   193,
     832,   241,   834,    92,    93,    94,    95,    96,    97,  -163,
     859,   641,   194,   242,   861,   641,   248,    98,    99,   867,
     852,   250,   243,   868,   822,   100,   869,   822,   871,   854,
       1,   894,   641,     2,   357,   195,   358,   196,   244,   899,
     798,   916,   764,   920,   641,   197,   245,   198,     3,   103,
     251,   863,   450,   104,   921,   852,   105,   106,   922,   854,
     199,   401,   402,   403,   404,   200,   405,     4,     5,   407,
     408,   409,   201,   672,   936,   937,   413,   414,   415,   884,
     252,   418,   202,   760,   951,   952,   888,    92,    93,    94,
      95,    96,    97,   953,   954,   253,   956,   952,   970,   952,
     203,    98,    99,   204,     6,   971,   952,   994,   952,   100,
     326,   499,   500,   205,    92,    93,    94,    95,    96,    97,
     604,   605,   786,   787,   206,   110,   207,   254,    98,    99,
     255,   290,     7,   103,   291,   292,   100,   104,     8,   293,
     105,   106,   928,   359,   294,   295,   300,     9,    10,   221,
     222,   223,   224,   225,   226,   227,   228,   229,    11,   301,
     103,    12,   307,    10,   104,   338,    13,   105,   106,   339,
     340,   341,   351,   372,   375,   380,   950,   382,   389,   390,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     461,   392,   360,    92,    93,    94,    95,    96,    97,   110,
     393,   394,   395,   396,   397,   398,   399,    98,    99,   406,
     410,   416,   420,   421,   427,   100,   428,   429,   437,   442,
     444,   446,   451,   457,   465,   483,   110,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   103,
     486,   487,   488,   104,   501,   229,   105,   106,   492,   493,
     494,   502,   504,   509,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   510,   515,   135,   529,   530,   531,
     532,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   534,   542,   135,   545,   546,   559,   560,   210,   211,
     212,   213,   214,   215,   216,   110,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      10,   563,   569,   583,    92,    93,    94,    95,    96,    97,
     564,   590,   599,   598,   602,   607,   608,   617,    98,    99,
     618,   619,   621,   646,   620,   633,   100,   649,   631,   635,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     103,   636,   135,   644,   104,   632,   637,   105,   106,   651,
     656,   660,   662,   668,   669,   638,   639,   650,   654,   655,
     670,   657,   698,   686,   687,   691,   666,   699,   701,    92,
      93,    94,    95,    96,    97,   693,   695,   715,   696,   697,
     702,   703,   704,    98,    99,   705,   717,   710,   713,   714,
     718,   100,    92,    93,    94,    95,    96,    97,   719,   721,
     724,   727,   728,   729,   730,   731,    98,    99,   734,   732,
     744,   747,   745,   746,   100,   103,   110,   750,   758,   104,
     761,   779,   105,   106,   762,   784,   790,   793,   795,   799,
     800,   803,   804,   805,   807,   806,   810,   813,   103,   814,
     815,   671,   104,   855,   857,   105,   106,   816,   835,   848,
     850,   870,   463,   860,   565,   864,   865,   885,   883,   887,
     889,   890,   891,   892,   831,   893,   900,   901,   902,   903,
     904,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   110,   905,   135,   914,   915,   919,   923,   929,   930,
     924,   931,   822,   932,   933,   944,   938,   210,   211,   212,
     213,   214,   215,   216,   110,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   213,   214,
     215,   216,   939,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   941,   942,   135,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   943,
     946,   135,    92,    93,    94,    95,    96,    97,   947,   949,
     957,   960,   961,   975,   973,   955,    98,    99,   969,   150,
     585,   827,   374,   313,   100,    92,    93,    94,    95,    96,
      97,   384,   711,   558,   601,   170,    86,   441,   306,    98,
      99,   572,   882,   738,   753,   178,   754,   100,   103,     0,
     525,     0,   104,     0,     0,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,     0,     0,   833,   104,     0,     0,   105,   106,
     210,   211,   212,   213,   214,   215,   216,     0,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,   210,   211,   212,
     213,   214,   215,   216,   110,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,     0,     0,
     210,   211,   212,   213,   214,   215,   216,   110,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,  -295,  -295,  -295,  -295,     0,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,     0,
       0,   135,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,     0,     0,   135,   210,   211,   212,   213,   214,
     215,   216,     0,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   210,   211,   212,   213,
     214,   215,   216,     0,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   210,   211,   212,
     213,   214,   215,   216,   474,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   210,   211,
     212,   213,   214,   215,   216,     0,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,     0,
       0,   475,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   679,     0,
       0,     0,     0,     0,   476,   210,   211,   212,   213,   214,
     215,   216,     0,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   210,   211,   212,   213,
     214,   215,   216,     0,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   210,   211,
     212,   213,   214,   215,   216,     0,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   689,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   210,   211,   212,   213,   214,   215,   216,   680,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   210,   211,   212,   213,   214,   215,   216,
     342,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   210,   211,   212,   213,   214,   215,
     216,   460,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   210,   211,   212,   213,   214,
     215,   216,     0,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,     0,     0,     0,     0,
       0,   210,   211,   212,   213,   214,   215,   216,   466,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   210,   211,   212,   213,   214,   215,   216,   467,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   210,   211,   212,   213,   214,   215,   216,
     468,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   210,   211,   212,   213,   214,   215,
     216,   469,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   210,   211,
     212,   213,   214,   215,   216,   470,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   210,
     211,   212,   213,   214,   215,   216,   471,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     210,   211,   212,   213,   214,   215,   216,   472,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   210,   211,   212,   213,   214,   215,   216,   473,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,     0,     0,     0,     0,     0,   210,   211,   212,
     213,   214,   215,   216,   683,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   210,   211,
     212,   213,   214,   215,   216,   688,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   210,
     211,   212,   213,   214,   215,   216,   690,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     210,   211,   212,   213,   214,   215,   216,   725,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   210,   211,   212,   213,   214,   215,
     216,   768,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   210,   211,   212,   213,   214,
     215,   216,   792,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   210,   211,   212,   213,
     214,   215,   216,   817,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   210,   211,   212,
     213,   214,   215,   216,   836,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     837,     0,   769,   770,     0,     0,     0,   771,     0,   772,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   838,     0,     0,     0,     0,     0,     0,     0,     0,
     773,   774,     0,   775,     0,   210,   211,   212,   213,   214,
     215,   216,   856,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   210,   211,   212,   213,
     214,   215,   216,   896,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,     0,     0,     0,
       0,     0,     0,     0,     0,   257,   258,     0,   259,     0,
     260,   261,     0,     0,     0,     0,     0,   940,     0,     0,
       0,     0,   262,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   776,   777,     0,     0,     0,   958,     0,
     263,   264,   265,   266,     0,     0,   267,     0,     0,     0,
     268,     0,   185,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,     0,     0,     0,     0,
       0,     0,   270,     0,     0,     0,   271,     0,     0,     0,
       0,     0,   272,     0,   273,   274,   275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   276,     0,     0,
       0,     0,     0,   452,     0,     0,     0,     0,     0,     0,
       0,     0,   277,   278,     0,   279,   280,     0,     0,   281,
     282,     0,     0,     0,   578,   283,   284,     0,     0,     0,
     285,     0,     0,     0,     0,   286,     0,   287,     0,     0,
       0,   288,   210,   211,   212,   213,   214,   215,   216,     0,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   210,   211,   212,   213,   214,   215,   216,
       0,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   210,   211,   212,   213,   214,   215,
     216,     0,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   210,   211,   212,   213,   214,   215,
     216,   582,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,     0,   577,     0,     0,     0,
       0,     0,   755,   209,     0,     0,     0,     0,     0,     0,
     210,   211,   212,   213,   214,   215,   216,   677,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,     0,     0,     0,     0,     0,     0,     0,   756,     0,
     230,   210,   211,   212,   213,   214,   215,   216,     0,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,     0,   210,   211,   212,   213,   214,   215,   216,
     485,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     0,   210,   211,   212,   213,   214,
     215,   216,   593,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   211,   212,   213,   214,
     215,   216,     0,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   212,   213,   214,   215,
     216,     0,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229
};

static const yytype_int16 yycheck[] =
{
      52,   305,   544,   546,   142,   498,   655,     3,   411,   412,
       3,   245,     3,    20,   417,   143,   419,     3,     3,     3,
     657,    89,    20,    54,   450,    38,    61,   157,   780,     8,
     609,     3,   129,   744,   114,    87,    88,     6,     6,   149,
     157,     4,     5,     6,     7,   104,    98,    99,   100,    40,
      18,   149,   104,   479,     8,   127,    69,    88,    12,   139,
     188,   710,    10,    11,    12,    13,    14,    15,    16,    89,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   135,     3,     3,    49,     3,    69,   129,
     447,     3,   449,   635,   204,   167,   745,   746,   157,   750,
     131,   643,   143,    75,   202,     0,   299,   204,    10,    11,
      12,    13,    14,    15,    16,   658,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   181,
     171,    54,   884,   185,   165,   170,   204,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,     3,   864,   150,   389,   125,   125,   210,   211,
     212,   213,   214,   142,   204,   591,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   306,   816,
     373,   233,   163,   103,   204,    38,   105,    89,   200,   105,
     383,   232,   734,   105,   201,   737,   157,     3,     4,     5,
       6,     7,     8,   201,   783,    18,   202,   700,   131,   202,
     201,    17,    18,   570,   865,   572,   202,   202,   202,    25,
     140,    74,   103,   351,    87,   628,    51,   630,   631,   103,
     157,    33,   360,   196,   197,   198,   885,   375,    89,    45,
     103,     3,   165,    49,   296,    54,   439,    53,    61,    60,
      56,    57,   103,    64,    51,   203,   204,   298,    18,   140,
     149,    63,   113,   315,   316,   807,   140,   501,    70,   812,
     504,   323,   190,   191,   192,   193,     3,    37,    80,    88,
     200,   132,     3,     4,     5,     6,     7,     8,    48,    18,
       3,    75,    75,   104,    54,    55,    17,    18,    60,   124,
     352,   353,   204,   355,    25,   168,   119,    18,   360,   115,
     167,   103,   137,   202,   127,    75,   176,    90,   860,   125,
     201,   202,   131,   150,   149,    54,   200,   124,    49,    83,
      84,   142,    53,     3,   136,    56,    57,    83,    84,   174,
     137,   125,   125,   154,   204,   172,    75,   204,   140,   164,
      61,   111,   149,   159,   165,   483,   165,   130,   486,   487,
     488,    62,   201,   202,   179,   125,   167,   105,   170,   204,
      40,   131,   424,   146,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    65,     3,   202,    65,    99,   956,
     452,   202,   454,   167,   125,   165,   458,   459,   119,   461,
     202,   174,   167,   970,   971,     9,   127,   167,   167,   174,
     104,   175,   474,   475,   476,    96,    20,   111,    96,   175,
     558,   104,   103,   485,   157,   103,   107,   994,   202,    58,
      59,   204,   113,   495,     3,   113,   201,   203,   204,   204,
     502,     3,   202,   202,   175,   203,   204,   761,     3,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,    48,
     532,   202,   204,   404,   405,    54,   407,   408,   409,     3,
     935,   201,   413,   414,   415,   203,   204,   418,     3,     4,
       5,     6,     7,     8,   203,   204,   203,   204,   560,   954,
     955,   563,    17,    18,   203,   204,   180,   569,     3,    88,
      25,    26,    91,    40,   969,   127,   578,   180,   273,    34,
     582,   583,   201,   202,   279,   104,   281,    13,    14,     3,
      16,   593,   111,    19,    49,   203,   204,     3,    53,   203,
     204,    56,    57,    24,    25,    26,    27,    28,    29,    30,
     612,   201,   131,    68,   180,   617,     3,    72,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   203,
     204,    96,   203,   204,   203,   204,   165,     9,   650,    10,
      11,    12,    13,    14,    15,    16,     8,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     125,    26,    27,    28,    29,    30,   202,   679,   203,   204,
     682,   203,   204,   203,   204,   202,   141,   689,     3,   144,
     145,   202,   147,   203,   204,   202,   698,   699,   203,   204,
     203,   204,   202,   705,   706,   203,   204,   203,   204,   203,
     204,    52,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   724,   203,   204,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   203,   204,   202,    23,    24,
      25,    26,    27,    28,    29,    30,   117,   759,   760,   202,
     762,   102,   764,     3,     4,     5,     6,     7,     8,   110,
     203,   204,   202,   114,   203,   204,    40,    17,    18,   203,
     204,    48,   123,   203,   204,    25,   203,   204,   203,   204,
      32,   203,   204,    35,    34,   202,    36,   202,   139,   203,
     204,   203,   204,   203,   204,   202,   147,   202,    50,    49,
      48,   813,   204,    53,   203,   204,    56,    57,   203,   204,
     202,   260,   261,   262,   263,   202,   265,    69,    70,   268,
     269,   270,   202,   835,   203,   204,   275,   276,   277,   841,
      48,   280,   202,   204,   203,   204,   848,     3,     4,     5,
       6,     7,     8,   201,   202,    48,   203,   204,   203,   204,
     202,    17,    18,   202,   106,   203,   204,   203,   204,    25,
      26,   385,   386,   202,     3,     4,     5,     6,     7,     8,
     493,   494,   703,   704,   202,   125,   202,    48,    17,    18,
      48,     3,   134,    49,     3,   127,    25,    53,   140,   180,
      56,    57,   904,   143,     3,    26,     3,   149,   150,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   160,     3,
      49,   163,     3,   150,    53,   203,   168,    56,    57,   203,
     203,   203,   202,     3,     3,   203,   938,     3,   110,   126,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      89,     3,   202,     3,     4,     5,     6,     7,     8,   125,
       3,     3,     3,     3,     3,     3,   202,    17,    18,   202,
      44,   202,   202,   202,   127,    25,     3,     3,   128,     3,
       3,   172,   203,   203,   203,   202,   125,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    49,
     202,   202,   202,    53,   110,    30,    56,    57,   111,   111,
     111,   127,   110,   153,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,     5,     4,   202,     5,     5,   125,
     202,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   169,     3,   202,   127,     3,    43,   116,    10,    11,
      12,    13,    14,    15,    16,   125,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     150,    20,   202,   109,     3,     4,     5,     6,     7,     8,
     129,   203,    93,   203,    92,     3,     3,   202,    17,    18,
     111,   111,     3,     3,   202,    54,    25,     3,   203,   202,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      49,   202,   202,   169,    53,   203,   202,    56,    57,   111,
     111,     3,     3,   111,     3,   202,   202,   202,   202,   202,
       3,   202,    43,   203,   203,   203,    75,    98,   110,     3,
       4,     5,     6,     7,     8,   203,   203,     3,   203,   203,
     202,   202,   202,    17,    18,    20,     5,   202,   202,   202,
     149,    25,     3,     4,     5,     6,     7,     8,     4,     4,
     202,     3,     3,     3,     3,     3,    17,    18,   202,   169,
     202,     3,   202,   202,    25,    49,   125,   202,   204,    53,
     163,   203,    56,    57,    20,     3,     3,     3,     3,   203,
       4,   203,   203,   203,   202,   204,   169,   202,    49,   111,
     111,    75,    53,     3,     3,    56,    57,   202,   202,    20,
      18,     3,   204,   202,   204,   202,   202,   107,   138,     3,
     170,   135,     3,     3,    75,   203,   135,   125,   202,     3,
     202,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   125,     4,   202,   111,   111,     3,     3,   202,   202,
       5,   202,   204,   202,   135,     3,   202,    10,    11,    12,
      13,    14,    15,    16,   125,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    13,    14,
      15,    16,   111,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   203,   203,   202,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   203,
       3,   202,     3,     4,     5,     6,     7,     8,     3,     5,
     203,     3,     3,   100,    61,   202,    17,    18,   202,    59,
     464,   758,   233,   186,    25,     3,     4,     5,     6,     7,
       8,   239,   616,   435,   491,    71,    47,   300,   175,    17,
      18,   448,   835,   647,   659,    91,   660,    25,    49,    -1,
     416,    -1,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    75,    53,    -1,    -1,    56,    57,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   125,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   125,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,    -1,
      -1,   202,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,    -1,   202,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   204,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,   204,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   204,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   203,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     203,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   203,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   203,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   203,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     203,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   203,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   203,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   203,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   203,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   203,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   203,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   203,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   203,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   203,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   203,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   203,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   203,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   203,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    66,    67,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    -1,    97,    -1,    10,    11,    12,    13,    14,
      15,    16,   203,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   203,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   177,   178,    -1,    -1,    -1,   203,    -1,
      76,    77,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,   108,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,   118,    -1,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,    -1,   151,   152,    -1,    -1,   155,
     156,    -1,    -1,    -1,   158,   161,   162,    -1,    -1,    -1,
     166,    -1,    -1,    -1,    -1,   171,    -1,   173,    -1,    -1,
      -1,   177,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    89,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    38,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    83,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      40,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
      39,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,    39,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    35,    50,    69,    70,   106,   134,   140,   149,
     150,   160,   163,   168,   206,   215,   216,   248,   252,   253,
     256,   257,   258,   259,   260,   261,   271,   272,   275,   277,
     278,   279,   298,   157,   157,    60,    64,   104,   142,   154,
     165,   280,   249,   104,   157,   263,   157,   263,     8,   142,
     299,   300,   229,   157,   263,   273,     3,    60,     0,   200,
       3,     3,   105,   276,     3,     3,   105,   276,   104,   157,
       3,    89,   103,   113,   132,   250,     3,     3,   105,    65,
      96,   103,   107,   113,   264,     3,   264,     9,    20,     3,
      75,   204,     3,     4,     5,     6,     7,     8,    17,    18,
      25,    26,    34,    49,    53,    56,    57,    68,    72,    96,
     125,   141,   144,   145,   147,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   202,   207,   230,   231,     3,
     103,   113,     3,   202,   233,   234,   235,   237,   247,     3,
     206,    33,    63,    70,    80,   136,   170,   201,   180,     3,
      40,   127,   180,     3,     3,   105,   276,   201,   251,     3,
     250,    89,   204,   180,     3,     3,   207,   207,   300,   201,
     202,     9,   207,   207,   207,   175,   207,   214,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   207,     3,
      10,    11,    12,    13,    14,    15,    16,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      40,   232,    89,   204,   201,   232,   216,   233,   149,   204,
      52,   102,   114,   123,   139,   147,   238,   240,    40,   236,
      48,    48,    48,    48,    48,    48,     3,    41,    42,    44,
      46,    47,    58,    76,    77,    78,    79,    82,    86,   101,
     108,   112,   118,   120,   121,   122,   133,   148,   149,   151,
     152,   155,   156,   161,   162,   166,   171,   173,   177,   294,
       3,     3,   127,   180,     3,    26,   174,   217,   167,   233,
       3,     3,   149,   202,   265,   149,   265,     3,   207,   208,
     209,   207,   207,   214,    83,    84,   175,   216,   207,    45,
     115,   159,   207,   212,   207,   207,    26,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   203,   203,
     203,   203,   203,   207,   207,   207,   207,   207,     6,    18,
     125,   202,    13,    14,    16,    19,   207,    34,    36,   143,
     202,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,     3,   233,   231,     3,    87,   103,   168,   244,
     203,   203,     3,   274,   234,   114,   139,   241,   235,   110,
     126,   239,     3,     3,     3,     3,     3,     3,     3,   202,
     290,   290,   290,   290,   290,   290,   202,   290,   290,   290,
      44,   291,   291,   290,   290,   290,   202,   291,   290,   291,
     202,   202,    18,    54,    75,   167,   202,   127,     3,     3,
     103,   140,   201,   202,   296,   297,   207,   128,   223,   233,
     217,   251,     3,   270,     3,   266,   172,   270,   172,   216,
     204,   203,   158,    83,    84,   207,   207,   203,    89,   204,
     203,    89,   207,   204,   204,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   204,   204,   204,     6,   125,   210,
     216,   207,   207,   202,   207,    39,   202,   202,   202,   216,
     217,   232,   111,   111,   111,    20,   201,   204,   217,   239,
     239,   110,   127,   235,   110,    54,    88,   131,   165,   153,
       5,   292,   293,   292,   292,     4,   295,   292,   292,   292,
     293,   293,   292,   292,   292,   295,   293,   292,   293,     5,
       5,   125,   202,   207,   169,     3,   190,   191,   192,   193,
     254,   255,     3,   167,   202,   127,     3,    48,    54,    88,
      91,   104,   111,   131,   165,   281,   282,   288,   236,    43,
     116,   226,   217,    20,   129,   204,   262,   203,   204,   202,
     267,   262,   267,   262,   208,   207,   207,    83,   158,   207,
     207,   207,    89,   109,   213,   213,   207,   207,   207,   208,
     203,   211,   216,    39,   207,   216,   216,   216,   203,    93,
     218,   244,    92,   245,   245,   245,   207,     3,     3,   223,
     235,   207,   127,   167,   242,   243,   235,   202,   111,   111,
     202,     3,   203,   204,   164,   179,    58,    59,   203,   204,
     203,   203,   203,    54,   207,   202,   202,   202,   202,   202,
     203,   204,   167,   202,   169,   254,     3,   202,   296,     3,
     202,   111,   104,   111,   202,   202,   111,   202,   203,   204,
       3,   216,     3,   224,   225,   207,    75,   207,   111,     3,
       3,    75,   207,   269,   204,   262,   262,    83,   207,    92,
     203,   203,   204,   203,   207,   207,   203,   203,   203,   204,
     203,   203,   208,   203,   207,   203,   203,   203,    43,    98,
     222,   110,   202,   202,   202,    20,    20,   201,   226,   207,
     202,   243,   207,   202,   202,     3,   287,     5,   149,     4,
     293,     4,   293,   293,   202,   203,   254,     3,     3,     3,
       3,     3,   169,   254,   202,   203,   167,   202,   281,    54,
      88,   131,   165,   207,   202,   202,   202,     3,   228,   228,
     202,   287,   296,   282,   294,    38,    74,   220,   204,   117,
     204,   163,    20,   203,   204,   268,   207,   207,   203,    66,
      67,    71,    73,    94,    95,    97,   177,   178,   207,   203,
     207,   219,   207,   223,     3,   246,   246,   246,   207,   207,
       3,   228,   203,     3,   284,     3,   283,   203,   204,   203,
       4,   207,   203,   203,   203,   203,   204,   202,   203,   254,
     169,   254,   203,   202,   111,   111,   202,   203,   284,   228,
     228,   203,   204,   203,   283,   203,   289,   225,   207,   207,
     270,    75,   207,    75,   207,   202,   203,   203,   203,   220,
     176,   204,   221,   226,   203,   204,   203,   203,    20,   203,
      18,   203,   204,   203,   204,     3,   203,     3,   254,   203,
     202,   203,   296,   207,   202,   202,   287,   203,   203,   203,
       3,   203,    18,    37,    48,    54,    55,    75,   111,   125,
     131,   165,   269,   138,   207,   107,   227,     3,   207,   170,
     135,     3,     3,   203,   203,   254,   203,   284,   283,   203,
     135,   125,   202,     3,   202,     4,     4,     5,     6,     7,
      49,   196,   197,   198,   111,   111,   203,   220,   228,     3,
     203,   203,   203,     3,     5,    54,   131,   165,   207,   202,
     202,   202,   202,   135,   201,   202,   203,   204,   202,   111,
     203,   203,   203,   203,     3,   285,     3,     3,   285,     5,
     207,   203,   204,   201,   202,   202,   203,   203,   203,   286,
       3,     3,   285,   285,   286,    18,    61,   119,   127,   202,
     203,   203,    18,    61,   170,   100,    90,   130,   146,    69,
     163,   285,   286,   286,    62,    99,    51,   124,   137,   149,
      51,   124,   137,   149,   203,    75,   125,    75,   125,   286
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
#line 298 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 304 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 305 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 307 "parser/evoparser.y"
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
#line 325 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 333 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 341 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 347 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 354 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 355 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 356 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 357 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 358 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 359 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 360 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 361 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 362 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 363 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 364 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 365 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 366 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 367 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 368 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 369 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 370 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 372 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 377 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 378 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 379 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 380 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 383 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 384 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 385 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 386 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 387 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 390 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 391 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 394 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_inListCount < MAX_IN_LIST) g_inListExprs[g_inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 395 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_inListCount; _i>0; _i--) g_inListExprs[_i]=g_inListExprs[_i-1]; g_inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_inListCount++; } ;}
    break;

  case 43:
#line 398 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 402 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 46:
#line 402 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 47:
#line 403 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 48:
#line 403 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 49:
#line 404 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 405 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 406 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 410 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 414 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 415 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 416 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 417 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 418 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 419 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 421 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 422 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 423 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 424 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 425 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 426 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 427 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 428 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 429 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 430 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 431 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 432 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 433 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 434 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 441 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 448 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 455 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 461 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 77:
#line 462 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 78:
#line 463 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 79:
#line 466 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 80:
#line 467 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 81:
#line 470 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 82:
#line 471 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 83:
#line 472 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 84:
#line 473 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 85:
#line 474 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 86:
#line 475 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 87:
#line 476 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 88:
#line 477 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 89:
#line 478 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 90:
#line 482 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_caseWhenCount, NULL); ;}
    break;

  case 91:
#line 484 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 92:
#line 486 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, NULL); ;}
    break;

  case 93:
#line 488 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 94:
#line 492 "parser/evoparser.y"
    {
        g_caseWhenCount = 0;
        g_caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 95:
#line 500 "parser/evoparser.y"
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
#line 510 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 97:
#line 511 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 98:
#line 514 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 99:
#line 515 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 100:
#line 519 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 527 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 535 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 546 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 104:
#line 555 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_selectDistinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 105:
#line 560 "parser/evoparser.y"
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
#line 571 "parser/evoparser.y"
    { emit("WHERE"); g_whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 109:
#line 573 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 110:
#line 576 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_groupByCount = 0;
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 111:
#line 583 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 112:
#line 591 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 592 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 114:
#line 593 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 115:
#line 596 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 597 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 118:
#line 601 "parser/evoparser.y"
    { emit("HAVING"); g_havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 123:
#line 613 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 124:
#line 620 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 125:
#line 621 "parser/evoparser.y"
    { emit("LIMIT 1"); g_limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 126:
#line 622 "parser/evoparser.y"
    { emit("LIMIT 2"); g_offsetExpr = (yyvsp[(2) - (4)].exprval); g_limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 127:
#line 623 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_limitExpr = (yyvsp[(2) - (4)].exprval); g_offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 129:
#line 627 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 130:
#line 630 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 131:
#line 631 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 132:
#line 634 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 133:
#line 635 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 134:
#line 636 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 135:
#line 637 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 136:
#line 638 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 137:
#line 639 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 138:
#line 640 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 139:
#line 641 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 140:
#line 642 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 141:
#line 645 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 142:
#line 646 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 143:
#line 648 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 144:
#line 656 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 145:
#line 661 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 146:
#line 662 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 147:
#line 663 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 148:
#line 666 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 149:
#line 667 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 152:
#line 676 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 153:
#line 681 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 154:
#line 682 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 155:
#line 683 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 158:
#line 692 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 159:
#line 694 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 160:
#line 696 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 161:
#line 698 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 162:
#line 700 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 163:
#line 703 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 164:
#line 704 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 165:
#line 705 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 166:
#line 708 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 167:
#line 709 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 168:
#line 712 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 169:
#line 713 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 170:
#line 716 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 171:
#line 717 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 172:
#line 718 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 175:
#line 725 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 176:
#line 726 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 177:
#line 731 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 178:
#line 733 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 179:
#line 735 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 181:
#line 739 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 182:
#line 740 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 183:
#line 743 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 184:
#line 744 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 185:
#line 747 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 186:
#line 752 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 187:
#line 760 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 188:
#line 767 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 189:
#line 768 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 190:
#line 769 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 191:
#line 770 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 192:
#line 774 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 193:
#line 777 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 194:
#line 778 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 197:
#line 783 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 198:
#line 788 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 199:
#line 795 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_dropIfExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 200:
#line 802 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_dropIfExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 201:
#line 812 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 202:
#line 819 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 203:
#line 826 "parser/evoparser.y"
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
#line 836 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 205:
#line 844 "parser/evoparser.y"
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
#line 854 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 207:
#line 862 "parser/evoparser.y"
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
#line 871 "parser/evoparser.y"
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
#line 880 "parser/evoparser.y"
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
#line 892 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 211:
#line 897 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 212:
#line 902 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 213:
#line 908 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 214:
#line 915 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 215:
#line 922 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 216:
#line 929 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 217:
#line 939 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 218:
#line 946 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 219:
#line 955 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 220:
#line 962 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 221:
#line 971 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 222:
#line 978 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 223:
#line 987 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 224:
#line 994 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 225:
#line 1000 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 226:
#line 1010 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 227:
#line 1014 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 228:
#line 1020 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 229:
#line 1026 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 230:
#line 1033 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 231:
#line 1039 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 232:
#line 1046 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 233:
#line 1052 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 234:
#line 1058 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 235:
#line 1064 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 236:
#line 1070 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 237:
#line 1076 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 238:
#line 1084 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 239:
#line 1091 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 241:
#line 1099 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 242:
#line 1102 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 243:
#line 1103 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 244:
#line 1104 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 245:
#line 1105 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 246:
#line 1106 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 250:
#line 1113 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 251:
#line 1117 "parser/evoparser.y"
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
#line 1127 "parser/evoparser.y"
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
#line 1139 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 254:
#line 1140 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 255:
#line 1140 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 256:
#line 1143 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 257:
#line 1144 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 258:
#line 1145 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 259:
#line 1146 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 260:
#line 1150 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 261:
#line 1153 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 262:
#line 1154 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 263:
#line 1155 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 264:
#line 1156 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 265:
#line 1162 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 266:
#line 1168 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 267:
#line 1173 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 268:
#line 1178 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 269:
#line 1183 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 270:
#line 1190 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 271:
#line 1195 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 272:
#line 1196 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 273:
#line 1197 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 274:
#line 1202 "parser/evoparser.y"
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
#line 1213 "parser/evoparser.y"
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
#line 1224 "parser/evoparser.y"
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
#line 1235 "parser/evoparser.y"
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
#line 1248 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 279:
#line 1252 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 280:
#line 1253 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 281:
#line 1256 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 282:
#line 1257 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 283:
#line 1261 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 284:
#line 1266 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 285:
#line 1268 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 286:
#line 1270 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 287:
#line 1272 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 288:
#line 1274 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 289:
#line 1278 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 290:
#line 1282 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 291:
#line 1283 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 292:
#line 1288 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 293:
#line 1296 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        g_isTemporary = (yyvsp[(2) - (8)].intval);
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 294:
#line 1305 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); g_isTemporary = (yyvsp[(2) - (10)].intval); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 295:
#line 1310 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 296:
#line 1314 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 297:
#line 1319 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 298:
#line 1323 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 299:
#line 1326 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 300:
#line 1327 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 301:
#line 1330 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 302:
#line 1331 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 303:
#line 1334 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 304:
#line 1335 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 305:
#line 1336 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 306:
#line 1337 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 307:
#line 1338 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 308:
#line 1339 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 309:
#line 1340 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 310:
#line 1341 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 311:
#line 1343 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 312:
#line 1345 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 313:
#line 1347 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 314:
#line 1349 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 315:
#line 1351 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 316:
#line 1353 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 317:
#line 1356 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 318:
#line 1357 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 319:
#line 1360 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 320:
#line 1361 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 321:
#line 1364 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 322:
#line 1365 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 324:
#line 1369 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 325:
#line 1370 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 326:
#line 1371 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 327:
#line 1372 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 328:
#line 1373 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 329:
#line 1374 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 330:
#line 1375 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 331:
#line 1376 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 332:
#line 1377 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 333:
#line 1378 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 334:
#line 1379 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 335:
#line 1380 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 336:
#line 1381 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 337:
#line 1382 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 338:
#line 1383 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 339:
#line 1384 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 340:
#line 1385 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 341:
#line 1388 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1389 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 343:
#line 1392 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 344:
#line 1394 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 345:
#line 1402 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 346:
#line 1403 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 348:
#line 1405 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 349:
#line 1406 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 350:
#line 1407 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 351:
#line 1408 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 352:
#line 1409 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 353:
#line 1410 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 354:
#line 1411 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 355:
#line 1412 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 356:
#line 1413 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 357:
#line 1414 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 358:
#line 1415 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 359:
#line 1416 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 360:
#line 1417 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 361:
#line 1418 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 362:
#line 1419 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 363:
#line 1420 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 364:
#line 1421 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 365:
#line 1422 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 366:
#line 1423 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 367:
#line 1424 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 368:
#line 1427 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 369:
#line 1428 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 370:
#line 1429 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 371:
#line 1432 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 372:
#line 1433 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 373:
#line 1436 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 374:
#line 1437 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 375:
#line 1438 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 377:
#line 1442 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 378:
#line 1443 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 379:
#line 1447 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 380:
#line 1448 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 381:
#line 1449 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 382:
#line 1450 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 383:
#line 1451 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 384:
#line 1452 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 385:
#line 1453 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 386:
#line 1454 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 387:
#line 1455 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 388:
#line 1456 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 389:
#line 1457 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 390:
#line 1458 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 391:
#line 1459 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 392:
#line 1460 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 393:
#line 1461 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 394:
#line 1462 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 395:
#line 1463 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 396:
#line 1464 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 397:
#line 1465 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 398:
#line 1466 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 399:
#line 1467 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 400:
#line 1468 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 401:
#line 1469 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 402:
#line 1470 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 403:
#line 1471 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 404:
#line 1472 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 405:
#line 1473 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 406:
#line 1474 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 407:
#line 1475 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 408:
#line 1476 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 409:
#line 1477 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 410:
#line 1478 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 411:
#line 1481 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 412:
#line 1482 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 413:
#line 1486 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 414:
#line 1489 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 415:
#line 1490 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 416:
#line 1491 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 417:
#line 1495 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 418:
#line 1498 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 419:
#line 1499 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 423:
#line 1503 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 424:
#line 1504 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5363 "parser/evoparser.tab.c"
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


#line 1507 "parser/evoparser.y"

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
