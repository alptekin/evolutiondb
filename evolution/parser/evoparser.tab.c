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
     ANY = 281,
     AUTO_INCREMENT = 282,
     ASC = 283,
     AND = 284,
     AS = 285,
     BLOB = 286,
     BOOLEAN = 287,
     BY = 288,
     BINARY = 289,
     BOTH = 290,
     BIGINT = 291,
     BIT = 292,
     CONSTRAINT = 293,
     CURRENT_TIMESTAMP = 294,
     CREATE = 295,
     CASCADE = 296,
     CROSS = 297,
     CASE = 298,
     CHECK = 299,
     COMMENT = 300,
     CURRENT_DATE = 301,
     CURRENT_TIME = 302,
     CHAR = 303,
     COLLATE = 304,
     DATABASE = 305,
     DEFERRABLE = 306,
     DEFERRED = 307,
     DISABLE = 308,
     DOMAIN = 309,
     DELAYED = 310,
     DAY_HOUR = 311,
     DAY_MICROSECOND = 312,
     DISTINCT = 313,
     DELETE = 314,
     DROP = 315,
     DAY_MINUTE = 316,
     DISTINCTROW = 317,
     DAY_SECOND = 318,
     DESC = 319,
     DEFAULT = 320,
     DOUBLE = 321,
     DATETIME = 322,
     DECIMAL = 323,
     DATE = 324,
     ENABLE = 325,
     ESCAPED = 326,
     ENUM = 327,
     END = 328,
     ELSE = 329,
     EXPLAIN = 330,
     FLOAT = 331,
     FORCE = 332,
     FOREIGN = 333,
     FROM = 334,
     FULL = 335,
     FULLTEXT = 336,
     FOR = 337,
     GROUP = 338,
     HOUR_MINUTE = 339,
     HOUR_MICROSECOND = 340,
     HIGH_PRIORITY = 341,
     HOUR_SECOND = 342,
     HAVING = 343,
     IMMEDIATE = 344,
     INITIALLY = 345,
     INTEGER = 346,
     INNER = 347,
     IGNORE = 348,
     INDEX = 349,
     IF = 350,
     INSERT = 351,
     INTO = 352,
     INT = 353,
     INTERVAL = 354,
     JOIN = 355,
     KEY = 356,
     LONGTEXT = 357,
     LOW_PRIORITY = 358,
     LEFT = 359,
     LEADING = 360,
     LIMIT = 361,
     OFFSET = 362,
     LONGBLOB = 363,
     MATCH = 364,
     MEDIUMTEXT = 365,
     MEDIUMBLOB = 366,
     MEDIUMINT = 367,
     NATURAL = 368,
     NO_ACTION = 369,
     NULLX = 370,
     OUTER = 371,
     ON = 372,
     ORDER = 373,
     ONDUPLICATE = 374,
     PARTIAL = 375,
     PRIMARY = 376,
     QUICK = 377,
     REAL = 378,
     RECLAIM = 379,
     REFERENCES = 380,
     RENAME = 381,
     RESTRICT = 382,
     ROLLUP = 383,
     RIGHT = 384,
     REPLACE = 385,
     SQL_SMALL_RESULT = 386,
     SCHEMA = 387,
     SOME = 388,
     SQL_CALC_FOUND_ROWS = 389,
     SQL_BIG_RESULT = 390,
     SIMPLE = 391,
     STRAIGHT_JOIN = 392,
     SMALLINT = 393,
     SET = 394,
     SELECT = 395,
     TINYTEXT = 396,
     TINYINT = 397,
     TO = 398,
     TEMPORARY = 399,
     TEXT = 400,
     TIMESTAMP = 401,
     TABLE = 402,
     THEN = 403,
     TRAILING = 404,
     TRUNCATE = 405,
     TINYBLOB = 406,
     TIME = 407,
     UPDATE = 408,
     UNSIGNED = 409,
     UNIQUE = 410,
     UUID = 411,
     USING = 412,
     USE = 413,
     VALIDATE = 414,
     VARCHAR = 415,
     VALUES = 416,
     VARBINARY = 417,
     WHERE = 418,
     WHEN = 419,
     WITH = 420,
     YEAR = 421,
     YEAR_MONTH = 422,
     ZEROFILL = 423,
     EXISTS = 424,
     FSUBSTRING = 425,
     FTRIM = 426,
     FDATE_ADD = 427,
     FDATE_SUB = 428,
     FCOUNT = 429,
     FSUM = 430,
     FAVG = 431,
     FMIN = 432,
     FMAX = 433,
     FUPPER = 434,
     FLOWER = 435,
     FLENGTH = 436,
     FCONCAT = 437,
     FREPLACE = 438,
     FCOALESCE = 439,
     FGEN_RANDOM_UUID = 440,
     FGEN_RANDOM_UUID_V7 = 441,
     FSNOWFLAKE_ID = 442
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
#define ANY 281
#define AUTO_INCREMENT 282
#define ASC 283
#define AND 284
#define AS 285
#define BLOB 286
#define BOOLEAN 287
#define BY 288
#define BINARY 289
#define BOTH 290
#define BIGINT 291
#define BIT 292
#define CONSTRAINT 293
#define CURRENT_TIMESTAMP 294
#define CREATE 295
#define CASCADE 296
#define CROSS 297
#define CASE 298
#define CHECK 299
#define COMMENT 300
#define CURRENT_DATE 301
#define CURRENT_TIME 302
#define CHAR 303
#define COLLATE 304
#define DATABASE 305
#define DEFERRABLE 306
#define DEFERRED 307
#define DISABLE 308
#define DOMAIN 309
#define DELAYED 310
#define DAY_HOUR 311
#define DAY_MICROSECOND 312
#define DISTINCT 313
#define DELETE 314
#define DROP 315
#define DAY_MINUTE 316
#define DISTINCTROW 317
#define DAY_SECOND 318
#define DESC 319
#define DEFAULT 320
#define DOUBLE 321
#define DATETIME 322
#define DECIMAL 323
#define DATE 324
#define ENABLE 325
#define ESCAPED 326
#define ENUM 327
#define END 328
#define ELSE 329
#define EXPLAIN 330
#define FLOAT 331
#define FORCE 332
#define FOREIGN 333
#define FROM 334
#define FULL 335
#define FULLTEXT 336
#define FOR 337
#define GROUP 338
#define HOUR_MINUTE 339
#define HOUR_MICROSECOND 340
#define HIGH_PRIORITY 341
#define HOUR_SECOND 342
#define HAVING 343
#define IMMEDIATE 344
#define INITIALLY 345
#define INTEGER 346
#define INNER 347
#define IGNORE 348
#define INDEX 349
#define IF 350
#define INSERT 351
#define INTO 352
#define INT 353
#define INTERVAL 354
#define JOIN 355
#define KEY 356
#define LONGTEXT 357
#define LOW_PRIORITY 358
#define LEFT 359
#define LEADING 360
#define LIMIT 361
#define OFFSET 362
#define LONGBLOB 363
#define MATCH 364
#define MEDIUMTEXT 365
#define MEDIUMBLOB 366
#define MEDIUMINT 367
#define NATURAL 368
#define NO_ACTION 369
#define NULLX 370
#define OUTER 371
#define ON 372
#define ORDER 373
#define ONDUPLICATE 374
#define PARTIAL 375
#define PRIMARY 376
#define QUICK 377
#define REAL 378
#define RECLAIM 379
#define REFERENCES 380
#define RENAME 381
#define RESTRICT 382
#define ROLLUP 383
#define RIGHT 384
#define REPLACE 385
#define SQL_SMALL_RESULT 386
#define SCHEMA 387
#define SOME 388
#define SQL_CALC_FOUND_ROWS 389
#define SQL_BIG_RESULT 390
#define SIMPLE 391
#define STRAIGHT_JOIN 392
#define SMALLINT 393
#define SET 394
#define SELECT 395
#define TINYTEXT 396
#define TINYINT 397
#define TO 398
#define TEMPORARY 399
#define TEXT 400
#define TIMESTAMP 401
#define TABLE 402
#define THEN 403
#define TRAILING 404
#define TRUNCATE 405
#define TINYBLOB 406
#define TIME 407
#define UPDATE 408
#define UNSIGNED 409
#define UNIQUE 410
#define UUID 411
#define USING 412
#define USE 413
#define VALIDATE 414
#define VARCHAR 415
#define VALUES 416
#define VARBINARY 417
#define WHERE 418
#define WHEN 419
#define WITH 420
#define YEAR 421
#define YEAR_MONTH 422
#define ZEROFILL 423
#define EXISTS 424
#define FSUBSTRING 425
#define FTRIM 426
#define FDATE_ADD 427
#define FDATE_SUB 428
#define FCOUNT 429
#define FSUM 430
#define FAVG 431
#define FMIN 432
#define FMAX 433
#define FUPPER 434
#define FLOWER 435
#define FLENGTH 436
#define FCONCAT 437
#define FREPLACE 438
#define FCOALESCE 439
#define FGEN_RANDOM_UUID 440
#define FGEN_RANDOM_UUID_V7 441
#define FSNOWFLAKE_ID 442




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
#line 495 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 508 "parser/evoparser.tab.c"

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
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2691

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  202
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  416
/* YYNRULES -- Number of states.  */
#define YYNSTATES  971

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   442

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     199,   200,    26,    24,   201,    25,   198,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   197,
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
     194,   195,   196
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
     767,   769,   778,   789,   799,   811,   813,   817,   819,   824,
     829,   834,   841,   843,   847,   849,   853,   855,   859,   861,
     872,   883,   901,   914,   934,   946,   953,   962,   969,   976,
     983,   985,   994,   995,  1000,  1001,  1004,  1007,  1010,  1013,
    1015,  1016,  1017,  1021,  1023,  1027,  1031,  1032,  1039,  1041,
    1043,  1047,  1051,  1059,  1063,  1067,  1073,  1079,  1081,  1090,
    1098,  1106,  1108,  1117,  1118,  1121,  1124,  1128,  1134,  1140,
    1148,  1150,  1155,  1160,  1161,  1164,  1166,  1172,  1180,  1188,
    1198,  1210,  1212,  1215,  1219,  1221,  1230,  1241,  1251,  1258,
    1270,  1279,  1280,  1282,  1284,  1288,  1294,  1302,  1307,  1312,
    1318,  1324,  1329,  1336,  1348,  1362,  1376,  1392,  1397,  1404,
    1406,  1410,  1412,  1416,  1418,  1422,  1423,  1428,  1434,  1439,
    1445,  1450,  1456,  1461,  1467,  1472,  1477,  1481,  1485,  1489,
    1492,  1496,  1501,  1506,  1508,  1512,  1513,  1518,  1519,  1523,
    1526,  1530,  1534,  1538,  1542,  1548,  1554,  1560,  1564,  1567,
    1575,  1581,  1585,  1588,  1592,  1595,  1599,  1605,  1610,  1616,
    1624,  1625,  1629,  1635,  1636,  1638,  1639,  1642,  1645,  1646,
    1651,  1655,  1658,  1662,  1666,  1670,  1674,  1678,  1682,  1686,
    1690,  1694,  1698,  1700,  1702,  1704,  1706,  1708,  1712,  1718,
    1721,  1726,  1728,  1730,  1732,  1734,  1738,  1742,  1746,  1750,
    1756,  1762,  1764,  1766,  1768,  1772,  1776,  1777,  1779,  1781,
    1783,  1787,  1791,  1794,  1796,  1800,  1804
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     203,     0,    -1,   212,   197,    -1,   212,   197,   203,    -1,
       3,    -1,     3,   198,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   124,    -1,   204,    24,
     204,    -1,   204,    25,   204,    -1,   204,    26,   204,    -1,
     204,    27,   204,    -1,   204,    28,   204,    -1,   204,    29,
     204,    -1,    25,   204,    -1,   199,   204,   200,    -1,   204,
      12,   204,    -1,   204,    10,   204,    -1,   204,    11,   204,
      -1,   204,    21,   204,    -1,   204,    22,   204,    -1,   204,
      30,   204,    -1,   204,    23,   204,    -1,    18,   204,    -1,
      17,   204,    -1,   204,    20,   204,    -1,   204,    20,   199,
     213,   200,    -1,   204,    20,    35,   199,   213,   200,    -1,
     204,    20,   142,   199,   213,   200,    -1,   204,    20,    34,
     199,   213,   200,    -1,   204,    15,   124,    -1,   204,    15,
      18,   124,    -1,   204,    15,     6,    -1,   204,    15,    18,
       6,    -1,     8,     9,   204,    -1,   204,    19,   204,    38,
     204,    -1,   204,    18,    19,   204,    38,   204,    -1,   204,
      -1,   204,   201,   205,    -1,    -1,   205,    -1,    -1,   204,
      16,   199,   207,   205,   200,    -1,    -1,   204,    18,    16,
     199,   208,   205,   200,    -1,   204,    16,   199,   213,   200,
      -1,   204,    18,    16,   199,   213,   200,    -1,   178,   199,
     213,   200,    -1,     3,   199,   206,   200,    -1,   183,   199,
      26,   200,    -1,   183,   199,   204,   200,    -1,   184,   199,
     204,   200,    -1,   185,   199,   204,   200,    -1,   186,   199,
     204,   200,    -1,   187,   199,   204,   200,    -1,   179,   199,
     204,   201,   204,   201,   204,   200,    -1,   179,   199,   204,
     201,   204,   200,    -1,   179,   199,   204,    88,   204,   200,
      -1,   179,   199,   204,    88,   204,    91,   204,   200,    -1,
     180,   199,   204,   200,    -1,   180,   199,   209,   204,    88,
     204,   200,    -1,   180,   199,   209,    88,   204,   200,    -1,
     188,   199,   204,   200,    -1,   189,   199,   204,   200,    -1,
     190,   199,   204,   200,    -1,   191,   199,   204,   201,   204,
     200,    -1,   192,   199,   204,   201,   204,   201,   204,   200,
      -1,   193,   199,   204,   201,   204,   200,    -1,   194,   199,
     200,    -1,   195,   199,   200,    -1,   196,   199,   200,    -1,
     114,    -1,   158,    -1,    44,    -1,   181,   199,   204,   201,
     210,   200,    -1,   182,   199,   204,   201,   210,   200,    -1,
     108,   204,    65,    -1,   108,   204,    66,    -1,   108,   204,
      70,    -1,   108,   204,    72,    -1,   108,   204,   176,    -1,
     108,   204,   175,    -1,   108,   204,    94,    -1,   108,   204,
      93,    -1,   108,   204,    96,    -1,    52,   204,   211,    82,
      -1,    52,   204,   211,    83,   204,    82,    -1,    52,   211,
      82,    -1,    52,   211,    83,   204,    82,    -1,   173,   204,
     157,   204,    -1,   211,   173,   204,   157,   204,    -1,   204,
      14,   204,    -1,   204,    18,    14,   204,    -1,   204,    13,
     204,    -1,   204,    18,    13,   204,    -1,    48,    -1,    55,
      -1,    56,    -1,   213,    -1,   149,   226,   227,    -1,   149,
     226,   227,    88,   230,   214,   215,   219,   220,   223,   224,
      -1,    -1,   172,   204,    -1,    -1,    92,    42,   216,   218,
      -1,   204,   217,    -1,   216,   201,   204,   217,    -1,    -1,
      37,    -1,    73,    -1,    -1,   174,   137,    -1,    -1,    97,
     204,    -1,    -1,   127,    42,   221,    -1,   222,    -1,   221,
     201,   222,    -1,     3,   217,    -1,    -1,   115,   204,    -1,
     115,   204,   201,   204,    -1,   115,   204,   116,   204,    -1,
      -1,   106,   225,    -1,     3,    -1,   225,   201,     3,    -1,
      -1,   226,    34,    -1,   226,    67,    -1,   226,    71,    -1,
     226,    95,    -1,   226,   146,    -1,   226,   140,    -1,   226,
     144,    -1,   226,   143,    -1,   228,    -1,   227,   201,   228,
      -1,    26,    -1,   204,   229,    -1,    39,     3,    -1,     3,
      -1,    -1,   231,    -1,   230,   201,   231,    -1,   232,    -1,
     234,    -1,     3,   229,   241,    -1,     3,   198,     3,   229,
     241,    -1,   244,   233,     3,    -1,   199,   230,   200,    -1,
      39,    -1,    -1,   231,   235,   109,   232,   239,    -1,   231,
     146,   232,    -1,   231,   146,   232,   126,   204,    -1,   231,
     237,   236,   109,   232,   240,    -1,   231,   122,   238,   109,
     232,    -1,    -1,   101,    -1,    51,    -1,    -1,   125,    -1,
     113,    -1,   138,    -1,   113,   236,    -1,   138,   236,    -1,
      -1,    -1,   240,    -1,   126,   204,    -1,   166,   199,   225,
     200,    -1,   167,   110,   242,   199,   243,   200,    -1,   102,
     110,   242,   199,   243,   200,    -1,    86,   110,   242,   199,
     243,   200,    -1,    -1,    91,   109,    -1,    -1,     3,    -1,
     243,   201,     3,    -1,   199,   213,   200,    -1,   245,    -1,
      68,   246,    88,     3,   214,   220,   223,    -1,   246,   112,
      -1,   246,   131,    -1,   246,   102,    -1,    -1,    68,   246,
     247,    88,   230,   214,    -1,     3,   248,    -1,   247,   201,
       3,   248,    -1,    -1,   198,    26,    -1,    68,   246,    88,
     247,   166,   230,   214,    -1,   249,    -1,    69,   156,     3,
      -1,    69,   156,   104,   178,     3,    -1,   250,    -1,    49,
     103,     3,   126,     3,   199,   251,   200,    -1,    49,   103,
     104,   178,     3,   126,     3,   199,   251,   200,    -1,    49,
     164,   103,     3,   126,     3,   199,   251,   200,    -1,    49,
     164,   103,   104,   178,     3,   126,     3,   199,   251,   200,
      -1,     3,    -1,   251,   201,     3,    -1,   252,    -1,   188,
     199,     3,   200,    -1,   189,   199,     3,   200,    -1,   190,
     199,     3,   200,    -1,   191,   199,     3,   201,     3,   200,
      -1,   253,    -1,    69,   103,     3,    -1,   254,    -1,   159,
     156,     3,    -1,   255,    -1,   133,   156,     3,    -1,   256,
      -1,    32,   156,     3,    33,    47,     3,    53,   199,   204,
     200,    -1,    32,   156,     3,    33,    47,     3,   164,   199,
     283,   200,    -1,    32,   156,     3,    33,    47,     3,    87,
     110,   199,   280,   200,   134,     3,   199,   281,   200,   282,
      -1,    32,   156,     3,    33,    47,     3,    53,   199,   204,
     200,    18,   168,    -1,    32,   156,     3,    33,    47,     3,
      87,   110,   199,   280,   200,   134,     3,   199,   281,   200,
     282,    18,   168,    -1,    32,   156,     3,    33,    47,     3,
     130,   110,   199,   279,   200,    -1,    32,   156,     3,    69,
      47,     3,    -1,    32,   156,     3,   135,    47,     3,   152,
       3,    -1,    32,   156,     3,    79,    47,     3,    -1,    32,
     156,     3,    62,    47,     3,    -1,    32,   156,     3,   168,
      47,     3,    -1,   257,    -1,   105,   259,   260,     3,   261,
     170,   263,   258,    -1,    -1,   128,   110,   162,   266,    -1,
      -1,   259,   112,    -1,   259,    64,    -1,   259,    95,    -1,
     259,   102,    -1,   106,    -1,    -1,    -1,   199,   262,   200,
      -1,     3,    -1,   262,   201,     3,    -1,   199,   265,   200,
      -1,    -1,   263,   201,   264,   199,   265,   200,    -1,   204,
      -1,    74,    -1,   265,   201,   204,    -1,   265,   201,    74,
      -1,   105,   259,   260,     3,   148,   266,   258,    -1,     3,
      20,   204,    -1,     3,    20,    74,    -1,   266,   201,     3,
      20,   204,    -1,   266,   201,     3,    20,    74,    -1,   267,
      -1,   139,   259,   260,     3,   261,   170,   263,   258,    -1,
     139,   259,   260,     3,   148,   266,   258,    -1,   139,   259,
     260,     3,   261,   213,   258,    -1,   268,    -1,   162,   269,
     230,   148,   270,   214,   220,   223,    -1,    -1,   259,   112,
      -1,   259,   102,    -1,     3,    20,   204,    -1,     3,   198,
       3,    20,   204,    -1,   270,   201,     3,    20,   204,    -1,
     270,   201,     3,   198,     3,    20,   204,    -1,   271,    -1,
      49,    59,   272,     3,    -1,    49,   141,   272,     3,    -1,
      -1,   104,   178,    -1,   273,    -1,    49,    63,     3,    39,
     290,    -1,    49,    63,     3,    39,   290,    74,   204,    -1,
      49,    63,     3,    39,   290,    18,   124,    -1,    49,    63,
       3,    39,   290,    53,   199,   204,   200,    -1,    49,    63,
       3,    39,   290,    18,   124,    53,   199,   204,   200,    -1,
     274,    -1,   167,     3,    -1,   167,    59,     3,    -1,   275,
      -1,    49,   276,   156,   272,     3,   199,   277,   200,    -1,
      49,   276,   156,   272,     3,   198,     3,   199,   277,   200,
      -1,    49,   276,   156,   272,     3,   199,   277,   200,   292,
      -1,    49,   276,   156,   272,     3,   292,    -1,    49,   276,
     156,   272,     3,   198,     3,   199,   277,   200,   292,    -1,
      49,   276,   156,   272,     3,   198,     3,   292,    -1,    -1,
     153,    -1,   278,    -1,   277,   201,   278,    -1,   130,   110,
     199,   279,   200,    -1,    47,     3,   130,   110,   199,   279,
     200,    -1,   110,   199,   225,   200,    -1,   103,   199,   225,
     200,    -1,    90,   103,   199,   225,   200,    -1,    90,   110,
     199,   225,   200,    -1,    53,   199,   204,   200,    -1,    47,
       3,    53,   199,   204,   200,    -1,    87,   110,   199,   280,
     200,   134,     3,   199,   281,   200,   282,    -1,    87,   110,
     199,   280,   200,   134,     3,   198,     3,   199,   281,   200,
     282,    -1,    47,     3,    87,   110,   199,   280,   200,   134,
       3,   199,   281,   200,   282,    -1,    47,     3,    87,   110,
     199,   280,   200,   134,     3,   198,     3,   199,   281,   200,
     282,    -1,   164,   199,   283,   200,    -1,    47,     3,   164,
     199,   283,   200,    -1,     3,    -1,   279,   201,     3,    -1,
       3,    -1,   280,   201,     3,    -1,     3,    -1,   281,   201,
       3,    -1,    -1,   282,   126,    68,    50,    -1,   282,   126,
      68,   148,   124,    -1,   282,   126,    68,   136,    -1,   282,
     126,    68,   148,    74,    -1,   282,   126,   162,    50,    -1,
     282,   126,   162,   148,   124,    -1,   282,   126,   162,   136,
      -1,   282,   126,   162,   148,    74,    -1,   282,   126,    68,
     123,    -1,   282,   126,   162,   123,    -1,   282,   118,    89,
      -1,   282,   118,   145,    -1,   282,   118,   129,    -1,   282,
      60,    -1,   282,    18,    60,    -1,   282,    60,    99,    61,
      -1,   282,    60,    99,    98,    -1,     3,    -1,   283,   201,
       3,    -1,    -1,   284,     3,   290,   285,    -1,    -1,   285,
      18,   124,    -1,   285,   124,    -1,   285,    74,     4,    -1,
     285,    74,     5,    -1,   285,    74,     7,    -1,   285,    74,
       6,    -1,   285,    74,   194,   199,   200,    -1,   285,    74,
     195,   199,   200,    -1,   285,    74,   196,   199,   200,    -1,
     285,    74,    48,    -1,   285,    36,    -1,   285,    36,   199,
       5,   201,     5,   200,    -1,   285,    36,   199,     5,   200,
      -1,   285,   164,   110,    -1,   285,   164,    -1,   285,   130,
     110,    -1,   285,   110,    -1,   285,    54,     4,    -1,   285,
      53,   199,   204,   200,    -1,   285,    47,     3,   164,    -1,
     285,    47,     3,   130,   110,    -1,   285,    47,     3,    53,
     199,   204,   200,    -1,    -1,   199,     5,   200,    -1,   199,
       5,   201,     5,   200,    -1,    -1,    43,    -1,    -1,   288,
     163,    -1,   288,   177,    -1,    -1,   289,    57,   148,     4,
      -1,   289,    58,     4,    -1,    46,   286,    -1,   151,   286,
     288,    -1,   147,   286,   288,    -1,   121,   286,   288,    -1,
     107,   286,   288,    -1,   100,   286,   288,    -1,    45,   286,
     288,    -1,   132,   286,   288,    -1,    75,   286,   288,    -1,
      85,   286,   288,    -1,    77,   286,   288,    -1,    78,    -1,
     161,    -1,   155,    -1,    76,    -1,   175,    -1,    57,   286,
     289,    -1,   169,   199,     5,   200,   289,    -1,    43,   286,
      -1,   171,   199,     5,   200,    -1,   160,    -1,    40,    -1,
     120,    -1,   117,    -1,   150,   287,   289,    -1,   154,   287,
     289,    -1,   119,   287,   289,    -1,   111,   287,   289,    -1,
      81,   199,   291,   200,   289,    -1,   148,   199,   291,   200,
     289,    -1,    41,    -1,   165,    -1,     4,    -1,   291,   201,
       4,    -1,   293,   233,   213,    -1,    -1,   102,    -1,   139,
      -1,   294,    -1,   148,   141,     3,    -1,   148,   141,    74,
      -1,   148,   295,    -1,   296,    -1,   295,   201,   296,    -1,
       8,    20,   204,    -1,     8,     9,   204,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   288,   288,   289,   294,   301,   302,   303,   321,   329,
     337,   343,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     374,   375,   376,   377,   380,   381,   382,   383,   384,   387,
     388,   391,   392,   395,   396,   399,   399,   400,   400,   401,
     402,   403,   407,   411,   412,   413,   414,   415,   416,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   438,   445,   454,   455,   456,   459,   460,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   474,
     476,   478,   480,   484,   492,   503,   504,   507,   508,   511,
     519,   527,   538,   548,   549,   563,   564,   565,   566,   569,
     576,   584,   585,   586,   589,   590,   593,   594,   597,   598,
     601,   602,   605,   613,   614,   615,   616,   619,   620,   623,
     624,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     638,   639,   640,   648,   654,   655,   656,   659,   660,   663,
     664,   668,   674,   675,   676,   679,   680,   684,   686,   688,
     690,   692,   696,   697,   698,   701,   702,   705,   706,   709,
     710,   711,   714,   715,   718,   719,   723,   725,   727,   729,
     732,   733,   736,   737,   740,   744,   752,   760,   761,   762,
     763,   767,   770,   771,   774,   774,   776,   780,   787,   794,
     804,   811,   818,   828,   836,   848,   853,   858,   864,   871,
     878,   885,   895,   902,   911,   918,   927,   934,   943,   946,
     952,   958,   965,   971,   978,   984,   990,   996,  1002,  1008,
    1016,  1023,  1031,  1032,  1035,  1036,  1037,  1038,  1039,  1042,
    1042,  1045,  1046,  1049,  1059,  1072,  1073,  1073,  1076,  1077,
    1078,  1079,  1082,  1086,  1087,  1088,  1089,  1095,  1098,  1104,
    1109,  1115,  1121,  1128,  1129,  1130,  1134,  1145,  1156,  1167,
    1181,  1185,  1186,  1189,  1190,  1194,  1198,  1200,  1202,  1204,
    1206,  1211,  1215,  1216,  1220,  1227,  1237,  1241,  1246,  1250,
    1255,  1259,  1260,  1263,  1264,  1267,  1268,  1269,  1270,  1271,
    1272,  1273,  1274,  1275,  1277,  1279,  1281,  1283,  1285,  1289,
    1290,  1293,  1294,  1297,  1298,  1301,  1302,  1303,  1304,  1305,
    1306,  1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,  1315,
    1316,  1317,  1318,  1321,  1322,  1325,  1325,  1335,  1336,  1337,
    1338,  1339,  1340,  1341,  1342,  1343,  1344,  1345,  1346,  1347,
    1348,  1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,
    1360,  1361,  1362,  1365,  1366,  1369,  1370,  1371,  1374,  1375,
    1376,  1380,  1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,
    1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,
    1399,  1400,  1401,  1402,  1403,  1404,  1405,  1406,  1407,  1408,
    1409,  1410,  1411,  1414,  1415,  1418,  1422,  1423,  1424,  1428,
    1431,  1432,  1433,  1434,  1434,  1436,  1437
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
  "ADD", "ALL", "ANY", "AUTO_INCREMENT", "ASC", "AND", "AS", "BLOB",
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
  "USING", "USE", "VALIDATE", "VARCHAR", "VALUES", "VARBINARY", "WHERE",
  "WHEN", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING",
  "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT", "FSUM", "FAVG", "FMIN",
  "FMAX", "FUPPER", "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE",
  "FCOALESCE", "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID",
  "';'", "'.'", "'('", "')'", "','", "$accept", "stmt_list", "expr",
  "val_list", "opt_val_list", "@1", "@2", "trim_ltb", "interval_exp",
  "case_list", "stmt", "select_stmt", "opt_where", "opt_groupby",
  "groupby_list", "opt_asc_desc", "opt_with_rollup", "opt_having",
  "opt_orderby", "orderby_list", "orderby_item", "opt_limit",
  "opt_into_list", "column_list", "select_opts", "select_expr_list",
  "select_expr", "opt_as_alias", "table_references", "table_reference",
  "table_factor", "opt_as", "join_table", "opt_inner_cross", "opt_outer",
  "left_or_right", "opt_left_or_right_outer", "opt_join_condition",
  "join_condition", "index_hint", "opt_for_join", "index_list",
  "table_subquery", "delete_stmt", "delete_opts", "delete_list",
  "opt_dot_star", "drop_table_stmt", "create_index_stmt", "index_col_list",
  "index_expr", "drop_index_stmt", "truncate_table_stmt",
  "reclaim_table_stmt", "alter_table_stmt", "insert_stmt",
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
     436,   437,   438,   439,   440,   441,   442,    59,    46,    40,
      41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   202,   203,   203,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   205,   205,   206,   206,   207,   204,   208,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   209,   209,   209,   204,   204,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   204,
     204,   204,   204,   211,   211,   204,   204,   204,   204,   204,
     204,   204,   212,   213,   213,   214,   214,   215,   215,   216,
     216,   217,   217,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   223,   223,   223,   223,   224,   224,   225,
     225,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     227,   227,   227,   228,   229,   229,   229,   230,   230,   231,
     231,   232,   232,   232,   232,   233,   233,   234,   234,   234,
     234,   234,   235,   235,   235,   236,   236,   237,   237,   238,
     238,   238,   239,   239,   240,   240,   241,   241,   241,   241,
     242,   242,   243,   243,   244,   212,   245,   246,   246,   246,
     246,   245,   247,   247,   248,   248,   245,   212,   249,   249,
     212,   250,   250,   250,   250,   251,   251,   251,   252,   252,
     252,   252,   212,   253,   212,   254,   212,   255,   212,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     212,   257,   258,   258,   259,   259,   259,   259,   259,   260,
     260,   261,   261,   262,   262,   263,   264,   263,   265,   265,
     265,   265,   257,   266,   266,   266,   266,   212,   267,   267,
     267,   212,   268,   269,   269,   269,   270,   270,   270,   270,
     212,   271,   271,   272,   272,   212,   273,   273,   273,   273,
     273,   212,   274,   274,   212,   275,   275,   275,   275,   275,
     275,   276,   276,   277,   277,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   279,
     279,   280,   280,   281,   281,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   283,   283,   284,   278,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     286,   286,   286,   287,   287,   288,   288,   288,   289,   289,
     289,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   291,   291,   292,   293,   293,   293,   212,
     294,   294,   294,   295,   295,   296,   296
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
       1,     8,    10,     9,    11,     1,     3,     1,     4,     4,
       4,     6,     1,     3,     1,     3,     1,     3,     1,    10,
      10,    17,    12,    19,    11,     6,     8,     6,     6,     6,
       1,     8,     0,     4,     0,     2,     2,     2,     2,     1,
       0,     0,     3,     1,     3,     3,     0,     6,     1,     1,
       3,     3,     7,     3,     3,     5,     5,     1,     8,     7,
       7,     1,     8,     0,     2,     2,     3,     5,     5,     7,
       1,     4,     4,     0,     2,     1,     5,     7,     7,     9,
      11,     1,     2,     3,     1,     8,    10,     9,     6,    11,
       8,     0,     1,     1,     3,     5,     7,     4,     4,     5,
       5,     4,     6,    11,    13,    13,    15,     4,     6,     1,
       3,     1,     3,     1,     3,     0,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     4,     3,     3,     3,     2,
       3,     4,     4,     1,     3,     0,     4,     0,     3,     2,
       3,     3,     3,     3,     5,     5,     5,     3,     2,     7,
       5,     3,     2,     3,     2,     3,     5,     4,     5,     7,
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
       0,     0,   291,   190,     0,   234,     0,   234,     0,   131,
       0,   234,     0,     0,     0,   102,   185,   197,   200,   212,
     214,   216,   218,   230,   257,   261,   270,   275,   281,   284,
     409,     0,   273,     0,     0,   273,   292,     0,     0,     0,
       0,     0,   240,     0,   240,     0,     0,   412,   413,     0,
       0,     0,     0,   282,     0,     1,     2,     0,     0,     0,
       0,     0,     0,     0,     0,   273,   194,     0,   189,   187,
     188,     0,   213,   198,     0,   236,   237,   238,   239,   235,
       0,   217,     0,     0,     0,   410,   411,     0,     4,     7,
       8,    10,     9,     6,     0,     0,     0,   142,   132,    99,
       0,   100,   101,   133,   134,   135,    11,   137,   139,   138,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,   103,   140,   215,   238,   235,   146,     0,     0,
     147,   149,   150,   156,   283,     3,     0,     0,     0,     0,
       0,     0,   274,   271,     0,     0,     0,   272,     0,     0,
       0,     0,   192,   105,     0,     0,     0,     0,   241,   241,
     416,   415,   414,     0,    43,     0,    28,    27,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   179,     0,
       0,     0,     0,   164,   163,   167,   171,   168,     0,     0,
     165,   155,     0,     0,     0,     0,     0,     0,     0,   392,
     401,   360,   360,   360,   360,   360,   385,   360,   382,     0,
     360,   360,   360,   363,   394,   363,   393,   360,   360,   360,
       0,   363,   360,   363,   384,   391,   383,   402,     0,     0,
     386,   276,     0,     0,     0,     0,   406,   195,     0,   118,
       0,   105,   194,   199,     0,     0,     0,     0,     0,     5,
      41,    44,     0,    38,     0,     0,    91,     0,     0,     0,
       0,    77,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    19,    21,    22,    20,    97,    95,    36,
       0,    34,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    23,    24,    26,    12,    13,    14,    15,
      16,    17,    25,   144,   105,   141,   146,     0,     0,     0,
     151,   184,   154,     0,   105,   148,   165,   165,     0,   158,
       0,   166,     0,   153,     0,   228,   225,   227,     0,   229,
       0,   389,   365,   371,   368,   365,   365,     0,   365,   365,
     365,   364,   368,   368,   365,   365,   365,     0,   368,   365,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     407,   408,     0,   335,   288,   156,   106,     0,   123,   105,
     191,   193,     0,   232,   243,     0,     0,   232,     0,   232,
       0,    52,     0,    89,     0,     0,     0,    51,     0,     0,
      63,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    66,    67,    68,     0,     0,     0,    37,    35,     0,
       0,    98,    96,    47,     0,     0,     0,     0,     0,     0,
     107,   179,   181,   181,   181,     0,     0,     0,   118,   169,
     170,     0,     0,   172,     0,     0,     0,     0,     0,     0,
       0,   377,   387,   379,   381,   403,     0,   380,   376,   375,
     398,   397,   374,   378,   373,     0,   395,   372,   396,     0,
       0,   278,     0,   277,   205,     0,     0,     0,     0,     0,
     207,     0,     0,     0,   406,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   293,     0,     0,     0,     0,   186,
     196,     0,     0,     0,   252,   242,     0,     0,   232,   259,
     232,   260,    42,    93,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,    39,     0,     0,     0,    30,     0,   116,   152,
       0,     0,     0,     0,   266,     0,     0,   123,   161,   159,
       0,     0,   157,   173,     0,     0,     0,     0,     0,   226,
     361,     0,   366,   367,     0,     0,   368,     0,   368,   368,
     390,     0,     0,     0,     0,     0,     0,   201,     0,     0,
       0,     0,   335,   290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   406,   335,     0,   405,   111,   119,   120,
     124,   254,   253,     0,     0,   244,   249,   248,     0,   246,
     231,   258,    90,    94,     0,    61,    60,     0,    65,     0,
       0,    78,    79,    69,     0,    71,    46,     0,    50,    40,
      33,    31,    32,     0,     0,   118,   180,     0,     0,     0,
       0,     0,     0,   262,   174,     0,   160,     0,     0,     0,
     333,     0,     0,     0,   370,   399,   404,   400,   388,     0,
     279,     0,     0,     0,     0,   206,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,     0,   287,   294,   337,   112,   113,   122,     0,
       0,     0,     0,     0,   245,     0,     0,     0,     0,    64,
      80,    81,    82,    83,    87,    86,    88,    85,    84,     0,
      48,   111,   114,   117,   123,   182,     0,     0,     0,   267,
     268,     0,     0,   219,   311,     0,   309,     0,   220,     0,
     362,   369,     0,   208,   209,   210,     0,   202,     0,   406,
       0,     0,     0,     0,   301,     0,     0,     0,   298,     0,
     297,     0,   307,   336,   121,   126,   125,   233,   256,   255,
     251,   250,     0,    62,    59,    70,   109,     0,     0,   108,
     127,   178,     0,   177,   176,     0,   175,     0,     0,     0,
     224,     0,   334,   280,     0,   204,   289,     0,     0,     0,
       0,     0,   299,   300,   130,   295,     0,   348,     0,     0,
       0,     0,   354,   339,     0,   352,     0,   115,   111,     0,
     104,   183,   269,   222,     0,   312,   310,   211,   302,     0,
       0,   308,     0,   338,     0,     0,     0,   355,   340,   341,
     343,   342,   347,     0,     0,     0,   353,   351,   247,   110,
     128,     0,     0,   296,     0,     0,     0,     0,   357,     0,
       0,     0,     0,     0,     0,     0,     0,   350,     0,     0,
     358,   356,   344,   345,   346,   313,     0,     0,     0,     0,
       0,     0,   315,     0,     0,     0,     0,   315,   349,   359,
     221,   314,     0,     0,     0,   303,     0,   329,     0,     0,
       0,   315,   315,     0,   330,   223,     0,   326,   328,   327,
       0,     0,     0,   305,   304,   331,   332,   316,   324,   318,
       0,   320,   325,   322,     0,   315,   319,   317,   323,   321,
     306
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,   300,   301,   302,   469,   579,   315,   572,   181,
      14,    15,   289,   588,   762,   738,   819,   685,   428,   648,
     649,   549,   860,   729,    49,   132,   133,   224,   139,   140,
     141,   242,   142,   239,   382,   240,   378,   602,   603,   370,
     591,   766,   143,    16,    39,    71,   162,    17,    18,   529,
     530,    19,    20,    21,    22,    23,   554,    42,    80,   296,
     435,   558,   746,   658,   433,    24,    25,    52,   374,    26,
      59,    27,    28,    29,    38,   543,   544,   777,   775,   916,
     930,   701,   545,   803,   391,   402,   501,   502,   281,   506,
     424,   425,    30,    47,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -673
static const yytype_int16 yypact[] =
{
     769,  -123,   345,  -673,   144,  -673,  -120,  -673,    19,  -673,
     -55,     9,    39,   262,    71,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,   312,   183,   332,    25,   183,  -673,   242,   203,    21,
     359,    28,   244,   391,   244,    94,    26,   212,  -673,   486,
     429,   221,    13,  -673,   431,  -673,   769,   169,   209,   434,
     403,   321,   322,   441,    81,   183,   309,   471,  -673,  -673,
    -673,   -51,  -673,  -673,   355,  -673,  -673,  -673,  -673,  -673,
     507,  -673,   549,  1331,  1331,  -673,  -673,   583,   -18,  -673,
    -673,  -673,  -673,   580,  1331,  1331,  1331,  -673,  -673,  -673,
     767,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,   395,   399,   410,   415,   417,   420,   425,   432,   460,
     464,   491,   494,   496,   516,   541,   543,   563,   569,   584,
    1331,  2570,    -2,  -673,  -673,    14,    16,    18,    12,   -94,
     205,  -673,  -673,   594,  -673,  -673,   593,   639,   654,   659,
     718,   740,  -673,  -673,  2297,   790,   797,  -673,   678,   627,
     803,   781,  -673,   237,   160,    13,   807,   808,   -95,   -20,
    2642,  2642,  -673,   809,  1331,  1331,   624,   624,  -673,  1331,
    2215,   182,   664,  1331,   189,  1331,  1331,   273,  1331,  1331,
    1331,  1331,  1331,  1331,  1331,  1331,  1331,  1331,   614,   617,
     620,  1592,  -673,  1331,  1331,  1331,  1331,  1331,    77,   622,
     414,  1331,   565,  1331,  1331,  1331,  1331,  1331,  1331,  1331,
    1331,  1331,  1331,   821,  -673,    13,  1331,   822,    11,   626,
     -82,   825,    13,  -673,  -673,  -673,   -14,  -673,    13,   720,
     705,  -673,   828,   829,   830,   831,   832,   833,   837,  -673,
    -673,   642,   642,   642,   642,   642,  -673,   642,  -673,   643,
     642,   642,   642,   801,  -673,   801,  -673,   642,   642,   642,
     646,   801,   642,   801,  -673,  -673,  -673,  -673,   649,   650,
    -673,   243,   651,   725,   849,   850,   132,  -673,  1331,   727,
      13,   -79,   309,  -673,   852,   853,   687,   852,   187,  -673,
    1203,  -673,   658,  2642,  2283,   190,  -673,  1331,  1331,   661,
     698,  -673,  -673,  -673,  1614,   791,  1225,  1387,   662,  1645,
    1666,  1687,  1726,  1754,  1775,  1797,  1828,  1422,  1446,  1521,
    -673,  -673,  -673,  -673,  1937,  2661,  1705,  2337,  2337,  -673,
      79,  -673,   664,  1331,  1331,   660,  1331,  2600,   665,   666,
     667,   864,   537,   501,   520,   550,   450,   450,   843,   843,
     843,   843,  -673,  -673,   -79,  -673,   266,   753,   765,   766,
    -673,  -673,  -673,   -11,   218,   205,   705,   705,   768,   752,
      13,  -673,   771,  -673,   137,  -673,  -673,  -673,   731,  -673,
     879,  -673,  -673,  -673,  -673,  -673,  -673,   881,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,   881,  -673,  -673,
    -673,   882,   883,   762,   691,  1331,    64,   889,   694,   770,
    -673,  -673,   891,   311,  -673,   594,  2642,   855,   780,   -79,
    -673,  -673,   878,   -85,  -673,   191,   701,   -85,   701,   773,
    1331,  -673,  1331,  -673,  1331,  2484,  2304,  -673,  1331,  1331,
    -673,  1331,  2463,   795,   795,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  1331,  1331,  1331,  -673,  -673,  1331,
     704,  2337,  2337,   664,  2621,  1331,   664,   664,   664,   706,
     813,    11,   816,   816,   816,  1331,   906,   907,   727,  -673,
    -673,    13,  1331,   -70,    13,   712,   804,   811,   714,   919,
     211,   233,   382,   233,   233,  -673,   249,   233,   233,   233,
     382,   382,   233,   233,   233,   270,   382,   233,   382,   723,
     724,   872,  1331,  2642,  -673,   728,   730,   733,   734,   282,
    -673,   735,    64,   923,    -8,   927,   736,   827,   139,   739,
     742,   834,   743,   284,  -673,   936,   664,   940,  1331,  -673,
    -673,  1013,   854,   962,  -673,  -673,   964,  1086,   -80,  -673,
     -80,  -673,  -673,  2642,  2505,  -673,  1331,  1571,    50,  1849,
    1331,  1331,   789,   798,  1870,  1542,  1891,   812,  -673,  1331,
     814,  1331,   709,   815,   823,   824,  -673,   926,   925,  -673,
     916,   835,   836,   838,  2642,  1006,   -10,   780,  -673,  2642,
    1331,   840,  -673,  -673,   -70,  1331,   841,   842,  1024,  -673,
    -673,  1023,  -673,  -673,   884,  1025,  -673,  1029,  -673,  -673,
    -673,   863,  1917,  1033,  1061,  1063,  1064,  -673,  1067,    64,
     296,   873,   311,  -673,   156,  1331,   874,   875,   876,  1068,
    1068,   877,  1024,    96,   311,  2297,  -673,   287,   880,  -673,
     981,  -673,  2642,   915,  1058,  -673,  -673,  2642,   305,  -673,
    -673,  -673,  -673,  2642,  1331,  -673,  -673,  1331,  -673,  1958,
    2194,  -673,  -673,  -673,  1331,  -673,  -673,   885,  -673,   709,
    -673,  -673,  -673,  1331,  1331,   727,  -673,  1076,  1076,  1076,
    1331,  1331,  1077,  -673,  2642,  1068,  -673,  1980,  1079,  1080,
    -673,   313,   886,  1084,  -673,   382,  -673,   382,   382,  1331,
    -673,   895,   896,   898,   899,  -673,   315,  -673,    64,   318,
     900,   974,   991,   903,  2011,  1079,  1068,  1068,  -673,   336,
     339,  1080,   354,  -673,  -673,  -673,  -673,  -673,  -673,   940,
    1331,  1331,   852,  1110,  -673,  1307,   908,  2032,  2053,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  2074,
    -673,  2534,   109,  2642,   780,  -673,   384,   387,   404,  2642,
    2642,  1085,   407,  1088,  -673,   411,  -673,   422,  -673,  1105,
    -673,  -673,  2100,  -673,  -673,  -673,  1106,  -673,   427,   168,
    1331,   911,   913,  1024,  -673,   436,   438,   455,  -673,  1116,
    -673,   457,  -673,   371,  -673,  2642,  2642,   920,  -673,  2642,
    -673,  2642,  1086,  -673,  -673,  -673,  -673,   983,  1331,  -673,
    1016,  -673,  1120,  -673,  -673,  1331,  -673,   956,   992,  1122,
    -673,  1126,  -673,  -673,   930,  -673,  -673,  2121,  1079,  1080,
     461,   997,  -673,  -673,  -673,  -673,  1008,   934,  1133,   941,
    1135,    34,  -673,  -673,  1034,  1035,   483,  -673,  2534,  1068,
    -673,  -673,  2642,  -673,  1140,  -673,  -673,  -673,  -673,   487,
     497,  -673,  1143,  -673,  1142,    53,  1331,  -673,  -673,  -673,
    -673,  -673,  -673,   949,   950,   951,  -673,  -673,  -673,  -673,
     952,   953,  1017,  -673,   289,   499,   955,  1045,  -673,  2149,
     957,   959,   961,  1153,  1160,  1161,  1153,  -673,  1162,  1331,
    -673,  -673,  -673,  -673,  -673,  -673,   502,   506,   969,   566,
     976,  2171,  -673,  1166,  1171,  1153,  1153,  -673,  -673,  -673,
     166,  -673,   978,   577,   579,   222,    42,  1082,   -37,   -42,
    1153,  -673,  -673,  1123,  -673,  -673,    27,  -673,  -673,  -673,
     186,   196,   581,   222,   222,  -673,  -673,  -673,  -673,  -673,
     -19,  -673,  -673,  -673,   151,  -673,  -673,  -673,  -673,  -673,
     222
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -673,  1132,   -49,  -420,  -673,  -673,  -673,  -673,   757,  1009,
    -673,  -124,  -247,  -673,  -673,  -672,  -673,  -673,  -480,  -673,
     481,  -575,  -673,  -636,  -673,  -673,  1030,  -134,  -115,  1010,
    -231,   858,  -673,  -673,   412,  -673,  -673,  -673,   653,   777,
     307,   114,  -673,  -673,  -673,  1192,   968,  -673,  -673,  -514,
    -673,  -673,  -673,  -673,  -673,  -673,  -407,   331,  1217,  1093,
    -673,   846,  -673,   451,  -296,  -673,  -673,  -673,  -673,  -673,
     276,  -673,  -673,  -673,  -673,   655,   663,  -619,  -638,  -520,
    -653,  -617,  -673,  -673,   918,   158,   197,  -397,   641,   901,
    -532,  -673,  -673,  -673,  1229
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -287
static const yytype_int16 yytable[] =
{
     131,   437,   633,   228,   730,   510,   511,   379,   597,   485,
     691,   516,  -263,   518,   229,   137,   137,  -265,   630,  -264,
     562,   202,   693,   230,    66,   732,   950,    45,    61,    85,
     559,    73,   561,    31,   170,   171,    43,   165,   878,   879,
     880,   881,    53,   552,   430,   176,   177,   178,   552,   577,
     291,   180,   947,   294,   231,   966,   600,   223,   309,   772,
     203,   204,   205,   206,   207,   208,   209,   524,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   201,   882,   339,   158,   467,   225,   795,   955,   816,
     796,   797,   948,   288,   420,   340,   601,   367,    54,   376,
      86,    50,   944,    83,   295,   967,   896,   232,   949,    67,
     364,   733,   801,   368,    84,   716,   553,   480,   372,   232,
     951,   659,   232,    68,   377,   956,   303,   488,   297,    62,
     304,   421,    74,    69,   310,   314,   316,   317,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   493,
     166,   660,    70,   661,   334,   335,   336,   337,   338,   677,
      46,     9,   347,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   439,   429,   840,   131,   369,   295,
     173,   174,   550,   897,   936,   159,   889,   486,   692,   820,
     495,   632,    88,    89,    90,    91,    92,    93,   420,   226,
     869,   341,   146,   468,   788,   764,    94,    95,  -263,   720,
     945,   138,   138,  -265,    96,  -264,   227,   898,   470,   705,
     870,   707,   708,   890,   496,   968,   937,   479,   883,   884,
     885,   147,   481,   311,   420,   421,   957,    99,   148,   426,
     943,   100,   637,   721,   101,   102,   961,    40,   149,   638,
     666,   667,   525,   526,   527,   528,   233,   836,   445,   446,
     598,   413,    55,   604,   306,   307,   452,   497,    56,   202,
     420,   421,   443,   444,   935,   969,    88,    89,    90,    91,
      92,    93,   937,   817,   938,    75,   722,    58,   953,   954,
      94,    95,   939,  -285,   471,   472,   414,   474,    96,   318,
      41,   498,   201,   312,   150,   223,   234,   421,    75,   958,
     818,    63,   970,   106,  -162,    57,    76,   415,   235,   962,
     723,    99,   959,   135,   736,   100,   290,   236,   101,   102,
     422,   423,   963,   136,   960,    60,     9,   151,    44,    76,
     938,   160,    51,   237,   964,    64,    77,   313,   939,   580,
      78,   238,   583,   584,   585,   308,    79,   438,   535,    65,
     737,   166,    72,   308,   536,  -286,   523,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   919,   152,   130,   846,
     288,   555,   556,   563,    81,   564,   612,   106,   537,   567,
     568,   538,   569,  -194,    32,   933,   934,   847,    33,   288,
     613,   610,   611,    87,   539,   574,   575,   576,   848,   487,
     952,   540,   646,   403,   849,   850,   582,   343,   344,   408,
     345,   410,   134,   346,   144,   161,   594,   153,  -194,   614,
     615,   541,   154,   599,   157,   851,   807,   155,    34,   616,
     617,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     618,   617,   130,   622,   163,   542,   218,   219,   220,   221,
     222,   852,   627,   628,   643,   644,    35,   905,   906,    88,
      89,    90,    91,    92,    93,   853,   717,   628,    36,   650,
     156,   854,   652,    94,    95,   744,   745,   161,   657,    37,
     168,    96,    97,   778,   779,   787,   628,   663,   789,   644,
      98,   669,   670,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   679,   167,    99,   855,   798,   799,   100,   800,
     799,   101,   102,   215,   216,   217,   218,   219,   220,   221,
     222,   694,   169,   103,   802,   779,   697,   104,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,    88,    89,
      90,    91,    92,    93,   216,   217,   218,   219,   220,   221,
     222,   105,    94,    95,   821,   822,   724,   823,   822,   175,
      96,    45,   503,   504,   182,   507,   508,   509,   183,   348,
     349,   512,   513,   514,   824,   822,   517,   826,   799,   184,
     106,   828,   829,    99,   185,   747,   186,   100,   748,   187,
     101,   102,   830,   831,   188,   759,   107,   835,   628,   108,
     109,   189,   110,   241,   761,   763,   841,   829,   842,   799,
     243,   769,   770,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   843,   799,   845,   831,   190,
     782,   871,   779,   191,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   888,   745,   130,   244,   892,   829,   106,
     192,   805,   806,   193,   809,   194,   811,   893,   831,   907,
     908,   245,   922,   923,   924,   925,   246,   350,   203,   204,
     205,   206,   207,   208,   209,   195,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     196,   837,   197,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   198,   657,   351,   247,   927,   923,   199,   858,
      88,    89,    90,    91,    92,    93,   862,   941,   923,   942,
     923,   965,   923,   200,    94,    95,   448,   248,   489,   490,
     592,   593,    96,   282,    88,    89,    90,    91,    92,    93,
     283,     1,   767,   768,   284,   285,   286,   287,    94,    95,
     292,   293,   299,     9,   330,    99,    96,   331,     2,   100,
     332,   342,   101,   102,   363,   366,   371,   899,   373,   380,
     381,   383,   384,   385,   386,   387,   388,     3,     4,    99,
     389,   390,   397,   100,   401,   407,   101,   102,   411,   412,
     416,   417,   418,   419,   427,   432,   434,   436,   441,   473,
     921,   447,   455,   482,   476,   477,   478,    88,    89,    90,
      91,    92,    93,   222,     5,   483,   484,   491,   492,   451,
     494,    94,    95,   499,   500,   505,   521,   519,   520,    96,
     522,   106,   531,   532,   534,   548,   533,   547,   551,   449,
     557,   552,     6,   571,   578,   587,   586,   590,     7,   595,
     596,   605,    99,   608,   606,   106,   100,     8,     9,   101,
     102,   607,   609,   619,   620,   621,   631,   623,    10,   624,
     634,    11,   625,   626,   629,   635,    12,   636,   639,   645,
     179,   640,   642,   647,   641,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   653,   654,   130,   655,   683,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   106,   671,
     130,   203,   204,   205,   206,   207,   208,   209,   672,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   676,     9,   678,   680,    88,    89,    90,    91,
      92,    93,   684,   681,   682,   686,   690,   700,   702,   704,
      94,    95,   703,   706,   687,   688,   711,   689,    96,   695,
     698,   699,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    99,   709,   130,   712,   100,   713,   714,   101,   102,
     715,   728,   718,   725,   726,   727,   731,   742,   743,   765,
     771,   739,   774,   776,   791,   760,   780,   651,   781,    88,
      89,    90,    91,    92,    93,   783,   784,   740,   785,   790,
     786,   792,   793,    94,    95,   825,   827,   812,   832,   834,
     838,    96,   839,    88,    89,    90,    91,    92,    93,   844,
     857,   553,   859,   861,   863,   865,   864,    94,    95,   866,
     867,   872,   873,   874,    99,    96,   875,   106,   100,   877,
     876,   101,   102,   891,   886,   887,   894,   895,   900,   901,
     902,   904,   903,   799,   909,   910,   915,   912,    99,   913,
     656,   914,   100,   917,   918,   101,   102,   920,   926,   931,
     392,   393,   394,   395,   932,   396,   928,   940,   398,   399,
     400,   946,   741,   944,   808,   404,   405,   406,   145,   305,
     409,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     106,   573,   130,   203,   204,   205,   206,   207,   208,   209,
     804,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   106,   203,   204,   205,   206,   207,
     208,   209,   375,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   365,   696,   589,   164,
     431,    82,   298,   856,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   546,   560,   130,   735,   719,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   734,   515,   130,
      88,    89,    90,    91,    92,    93,   172,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,     0,     0,
       0,     0,    96,     0,    88,    89,    90,    91,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,     0,     0,     0,    99,    96,     0,     0,   100,
       0,     0,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,   810,     0,   100,     0,     0,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   204,   205,
     206,   207,   208,   209,   440,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,     0,     0,     0,     0,   453,     0,     0,     0,
       0,   106,   203,   204,   205,   206,   207,   208,   209,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     0,     0,   106,   203,   204,   205,   206,
     207,   208,   209,     0,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   130,     0,     0,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,     0,     0,
     130,   203,   204,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   203,   204,   205,   206,   207,   208,   209,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     0,     0,     0,     0,     0,     0,     0,
       0,   203,   204,   205,   206,   207,   208,   209,   454,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   203,   204,   205,   206,   207,   208,   209,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   464,   203,   204,   205,   206,   207,   208,
     209,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,   465,     0,     0,
       0,     0,     0,     0,     0,   203,   204,   205,   206,   207,
     208,   209,   664,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   203,   204,   205,   206,
     207,   208,   209,     0,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   203,   204,   205,
     206,   207,   208,   209,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   206,   207,
     208,   209,   466,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   203,   204,   205,   206,
     207,   208,   209,   674,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     0,     0,     0,
       0,     0,     0,     0,   203,   204,   205,   206,   207,   208,
     209,   665,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   203,   204,   205,   206,   207,
     208,   209,   333,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,   203,   204,   205,
     206,   207,   208,   209,   450,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
     205,   206,   207,   208,   209,   456,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   203,
     204,   205,   206,   207,   208,   209,   457,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     203,   204,   205,   206,   207,   208,   209,   458,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,     0,     0,     0,   459,   203,   204,   205,
     206,   207,   208,   209,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   204,   205,
     206,   207,   208,   209,   460,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   203,   204,
     205,   206,   207,   208,   209,   461,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,     0,
     203,   204,   205,   206,   207,   208,   209,   462,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,   204,   205,   206,   207,   208,   209,   463,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   203,   204,   205,   206,   207,   208,   209,   668,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   203,   204,   205,   206,   207,   208,   209,
     673,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   203,   204,   205,   206,   207,   208,
     209,   675,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,     0,
     203,   204,   205,   206,   207,   208,   209,   710,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,     0,     0,     0,     0,     0,   749,   203,
     204,   205,   206,   207,   208,   209,     0,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     773,   203,   204,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,     0,   203,   204,   205,   206,   207,   208,
     209,   794,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   203,   204,   205,   206,   207,
     208,   209,   813,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,     0,     0,     0,
       0,     0,     0,   814,     0,     0,     0,     0,     0,   750,
     751,     0,     0,     0,   752,     0,   753,     0,     0,     0,
       0,     0,     0,     0,   815,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   754,   755,     0,
     756,     0,     0,   203,   204,   205,   206,   207,   208,   209,
     833,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   203,   204,   205,   206,   207,   208,
     209,   868,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,   249,   250,     0,
     251,     0,   252,   253,     0,     0,     0,     0,     0,   911,
    -287,  -287,  -287,  -287,   254,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,   757,
     758,   929,   255,   256,   257,   258,     0,     0,   259,     0,
       0,     0,   260,     0,     0,     0,     0,     0,   179,     0,
       0,     0,     0,     0,     0,     0,     0,   261,     0,     0,
       0,     0,     0,     0,   262,     0,     0,     0,   263,     0,
       0,     0,     0,     0,   264,     0,   265,   266,   267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   268,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,   269,   270,     0,   271,   272,     0,
       0,   273,   274,     0,     0,     0,     0,   275,   276,     0,
       0,   566,   277,     0,     0,     0,   278,     0,   279,     0,
       0,     0,   280,   203,   204,   205,   206,   207,   208,   209,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   203,   204,   205,   206,   207,   208,
     209,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   203,   204,   205,   206,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,     0,     0,     0,
       0,     0,     0,     0,   203,   204,   205,   206,   207,   208,
     209,   570,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,   565,     0,     0,     0,
       0,   736,     0,   202,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,   207,   208,   209,   662,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,     0,     0,     0,     0,     0,     0,   737,     0,   223,
     203,   204,   205,   206,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,   475,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   203,   204,   205,   206,   207,   208,   209,   581,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222
};

static const yytype_int16 yycheck[] =
{
      49,   297,   534,   137,   640,   402,   403,   238,   488,    20,
      20,   408,     3,   410,   138,     3,     3,     3,   532,     3,
     440,     3,   597,   138,     3,   642,    68,     8,     3,     3,
     437,     3,   439,   156,    83,    84,   156,    88,     4,     5,
       6,     7,     3,   128,   291,    94,    95,    96,   128,   469,
     165,   100,    89,   148,   148,    74,   126,    39,   182,   695,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   130,    48,     6,     3,     6,    88,   725,    61,   761,
     726,   727,   129,   172,   102,    18,   166,    86,    59,   113,
      74,   156,    60,     9,   199,   124,    53,   201,   145,    88,
     225,   643,   731,   102,    20,   629,   201,   364,   200,   201,
     162,   201,   201,   102,   138,    98,   175,   374,   148,   104,
     179,   139,   104,   112,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   380,
     201,   558,   131,   560,   203,   204,   205,   206,   207,   579,
     141,   149,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   298,   290,   793,   226,   167,   199,
     198,   199,   429,   130,    18,   104,   858,   198,   198,   764,
      53,   199,     3,     4,     5,     6,     7,     8,   102,   201,
     838,   124,    33,   124,   718,   685,    17,    18,   199,    53,
     168,   199,   199,   199,    25,   199,   198,   164,   342,   616,
     839,   618,   619,   859,    87,    74,    60,   351,   194,   195,
     196,    62,   366,    44,   102,   139,    50,    48,    69,   288,
      18,    52,   103,    87,    55,    56,    50,   103,    79,   110,
     200,   201,   188,   189,   190,   191,    51,   789,   307,   308,
     491,    18,     0,   494,    82,    83,   315,   130,   197,     3,
     102,   139,    82,    83,   927,   124,     3,     4,     5,     6,
       7,     8,    60,   174,   118,    64,   130,   104,   941,   942,
      17,    18,   126,   197,   343,   344,    53,   346,    25,    26,
     156,   164,   351,   114,   135,    39,   101,   139,    64,   123,
     201,    35,   965,   124,   109,     3,    95,    74,   113,   123,
     164,    48,   136,   102,    37,    52,   166,   122,    55,    56,
     198,   199,   136,   112,   148,     3,   149,   168,     7,    95,
     118,    65,    11,   138,   148,   103,   102,   158,   126,   473,
     106,   146,   476,   477,   478,   173,   112,   170,    47,   156,
      73,   201,     3,   173,    53,   197,   415,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   906,   178,   199,    18,
     172,   200,   201,   442,     3,   444,   163,   124,    87,   448,
     449,    90,   451,   166,    59,   925,   926,    36,    63,   172,
     177,   200,   201,   201,   103,   464,   465,   466,    47,   201,
     940,   110,   546,   265,    53,    54,   475,    13,    14,   271,
      16,   273,     3,    19,     3,   198,   485,     3,   201,    57,
      58,   130,    39,   492,     3,    74,   742,   126,   103,   200,
     201,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     200,   201,   199,   522,     3,   164,    26,    27,    28,    29,
      30,   110,   200,   201,   200,   201,   141,   198,   199,     3,
       4,     5,     6,     7,     8,   124,   200,   201,   153,   548,
     178,   130,   551,    17,    18,   200,   201,   198,   557,   164,
       3,    25,    26,   200,   201,   200,   201,   566,   200,   201,
      34,   570,   571,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   581,   178,    48,   164,   200,   201,    52,   200,
     201,    55,    56,    23,    24,    25,    26,    27,    28,    29,
      30,   600,     3,    67,   200,   201,   605,    71,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,     4,
       5,     6,     7,     8,    24,    25,    26,    27,    28,    29,
      30,    95,    17,    18,   200,   201,   635,   200,   201,     9,
      25,     8,   395,   396,   199,   398,   399,   400,   199,    34,
      35,   404,   405,   406,   200,   201,   409,   200,   201,   199,
     124,   200,   201,    48,   199,   664,   199,    52,   667,   199,
      55,    56,   200,   201,   199,   674,   140,   200,   201,   143,
     144,   199,   146,    39,   683,   684,   200,   201,   200,   201,
      47,   690,   691,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   200,   201,   200,   201,   199,
     709,   200,   201,   199,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   200,   201,   199,    47,   200,   201,   124,
     199,   740,   741,   199,   743,   199,   745,   200,   201,   200,
     201,    47,   200,   201,   198,   199,    47,   142,    10,    11,
      12,    13,    14,    15,    16,   199,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     199,   790,   199,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   199,   812,   199,    47,   200,   201,   199,   818,
       3,     4,     5,     6,     7,     8,   825,   200,   201,   200,
     201,   200,   201,   199,    17,    18,    88,    47,   376,   377,
     483,   484,    25,     3,     3,     4,     5,     6,     7,     8,
       3,    32,   688,   689,   126,   178,     3,    26,    17,    18,
       3,     3,     3,   149,   200,    48,    25,   200,    49,    52,
     200,   199,    55,    56,     3,     3,   200,   876,     3,   109,
     125,     3,     3,     3,     3,     3,     3,    68,    69,    48,
       3,   199,   199,    52,    43,   199,    55,    56,   199,   199,
     199,   126,     3,     3,   127,     3,     3,   170,   200,   199,
     909,   200,   200,   110,   199,   199,   199,     3,     4,     5,
       6,     7,     8,    30,   105,   110,   110,   109,   126,    88,
     109,    17,    18,   152,     5,     4,   124,     5,     5,    25,
     199,   124,     3,   199,     3,   115,   126,    42,    20,   201,
     199,   128,   133,   108,   200,    92,   200,    91,   139,     3,
       3,   199,    48,   199,   110,   124,    52,   148,   149,    55,
      56,   110,     3,   200,   200,    53,     3,   199,   159,   199,
       3,   162,   199,   199,   199,   199,   167,   110,   199,     3,
     173,   199,   199,     3,   110,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   110,     3,   199,     3,    42,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   124,   200,
     199,    10,    11,    12,    13,    14,    15,    16,   200,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   200,   149,   200,   200,     3,     4,     5,     6,
       7,     8,    97,   200,   200,   109,    20,     3,     5,     4,
      17,    18,   148,     4,   199,   199,     3,   199,    25,   199,
     199,   199,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,    48,   199,   199,     3,    52,     3,     3,    55,    56,
       3,     3,   199,   199,   199,   199,   199,   162,    20,     3,
       3,   201,     3,     3,   110,   200,   200,    74,     4,     3,
       4,     5,     6,     7,     8,   200,   200,   116,   200,   199,
     201,   110,   199,    17,    18,    20,    18,   199,     3,     3,
     199,    25,   199,     3,     4,     5,     6,     7,     8,     3,
     137,   201,   106,     3,   168,     3,   134,    17,    18,     3,
     200,   134,   124,   199,    48,    25,     3,   124,    52,     4,
     199,    55,    56,     3,   110,   110,     3,     5,   199,   199,
     199,   134,   199,   201,   199,   110,     3,   200,    48,   200,
      74,   200,    52,     3,     3,    55,    56,     5,   199,     3,
     252,   253,   254,   255,     3,   257,   200,   199,   260,   261,
     262,    99,   201,    60,    74,   267,   268,   269,    56,   180,
     272,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     124,   454,   199,    10,    11,    12,    13,    14,    15,    16,
     739,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   124,    10,    11,    12,    13,    14,
      15,    16,   232,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   226,   604,   481,    67,
     292,    44,   169,   812,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   425,   438,   199,   645,   632,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   644,   407,   199,
       3,     4,     5,     6,     7,     8,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    48,    25,    -1,    -1,    52,
      -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    74,    -1,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   201,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
      -1,   124,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,   124,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,    -1,    -1,   199,    -1,    -1,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,    -1,    -1,
     199,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   201,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   201,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    91,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    13,    14,
      15,    16,   201,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   201,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   200,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   200,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    10,    11,    12,
      13,    14,    15,    16,   200,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   200,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   200,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   200,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,   200,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    11,    12,
      13,    14,    15,    16,   200,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   200,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      10,    11,    12,    13,    14,    15,    16,   200,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   200,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   200,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     200,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   200,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   200,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,   200,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     200,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   200,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   200,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,
      96,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     200,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   200,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    40,    41,    -1,
      43,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,   200,
      13,    14,    15,    16,    57,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   175,
     176,   200,    75,    76,    77,    78,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,   117,    -1,   119,   120,   121,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,    -1,   147,   148,    -1,   150,   151,    -1,
      -1,   154,   155,    -1,    -1,    -1,    -1,   160,   161,    -1,
      -1,   157,   165,    -1,    -1,    -1,   169,    -1,   171,    -1,
      -1,    -1,   175,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    88,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    82,    -1,    -1,    -1,
      -1,    37,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    82,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    39,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    38,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    38,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    49,    68,    69,   105,   133,   139,   148,   149,
     159,   162,   167,   203,   212,   213,   245,   249,   250,   253,
     254,   255,   256,   257,   267,   268,   271,   273,   274,   275,
     294,   156,    59,    63,   103,   141,   153,   164,   276,   246,
     103,   156,   259,   156,   259,     8,   141,   295,   296,   226,
     156,   259,   269,     3,    59,     0,   197,     3,   104,   272,
       3,     3,   104,   272,   103,   156,     3,    88,   102,   112,
     131,   247,     3,     3,   104,    64,    95,   102,   106,   112,
     260,     3,   260,     9,    20,     3,    74,   201,     3,     4,
       5,     6,     7,     8,    17,    18,    25,    26,    34,    48,
      52,    55,    56,    67,    71,    95,   124,   140,   143,   144,
     146,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     199,   204,   227,   228,     3,   102,   112,     3,   199,   230,
     231,   232,   234,   244,     3,   203,    33,    62,    69,    79,
     135,   168,   178,     3,    39,   126,   178,     3,     3,   104,
     272,   198,   248,     3,   247,    88,   201,   178,     3,     3,
     204,   204,   296,   198,   199,     9,   204,   204,   204,   173,
     204,   211,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   204,     3,    10,    11,    12,    13,    14,    15,    16,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    39,   229,    88,   201,   198,   229,   213,
     230,   148,   201,    51,   101,   113,   122,   138,   146,   235,
     237,    39,   233,    47,    47,    47,    47,    47,    47,    40,
      41,    43,    45,    46,    57,    75,    76,    77,    78,    81,
      85,   100,   107,   111,   117,   119,   120,   121,   132,   147,
     148,   150,   151,   154,   155,   160,   161,   165,   169,   171,
     175,   290,     3,     3,   126,   178,     3,    26,   172,   214,
     166,   230,     3,     3,   148,   199,   261,   148,   261,     3,
     204,   205,   206,   204,   204,   211,    82,    83,   173,   213,
     204,    44,   114,   158,   204,   209,   204,   204,    26,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     200,   200,   200,   200,   204,   204,   204,   204,   204,     6,
      18,   124,   199,    13,    14,    16,    19,   204,    34,    35,
     142,   199,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,     3,   230,   228,     3,    86,   102,   167,
     241,   200,   200,     3,   270,   231,   113,   138,   238,   232,
     109,   125,   236,     3,     3,     3,     3,     3,     3,     3,
     199,   286,   286,   286,   286,   286,   286,   199,   286,   286,
     286,    43,   287,   287,   286,   286,   286,   199,   287,   286,
     287,   199,   199,    18,    53,    74,   199,   126,     3,     3,
     102,   139,   198,   199,   292,   293,   204,   127,   220,   230,
     214,   248,     3,   266,     3,   262,   170,   266,   170,   213,
     201,   200,   157,    82,    83,   204,   204,   200,    88,   201,
     200,    88,   204,   201,   201,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   201,   201,   201,     6,   124,   207,
     213,   204,   204,   199,   204,    38,   199,   199,   199,   213,
     214,   229,   110,   110,   110,    20,   198,   201,   214,   236,
     236,   109,   126,   232,   109,    53,    87,   130,   164,   152,
       5,   288,   289,   288,   288,     4,   291,   288,   288,   288,
     289,   289,   288,   288,   288,   291,   289,   288,   289,     5,
       5,   124,   199,   204,     3,   188,   189,   190,   191,   251,
     252,     3,   199,   126,     3,    47,    53,    87,    90,   103,
     110,   130,   164,   277,   278,   284,   233,    42,   115,   223,
     214,    20,   128,   201,   258,   200,   201,   199,   263,   258,
     263,   258,   205,   204,   204,    82,   157,   204,   204,   204,
      88,   108,   210,   210,   204,   204,   204,   205,   200,   208,
     213,    38,   204,   213,   213,   213,   200,    92,   215,   241,
      91,   242,   242,   242,   204,     3,     3,   220,   232,   204,
     126,   166,   239,   240,   232,   199,   110,   110,   199,     3,
     200,   201,   163,   177,    57,    58,   200,   201,   200,   200,
     200,    53,   204,   199,   199,   199,   199,   200,   201,   199,
     251,     3,   199,   292,     3,   199,   110,   103,   110,   199,
     199,   110,   199,   200,   201,     3,   213,     3,   221,   222,
     204,    74,   204,   110,     3,     3,    74,   204,   265,   201,
     258,   258,    82,   204,    91,   200,   200,   201,   200,   204,
     204,   200,   200,   200,   201,   200,   200,   205,   200,   204,
     200,   200,   200,    42,    97,   219,   109,   199,   199,   199,
      20,    20,   198,   223,   204,   199,   240,   204,   199,   199,
       3,   283,     5,   148,     4,   289,     4,   289,   289,   199,
     200,     3,     3,     3,     3,     3,   251,   200,   199,   277,
      53,    87,   130,   164,   204,   199,   199,   199,     3,   225,
     225,   199,   283,   292,   278,   290,    37,    73,   217,   201,
     116,   201,   162,    20,   200,   201,   264,   204,   204,   200,
      65,    66,    70,    72,    93,    94,    96,   175,   176,   204,
     200,   204,   216,   204,   220,     3,   243,   243,   243,   204,
     204,     3,   225,   200,     3,   280,     3,   279,   200,   201,
     200,     4,   204,   200,   200,   200,   201,   200,   251,   200,
     199,   110,   110,   199,   200,   280,   225,   225,   200,   201,
     200,   279,   200,   285,   222,   204,   204,   266,    74,   204,
      74,   204,   199,   200,   200,   200,   217,   174,   201,   218,
     223,   200,   201,   200,   200,    20,   200,    18,   200,   201,
     200,   201,     3,   200,     3,   200,   292,   204,   199,   199,
     283,   200,   200,   200,     3,   200,    18,    36,    47,    53,
      54,    74,   110,   124,   130,   164,   265,   137,   204,   106,
     224,     3,   204,   168,   134,     3,     3,   200,   200,   280,
     279,   200,   134,   124,   199,     3,   199,     4,     4,     5,
       6,     7,    48,   194,   195,   196,   110,   110,   200,   217,
     225,     3,   200,   200,     3,     5,    53,   130,   164,   204,
     199,   199,   199,   199,   134,   198,   199,   200,   201,   199,
     110,   200,   200,   200,   200,     3,   281,     3,     3,   281,
       5,   204,   200,   201,   198,   199,   199,   200,   200,   200,
     282,     3,     3,   281,   281,   282,    18,    60,   118,   126,
     199,   200,   200,    18,    60,   168,    99,    89,   129,   145,
      68,   162,   281,   282,   282,    61,    98,    50,   123,   136,
     148,    50,   123,   136,   148,   200,    74,   124,    74,   124,
     282
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
#line 295 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 301 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 302 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 304 "parser/evoparser.y"
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
#line 322 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 330 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 338 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 344 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 351 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 352 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 353 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 354 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 355 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 356 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 357 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 358 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 359 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 360 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 361 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 362 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 363 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 364 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 365 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 366 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 367 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 369 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 374 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 375 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 376 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 377 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 380 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 381 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 382 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 383 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 384 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 387 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 388 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 391 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_inListCount < MAX_IN_LIST) g_inListExprs[g_inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 392 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_inListCount; _i>0; _i--) g_inListExprs[_i]=g_inListExprs[_i-1]; g_inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_inListCount++; } ;}
    break;

  case 43:
#line 395 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 399 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 46:
#line 399 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 47:
#line 400 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 48:
#line 400 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 49:
#line 401 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 402 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 403 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 407 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 411 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 412 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 413 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 414 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 415 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 416 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 418 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 419 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 420 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 421 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 422 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 423 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 424 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 425 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 426 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 427 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 428 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 429 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 430 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 431 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 438 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 445 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 454 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 76:
#line 455 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 77:
#line 456 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 78:
#line 459 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 79:
#line 460 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 80:
#line 463 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 81:
#line 464 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 82:
#line 465 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 83:
#line 466 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 84:
#line 467 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 85:
#line 468 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 86:
#line 469 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 87:
#line 470 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 88:
#line 471 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 89:
#line 475 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_caseWhenCount, NULL); ;}
    break;

  case 90:
#line 477 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 91:
#line 479 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, NULL); ;}
    break;

  case 92:
#line 481 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 93:
#line 485 "parser/evoparser.y"
    {
        g_caseWhenCount = 0;
        g_caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 94:
#line 493 "parser/evoparser.y"
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
#line 503 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 96:
#line 504 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 97:
#line 507 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 98:
#line 508 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 99:
#line 512 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 100:
#line 520 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 528 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 539 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 103:
#line 548 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_selectDistinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 104:
#line 553 "parser/evoparser.y"
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
#line 564 "parser/evoparser.y"
    { emit("WHERE"); g_whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 108:
#line 566 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 109:
#line 569 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_groupByCount = 0;
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 110:
#line 576 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 111:
#line 584 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 112:
#line 585 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 586 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 114:
#line 589 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 115:
#line 590 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 117:
#line 594 "parser/evoparser.y"
    { emit("HAVING"); g_havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 122:
#line 606 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 123:
#line 613 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 124:
#line 614 "parser/evoparser.y"
    { emit("LIMIT 1"); g_limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 125:
#line 615 "parser/evoparser.y"
    { emit("LIMIT 2"); g_offsetExpr = (yyvsp[(2) - (4)].exprval); g_limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 126:
#line 616 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_limitExpr = (yyvsp[(2) - (4)].exprval); g_offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 128:
#line 620 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 129:
#line 623 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 130:
#line 624 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 131:
#line 627 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 132:
#line 628 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 133:
#line 629 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 134:
#line 630 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 135:
#line 631 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 136:
#line 632 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 137:
#line 633 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 138:
#line 634 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 139:
#line 635 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 140:
#line 638 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 141:
#line 639 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 142:
#line 641 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 143:
#line 649 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 144:
#line 654 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 145:
#line 655 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 146:
#line 656 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 147:
#line 659 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 148:
#line 660 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 151:
#line 669 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 152:
#line 674 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 153:
#line 675 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 154:
#line 676 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 157:
#line 685 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 158:
#line 687 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 159:
#line 689 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 160:
#line 691 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 161:
#line 693 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 162:
#line 696 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 163:
#line 697 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 164:
#line 698 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 165:
#line 701 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 166:
#line 702 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 167:
#line 705 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 168:
#line 706 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 169:
#line 709 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 170:
#line 710 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 171:
#line 711 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 174:
#line 718 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 175:
#line 719 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 176:
#line 724 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 177:
#line 726 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 178:
#line 728 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 180:
#line 732 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 181:
#line 733 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 182:
#line 736 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 183:
#line 737 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 184:
#line 740 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 185:
#line 745 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 186:
#line 753 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 187:
#line 760 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 188:
#line 761 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 189:
#line 762 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 190:
#line 763 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 191:
#line 767 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 192:
#line 770 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 193:
#line 771 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 196:
#line 776 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 197:
#line 781 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 198:
#line 788 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_dropIfExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 199:
#line 795 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_dropIfExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 200:
#line 805 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 201:
#line 812 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 202:
#line 819 "parser/evoparser.y"
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
#line 829 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 204:
#line 837 "parser/evoparser.y"
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
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 206:
#line 854 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 207:
#line 859 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 208:
#line 865 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 209:
#line 872 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 210:
#line 879 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 211:
#line 886 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 212:
#line 896 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 213:
#line 903 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 214:
#line 912 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 215:
#line 919 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 216:
#line 928 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 217:
#line 935 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 218:
#line 943 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 219:
#line 947 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 220:
#line 953 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 221:
#line 959 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 222:
#line 966 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 223:
#line 972 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 224:
#line 979 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 225:
#line 985 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 226:
#line 991 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 227:
#line 997 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 228:
#line 1003 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 229:
#line 1009 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 230:
#line 1017 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 231:
#line 1024 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 233:
#line 1032 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 234:
#line 1035 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 235:
#line 1036 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 236:
#line 1037 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 237:
#line 1038 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 238:
#line 1039 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 242:
#line 1046 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 243:
#line 1050 "parser/evoparser.y"
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

  case 244:
#line 1060 "parser/evoparser.y"
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

  case 245:
#line 1072 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 246:
#line 1073 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 247:
#line 1073 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 248:
#line 1076 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 249:
#line 1077 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 250:
#line 1078 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 251:
#line 1079 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 252:
#line 1083 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 253:
#line 1086 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 254:
#line 1087 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 255:
#line 1088 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 256:
#line 1089 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 257:
#line 1095 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 258:
#line 1101 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 259:
#line 1106 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 260:
#line 1111 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 261:
#line 1116 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 262:
#line 1123 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 263:
#line 1128 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 264:
#line 1129 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 265:
#line 1130 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 266:
#line 1135 "parser/evoparser.y"
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

  case 267:
#line 1146 "parser/evoparser.y"
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

  case 268:
#line 1157 "parser/evoparser.y"
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

  case 269:
#line 1168 "parser/evoparser.y"
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

  case 270:
#line 1181 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 271:
#line 1185 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 272:
#line 1186 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 273:
#line 1189 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 274:
#line 1190 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 275:
#line 1194 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 276:
#line 1199 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 277:
#line 1201 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 278:
#line 1203 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 279:
#line 1205 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 280:
#line 1207 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 281:
#line 1211 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 282:
#line 1215 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 283:
#line 1216 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 284:
#line 1221 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 285:
#line 1229 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        g_isTemporary = (yyvsp[(2) - (8)].intval);
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 286:
#line 1238 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); g_isTemporary = (yyvsp[(2) - (10)].intval); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 287:
#line 1243 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 288:
#line 1247 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 289:
#line 1252 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 290:
#line 1256 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 291:
#line 1259 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 292:
#line 1260 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 293:
#line 1263 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 294:
#line 1264 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 295:
#line 1267 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 296:
#line 1268 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 297:
#line 1269 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 298:
#line 1270 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 299:
#line 1271 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 300:
#line 1272 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 301:
#line 1273 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 302:
#line 1274 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 303:
#line 1276 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 304:
#line 1278 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 305:
#line 1280 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 306:
#line 1282 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 307:
#line 1284 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 308:
#line 1286 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 309:
#line 1289 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 310:
#line 1290 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 311:
#line 1293 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 312:
#line 1294 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 313:
#line 1297 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 314:
#line 1298 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 316:
#line 1302 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 317:
#line 1303 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 318:
#line 1304 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 319:
#line 1305 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 320:
#line 1306 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 321:
#line 1307 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 322:
#line 1308 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 323:
#line 1309 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 324:
#line 1310 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 325:
#line 1311 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 326:
#line 1312 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 327:
#line 1313 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 328:
#line 1314 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 329:
#line 1315 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 330:
#line 1316 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 331:
#line 1317 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 332:
#line 1318 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 333:
#line 1321 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 334:
#line 1322 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 335:
#line 1325 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 336:
#line 1327 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 337:
#line 1335 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 338:
#line 1336 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 340:
#line 1338 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 341:
#line 1339 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 342:
#line 1340 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 343:
#line 1341 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 344:
#line 1342 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 345:
#line 1343 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 346:
#line 1344 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 347:
#line 1345 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 348:
#line 1346 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 349:
#line 1347 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 350:
#line 1348 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 351:
#line 1349 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 352:
#line 1350 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 353:
#line 1351 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 354:
#line 1352 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 355:
#line 1353 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 356:
#line 1354 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 357:
#line 1355 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 358:
#line 1356 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 359:
#line 1357 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 360:
#line 1360 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 361:
#line 1361 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 362:
#line 1362 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 363:
#line 1365 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 364:
#line 1366 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 365:
#line 1369 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 366:
#line 1370 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 367:
#line 1371 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 369:
#line 1375 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 370:
#line 1376 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 371:
#line 1380 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 372:
#line 1381 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 373:
#line 1382 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 374:
#line 1383 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 375:
#line 1384 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 376:
#line 1385 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 377:
#line 1386 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 378:
#line 1387 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 379:
#line 1388 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 380:
#line 1389 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 381:
#line 1390 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 382:
#line 1391 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 383:
#line 1392 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 384:
#line 1393 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 385:
#line 1394 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 386:
#line 1395 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 387:
#line 1396 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 388:
#line 1397 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 389:
#line 1398 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 390:
#line 1399 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 391:
#line 1400 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 392:
#line 1401 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 393:
#line 1402 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 394:
#line 1403 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 395:
#line 1404 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 396:
#line 1405 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 397:
#line 1406 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 398:
#line 1407 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 399:
#line 1408 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 400:
#line 1409 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 401:
#line 1410 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 402:
#line 1411 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 403:
#line 1414 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 404:
#line 1415 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 405:
#line 1419 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 406:
#line 1422 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 407:
#line 1423 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 408:
#line 1424 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 409:
#line 1428 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 410:
#line 1431 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 411:
#line 1432 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 415:
#line 1436 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 416:
#line 1437 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5249 "parser/evoparser.tab.c"
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


#line 1440 "parser/evoparser.y"

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
