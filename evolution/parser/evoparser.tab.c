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
     EXPLAIN = 323,
     FLOAT = 324,
     FORCE = 325,
     FROM = 326,
     FULLTEXT = 327,
     FOR = 328,
     GROUP = 329,
     HOUR_MINUTE = 330,
     HOUR_MICROSECOND = 331,
     HIGH_PRIORITY = 332,
     HOUR_SECOND = 333,
     HAVING = 334,
     INTEGER = 335,
     INNER = 336,
     IGNORE = 337,
     INDEX = 338,
     IF = 339,
     INSERT = 340,
     INTO = 341,
     INT = 342,
     INTERVAL = 343,
     JOIN = 344,
     KEY = 345,
     LONGTEXT = 346,
     LOW_PRIORITY = 347,
     LEFT = 348,
     LEADING = 349,
     LIMIT = 350,
     OFFSET = 351,
     LONGBLOB = 352,
     MEDIUMTEXT = 353,
     MEDIUMBLOB = 354,
     MEDIUMINT = 355,
     NATURAL = 356,
     NULLX = 357,
     OUTER = 358,
     ON = 359,
     ORDER = 360,
     ONDUPLICATE = 361,
     PRIMARY = 362,
     QUICK = 363,
     REAL = 364,
     ROLLUP = 365,
     RIGHT = 366,
     REPLACE = 367,
     SQL_SMALL_RESULT = 368,
     SCHEMA = 369,
     SOME = 370,
     SQL_CALC_FOUND_ROWS = 371,
     SQL_BIG_RESULT = 372,
     STRAIGHT_JOIN = 373,
     SMALLINT = 374,
     SET = 375,
     SELECT = 376,
     TINYTEXT = 377,
     TINYINT = 378,
     TEMPORARY = 379,
     TEXT = 380,
     TIMESTAMP = 381,
     TABLE = 382,
     THEN = 383,
     TRAILING = 384,
     TRUNCATE = 385,
     TINYBLOB = 386,
     TIME = 387,
     UPDATE = 388,
     UNSIGNED = 389,
     UNIQUE = 390,
     USING = 391,
     USE = 392,
     VARCHAR = 393,
     VALUES = 394,
     VARBINARY = 395,
     WHERE = 396,
     WHEN = 397,
     WITH = 398,
     YEAR = 399,
     YEAR_MONTH = 400,
     ZEROFILL = 401,
     EXISTS = 402,
     FSUBSTRING = 403,
     FTRIM = 404,
     FDATE_ADD = 405,
     FDATE_SUB = 406,
     FCOUNT = 407,
     FSUM = 408,
     FAVG = 409,
     FMIN = 410,
     FMAX = 411,
     FUPPER = 412,
     FLOWER = 413,
     FLENGTH = 414,
     FCONCAT = 415,
     FREPLACE = 416,
     FCOALESCE = 417
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
#define EXPLAIN 323
#define FLOAT 324
#define FORCE 325
#define FROM 326
#define FULLTEXT 327
#define FOR 328
#define GROUP 329
#define HOUR_MINUTE 330
#define HOUR_MICROSECOND 331
#define HIGH_PRIORITY 332
#define HOUR_SECOND 333
#define HAVING 334
#define INTEGER 335
#define INNER 336
#define IGNORE 337
#define INDEX 338
#define IF 339
#define INSERT 340
#define INTO 341
#define INT 342
#define INTERVAL 343
#define JOIN 344
#define KEY 345
#define LONGTEXT 346
#define LOW_PRIORITY 347
#define LEFT 348
#define LEADING 349
#define LIMIT 350
#define OFFSET 351
#define LONGBLOB 352
#define MEDIUMTEXT 353
#define MEDIUMBLOB 354
#define MEDIUMINT 355
#define NATURAL 356
#define NULLX 357
#define OUTER 358
#define ON 359
#define ORDER 360
#define ONDUPLICATE 361
#define PRIMARY 362
#define QUICK 363
#define REAL 364
#define ROLLUP 365
#define RIGHT 366
#define REPLACE 367
#define SQL_SMALL_RESULT 368
#define SCHEMA 369
#define SOME 370
#define SQL_CALC_FOUND_ROWS 371
#define SQL_BIG_RESULT 372
#define STRAIGHT_JOIN 373
#define SMALLINT 374
#define SET 375
#define SELECT 376
#define TINYTEXT 377
#define TINYINT 378
#define TEMPORARY 379
#define TEXT 380
#define TIMESTAMP 381
#define TABLE 382
#define THEN 383
#define TRAILING 384
#define TRUNCATE 385
#define TINYBLOB 386
#define TIME 387
#define UPDATE 388
#define UNSIGNED 389
#define UNIQUE 390
#define USING 391
#define USE 392
#define VARCHAR 393
#define VALUES 394
#define VARBINARY 395
#define WHERE 396
#define WHEN 397
#define WITH 398
#define YEAR 399
#define YEAR_MONTH 400
#define ZEROFILL 401
#define EXISTS 402
#define FSUBSTRING 403
#define FTRIM 404
#define FDATE_ADD 405
#define FDATE_SUB 406
#define FCOUNT 407
#define FSUM 408
#define FAVG 409
#define FMIN 410
#define FMAX 411
#define FUPPER 412
#define FLOWER 413
#define FLENGTH 414
#define FCONCAT 415
#define FREPLACE 416
#define FCOALESCE 417




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
#line 445 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 458 "parser/evoparser.tab.c"

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2527

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  177
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  348
/* YYNRULES -- Number of states.  */
#define YYNSTATES  763

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   417

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     174,   175,    26,    24,   176,    25,   173,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   172,
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
     164,   165,   166,   167,   168,   169,   170,   171
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
     726,   731,   732,   735,   743,   745,   749,   751,   760,   771,
     781,   793,   795,   799,   801,   805,   807,   811,   813,   822,
     823,   828,   829,   832,   835,   838,   841,   843,   844,   845,
     849,   851,   855,   859,   860,   867,   869,   871,   875,   879,
     887,   891,   895,   901,   907,   909,   918,   926,   934,   936,
     945,   946,   949,   952,   956,   962,   968,   976,   978,   983,
     988,   989,   992,   994,   997,  1001,  1003,  1012,  1023,  1033,
    1040,  1052,  1061,  1062,  1064,  1066,  1070,  1076,  1081,  1086,
    1092,  1098,  1103,  1105,  1109,  1110,  1115,  1116,  1120,  1123,
    1127,  1131,  1135,  1139,  1142,  1150,  1156,  1162,  1166,  1169,
    1173,  1176,  1180,  1186,  1187,  1191,  1197,  1198,  1200,  1201,
    1204,  1207,  1208,  1213,  1217,  1220,  1224,  1228,  1232,  1236,
    1240,  1244,  1248,  1252,  1256,  1260,  1262,  1264,  1266,  1268,
    1270,  1274,  1280,  1283,  1288,  1290,  1292,  1294,  1296,  1300,
    1304,  1308,  1312,  1318,  1324,  1326,  1328,  1332,  1336,  1337,
    1339,  1341,  1343,  1347,  1351,  1354,  1356,  1360,  1364
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     178,     0,    -1,   187,   172,    -1,   187,   172,   178,    -1,
       3,    -1,     3,   173,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   111,    -1,   179,    24,
     179,    -1,   179,    25,   179,    -1,   179,    26,   179,    -1,
     179,    27,   179,    -1,   179,    28,   179,    -1,   179,    29,
     179,    -1,    25,   179,    -1,   174,   179,   175,    -1,   179,
      12,   179,    -1,   179,    10,   179,    -1,   179,    11,   179,
      -1,   179,    21,   179,    -1,   179,    22,   179,    -1,   179,
      30,   179,    -1,   179,    23,   179,    -1,    18,   179,    -1,
      17,   179,    -1,   179,    20,   179,    -1,   179,    20,   174,
     188,   175,    -1,   179,    20,    35,   174,   188,   175,    -1,
     179,    20,   124,   174,   188,   175,    -1,   179,    20,    34,
     174,   188,   175,    -1,   179,    15,   111,    -1,   179,    15,
      18,   111,    -1,   179,    15,     6,    -1,   179,    15,    18,
       6,    -1,     8,     9,   179,    -1,   179,    19,   179,    38,
     179,    -1,   179,    18,    19,   179,    38,   179,    -1,   179,
      -1,   179,   176,   180,    -1,    -1,   180,    -1,    -1,   179,
      16,   174,   182,   180,   175,    -1,    -1,   179,    18,    16,
     174,   183,   180,   175,    -1,   179,    16,   174,   188,   175,
      -1,   179,    18,    16,   174,   188,   175,    -1,   156,   174,
     188,   175,    -1,     3,   174,   181,   175,    -1,   161,   174,
      26,   175,    -1,   161,   174,   179,   175,    -1,   162,   174,
     179,   175,    -1,   163,   174,   179,   175,    -1,   164,   174,
     179,   175,    -1,   165,   174,   179,   175,    -1,   157,   174,
     179,   176,   179,   176,   179,   175,    -1,   157,   174,   179,
     176,   179,   175,    -1,   157,   174,   179,    80,   179,   175,
      -1,   157,   174,   179,    80,   179,    82,   179,   175,    -1,
     158,   174,   179,   175,    -1,   158,   174,   184,   179,    80,
     179,   175,    -1,   158,   174,   184,    80,   179,   175,    -1,
     166,   174,   179,   175,    -1,   167,   174,   179,   175,    -1,
     168,   174,   179,   175,    -1,   169,   174,   179,   176,   179,
     175,    -1,   170,   174,   179,   176,   179,   176,   179,   175,
      -1,   171,   174,   179,   176,   179,   175,    -1,   103,    -1,
     138,    -1,    44,    -1,   159,   174,   179,   176,   185,   175,
      -1,   160,   174,   179,   176,   185,   175,    -1,    97,   179,
      59,    -1,    97,   179,    60,    -1,    97,   179,    64,    -1,
      97,   179,    66,    -1,    97,   179,   154,    -1,    97,   179,
     153,    -1,    97,   179,    85,    -1,    97,   179,    84,    -1,
      97,   179,    87,    -1,    50,   179,   186,    75,    -1,    50,
     179,   186,    76,   179,    75,    -1,    50,   186,    75,    -1,
      50,   186,    76,   179,    75,    -1,   151,   179,   137,   179,
      -1,   186,   151,   179,   137,   179,    -1,   179,    14,   179,
      -1,   179,    18,    14,   179,    -1,   179,    13,   179,    -1,
     179,    18,    13,   179,    -1,    47,    -1,    53,    -1,    54,
      -1,   188,    -1,   130,   201,   202,    -1,   130,   201,   202,
      80,   205,   189,   190,   194,   195,   198,   199,    -1,    -1,
     150,   179,    -1,    -1,    83,    42,   191,   193,    -1,   179,
     192,    -1,   191,   176,   179,   192,    -1,    -1,    37,    -1,
      67,    -1,    -1,   152,   119,    -1,    -1,    88,   179,    -1,
      -1,   114,    42,   196,    -1,   197,    -1,   196,   176,   197,
      -1,     3,   192,    -1,    -1,   104,   179,    -1,   104,   179,
     176,   179,    -1,   104,   179,   105,   179,    -1,    -1,    95,
     200,    -1,     3,    -1,   200,   176,     3,    -1,    -1,   201,
      34,    -1,   201,    61,    -1,   201,    65,    -1,   201,    86,
      -1,   201,   127,    -1,   201,   122,    -1,   201,   126,    -1,
     201,   125,    -1,   203,    -1,   202,   176,   203,    -1,    26,
      -1,   179,   204,    -1,    39,     3,    -1,     3,    -1,    -1,
     206,    -1,   205,   176,   206,    -1,   207,    -1,   209,    -1,
       3,   204,   216,    -1,     3,   173,     3,   204,   216,    -1,
     219,   208,     3,    -1,   174,   205,   175,    -1,    39,    -1,
      -1,   206,   210,    98,   207,   214,    -1,   206,   127,   207,
      -1,   206,   127,   207,   113,   179,    -1,   206,   212,   211,
      98,   207,   215,    -1,   206,   110,   213,    98,   207,    -1,
      -1,    90,    -1,    49,    -1,    -1,   112,    -1,   102,    -1,
     120,    -1,   102,   211,    -1,   120,   211,    -1,    -1,    -1,
     215,    -1,   113,   179,    -1,   145,   174,   200,   175,    -1,
     146,    99,   217,   174,   218,   175,    -1,    91,    99,   217,
     174,   218,   175,    -1,    79,    99,   217,   174,   218,   175,
      -1,    -1,    82,    98,    -1,    -1,     3,    -1,   218,   176,
       3,    -1,   174,   188,   175,    -1,   220,    -1,    62,   221,
      80,     3,   189,   195,   198,    -1,   221,   101,    -1,   221,
     117,    -1,   221,    91,    -1,    -1,    62,   221,   222,    80,
     205,   189,    -1,     3,   223,    -1,   222,   176,     3,   223,
      -1,    -1,   173,    26,    -1,    62,   221,    80,   222,   145,
     205,   189,    -1,   224,    -1,    63,   136,     3,    -1,   225,
      -1,    48,    92,     3,   113,     3,   174,   226,   175,    -1,
      48,    92,    93,   156,     3,   113,     3,   174,   226,   175,
      -1,    48,   144,    92,     3,   113,     3,   174,   226,   175,
      -1,    48,   144,    92,    93,   156,     3,   113,     3,   174,
     226,   175,    -1,     3,    -1,   226,   176,     3,    -1,   227,
      -1,    63,    92,     3,    -1,   228,    -1,   139,   136,     3,
      -1,   229,    -1,    94,   231,   232,     3,   233,   148,   235,
     230,    -1,    -1,   115,    99,   142,   238,    -1,    -1,   231,
     101,    -1,   231,    58,    -1,   231,    86,    -1,   231,    91,
      -1,    95,    -1,    -1,    -1,   174,   234,   175,    -1,     3,
      -1,   234,   176,     3,    -1,   174,   237,   175,    -1,    -1,
     235,   176,   236,   174,   237,   175,    -1,   179,    -1,    68,
      -1,   237,   176,   179,    -1,   237,   176,    68,    -1,    94,
     231,   232,     3,   129,   238,   230,    -1,     3,    20,   179,
      -1,     3,    20,    68,    -1,   238,   176,     3,    20,   179,
      -1,   238,   176,     3,    20,    68,    -1,   239,    -1,   121,
     231,   232,     3,   233,   148,   235,   230,    -1,   121,   231,
     232,     3,   129,   238,   230,    -1,   121,   231,   232,     3,
     233,   188,   230,    -1,   240,    -1,   142,   241,   205,   129,
     242,   189,   195,   198,    -1,    -1,   231,   101,    -1,   231,
      91,    -1,     3,    20,   179,    -1,     3,   173,     3,    20,
     179,    -1,   242,   176,     3,    20,   179,    -1,   242,   176,
       3,   173,     3,    20,   179,    -1,   243,    -1,    48,    57,
     244,     3,    -1,    48,   123,   244,     3,    -1,    -1,    93,
     156,    -1,   245,    -1,   146,     3,    -1,   146,    57,     3,
      -1,   246,    -1,    48,   247,   136,   244,     3,   174,   248,
     175,    -1,    48,   247,   136,   244,     3,   173,     3,   174,
     248,   175,    -1,    48,   247,   136,   244,     3,   174,   248,
     175,   259,    -1,    48,   247,   136,   244,     3,   259,    -1,
      48,   247,   136,   244,     3,   173,     3,   174,   248,   175,
     259,    -1,    48,   247,   136,   244,     3,   173,     3,   259,
      -1,    -1,   133,    -1,   249,    -1,   248,   176,   249,    -1,
     116,    99,   174,   250,   175,    -1,    99,   174,   200,   175,
      -1,    92,   174,   200,   175,    -1,    81,    92,   174,   200,
     175,    -1,    81,    99,   174,   200,   175,    -1,    51,   174,
     179,   175,    -1,     3,    -1,   250,   176,     3,    -1,    -1,
     251,     3,   257,   252,    -1,    -1,   252,    18,   111,    -1,
     252,   111,    -1,   252,    68,     4,    -1,   252,    68,     5,
      -1,   252,    68,     7,    -1,   252,    68,     6,    -1,   252,
      36,    -1,   252,    36,   174,     5,   176,     5,   175,    -1,
     252,    36,   174,     5,   175,    -1,   252,   144,   174,   200,
     175,    -1,   252,   144,    99,    -1,   252,   144,    -1,   252,
     116,    99,    -1,   252,    99,    -1,   252,    52,     4,    -1,
     252,    51,   174,   179,   175,    -1,    -1,   174,     5,   175,
      -1,   174,     5,   176,     5,   175,    -1,    -1,    43,    -1,
      -1,   255,   143,    -1,   255,   155,    -1,    -1,   256,    55,
     129,     4,    -1,   256,    56,     4,    -1,    46,   253,    -1,
     132,   253,   255,    -1,   128,   253,   255,    -1,   109,   253,
     255,    -1,    96,   253,   255,    -1,    89,   253,   255,    -1,
      45,   253,   255,    -1,   118,   253,   255,    -1,    69,   253,
     255,    -1,    78,   253,   255,    -1,    71,   253,   255,    -1,
      72,    -1,   141,    -1,   135,    -1,    70,    -1,   153,    -1,
      55,   253,   256,    -1,   147,   174,     5,   175,   256,    -1,
      43,   253,    -1,   149,   174,     5,   175,    -1,   140,    -1,
      40,    -1,   108,    -1,   106,    -1,   131,   254,   256,    -1,
     134,   254,   256,    -1,   107,   254,   256,    -1,   100,   254,
     256,    -1,    74,   174,   258,   175,   256,    -1,   129,   174,
     258,   175,   256,    -1,    41,    -1,     4,    -1,   258,   176,
       4,    -1,   260,   208,   188,    -1,    -1,    91,    -1,   121,
      -1,   261,    -1,   129,   123,     3,    -1,   129,   123,    68,
      -1,   129,   262,    -1,   263,    -1,   262,   176,   263,    -1,
       8,    20,   179,    -1,     8,     9,   179,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   263,   263,   264,   269,   276,   277,   278,   296,   304,
     312,   318,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     349,   350,   351,   352,   355,   356,   357,   358,   359,   362,
     363,   366,   367,   370,   371,   374,   374,   375,   375,   376,
     377,   378,   382,   386,   387,   388,   389,   390,   391,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   408,   409,   410,   413,   414,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   428,   430,   432,   434,
     438,   446,   457,   458,   461,   462,   465,   466,   467,   471,
     481,   482,   496,   497,   498,   499,   502,   509,   517,   518,
     519,   522,   523,   526,   527,   530,   531,   534,   535,   538,
     546,   547,   548,   549,   552,   553,   556,   557,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   571,   572,   573,
     581,   587,   588,   589,   592,   593,   596,   597,   601,   607,
     608,   609,   612,   613,   617,   619,   621,   623,   625,   629,
     630,   631,   634,   635,   638,   639,   642,   643,   644,   647,
     648,   651,   652,   656,   658,   660,   662,   665,   666,   669,
     670,   673,   677,   685,   693,   694,   695,   696,   700,   703,
     704,   707,   707,   709,   713,   720,   729,   736,   743,   753,
     761,   773,   778,   786,   793,   802,   809,   817,   824,   832,
     833,   836,   837,   838,   839,   840,   843,   843,   846,   847,
     850,   860,   873,   874,   874,   877,   878,   879,   880,   883,
     887,   888,   889,   890,   896,   899,   905,   910,   916,   922,
     929,   930,   931,   935,   946,   957,   968,   982,   986,   987,
     990,   991,   995,   999,  1000,  1004,  1011,  1020,  1024,  1029,
    1033,  1038,  1042,  1043,  1046,  1047,  1050,  1051,  1052,  1053,
    1054,  1055,  1058,  1059,  1062,  1062,  1072,  1073,  1074,  1075,
    1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,
    1086,  1087,  1088,  1091,  1092,  1093,  1096,  1097,  1100,  1101,
    1102,  1105,  1106,  1107,  1111,  1112,  1113,  1114,  1115,  1116,
    1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,
    1127,  1128,  1129,  1130,  1131,  1132,  1133,  1134,  1135,  1136,
    1137,  1138,  1139,  1140,  1141,  1144,  1145,  1148,  1152,  1153,
    1154,  1158,  1161,  1162,  1163,  1164,  1164,  1166,  1167
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
  "DECIMAL", "DATE", "ESCAPED", "ENUM", "END", "ELSE", "EXPLAIN", "FLOAT",
  "FORCE", "FROM", "FULLTEXT", "FOR", "GROUP", "HOUR_MINUTE",
  "HOUR_MICROSECOND", "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "INTEGER",
  "INNER", "IGNORE", "INDEX", "IF", "INSERT", "INTO", "INT", "INTERVAL",
  "JOIN", "KEY", "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT",
  "OFFSET", "LONGBLOB", "MEDIUMTEXT", "MEDIUMBLOB", "MEDIUMINT", "NATURAL",
  "NULLX", "OUTER", "ON", "ORDER", "ONDUPLICATE", "PRIMARY", "QUICK",
  "REAL", "ROLLUP", "RIGHT", "REPLACE", "SQL_SMALL_RESULT", "SCHEMA",
  "SOME", "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT", "STRAIGHT_JOIN",
  "SMALLINT", "SET", "SELECT", "TINYTEXT", "TINYINT", "TEMPORARY", "TEXT",
  "TIMESTAMP", "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME",
  "UPDATE", "UNSIGNED", "UNIQUE", "USING", "USE", "VARCHAR", "VALUES",
  "VARBINARY", "WHERE", "WHEN", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL",
  "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT",
  "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH", "FCONCAT",
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
  "opt_dot_star", "drop_table_stmt", "create_index_stmt", "index_col_list",
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
     416,   417,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   177,   178,   178,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   180,   180,   181,   181,   182,   179,   183,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   184,   184,   184,   179,   179,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   179,   179,   179,   179,
     186,   186,   179,   179,   179,   179,   179,   179,   179,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   192,
     192,   193,   193,   194,   194,   195,   195,   196,   196,   197,
     198,   198,   198,   198,   199,   199,   200,   200,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   202,   202,   202,
     203,   204,   204,   204,   205,   205,   206,   206,   207,   207,
     207,   207,   208,   208,   209,   209,   209,   209,   209,   210,
     210,   210,   211,   211,   212,   212,   213,   213,   213,   214,
     214,   215,   215,   216,   216,   216,   216,   217,   217,   218,
     218,   219,   187,   220,   221,   221,   221,   221,   220,   222,
     222,   223,   223,   220,   187,   224,   187,   225,   225,   225,
     225,   226,   226,   187,   227,   187,   228,   187,   229,   230,
     230,   231,   231,   231,   231,   231,   232,   232,   233,   233,
     234,   234,   235,   236,   235,   237,   237,   237,   237,   229,
     238,   238,   238,   238,   187,   239,   239,   239,   187,   240,
     241,   241,   241,   242,   242,   242,   242,   187,   243,   243,
     244,   244,   187,   245,   245,   187,   246,   246,   246,   246,
     246,   246,   247,   247,   248,   248,   249,   249,   249,   249,
     249,   249,   250,   250,   251,   249,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   253,   253,   253,   254,   254,   255,   255,
     255,   256,   256,   256,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   258,   258,   259,   260,   260,
     260,   187,   261,   261,   261,   262,   262,   263,   263
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
       4,     0,     2,     7,     1,     3,     1,     8,    10,     9,
      11,     1,     3,     1,     3,     1,     3,     1,     8,     0,
       4,     0,     2,     2,     2,     2,     1,     0,     0,     3,
       1,     3,     3,     0,     6,     1,     1,     3,     3,     7,
       3,     3,     5,     5,     1,     8,     7,     7,     1,     8,
       0,     2,     2,     3,     5,     5,     7,     1,     4,     4,
       0,     2,     1,     2,     3,     1,     8,    10,     9,     6,
      11,     8,     0,     1,     1,     3,     5,     4,     4,     5,
       5,     4,     1,     3,     0,     4,     0,     3,     2,     3,
       3,     3,     3,     2,     7,     5,     5,     3,     2,     3,
       2,     3,     5,     0,     3,     5,     0,     1,     0,     2,
       2,     0,     4,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       3,     5,     2,     4,     1,     1,     1,     1,     3,     3,
       3,     3,     5,     5,     1,     1,     3,     3,     0,     1,
       1,     1,     3,     3,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   262,   187,     0,   211,   211,     0,   128,     0,   211,
       0,     0,     0,    99,   182,   194,   196,   203,   205,   207,
     234,   238,   247,   252,   255,   341,   250,     0,   250,   263,
       0,     0,     0,     0,     0,   217,   217,     0,     0,   344,
     345,     0,     0,     0,     0,   253,     0,     1,     2,     0,
       0,     0,     0,     0,     0,   250,   191,     0,   186,   184,
     185,     0,   204,   195,   213,   214,   215,   216,   212,     0,
       0,     0,     0,   342,   343,     0,     4,     7,     8,    10,
       9,     6,     0,     0,     0,   139,   129,    96,     0,    97,
      98,   130,   131,   132,    11,   134,   136,   135,   133,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,   100,   137,   206,
     215,   212,   143,     0,     0,   144,   146,   147,   153,   254,
       3,   251,   248,     0,     0,   249,     0,     0,     0,     0,
     189,   102,     0,     0,     0,   218,   218,   348,   347,   346,
       0,    43,     0,    28,    27,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   140,     0,
       0,     0,   176,     0,     0,     0,     0,   161,   160,   164,
     168,   165,     0,     0,   162,   152,     0,     0,     0,     0,
       0,   338,   192,     0,   115,     0,   102,   191,     0,     0,
       0,     0,     0,     5,    41,    44,     0,    38,     0,     0,
      88,     0,     0,     0,     0,    74,    72,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,    21,    22,    20,    94,    92,
      36,     0,    34,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    23,    24,    26,    12,    13,    14,
      15,    16,    17,    25,   141,   102,   138,   143,     0,     0,
       0,   148,   181,   151,     0,   102,   145,   162,   162,     0,
     155,     0,   163,     0,   150,     0,     0,     0,     0,   339,
     340,     0,   274,   259,   153,   103,     0,   120,   102,   188,
     190,     0,   209,   220,     0,     0,   209,     0,   209,     0,
      52,     0,    86,     0,     0,     0,    51,     0,     0,    63,
       0,     0,     0,     0,    53,    54,    55,    56,    57,    58,
      66,    67,    68,     0,     0,     0,    37,    35,     0,     0,
      95,    93,    47,     0,     0,     0,     0,     0,     0,   104,
     176,   178,   178,   178,     0,     0,     0,   115,   166,   167,
       0,     0,   169,     0,   201,     0,     0,     0,     0,   338,
       0,     0,     0,     0,     0,     0,   264,     0,     0,     0,
       0,   183,   193,     0,     0,     0,   229,   219,     0,     0,
     209,   236,   209,   237,    42,    90,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,    39,     0,     0,     0,    30,     0,
     113,   149,     0,     0,     0,     0,   243,     0,     0,   120,
     158,   156,     0,     0,   154,   170,     0,   197,     0,     0,
       0,     0,   274,   261,     0,     0,     0,     0,     0,     0,
     338,   274,     0,   337,   108,   116,   117,   121,   231,   230,
       0,     0,   221,   226,   225,     0,   223,   208,   235,    87,
      91,     0,    61,    60,     0,    65,     0,     0,    75,    76,
      69,     0,    71,    46,     0,    50,    40,    33,    31,    32,
       0,     0,   115,   177,     0,     0,     0,     0,     0,     0,
     239,   171,     0,   157,   202,     0,   199,     0,     0,     0,
       0,     0,   126,     0,     0,     0,   258,   265,   325,   334,
     293,   293,   293,   293,   293,   318,   293,   315,     0,   293,
     293,   293,   296,   327,   296,   326,   293,   293,   293,     0,
     296,   293,   296,   317,   324,   316,     0,     0,   319,   276,
     109,   110,   119,     0,     0,     0,     0,     0,   222,     0,
       0,     0,     0,    64,    77,    78,    79,    80,    84,    83,
      85,    82,    81,     0,    48,   108,   111,   114,   120,   179,
       0,     0,     0,   244,   245,     0,     0,   198,     0,   338,
     271,     0,     0,   268,     0,   267,   272,     0,     0,   322,
     298,   304,   301,   298,   298,     0,   298,   298,   298,   297,
     301,   301,   298,   298,   298,     0,   301,   298,   301,     0,
       0,   275,   118,   123,   122,   210,   233,   232,   228,   227,
       0,    62,    59,    70,   106,     0,     0,   105,   124,   175,
       0,   174,   173,     0,   172,   200,   260,   269,   270,   127,
     266,     0,     0,   310,   320,   312,   314,   335,     0,   313,
     309,   308,   331,   330,   307,   311,   306,     0,   328,   305,
     329,     0,     0,     0,   283,     0,     0,     0,   290,   278,
       0,   288,     0,   112,   108,     0,   101,   180,   246,   273,
     294,     0,   299,   300,     0,     0,   301,     0,   301,   301,
     323,   277,     0,     0,   291,   279,   280,   282,   281,   289,
     287,     0,   224,   107,   125,     0,     0,   303,   332,   336,
     333,   321,     0,     0,     0,   295,   302,   285,     0,   292,
     286,     0,   284
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,   234,   235,   236,   368,   441,   249,   434,   158,
      12,    13,   224,   450,   606,   582,   667,   522,   327,   485,
     486,   411,   716,   543,    41,   117,   118,   198,   124,   125,
     126,   216,   127,   213,   313,   214,   309,   464,   465,   301,
     453,   610,   128,    14,    32,    61,   140,    15,    16,   395,
      17,    18,    19,   416,    35,    69,   230,   334,   420,   590,
     495,   332,    20,    21,    44,   305,    22,    50,    23,    24,
      31,   405,   406,   627,   407,   651,   629,   640,   683,   684,
     579,   688,   323,   324,    25,    39,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -574
static const yytype_int16 yypact[] =
{
     169,   104,  -574,    83,  -574,  -574,    19,  -574,   -87,     3,
      50,    59,  -103,  -574,  -574,  -574,  -574,  -574,  -574,  -574,
    -574,  -574,  -574,  -574,  -574,  -574,   -22,    16,   -22,  -574,
     -16,    57,    96,   202,   212,   -29,   -29,   186,    37,    42,
    -574,   411,   227,   239,     6,  -574,   243,  -574,   169,   132,
     251,   190,   154,   329,    17,   -22,   168,   341,  -574,  -574,
    -574,   -63,  -574,  -574,  -574,  -574,  -574,  -574,  -574,   345,
     364,  1346,  1346,  -574,  -574,   371,    82,  -574,  -574,  -574,
    -574,   372,  1346,  1346,  1346,  -574,  -574,  -574,   678,  -574,
    -574,  -574,  -574,  -574,  -574,  -574,  -574,  -574,  -574,   216,
     219,   222,   246,   253,   264,   272,   283,   288,   297,   301,
     311,   340,   342,   343,   344,  1346,  2433,   -62,  -574,  -574,
       7,    10,    12,     4,  -106,   255,  -574,  -574,   347,  -574,
    -574,  -574,  -574,   440,   512,  -574,   406,   367,   521,   499,
    -574,    62,  -108,     6,   523,  -101,   -71,  2123,  2123,  -574,
     524,  1346,  1346,   623,   623,  -574,  1346,  2102,    98,   399,
    1346,   503,  1346,  1346,   709,  1346,  1346,  1346,  1346,  1346,
    1346,  1346,  1346,  1346,  1346,  1628,  -574,  1346,  1346,  1346,
    1346,  1346,    32,   356,   300,  1346,   583,  1346,  1346,  1346,
    1346,  1346,  1346,  1346,  1346,  1346,  1346,   528,  -574,     6,
    1346,   529,   -45,   359,   120,   532,     6,  -574,  -574,  -574,
     108,  -574,     6,   441,   428,  -574,   538,   368,   432,   546,
     548,    71,  -574,  1346,   438,     6,    64,   168,   551,   552,
     410,   551,   164,  -574,  1023,  -574,   384,  2123,  2081,   113,
    -574,  1346,  1346,   385,   256,  -574,  -574,  -574,  1649,   774,
    1206,  1448,   386,  1691,  1717,  1738,  1765,  1786,  1807,  1828,
    1849,  1511,  1532,  1558,  -574,   782,   972,  1163,  2497,  2497,
    -574,    46,  -574,   399,  1346,  1346,   388,  1346,  2455,   389,
     390,   391,   899,   834,   466,   475,   334,   396,   396,   536,
     536,   536,   536,  -574,  -574,    64,  -574,    36,   484,   485,
     493,  -574,  -574,  -574,    -9,    76,   255,   428,   428,   495,
     481,     6,  -574,   497,  -574,   593,   594,   424,   486,  -574,
    -574,   599,   250,  -574,   347,  2123,   561,   500,    64,  -574,
    -574,   585,   -60,  -574,   142,   433,   -60,   433,   494,  1346,
    -574,  1346,  -574,  1346,  2341,  2144,  -574,  1346,  1346,  -574,
    1346,  2320,   513,   513,  -574,  -574,  -574,  -574,  -574,  -574,
    -574,  -574,  -574,  1346,  1346,  1346,  -574,  -574,  1346,   436,
    2497,  2497,   399,  2476,  1346,   399,   399,   399,   437,   530,
     -45,   533,   533,   533,  1346,   613,   617,   438,  -574,  -574,
       6,  1346,   -78,     6,  -574,   159,   447,   593,   619,    77,
     449,   -38,   450,   452,   535,   163,  -574,   624,   399,   625,
    1346,  -574,  -574,   964,   539,   626,  -574,  -574,   628,  1089,
      45,  -574,    45,  -574,  -574,  2123,  2362,  -574,  1346,  1607,
      67,  1875,  1346,  1346,   460,   464,  1896,  1579,  1923,   465,
    -574,  1346,   479,  1346,   744,   480,   482,   483,  -574,   614,
     587,  -574,   578,   504,   505,   506,  2123,   667,    -8,   500,
    -574,  2123,  1346,   514,  -574,  -574,   -78,  -574,   686,   593,
     171,   516,   250,  -574,  1346,   517,   519,   694,   694,   525,
      78,   250,  2176,  -574,   153,   522,  -574,  1391,  -574,  2123,
     558,   681,  -574,  -574,  2123,   176,  -574,  -574,  -574,  -574,
    2123,  1346,  -574,  -574,  1346,  -574,  1944,  2173,  -574,  -574,
    -574,  1346,  -574,  -574,   527,  -574,   744,  -574,  -574,  -574,
    1346,  1346,   438,  -574,   701,   701,   701,  1346,  1346,   702,
    -574,  2123,   694,  -574,  -574,   179,  -574,   593,   195,  1965,
     694,   694,  -574,   198,   201,   703,  -574,  -574,  -574,  -574,
     534,   534,   534,   534,   534,  -574,   534,  -574,   537,   534,
     534,   534,   666,  -574,   666,  -574,   534,   534,   534,   544,
     666,   534,   666,  -574,  -574,  -574,   545,   547,  -574,  -574,
    -574,  -574,  -574,   625,  1346,  1346,   551,  1155,  -574,  1280,
     549,  1986,  2007,  -574,  -574,  -574,  -574,  -574,  -574,  -574,
    -574,  -574,  -574,  2033,  -574,  2383,    18,  2123,   500,  -574,
     208,   213,   225,  2123,  2123,   690,   231,  -574,   234,    81,
    -574,   236,   259,  -574,   717,  -574,  -574,   275,   719,  -574,
    -574,  -574,  -574,  -574,  -574,   718,  -574,  -574,  -574,  -574,
    -574,  -574,  -574,  -574,  -574,   718,  -574,  -574,  -574,   724,
     725,   269,  -574,  2123,  2123,   557,  -574,  2123,  -574,  2123,
    1089,  -574,  -574,  -574,  -574,   618,  1346,  -574,   641,  -574,
     735,  -574,  -574,  1346,  -574,  -574,  -574,  -574,  -574,  -574,
    -574,   752,   277,   -95,   203,   -95,   -95,  -574,   291,   -95,
     -95,   -95,   203,   203,   -95,   -95,   -95,   293,   203,   -95,
     203,   586,   600,   647,   602,   609,   756,   322,  -574,  -574,
     685,   -74,   298,  -574,  2383,   694,  -574,  -574,  2123,  -574,
    -574,   780,  -574,  -574,   657,   783,  -574,   784,  -574,  -574,
    -574,  -574,   785,  1346,  -574,  -574,  -574,  -574,  -574,  -574,
    -574,   694,  -574,  -574,   637,   639,   811,  -574,   203,  -574,
     203,   203,   302,  2054,   306,  -574,  -574,  -574,   812,  -574,
    -574,   643,  -574
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -574,   768,   -41,  -323,  -574,  -574,  -574,  -574,   469,   662,
    -574,  -115,  -193,  -574,  -574,  -573,  -574,  -574,  -366,  -574,
     240,  -445,  -574,  -476,  -574,  -574,   630,  -118,    48,   620,
    -207,   501,  -574,  -574,   123,  -574,  -574,  -574,   365,   453,
     101,   -13,  -574,  -574,  -574,   775,   654,  -574,  -574,  -371,
    -574,  -574,  -574,  -314,   220,   814,   705,  -574,   550,  -574,
     193,  -230,  -574,  -574,  -574,  -574,  -574,     8,  -574,  -574,
    -574,   412,   401,  -574,  -574,  -574,  -112,  -348,  -239,  -437,
    -574,   241,  -396,  -574,  -574,  -574,   813
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -258
static const yytype_int16 yytable[] =
{
     116,   336,   544,   473,   202,   310,  -240,   122,   203,   122,
    -242,   384,   528,  -241,   530,   176,   424,   143,   199,    51,
     136,   459,   421,   205,   423,   740,   470,    37,   228,    64,
     147,   148,   664,   329,   298,   462,    53,   225,   270,   176,
      73,   153,   154,   155,   243,   439,   299,   157,   722,    42,
     271,   197,   366,    45,   475,   414,   616,    65,   231,    47,
     723,   476,    66,   138,   621,   622,    67,   463,   144,    48,
     206,    49,    68,   229,   175,   197,    54,   177,   178,   179,
     180,   181,   182,   183,   546,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   535,    56,
     741,   300,   379,   229,   392,    74,   497,    46,   498,    52,
     137,   237,   387,   144,   200,   238,   415,   338,   514,   244,
     248,   250,   251,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,     7,   412,   265,   266,   267,   268,
     269,   743,    38,   272,   278,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   608,   367,   369,   116,
     414,    26,   319,   668,   385,   529,   618,   378,   319,   319,
     665,   204,   319,   240,   241,    33,    57,  -240,   123,   380,
     123,  -242,   325,   460,  -241,   201,   466,    58,   342,   343,
     580,   226,   320,    55,   666,    71,    27,    59,   320,   320,
     344,   345,   320,   692,   693,    62,    72,  -191,   351,   698,
     307,   700,   223,    60,   223,    63,   641,     1,    75,    34,
     581,   496,   646,   676,   648,    36,   223,    28,   308,    43,
     119,     2,     3,   370,   371,   139,   373,    29,  -191,   744,
     206,   175,   503,   504,   321,   322,   129,   295,    30,   242,
    -256,   472,   386,  -257,   132,   150,   151,   442,   724,   725,
     445,   446,   447,     4,   242,   754,   177,   178,   179,   180,
     181,   182,   183,   328,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   703,   131,   748,
       5,   750,   751,   483,     7,   303,   206,    64,     6,     7,
     425,   400,   426,   133,   207,   704,   429,   430,     8,   431,
     134,     9,   337,   274,   275,    10,   276,   417,   418,   277,
     705,   706,   436,   437,   438,    65,   735,   736,   737,   738,
     120,   401,   135,   444,   467,   468,   347,   707,   480,   481,
     121,   139,   402,   456,   141,   208,   536,   468,   145,   403,
     461,   588,   589,  -159,   617,   468,   655,   209,   190,   191,
     192,   193,   194,   195,   196,   210,   404,   146,   708,   487,
     619,   481,   489,   623,   624,   211,   625,   624,   494,    37,
     709,   152,   212,   669,   670,   710,   215,   500,   671,   670,
     159,   506,   507,   160,   685,   686,   161,   689,   690,   691,
     672,   670,   516,   694,   695,   696,   674,   624,   699,   675,
     468,   677,   624,   711,    76,    77,    78,    79,    80,    81,
     162,   531,   192,   193,   194,   195,   196,   163,    82,    83,
     388,   389,   348,   539,   678,   624,    84,    85,   164,   630,
     631,   632,   633,   217,   634,    86,   165,   636,   637,   638,
     680,   681,   720,   721,   642,   643,   644,   166,    87,   647,
     591,    88,   167,   592,    89,    90,   726,   727,   728,   727,
     603,   168,    91,   742,   589,   169,    92,   757,   758,   605,
     607,   760,   624,   454,   455,   170,   613,   614,   188,   189,
     190,   191,   192,   193,   194,   195,   196,    93,   189,   190,
     191,   192,   193,   194,   195,   196,    76,    77,    78,    79,
      80,    81,   611,   612,   171,   218,   172,   173,   174,   219,
      82,    83,    94,   220,   221,   222,   227,   233,    84,     7,
     273,   294,   297,    95,   302,   304,    96,    97,    98,   311,
     312,   314,   315,   653,   654,   316,   657,   245,   659,   317,
      87,   318,   326,    88,   331,   333,    89,    90,   335,   340,
     346,   354,   372,   375,   376,   377,   196,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   381,   382,   115,    76,    77,    78,    79,
      80,    81,   383,   390,   391,   393,   394,   396,   397,   398,
      82,    83,   399,   409,   410,   413,   246,   419,    84,   414,
     433,   440,   448,   449,    94,   452,   457,   279,   280,   494,
     458,   469,   471,   474,   477,   714,   478,   482,   484,   491,
      87,   492,   718,    88,   479,   508,    89,    90,   490,   509,
     513,   247,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   515,   517,   520,   518,   519,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   521,   523,   115,   524,   525,
     526,    76,    77,    78,    79,    80,    81,   527,   532,   534,
     537,   540,   753,   541,    94,    82,    83,   542,   583,   545,
     586,   587,   604,    84,   609,   615,   626,   281,   628,   639,
     673,   635,    76,    77,    78,    79,    80,    81,   645,   649,
     679,   650,   687,   660,   682,    87,    82,    83,    88,   701,
     702,    89,    90,   415,    84,   252,   715,   713,   717,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   719,    87,   282,   731,    88,
     734,   729,    89,    90,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   730,   732,    76,    77,    78,
      79,    80,    81,   733,   739,   745,   746,   747,   749,    94,
     752,    82,    83,   178,   179,   180,   181,   182,   183,    84,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   624,   755,   756,   130,   761,   762,   239,
      94,    87,   435,   652,    88,   408,   306,    89,    90,   156,
     296,   533,   142,   451,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      70,   232,   115,   712,   350,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   330,   547,   115,   538,    94,   697,   422,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,    82,    83,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    87,     0,   115,    88,
       0,     0,    89,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,    82,    83,     0,   179,   180,   181,   182,   183,    84,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,     0,     0,     0,     0,     0,
      94,    87,     0,     0,    88,     0,     0,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,   488,   177,   178,   179,   180,   181,   182,   183,
       0,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,     0,     0,   115,     0,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,    82,    83,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    87,     0,   115,    88,
       0,     0,    89,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   493,    76,    77,
      78,    79,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,    82,    83,     0,     0,   180,   181,   182,   183,
      84,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,     0,     0,     0,     0,   339,
      94,     0,    87,     0,     0,    88,     0,     0,    89,    90,
       0,     0,     0,     0,     0,     0,   177,   178,   179,   180,
     181,   182,   183,   656,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,     0,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,     0,     0,   115,     0,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,    82,    83,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    87,     0,   115,
      88,     0,     0,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   658,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,    82,    83,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,    87,     0,     0,    88,     0,     0,    89,
      90,   177,   178,   179,   180,   181,   182,   183,     0,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,     0,     0,   115,     0,     0,    94,   177,   178,
     179,   180,   181,   182,   183,     0,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   584,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,     0,     0,
     115,   177,   178,   179,   180,   181,   182,   183,     0,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   177,   178,   179,   180,   181,   182,   183,     0,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,     0,     0,   585,   177,   178,
     179,   180,   181,   182,   183,     0,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   177,
     178,   179,   180,   181,   182,   183,     0,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
       0,     0,     0,     0,     0,     0,     0,   177,   178,   179,
     180,   181,   182,   183,   353,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   177,   178,
     179,   180,   181,   182,   183,     0,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   177,
     178,   179,   180,   181,   182,   183,     0,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
       0,     0,     0,     0,     0,     0,     0,   363,     0,   501,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   177,   178,   179,   180,   181,   182,   183,   364,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,     0,     0,     0,     0,   177,   178,   179,
     180,   181,   182,   183,   365,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   177,   178,
     179,   180,   181,   182,   183,   511,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     0,
       0,     0,     0,     0,     0,   177,   178,   179,   180,   181,
     182,   183,   502,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   177,   178,   179,   180,
     181,   182,   183,   264,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   177,   178,   179,
     180,   181,   182,   183,   349,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   177,   178,
     179,   180,   181,   182,   183,     0,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   177,
     178,   179,   180,   181,   182,   183,   355,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
       0,     0,     0,     0,     0,   177,   178,   179,   180,   181,
     182,   183,   356,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   177,   178,   179,   180,
     181,   182,   183,   357,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,     0,     0,     0,
       0,     0,     0,   177,   178,   179,   180,   181,   182,   183,
     358,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   177,   178,   179,   180,   181,   182,
     183,   359,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   177,   178,   179,   180,   181,
     182,   183,   360,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   177,   178,   179,   180,
     181,   182,   183,   361,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   177,   178,   179,
     180,   181,   182,   183,   362,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,     0,
       0,     0,     0,   177,   178,   179,   180,   181,   182,   183,
     505,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   177,   178,   179,   180,   181,   182,
     183,   510,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,     0,     0,     0,     0,
       0,   177,   178,   179,   180,   181,   182,   183,   512,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   177,   178,   179,   180,   181,   182,   183,   593,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   177,   178,   179,   180,   181,   182,   183,
     620,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   177,   178,   179,   180,   181,   182,
     183,   661,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,     0,     0,     0,     0,
       0,     0,   662,   177,   178,   179,   180,   181,   182,   183,
       0,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,     0,     0,     0,   663,     0,
       0,     0,     0,     0,     0,     0,   548,   549,   341,   550,
       0,   551,   552,     0,     0,     0,     0,     0,     0,   759,
       0,   553,   594,   595,     0,     0,     0,   596,     0,   597,
       0,     0,     0,     0,     0,   554,   555,   556,   557,     0,
     558,     0,     0,   156,   559,     0,     0,   598,   599,     0,
     600,     0,     0,     0,     0,   560,     0,     0,     0,     0,
       0,     0,   561,     0,     0,     0,   562,     0,     0,     0,
       0,   428,   563,   564,   565,   566,     0,     0,     0,     0,
       0,     0,     0,     0,   567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   568,   569,     0,   570,   571,     0,
     572,   573,     0,     0,     0,     0,   574,   575,     0,     0,
       0,     0,     0,   576,     0,   577,   601,   602,     0,   578,
     177,   178,   179,   180,   181,   182,   183,     0,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   177,   178,   179,   180,   181,   182,   183,     0,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   177,   178,   179,   180,   181,   182,   183,     0,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   177,   178,   179,   180,   181,   182,   183,
     432,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,     0,   427,     0,     0,     0,
     580,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,   499,     0,     0,
       0,     0,     0,   177,   178,   179,   180,   181,   182,   183,
     581,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,   177,   178,   179,   180,   181,
     182,   183,   197,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   177,   178,   179,   180,
     181,   182,   183,   374,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,     0,     0,     0,
    -258,  -258,  -258,  -258,   443,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196
};

static const yytype_int16 yycheck[] =
{
      41,   231,   478,   399,   122,   212,     3,     3,   123,     3,
       3,    20,    20,     3,   459,     3,   339,    80,    80,     3,
       3,   387,   336,   129,   338,    99,   397,     8,   129,    58,
      71,    72,   605,   226,    79,   113,    28,   145,     6,     3,
       3,    82,    83,    84,   159,   368,    91,    88,   143,   136,
      18,    39,     6,     3,    92,   115,   532,    86,   129,     0,
     155,    99,    91,    55,   540,   541,    95,   145,   176,   172,
     176,    93,   101,   174,   115,    39,    92,    10,    11,    12,
      13,    14,    15,    16,   480,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   469,     3,
     174,   146,   295,   174,   311,    68,   420,    57,   422,    93,
      93,   152,   305,   176,   176,   156,   176,   232,   441,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   130,   328,   177,   178,   179,   180,
     181,   714,   123,   111,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   522,   111,   273,   200,
     115,    57,    91,   608,   173,   173,   537,   282,    91,    91,
     152,   123,    91,    75,    76,    92,    80,   174,   174,   297,
     174,   174,   223,   390,   174,   173,   393,    91,    75,    76,
      37,   143,   121,   136,   176,     9,    92,   101,   121,   121,
     241,   242,   121,   640,   641,     3,    20,   145,   249,   646,
     102,   648,   150,   117,   150,     3,   564,    48,   176,   136,
      67,   176,   570,   619,   572,     5,   150,   123,   120,     9,
       3,    62,    63,   274,   275,   173,   277,   133,   176,   715,
     176,   282,   175,   176,   173,   174,     3,   199,   144,   151,
     172,   174,   176,   172,     3,   173,   174,   372,    55,    56,
     375,   376,   377,    94,   151,   741,    10,    11,    12,    13,
      14,    15,    16,   225,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    18,   156,   726,
     121,   728,   729,   408,   130,   175,   176,    58,   129,   130,
     341,    51,   343,   113,    49,    36,   347,   348,   139,   350,
     156,   142,   148,    13,    14,   146,    16,   175,   176,    19,
      51,    52,   363,   364,   365,    86,     4,     5,     6,     7,
      91,    81,     3,   374,   175,   176,    80,    68,   175,   176,
     101,   173,    92,   384,     3,    90,   175,   176,     3,    99,
     391,   175,   176,    98,   175,   176,   586,   102,    24,    25,
      26,    27,    28,    29,    30,   110,   116,     3,    99,   410,
     175,   176,   413,   175,   176,   120,   175,   176,   419,     8,
     111,     9,   127,   175,   176,   116,    39,   428,   175,   176,
     174,   432,   433,   174,   633,   634,   174,   636,   637,   638,
     175,   176,   443,   642,   643,   644,   175,   176,   647,   175,
     176,   175,   176,   144,     3,     4,     5,     6,     7,     8,
     174,   462,    26,    27,    28,    29,    30,   174,    17,    18,
     307,   308,   176,   474,   175,   176,    25,    26,   174,   551,
     552,   553,   554,     3,   556,    34,   174,   559,   560,   561,
     175,   176,   175,   176,   566,   567,   568,   174,    47,   571,
     501,    50,   174,   504,    53,    54,   175,   176,   175,   176,
     511,   174,    61,   175,   176,   174,    65,   175,   176,   520,
     521,   175,   176,   382,   383,   174,   527,   528,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    86,    23,    24,
      25,    26,    27,    28,    29,    30,     3,     4,     5,     6,
       7,     8,   525,   526,   174,     3,   174,   174,   174,   113,
      17,    18,   111,   156,     3,    26,     3,     3,    25,   130,
     174,     3,     3,   122,   175,     3,   125,   126,   127,    98,
     112,     3,   174,   584,   585,   113,   587,    44,   589,     3,
      47,     3,   114,    50,     3,     3,    53,    54,   148,   175,
     175,   175,   174,   174,   174,   174,    30,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,    99,    99,   174,     3,     4,     5,     6,
       7,     8,    99,    98,   113,    98,     3,     3,   174,   113,
      17,    18,     3,    42,   104,    20,   103,   174,    25,   115,
      97,   175,   175,    83,   111,    82,     3,    34,    35,   660,
       3,   174,     3,   174,   174,   666,   174,     3,     3,     3,
      47,     3,   673,    50,    99,   175,    53,    54,    99,   175,
     175,   138,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   175,   175,    42,   175,   175,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,    88,    98,   174,   174,   174,
     174,     3,     4,     5,     6,     7,     8,    20,   174,     3,
     174,   174,   733,   174,   111,    17,    18,     3,   176,   174,
     142,    20,   175,    25,     3,     3,     3,   124,   174,    43,
      20,   174,     3,     4,     5,     6,     7,     8,   174,   174,
       3,   174,     4,   174,     5,    47,    17,    18,    50,     5,
       5,    53,    54,   176,    25,    26,    95,   119,     3,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,     3,    47,   174,   111,    50,
       4,   175,    53,    54,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   175,   174,     3,     4,     5,
       6,     7,     8,   174,    99,     5,   129,     4,     4,   111,
       5,    17,    18,    11,    12,    13,    14,    15,    16,    25,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   176,   175,     4,    48,     5,   175,   157,
     111,    47,   353,   583,    50,   324,   206,    53,    54,   151,
     200,   466,    57,   380,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
      36,   146,   174,   660,    80,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   227,   481,   174,   472,   111,   645,   337,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,    47,    -1,   174,    50,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    12,    13,    14,    15,    16,    25,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    47,    -1,    -1,    50,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
      -1,    -1,    68,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,    -1,    -1,   174,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,    47,    -1,   174,    50,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    13,    14,    15,    16,
      25,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,   176,
     111,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    68,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,    -1,    -1,   174,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,    47,    -1,   174,
      50,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,
      54,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,    -1,    -1,   174,    -1,    -1,   111,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,    -1,    -1,
     174,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,   176,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   176,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   176,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   176,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   176,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   175,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   175,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   175,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   175,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   175,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   175,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     175,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   175,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   175,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   175,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   175,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     175,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   175,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   175,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   175,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     175,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   175,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,   137,    43,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,    55,    59,    60,    -1,    -1,    -1,    64,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    -1,
      74,    -1,    -1,   151,    78,    -1,    -1,    84,    85,    -1,
      87,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,   137,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,   129,    -1,   131,   132,    -1,
     134,   135,    -1,    -1,    -1,    -1,   140,   141,    -1,    -1,
      -1,    -1,    -1,   147,    -1,   149,   153,   154,    -1,   153,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      80,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    75,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    75,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      67,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,    39,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    38,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      13,    14,    15,    16,    38,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    48,    62,    63,    94,   121,   129,   130,   139,   142,
     146,   178,   187,   188,   220,   224,   225,   227,   228,   229,
     239,   240,   243,   245,   246,   261,    57,    92,   123,   133,
     144,   247,   221,    92,   136,   231,   231,     8,   123,   262,
     263,   201,   136,   231,   241,     3,    57,     0,   172,    93,
     244,     3,    93,   244,    92,   136,     3,    80,    91,   101,
     117,   222,     3,     3,    58,    86,    91,    95,   101,   232,
     232,     9,    20,     3,    68,   176,     3,     4,     5,     6,
       7,     8,    17,    18,    25,    26,    34,    47,    50,    53,
      54,    61,    65,    86,   111,   122,   125,   126,   127,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   174,   179,   202,   203,     3,
      91,   101,     3,   174,   205,   206,   207,   209,   219,     3,
     178,   156,     3,   113,   156,     3,     3,    93,   244,   173,
     223,     3,   222,    80,   176,     3,     3,   179,   179,   263,
     173,   174,     9,   179,   179,   179,   151,   179,   186,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   179,     3,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    39,   204,    80,
     176,   173,   204,   188,   205,   129,   176,    49,    90,   102,
     110,   120,   127,   210,   212,    39,   208,     3,     3,   113,
     156,     3,    26,   150,   189,   145,   205,     3,   129,   174,
     233,   129,   233,     3,   179,   180,   181,   179,   179,   186,
      75,    76,   151,   188,   179,    44,   103,   138,   179,   184,
     179,   179,    26,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   175,   179,   179,   179,   179,   179,
       6,    18,   111,   174,    13,    14,    16,    19,   179,    34,
      35,   124,   174,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,     3,   205,   203,     3,    79,    91,
     146,   216,   175,   175,     3,   242,   206,   102,   120,   213,
     207,    98,   112,   211,     3,   174,   113,     3,     3,    91,
     121,   173,   174,   259,   260,   179,   114,   195,   205,   189,
     223,     3,   238,     3,   234,   148,   238,   148,   188,   176,
     175,   137,    75,    76,   179,   179,   175,    80,   176,   175,
      80,   179,   176,   176,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   176,   176,   176,     6,   111,   182,   188,
     179,   179,   174,   179,    38,   174,   174,   174,   188,   189,
     204,    99,    99,    99,    20,   173,   176,   189,   211,   211,
      98,   113,   207,    98,     3,   226,     3,   174,   113,     3,
      51,    81,    92,    99,   116,   248,   249,   251,   208,    42,
     104,   198,   189,    20,   115,   176,   230,   175,   176,   174,
     235,   230,   235,   230,   180,   179,   179,    75,   137,   179,
     179,   179,    80,    97,   185,   185,   179,   179,   179,   180,
     175,   183,   188,    38,   179,   188,   188,   188,   175,    83,
     190,   216,    82,   217,   217,   217,   179,     3,     3,   195,
     207,   179,   113,   145,   214,   215,   207,   175,   176,   174,
     226,     3,   174,   259,   174,    92,    99,   174,   174,    99,
     175,   176,     3,   188,     3,   196,   197,   179,    68,   179,
      99,     3,     3,    68,   179,   237,   176,   230,   230,    75,
     179,    82,   175,   175,   176,   175,   179,   179,   175,   175,
     175,   176,   175,   175,   180,   175,   179,   175,   175,   175,
      42,    88,   194,    98,   174,   174,   174,    20,    20,   173,
     198,   179,   174,   215,     3,   226,   175,   174,   248,   179,
     174,   174,     3,   200,   200,   174,   259,   249,    40,    41,
      43,    45,    46,    55,    69,    70,    71,    72,    74,    78,
      89,    96,   100,   106,   107,   108,   109,   118,   128,   129,
     131,   132,   134,   135,   140,   141,   147,   149,   153,   257,
      37,    67,   192,   176,   105,   176,   142,    20,   175,   176,
     236,   179,   179,   175,    59,    60,    64,    66,    84,    85,
      87,   153,   154,   179,   175,   179,   191,   179,   195,     3,
     218,   218,   218,   179,   179,     3,   200,   175,   226,   175,
     175,   200,   200,   175,   176,   175,     3,   250,   174,   253,
     253,   253,   253,   253,   253,   174,   253,   253,   253,    43,
     254,   254,   253,   253,   253,   174,   254,   253,   254,   174,
     174,   252,   197,   179,   179,   238,    68,   179,    68,   179,
     174,   175,   175,   175,   192,   152,   176,   193,   198,   175,
     176,   175,   175,    20,   175,   175,   259,   175,   175,     3,
     175,   176,     5,   255,   256,   255,   255,     4,   258,   255,
     255,   255,   256,   256,   255,   255,   255,   258,   256,   255,
     256,     5,     5,    18,    36,    51,    52,    68,    99,   111,
     116,   144,   237,   119,   179,    95,   199,     3,   179,     3,
     175,   176,   143,   155,    55,    56,   175,   176,   175,   175,
     175,   111,   174,   174,     4,     4,     5,     6,     7,    99,
      99,   174,   175,   192,   200,     5,   129,     4,   256,     4,
     256,   256,     5,   179,   200,   175,     4,   175,   176,   175,
     175,     5,   175
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
#line 270 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 276 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 277 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 279 "parser/evoparser.y"
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
#line 297 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 305 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 313 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 319 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 326 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 327 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 328 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 329 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 330 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 331 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 332 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 333 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 334 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 335 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 336 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 337 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 338 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 339 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 340 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 341 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 342 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 344 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 349 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 350 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 351 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 352 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 355 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 356 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 357 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 358 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 359 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 362 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 363 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 366 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_inListCount < MAX_IN_LIST) g_inListExprs[g_inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 367 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_inListCount; _i>0; _i--) g_inListExprs[_i]=g_inListExprs[_i-1]; g_inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_inListCount++; } ;}
    break;

  case 43:
#line 370 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 374 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 46:
#line 374 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 47:
#line 375 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 48:
#line 375 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 49:
#line 376 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 377 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 378 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 382 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 386 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 387 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 388 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 389 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 390 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 391 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 393 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 394 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 395 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 396 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 397 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 398 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 399 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 400 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 401 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 402 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 403 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 404 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 405 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 408 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 73:
#line 409 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 74:
#line 410 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 75:
#line 413 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 76:
#line 414 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 77:
#line 417 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 78:
#line 418 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 79:
#line 419 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 80:
#line 420 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 81:
#line 421 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 82:
#line 422 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 83:
#line 423 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 84:
#line 424 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 85:
#line 425 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 86:
#line 429 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_caseWhenCount, NULL); ;}
    break;

  case 87:
#line 431 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 88:
#line 433 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, NULL); ;}
    break;

  case 89:
#line 435 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 90:
#line 439 "parser/evoparser.y"
    {
        g_caseWhenCount = 0;
        g_caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 91:
#line 447 "parser/evoparser.y"
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
#line 457 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 93:
#line 458 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 94:
#line 461 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 95:
#line 462 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 96:
#line 465 "parser/evoparser.y"
    { emit("NOW"); (yyval.exprval) = expr_make_current_timestamp(); ;}
    break;

  case 97:
#line 466 "parser/evoparser.y"
    { emit("NOW"); (yyval.exprval) = expr_make_current_date(); ;}
    break;

  case 98:
#line 467 "parser/evoparser.y"
    { emit("NOW"); (yyval.exprval) = expr_make_current_time(); ;}
    break;

  case 99:
#line 472 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 100:
#line 481 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_selectDistinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 101:
#line 486 "parser/evoparser.y"
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
#line 497 "parser/evoparser.y"
    { emit("WHERE"); g_whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 105:
#line 499 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 106:
#line 502 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_groupByCount = 0;
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 107:
#line 509 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 108:
#line 517 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 109:
#line 518 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 110:
#line 519 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 111:
#line 522 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 112:
#line 523 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 114:
#line 527 "parser/evoparser.y"
    { emit("HAVING"); g_havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 119:
#line 539 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 120:
#line 546 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 121:
#line 547 "parser/evoparser.y"
    { emit("LIMIT 1"); g_limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 122:
#line 548 "parser/evoparser.y"
    { emit("LIMIT 2"); g_offsetExpr = (yyvsp[(2) - (4)].exprval); g_limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 123:
#line 549 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_limitExpr = (yyvsp[(2) - (4)].exprval); g_offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 125:
#line 553 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 126:
#line 556 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 127:
#line 557 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 128:
#line 560 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 129:
#line 561 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 130:
#line 562 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 131:
#line 563 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 132:
#line 564 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 133:
#line 565 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 134:
#line 566 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 135:
#line 567 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 136:
#line 568 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 137:
#line 571 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 138:
#line 572 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 139:
#line 574 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 140:
#line 582 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 141:
#line 587 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 142:
#line 588 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 143:
#line 589 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 144:
#line 592 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 145:
#line 593 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 148:
#line 602 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 149:
#line 607 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 150:
#line 608 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 151:
#line 609 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 154:
#line 618 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 155:
#line 620 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 156:
#line 622 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 157:
#line 624 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 158:
#line 626 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 159:
#line 629 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 160:
#line 630 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 161:
#line 631 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 162:
#line 634 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 163:
#line 635 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 164:
#line 638 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 165:
#line 639 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 166:
#line 642 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 167:
#line 643 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 168:
#line 644 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 171:
#line 651 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 172:
#line 652 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 173:
#line 657 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 174:
#line 659 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 175:
#line 661 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 177:
#line 665 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 178:
#line 666 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 179:
#line 669 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 180:
#line 670 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 181:
#line 673 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 182:
#line 678 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 183:
#line 686 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 184:
#line 693 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 185:
#line 694 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 186:
#line 695 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 187:
#line 696 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 188:
#line 700 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 189:
#line 703 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 190:
#line 704 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 193:
#line 709 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 194:
#line 714 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 195:
#line 721 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 196:
#line 730 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 197:
#line 737 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 198:
#line 744 "parser/evoparser.y"
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

  case 199:
#line 754 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 200:
#line 762 "parser/evoparser.y"
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

  case 201:
#line 774 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 202:
#line 779 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 203:
#line 787 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 204:
#line 794 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 205:
#line 803 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 206:
#line 810 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 207:
#line 818 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 208:
#line 825 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 210:
#line 833 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 211:
#line 836 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 212:
#line 837 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 213:
#line 838 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 214:
#line 839 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 215:
#line 840 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 219:
#line 847 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 220:
#line 851 "parser/evoparser.y"
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

  case 221:
#line 861 "parser/evoparser.y"
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

  case 222:
#line 873 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 223:
#line 874 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 224:
#line 874 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 225:
#line 877 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 226:
#line 878 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 227:
#line 879 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 228:
#line 880 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 229:
#line 884 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 230:
#line 887 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 231:
#line 888 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 232:
#line 889 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 233:
#line 890 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 234:
#line 896 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 235:
#line 902 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 236:
#line 907 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 237:
#line 912 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 238:
#line 917 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 239:
#line 924 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 240:
#line 929 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 241:
#line 930 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 242:
#line 931 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 243:
#line 936 "parser/evoparser.y"
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

  case 244:
#line 947 "parser/evoparser.y"
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

  case 245:
#line 958 "parser/evoparser.y"
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

  case 246:
#line 969 "parser/evoparser.y"
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

  case 247:
#line 982 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 248:
#line 986 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 249:
#line 987 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 250:
#line 990 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 251:
#line 991 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 252:
#line 995 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 253:
#line 999 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 254:
#line 1000 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 255:
#line 1005 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 256:
#line 1013 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 257:
#line 1021 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 258:
#line 1026 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 259:
#line 1030 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 260:
#line 1035 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 261:
#line 1039 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 262:
#line 1042 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 263:
#line 1043 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 264:
#line 1046 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 265:
#line 1047 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 266:
#line 1050 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 267:
#line 1051 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 268:
#line 1052 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 269:
#line 1053 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 270:
#line 1054 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 271:
#line 1055 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 272:
#line 1058 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 273:
#line 1059 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 274:
#line 1062 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 275:
#line 1064 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 276:
#line 1072 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 277:
#line 1073 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 279:
#line 1075 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 280:
#line 1076 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 281:
#line 1077 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 282:
#line 1078 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 283:
#line 1079 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 284:
#line 1080 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 285:
#line 1081 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 286:
#line 1082 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY %d", (yyvsp[(4) - (5)].intval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 287:
#line 1083 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 288:
#line 1084 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 289:
#line 1085 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 290:
#line 1086 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 291:
#line 1087 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 292:
#line 1088 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 293:
#line 1091 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 294:
#line 1092 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 295:
#line 1093 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 296:
#line 1096 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 297:
#line 1097 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 298:
#line 1100 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 299:
#line 1101 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 300:
#line 1102 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 302:
#line 1106 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 303:
#line 1107 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 304:
#line 1111 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 305:
#line 1112 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 306:
#line 1113 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 307:
#line 1114 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 308:
#line 1115 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 309:
#line 1116 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 310:
#line 1117 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 311:
#line 1118 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 312:
#line 1119 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 313:
#line 1120 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 314:
#line 1121 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 315:
#line 1122 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 316:
#line 1123 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 317:
#line 1124 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 318:
#line 1125 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 319:
#line 1126 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 320:
#line 1127 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 321:
#line 1128 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 322:
#line 1129 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 323:
#line 1130 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 324:
#line 1131 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 325:
#line 1132 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 326:
#line 1133 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 327:
#line 1134 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 328:
#line 1135 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 329:
#line 1136 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 330:
#line 1137 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 331:
#line 1138 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 332:
#line 1139 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 333:
#line 1140 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 334:
#line 1141 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 335:
#line 1144 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 336:
#line 1145 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 337:
#line 1149 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 338:
#line 1152 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 339:
#line 1153 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 340:
#line 1154 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 341:
#line 1158 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 342:
#line 1161 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 343:
#line 1162 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 347:
#line 1166 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 348:
#line 1167 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4562 "parser/evoparser.tab.c"
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


#line 1170 "parser/evoparser.y"

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
