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
     FSNOWFLAKE_ID = 444
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
#line 499 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 512 "parser/evoparser.tab.c"

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
#define YYLAST   2735

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  204
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  423
/* YYNRULES -- Number of states.  */
#define YYNSTATES  997

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   444

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     201,   202,    26,    24,   203,    25,   200,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   199,
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
     194,   195,   196,   197,   198
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
     312,   321,   328,   332,   336,   340,   342,   344,   346,   353,
     360,   364,   368,   372,   376,   380,   384,   388,   392,   396,
     401,   408,   412,   418,   423,   429,   433,   438,   442,   447,
     449,   451,   453,   455,   459,   471,   472,   475,   476,   481,
     484,   489,   490,   492,   494,   495,   498,   499,   502,   503,
     507,   509,   513,   516,   517,   520,   525,   530,   531,   534,
     536,   540,   541,   544,   547,   550,   553,   556,   559,   562,
     565,   567,   571,   573,   576,   579,   581,   582,   584,   588,
     590,   592,   596,   602,   606,   610,   612,   613,   619,   623,
     629,   636,   642,   643,   645,   647,   648,   650,   652,   654,
     657,   660,   661,   662,   664,   667,   672,   679,   686,   693,
     694,   697,   698,   700,   704,   708,   710,   718,   721,   724,
     727,   728,   735,   738,   743,   744,   747,   755,   757,   761,
     767,   769,   778,   789,   799,   811,   822,   835,   847,   861,
     863,   867,   869,   874,   879,   884,   891,   893,   897,   899,
     903,   905,   909,   911,   915,   921,   923,   934,   945,   963,
     976,   996,  1008,  1015,  1024,  1031,  1038,  1045,  1047,  1056,
    1057,  1062,  1063,  1066,  1069,  1072,  1075,  1077,  1078,  1079,
    1083,  1085,  1089,  1093,  1094,  1101,  1103,  1105,  1109,  1113,
    1121,  1125,  1129,  1135,  1141,  1143,  1152,  1160,  1168,  1170,
    1179,  1180,  1183,  1186,  1190,  1196,  1202,  1210,  1212,  1217,
    1222,  1223,  1226,  1228,  1234,  1242,  1250,  1260,  1272,  1274,
    1277,  1281,  1283,  1292,  1303,  1313,  1320,  1332,  1341,  1342,
    1344,  1346,  1350,  1356,  1364,  1369,  1374,  1380,  1386,  1391,
    1398,  1410,  1424,  1438,  1454,  1459,  1466,  1468,  1472,  1474,
    1478,  1480,  1484,  1485,  1490,  1496,  1501,  1507,  1512,  1518,
    1523,  1529,  1534,  1539,  1543,  1547,  1551,  1554,  1558,  1563,
    1568,  1570,  1574,  1575,  1580,  1581,  1585,  1588,  1592,  1596,
    1600,  1604,  1610,  1616,  1622,  1626,  1629,  1637,  1643,  1647,
    1650,  1654,  1657,  1661,  1667,  1672,  1678,  1686,  1687,  1691,
    1697,  1698,  1700,  1701,  1704,  1707,  1708,  1713,  1717,  1720,
    1724,  1728,  1732,  1736,  1740,  1744,  1748,  1752,  1756,  1760,
    1762,  1764,  1766,  1768,  1770,  1774,  1780,  1783,  1788,  1790,
    1792,  1794,  1796,  1800,  1804,  1808,  1812,  1818,  1824,  1826,
    1828,  1830,  1834,  1838,  1839,  1841,  1843,  1845,  1849,  1853,
    1856,  1858,  1862,  1866
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     205,     0,    -1,   214,   199,    -1,   214,   199,   205,    -1,
       3,    -1,     3,   200,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   125,    -1,   206,    24,
     206,    -1,   206,    25,   206,    -1,   206,    26,   206,    -1,
     206,    27,   206,    -1,   206,    28,   206,    -1,   206,    29,
     206,    -1,    25,   206,    -1,   201,   206,   202,    -1,   206,
      12,   206,    -1,   206,    10,   206,    -1,   206,    11,   206,
      -1,   206,    21,   206,    -1,   206,    22,   206,    -1,   206,
      30,   206,    -1,   206,    23,   206,    -1,    18,   206,    -1,
      17,   206,    -1,   206,    20,   206,    -1,   206,    20,   201,
     215,   202,    -1,   206,    20,    36,   201,   215,   202,    -1,
     206,    20,   143,   201,   215,   202,    -1,   206,    20,    34,
     201,   215,   202,    -1,   206,    15,   125,    -1,   206,    15,
      18,   125,    -1,   206,    15,     6,    -1,   206,    15,    18,
       6,    -1,     8,     9,   206,    -1,   206,    19,   206,    39,
     206,    -1,   206,    18,    19,   206,    39,   206,    -1,   206,
      -1,   206,   203,   207,    -1,    -1,   207,    -1,    -1,   206,
      16,   201,   209,   207,   202,    -1,    -1,   206,    18,    16,
     201,   210,   207,   202,    -1,   206,    16,   201,   215,   202,
      -1,   206,    18,    16,   201,   215,   202,    -1,   180,   201,
     215,   202,    -1,     3,   201,   208,   202,    -1,   185,   201,
      26,   202,    -1,   185,   201,   206,   202,    -1,   186,   201,
     206,   202,    -1,   187,   201,   206,   202,    -1,   188,   201,
     206,   202,    -1,   189,   201,   206,   202,    -1,   181,   201,
     206,   203,   206,   203,   206,   202,    -1,   181,   201,   206,
     203,   206,   202,    -1,   181,   201,   206,    89,   206,   202,
      -1,   181,   201,   206,    89,   206,    92,   206,   202,    -1,
     182,   201,   206,   202,    -1,   182,   201,   211,   206,    89,
     206,   202,    -1,   182,   201,   211,    89,   206,   202,    -1,
     190,   201,   206,   202,    -1,   191,   201,   206,   202,    -1,
     192,   201,   206,   202,    -1,   193,   201,   206,   203,   206,
     202,    -1,   194,   201,   206,   203,   206,   203,   206,   202,
      -1,   195,   201,   206,   203,   206,   202,    -1,   196,   201,
     202,    -1,   197,   201,   202,    -1,   198,   201,   202,    -1,
     115,    -1,   159,    -1,    45,    -1,   183,   201,   206,   203,
     212,   202,    -1,   184,   201,   206,   203,   212,   202,    -1,
     109,   206,    66,    -1,   109,   206,    67,    -1,   109,   206,
      71,    -1,   109,   206,    73,    -1,   109,   206,   178,    -1,
     109,   206,   177,    -1,   109,   206,    95,    -1,   109,   206,
      94,    -1,   109,   206,    97,    -1,    53,   206,   213,    83,
      -1,    53,   206,   213,    84,   206,    83,    -1,    53,   213,
      83,    -1,    53,   213,    84,   206,    83,    -1,   175,   206,
     158,   206,    -1,   213,   175,   206,   158,   206,    -1,   206,
      14,   206,    -1,   206,    18,    14,   206,    -1,   206,    13,
     206,    -1,   206,    18,    13,   206,    -1,    49,    -1,    56,
      -1,    57,    -1,   215,    -1,   150,   228,   229,    -1,   150,
     228,   229,    89,   232,   216,   217,   221,   222,   225,   226,
      -1,    -1,   174,   206,    -1,    -1,    93,    43,   218,   220,
      -1,   206,   219,    -1,   218,   203,   206,   219,    -1,    -1,
      38,    -1,    74,    -1,    -1,   176,   138,    -1,    -1,    98,
     206,    -1,    -1,   128,    43,   223,    -1,   224,    -1,   223,
     203,   224,    -1,     3,   219,    -1,    -1,   116,   206,    -1,
     116,   206,   203,   206,    -1,   116,   206,   117,   206,    -1,
      -1,   107,   227,    -1,     3,    -1,   227,   203,     3,    -1,
      -1,   228,    34,    -1,   228,    68,    -1,   228,    72,    -1,
     228,    96,    -1,   228,   147,    -1,   228,   141,    -1,   228,
     145,    -1,   228,   144,    -1,   230,    -1,   229,   203,   230,
      -1,    26,    -1,   206,   231,    -1,    40,     3,    -1,     3,
      -1,    -1,   233,    -1,   232,   203,   233,    -1,   234,    -1,
     236,    -1,     3,   231,   243,    -1,     3,   200,     3,   231,
     243,    -1,   246,   235,     3,    -1,   201,   232,   202,    -1,
      40,    -1,    -1,   233,   237,   110,   234,   241,    -1,   233,
     147,   234,    -1,   233,   147,   234,   127,   206,    -1,   233,
     239,   238,   110,   234,   242,    -1,   233,   123,   240,   110,
     234,    -1,    -1,   102,    -1,    52,    -1,    -1,   126,    -1,
     114,    -1,   139,    -1,   114,   238,    -1,   139,   238,    -1,
      -1,    -1,   242,    -1,   127,   206,    -1,   167,   201,   227,
     202,    -1,   168,   111,   244,   201,   245,   202,    -1,   103,
     111,   244,   201,   245,   202,    -1,    87,   111,   244,   201,
     245,   202,    -1,    -1,    92,   110,    -1,    -1,     3,    -1,
     245,   203,     3,    -1,   201,   215,   202,    -1,   247,    -1,
      69,   248,    89,     3,   216,   222,   225,    -1,   248,   113,
      -1,   248,   132,    -1,   248,   103,    -1,    -1,    69,   248,
     249,    89,   232,   216,    -1,     3,   250,    -1,   249,   203,
       3,   250,    -1,    -1,   200,    26,    -1,    69,   248,    89,
     249,   167,   232,   216,    -1,   251,    -1,    70,   157,     3,
      -1,    70,   157,   105,   180,     3,    -1,   252,    -1,    50,
     104,     3,   127,     3,   201,   253,   202,    -1,    50,   104,
     105,   180,     3,   127,     3,   201,   253,   202,    -1,    50,
     165,   104,     3,   127,     3,   201,   253,   202,    -1,    50,
     165,   104,   105,   180,     3,   127,     3,   201,   253,   202,
      -1,    50,   104,     3,   127,     3,   167,   169,   201,   253,
     202,    -1,    50,   104,   105,   180,     3,   127,     3,   167,
     169,   201,   253,   202,    -1,    50,   165,   104,     3,   127,
       3,   167,   169,   201,   253,   202,    -1,    50,   165,   104,
     105,   180,     3,   127,     3,   167,   169,   201,   253,   202,
      -1,     3,    -1,   253,   203,     3,    -1,   254,    -1,   190,
     201,     3,   202,    -1,   191,   201,     3,   202,    -1,   192,
     201,     3,   202,    -1,   193,   201,     3,   203,     3,   202,
      -1,   255,    -1,    70,   104,     3,    -1,   256,    -1,   160,
     157,     3,    -1,   257,    -1,   134,   157,     3,    -1,   258,
      -1,    35,   157,     3,    -1,    35,   157,     3,   200,     3,
      -1,   259,    -1,    32,   157,     3,    33,    48,     3,    54,
     201,   206,   202,    -1,    32,   157,     3,    33,    48,     3,
     165,   201,   286,   202,    -1,    32,   157,     3,    33,    48,
       3,    88,   111,   201,   283,   202,   135,     3,   201,   284,
     202,   285,    -1,    32,   157,     3,    33,    48,     3,    54,
     201,   206,   202,    18,   170,    -1,    32,   157,     3,    33,
      48,     3,    88,   111,   201,   283,   202,   135,     3,   201,
     284,   202,   285,    18,   170,    -1,    32,   157,     3,    33,
      48,     3,   131,   111,   201,   282,   202,    -1,    32,   157,
       3,    70,    48,     3,    -1,    32,   157,     3,   136,    48,
       3,   153,     3,    -1,    32,   157,     3,    80,    48,     3,
      -1,    32,   157,     3,    63,    48,     3,    -1,    32,   157,
       3,   170,    48,     3,    -1,   260,    -1,   106,   262,   263,
       3,   264,   172,   266,   261,    -1,    -1,   129,   111,   163,
     269,    -1,    -1,   262,   113,    -1,   262,    65,    -1,   262,
      96,    -1,   262,   103,    -1,   107,    -1,    -1,    -1,   201,
     265,   202,    -1,     3,    -1,   265,   203,     3,    -1,   201,
     268,   202,    -1,    -1,   266,   203,   267,   201,   268,   202,
      -1,   206,    -1,    75,    -1,   268,   203,   206,    -1,   268,
     203,    75,    -1,   106,   262,   263,     3,   149,   269,   261,
      -1,     3,    20,   206,    -1,     3,    20,    75,    -1,   269,
     203,     3,    20,   206,    -1,   269,   203,     3,    20,    75,
      -1,   270,    -1,   140,   262,   263,     3,   264,   172,   266,
     261,    -1,   140,   262,   263,     3,   149,   269,   261,    -1,
     140,   262,   263,     3,   264,   215,   261,    -1,   271,    -1,
     163,   272,   232,   149,   273,   216,   222,   225,    -1,    -1,
     262,   113,    -1,   262,   103,    -1,     3,    20,   206,    -1,
       3,   200,     3,    20,   206,    -1,   273,   203,     3,    20,
     206,    -1,   273,   203,     3,   200,     3,    20,   206,    -1,
     274,    -1,    50,    60,   275,     3,    -1,    50,   142,   275,
       3,    -1,    -1,   105,   180,    -1,   276,    -1,    50,    64,
       3,    40,   293,    -1,    50,    64,     3,    40,   293,    75,
     206,    -1,    50,    64,     3,    40,   293,    18,   125,    -1,
      50,    64,     3,    40,   293,    54,   201,   206,   202,    -1,
      50,    64,     3,    40,   293,    18,   125,    54,   201,   206,
     202,    -1,   277,    -1,   168,     3,    -1,   168,    60,     3,
      -1,   278,    -1,    50,   279,   157,   275,     3,   201,   280,
     202,    -1,    50,   279,   157,   275,     3,   200,     3,   201,
     280,   202,    -1,    50,   279,   157,   275,     3,   201,   280,
     202,   295,    -1,    50,   279,   157,   275,     3,   295,    -1,
      50,   279,   157,   275,     3,   200,     3,   201,   280,   202,
     295,    -1,    50,   279,   157,   275,     3,   200,     3,   295,
      -1,    -1,   154,    -1,   281,    -1,   280,   203,   281,    -1,
     131,   111,   201,   282,   202,    -1,    48,     3,   131,   111,
     201,   282,   202,    -1,   111,   201,   227,   202,    -1,   104,
     201,   227,   202,    -1,    91,   104,   201,   227,   202,    -1,
      91,   111,   201,   227,   202,    -1,    54,   201,   206,   202,
      -1,    48,     3,    54,   201,   206,   202,    -1,    88,   111,
     201,   283,   202,   135,     3,   201,   284,   202,   285,    -1,
      88,   111,   201,   283,   202,   135,     3,   200,     3,   201,
     284,   202,   285,    -1,    48,     3,    88,   111,   201,   283,
     202,   135,     3,   201,   284,   202,   285,    -1,    48,     3,
      88,   111,   201,   283,   202,   135,     3,   200,     3,   201,
     284,   202,   285,    -1,   165,   201,   286,   202,    -1,    48,
       3,   165,   201,   286,   202,    -1,     3,    -1,   282,   203,
       3,    -1,     3,    -1,   283,   203,     3,    -1,     3,    -1,
     284,   203,     3,    -1,    -1,   285,   127,    69,    51,    -1,
     285,   127,    69,   149,   125,    -1,   285,   127,    69,   137,
      -1,   285,   127,    69,   149,    75,    -1,   285,   127,   163,
      51,    -1,   285,   127,   163,   149,   125,    -1,   285,   127,
     163,   137,    -1,   285,   127,   163,   149,    75,    -1,   285,
     127,    69,   124,    -1,   285,   127,   163,   124,    -1,   285,
     119,    90,    -1,   285,   119,   146,    -1,   285,   119,   130,
      -1,   285,    61,    -1,   285,    18,    61,    -1,   285,    61,
     100,    62,    -1,   285,    61,   100,    99,    -1,     3,    -1,
     286,   203,     3,    -1,    -1,   287,     3,   293,   288,    -1,
      -1,   288,    18,   125,    -1,   288,   125,    -1,   288,    75,
       4,    -1,   288,    75,     5,    -1,   288,    75,     7,    -1,
     288,    75,     6,    -1,   288,    75,   196,   201,   202,    -1,
     288,    75,   197,   201,   202,    -1,   288,    75,   198,   201,
     202,    -1,   288,    75,    49,    -1,   288,    37,    -1,   288,
      37,   201,     5,   203,     5,   202,    -1,   288,    37,   201,
       5,   202,    -1,   288,   165,   111,    -1,   288,   165,    -1,
     288,   131,   111,    -1,   288,   111,    -1,   288,    55,     4,
      -1,   288,    54,   201,   206,   202,    -1,   288,    48,     3,
     165,    -1,   288,    48,     3,   131,   111,    -1,   288,    48,
       3,    54,   201,   206,   202,    -1,    -1,   201,     5,   202,
      -1,   201,     5,   203,     5,   202,    -1,    -1,    44,    -1,
      -1,   291,   164,    -1,   291,   179,    -1,    -1,   292,    58,
     149,     4,    -1,   292,    59,     4,    -1,    47,   289,    -1,
     152,   289,   291,    -1,   148,   289,   291,    -1,   122,   289,
     291,    -1,   108,   289,   291,    -1,   101,   289,   291,    -1,
      46,   289,   291,    -1,   133,   289,   291,    -1,    76,   289,
     291,    -1,    86,   289,   291,    -1,    78,   289,   291,    -1,
      79,    -1,   162,    -1,   156,    -1,    77,    -1,   177,    -1,
      58,   289,   292,    -1,   171,   201,     5,   202,   292,    -1,
      44,   289,    -1,   173,   201,     5,   202,    -1,   161,    -1,
      41,    -1,   121,    -1,   118,    -1,   151,   290,   292,    -1,
     155,   290,   292,    -1,   120,   290,   292,    -1,   112,   290,
     292,    -1,    82,   201,   294,   202,   292,    -1,   149,   201,
     294,   202,   292,    -1,    42,    -1,   166,    -1,     4,    -1,
     294,   203,     4,    -1,   296,   235,   215,    -1,    -1,   103,
      -1,   140,    -1,   297,    -1,   149,   142,     3,    -1,   149,
     142,    75,    -1,   149,   298,    -1,   299,    -1,   298,   203,
     299,    -1,     8,    20,   206,    -1,     8,     9,   206,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   290,   290,   291,   296,   303,   304,   305,   323,   331,
     339,   345,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     376,   377,   378,   379,   382,   383,   384,   385,   386,   389,
     390,   393,   394,   397,   398,   401,   401,   402,   402,   403,
     404,   405,   409,   413,   414,   415,   416,   417,   418,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   440,   447,   456,   457,   458,   461,   462,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   476,
     478,   480,   482,   486,   494,   505,   506,   509,   510,   513,
     521,   529,   540,   550,   551,   565,   566,   567,   568,   571,
     578,   586,   587,   588,   591,   592,   595,   596,   599,   600,
     603,   604,   607,   615,   616,   617,   618,   621,   622,   625,
     626,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     640,   641,   642,   650,   656,   657,   658,   661,   662,   665,
     666,   670,   676,   677,   678,   681,   682,   686,   688,   690,
     692,   694,   698,   699,   700,   703,   704,   707,   708,   711,
     712,   713,   716,   717,   720,   721,   725,   727,   729,   731,
     734,   735,   738,   739,   742,   746,   754,   762,   763,   764,
     765,   769,   772,   773,   776,   776,   778,   782,   789,   796,
     806,   813,   820,   830,   838,   848,   856,   865,   874,   886,
     891,   896,   902,   909,   916,   923,   933,   940,   949,   956,
     965,   972,   981,   988,   994,  1005,  1008,  1014,  1020,  1027,
    1033,  1040,  1046,  1052,  1058,  1064,  1070,  1078,  1085,  1093,
    1094,  1097,  1098,  1099,  1100,  1101,  1104,  1104,  1107,  1108,
    1111,  1121,  1134,  1135,  1135,  1138,  1139,  1140,  1141,  1144,
    1148,  1149,  1150,  1151,  1157,  1160,  1166,  1171,  1177,  1183,
    1190,  1191,  1192,  1196,  1207,  1218,  1229,  1243,  1247,  1248,
    1251,  1252,  1256,  1260,  1262,  1264,  1266,  1268,  1273,  1277,
    1278,  1282,  1289,  1299,  1303,  1308,  1312,  1317,  1321,  1322,
    1325,  1326,  1329,  1330,  1331,  1332,  1333,  1334,  1335,  1336,
    1337,  1339,  1341,  1343,  1345,  1347,  1351,  1352,  1355,  1356,
    1359,  1360,  1363,  1364,  1365,  1366,  1367,  1368,  1369,  1370,
    1371,  1372,  1373,  1374,  1375,  1376,  1377,  1378,  1379,  1380,
    1383,  1384,  1387,  1387,  1397,  1398,  1399,  1400,  1401,  1402,
    1403,  1404,  1405,  1406,  1407,  1408,  1409,  1410,  1411,  1412,
    1413,  1414,  1415,  1416,  1417,  1418,  1419,  1422,  1423,  1424,
    1427,  1428,  1431,  1432,  1433,  1436,  1437,  1438,  1442,  1443,
    1444,  1445,  1446,  1447,  1448,  1449,  1450,  1451,  1452,  1453,
    1454,  1455,  1456,  1457,  1458,  1459,  1460,  1461,  1462,  1463,
    1464,  1465,  1466,  1467,  1468,  1469,  1470,  1471,  1472,  1473,
    1476,  1477,  1480,  1484,  1485,  1486,  1490,  1493,  1494,  1495,
    1496,  1496,  1498,  1499
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
  "FSNOWFLAKE_ID", "';'", "'.'", "'('", "')'", "','", "$accept",
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
  "create_table_stmt", "opt_temporary", "create_col_list",
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
     436,   437,   438,   439,   440,   441,   442,   443,   444,    59,
      46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   204,   205,   205,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   207,   207,   208,   208,   209,   206,   210,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   211,   211,   211,   206,   206,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   206,
     206,   206,   206,   213,   213,   206,   206,   206,   206,   206,
     206,   206,   214,   215,   215,   216,   216,   217,   217,   218,
     218,   219,   219,   219,   220,   220,   221,   221,   222,   222,
     223,   223,   224,   225,   225,   225,   225,   226,   226,   227,
     227,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     229,   229,   229,   230,   231,   231,   231,   232,   232,   233,
     233,   234,   234,   234,   234,   235,   235,   236,   236,   236,
     236,   236,   237,   237,   237,   238,   238,   239,   239,   240,
     240,   240,   241,   241,   242,   242,   243,   243,   243,   243,
     244,   244,   245,   245,   246,   214,   247,   248,   248,   248,
     248,   247,   249,   249,   250,   250,   247,   214,   251,   251,
     214,   252,   252,   252,   252,   252,   252,   252,   252,   253,
     253,   253,   254,   254,   254,   254,   214,   255,   214,   256,
     214,   257,   214,   258,   258,   214,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   214,   260,   261,
     261,   262,   262,   262,   262,   262,   263,   263,   264,   264,
     265,   265,   266,   267,   266,   268,   268,   268,   268,   260,
     269,   269,   269,   269,   214,   270,   270,   270,   214,   271,
     272,   272,   272,   273,   273,   273,   273,   214,   274,   274,
     275,   275,   214,   276,   276,   276,   276,   276,   214,   277,
     277,   214,   278,   278,   278,   278,   278,   278,   279,   279,
     280,   280,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   282,   282,   283,   283,
     284,   284,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     286,   286,   287,   281,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   289,   289,   289,
     290,   290,   291,   291,   291,   292,   292,   292,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     294,   294,   295,   296,   296,   296,   214,   297,   297,   297,
     298,   298,   299,   299
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
       8,     6,     3,     3,     3,     1,     1,     1,     6,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     3,     5,     4,     5,     3,     4,     3,     4,     1,
       1,     1,     1,     3,    11,     0,     2,     0,     4,     2,
       4,     0,     1,     1,     0,     2,     0,     2,     0,     3,
       1,     3,     2,     0,     2,     4,     4,     0,     2,     1,
       3,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     3,     1,     2,     2,     1,     0,     1,     3,     1,
       1,     3,     5,     3,     3,     1,     0,     5,     3,     5,
       6,     5,     0,     1,     1,     0,     1,     1,     1,     2,
       2,     0,     0,     1,     2,     4,     6,     6,     6,     0,
       2,     0,     1,     3,     3,     1,     7,     2,     2,     2,
       0,     6,     2,     4,     0,     2,     7,     1,     3,     5,
       1,     8,    10,     9,    11,    10,    12,    11,    13,     1,
       3,     1,     4,     4,     4,     6,     1,     3,     1,     3,
       1,     3,     1,     3,     5,     1,    10,    10,    17,    12,
      19,    11,     6,     8,     6,     6,     6,     1,     8,     0,
       4,     0,     2,     2,     2,     2,     1,     0,     0,     3,
       1,     3,     3,     0,     6,     1,     1,     3,     3,     7,
       3,     3,     5,     5,     1,     8,     7,     7,     1,     8,
       0,     2,     2,     3,     5,     5,     7,     1,     4,     4,
       0,     2,     1,     5,     7,     7,     9,    11,     1,     2,
       3,     1,     8,    10,     9,     6,    11,     8,     0,     1,
       1,     3,     5,     7,     4,     4,     5,     5,     4,     6,
      11,    13,    13,    15,     4,     6,     1,     3,     1,     3,
       1,     3,     0,     4,     5,     4,     5,     4,     5,     4,
       5,     4,     4,     3,     3,     3,     2,     3,     4,     4,
       1,     3,     0,     4,     0,     3,     2,     3,     3,     3,
       3,     5,     5,     5,     3,     2,     7,     5,     3,     2,
       3,     2,     3,     5,     4,     5,     7,     0,     3,     5,
       0,     1,     0,     2,     2,     0,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     3,     5,     2,     4,     1,     1,
       1,     1,     3,     3,     3,     3,     5,     5,     1,     1,
       1,     3,     3,     0,     1,     1,     1,     3,     3,     2,
       1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   298,   190,     0,   241,     0,   241,     0,
     131,     0,   241,     0,     0,     0,   102,   185,   197,   200,
     216,   218,   220,   222,   225,   237,   264,   268,   277,   282,
     288,   291,   416,     0,     0,   280,     0,     0,   280,   299,
       0,     0,     0,     0,     0,   247,     0,   247,     0,     0,
     419,   420,     0,     0,     0,     0,   289,     0,     1,     2,
       0,   223,     0,     0,     0,     0,     0,     0,     0,   280,
     194,     0,   189,   187,   188,     0,   217,   198,     0,   243,
     244,   245,   246,   242,     0,   221,     0,     0,     0,   417,
     418,     0,     4,     7,     8,    10,     9,     6,     0,     0,
       0,   142,   132,    99,     0,   100,   101,   133,   134,   135,
      11,   137,   139,   138,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   146,   103,   140,   219,   245,
     242,   146,     0,     0,   147,   149,   150,   156,   290,     3,
       0,     0,     0,     0,     0,     0,     0,   281,   278,     0,
       0,     0,   279,     0,     0,     0,     0,   192,   105,     0,
       0,     0,     0,   248,   248,   423,   422,   421,     0,    43,
       0,    28,    27,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,   179,     0,     0,     0,     0,   164,   163,
     167,   171,   168,     0,     0,   165,   155,     0,     0,     0,
       0,     0,     0,     0,   224,   399,   408,   367,   367,   367,
     367,   367,   392,   367,   389,     0,   367,   367,   367,   370,
     401,   370,   400,   367,   367,   367,     0,   370,   367,   370,
     391,   398,   390,   409,     0,     0,   393,   283,     0,     0,
       0,     0,   413,   195,     0,   118,     0,   105,   194,   199,
       0,     0,     0,     0,     0,     5,    41,    44,     0,    38,
       0,     0,    91,     0,     0,     0,     0,    77,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    19,
      21,    22,    20,    97,    95,    36,     0,    34,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    23,
      24,    26,    12,    13,    14,    15,    16,    17,    25,   144,
     105,   141,   146,     0,     0,     0,   151,   184,   154,     0,
     105,   148,   165,   165,     0,   158,     0,   166,     0,   153,
       0,   235,   232,   234,     0,   236,     0,   396,   372,   378,
     375,   372,   372,     0,   372,   372,   372,   371,   375,   375,
     372,   372,   372,     0,   375,   372,   375,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   414,   415,     0,
     342,   295,   156,   106,     0,   123,   105,   191,   193,     0,
     239,   250,     0,     0,   239,     0,   239,     0,    52,     0,
      89,     0,     0,     0,    51,     0,     0,    63,     0,     0,
       0,     0,    53,    54,    55,    56,    57,    58,    66,    67,
      68,     0,     0,     0,    37,    35,     0,     0,    98,    96,
      47,     0,     0,     0,     0,     0,     0,   107,   179,   181,
     181,   181,     0,     0,     0,   118,   169,   170,     0,     0,
     172,     0,     0,     0,     0,     0,     0,     0,   384,   394,
     386,   388,   410,     0,   387,   383,   382,   405,   404,   381,
     385,   380,     0,   402,   379,   403,     0,     0,   285,     0,
     284,     0,   209,     0,     0,     0,     0,     0,   211,     0,
       0,     0,     0,   413,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   300,     0,     0,     0,     0,   186,   196,
       0,     0,     0,   259,   249,     0,     0,   239,   266,   239,
     267,    42,    93,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
       0,    39,     0,     0,     0,    30,     0,   116,   152,     0,
       0,     0,     0,   273,     0,     0,   123,   161,   159,     0,
       0,   157,   173,     0,     0,     0,     0,     0,   233,   368,
       0,   373,   374,     0,     0,   375,     0,   375,   375,   397,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
       0,     0,     0,     0,   342,   297,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   413,   342,     0,   412,   111,
     119,   120,   124,   261,   260,     0,     0,   251,   256,   255,
       0,   253,   238,   265,    90,    94,     0,    61,    60,     0,
      65,     0,     0,    78,    79,    69,     0,    71,    46,     0,
      50,    40,    33,    31,    32,     0,     0,   118,   180,     0,
       0,     0,     0,     0,     0,   269,   174,     0,   160,     0,
       0,     0,   340,     0,     0,     0,   377,   406,   411,   407,
     395,     0,   286,     0,     0,     0,     0,     0,   210,     0,
       0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,     0,     0,     0,     0,   294,
     301,   344,   112,   113,   122,     0,     0,     0,     0,     0,
     252,     0,     0,     0,     0,    64,    80,    81,    82,    83,
      87,    86,    88,    85,    84,     0,    48,   111,   114,   117,
     123,   182,     0,     0,     0,   274,   275,     0,     0,   226,
     318,     0,   316,     0,   227,     0,   369,   376,     0,   205,
     212,   213,   214,     0,     0,   202,     0,     0,     0,   413,
       0,     0,     0,     0,   308,     0,     0,     0,   305,     0,
     304,     0,   314,   343,   121,   126,   125,   240,   263,   262,
     258,   257,     0,    62,    59,    70,   109,     0,     0,   108,
     127,   178,     0,   177,   176,     0,   175,     0,     0,     0,
     231,     0,   341,   287,     0,     0,   207,     0,   204,   296,
       0,     0,     0,     0,     0,   306,   307,   130,   302,     0,
     355,     0,     0,     0,     0,   361,   346,     0,   359,     0,
     115,   111,     0,   104,   183,   276,   229,     0,   319,   317,
     215,   206,     0,   309,     0,     0,   315,     0,   345,     0,
       0,     0,   362,   347,   348,   350,   349,   354,     0,     0,
       0,   360,   358,   254,   110,   128,     0,   208,     0,   303,
       0,     0,     0,     0,   364,     0,     0,     0,     0,     0,
       0,     0,     0,   357,     0,     0,   365,   363,   351,   352,
     353,   320,     0,     0,     0,     0,     0,     0,   322,     0,
       0,     0,     0,   322,   356,   366,   228,   321,     0,     0,
       0,   310,     0,   336,     0,     0,     0,   322,   322,     0,
     337,   230,     0,   333,   335,   334,     0,     0,     0,   312,
     311,   338,   339,   323,   331,   325,     0,   327,   332,   329,
       0,   322,   326,   324,   330,   328,   313
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   306,   307,   308,   476,   588,   321,   581,   186,
      15,    16,   295,   597,   778,   754,   839,   697,   435,   660,
     661,   558,   883,   745,    52,   136,   137,   229,   143,   144,
     145,   247,   146,   244,   388,   245,   384,   611,   612,   376,
     600,   782,   147,    17,    42,    75,   167,    18,    19,   537,
     538,    20,    21,    22,    23,    24,    25,   563,    45,    84,
     302,   442,   567,   762,   670,   440,    26,    27,    55,   380,
      28,    63,    29,    30,    31,    41,   552,   553,   793,   791,
     942,   956,   713,   554,   823,   397,   408,   508,   509,   287,
     513,   431,   432,    32,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -883
static const yytype_int16 yypact[] =
{
     712,   -68,   -59,   263,  -883,   -44,  -883,    75,  -883,    20,
    -883,    89,     6,    54,    81,    61,  -883,  -883,  -883,  -883,
    -883,  -883,  -883,  -883,  -883,  -883,  -883,  -883,  -883,  -883,
    -883,  -883,  -883,   261,   265,   168,   273,    28,   168,  -883,
     225,   157,   183,   332,    99,   328,   339,   328,    71,    41,
     142,  -883,   492,   358,   247,     7,  -883,   363,  -883,   712,
      55,   147,   191,   370,   356,   271,   220,   404,   121,   168,
     212,   415,  -883,  -883,  -883,   -20,  -883,  -883,   243,  -883,
    -883,  -883,  -883,  -883,   431,  -883,   436,  1361,  1361,  -883,
    -883,   421,   210,  -883,  -883,  -883,  -883,   440,  1361,  1361,
    1361,  -883,  -883,  -883,   277,  -883,  -883,  -883,  -883,  -883,
    -883,  -883,  -883,  -883,  -883,   254,   278,   285,   287,   303,
     312,   314,   319,   330,   343,   357,   360,   362,   364,   372,
     386,   393,   402,   434,  1361,  2605,   -19,  -883,  -883,    12,
      13,    10,     4,   105,   299,  -883,  -883,   461,  -883,  -883,
     474,   582,   590,   620,   658,   660,   639,  -883,  -883,  2359,
     719,   728,  -883,   413,   562,   754,   759,  -883,  -100,   -95,
       7,   797,   802,   -91,    86,  2685,  2685,  -883,   805,  1361,
    1361,   633,   633,  -883,  1361,   586,   -41,   665,  1361,   194,
    1361,  1361,   784,  1361,  1361,  1361,  1361,  1361,  1361,  1361,
    1361,  1361,  1361,   614,   615,   617,  1663,  -883,  1361,  1361,
    1361,  1361,  1361,    27,   625,   349,  1361,   707,  1361,  1361,
    1361,  1361,  1361,  1361,  1361,  1361,  1361,  1361,   824,  -883,
       7,  1361,   825,   -47,   627,   119,   827,     7,  -883,  -883,
    -883,   202,  -883,     7,   721,   710,  -883,   835,   836,   840,
     841,   842,   844,   845,  -883,  -883,  -883,   650,   650,   650,
     650,   650,  -883,   650,  -883,   652,   650,   650,   650,   810,
    -883,   810,  -883,   650,   650,   650,   654,   810,   650,   810,
    -883,  -883,  -883,  -883,   655,   656,  -883,    36,    91,   731,
     856,   857,   -11,  -883,  1361,   735,     7,   100,   212,  -883,
     861,   862,   695,   861,   -77,  -883,  1132,  -883,   666,  2685,
    2296,   165,  -883,  1361,  1361,   667,   556,  -883,  -883,  -883,
    1684,   817,  1231,  1469,   669,  1712,  1739,  1760,  1781,  1802,
    1830,  1869,  1897,  1553,  1574,  1595,  -883,  -883,  -883,  -883,
    2705,  2109,  1487,  1848,  1848,  -883,    57,  -883,   665,  1361,
    1361,   675,  1361,  2641,   676,   677,   678,  1016,   673,   909,
     725,   526,   507,   507,   851,   851,   851,   851,  -883,  -883,
     100,  -883,    59,   771,   773,   774,  -883,  -883,  -883,     9,
     125,   299,   710,   710,   776,   780,     7,  -883,   807,  -883,
     139,  -883,  -883,  -883,   787,  -883,   936,  -883,  -883,  -883,
    -883,  -883,  -883,   946,  -883,  -883,  -883,  -883,  -883,  -883,
    -883,  -883,  -883,   946,  -883,  -883,  -883,   978,   979,   863,
     785,  1361,   818,    31,   986,    92,   864,  -883,  -883,   987,
     428,  -883,   461,  2685,   949,   877,   100,  -883,  -883,   974,
     -80,  -883,   213,   794,   -80,   794,   867,  1361,  -883,  1361,
    -883,  1361,  2527,  2365,  -883,  1361,  1361,  -883,  1361,  2475,
     907,   907,  -883,  -883,  -883,  -883,  -883,  -883,  -883,  -883,
    -883,  1361,  1361,  1361,  -883,  -883,  1361,   815,  1848,  1848,
     665,  2663,  1361,   665,   665,   665,   823,   934,   -47,   937,
     937,   937,  1361,  1023,  1025,   735,  -883,  -883,     7,  1361,
     -61,     7,   829,   920,   921,   834,  1033,   223,   153,   374,
     153,   153,  -883,   234,   153,   153,   153,   374,   374,   153,
     153,   153,   240,   374,   153,   374,   837,   838,   983,  1361,
    2685,   847,  -883,   848,   850,   852,   853,   242,  -883,   112,
     869,    31,  1049,   138,  1052,   858,   947,   -27,   859,   860,
     951,   865,   248,  -883,  1060,   665,  1064,  1361,  -883,  -883,
    1039,   957,  1067,  -883,  -883,  1068,  1114,   -76,  -883,   -76,
    -883,  -883,  2685,  2555,  -883,  1361,  1637,   900,  1924,  1361,
    1361,   872,   873,  1945,  1616,  1966,   874,  -883,  1361,   875,
    1361,   745,   876,   878,   879,  -883,  1036,   984,  -883,   973,
     883,   884,   885,  2685,  1069,    18,   877,  -883,  2685,  1361,
     886,  -883,  -883,   -61,  1361,   889,   890,  1090,  -883,  -883,
    1089,  -883,  -883,   948,  1094,  -883,  1095,  -883,  -883,  -883,
     899,  1987,    31,  1098,  1101,  1102,  1103,  -883,  1104,   939,
      31,   908,   251,   158,   428,  -883,   179,  1361,   910,   911,
     912,  1107,  1107,   914,  1090,   149,   428,  2359,  -883,   217,
     913,  -883,   933,  -883,  2685,   960,  1105,  -883,  -883,  2685,
     290,  -883,  -883,  -883,  -883,  2685,  1361,  -883,  -883,  1361,
    -883,  2015,  2275,  -883,  -883,  -883,  1361,  -883,  -883,   922,
    -883,   745,  -883,  -883,  -883,  1361,  1361,   735,  -883,  1123,
    1123,  1123,  1361,  1361,  1124,  -883,  2685,  1107,  -883,  2036,
    1125,  1126,  -883,   300,   928,  1129,  -883,   374,  -883,   374,
     374,  1361,  -883,   309,   932,   935,   938,   962,  -883,   967,
     322,    31,  -883,   966,    31,   327,   968,  1027,  1038,   971,
    2062,  1125,  1107,  1107,  -883,   340,   344,  1126,   387,  -883,
    -883,  -883,  -883,  -883,  -883,  1064,  1361,  1361,   861,  1264,
    -883,  1338,   972,  2090,  2130,  -883,  -883,  -883,  -883,  -883,
    -883,  -883,  -883,  -883,  -883,  2151,  -883,  2576,   -98,  2685,
     877,  -883,   389,   416,   418,  2685,  2685,  1154,   420,  1157,
    -883,   423,  -883,   426,  -883,  1173,  -883,  -883,  2172,  -883,
    -883,  -883,  -883,  1174,    31,  -883,   429,   977,   438,   150,
    1361,   980,   981,  1090,  -883,   444,   446,   462,  -883,  1176,
    -883,   464,  -883,   283,  -883,  2685,  2685,   982,  -883,  2685,
    -883,  2685,  1114,  -883,  -883,  -883,  -883,  1042,  1361,  -883,
    1076,  -883,  1181,  -883,  -883,  1361,  -883,  1017,  1051,  1185,
    -883,  1187,  -883,  -883,   989,   468,  -883,    31,  -883,  -883,
    2200,  1125,  1126,   489,  1057,  -883,  -883,  -883,  -883,  1070,
     992,  1191,  1014,  1212,    19,  -883,  -883,  1127,  1137,   514,
    -883,  2576,  1107,  -883,  -883,  2685,  -883,  1215,  -883,  -883,
    -883,  -883,   527,  -883,   534,   537,  -883,  1259,  -883,  1258,
      72,  1361,  -883,  -883,  -883,  -883,  -883,  -883,  1063,  1065,
    1072,  -883,  -883,  -883,  -883,  1062,  1073,  -883,  1140,  -883,
     545,   574,  1075,  1166,  -883,  2221,  1077,  1078,  1081,  1275,
    1281,  1282,  1275,  -883,  1283,  1361,  -883,  -883,  -883,  -883,
    -883,  -883,   576,   583,  1085,   592,  1088,  2247,  -883,  1284,
    1288,  1275,  1275,  -883,  -883,  -883,    69,  -883,  1091,   594,
     596,   227,    15,  1193,   -26,   -32,  1275,  -883,  -883,  1253,
    -883,  -883,   178,  -883,  -883,  -883,   -30,   187,   601,   227,
     227,  -883,  -883,  -883,  -883,  -883,   181,  -883,  -883,  -883,
     182,  -883,  -883,  -883,  -883,  -883,   227
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -883,  1257,   -52,  -425,  -883,  -883,  -883,  -883,   866,  1133,
    -883,  -128,  -258,  -883,  -883,  -694,  -883,  -883,  -491,  -883,
     564,  -586,  -883,  -646,  -883,  -883,  1092,  -138,  -115,  1087,
    -235,   893,  -883,  -883,   424,  -883,  -883,  -883,   709,   843,
     321,   113,  -883,  -883,  -883,  1255,  1030,  -883,  -883,  -539,
    -883,  -883,  -883,  -883,  -883,  -883,  -883,  -414,    67,  1285,
    1155,  -883,   888,  -883,   498,  -302,  -883,  -883,  -883,  -883,
    -883,   206,  -883,  -883,  -883,  -883,   690,   680,  -682,  -700,
    -445,  -882,  -636,  -883,  -883,   460,    93,    79,  -397,   681,
     924,  -538,  -883,  -883,  -883,  1249
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -294
static const yytype_int16 yytable[] =
{
     135,   444,   642,   233,   606,   645,   746,   141,   385,  -270,
     141,   517,   518,   207,   234,  -272,  -271,   523,   748,   525,
     705,   983,   571,   903,   904,   905,   906,   235,    48,   492,
     568,    65,   570,   345,   532,   175,   176,   976,   703,   437,
     373,   815,   312,   313,    89,   346,   181,   182,   183,   561,
     228,   586,   185,   561,   419,   297,   374,    56,   300,   315,
      43,   788,   207,   474,   973,   821,   609,  -194,   907,   170,
     230,   961,   296,    10,   294,    47,   970,   649,   837,    54,
      87,    58,   206,   836,   650,   979,   980,   962,   150,    33,
     420,    88,   427,   723,   984,   445,   816,   817,    34,   228,
     166,   730,    77,  -194,   974,   838,   610,   985,   171,   996,
     301,   421,   487,    44,    57,   370,    90,   749,   151,   986,
     975,   375,   495,   562,   163,   152,   922,   671,   309,   428,
     963,   977,   310,    66,   314,   153,   316,   320,   322,   323,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   500,   347,   672,    10,   673,   340,   341,   342,   343,
     344,   894,    49,   689,   353,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   446,   863,   559,   135,
     895,   436,   475,   171,   231,   971,    70,   914,   964,   429,
     430,   154,   806,   502,   840,   808,   965,    92,    93,    94,
      95,    96,    97,   923,    78,   142,   780,  -270,   142,   493,
     232,    98,    99,  -272,  -271,   908,   909,   910,   704,   100,
     477,   533,   534,   535,   536,   155,   164,   503,   717,   486,
     719,   720,    46,   736,   488,   303,   915,   924,   987,   317,
     981,   427,   433,   103,    67,   969,    53,   104,   450,   451,
     105,   106,   427,   427,   236,   752,   992,   994,   422,   540,
      59,   452,   453,   607,    60,   855,   613,   737,    61,   459,
     504,   859,    71,    62,   294,   165,    64,   982,   428,   639,
      92,    93,    94,    95,    96,    97,    72,   301,   963,   428,
     428,   753,   423,   541,    98,    99,    73,   478,   479,   294,
     481,   869,   100,   237,   505,   206,   993,   995,   237,   318,
     738,   988,    79,   640,    69,    74,   382,   621,   892,   110,
     870,   378,   237,    35,   989,   733,   103,    36,   494,    68,
     104,   871,   622,   105,   106,    76,   990,   872,   873,   644,
     314,   383,    85,    80,   739,    91,   964,   156,  -292,  -293,
     139,   238,   589,   319,   965,   592,   593,   594,   874,   734,
     140,   138,   349,   350,   409,   351,   148,    37,   352,   530,
     414,   157,   416,   158,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,    79,   875,   134,   159,   572,   160,   573,
     161,   239,   110,   576,   577,    38,   578,   162,   876,  -162,
     178,   179,   166,   240,   877,   564,   565,    39,   168,   583,
     584,   585,   241,   172,    80,   619,   620,   658,    40,    48,
     591,    81,   623,   624,   173,    82,   625,   626,   242,   174,
     603,    83,   627,   626,   637,   638,   243,   608,   878,   180,
     655,   656,   184,   732,   638,   187,   827,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   544,   631,   134,   188,
     510,   511,   545,   514,   515,   516,   189,   945,   190,   519,
     520,   521,   760,   761,   524,    92,    93,    94,    95,    96,
      97,   246,   794,   795,   191,   662,   959,   960,   664,    98,
      99,   799,   638,   192,   669,   193,   546,   100,   101,   547,
     194,   978,   248,   675,   805,   638,   102,   681,   682,   809,
     656,   195,   548,   223,   224,   225,   226,   227,   691,   549,
     290,   103,   818,   819,   196,   104,   820,   819,   105,   106,
     221,   222,   223,   224,   225,   226,   227,   706,   197,   550,
     107,   198,   709,   199,   108,   200,   208,   209,   210,   211,
     212,   213,   214,   201,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   202,   109,   822,
     795,   841,   842,   551,   203,   740,   208,   209,   210,   211,
     212,   213,   214,   204,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   110,   843,   842,
     844,   842,   846,   819,   763,   848,   849,   764,   850,   851,
     249,   856,   638,   111,   775,   205,   112,   113,   250,   114,
     858,   638,   254,   777,   779,   455,   864,   849,   865,   819,
     785,   786,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   866,   819,   868,   851,   251,   798,
     891,   638,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   896,   795,   134,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   825,   826,   252,   829,   253,   831,
      92,    93,    94,    95,    96,    97,   913,   761,   398,   399,
     400,   401,   288,   402,    98,    99,   404,   405,   406,   917,
     638,   289,   100,   410,   411,   412,   918,   849,   415,   919,
     851,   354,   291,   355,     1,   931,   932,     2,   220,   221,
     222,   223,   224,   225,   226,   227,   103,   292,   860,   456,
     104,   184,     3,   105,   106,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   933,   934,   948,   949,
     669,     4,     5,   950,   951,   293,   881,    92,    93,    94,
      95,    96,    97,   885,   953,   949,   967,   949,   968,   949,
     298,    98,    99,   991,   949,   299,   496,   497,   305,   100,
     324,   601,   602,   783,   784,    10,   336,   337,     6,   338,
      92,    93,    94,    95,    96,    97,   348,   369,   372,   377,
     379,   386,   110,   103,    98,    99,   387,   104,   389,   390,
     105,   106,   100,   391,   392,   393,     7,   394,   395,   925,
     356,   396,     8,   403,   407,   413,   417,   418,   424,   425,
     426,     9,    10,   434,   439,   441,   103,   443,   448,   454,
     104,   462,    11,   105,   106,    12,   480,   483,   484,   485,
      13,   227,   489,   947,   490,   491,   498,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   458,   499,   357,   110,
     208,   209,   210,   211,   212,   213,   214,   501,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     506,   507,   110,   208,   209,   210,   211,   212,   213,   214,
     512,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   526,   527,   134,   529,   531,   528,   539,
     543,   542,   556,   557,   560,   566,   561,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   580,   587,   134,    92,
      93,    94,    95,    96,    97,   595,   604,   596,   605,   599,
     614,   615,   616,    98,    99,   617,   618,   630,   641,   628,
     629,   100,    92,    93,    94,    95,    96,    97,   632,   633,
     756,   634,   643,   635,   636,   646,    98,    99,   648,   647,
     651,   652,   653,   657,   100,   103,   654,   659,   665,   104,
     666,   667,   105,   106,   683,   684,   688,   690,   692,   695,
     693,   694,   696,   698,   699,   700,   701,   707,   103,   702,
     710,   711,   104,   712,   714,   105,   106,   715,   716,   718,
     721,   724,   678,   679,   725,   726,   727,   728,   729,   731,
     744,   741,   742,   743,   663,   747,   755,    92,    93,    94,
      95,    96,    97,   758,   776,   759,   781,   787,   790,   792,
     796,    98,    99,   797,   800,   807,   757,   801,   811,   100,
     802,   110,   208,   209,   210,   211,   212,   213,   214,   812,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   103,   110,   803,    10,   104,   804,   810,
     105,   106,   813,   832,   845,   847,   852,   854,   857,   867,
     880,   861,   862,   882,   884,   562,   887,   886,   888,   668,
     889,   890,   897,   899,   900,   898,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   901,   902,   134,   916,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   911,   110,
     134,   208,   209,   210,   211,   212,   213,   214,   912,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   920,   921,   926,   819,   927,    92,    93,    94,
      95,    96,    97,   928,   929,   930,   935,   936,   941,   938,
     939,    98,    99,   940,   943,   944,   952,   957,   946,   100,
     954,   958,   966,   972,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   103,   970,   134,   149,   104,   311,   824,
     105,   106,   708,   371,   381,   555,   169,   582,   438,   304,
     879,   598,    86,   569,   735,   447,   750,   522,   751,   828,
     177,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,   100,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,   100,   103,     0,   110,
       0,   104,     0,     0,   105,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,     0,     0,   830,   104,     0,     0,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   460,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   110,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   208,
     209,   210,   211,   212,   213,   214,   110,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     211,   212,   213,   214,     0,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,     0,     0,   134,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
       0,     0,   134,   208,   209,   210,   211,   212,   213,   214,
       0,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   208,   209,   210,   211,   212,   213,
     214,     0,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   208,   209,   210,   211,
     212,   213,   214,     0,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   208,   209,   210,
     211,   212,   213,   214,     0,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,     0,     0,
       0,     0,   461,   208,   209,   210,   211,   212,   213,   214,
       0,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   208,   209,   210,   211,   212,   213,
     214,     0,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,     0,     0,     0,     0,     0,
       0,     0,   208,   209,   210,   211,   212,   213,   214,   676,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,     0,     0,     0,     0,     0,     0,   208,
     209,   210,   211,   212,   213,   214,   471,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     208,   209,   210,   211,   212,   213,   214,   472,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   208,   209,   210,   211,   212,   213,   214,   473,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   208,   209,   210,   211,   212,   213,   214,   686,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,     0,     0,     0,     0,     0,     0,   677,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,  -294,  -294,  -294,  -294,   339,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   208,
     209,   210,   211,   212,   213,   214,   457,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
       0,     0,     0,     0,     0,     0,     0,   208,   209,   210,
     211,   212,   213,   214,   463,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,     0,     0,
       0,     0,     0,     0,   208,   209,   210,   211,   212,   213,
     214,   464,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   208,   209,   210,   211,   212,
     213,   214,   465,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   208,   209,   210,   211,
     212,   213,   214,   466,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   208,   209,   210,
     211,   212,   213,   214,   467,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,     0,     0,
       0,     0,     0,     0,     0,   208,   209,   210,   211,   212,
     213,   214,   468,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   208,   209,   210,   211,
     212,   213,   214,     0,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,     0,     0,     0,
       0,   469,   208,   209,   210,   211,   212,   213,   214,     0,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,     0,     0,     0,     0,     0,     0,   470,
     208,   209,   210,   211,   212,   213,   214,     0,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   210,   211,   212,   213,   214,   680,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     208,   209,   210,   211,   212,   213,   214,   685,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   208,   209,   210,   211,   212,   213,   214,   687,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   208,   209,   210,   211,   212,   213,   214,   722,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,     0,     0,     0,     0,     0,     0,     0,
     208,   209,   210,   211,   212,   213,   214,   765,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   208,   209,   210,   211,   212,   213,   214,   789,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,     0,     0,     0,     0,     0,   208,   209,   210,
     211,   212,   213,   214,   814,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,     0,     0,
       0,     0,     0,     0,     0,   208,   209,   210,   211,   212,
     213,   214,   833,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   208,   209,   210,   211,
     212,   213,   214,     0,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,     0,     0,     0,
       0,     0,   834,     0,     0,     0,     0,     0,     0,     0,
       0,   766,   767,     0,     0,     0,   768,     0,   769,     0,
       0,     0,     0,   835,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   770,
     771,     0,   772,     0,   853,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,     0,     0,     0,     0,
     255,   256,   893,   257,     0,   258,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,     0,     0,
       0,     0,     0,   937,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   261,   262,   263,   264,     0,
       0,   265,     0,     0,     0,   266,     0,     0,     0,   955,
       0,     0,   773,   774,   449,     0,     0,     0,     0,     0,
     267,     0,     0,     0,     0,     0,     0,   268,     0,     0,
       0,   269,     0,     0,     0,     0,     0,   270,     0,   271,
     272,   273,     0,     0,     0,   208,   209,   210,   211,   212,
     213,   214,   274,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,     0,   275,   276,     0,
     277,   278,     0,     0,   279,   280,     0,     0,     0,     0,
     281,   282,     0,   575,     0,   283,     0,     0,     0,     0,
     284,     0,   285,     0,     0,     0,   286,   208,   209,   210,
     211,   212,   213,   214,     0,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,     0,     0,
       0,     0,     0,     0,   579,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   208,   209,   210,   211,
     212,   213,   214,     0,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,     0,   207,     0,
     574,     0,     0,     0,   752,   208,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,     0,     0,   674,     0,
       0,     0,     0,     0,     0,   228,     0,     0,     0,     0,
     753,   208,   209,   210,   211,   212,   213,   214,     0,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,     0,   208,   209,   210,   211,   212,   213,   214,
     482,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,     0,   208,   209,   210,   211,   212,
     213,   214,   590,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   209,   210,   211,   212,
     213,   214,     0,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227
};

static const yytype_int16 yycheck[] =
{
      52,   303,   541,   141,   495,   543,   652,     3,   243,     3,
       3,   408,   409,     3,   142,     3,     3,   414,   654,   416,
     606,    51,   447,     4,     5,     6,     7,   142,     8,    20,
     444,     3,   446,     6,     3,    87,    88,    69,    20,   297,
      87,   741,    83,    84,     3,    18,    98,    99,   100,   129,
      40,   476,   104,   129,    18,   170,   103,     3,   149,   187,
     104,   707,     3,     6,    90,   747,   127,   167,    49,    89,
      89,   953,   167,   150,   174,     8,    61,   104,   176,    12,
       9,     0,   134,   777,   111,   967,   968,    18,    33,   157,
      54,    20,   103,   632,   124,   172,   742,   743,   157,    40,
     200,   640,     3,   203,   130,   203,   167,   137,   203,   991,
     201,    75,   370,   157,    60,   230,    75,   655,    63,   149,
     146,   168,   380,   203,     3,    70,    54,   203,   180,   140,
      61,   163,   184,   105,   175,    80,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   386,   125,   567,   150,   569,   208,   209,   210,   211,
     212,   861,   142,   588,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   304,   813,   436,   231,
     862,   296,   125,   203,   203,   170,     3,   881,   119,   200,
     201,   136,   731,    54,   780,   734,   127,     3,     4,     5,
       6,     7,     8,   131,   105,   201,   697,   201,   201,   200,
     200,    17,    18,   201,   201,   196,   197,   198,   200,    25,
     348,   190,   191,   192,   193,   170,   105,    88,   625,   357,
     627,   628,   157,    54,   372,   149,   882,   165,    51,    45,
      62,   103,   294,    49,    38,    18,   157,    53,    83,    84,
      56,    57,   103,   103,   149,    38,    75,    75,   167,   167,
     199,   313,   314,   498,     3,   804,   501,    88,     3,   321,
     131,   809,    89,   105,   174,    69,     3,    99,   140,   167,
       3,     4,     5,     6,     7,     8,   103,   201,    61,   140,
     140,    74,   201,   201,    17,    18,   113,   349,   350,   174,
     352,    18,    25,   203,   165,   357,   125,   125,   203,   115,
     131,   124,    65,   201,   157,   132,   114,   164,   857,   125,
      37,   202,   203,    60,   137,   167,    49,    64,   203,   104,
      53,    48,   179,    56,    57,     3,   149,    54,    55,   201,
     175,   139,     3,    96,   165,   203,   119,   200,   199,   199,
     103,    52,   480,   159,   127,   483,   484,   485,    75,   201,
     113,     3,    13,    14,   271,    16,     3,   104,    19,   421,
     277,   180,   279,     3,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    65,   111,   201,    40,   449,   127,   451,
     180,   102,   125,   455,   456,   142,   458,     3,   125,   110,
     200,   201,   200,   114,   131,   202,   203,   154,     3,   471,
     472,   473,   123,   180,    96,   202,   203,   555,   165,     8,
     482,   103,    58,    59,     3,   107,   202,   203,   139,     3,
     492,   113,   202,   203,   202,   203,   147,   499,   165,     9,
     202,   203,   175,   202,   203,   201,   758,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,    48,   529,   201,   201,
     401,   402,    54,   404,   405,   406,   201,   932,   201,   410,
     411,   412,   202,   203,   415,     3,     4,     5,     6,     7,
       8,    40,   202,   203,   201,   557,   951,   952,   560,    17,
      18,   202,   203,   201,   566,   201,    88,    25,    26,    91,
     201,   966,    48,   575,   202,   203,    34,   579,   580,   202,
     203,   201,   104,    26,    27,    28,    29,    30,   590,   111,
     127,    49,   202,   203,   201,    53,   202,   203,    56,    57,
      24,    25,    26,    27,    28,    29,    30,   609,   201,   131,
      68,   201,   614,   201,    72,   201,    10,    11,    12,    13,
      14,    15,    16,   201,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   201,    96,   202,
     203,   202,   203,   165,   201,   647,    10,    11,    12,    13,
      14,    15,    16,   201,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   125,   202,   203,
     202,   203,   202,   203,   676,   202,   203,   679,   202,   203,
      48,   202,   203,   141,   686,   201,   144,   145,    48,   147,
     202,   203,     3,   695,   696,    89,   202,   203,   202,   203,
     702,   703,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   202,   203,   202,   203,    48,   721,
     202,   203,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   202,   203,   201,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   756,   757,    48,   759,    48,   761,
       3,     4,     5,     6,     7,     8,   202,   203,   258,   259,
     260,   261,     3,   263,    17,    18,   266,   267,   268,   202,
     203,     3,    25,   273,   274,   275,   202,   203,   278,   202,
     203,    34,   180,    36,    32,   200,   201,    35,    23,    24,
      25,    26,    27,    28,    29,    30,    49,     3,   810,   203,
      53,   175,    50,    56,    57,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   202,   203,   202,   203,
     832,    69,    70,   200,   201,    26,   838,     3,     4,     5,
       6,     7,     8,   845,   202,   203,   202,   203,   202,   203,
       3,    17,    18,   202,   203,     3,   382,   383,     3,    25,
      26,   490,   491,   700,   701,   150,   202,   202,   106,   202,
       3,     4,     5,     6,     7,     8,   201,     3,     3,   202,
       3,   110,   125,    49,    17,    18,   126,    53,     3,     3,
      56,    57,    25,     3,     3,     3,   134,     3,     3,   901,
     143,   201,   140,   201,    44,   201,   201,   201,   127,     3,
       3,   149,   150,   128,     3,     3,    49,   172,   202,   202,
      53,   202,   160,    56,    57,   163,   201,   201,   201,   201,
     168,    30,   111,   935,   111,   111,   110,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,    89,   127,   201,   125,
      10,    11,    12,    13,    14,    15,    16,   110,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     153,     5,   125,    10,    11,    12,    13,    14,    15,    16,
       4,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,     5,     5,   201,   201,   169,   125,     3,
       3,   127,    43,   116,    20,   201,   129,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   109,   202,   201,     3,
       4,     5,     6,     7,     8,   202,     3,    93,     3,    92,
     201,   111,   111,    17,    18,   201,     3,    54,   169,   202,
     202,    25,     3,     4,     5,     6,     7,     8,   201,   201,
     117,   201,     3,   201,   201,     3,    17,    18,   111,   201,
     201,   201,   111,     3,    25,    49,   201,     3,   111,    53,
       3,     3,    56,    57,   202,   202,   202,   202,   202,    43,
     202,   202,    98,   110,   201,   201,   201,   201,    49,    20,
     201,   201,    53,     3,     5,    56,    57,   149,     4,     4,
     201,     3,   202,   203,     3,     3,     3,     3,   169,   201,
       3,   201,   201,   201,    75,   201,   203,     3,     4,     5,
       6,     7,     8,   163,   202,    20,     3,     3,     3,     3,
     202,    17,    18,     4,   202,   169,   203,   202,   111,    25,
     202,   125,    10,    11,    12,    13,    14,    15,    16,   111,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    49,   125,   203,   150,    53,   201,   201,
      56,    57,   201,   201,    20,    18,     3,     3,   201,     3,
     138,   201,   201,   107,     3,   203,   135,   170,     3,    75,
       3,   202,   135,   201,     3,   125,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   201,     4,   201,     3,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   111,   125,
     201,    10,    11,    12,    13,    14,    15,    16,   111,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     3,     5,   201,   203,   201,     3,     4,     5,
       6,     7,     8,   201,   201,   135,   201,   111,     3,   202,
     202,    17,    18,   202,     3,     3,   201,     3,     5,    25,
     202,     3,   201,   100,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    49,    61,   201,    59,    53,   185,   755,
      56,    57,   613,   231,   237,   432,    71,   461,   298,   174,
     832,   488,    47,   445,   644,   203,   656,   413,   657,    75,
      91,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    49,    -1,   125,
      -1,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    75,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   125,    -1,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   125,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,    -1,    -1,   201,
      -1,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
      -1,    -1,   201,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,   203,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    92,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   203,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   203,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   203,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   203,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,   202,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    13,    14,    15,    16,   202,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   202,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   202,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   202,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   202,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   202,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   202,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   202,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,   202,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,   202,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    12,    13,    14,    15,    16,   202,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   202,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   202,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   202,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   202,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   202,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   202,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   202,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,    -1,    97,    -1,   202,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      41,    42,   202,    44,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,   202,
      -1,    -1,   177,   178,   158,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,   118,    -1,   120,
     121,   122,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   133,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,   148,   149,    -1,
     151,   152,    -1,    -1,   155,   156,    -1,    -1,    -1,    -1,
     161,   162,    -1,   158,    -1,   166,    -1,    -1,    -1,    -1,
     171,    -1,   173,    -1,    -1,    -1,   177,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,     3,    -1,
      83,    -1,    -1,    -1,    38,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      74,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
      39,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,    39,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    35,    50,    69,    70,   106,   134,   140,   149,
     150,   160,   163,   168,   205,   214,   215,   247,   251,   252,
     255,   256,   257,   258,   259,   260,   270,   271,   274,   276,
     277,   278,   297,   157,   157,    60,    64,   104,   142,   154,
     165,   279,   248,   104,   157,   262,   157,   262,     8,   142,
     298,   299,   228,   157,   262,   272,     3,    60,     0,   199,
       3,     3,   105,   275,     3,     3,   105,   275,   104,   157,
       3,    89,   103,   113,   132,   249,     3,     3,   105,    65,
      96,   103,   107,   113,   263,     3,   263,     9,    20,     3,
      75,   203,     3,     4,     5,     6,     7,     8,    17,    18,
      25,    26,    34,    49,    53,    56,    57,    68,    72,    96,
     125,   141,   144,   145,   147,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   201,   206,   229,   230,     3,   103,
     113,     3,   201,   232,   233,   234,   236,   246,     3,   205,
      33,    63,    70,    80,   136,   170,   200,   180,     3,    40,
     127,   180,     3,     3,   105,   275,   200,   250,     3,   249,
      89,   203,   180,     3,     3,   206,   206,   299,   200,   201,
       9,   206,   206,   206,   175,   206,   213,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   206,     3,    10,    11,
      12,    13,    14,    15,    16,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    40,   231,
      89,   203,   200,   231,   215,   232,   149,   203,    52,   102,
     114,   123,   139,   147,   237,   239,    40,   235,    48,    48,
      48,    48,    48,    48,     3,    41,    42,    44,    46,    47,
      58,    76,    77,    78,    79,    82,    86,   101,   108,   112,
     118,   120,   121,   122,   133,   148,   149,   151,   152,   155,
     156,   161,   162,   166,   171,   173,   177,   293,     3,     3,
     127,   180,     3,    26,   174,   216,   167,   232,     3,     3,
     149,   201,   264,   149,   264,     3,   206,   207,   208,   206,
     206,   213,    83,    84,   175,   215,   206,    45,   115,   159,
     206,   211,   206,   206,    26,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   202,   202,   202,   202,
     206,   206,   206,   206,   206,     6,    18,   125,   201,    13,
      14,    16,    19,   206,    34,    36,   143,   201,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,     3,
     232,   230,     3,    87,   103,   168,   243,   202,   202,     3,
     273,   233,   114,   139,   240,   234,   110,   126,   238,     3,
       3,     3,     3,     3,     3,     3,   201,   289,   289,   289,
     289,   289,   289,   201,   289,   289,   289,    44,   290,   290,
     289,   289,   289,   201,   290,   289,   290,   201,   201,    18,
      54,    75,   167,   201,   127,     3,     3,   103,   140,   200,
     201,   295,   296,   206,   128,   222,   232,   216,   250,     3,
     269,     3,   265,   172,   269,   172,   215,   203,   202,   158,
      83,    84,   206,   206,   202,    89,   203,   202,    89,   206,
     203,   203,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   203,   203,   203,     6,   125,   209,   215,   206,   206,
     201,   206,    39,   201,   201,   201,   215,   216,   231,   111,
     111,   111,    20,   200,   203,   216,   238,   238,   110,   127,
     234,   110,    54,    88,   131,   165,   153,     5,   291,   292,
     291,   291,     4,   294,   291,   291,   291,   292,   292,   291,
     291,   291,   294,   292,   291,   292,     5,     5,   125,   201,
     206,   169,     3,   190,   191,   192,   193,   253,   254,     3,
     167,   201,   127,     3,    48,    54,    88,    91,   104,   111,
     131,   165,   280,   281,   287,   235,    43,   116,   225,   216,
      20,   129,   203,   261,   202,   203,   201,   266,   261,   266,
     261,   207,   206,   206,    83,   158,   206,   206,   206,    89,
     109,   212,   212,   206,   206,   206,   207,   202,   210,   215,
      39,   206,   215,   215,   215,   202,    93,   217,   243,    92,
     244,   244,   244,   206,     3,     3,   222,   234,   206,   127,
     167,   241,   242,   234,   201,   111,   111,   201,     3,   202,
     203,   164,   179,    58,    59,   202,   203,   202,   202,   202,
      54,   206,   201,   201,   201,   201,   201,   202,   203,   167,
     201,   169,   253,     3,   201,   295,     3,   201,   111,   104,
     111,   201,   201,   111,   201,   202,   203,     3,   215,     3,
     223,   224,   206,    75,   206,   111,     3,     3,    75,   206,
     268,   203,   261,   261,    83,   206,    92,   202,   202,   203,
     202,   206,   206,   202,   202,   202,   203,   202,   202,   207,
     202,   206,   202,   202,   202,    43,    98,   221,   110,   201,
     201,   201,    20,    20,   200,   225,   206,   201,   242,   206,
     201,   201,     3,   286,     5,   149,     4,   292,     4,   292,
     292,   201,   202,   253,     3,     3,     3,     3,     3,   169,
     253,   201,   202,   167,   201,   280,    54,    88,   131,   165,
     206,   201,   201,   201,     3,   227,   227,   201,   286,   295,
     281,   293,    38,    74,   219,   203,   117,   203,   163,    20,
     202,   203,   267,   206,   206,   202,    66,    67,    71,    73,
      94,    95,    97,   177,   178,   206,   202,   206,   218,   206,
     222,     3,   245,   245,   245,   206,   206,     3,   227,   202,
       3,   283,     3,   282,   202,   203,   202,     4,   206,   202,
     202,   202,   202,   203,   201,   202,   253,   169,   253,   202,
     201,   111,   111,   201,   202,   283,   227,   227,   202,   203,
     202,   282,   202,   288,   224,   206,   206,   269,    75,   206,
      75,   206,   201,   202,   202,   202,   219,   176,   203,   220,
     225,   202,   203,   202,   202,    20,   202,    18,   202,   203,
     202,   203,     3,   202,     3,   253,   202,   201,   202,   295,
     206,   201,   201,   286,   202,   202,   202,     3,   202,    18,
      37,    48,    54,    55,    75,   111,   125,   131,   165,   268,
     138,   206,   107,   226,     3,   206,   170,   135,     3,     3,
     202,   202,   253,   202,   283,   282,   202,   135,   125,   201,
       3,   201,     4,     4,     5,     6,     7,    49,   196,   197,
     198,   111,   111,   202,   219,   227,     3,   202,   202,   202,
       3,     5,    54,   131,   165,   206,   201,   201,   201,   201,
     135,   200,   201,   202,   203,   201,   111,   202,   202,   202,
     202,     3,   284,     3,     3,   284,     5,   206,   202,   203,
     200,   201,   201,   202,   202,   202,   285,     3,     3,   284,
     284,   285,    18,    61,   119,   127,   201,   202,   202,    18,
      61,   170,   100,    90,   130,   146,    69,   163,   284,   285,
     285,    62,    99,    51,   124,   137,   149,    51,   124,   137,
     149,   202,    75,   125,    75,   125,   285
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
#line 297 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 303 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 304 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 306 "parser/evoparser.y"
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
#line 324 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 332 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 340 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 346 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 353 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 354 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 355 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 356 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 357 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 358 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 359 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 360 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 361 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 362 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 363 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 364 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 365 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 366 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 367 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 368 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 369 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 371 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 376 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 377 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 378 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 379 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 382 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 383 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 384 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 385 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 386 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 389 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 390 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 393 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_inListCount < MAX_IN_LIST) g_inListExprs[g_inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 394 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_inListCount; _i>0; _i--) g_inListExprs[_i]=g_inListExprs[_i-1]; g_inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_inListCount++; } ;}
    break;

  case 43:
#line 397 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 401 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 46:
#line 401 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 47:
#line 402 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 48:
#line 402 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 49:
#line 403 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 404 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 405 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 409 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 413 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 414 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 415 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 416 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 417 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 418 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 420 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 421 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 422 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 423 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 424 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 425 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 426 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 427 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 428 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 429 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 430 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 431 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 432 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 433 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 440 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 447 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 456 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 76:
#line 457 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 77:
#line 458 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 78:
#line 461 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 79:
#line 462 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 80:
#line 465 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 81:
#line 466 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 82:
#line 467 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 83:
#line 468 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 84:
#line 469 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 85:
#line 470 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 86:
#line 471 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 87:
#line 472 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 88:
#line 473 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 89:
#line 477 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_caseWhenCount, NULL); ;}
    break;

  case 90:
#line 479 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 91:
#line 481 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, NULL); ;}
    break;

  case 92:
#line 483 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 93:
#line 487 "parser/evoparser.y"
    {
        g_caseWhenCount = 0;
        g_caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 94:
#line 495 "parser/evoparser.y"
    {
        if (g_caseWhenCount < MAX_CASE_WHENS) {
            g_caseWhenExprs[g_caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_caseThenExprs[g_caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 95:
#line 505 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 96:
#line 506 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 97:
#line 509 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 98:
#line 510 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 99:
#line 514 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 100:
#line 522 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 530 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 541 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 103:
#line 550 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_selectDistinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 104:
#line 555 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (11)].intval), (yyvsp[(3) - (11)].intval), (yyvsp[(5) - (11)].intval));
        g_selectDistinct = ((yyvsp[(2) - (11)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (11)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 106:
#line 566 "parser/evoparser.y"
    { emit("WHERE"); g_whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 108:
#line 568 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 109:
#line 571 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_groupByCount = 0;
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 110:
#line 578 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 111:
#line 586 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 112:
#line 587 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 588 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 114:
#line 591 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 115:
#line 592 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 117:
#line 596 "parser/evoparser.y"
    { emit("HAVING"); g_havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 122:
#line 608 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 123:
#line 615 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 124:
#line 616 "parser/evoparser.y"
    { emit("LIMIT 1"); g_limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 125:
#line 617 "parser/evoparser.y"
    { emit("LIMIT 2"); g_offsetExpr = (yyvsp[(2) - (4)].exprval); g_limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 126:
#line 618 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_limitExpr = (yyvsp[(2) - (4)].exprval); g_offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 128:
#line 622 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 129:
#line 625 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 130:
#line 626 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 131:
#line 629 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 132:
#line 630 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 133:
#line 631 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 134:
#line 632 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 135:
#line 633 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 136:
#line 634 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 137:
#line 635 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 138:
#line 636 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 139:
#line 637 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 140:
#line 640 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 141:
#line 641 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 142:
#line 643 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 143:
#line 651 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 144:
#line 656 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 145:
#line 657 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 146:
#line 658 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 147:
#line 661 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 148:
#line 662 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 151:
#line 671 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 152:
#line 676 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 153:
#line 677 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 154:
#line 678 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 157:
#line 687 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 158:
#line 689 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 159:
#line 691 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 160:
#line 693 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 161:
#line 695 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 162:
#line 698 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 163:
#line 699 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 164:
#line 700 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 165:
#line 703 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 166:
#line 704 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 167:
#line 707 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 168:
#line 708 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 169:
#line 711 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 170:
#line 712 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 171:
#line 713 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 174:
#line 720 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 175:
#line 721 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 176:
#line 726 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 177:
#line 728 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 178:
#line 730 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 180:
#line 734 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 181:
#line 735 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 182:
#line 738 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 183:
#line 739 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 184:
#line 742 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 185:
#line 747 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 186:
#line 755 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 187:
#line 762 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 188:
#line 763 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 189:
#line 764 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 190:
#line 765 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 191:
#line 769 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 192:
#line 772 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 193:
#line 773 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 196:
#line 778 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 197:
#line 783 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 198:
#line 790 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_dropIfExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 199:
#line 797 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_dropIfExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 200:
#line 807 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 201:
#line 814 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 202:
#line 821 "parser/evoparser.y"
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

  case 203:
#line 831 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 204:
#line 839 "parser/evoparser.y"
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

  case 205:
#line 849 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 206:
#line 857 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 207:
#line 866 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 208:
#line 875 "parser/evoparser.y"
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

  case 209:
#line 887 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 210:
#line 892 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 211:
#line 897 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 212:
#line 903 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 213:
#line 910 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 214:
#line 917 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 215:
#line 924 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 216:
#line 934 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 217:
#line 941 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 218:
#line 950 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 219:
#line 957 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 220:
#line 966 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 221:
#line 973 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 222:
#line 982 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 223:
#line 989 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 224:
#line 995 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 225:
#line 1005 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 226:
#line 1009 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 227:
#line 1015 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 228:
#line 1021 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 229:
#line 1028 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 230:
#line 1034 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 231:
#line 1041 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 232:
#line 1047 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 233:
#line 1053 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 234:
#line 1059 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 235:
#line 1065 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 236:
#line 1071 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 237:
#line 1079 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 238:
#line 1086 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 240:
#line 1094 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 241:
#line 1097 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 242:
#line 1098 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 243:
#line 1099 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 244:
#line 1100 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 245:
#line 1101 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 249:
#line 1108 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 250:
#line 1112 "parser/evoparser.y"
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

  case 251:
#line 1122 "parser/evoparser.y"
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

  case 252:
#line 1134 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 253:
#line 1135 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 254:
#line 1135 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 255:
#line 1138 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 256:
#line 1139 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 257:
#line 1140 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 258:
#line 1141 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 259:
#line 1145 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 260:
#line 1148 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 261:
#line 1149 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 262:
#line 1150 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 263:
#line 1151 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 264:
#line 1157 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 265:
#line 1163 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 266:
#line 1168 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 267:
#line 1173 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 268:
#line 1178 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 269:
#line 1185 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 270:
#line 1190 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 271:
#line 1191 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 272:
#line 1192 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 273:
#line 1197 "parser/evoparser.y"
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

  case 274:
#line 1208 "parser/evoparser.y"
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

  case 275:
#line 1219 "parser/evoparser.y"
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

  case 276:
#line 1230 "parser/evoparser.y"
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

  case 277:
#line 1243 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 278:
#line 1247 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 279:
#line 1248 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 280:
#line 1251 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 281:
#line 1252 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 282:
#line 1256 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 283:
#line 1261 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 284:
#line 1263 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 285:
#line 1265 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 286:
#line 1267 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 287:
#line 1269 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 288:
#line 1273 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 289:
#line 1277 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 290:
#line 1278 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 291:
#line 1283 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 292:
#line 1291 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        g_isTemporary = (yyvsp[(2) - (8)].intval);
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 293:
#line 1300 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); g_isTemporary = (yyvsp[(2) - (10)].intval); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 294:
#line 1305 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 295:
#line 1309 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 296:
#line 1314 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 297:
#line 1318 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 298:
#line 1321 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 299:
#line 1322 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 300:
#line 1325 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 301:
#line 1326 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 302:
#line 1329 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 303:
#line 1330 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 304:
#line 1331 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 305:
#line 1332 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 306:
#line 1333 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 307:
#line 1334 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 308:
#line 1335 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 309:
#line 1336 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 310:
#line 1338 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 311:
#line 1340 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 312:
#line 1342 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 313:
#line 1344 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 314:
#line 1346 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 315:
#line 1348 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 316:
#line 1351 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 317:
#line 1352 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 318:
#line 1355 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 319:
#line 1356 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 320:
#line 1359 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 321:
#line 1360 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 323:
#line 1364 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 324:
#line 1365 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 325:
#line 1366 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 326:
#line 1367 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 327:
#line 1368 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 328:
#line 1369 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 329:
#line 1370 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 330:
#line 1371 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 331:
#line 1372 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 332:
#line 1373 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 333:
#line 1374 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 334:
#line 1375 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 335:
#line 1376 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 336:
#line 1377 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 337:
#line 1378 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 338:
#line 1379 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 339:
#line 1380 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 340:
#line 1383 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 341:
#line 1384 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 342:
#line 1387 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 343:
#line 1389 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 344:
#line 1397 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 345:
#line 1398 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 347:
#line 1400 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 348:
#line 1401 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 349:
#line 1402 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 350:
#line 1403 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 351:
#line 1404 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 352:
#line 1405 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 353:
#line 1406 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 354:
#line 1407 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 355:
#line 1408 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 356:
#line 1409 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 357:
#line 1410 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 358:
#line 1411 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 359:
#line 1412 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 360:
#line 1413 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 361:
#line 1414 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 362:
#line 1415 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 363:
#line 1416 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 364:
#line 1417 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 365:
#line 1418 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 366:
#line 1419 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 367:
#line 1422 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 368:
#line 1423 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 369:
#line 1424 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 370:
#line 1427 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 371:
#line 1428 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 372:
#line 1431 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 373:
#line 1432 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 374:
#line 1433 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 376:
#line 1437 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 377:
#line 1438 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 378:
#line 1442 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 379:
#line 1443 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 380:
#line 1444 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 381:
#line 1445 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 382:
#line 1446 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 383:
#line 1447 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 384:
#line 1448 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 385:
#line 1449 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 386:
#line 1450 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 387:
#line 1451 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 388:
#line 1452 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 389:
#line 1453 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 390:
#line 1454 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 391:
#line 1455 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 392:
#line 1456 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 393:
#line 1457 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 394:
#line 1458 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 395:
#line 1459 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 396:
#line 1460 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 397:
#line 1461 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 398:
#line 1462 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 399:
#line 1463 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 400:
#line 1464 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 401:
#line 1465 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 402:
#line 1466 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 403:
#line 1467 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 404:
#line 1468 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 405:
#line 1469 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 406:
#line 1470 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 407:
#line 1471 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 408:
#line 1472 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 409:
#line 1473 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 410:
#line 1476 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 411:
#line 1477 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 412:
#line 1481 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 413:
#line 1484 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 414:
#line 1485 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 415:
#line 1486 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 416:
#line 1490 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 417:
#line 1493 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 418:
#line 1494 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 422:
#line 1498 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 423:
#line 1499 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5354 "parser/evoparser.tab.c"
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


#line 1502 "parser/evoparser.y"

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
