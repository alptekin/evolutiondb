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
     CURRENT_TIMESTAMP = 293,
     CREATE = 294,
     CROSS = 295,
     CASE = 296,
     CHECK = 297,
     COMMENT = 298,
     CURRENT_DATE = 299,
     CURRENT_TIME = 300,
     CHAR = 301,
     COLLATE = 302,
     DATABASE = 303,
     DELAYED = 304,
     DAY_HOUR = 305,
     DAY_MICROSECOND = 306,
     DISTINCT = 307,
     DELETE = 308,
     DROP = 309,
     DAY_MINUTE = 310,
     DISTINCTROW = 311,
     DAY_SECOND = 312,
     DESC = 313,
     DEFAULT = 314,
     DOUBLE = 315,
     DATETIME = 316,
     DECIMAL = 317,
     DATE = 318,
     ESCAPED = 319,
     ENUM = 320,
     END = 321,
     ELSE = 322,
     FLOAT = 323,
     FORCE = 324,
     FROM = 325,
     FULLTEXT = 326,
     FOR = 327,
     GROUP = 328,
     HOUR_MINUTE = 329,
     HOUR_MICROSECOND = 330,
     HIGH_PRIORITY = 331,
     HOUR_SECOND = 332,
     HAVING = 333,
     INTEGER = 334,
     INNER = 335,
     IGNORE = 336,
     INDEX = 337,
     IF = 338,
     INSERT = 339,
     INTO = 340,
     INT = 341,
     INTERVAL = 342,
     JOIN = 343,
     KEY = 344,
     LONGTEXT = 345,
     LOW_PRIORITY = 346,
     LEFT = 347,
     LEADING = 348,
     LIMIT = 349,
     OFFSET = 350,
     LONGBLOB = 351,
     MEDIUMTEXT = 352,
     MEDIUMBLOB = 353,
     MEDIUMINT = 354,
     NATURAL = 355,
     NULLX = 356,
     OUTER = 357,
     ON = 358,
     ORDER = 359,
     ONDUPLICATE = 360,
     PRIMARY = 361,
     QUICK = 362,
     REAL = 363,
     ROLLUP = 364,
     RIGHT = 365,
     REPLACE = 366,
     SQL_SMALL_RESULT = 367,
     SCHEMA = 368,
     SOME = 369,
     SQL_CALC_FOUND_ROWS = 370,
     SQL_BIG_RESULT = 371,
     STRAIGHT_JOIN = 372,
     SMALLINT = 373,
     SET = 374,
     SELECT = 375,
     TINYTEXT = 376,
     TINYINT = 377,
     TEMPORARY = 378,
     TEXT = 379,
     TIMESTAMP = 380,
     TABLE = 381,
     THEN = 382,
     TRAILING = 383,
     TRUNCATE = 384,
     TINYBLOB = 385,
     TIME = 386,
     UPDATE = 387,
     UNSIGNED = 388,
     UNIQUE = 389,
     USING = 390,
     USE = 391,
     VARCHAR = 392,
     VALUES = 393,
     VARBINARY = 394,
     WHERE = 395,
     WHEN = 396,
     WITH = 397,
     YEAR = 398,
     YEAR_MONTH = 399,
     ZEROFILL = 400,
     EXISTS = 401,
     FSUBSTRING = 402,
     FTRIM = 403,
     FDATE_ADD = 404,
     FDATE_SUB = 405,
     FCOUNT = 406,
     FSUM = 407,
     FAVG = 408,
     FMIN = 409,
     FMAX = 410,
     FUPPER = 411,
     FLOWER = 412,
     FLENGTH = 413,
     FCONCAT = 414,
     FREPLACE = 415,
     FCOALESCE = 416
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
#define CURRENT_TIMESTAMP 293
#define CREATE 294
#define CROSS 295
#define CASE 296
#define CHECK 297
#define COMMENT 298
#define CURRENT_DATE 299
#define CURRENT_TIME 300
#define CHAR 301
#define COLLATE 302
#define DATABASE 303
#define DELAYED 304
#define DAY_HOUR 305
#define DAY_MICROSECOND 306
#define DISTINCT 307
#define DELETE 308
#define DROP 309
#define DAY_MINUTE 310
#define DISTINCTROW 311
#define DAY_SECOND 312
#define DESC 313
#define DEFAULT 314
#define DOUBLE 315
#define DATETIME 316
#define DECIMAL 317
#define DATE 318
#define ESCAPED 319
#define ENUM 320
#define END 321
#define ELSE 322
#define FLOAT 323
#define FORCE 324
#define FROM 325
#define FULLTEXT 326
#define FOR 327
#define GROUP 328
#define HOUR_MINUTE 329
#define HOUR_MICROSECOND 330
#define HIGH_PRIORITY 331
#define HOUR_SECOND 332
#define HAVING 333
#define INTEGER 334
#define INNER 335
#define IGNORE 336
#define INDEX 337
#define IF 338
#define INSERT 339
#define INTO 340
#define INT 341
#define INTERVAL 342
#define JOIN 343
#define KEY 344
#define LONGTEXT 345
#define LOW_PRIORITY 346
#define LEFT 347
#define LEADING 348
#define LIMIT 349
#define OFFSET 350
#define LONGBLOB 351
#define MEDIUMTEXT 352
#define MEDIUMBLOB 353
#define MEDIUMINT 354
#define NATURAL 355
#define NULLX 356
#define OUTER 357
#define ON 358
#define ORDER 359
#define ONDUPLICATE 360
#define PRIMARY 361
#define QUICK 362
#define REAL 363
#define ROLLUP 364
#define RIGHT 365
#define REPLACE 366
#define SQL_SMALL_RESULT 367
#define SCHEMA 368
#define SOME 369
#define SQL_CALC_FOUND_ROWS 370
#define SQL_BIG_RESULT 371
#define STRAIGHT_JOIN 372
#define SMALLINT 373
#define SET 374
#define SELECT 375
#define TINYTEXT 376
#define TINYINT 377
#define TEMPORARY 378
#define TEXT 379
#define TIMESTAMP 380
#define TABLE 381
#define THEN 382
#define TRAILING 383
#define TRUNCATE 384
#define TINYBLOB 385
#define TIME 386
#define UPDATE 387
#define UNSIGNED 388
#define UNIQUE 389
#define USING 390
#define USE 391
#define VARCHAR 392
#define VALUES 393
#define VARBINARY 394
#define WHERE 395
#define WHEN 396
#define WITH 397
#define YEAR 398
#define YEAR_MONTH 399
#define ZEROFILL 400
#define EXISTS 401
#define FSUBSTRING 402
#define FTRIM 403
#define FDATE_ADD 404
#define FDATE_SUB 405
#define FCOUNT 406
#define FSUM 407
#define FAVG 408
#define FMIN 409
#define FMAX 410
#define FUPPER 411
#define FLOWER 412
#define FLENGTH 413
#define FCONCAT 414
#define FREPLACE 415
#define FCOALESCE 416




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
#line 443 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 456 "parser/evoparser.tab.c"

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2445

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  343
/* YYNRULES -- Number of states.  */
#define YYNSTATES  736

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   416

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     173,   174,    26,    24,   175,    25,   172,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   171,
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
     164,   165,   166,   167,   168,   169,   170
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
     312,   321,   328,   330,   332,   334,   341,   348,   352,   356,
     360,   364,   368,   372,   376,   380,   384,   389,   396,   400,
     406,   411,   417,   421,   426,   430,   435,   437,   439,   441,
     443,   447,   459,   460,   463,   464,   469,   472,   477,   478,
     480,   482,   483,   486,   487,   490,   491,   495,   497,   501,
     504,   505,   508,   513,   518,   519,   522,   524,   528,   529,
     532,   535,   538,   541,   544,   547,   550,   553,   555,   559,
     561,   564,   567,   569,   570,   572,   576,   578,   580,   584,
     590,   594,   598,   600,   601,   607,   611,   617,   624,   630,
     631,   633,   635,   636,   638,   640,   642,   645,   648,   649,
     650,   652,   655,   660,   667,   674,   681,   682,   685,   686,
     688,   692,   696,   698,   706,   709,   712,   715,   716,   723,
     726,   731,   732,   735,   743,   745,   749,   751,   760,   762,
     766,   768,   772,   774,   783,   784,   789,   790,   793,   796,
     799,   802,   804,   805,   806,   810,   812,   816,   820,   821,
     828,   830,   832,   836,   840,   848,   852,   856,   862,   868,
     870,   879,   887,   895,   897,   906,   907,   910,   913,   917,
     923,   929,   937,   939,   944,   949,   950,   953,   955,   958,
     962,   964,   973,   984,   994,  1001,  1013,  1022,  1023,  1025,
    1027,  1031,  1037,  1042,  1047,  1053,  1059,  1064,  1066,  1070,
    1071,  1076,  1077,  1081,  1084,  1088,  1092,  1096,  1100,  1103,
    1111,  1117,  1123,  1127,  1130,  1134,  1137,  1141,  1147,  1148,
    1152,  1158,  1159,  1161,  1162,  1165,  1168,  1169,  1174,  1178,
    1181,  1185,  1189,  1193,  1197,  1201,  1205,  1209,  1213,  1217,
    1221,  1223,  1225,  1227,  1229,  1231,  1235,  1241,  1244,  1249,
    1251,  1253,  1255,  1257,  1261,  1265,  1269,  1273,  1279,  1285,
    1287,  1289,  1293,  1297,  1298,  1300,  1302,  1304,  1308,  1312,
    1315,  1317,  1321,  1325
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     177,     0,    -1,   186,   171,    -1,   186,   171,   177,    -1,
       3,    -1,     3,   172,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   110,    -1,   178,    24,
     178,    -1,   178,    25,   178,    -1,   178,    26,   178,    -1,
     178,    27,   178,    -1,   178,    28,   178,    -1,   178,    29,
     178,    -1,    25,   178,    -1,   173,   178,   174,    -1,   178,
      12,   178,    -1,   178,    10,   178,    -1,   178,    11,   178,
      -1,   178,    21,   178,    -1,   178,    22,   178,    -1,   178,
      30,   178,    -1,   178,    23,   178,    -1,    18,   178,    -1,
      17,   178,    -1,   178,    20,   178,    -1,   178,    20,   173,
     187,   174,    -1,   178,    20,    35,   173,   187,   174,    -1,
     178,    20,   123,   173,   187,   174,    -1,   178,    20,    34,
     173,   187,   174,    -1,   178,    15,   110,    -1,   178,    15,
      18,   110,    -1,   178,    15,     6,    -1,   178,    15,    18,
       6,    -1,     8,     9,   178,    -1,   178,    19,   178,    38,
     178,    -1,   178,    18,    19,   178,    38,   178,    -1,   178,
      -1,   178,   175,   179,    -1,    -1,   179,    -1,    -1,   178,
      16,   173,   181,   179,   174,    -1,    -1,   178,    18,    16,
     173,   182,   179,   174,    -1,   178,    16,   173,   187,   174,
      -1,   178,    18,    16,   173,   187,   174,    -1,   155,   173,
     187,   174,    -1,     3,   173,   180,   174,    -1,   160,   173,
      26,   174,    -1,   160,   173,   178,   174,    -1,   161,   173,
     178,   174,    -1,   162,   173,   178,   174,    -1,   163,   173,
     178,   174,    -1,   164,   173,   178,   174,    -1,   156,   173,
     178,   175,   178,   175,   178,   174,    -1,   156,   173,   178,
     175,   178,   174,    -1,   156,   173,   178,    79,   178,   174,
      -1,   156,   173,   178,    79,   178,    81,   178,   174,    -1,
     157,   173,   178,   174,    -1,   157,   173,   183,   178,    79,
     178,   174,    -1,   157,   173,   183,    79,   178,   174,    -1,
     165,   173,   178,   174,    -1,   166,   173,   178,   174,    -1,
     167,   173,   178,   174,    -1,   168,   173,   178,   175,   178,
     174,    -1,   169,   173,   178,   175,   178,   175,   178,   174,
      -1,   170,   173,   178,   175,   178,   174,    -1,   102,    -1,
     137,    -1,    44,    -1,   158,   173,   178,   175,   184,   174,
      -1,   159,   173,   178,   175,   184,   174,    -1,    96,   178,
      59,    -1,    96,   178,    60,    -1,    96,   178,    64,    -1,
      96,   178,    66,    -1,    96,   178,   153,    -1,    96,   178,
     152,    -1,    96,   178,    84,    -1,    96,   178,    83,    -1,
      96,   178,    86,    -1,    50,   178,   185,    75,    -1,    50,
     178,   185,    76,   178,    75,    -1,    50,   185,    75,    -1,
      50,   185,    76,   178,    75,    -1,   150,   178,   136,   178,
      -1,   185,   150,   178,   136,   178,    -1,   178,    14,   178,
      -1,   178,    18,    14,   178,    -1,   178,    13,   178,    -1,
     178,    18,    13,   178,    -1,    47,    -1,    53,    -1,    54,
      -1,   187,    -1,   129,   200,   201,    -1,   129,   200,   201,
      79,   204,   188,   189,   193,   194,   197,   198,    -1,    -1,
     149,   178,    -1,    -1,    82,    42,   190,   192,    -1,   178,
     191,    -1,   190,   175,   178,   191,    -1,    -1,    37,    -1,
      67,    -1,    -1,   151,   118,    -1,    -1,    87,   178,    -1,
      -1,   113,    42,   195,    -1,   196,    -1,   195,   175,   196,
      -1,     3,   191,    -1,    -1,   103,   178,    -1,   103,   178,
     175,   178,    -1,   103,   178,   104,   178,    -1,    -1,    94,
     199,    -1,     3,    -1,   199,   175,     3,    -1,    -1,   200,
      34,    -1,   200,    61,    -1,   200,    65,    -1,   200,    85,
      -1,   200,   126,    -1,   200,   121,    -1,   200,   125,    -1,
     200,   124,    -1,   202,    -1,   201,   175,   202,    -1,    26,
      -1,   178,   203,    -1,    39,     3,    -1,     3,    -1,    -1,
     205,    -1,   204,   175,   205,    -1,   206,    -1,   208,    -1,
       3,   203,   215,    -1,     3,   172,     3,   203,   215,    -1,
     218,   207,     3,    -1,   173,   204,   174,    -1,    39,    -1,
      -1,   205,   209,    97,   206,   213,    -1,   205,   126,   206,
      -1,   205,   126,   206,   112,   178,    -1,   205,   211,   210,
      97,   206,   214,    -1,   205,   109,   212,    97,   206,    -1,
      -1,    89,    -1,    49,    -1,    -1,   111,    -1,   101,    -1,
     119,    -1,   101,   210,    -1,   119,   210,    -1,    -1,    -1,
     214,    -1,   112,   178,    -1,   144,   173,   199,   174,    -1,
     145,    98,   216,   173,   217,   174,    -1,    90,    98,   216,
     173,   217,   174,    -1,    78,    98,   216,   173,   217,   174,
      -1,    -1,    81,    97,    -1,    -1,     3,    -1,   217,   175,
       3,    -1,   173,   187,   174,    -1,   219,    -1,    62,   220,
      79,     3,   188,   194,   197,    -1,   220,   100,    -1,   220,
     116,    -1,   220,    90,    -1,    -1,    62,   220,   221,    79,
     204,   188,    -1,     3,   222,    -1,   221,   175,     3,   222,
      -1,    -1,   172,    26,    -1,    62,   220,    79,   221,   144,
     204,   188,    -1,   223,    -1,    63,   135,     3,    -1,   224,
      -1,    48,    91,     3,   112,     3,   173,     3,   174,    -1,
     225,    -1,    63,    91,     3,    -1,   226,    -1,   138,   135,
       3,    -1,   227,    -1,    93,   229,   230,     3,   231,   147,
     233,   228,    -1,    -1,   114,    98,   141,   236,    -1,    -1,
     229,   100,    -1,   229,    58,    -1,   229,    85,    -1,   229,
      90,    -1,    94,    -1,    -1,    -1,   173,   232,   174,    -1,
       3,    -1,   232,   175,     3,    -1,   173,   235,   174,    -1,
      -1,   233,   175,   234,   173,   235,   174,    -1,   178,    -1,
      68,    -1,   235,   175,   178,    -1,   235,   175,    68,    -1,
      93,   229,   230,     3,   128,   236,   228,    -1,     3,    20,
     178,    -1,     3,    20,    68,    -1,   236,   175,     3,    20,
     178,    -1,   236,   175,     3,    20,    68,    -1,   237,    -1,
     120,   229,   230,     3,   231,   147,   233,   228,    -1,   120,
     229,   230,     3,   128,   236,   228,    -1,   120,   229,   230,
       3,   231,   187,   228,    -1,   238,    -1,   141,   239,   204,
     128,   240,   188,   194,   197,    -1,    -1,   229,   100,    -1,
     229,    90,    -1,     3,    20,   178,    -1,     3,   172,     3,
      20,   178,    -1,   240,   175,     3,    20,   178,    -1,   240,
     175,     3,   172,     3,    20,   178,    -1,   241,    -1,    48,
      57,   242,     3,    -1,    48,   122,   242,     3,    -1,    -1,
      92,   155,    -1,   243,    -1,   145,     3,    -1,   145,    57,
       3,    -1,   244,    -1,    48,   245,   135,   242,     3,   173,
     246,   174,    -1,    48,   245,   135,   242,     3,   172,     3,
     173,   246,   174,    -1,    48,   245,   135,   242,     3,   173,
     246,   174,   257,    -1,    48,   245,   135,   242,     3,   257,
      -1,    48,   245,   135,   242,     3,   172,     3,   173,   246,
     174,   257,    -1,    48,   245,   135,   242,     3,   172,     3,
     257,    -1,    -1,   132,    -1,   247,    -1,   246,   175,   247,
      -1,   115,    98,   173,   248,   174,    -1,    98,   173,   199,
     174,    -1,    91,   173,   199,   174,    -1,    80,    91,   173,
     199,   174,    -1,    80,    98,   173,   199,   174,    -1,    51,
     173,   178,   174,    -1,     3,    -1,   248,   175,     3,    -1,
      -1,   249,     3,   255,   250,    -1,    -1,   250,    18,   110,
      -1,   250,   110,    -1,   250,    68,     4,    -1,   250,    68,
       5,    -1,   250,    68,     7,    -1,   250,    68,     6,    -1,
     250,    36,    -1,   250,    36,   173,     5,   175,     5,   174,
      -1,   250,    36,   173,     5,   174,    -1,   250,   143,   173,
     199,   174,    -1,   250,   143,    98,    -1,   250,   143,    -1,
     250,   115,    98,    -1,   250,    98,    -1,   250,    52,     4,
      -1,   250,    51,   173,   178,   174,    -1,    -1,   173,     5,
     174,    -1,   173,     5,   175,     5,   174,    -1,    -1,    43,
      -1,    -1,   253,   142,    -1,   253,   154,    -1,    -1,   254,
      55,   128,     4,    -1,   254,    56,     4,    -1,    46,   251,
      -1,   131,   251,   253,    -1,   127,   251,   253,    -1,   108,
     251,   253,    -1,    95,   251,   253,    -1,    88,   251,   253,
      -1,    45,   251,   253,    -1,   117,   251,   253,    -1,    69,
     251,   253,    -1,    77,   251,   253,    -1,    71,   251,   253,
      -1,    72,    -1,   140,    -1,   134,    -1,    70,    -1,   152,
      -1,    55,   251,   254,    -1,   146,   173,     5,   174,   254,
      -1,    43,   251,    -1,   148,   173,     5,   174,    -1,   139,
      -1,    40,    -1,   107,    -1,   105,    -1,   130,   252,   254,
      -1,   133,   252,   254,    -1,   106,   252,   254,    -1,    99,
     252,   254,    -1,    74,   173,   256,   174,   254,    -1,   128,
     173,   256,   174,   254,    -1,    41,    -1,     4,    -1,   256,
     175,     4,    -1,   258,   207,   187,    -1,    -1,    90,    -1,
     120,    -1,   259,    -1,   128,   122,     3,    -1,   128,   122,
      68,    -1,   128,   260,    -1,   261,    -1,   260,   175,   261,
      -1,     8,    20,   178,    -1,     8,     9,   178,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   262,   262,   263,   268,   275,   276,   277,   295,   303,
     311,   317,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     348,   349,   350,   351,   354,   355,   356,   357,   358,   361,
     362,   365,   366,   369,   370,   373,   373,   374,   374,   375,
     376,   377,   381,   385,   386,   387,   388,   389,   390,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   407,   408,   409,   412,   413,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   427,   429,   431,   433,
     437,   445,   456,   457,   460,   461,   464,   465,   466,   470,
     480,   481,   495,   496,   497,   498,   501,   508,   516,   517,
     518,   521,   522,   525,   526,   529,   530,   533,   534,   537,
     545,   546,   547,   548,   551,   552,   555,   556,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   570,   571,   572,
     580,   586,   587,   588,   591,   592,   595,   596,   600,   606,
     607,   608,   611,   612,   616,   618,   620,   622,   624,   628,
     629,   630,   633,   634,   637,   638,   641,   642,   643,   646,
     647,   650,   651,   655,   657,   659,   661,   664,   665,   668,
     669,   672,   676,   684,   692,   693,   694,   695,   699,   702,
     703,   706,   706,   708,   712,   719,   728,   735,   746,   753,
     762,   769,   777,   784,   792,   793,   796,   797,   798,   799,
     800,   803,   803,   806,   807,   810,   820,   833,   834,   834,
     837,   838,   839,   840,   843,   847,   848,   849,   850,   856,
     859,   865,   870,   876,   882,   889,   890,   891,   895,   906,
     917,   928,   942,   946,   947,   950,   951,   955,   959,   960,
     964,   971,   980,   984,   989,   993,   998,  1002,  1003,  1006,
    1007,  1010,  1011,  1012,  1013,  1014,  1015,  1018,  1019,  1022,
    1022,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,
    1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1051,  1052,
    1053,  1056,  1057,  1060,  1061,  1062,  1065,  1066,  1067,  1071,
    1072,  1073,  1074,  1075,  1076,  1077,  1078,  1079,  1080,  1081,
    1082,  1083,  1084,  1085,  1086,  1087,  1088,  1089,  1090,  1091,
    1092,  1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,
    1104,  1105,  1108,  1112,  1113,  1114,  1118,  1121,  1122,  1123,
    1124,  1124,  1126,  1127
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
  "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT", "CURRENT_TIMESTAMP",
  "CREATE", "CROSS", "CASE", "CHECK", "COMMENT", "CURRENT_DATE",
  "CURRENT_TIME", "CHAR", "COLLATE", "DATABASE", "DELAYED", "DAY_HOUR",
  "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP", "DAY_MINUTE",
  "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE", "DATETIME",
  "DECIMAL", "DATE", "ESCAPED", "ENUM", "END", "ELSE", "FLOAT", "FORCE",
  "FROM", "FULLTEXT", "FOR", "GROUP", "HOUR_MINUTE", "HOUR_MICROSECOND",
  "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "INTEGER", "INNER", "IGNORE",
  "INDEX", "IF", "INSERT", "INTO", "INT", "INTERVAL", "JOIN", "KEY",
  "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "OFFSET",
  "LONGBLOB", "MEDIUMTEXT", "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NULLX",
  "OUTER", "ON", "ORDER", "ONDUPLICATE", "PRIMARY", "QUICK", "REAL",
  "ROLLUP", "RIGHT", "REPLACE", "SQL_SMALL_RESULT", "SCHEMA", "SOME",
  "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT", "STRAIGHT_JOIN", "SMALLINT",
  "SET", "SELECT", "TINYTEXT", "TINYINT", "TEMPORARY", "TEXT", "TIMESTAMP",
  "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME", "UPDATE",
  "UNSIGNED", "UNIQUE", "USING", "USE", "VARCHAR", "VALUES", "VARBINARY",
  "WHERE", "WHEN", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS",
  "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT", "FSUM",
  "FAVG", "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH", "FCONCAT",
  "FREPLACE", "FCOALESCE", "';'", "'.'", "'('", "')'", "','", "$accept",
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
  "opt_dot_star", "drop_table_stmt", "create_index_stmt",
  "drop_index_stmt", "truncate_table_stmt", "insert_stmt",
  "opt_ondupupdate", "insert_opts", "opt_into", "opt_col_names",
  "insert_col_list", "insert_vals_list", "@3", "insert_vals",
  "insert_asgn_list", "replace_stmt", "update_stmt", "update_opts",
  "update_asgn_list", "create_database_stmt", "opt_if_not_exists",
  "use_database_stmt", "create_table_stmt", "opt_temporary",
  "create_col_list", "create_definition", "pk_column_list", "@4",
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
     416,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   176,   177,   177,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   179,   179,   180,   180,   181,   178,   182,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   183,   183,   183,   178,   178,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   178,   178,   178,   178,
     185,   185,   178,   178,   178,   178,   178,   178,   178,   186,
     187,   187,   188,   188,   189,   189,   190,   190,   191,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     197,   197,   197,   197,   198,   198,   199,   199,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   201,   201,   201,
     202,   203,   203,   203,   204,   204,   205,   205,   206,   206,
     206,   206,   207,   207,   208,   208,   208,   208,   208,   209,
     209,   209,   210,   210,   211,   211,   212,   212,   212,   213,
     213,   214,   214,   215,   215,   215,   215,   216,   216,   217,
     217,   218,   186,   219,   220,   220,   220,   220,   219,   221,
     221,   222,   222,   219,   186,   223,   186,   224,   186,   225,
     186,   226,   186,   227,   228,   228,   229,   229,   229,   229,
     229,   230,   230,   231,   231,   232,   232,   233,   234,   233,
     235,   235,   235,   235,   227,   236,   236,   236,   236,   186,
     237,   237,   237,   186,   238,   239,   239,   239,   240,   240,
     240,   240,   186,   241,   241,   242,   242,   186,   243,   243,
     186,   244,   244,   244,   244,   244,   244,   245,   245,   246,
     246,   247,   247,   247,   247,   247,   247,   248,   248,   249,
     247,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   251,   251,
     251,   252,   252,   253,   253,   253,   254,   254,   254,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     256,   256,   257,   258,   258,   258,   186,   259,   259,   259,
     260,   260,   261,   261
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
       8,     6,     1,     1,     1,     6,     6,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     6,     3,     5,
       4,     5,     3,     4,     3,     4,     1,     1,     1,     1,
       3,    11,     0,     2,     0,     4,     2,     4,     0,     1,
       1,     0,     2,     0,     2,     0,     3,     1,     3,     2,
       0,     2,     4,     4,     0,     2,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       2,     2,     1,     0,     1,     3,     1,     1,     3,     5,
       3,     3,     1,     0,     5,     3,     5,     6,     5,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     0,
       1,     2,     4,     6,     6,     6,     0,     2,     0,     1,
       3,     3,     1,     7,     2,     2,     2,     0,     6,     2,
       4,     0,     2,     7,     1,     3,     1,     8,     1,     3,
       1,     3,     1,     8,     0,     4,     0,     2,     2,     2,
       2,     1,     0,     0,     3,     1,     3,     3,     0,     6,
       1,     1,     3,     3,     7,     3,     3,     5,     5,     1,
       8,     7,     7,     1,     8,     0,     2,     2,     3,     5,
       5,     7,     1,     4,     4,     0,     2,     1,     2,     3,
       1,     8,    10,     9,     6,    11,     8,     0,     1,     1,
       3,     5,     4,     4,     5,     5,     4,     1,     3,     0,
       4,     0,     3,     2,     3,     3,     3,     3,     2,     7,
       5,     5,     3,     2,     3,     2,     3,     5,     0,     3,
       5,     0,     1,     0,     2,     2,     0,     4,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     3,     5,     2,     4,     1,
       1,     1,     1,     3,     3,     3,     3,     5,     5,     1,
       1,     3,     3,     0,     1,     1,     1,     3,     3,     2,
       1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   257,   187,     0,   206,   206,     0,   128,     0,   206,
       0,     0,     0,    99,   182,   194,   196,   198,   200,   202,
     229,   233,   242,   247,   250,   336,   245,     0,   245,   258,
       0,     0,     0,     0,   212,   212,     0,     0,   339,   340,
       0,     0,     0,     0,   248,     0,     1,     2,     0,     0,
       0,     0,   245,   191,     0,   186,   184,   185,     0,   199,
     195,   208,   209,   210,   211,   207,     0,     0,     0,     0,
     337,   338,     0,     4,     7,     8,    10,     9,     6,     0,
       0,     0,   139,   129,    96,     0,    97,    98,   130,   131,
     132,    11,   134,   136,   135,   133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,   100,   137,   201,   210,   207,   143,
       0,     0,   144,   146,   147,   153,   249,     3,   246,   243,
       0,   244,     0,     0,   189,   102,     0,     0,     0,   213,
     213,   343,   342,   341,     0,    43,     0,    28,    27,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,   176,     0,     0,     0,
       0,   161,   160,   164,   168,   165,     0,     0,   162,   152,
       0,     0,   333,   192,     0,   115,     0,   102,   191,     0,
       0,     0,     0,     0,     5,    41,    44,     0,    38,     0,
       0,    88,     0,     0,     0,     0,    74,    72,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,    21,    22,    20,    94,
      92,    36,     0,    34,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    23,    24,    26,    12,    13,
      14,    15,    16,    17,    25,   141,   102,   138,   143,     0,
       0,     0,   148,   181,   151,     0,   102,   145,   162,   162,
       0,   155,     0,   163,     0,   150,     0,   334,   335,     0,
     269,   254,   153,   103,     0,   120,   102,   188,   190,     0,
     204,   215,     0,     0,   204,     0,   204,     0,    52,     0,
      86,     0,     0,     0,    51,     0,     0,    63,     0,     0,
       0,     0,    53,    54,    55,    56,    57,    58,    66,    67,
      68,     0,     0,     0,    37,    35,     0,     0,    95,    93,
      47,     0,     0,     0,     0,     0,     0,   104,   176,   178,
     178,   178,     0,     0,     0,   115,   166,   167,     0,     0,
     169,     0,     0,   333,     0,     0,     0,     0,     0,     0,
     259,     0,     0,     0,     0,   183,   193,     0,     0,     0,
     224,   214,     0,     0,   204,   231,   204,   232,    42,    90,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,    39,     0,
       0,     0,    30,     0,   113,   149,     0,     0,     0,     0,
     238,     0,     0,   120,   158,   156,     0,     0,   154,   170,
       0,   197,   269,   256,     0,     0,     0,     0,     0,     0,
     333,   269,     0,   332,   108,   116,   117,   121,   226,   225,
       0,     0,   216,   221,   220,     0,   218,   203,   230,    87,
      91,     0,    61,    60,     0,    65,     0,     0,    75,    76,
      69,     0,    71,    46,     0,    50,    40,    33,    31,    32,
       0,     0,   115,   177,     0,     0,     0,     0,     0,     0,
     234,   171,     0,   157,     0,     0,     0,     0,   126,     0,
       0,     0,   253,   260,   320,   329,   288,   288,   288,   288,
     288,   313,   288,   310,     0,   288,   288,   288,   291,   322,
     291,   321,   288,   288,   288,     0,   291,   288,   291,   312,
     319,   311,     0,     0,   314,   271,   109,   110,   119,     0,
       0,     0,     0,     0,   217,     0,     0,     0,     0,    64,
      77,    78,    79,    80,    84,    83,    85,    82,    81,     0,
      48,   108,   111,   114,   120,   179,     0,     0,     0,   239,
     240,     0,     0,   333,   266,     0,     0,   263,     0,   262,
     267,     0,     0,   317,   293,   299,   296,   293,   293,     0,
     293,   293,   293,   292,   296,   296,   293,   293,   293,     0,
     296,   293,   296,     0,     0,   270,   118,   123,   122,   205,
     228,   227,   223,   222,     0,    62,    59,    70,   106,     0,
       0,   105,   124,   175,     0,   174,   173,     0,   172,   255,
     264,   265,   127,   261,     0,     0,   305,   315,   307,   309,
     330,     0,   308,   304,   303,   326,   325,   302,   306,   301,
       0,   323,   300,   324,     0,     0,     0,   278,     0,     0,
       0,   285,   273,     0,   283,     0,   112,   108,     0,   101,
     180,   241,   268,   289,     0,   294,   295,     0,     0,   296,
       0,   296,   296,   318,   272,     0,     0,   286,   274,   275,
     277,   276,   284,   282,     0,   219,   107,   125,     0,     0,
     298,   327,   331,   328,   316,     0,     0,     0,   290,   297,
     280,     0,   287,   281,     0,   279
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,   225,   226,   227,   356,   425,   240,   418,   152,
      12,    13,   215,   434,   582,   558,   641,   502,   315,   465,
     466,   395,   689,   519,    40,   114,   115,   192,   121,   122,
     123,   210,   124,   207,   304,   208,   300,   448,   449,   292,
     437,   586,   125,    14,    31,    58,   134,    15,    16,    17,
      18,    19,   400,    34,    66,   221,   322,   404,   566,   475,
     320,    20,    21,    43,   296,    22,    49,    23,    24,    30,
     389,   390,   601,   391,   625,   603,   614,   656,   657,   555,
     661,   311,   312,    25,    38,    39
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -550
static const yytype_int16 yypact[] =
{
     271,   -27,  -550,    79,  -550,  -550,    15,  -550,   -73,     2,
     163,   187,    25,  -550,  -550,  -550,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,  -550,  -550,  -550,   106,   202,   106,  -550,
      77,    94,   215,   221,   262,   262,    35,   154,    66,  -550,
     377,   227,   259,     4,  -550,   241,  -550,   271,   127,   307,
     174,   313,   106,   122,   315,  -550,  -550,  -550,   -62,  -550,
    -550,  -550,  -550,  -550,  -550,  -550,   318,   327,  1274,  1274,
    -550,  -550,   330,  -102,  -550,  -550,  -550,  -550,   331,  1274,
    1274,  1274,  -550,  -550,  -550,   609,  -550,  -550,  -550,  -550,
    -550,  -550,  -550,  -550,  -550,  -550,   175,   185,   188,   192,
     213,   225,   228,   237,   240,   242,   253,   270,   300,   308,
     309,   310,  1274,  2343,   -20,  -550,  -550,     5,     8,    10,
       7,  -109,   234,  -550,  -550,   408,  -550,  -550,  -550,  -550,
     477,  -550,   496,   462,  -550,    59,  -106,     4,   497,  -110,
      31,  2415,  2415,  -550,   513,  1274,  1274,   485,   485,  -550,
    1274,  2026,   -54,   388,  1274,   548,  1274,  1274,   780,  1274,
    1274,  1274,  1274,  1274,  1274,  1274,  1274,  1274,  1274,  1576,
    -550,  1274,  1274,  1274,  1274,  1274,    19,   345,   274,  1274,
     571,  1274,  1274,  1274,  1274,  1274,  1274,  1274,  1274,  1274,
    1274,   516,  -550,     4,  1274,   519,   112,   350,    32,   523,
       4,  -550,  -550,  -550,   -68,  -550,     4,   430,   417,  -550,
     526,   357,   -74,  -550,  1274,   418,     4,    36,   122,   545,
     546,   410,   545,   -94,  -550,  1112,  -550,   384,  2415,  2047,
      93,  -550,  1274,  1274,   385,   250,  -550,  -550,  -550,  1597,
     804,  1375,  1439,   386,  1639,  1668,  1691,  1712,  1733,  1754,
    1775,  1796,  1460,  1481,  1510,  -550,   617,   882,   966,  1069,
    1069,  -550,    20,  -550,   388,  1274,  1274,   389,  1274,  2373,
     390,   391,   394,   868,   278,   723,   467,   393,   341,   341,
     531,   531,   531,   531,  -550,  -550,    36,  -550,    28,   470,
     471,   472,  -550,  -550,  -550,   -14,    46,   234,   417,   417,
     474,   460,     4,  -550,   483,  -550,   578,  -550,  -550,   579,
     275,  -550,   408,  2415,   541,   481,    36,  -550,  -550,   565,
     -71,  -550,    41,   413,   -71,   413,   473,  1274,  -550,  1274,
    -550,  1274,  2256,  2068,  -550,  1274,  1274,  -550,  1274,  2235,
     494,   494,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,
    -550,  1274,  1274,  1274,  -550,  -550,  1274,   419,  1069,  1069,
     388,  2394,  1274,   388,   388,   388,   423,   509,   112,   518,
     518,   518,  1274,   600,   601,   418,  -550,  -550,     4,  1274,
     -76,     4,   434,   -70,   436,   -44,   437,   438,   521,    81,
    -550,   619,   388,   620,  1274,  -550,  -550,   995,   522,   645,
    -550,  -550,   646,  1061,    -3,  -550,    -3,  -550,  -550,  2415,
    2277,  -550,  1274,  1555,    63,  1825,  1274,  1274,   478,   479,
    1848,  1533,  1869,   480,  -550,  1274,   486,  1274,   647,   487,
     490,   491,  -550,   613,   564,  -550,   560,   505,   506,   507,
    2415,   662,    -8,   481,  -550,  2415,  1274,   510,  -550,  -550,
     -76,  -550,   275,  -550,  1274,   511,   514,   683,   683,   515,
     -63,   275,  2092,  -550,   134,   517,  -550,  1352,  -550,  2415,
     549,   669,  -550,  -550,  2415,   110,  -550,  -550,  -550,  -550,
    2415,  1274,  -550,  -550,  1274,  -550,  1890,  2089,  -550,  -550,
    -550,  1274,  -550,  -550,   524,  -550,   647,  -550,  -550,  -550,
    1274,  1274,   418,  -550,   688,   688,   688,  1274,  1274,   690,
    -550,  2415,   683,  -550,   150,  1911,   683,   683,  -550,   153,
     162,   692,  -550,  -550,  -550,  -550,   527,   527,   527,   527,
     527,  -550,   527,  -550,   528,   527,   527,   527,   653,  -550,
     653,  -550,   527,   527,   527,   529,   653,   527,   653,  -550,
    -550,  -550,   547,   550,  -550,  -550,  -550,  -550,  -550,   620,
    1274,  1274,   545,  1185,  -550,  1251,   551,  1932,  1953,  -550,
    -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  1982,
    -550,  2314,  -117,  2415,   481,  -550,   176,   200,   204,  2415,
    2415,   677,   214,    71,  -550,   218,   222,  -550,   696,  -550,
    -550,   230,   717,  -550,  -550,  -550,  -550,  -550,  -550,   721,
    -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,  -550,   721,
    -550,  -550,  -550,   737,   738,   199,  -550,  2415,  2415,   580,
    -550,  2415,  -550,  2415,  1061,  -550,  -550,  -550,  -550,   636,
    1274,  -550,   663,  -550,   753,  -550,  -550,  1274,  -550,  -550,
    -550,  -550,  -550,  -550,   755,   233,    55,   290,    55,    55,
    -550,   254,    55,    55,    55,   290,   290,    55,    55,    55,
     265,   290,    55,   290,   586,   587,   652,   590,   607,   777,
     428,  -550,  -550,   691,    54,   283,  -550,  2314,   683,  -550,
    -550,  2415,  -550,  -550,   785,  -550,  -550,   664,   787,  -550,
     789,  -550,  -550,  -550,  -550,   790,  1274,  -550,  -550,  -550,
    -550,  -550,  -550,  -550,   683,  -550,  -550,   621,   625,   796,
    -550,   290,  -550,   290,   290,   289,  2005,   291,  -550,  -550,
    -550,   797,  -550,  -550,   627,  -550
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -550,   747,   -40,  -262,  -550,  -550,  -550,  -550,   463,   665,
    -550,  -111,   -57,  -550,  -550,  -549,  -550,  -550,  -351,  -550,
     244,  -428,  -550,  -456,  -550,  -550,   623,  -105,    99,   614,
    -202,   501,  -550,  -550,   138,  -550,  -550,  -550,   365,   450,
      82,   -30,  -550,  -550,  -550,   765,   602,  -550,  -550,  -550,
    -550,  -550,  -159,    43,   788,   684,  -550,   500,  -550,   194,
    -221,  -550,  -550,  -550,  -550,  -550,   171,  -550,  -550,  -550,
     374,   370,  -550,  -550,  -550,   -58,  -300,  -162,  -513,  -550,
     216,  -380,  -550,  -550,  -550,   760
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -253
static const yytype_int16 yytable[] =
{
     113,   324,   520,   453,   301,  -235,   372,   119,  -237,   197,
     119,  -236,   508,   170,   196,   510,   307,   137,   219,   199,
     307,   231,   232,    36,   443,   261,   354,   307,   141,   142,
      26,   170,   638,   298,   639,     7,   446,   262,   216,   147,
     148,   149,   234,   398,    68,   151,   308,   455,    35,   191,
     308,   299,    42,   325,   456,    69,   592,   308,   640,   193,
     595,   596,    41,   220,    27,   408,   200,   191,   447,   138,
     144,   145,   169,   171,   172,   173,   174,   175,   176,   177,
     522,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   423,    28,   233,    53,   309,   310,
     380,   665,   666,   452,   399,    29,   228,   671,  -251,   673,
     229,   398,   326,   138,   235,   239,   241,   242,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   263,
     355,   256,   257,   258,   259,   260,     7,    37,   716,   269,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   584,   713,   357,   113,   194,   642,    70,   373,   222,
     317,   307,   366,   494,   509,   405,    44,   407,   330,   331,
      32,   556,   476,    54,   313,  -235,   444,   120,  -237,   450,
     120,  -236,   195,   368,    55,   214,   721,    46,   723,   724,
     289,   308,   332,   333,    56,   214,    47,   695,    48,    51,
     339,   557,   290,  -191,   220,    50,   294,   200,   214,   696,
      57,   200,    52,   649,    33,   401,   402,   676,    59,   198,
      45,   374,    71,   132,    60,   358,   359,   714,   361,   367,
     116,   133,   717,   169,  -191,   677,   217,   483,   484,   375,
     615,    72,  -252,   233,   126,   477,   620,   478,   622,   426,
     678,   679,   429,   430,   431,   460,   461,   291,   727,   396,
     171,   172,   173,   174,   175,   176,   177,   680,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   463,   128,   201,   564,   565,   130,   265,   266,   409,
     267,   410,   286,   268,   133,   413,   414,   681,   415,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   682,
     129,   420,   421,   422,   683,   316,   131,    61,   135,     1,
      61,   139,   428,   202,   593,   461,   384,   597,   598,   335,
     140,  -159,   440,     2,     3,   203,   599,   598,    36,   445,
     146,   629,   684,   204,    62,   697,   698,    62,   153,   117,
     643,   644,    63,   205,   467,   385,    64,   469,   154,   118,
     206,   155,    65,   474,     4,   156,   386,   186,   187,   188,
     189,   190,   480,   387,   645,   644,   486,   487,   646,   644,
      73,    74,    75,    76,    77,    78,   157,   496,   648,   598,
     388,     5,   650,   598,    79,    80,   651,   598,   158,     6,
       7,   159,    81,    82,   653,   654,   511,   693,   694,     8,
     160,    83,     9,   161,   515,   162,    10,   184,   185,   186,
     187,   188,   189,   190,    84,   336,   163,    85,   699,   700,
      86,    87,   708,   709,   710,   711,   376,   377,    88,   701,
     700,   567,    89,   164,   568,   658,   659,   209,   662,   663,
     664,   579,   438,   439,   667,   668,   669,   715,   565,   672,
     581,   583,    90,   730,   731,   733,   598,   589,   590,   604,
     605,   606,   607,   165,   608,   587,   588,   610,   611,   612,
     211,   166,   167,   168,   616,   617,   618,    91,   213,   621,
     183,   184,   185,   186,   187,   188,   189,   190,    92,   212,
     218,    93,    94,    95,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   224,     7,   264,   285,
     627,   628,   288,   631,   293,   633,   295,   302,   303,   305,
     306,   314,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   319,   321,
     112,    73,    74,    75,    76,    77,    78,   323,   328,   334,
     342,   190,   360,   363,   364,    79,    80,   365,   369,   370,
     371,   378,   379,    81,    73,    74,    75,    76,    77,    78,
     381,   382,   383,   393,   394,   397,   403,   398,    79,    80,
     417,   433,   236,   424,   474,    84,    81,   432,    85,   436,
     687,    86,    87,   441,   442,   270,   271,   691,   451,   454,
     457,   458,    73,    74,    75,    76,    77,    78,    84,   459,
     470,    85,   462,   464,    86,    87,    79,    80,   172,   173,
     174,   175,   176,   177,    81,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   471,   472,
     237,   501,   488,   489,   493,   500,    84,   503,    91,    85,
     495,   497,    86,    87,   498,   499,   726,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   504,   505,
     506,    91,   507,   512,   516,   238,   518,   517,   521,   563,
     562,   585,   559,   591,   272,   600,   613,   647,   580,   652,
     602,   609,   619,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    91,
     623,   112,   655,   624,   634,   660,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   674,   675,   273,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   686,   399,   690,   688,   692,   150,
     702,   703,   704,   705,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     706,   707,   112,    73,    74,    75,    76,    77,    78,   712,
     718,   720,   719,   722,   127,   725,   598,    79,    80,   728,
     729,   735,   734,   626,   419,    81,   243,    73,    74,    75,
      76,    77,    78,   392,   297,   513,   230,   287,   435,   136,
     318,    79,    80,    67,   223,   406,   514,    84,   685,    81,
      85,   523,   143,    86,    87,   670,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,    85,     0,     0,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,     0,     0,     0,
       0,     0,     0,   338,     0,    79,    80,     0,     0,     0,
      91,     0,     0,    81,   173,   174,   175,   176,   177,     0,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,     0,    91,    84,     0,     0,    85,     0,
       0,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,     0,     0,   112,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,   112,    91,   174,
     175,   176,   177,     0,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,     7,    73,    74,
      75,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,     0,     0,     0,     0,     0,     0,
      81,     0,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,   112,    84,     0,     0,    85,     0,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   468,    73,    74,    75,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
       0,     0,  -253,  -253,  -253,  -253,    81,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
       0,     0,     0,     0,     0,    91,     0,     0,    84,     0,
       0,    85,     0,     0,    86,    87,     0,     0,     0,     0,
       0,     0,   171,   172,   173,   174,   175,   176,   177,   473,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,     0,     0,     0,     0,     0,     0,     0,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,   112,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,     0,     0,     0,     0,     0,     0,
      81,     0,     0,     0,     0,     0,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    84,     0,   112,    85,     0,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   630,    73,    74,    75,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
       0,     0,     0,     0,     0,     0,    81,    73,    74,    75,
      76,    77,    78,     0,     0,     0,     0,   327,     0,     0,
       0,    79,    80,     0,     0,    91,     0,     0,    84,    81,
       0,    85,     0,     0,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   632,
       0,    84,     0,     0,    85,     0,     0,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,   112,     0,
       0,    91,   171,   172,   173,   174,   175,   176,   177,     0,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,     0,    91,   171,   172,   173,   174,   175,
     176,   177,     0,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,     0,     0,   112,     0,     0,     0,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,   112,     0,   171,
     172,   173,   174,   175,   176,   177,   560,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     171,   172,   173,   174,   175,   176,   177,     0,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   171,   172,   173,   174,   175,   176,   177,     0,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,     0,     0,     0,     0,     0,     0,     0,     0,
     171,   172,   173,   174,   175,   176,   177,   561,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,     0,     0,   171,   172,   173,   174,   175,   176,   177,
     340,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,     0,   171,   172,   173,   174,   175,
     176,   177,     0,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   171,   172,   173,   174,
     175,   176,   177,     0,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   171,   172,   173,
     174,   175,   176,   177,   341,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,     0,     0,
       0,     0,     0,     0,     0,   351,   481,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     172,   173,   174,   175,   176,   177,   352,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
       0,     0,     0,     0,     0,     0,     0,     0,   171,   172,
     173,   174,   175,   176,   177,   353,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,     0,
       0,   171,   172,   173,   174,   175,   176,   177,   491,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   171,   172,   173,   174,   175,   176,   177,   482,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   171,   172,   173,   174,   175,   176,   177,
     255,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   171,   172,   173,   174,   175,   176,
     177,   337,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   171,   172,   173,   174,   175,
     176,   177,     0,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   171,   172,   173,   174,
     175,   176,   177,   343,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,     0,     0,     0,
       0,     0,     0,     0,     0,   171,   172,   173,   174,   175,
     176,   177,   344,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,     0,     0,   171,   172,
     173,   174,   175,   176,   177,   345,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   171,
     172,   173,   174,   175,   176,   177,   346,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     171,   172,   173,   174,   175,   176,   177,   347,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   171,   172,   173,   174,   175,   176,   177,   348,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   171,   172,   173,   174,   175,   176,   177,   349,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   171,   172,   173,   174,   175,   176,   177,
     350,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,     0,     0,     0,     0,     0,     0,
       0,     0,   171,   172,   173,   174,   175,   176,   177,   485,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,     0,     0,   171,   172,   173,   174,   175,
     176,   177,   490,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   171,   172,   173,   174,
     175,   176,   177,   492,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   171,   172,   173,
     174,   175,   176,   177,   569,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   171,   172,
     173,   174,   175,   176,   177,   594,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   171,
     172,   173,   174,   175,   176,   177,   635,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
       0,     0,     0,     0,     0,     0,     0,   636,     0,     0,
       0,     0,   524,   525,     0,   526,     0,   527,   528,     0,
       0,     0,     0,     0,     0,     0,     0,   529,   570,   571,
       0,     0,     0,   572,     0,   573,   637,     0,     0,     0,
       0,   530,   531,   532,   533,     0,   534,     0,     0,   535,
       0,     0,   574,   575,     0,   576,   150,     0,     0,   732,
     536,     0,     0,   329,     0,     0,     0,   537,     0,     0,
       0,   538,     0,     0,     0,     0,     0,   539,   540,   541,
     542,     0,     0,     0,   412,     0,     0,     0,     0,   543,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   544,
     545,     0,   546,   547,     0,   548,   549,     0,     0,     0,
       0,   550,   551,     0,     0,     0,     0,     0,   552,     0,
     553,   577,   578,     0,   554,   171,   172,   173,   174,   175,
     176,   177,     0,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   171,   172,   173,   174,
     175,   176,   177,     0,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   171,   172,   173,
     174,   175,   176,   177,     0,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,     0,     0,
       0,     0,     0,     0,   416,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   171,   172,   173,   174,   175,   176,
     177,   411,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,     0,   170,     0,     0,     0,
       0,   556,   479,   171,   172,   173,   174,   175,   176,   177,
       0,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,     0,     0,     0,     0,     0,     0,
       0,   557,   191,   171,   172,   173,   174,   175,   176,   177,
       0,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   171,   172,   173,   174,   175,   176,
     177,   362,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   171,   172,   173,   174,   175,
     176,   177,   427,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190
};

static const yytype_int16 yycheck[] =
{
      40,   222,   458,   383,   206,     3,    20,     3,     3,   120,
       3,     3,    20,     3,   119,   443,    90,    79,   128,   128,
      90,    75,    76,     8,   375,     6,     6,    90,    68,    69,
      57,     3,   581,   101,   151,   129,   112,    18,   144,    79,
      80,    81,   153,   114,     9,    85,   120,    91,     5,    39,
     120,   119,     9,   147,    98,    20,   512,   120,   175,    79,
     516,   517,   135,   173,    91,   327,   175,    39,   144,   175,
     172,   173,   112,    10,    11,    12,    13,    14,    15,    16,
     460,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   356,   122,   150,     3,   172,   173,
     302,   614,   615,   173,   175,   132,   146,   620,   171,   622,
     150,   114,   223,   175,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   110,
     110,   171,   172,   173,   174,   175,   129,   122,   687,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   502,    98,   264,   194,   175,   584,     3,   172,   128,
     217,    90,   273,   425,   172,   324,     3,   326,    75,    76,
      91,    37,   175,    79,   214,   173,   378,   173,   173,   381,
     173,   173,   172,   288,    90,   149,   699,     0,   701,   702,
      78,   120,   232,   233,   100,   149,   171,   142,    92,    28,
     240,    67,    90,   144,   173,     3,   174,   175,   149,   154,
     116,   175,   135,   593,   135,   174,   175,    18,     3,   120,
      57,   175,    68,    52,     3,   265,   266,   173,   268,   286,
       3,   172,   688,   273,   175,    36,   137,   174,   175,   296,
     540,   175,   171,   150,     3,   404,   546,   406,   548,   360,
      51,    52,   363,   364,   365,   174,   175,   145,   714,   316,
      10,    11,    12,    13,    14,    15,    16,    68,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   392,   155,    49,   174,   175,   112,    13,    14,   329,
      16,   331,   193,    19,   172,   335,   336,    98,   338,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   110,
       3,   351,   352,   353,   115,   216,     3,    58,     3,    48,
      58,     3,   362,    89,   174,   175,    51,   174,   175,    79,
       3,    97,   372,    62,    63,   101,   174,   175,     8,   379,
       9,   562,   143,   109,    85,    55,    56,    85,   173,    90,
     174,   175,    90,   119,   394,    80,    94,   397,   173,   100,
     126,   173,   100,   403,    93,   173,    91,    26,    27,    28,
      29,    30,   412,    98,   174,   175,   416,   417,   174,   175,
       3,     4,     5,     6,     7,     8,   173,   427,   174,   175,
     115,   120,   174,   175,    17,    18,   174,   175,   173,   128,
     129,   173,    25,    26,   174,   175,   446,   174,   175,   138,
     173,    34,   141,   173,   454,   173,   145,    24,    25,    26,
      27,    28,    29,    30,    47,   175,   173,    50,   174,   175,
      53,    54,     4,     5,     6,     7,   298,   299,    61,   174,
     175,   481,    65,   173,   484,   607,   608,    39,   610,   611,
     612,   491,   370,   371,   616,   617,   618,   174,   175,   621,
     500,   501,    85,   174,   175,   174,   175,   507,   508,   527,
     528,   529,   530,   173,   532,   505,   506,   535,   536,   537,
       3,   173,   173,   173,   542,   543,   544,   110,    26,   547,
      23,    24,    25,    26,    27,    28,    29,    30,   121,     3,
       3,   124,   125,   126,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     3,   129,   173,     3,
     560,   561,     3,   563,   174,   565,     3,    97,   111,     3,
     173,   113,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,     3,     3,
     173,     3,     4,     5,     6,     7,     8,   147,   174,   174,
     174,    30,   173,   173,   173,    17,    18,   173,    98,    98,
      98,    97,   112,    25,     3,     4,     5,     6,     7,     8,
      97,     3,     3,    42,   103,    20,   173,   114,    17,    18,
      96,    82,    44,   174,   634,    47,    25,   174,    50,    81,
     640,    53,    54,     3,     3,    34,    35,   647,   174,   173,
     173,   173,     3,     4,     5,     6,     7,     8,    47,    98,
      98,    50,     3,     3,    53,    54,    17,    18,    11,    12,
      13,    14,    15,    16,    25,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,     3,
     102,    87,   174,   174,   174,    42,    47,    97,   110,    50,
     174,   174,    53,    54,   174,   174,   706,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   173,   173,
     173,   110,    20,   173,   173,   137,     3,   173,   173,    20,
     141,     3,   175,     3,   123,     3,    43,    20,   174,     3,
     173,   173,   173,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   110,
     173,   173,     5,   173,   173,     4,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,     5,     5,   173,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   118,   175,     3,    94,     3,   150,
     174,   174,   110,   173,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     173,     4,   173,     3,     4,     5,     6,     7,     8,    98,
       5,     4,   128,     4,    47,     5,   175,    17,    18,   174,
       4,   174,     5,   559,   341,    25,    26,     3,     4,     5,
       6,     7,     8,   312,   200,   450,   151,   194,   368,    54,
     218,    17,    18,    35,   140,   325,   452,    47,   634,    25,
      50,   461,    72,    53,    54,   619,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    17,    18,    -1,    -1,    -1,
     110,    -1,    -1,    25,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,   110,    47,    -1,    -1,    50,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,    -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,    -1,    -1,   173,   110,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   129,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,    -1,
      -1,   173,    47,    -1,    -1,    50,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    13,    14,    15,    16,    25,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    47,    -1,
      -1,    50,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    68,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,    -1,    -1,   173,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,    47,    -1,   173,    50,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,   175,    -1,    -1,
      -1,    17,    18,    -1,    -1,   110,    -1,    -1,    47,    25,
      -1,    50,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,    -1,    -1,   173,    -1,
      -1,   110,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,   110,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,    -1,    -1,   173,    -1,    -1,    -1,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,    -1,    -1,   173,    -1,    10,
      11,    12,    13,    14,    15,    16,   104,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   175,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     175,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   175,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   175,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   175,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   175,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   174,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     174,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   174,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   174,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   174,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   174,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   174,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   174,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   174,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   174,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     174,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   174,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   174,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   174,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   174,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   174,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   174,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    59,    60,
      -1,    -1,    -1,    64,    -1,    66,   174,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    -1,    74,    -1,    -1,    77,
      -1,    -1,    83,    84,    -1,    86,   150,    -1,    -1,   174,
      88,    -1,    -1,   136,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,   130,   131,    -1,   133,   134,    -1,    -1,    -1,
      -1,   139,   140,    -1,    -1,    -1,    -1,    -1,   146,    -1,
     148,   152,   153,    -1,   152,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    75,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,     3,    -1,    -1,    -1,
      -1,    37,    75,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    39,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    38,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    38,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    48,    62,    63,    93,   120,   128,   129,   138,   141,
     145,   177,   186,   187,   219,   223,   224,   225,   226,   227,
     237,   238,   241,   243,   244,   259,    57,    91,   122,   132,
     245,   220,    91,   135,   229,   229,     8,   122,   260,   261,
     200,   135,   229,   239,     3,    57,     0,   171,    92,   242,
       3,   242,   135,     3,    79,    90,   100,   116,   221,     3,
       3,    58,    85,    90,    94,   100,   230,   230,     9,    20,
       3,    68,   175,     3,     4,     5,     6,     7,     8,    17,
      18,    25,    26,    34,    47,    50,    53,    54,    61,    65,
      85,   110,   121,   124,   125,   126,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   173,   178,   201,   202,     3,    90,   100,     3,
     173,   204,   205,   206,   208,   218,     3,   177,   155,     3,
     112,     3,   242,   172,   222,     3,   221,    79,   175,     3,
       3,   178,   178,   261,   172,   173,     9,   178,   178,   178,
     150,   178,   185,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   178,
       3,    10,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    39,   203,    79,   175,   172,   203,   187,   204,   128,
     175,    49,    89,   101,   109,   119,   126,   209,   211,    39,
     207,     3,     3,    26,   149,   188,   144,   204,     3,   128,
     173,   231,   128,   231,     3,   178,   179,   180,   178,   178,
     185,    75,    76,   150,   187,   178,    44,   102,   137,   178,
     183,   178,   178,    26,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   174,   178,   178,   178,   178,
     178,     6,    18,   110,   173,    13,    14,    16,    19,   178,
      34,    35,   123,   173,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,     3,   204,   202,     3,    78,
      90,   145,   215,   174,   174,     3,   240,   205,   101,   119,
     212,   206,    97,   111,   210,     3,   173,    90,   120,   172,
     173,   257,   258,   178,   113,   194,   204,   188,   222,     3,
     236,     3,   232,   147,   236,   147,   187,   175,   174,   136,
      75,    76,   178,   178,   174,    79,   175,   174,    79,   178,
     175,   175,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   175,   175,   175,     6,   110,   181,   187,   178,   178,
     173,   178,    38,   173,   173,   173,   187,   188,   203,    98,
      98,    98,    20,   172,   175,   188,   210,   210,    97,   112,
     206,    97,     3,     3,    51,    80,    91,    98,   115,   246,
     247,   249,   207,    42,   103,   197,   188,    20,   114,   175,
     228,   174,   175,   173,   233,   228,   233,   228,   179,   178,
     178,    75,   136,   178,   178,   178,    79,    96,   184,   184,
     178,   178,   178,   179,   174,   182,   187,    38,   178,   187,
     187,   187,   174,    82,   189,   215,    81,   216,   216,   216,
     178,     3,     3,   194,   206,   178,   112,   144,   213,   214,
     206,   174,   173,   257,   173,    91,    98,   173,   173,    98,
     174,   175,     3,   187,     3,   195,   196,   178,    68,   178,
      98,     3,     3,    68,   178,   235,   175,   228,   228,    75,
     178,    81,   174,   174,   175,   174,   178,   178,   174,   174,
     174,   175,   174,   174,   179,   174,   178,   174,   174,   174,
      42,    87,   193,    97,   173,   173,   173,    20,    20,   172,
     197,   178,   173,   214,   246,   178,   173,   173,     3,   199,
     199,   173,   257,   247,    40,    41,    43,    45,    46,    55,
      69,    70,    71,    72,    74,    77,    88,    95,    99,   105,
     106,   107,   108,   117,   127,   128,   130,   131,   133,   134,
     139,   140,   146,   148,   152,   255,    37,    67,   191,   175,
     104,   175,   141,    20,   174,   175,   234,   178,   178,   174,
      59,    60,    64,    66,    83,    84,    86,   152,   153,   178,
     174,   178,   190,   178,   194,     3,   217,   217,   217,   178,
     178,     3,   199,   174,   174,   199,   199,   174,   175,   174,
       3,   248,   173,   251,   251,   251,   251,   251,   251,   173,
     251,   251,   251,    43,   252,   252,   251,   251,   251,   173,
     252,   251,   252,   173,   173,   250,   196,   178,   178,   236,
      68,   178,    68,   178,   173,   174,   174,   174,   191,   151,
     175,   192,   197,   174,   175,   174,   174,    20,   174,   257,
     174,   174,     3,   174,   175,     5,   253,   254,   253,   253,
       4,   256,   253,   253,   253,   254,   254,   253,   253,   253,
     256,   254,   253,   254,     5,     5,    18,    36,    51,    52,
      68,    98,   110,   115,   143,   235,   118,   178,    94,   198,
       3,   178,     3,   174,   175,   142,   154,    55,    56,   174,
     175,   174,   174,   174,   110,   173,   173,     4,     4,     5,
       6,     7,    98,    98,   173,   174,   191,   199,     5,   128,
       4,   254,     4,   254,   254,     5,   178,   199,   174,     4,
     174,   175,   174,   174,     5,   174
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
#line 269 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 275 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 276 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 278 "parser/evoparser.y"
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
#line 296 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 304 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 312 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 318 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 325 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 326 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 327 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 328 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 329 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 330 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 331 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 332 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 333 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 334 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 335 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 336 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 337 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 338 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 339 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 340 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 341 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 343 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 348 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 349 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 350 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 351 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 354 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 355 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 356 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 357 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 358 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 361 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 362 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 365 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_inListCount < MAX_IN_LIST) g_inListExprs[g_inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 366 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_inListCount; _i>0; _i--) g_inListExprs[_i]=g_inListExprs[_i-1]; g_inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_inListCount++; } ;}
    break;

  case 43:
#line 369 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 373 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 46:
#line 373 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 47:
#line 374 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 48:
#line 374 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 49:
#line 375 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 376 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 377 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 381 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 385 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 386 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 387 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 388 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 389 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 390 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 392 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 393 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 394 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 395 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 396 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 397 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 398 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 399 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 400 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 401 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 402 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 403 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 404 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 407 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 73:
#line 408 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 74:
#line 409 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 75:
#line 412 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 76:
#line 413 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 77:
#line 416 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 78:
#line 417 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 79:
#line 418 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 80:
#line 419 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 81:
#line 420 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 82:
#line 421 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 83:
#line 422 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 84:
#line 423 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 85:
#line 424 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 86:
#line 428 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_caseWhenCount, NULL); ;}
    break;

  case 87:
#line 430 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 88:
#line 432 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, NULL); ;}
    break;

  case 89:
#line 434 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 90:
#line 438 "parser/evoparser.y"
    {
        g_caseWhenCount = 0;
        g_caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 91:
#line 446 "parser/evoparser.y"
    {
        if (g_caseWhenCount < MAX_CASE_WHENS) {
            g_caseWhenExprs[g_caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_caseThenExprs[g_caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 92:
#line 456 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 93:
#line 457 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 94:
#line 460 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 95:
#line 461 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 96:
#line 464 "parser/evoparser.y"
    { emit("NOW"); (yyval.exprval) = expr_make_current_timestamp(); ;}
    break;

  case 97:
#line 465 "parser/evoparser.y"
    { emit("NOW"); (yyval.exprval) = expr_make_current_date(); ;}
    break;

  case 98:
#line 466 "parser/evoparser.y"
    { emit("NOW"); (yyval.exprval) = expr_make_current_time(); ;}
    break;

  case 99:
#line 471 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 100:
#line 480 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_selectDistinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 101:
#line 485 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (11)].intval), (yyvsp[(3) - (11)].intval), (yyvsp[(5) - (11)].intval));
        g_selectDistinct = ((yyvsp[(2) - (11)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (11)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 103:
#line 496 "parser/evoparser.y"
    { emit("WHERE"); g_whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 105:
#line 498 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 106:
#line 501 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_groupByCount = 0;
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 107:
#line 508 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 108:
#line 516 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 109:
#line 517 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 110:
#line 518 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 111:
#line 521 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 112:
#line 522 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 114:
#line 526 "parser/evoparser.y"
    { emit("HAVING"); g_havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 119:
#line 538 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 120:
#line 545 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 121:
#line 546 "parser/evoparser.y"
    { emit("LIMIT 1"); g_limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 122:
#line 547 "parser/evoparser.y"
    { emit("LIMIT 2"); g_offsetExpr = (yyvsp[(2) - (4)].exprval); g_limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 123:
#line 548 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_limitExpr = (yyvsp[(2) - (4)].exprval); g_offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 125:
#line 552 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 126:
#line 555 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 127:
#line 556 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 128:
#line 559 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 129:
#line 560 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 130:
#line 561 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 131:
#line 562 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 132:
#line 563 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 133:
#line 564 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 134:
#line 565 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 135:
#line 566 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 136:
#line 567 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 137:
#line 570 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 138:
#line 571 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 139:
#line 573 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 140:
#line 581 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 141:
#line 586 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 142:
#line 587 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 143:
#line 588 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 144:
#line 591 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 145:
#line 592 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 148:
#line 601 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 149:
#line 606 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 150:
#line 607 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 151:
#line 608 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 154:
#line 617 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 155:
#line 619 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 156:
#line 621 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 157:
#line 623 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 158:
#line 625 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 159:
#line 628 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 160:
#line 629 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 161:
#line 630 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 162:
#line 633 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 163:
#line 634 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 164:
#line 637 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 165:
#line 638 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 166:
#line 641 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 167:
#line 642 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 168:
#line 643 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 171:
#line 650 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 172:
#line 651 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 173:
#line 656 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 174:
#line 658 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 175:
#line 660 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 177:
#line 664 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 178:
#line 665 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 179:
#line 668 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 180:
#line 669 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 181:
#line 672 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 182:
#line 677 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 183:
#line 685 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 184:
#line 692 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 185:
#line 693 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 186:
#line 694 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 187:
#line 695 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 188:
#line 699 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 189:
#line 702 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 190:
#line 703 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 193:
#line 708 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 194:
#line 713 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 195:
#line 720 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 196:
#line 729 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 197:
#line 736 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s (%s)", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval));
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
        free((yyvsp[(7) - (8)].strval));
    ;}
    break;

  case 198:
#line 747 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 199:
#line 754 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 200:
#line 763 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 201:
#line 770 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 202:
#line 778 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 203:
#line 785 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 205:
#line 793 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 206:
#line 796 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 207:
#line 797 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 208:
#line 798 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 209:
#line 799 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 210:
#line 800 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 214:
#line 807 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 215:
#line 811 "parser/evoparser.y"
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

  case 216:
#line 821 "parser/evoparser.y"
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

  case 217:
#line 833 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 218:
#line 834 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 219:
#line 834 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 220:
#line 837 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 221:
#line 838 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 222:
#line 839 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 223:
#line 840 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 224:
#line 844 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 225:
#line 847 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 226:
#line 848 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 227:
#line 849 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 228:
#line 850 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 229:
#line 856 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 230:
#line 862 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 231:
#line 867 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 232:
#line 872 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 233:
#line 877 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 234:
#line 884 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 235:
#line 889 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 236:
#line 890 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 237:
#line 891 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 238:
#line 896 "parser/evoparser.y"
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

  case 239:
#line 907 "parser/evoparser.y"
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

  case 240:
#line 918 "parser/evoparser.y"
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

  case 241:
#line 929 "parser/evoparser.y"
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

  case 242:
#line 942 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 243:
#line 946 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 244:
#line 947 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 245:
#line 950 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 246:
#line 951 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 247:
#line 955 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 248:
#line 959 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 249:
#line 960 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 250:
#line 965 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 251:
#line 973 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 252:
#line 981 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 253:
#line 986 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 254:
#line 990 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 255:
#line 995 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 256:
#line 999 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 257:
#line 1002 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 258:
#line 1003 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 259:
#line 1006 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 260:
#line 1007 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 261:
#line 1010 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 262:
#line 1011 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 263:
#line 1012 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 264:
#line 1013 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 265:
#line 1014 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 266:
#line 1015 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 267:
#line 1018 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 268:
#line 1019 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 269:
#line 1022 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 270:
#line 1024 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 271:
#line 1032 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 272:
#line 1033 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 274:
#line 1035 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 275:
#line 1036 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 276:
#line 1037 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 277:
#line 1038 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 278:
#line 1039 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 279:
#line 1040 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 280:
#line 1041 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 281:
#line 1042 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY %d", (yyvsp[(4) - (5)].intval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 282:
#line 1043 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 283:
#line 1044 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 284:
#line 1045 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 285:
#line 1046 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 286:
#line 1047 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 287:
#line 1048 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 288:
#line 1051 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 289:
#line 1052 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 290:
#line 1053 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 291:
#line 1056 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 292:
#line 1057 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 293:
#line 1060 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 294:
#line 1061 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 295:
#line 1062 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 297:
#line 1066 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 298:
#line 1067 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 299:
#line 1071 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 300:
#line 1072 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 301:
#line 1073 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 302:
#line 1074 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 303:
#line 1075 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 304:
#line 1076 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 305:
#line 1077 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 306:
#line 1078 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 307:
#line 1079 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 308:
#line 1080 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 309:
#line 1081 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 310:
#line 1082 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 311:
#line 1083 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 312:
#line 1084 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 313:
#line 1085 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 314:
#line 1086 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 315:
#line 1087 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 316:
#line 1088 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 317:
#line 1089 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 318:
#line 1090 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 319:
#line 1091 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 320:
#line 1092 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 321:
#line 1093 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 322:
#line 1094 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 323:
#line 1095 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 324:
#line 1096 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 325:
#line 1097 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 326:
#line 1098 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 327:
#line 1099 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 328:
#line 1100 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 329:
#line 1101 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 330:
#line 1104 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 331:
#line 1105 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 332:
#line 1109 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 333:
#line 1112 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 334:
#line 1113 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 335:
#line 1114 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 336:
#line 1118 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 337:
#line 1121 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 338:
#line 1122 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 342:
#line 1126 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 343:
#line 1127 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4479 "parser/evoparser.tab.c"
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


#line 1130 "parser/evoparser.y"

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
