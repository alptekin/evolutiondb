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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  339
/* YYNRULES -- Number of states.  */
#define YYNSTATES  725

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
     726,   731,   732,   735,   743,   745,   749,   751,   755,   757,
     766,   767,   772,   773,   776,   779,   782,   785,   787,   788,
     789,   793,   795,   799,   803,   804,   811,   813,   815,   819,
     823,   831,   835,   839,   845,   851,   853,   862,   870,   878,
     880,   889,   890,   893,   896,   900,   906,   912,   920,   922,
     927,   932,   933,   936,   938,   941,   945,   947,   956,   967,
     977,   984,   996,  1005,  1006,  1008,  1010,  1014,  1020,  1025,
    1030,  1036,  1042,  1047,  1049,  1053,  1054,  1059,  1060,  1064,
    1067,  1071,  1075,  1079,  1083,  1086,  1094,  1100,  1106,  1110,
    1113,  1117,  1120,  1124,  1130,  1131,  1135,  1141,  1142,  1144,
    1145,  1148,  1151,  1152,  1157,  1161,  1164,  1168,  1172,  1176,
    1180,  1184,  1188,  1192,  1196,  1200,  1204,  1206,  1208,  1210,
    1212,  1214,  1218,  1224,  1227,  1232,  1234,  1236,  1238,  1240,
    1244,  1248,  1252,  1256,  1262,  1268,  1270,  1272,  1276,  1280,
    1281,  1283,  1285,  1287,  1291,  1295,  1298,  1300,  1304,  1308
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
      -1,   138,   135,     3,    -1,   225,    -1,    93,   227,   228,
       3,   229,   147,   231,   226,    -1,    -1,   114,    98,   141,
     234,    -1,    -1,   227,   100,    -1,   227,    58,    -1,   227,
      85,    -1,   227,    90,    -1,    94,    -1,    -1,    -1,   173,
     230,   174,    -1,     3,    -1,   230,   175,     3,    -1,   173,
     233,   174,    -1,    -1,   231,   175,   232,   173,   233,   174,
      -1,   178,    -1,    68,    -1,   233,   175,   178,    -1,   233,
     175,    68,    -1,    93,   227,   228,     3,   128,   234,   226,
      -1,     3,    20,   178,    -1,     3,    20,    68,    -1,   234,
     175,     3,    20,   178,    -1,   234,   175,     3,    20,    68,
      -1,   235,    -1,   120,   227,   228,     3,   229,   147,   231,
     226,    -1,   120,   227,   228,     3,   128,   234,   226,    -1,
     120,   227,   228,     3,   229,   187,   226,    -1,   236,    -1,
     141,   237,   204,   128,   238,   188,   194,   197,    -1,    -1,
     227,   100,    -1,   227,    90,    -1,     3,    20,   178,    -1,
       3,   172,     3,    20,   178,    -1,   238,   175,     3,    20,
     178,    -1,   238,   175,     3,   172,     3,    20,   178,    -1,
     239,    -1,    48,    57,   240,     3,    -1,    48,   122,   240,
       3,    -1,    -1,    92,   155,    -1,   241,    -1,   145,     3,
      -1,   145,    57,     3,    -1,   242,    -1,    48,   243,   135,
     240,     3,   173,   244,   174,    -1,    48,   243,   135,   240,
       3,   172,     3,   173,   244,   174,    -1,    48,   243,   135,
     240,     3,   173,   244,   174,   255,    -1,    48,   243,   135,
     240,     3,   255,    -1,    48,   243,   135,   240,     3,   172,
       3,   173,   244,   174,   255,    -1,    48,   243,   135,   240,
       3,   172,     3,   255,    -1,    -1,   132,    -1,   245,    -1,
     244,   175,   245,    -1,   115,    98,   173,   246,   174,    -1,
      98,   173,   199,   174,    -1,    91,   173,   199,   174,    -1,
      80,    91,   173,   199,   174,    -1,    80,    98,   173,   199,
     174,    -1,    51,   173,   178,   174,    -1,     3,    -1,   246,
     175,     3,    -1,    -1,   247,     3,   253,   248,    -1,    -1,
     248,    18,   110,    -1,   248,   110,    -1,   248,    68,     4,
      -1,   248,    68,     5,    -1,   248,    68,     7,    -1,   248,
      68,     6,    -1,   248,    36,    -1,   248,    36,   173,     5,
     175,     5,   174,    -1,   248,    36,   173,     5,   174,    -1,
     248,   143,   173,   199,   174,    -1,   248,   143,    98,    -1,
     248,   143,    -1,   248,   115,    98,    -1,   248,    98,    -1,
     248,    52,     4,    -1,   248,    51,   173,   178,   174,    -1,
      -1,   173,     5,   174,    -1,   173,     5,   175,     5,   174,
      -1,    -1,    43,    -1,    -1,   251,   142,    -1,   251,   154,
      -1,    -1,   252,    55,   128,     4,    -1,   252,    56,     4,
      -1,    46,   249,    -1,   131,   249,   251,    -1,   127,   249,
     251,    -1,   108,   249,   251,    -1,    95,   249,   251,    -1,
      88,   249,   251,    -1,    45,   249,   251,    -1,   117,   249,
     251,    -1,    69,   249,   251,    -1,    77,   249,   251,    -1,
      71,   249,   251,    -1,    72,    -1,   140,    -1,   134,    -1,
      70,    -1,   152,    -1,    55,   249,   252,    -1,   146,   173,
       5,   174,   252,    -1,    43,   249,    -1,   148,   173,     5,
     174,    -1,   139,    -1,    40,    -1,   107,    -1,   105,    -1,
     130,   250,   252,    -1,   133,   250,   252,    -1,   106,   250,
     252,    -1,    99,   250,   252,    -1,    74,   173,   254,   174,
     252,    -1,   128,   173,   254,   174,   252,    -1,    41,    -1,
       4,    -1,   254,   175,     4,    -1,   256,   207,   187,    -1,
      -1,    90,    -1,   120,    -1,   257,    -1,   128,   122,     3,
      -1,   128,   122,    68,    -1,   128,   258,    -1,   259,    -1,
     258,   175,   259,    -1,     8,    20,   178,    -1,     8,     9,
     178,    -1
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
     703,   706,   706,   708,   712,   719,   728,   735,   743,   750,
     758,   759,   762,   763,   764,   765,   766,   769,   769,   772,
     773,   776,   786,   799,   800,   800,   803,   804,   805,   806,
     809,   813,   814,   815,   816,   822,   825,   831,   836,   842,
     848,   855,   856,   857,   861,   872,   883,   894,   908,   912,
     913,   916,   917,   921,   925,   926,   930,   937,   946,   950,
     955,   959,   964,   968,   969,   972,   973,   976,   977,   978,
     979,   980,   981,   984,   985,   988,   988,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,  1012,  1013,  1014,  1017,  1018,  1019,  1022,  1023,  1026,
    1027,  1028,  1031,  1032,  1033,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,
    1062,  1063,  1064,  1065,  1066,  1067,  1070,  1071,  1074,  1078,
    1079,  1080,  1084,  1087,  1088,  1089,  1090,  1090,  1092,  1093
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
  "opt_dot_star", "drop_table_stmt", "truncate_table_stmt", "insert_stmt",
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
     226,   226,   227,   227,   227,   227,   227,   228,   228,   229,
     229,   230,   230,   231,   232,   231,   233,   233,   233,   233,
     225,   234,   234,   234,   234,   186,   235,   235,   235,   186,
     236,   237,   237,   237,   238,   238,   238,   238,   186,   239,
     239,   240,   240,   186,   241,   241,   186,   242,   242,   242,
     242,   242,   242,   243,   243,   244,   244,   245,   245,   245,
     245,   245,   245,   246,   246,   247,   245,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   249,   249,   249,   250,   250,   251,
     251,   251,   252,   252,   252,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   254,   254,   255,   256,
     256,   256,   186,   257,   257,   257,   258,   258,   259,   259
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
       4,     0,     2,     7,     1,     3,     1,     3,     1,     8,
       0,     4,     0,     2,     2,     2,     2,     1,     0,     0,
       3,     1,     3,     3,     0,     6,     1,     1,     3,     3,
       7,     3,     3,     5,     5,     1,     8,     7,     7,     1,
       8,     0,     2,     2,     3,     5,     5,     7,     1,     4,
       4,     0,     2,     1,     2,     3,     1,     8,    10,     9,
       6,    11,     8,     0,     1,     1,     3,     5,     4,     4,
       5,     5,     4,     1,     3,     0,     4,     0,     3,     2,
       3,     3,     3,     3,     2,     7,     5,     5,     3,     2,
       3,     2,     3,     5,     0,     3,     5,     0,     1,     0,
       2,     2,     0,     4,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     3,     5,     2,     4,     1,     1,     1,     1,     3,
       3,     3,     3,     5,     5,     1,     1,     3,     3,     0,
       1,     1,     1,     3,     3,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   253,   187,     0,   202,   202,     0,   128,     0,   202,
       0,     0,     0,    99,   182,   194,   196,   198,   225,   229,
     238,   243,   246,   332,   241,   241,   254,     0,     0,     0,
     208,   208,     0,     0,   335,   336,     0,     0,     0,     0,
     244,     0,     1,     2,     0,     0,     0,   241,   191,     0,
     186,   184,   185,     0,   195,   204,   205,   206,   207,   203,
       0,     0,     0,     0,   333,   334,     0,     4,     7,     8,
      10,     9,     6,     0,     0,     0,   139,   129,    96,     0,
      97,    98,   130,   131,   132,    11,   134,   136,   135,   133,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,   100,   137,
     197,   206,   203,   143,     0,     0,   144,   146,   147,   153,
     245,     3,   242,   239,   240,     0,     0,   189,   102,     0,
       0,     0,   209,   209,   339,   338,   337,     0,    43,     0,
      28,    27,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,     0,     0,     0,   176,
       0,     0,     0,     0,   161,   160,   164,   168,   165,     0,
       0,   162,   152,     0,   329,   192,     0,   115,     0,   102,
     191,     0,     0,     0,     0,     0,     5,    41,    44,     0,
      38,     0,     0,    88,     0,     0,     0,     0,    74,    72,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,    21,    22,
      20,    94,    92,    36,     0,    34,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    23,    24,    26,
      12,    13,    14,    15,    16,    17,    25,   141,   102,   138,
     143,     0,     0,     0,   148,   181,   151,     0,   102,   145,
     162,   162,     0,   155,     0,   163,     0,   150,   330,   331,
       0,   265,   250,   153,   103,     0,   120,   102,   188,   190,
       0,   200,   211,     0,     0,   200,     0,   200,     0,    52,
       0,    86,     0,     0,     0,    51,     0,     0,    63,     0,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    66,
      67,    68,     0,     0,     0,    37,    35,     0,     0,    95,
      93,    47,     0,     0,     0,     0,     0,     0,   104,   176,
     178,   178,   178,     0,     0,     0,   115,   166,   167,     0,
       0,   169,     0,   329,     0,     0,     0,     0,     0,     0,
     255,     0,     0,     0,     0,   183,   193,     0,     0,     0,
     220,   210,     0,     0,   200,   227,   200,   228,    42,    90,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,    39,     0,
       0,     0,    30,     0,   113,   149,     0,     0,     0,     0,
     234,     0,     0,   120,   158,   156,     0,     0,   154,   170,
       0,   265,   252,     0,     0,     0,     0,     0,     0,   329,
     265,     0,   328,   108,   116,   117,   121,   222,   221,     0,
       0,   212,   217,   216,     0,   214,   199,   226,    87,    91,
       0,    61,    60,     0,    65,     0,     0,    75,    76,    69,
       0,    71,    46,     0,    50,    40,    33,    31,    32,     0,
       0,   115,   177,     0,     0,     0,     0,     0,     0,   230,
     171,     0,   157,     0,     0,     0,     0,   126,     0,     0,
       0,   249,   256,   316,   325,   284,   284,   284,   284,   284,
     309,   284,   306,     0,   284,   284,   284,   287,   318,   287,
     317,   284,   284,   284,     0,   287,   284,   287,   308,   315,
     307,     0,     0,   310,   267,   109,   110,   119,     0,     0,
       0,     0,     0,   213,     0,     0,     0,     0,    64,    77,
      78,    79,    80,    84,    83,    85,    82,    81,     0,    48,
     108,   111,   114,   120,   179,     0,     0,     0,   235,   236,
       0,     0,   329,   262,     0,     0,   259,     0,   258,   263,
       0,     0,   313,   289,   295,   292,   289,   289,     0,   289,
     289,   289,   288,   292,   292,   289,   289,   289,     0,   292,
     289,   292,     0,     0,   266,   118,   123,   122,   201,   224,
     223,   219,   218,     0,    62,    59,    70,   106,     0,     0,
     105,   124,   175,     0,   174,   173,     0,   172,   251,   260,
     261,   127,   257,     0,     0,   301,   311,   303,   305,   326,
       0,   304,   300,   299,   322,   321,   298,   302,   297,     0,
     319,   296,   320,     0,     0,     0,   274,     0,     0,     0,
     281,   269,     0,   279,     0,   112,   108,     0,   101,   180,
     237,   264,   285,     0,   290,   291,     0,     0,   292,     0,
     292,   292,   314,   268,     0,     0,   282,   270,   271,   273,
     272,   280,   278,     0,   215,   107,   125,     0,     0,   294,
     323,   327,   324,   312,     0,     0,     0,   286,   293,   276,
       0,   283,   277,     0,   275
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,   217,   218,   219,   347,   415,   232,   408,   145,
      12,    13,   207,   424,   571,   547,   630,   491,   306,   454,
     455,   385,   678,   508,    36,   108,   109,   185,   115,   116,
     117,   203,   118,   200,   296,   201,   292,   438,   439,   284,
     427,   575,   119,    14,    28,    53,   127,    15,    16,    17,
     390,    30,    60,   213,   313,   394,   555,   464,   311,    18,
      19,    39,   288,    20,    45,    21,    22,    27,   379,   380,
     590,   381,   614,   592,   603,   645,   646,   544,   650,   302,
     303,    23,    34,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -551
static const yytype_int16 yypact[] =
{
     291,    36,  -551,  -101,  -551,  -551,    11,  -551,   -73,     2,
      14,    66,    16,  -551,  -551,  -551,  -551,  -551,  -551,  -551,
    -551,  -551,  -551,  -551,    99,    99,  -551,    43,    94,   203,
     105,   105,   183,    28,    34,  -551,   338,   208,   143,     3,
    -551,   224,  -551,   291,    80,   235,   270,    99,   103,   276,
    -551,  -551,  -551,   -22,  -551,  -551,  -551,  -551,  -551,  -551,
     282,   289,  1197,  1197,  -551,  -551,   236,    42,  -551,  -551,
    -551,  -551,   300,  1197,  1197,  1197,  -551,  -551,  -551,   554,
    -551,  -551,  -551,  -551,  -551,  -551,  -551,  -551,  -551,  -551,
     153,   157,   174,   176,   179,   185,   187,   194,   201,   207,
     209,   213,   216,   223,   225,   231,  1197,  2205,   -21,  -551,
    -551,     7,     8,    10,     6,    33,   286,  -551,  -551,   277,
    -551,  -551,  -551,  -551,  -551,   407,   387,  -551,   138,  -112,
       3,   415,  -104,    57,  2269,  2269,  -551,   421,  1197,  1197,
     822,   822,  -551,  1197,  1948,    19,   304,  1197,   315,  1197,
    1197,   577,  1197,  1197,  1197,  1197,  1197,  1197,  1197,  1197,
    1197,  1197,  1405,  -551,  1197,  1197,  1197,  1197,  1197,    24,
     242,   264,  1197,   516,  1197,  1197,  1197,  1197,  1197,  1197,
    1197,  1197,  1197,  1197,   425,  -551,     3,  1197,   432,   129,
     269,    72,   444,     3,  -551,  -551,  -551,    85,  -551,     3,
     206,   340,  -551,   462,   -72,  -551,  1197,   399,     3,  -108,
     103,   512,   514,   378,   512,    73,  -551,   241,  -551,   354,
    2269,  1969,    81,  -551,  1197,  1197,   358,   860,  -551,  -551,
    -551,  1456,   615,  1054,  1104,   364,  1477,  1498,  1519,  1547,
    1570,  1591,  1613,  1634,  1247,  1275,  1298,  -551,  1891,   739,
     879,   907,   907,  -551,    39,  -551,   304,  1197,  1197,   366,
    1197,  2227,   379,   380,   381,   786,  1209,   587,   519,   671,
     412,   412,   525,   525,   525,   525,  -551,  -551,  -108,  -551,
      25,   458,   466,   467,  -551,  -551,  -551,    -8,    23,   286,
     340,   340,   470,   456,     3,  -551,   476,  -551,  -551,  -551,
     571,   299,  -551,   277,  2269,   533,   473,  -108,  -551,  -551,
     557,    38,  -551,   114,   405,    38,   405,   472,  1197,  -551,
    1197,  -551,  1197,  2021,  1990,  -551,  1197,  1197,  -551,  1197,
    2126,   492,   492,  -551,  -551,  -551,  -551,  -551,  -551,  -551,
    -551,  -551,  1197,  1197,  1197,  -551,  -551,  1197,   416,   907,
     907,   304,  2248,  1197,   304,   304,   304,   417,   507,   129,
     511,   511,   511,  1197,   593,   594,   399,  -551,  -551,     3,
    1197,   -79,     3,   -68,   426,   -45,   433,   452,   500,   121,
    -551,   602,   304,   625,  1197,  -551,  -551,   809,   531,   631,
    -551,  -551,   632,   980,    51,  -551,    51,  -551,  -551,  2269,
    2147,  -551,  1197,  1382,    62,  1655,  1197,  1197,   463,   464,
    1676,  1361,  1704,   471,  -551,  1197,   474,  1197,  1016,   478,
     479,   480,  -551,   605,   549,  -551,   558,   487,   490,   493,
    2269,   647,    -6,   473,  -551,  2269,  1197,   497,  -551,  -551,
     -79,   299,  -551,  1197,   515,   517,   688,   688,   520,   -69,
     299,  1983,  -551,   130,   527,  -551,  1081,  -551,  2269,   551,
     683,  -551,  -551,  2269,   123,  -551,  -551,  -551,  -551,  2269,
    1197,  -551,  -551,  1197,  -551,  1727,  1869,  -551,  -551,  -551,
    1197,  -551,  -551,   532,  -551,  1016,  -551,  -551,  -551,  1197,
    1197,   399,  -551,   702,   702,   702,  1197,  1197,   704,  -551,
    2269,   688,  -551,   126,  1748,   688,   688,  -551,   137,   150,
     705,  -551,  -551,  -551,  -551,   553,   553,   553,   553,   553,
    -551,   553,  -551,   555,   553,   553,   553,   686,  -551,   686,
    -551,   553,   553,   553,   575,   686,   553,   686,  -551,  -551,
    -551,   576,   583,  -551,  -551,  -551,  -551,  -551,   625,  1197,
    1197,   512,  1003,  -551,  1174,   613,  1770,  1791,  -551,  -551,
    -551,  -551,  -551,  -551,  -551,  -551,  -551,  -551,  1812,  -551,
    2169,  -107,  2269,   473,  -551,   154,   162,   202,  2269,  2269,
     710,   219,   -65,  -551,   227,   234,  -551,   728,  -551,  -551,
     247,   782,  -551,  -551,  -551,  -551,  -551,  -551,   791,  -551,
    -551,  -551,  -551,  -551,  -551,  -551,  -551,  -551,   791,  -551,
    -551,  -551,   792,   793,   263,  -551,  2269,  2269,   621,  -551,
    2269,  -551,  2269,   980,  -551,  -551,  -551,  -551,   681,  1197,
    -551,   706,  -551,   798,  -551,  -551,  1197,  -551,  -551,  -551,
    -551,  -551,  -551,   799,   252,   -95,   375,   -95,   -95,  -551,
     271,   -95,   -95,   -95,   375,   375,   -95,   -95,   -95,   275,
     375,   -95,   375,   633,   634,   695,   636,   637,   802,   451,
    -551,  -551,   720,   -63,   292,  -551,  2169,   688,  -551,  -551,
    2269,  -551,  -551,   814,  -551,  -551,   692,   817,  -551,   818,
    -551,  -551,  -551,  -551,   819,  1197,  -551,  -551,  -551,  -551,
    -551,  -551,  -551,   688,  -551,  -551,   648,   651,   824,  -551,
     375,  -551,   375,   375,   294,  1833,   312,  -551,  -551,  -551,
     825,  -551,  -551,   655,  -551
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -551,   788,   -36,  -311,  -551,  -551,  -551,  -551,   503,   693,
    -551,  -106,  -180,  -551,  -551,  -550,  -551,  -551,  -343,  -551,
     284,  -418,  -551,  -445,  -551,  -551,   666,   -97,    86,   645,
    -195,   552,  -551,  -551,   199,  -551,  -551,  -551,   414,   498,
     148,    -3,  -551,  -551,  -551,   811,   654,  -551,  -551,  -551,
    -155,    45,   827,   732,  -551,   545,  -551,   243,  -213,  -551,
    -551,  -551,  -551,  -551,   146,  -551,  -551,  -551,   427,   419,
    -551,  -551,  -551,   125,  -295,   -70,  -386,  -551,   259,  -370,
    -551,  -551,  -551,   844
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -249
static const yytype_int16 yytable[] =
{
     107,   315,   509,   442,   293,  -231,   113,   398,   190,   113,
    -233,  -232,   363,   163,   497,   499,   189,    40,   298,    32,
     627,   298,   298,   433,   211,   298,   134,   135,   163,   308,
     253,    64,   208,   436,    29,   702,   413,   140,   141,   142,
     226,   206,   254,   144,   628,   345,   444,   684,   299,   184,
      31,   299,   299,   445,    38,   299,   581,   130,   186,   685,
     584,   585,    37,   131,   184,   437,    42,   193,   629,   212,
     162,    41,   164,   165,   166,   167,   168,   169,   170,   511,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,    24,   223,   224,    65,    48,   358,   371,
     300,   301,  -247,   220,   483,   441,  -248,   221,   366,   317,
     703,   227,   231,   233,   234,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   705,   386,   248,   249,
     250,   251,   252,    33,   255,     7,   261,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   573,   346,
     348,   107,   388,   131,   187,   631,   321,   322,    25,   357,
     395,   192,   397,    55,   364,   388,   498,   545,    26,   225,
     304,    46,   206,    49,   434,  -231,   114,   440,    47,   114,
    -233,  -232,   188,   359,    50,   214,   290,    43,   323,   324,
      56,    44,    62,   125,    51,    57,   330,   546,   365,    58,
     191,    55,     7,    63,   291,    59,    54,   281,   193,    66,
      52,   110,   638,   389,   137,   138,   209,   654,   655,   282,
     316,   349,   350,   660,   352,   662,   465,   120,    56,   162,
     212,   225,   706,   111,   604,   122,   472,   473,   123,   466,
     609,   467,   611,   112,    32,   416,   286,   193,   419,   420,
     421,   164,   165,   166,   167,   168,   169,   170,   716,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   278,   124,   283,   126,   452,   257,   258,   128,
     259,   665,  -191,   260,   399,   132,   400,   206,   391,   392,
     403,   404,   133,   405,   307,   449,   450,   553,   554,   666,
     582,   450,   710,   294,   712,   713,   410,   411,   412,   139,
     126,   586,   587,  -191,   667,   668,   202,   418,    67,    68,
      69,    70,    71,    72,   588,   587,   146,   430,   632,   633,
     147,   669,    73,    74,   435,   194,   634,   633,   618,     1,
      75,    67,    68,    69,    70,    71,    72,   148,   456,   149,
     374,   458,   150,     2,     3,    73,    74,   463,   151,   228,
     152,   670,    78,    75,    76,    79,   469,   153,    80,    81,
     475,   476,    77,   671,   154,   195,   635,   633,   672,   375,
     155,   485,   156,  -159,     4,    78,   157,   196,    79,   158,
     376,    80,    81,   637,   587,   197,   159,   377,   160,    82,
     500,   639,   587,    83,   161,   198,   673,   504,   640,   587,
     204,     5,   199,   205,   378,   256,   318,   229,   210,     6,
       7,   642,   643,    84,   216,    85,   682,   683,   277,     8,
     686,   687,     9,     7,   556,   280,    10,   557,   179,   180,
     181,   182,   183,   285,   568,   688,   689,   287,    85,   690,
     689,   295,   230,   570,   572,   697,   698,   699,   700,    86,
     578,   579,    87,    88,    89,   297,   704,   554,   719,   720,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   722,   587,   106,   367,
     368,   576,   577,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   428,
     429,   106,   305,   616,   617,   310,   620,   312,   622,    67,
      68,    69,    70,    71,    72,   314,   647,   648,   319,   651,
     652,   653,   325,    73,    74,   656,   657,   658,   333,   351,
     661,    75,   176,   177,   178,   179,   180,   181,   182,   183,
     262,   263,   354,   355,   356,   183,   360,    67,    68,    69,
      70,    71,    72,    78,   361,   362,    79,   369,   370,    80,
      81,    73,    74,   372,   373,   383,   384,   387,   393,    75,
      67,    68,    69,    70,    71,    72,   388,   463,   407,   423,
     414,   422,   426,   676,    73,    74,   431,   432,   448,   443,
     680,    78,    75,   235,    79,   451,   446,    80,    81,   175,
     176,   177,   178,   179,   180,   181,   182,   183,    67,    68,
      69,    70,    71,    72,    78,   447,    85,    79,   453,   459,
      80,    81,    73,    74,   460,   461,   490,   477,   478,   264,
      75,   593,   594,   595,   596,   482,   597,   489,   484,   599,
     600,   601,   486,   487,   488,   492,   605,   606,   607,   715,
     493,   610,    78,   494,    85,    79,   495,   496,    80,    81,
     501,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    85,   505,   265,
     506,   507,   551,   510,   329,   177,   178,   179,   180,   181,
     182,   183,   548,   552,   143,   574,   569,   580,   589,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    85,   591,   106,   598,   602,
     636,   641,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   608,   612,
     106,   166,   167,   168,   169,   170,   613,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   623,   644,   106,    67,
      68,    69,    70,    71,    72,   649,   389,   663,   664,   675,
     677,   679,   681,    73,    74,   693,   696,   691,   692,   694,
     695,    75,    67,    68,    69,    70,    71,    72,   701,   707,
     708,   709,   711,   587,   714,   717,    73,    74,   718,   724,
     723,   121,   615,    78,    75,   409,    79,   222,   289,    80,
      81,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   279,   502,   382,    78,   425,    61,    79,
     129,   396,    80,    81,   309,   215,   674,   659,   503,   512,
     164,   165,   166,   167,   168,   169,   170,   457,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,     0,   167,   168,   169,   170,    85,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     136,     0,     0,     0,     0,     7,     0,     0,     0,    85,
    -249,  -249,  -249,  -249,     0,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,     0,   326,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,     0,     0,   106,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,     0,   106,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,     0,     0,     0,     0,    75,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,     0,     0,     0,     0,     0,    78,    75,     0,
      79,     0,     0,    80,    81,   327,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,     0,   462,     0,
      78,     0,     0,    79,     0,     0,    80,    81,     0,     0,
       0,     0,     0,     0,   164,   165,   166,   167,   168,   169,
     170,   619,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,     0,     0,     0,     0,
      85,   164,   165,   166,   167,   168,   169,   170,     0,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,     0,    85,   164,   165,   166,   167,   168,   169,
     170,     0,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,     0,     0,   106,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,     0,   106,    67,    68,    69,
      70,    71,    72,     0,     0,   549,     0,     0,     0,     0,
       0,    73,    74,     0,     0,     0,     0,     0,     0,    75,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,     0,     0,
       0,    78,    75,     0,    79,     0,     0,    80,    81,   331,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
       0,     0,   621,     0,    78,     0,     0,    79,     0,     0,
      80,    81,     0,     0,     0,     0,   550,   164,   165,   166,
     167,   168,   169,   170,     0,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,     0,   332,
       0,     0,     0,     0,    85,   164,   165,   166,   167,   168,
     169,   170,     0,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,     0,    85,   164,   165,
     166,   167,   168,   169,   170,     0,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,     0,   106,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,     0,     0,
     106,   164,   165,   166,   167,   168,   169,   170,     0,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   164,   165,   166,   167,   168,   169,   170,     0,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,     0,     0,   164,   165,   166,   167,   168,
     169,   170,   342,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   470,     0,     0,   164,   165,   166,   167,
     168,   169,   170,   344,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   164,   165,   166,
     167,   168,   169,   170,     0,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   164,   165,
     166,   167,   168,   169,   170,     0,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   164,
     165,   166,   167,   168,   169,   170,   480,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
       0,     0,     0,     0,     0,     0,   471,   164,   165,   166,
     167,   168,   169,   170,     0,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,     0,   247,
     164,   165,   166,   167,   168,   169,   170,     0,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   164,   165,   166,   167,   168,   169,   170,     0,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,     0,   164,   165,   166,   167,   168,   169,   170,
     328,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   164,   165,   166,   167,   168,   169,
     170,   334,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   164,   165,   166,   167,   168,
     169,   170,   335,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   164,   165,   166,   167,
     168,   169,   170,   336,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,     0,     0,     0,
       0,     0,     0,     0,   164,   165,   166,   167,   168,   169,
     170,   337,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,     0,     0,   164,   165,   166,
     167,   168,   169,   170,   338,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   164,   165,
     166,   167,   168,   169,   170,   339,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,     0,
     164,   165,   166,   167,   168,   169,   170,   340,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   164,   165,   166,   167,   168,   169,   170,   341,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   164,   165,   166,   167,   168,   169,   170,   474,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   164,   165,   166,   167,   168,   169,   170,
     479,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   481,   164,
     165,   166,   167,   168,   169,   170,     0,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
       0,   558,   165,   166,   167,   168,   169,   170,     0,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   583,     0,     0,     0,     0,     0,   559,   560,
       0,     0,     0,   561,     0,   562,     0,     0,     0,     0,
       0,     0,     0,     0,   624,     0,     0,     0,     0,     0,
       0,     0,   563,   564,     0,   565,     0,     0,   164,   165,
     166,   167,   168,   169,   170,   625,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   164,
     165,   166,   167,   168,   169,   170,   626,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     164,   165,   166,   167,   168,   169,   170,   721,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   566,   567,   513,   514,     0,   515,     0,   516,   517,
       0,   164,   165,   166,   167,   168,   169,   170,   518,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   519,   520,   521,   522,     0,   523,     0,     0,
     524,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   525,     0,     0,     0,     0,     0,     0,   526,     0,
       0,     0,   527,     0,     0,     0,     0,     0,   528,   529,
     530,   531,     0,     0,     0,     0,   401,     0,   143,     0,
     532,     0,     0,     0,     0,   320,     0,     0,     0,     0,
     533,   534,     0,   535,   536,     0,   537,   538,     0,     0,
       0,     0,   539,   540,     0,     0,   402,     0,     0,   541,
       0,   542,     0,     0,     0,   543,   164,   165,   166,   167,
     168,   169,   170,     0,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   164,   165,   166,
     167,   168,   169,   170,     0,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,     0,   164,
     165,   166,   167,   168,   169,   170,     0,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
       0,     0,     0,     0,     0,   406,   545,     0,   163,     0,
       0,     0,     0,     0,     0,   164,   165,   166,   167,   168,
     169,   170,   468,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   546,   164,   165,   166,
     167,   168,   169,   170,   184,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   164,   165,
     166,   167,   168,   169,   170,   353,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   164,
     165,   166,   167,   168,   169,   170,   417,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183
};

static const yytype_int16 yycheck[] =
{
      36,   214,   447,   373,   199,     3,     3,   318,   114,     3,
       3,     3,    20,     3,    20,   433,   113,     3,    90,     8,
     570,    90,    90,   366,   128,    90,    62,    63,     3,   209,
       6,     3,   144,   112,   135,    98,   347,    73,    74,    75,
     146,   149,    18,    79,   151,     6,    91,   142,   120,    39,
       5,   120,   120,    98,     9,   120,   501,    79,    79,   154,
     505,   506,   135,   175,    39,   144,     0,   175,   175,   173,
     106,    57,    10,    11,    12,    13,    14,    15,    16,   449,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    57,    75,    76,    68,     3,   278,   294,
     172,   173,   171,   139,   415,   173,   171,   143,   288,   215,
     173,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   676,   307,   164,   165,
     166,   167,   168,   122,   110,   129,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   491,   110,
     256,   187,   114,   175,   175,   573,    75,    76,   122,   265,
     315,   128,   317,    58,   172,   114,   172,    37,   132,   150,
     206,    25,   149,    79,   369,   173,   173,   372,   135,   173,
     173,   173,   172,   280,    90,   128,   101,   171,   224,   225,
      85,    92,     9,    47,   100,    90,   232,    67,   175,    94,
     114,    58,   129,    20,   119,   100,     3,    78,   175,   175,
     116,     3,   582,   175,   172,   173,   130,   603,   604,    90,
     147,   257,   258,   609,   260,   611,   175,     3,    85,   265,
     173,   150,   677,    90,   529,   155,   174,   175,     3,   394,
     535,   396,   537,   100,     8,   351,   174,   175,   354,   355,
     356,    10,    11,    12,    13,    14,    15,    16,   703,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   186,     3,   145,   172,   382,    13,    14,     3,
      16,    18,   144,    19,   320,     3,   322,   149,   174,   175,
     326,   327,     3,   329,   208,   174,   175,   174,   175,    36,
     174,   175,   688,    97,   690,   691,   342,   343,   344,     9,
     172,   174,   175,   175,    51,    52,    39,   353,     3,     4,
       5,     6,     7,     8,   174,   175,   173,   363,   174,   175,
     173,    68,    17,    18,   370,    49,   174,   175,   551,    48,
      25,     3,     4,     5,     6,     7,     8,   173,   384,   173,
      51,   387,   173,    62,    63,    17,    18,   393,   173,    44,
     173,    98,    47,    25,    26,    50,   402,   173,    53,    54,
     406,   407,    34,   110,   173,    89,   174,   175,   115,    80,
     173,   417,   173,    97,    93,    47,   173,   101,    50,   173,
      91,    53,    54,   174,   175,   109,   173,    98,   173,    61,
     436,   174,   175,    65,   173,   119,   143,   443,   174,   175,
       3,   120,   126,    26,   115,   173,   175,   102,     3,   128,
     129,   174,   175,    85,     3,   110,   174,   175,     3,   138,
      55,    56,   141,   129,   470,     3,   145,   473,    26,    27,
      28,    29,    30,   174,   480,   174,   175,     3,   110,   174,
     175,   111,   137,   489,   490,     4,     5,     6,     7,   121,
     496,   497,   124,   125,   126,     3,   174,   175,   174,   175,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   174,   175,   173,   290,
     291,   494,   495,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   361,
     362,   173,   113,   549,   550,     3,   552,     3,   554,     3,
       4,     5,     6,     7,     8,   147,   596,   597,   174,   599,
     600,   601,   174,    17,    18,   605,   606,   607,   174,   173,
     610,    25,    23,    24,    25,    26,    27,    28,    29,    30,
      34,    35,   173,   173,   173,    30,    98,     3,     4,     5,
       6,     7,     8,    47,    98,    98,    50,    97,   112,    53,
      54,    17,    18,    97,     3,    42,   103,    20,   173,    25,
       3,     4,     5,     6,     7,     8,   114,   623,    96,    82,
     174,   174,    81,   629,    17,    18,     3,     3,    98,   173,
     636,    47,    25,    26,    50,     3,   173,    53,    54,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,     4,
       5,     6,     7,     8,    47,   173,   110,    50,     3,    98,
      53,    54,    17,    18,     3,     3,    87,   174,   174,   123,
      25,   516,   517,   518,   519,   174,   521,    42,   174,   524,
     525,   526,   174,   174,   174,    97,   531,   532,   533,   695,
     173,   536,    47,   173,   110,    50,   173,    20,    53,    54,
     173,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   110,   173,   173,
     173,     3,   141,   173,    79,    24,    25,    26,    27,    28,
      29,    30,   175,    20,   150,     3,   174,     3,     3,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   110,   173,   173,   173,    43,
      20,     3,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   173,   173,
     173,    12,    13,    14,    15,    16,   173,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   173,     5,   173,     3,
       4,     5,     6,     7,     8,     4,   175,     5,     5,   118,
      94,     3,     3,    17,    18,   110,     4,   174,   174,   173,
     173,    25,     3,     4,     5,     6,     7,     8,    98,     5,
     128,     4,     4,   175,     5,   174,    17,    18,     4,   174,
       5,    43,   548,    47,    25,   332,    50,   144,   193,    53,
      54,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   187,   440,   303,    47,   359,    31,    50,
      49,   316,    53,    54,   210,   133,   623,   608,   441,   450,
      10,    11,    12,    13,    14,    15,    16,    68,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    13,    14,    15,    16,   110,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      66,    -1,    -1,    -1,    -1,   129,    -1,    -1,    -1,   110,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    79,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,    -1,    -1,   173,
      -1,    -1,    -1,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
      -1,    -1,   173,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    47,    25,    -1,
      50,    -1,    -1,    53,    54,   175,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    68,    -1,
      47,    -1,    -1,    50,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    68,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
     110,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   110,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,    -1,    -1,   173,    -1,    -1,    -1,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,    -1,    -1,   173,     3,     4,     5,
       6,     7,     8,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    47,    25,    -1,    50,    -1,    -1,    53,    54,   175,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    68,    -1,    47,    -1,    -1,    50,    -1,    -1,
      53,    54,    -1,    -1,    -1,    -1,   175,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   175,
      -1,    -1,    -1,    -1,   110,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,   110,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,    -1,    -1,   173,    -1,    -1,
      -1,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,    -1,    -1,
     173,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   175,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   175,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   175,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,   174,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   174,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
     174,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   174,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   174,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   174,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   174,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   174,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   174,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      10,    11,    12,    13,    14,    15,    16,   174,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   174,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   174,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     174,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,   174,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   174,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    -1,    86,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   174,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   174,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   174,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   152,   153,    40,    41,    -1,    43,    -1,    45,    46,
      -1,    10,    11,    12,    13,    14,    15,    16,    55,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    69,    70,    71,    72,    -1,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    75,    -1,   150,    -1,
     117,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,    -1,   133,   134,    -1,    -1,
      -1,    -1,   139,   140,    -1,    -1,   136,    -1,    -1,   146,
      -1,   148,    -1,    -1,    -1,   152,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    79,    37,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    75,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    67,    10,    11,    12,
      13,    14,    15,    16,    39,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    38,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    38,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    48,    62,    63,    93,   120,   128,   129,   138,   141,
     145,   177,   186,   187,   219,   223,   224,   225,   235,   236,
     239,   241,   242,   257,    57,   122,   132,   243,   220,   135,
     227,   227,     8,   122,   258,   259,   200,   135,   227,   237,
       3,    57,     0,   171,    92,   240,   240,   135,     3,    79,
      90,   100,   116,   221,     3,    58,    85,    90,    94,   100,
     228,   228,     9,    20,     3,    68,   175,     3,     4,     5,
       6,     7,     8,    17,    18,    25,    26,    34,    47,    50,
      53,    54,    61,    65,    85,   110,   121,   124,   125,   126,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   173,   178,   201,   202,
       3,    90,   100,     3,   173,   204,   205,   206,   208,   218,
       3,   177,   155,     3,     3,   240,   172,   222,     3,   221,
      79,   175,     3,     3,   178,   178,   259,   172,   173,     9,
     178,   178,   178,   150,   178,   185,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   178,     3,    10,    11,    12,    13,    14,    15,
      16,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    39,   203,    79,   175,   172,   203,
     187,   204,   128,   175,    49,    89,   101,   109,   119,   126,
     209,   211,    39,   207,     3,    26,   149,   188,   144,   204,
       3,   128,   173,   229,   128,   229,     3,   178,   179,   180,
     178,   178,   185,    75,    76,   150,   187,   178,    44,   102,
     137,   178,   183,   178,   178,    26,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   174,   178,   178,
     178,   178,   178,     6,    18,   110,   173,    13,    14,    16,
      19,   178,    34,    35,   123,   173,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,     3,   204,   202,
       3,    78,    90,   145,   215,   174,   174,     3,   238,   205,
     101,   119,   212,   206,    97,   111,   210,     3,    90,   120,
     172,   173,   255,   256,   178,   113,   194,   204,   188,   222,
       3,   234,     3,   230,   147,   234,   147,   187,   175,   174,
     136,    75,    76,   178,   178,   174,    79,   175,   174,    79,
     178,   175,   175,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   175,   175,   175,     6,   110,   181,   187,   178,
     178,   173,   178,    38,   173,   173,   173,   187,   188,   203,
      98,    98,    98,    20,   172,   175,   188,   210,   210,    97,
     112,   206,    97,     3,    51,    80,    91,    98,   115,   244,
     245,   247,   207,    42,   103,   197,   188,    20,   114,   175,
     226,   174,   175,   173,   231,   226,   231,   226,   179,   178,
     178,    75,   136,   178,   178,   178,    79,    96,   184,   184,
     178,   178,   178,   179,   174,   182,   187,    38,   178,   187,
     187,   187,   174,    82,   189,   215,    81,   216,   216,   216,
     178,     3,     3,   194,   206,   178,   112,   144,   213,   214,
     206,   173,   255,   173,    91,    98,   173,   173,    98,   174,
     175,     3,   187,     3,   195,   196,   178,    68,   178,    98,
       3,     3,    68,   178,   233,   175,   226,   226,    75,   178,
      81,   174,   174,   175,   174,   178,   178,   174,   174,   174,
     175,   174,   174,   179,   174,   178,   174,   174,   174,    42,
      87,   193,    97,   173,   173,   173,    20,    20,   172,   197,
     178,   173,   214,   244,   178,   173,   173,     3,   199,   199,
     173,   255,   245,    40,    41,    43,    45,    46,    55,    69,
      70,    71,    72,    74,    77,    88,    95,    99,   105,   106,
     107,   108,   117,   127,   128,   130,   131,   133,   134,   139,
     140,   146,   148,   152,   253,    37,    67,   191,   175,   104,
     175,   141,    20,   174,   175,   232,   178,   178,   174,    59,
      60,    64,    66,    83,    84,    86,   152,   153,   178,   174,
     178,   190,   178,   194,     3,   217,   217,   217,   178,   178,
       3,   199,   174,   174,   199,   199,   174,   175,   174,     3,
     246,   173,   249,   249,   249,   249,   249,   249,   173,   249,
     249,   249,    43,   250,   250,   249,   249,   249,   173,   250,
     249,   250,   173,   173,   248,   196,   178,   178,   234,    68,
     178,    68,   178,   173,   174,   174,   174,   191,   151,   175,
     192,   197,   174,   175,   174,   174,    20,   174,   255,   174,
     174,     3,   174,   175,     5,   251,   252,   251,   251,     4,
     254,   251,   251,   251,   252,   252,   251,   251,   251,   254,
     252,   251,   252,     5,     5,    18,    36,    51,    52,    68,
      98,   110,   115,   143,   233,   118,   178,    94,   198,     3,
     178,     3,   174,   175,   142,   154,    55,    56,   174,   175,
     174,   174,   174,   110,   173,   173,     4,     4,     5,     6,
       7,    98,    98,   173,   174,   191,   199,     5,   128,     4,
     252,     4,   252,   252,     5,   178,   199,   174,     4,   174,
     175,   174,   174,     5,   174
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
        TruncateTableProcess();
    ;}
    break;

  case 197:
#line 736 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 198:
#line 744 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 199:
#line 751 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 201:
#line 759 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 202:
#line 762 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 203:
#line 763 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 204:
#line 764 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 205:
#line 765 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 206:
#line 766 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 210:
#line 773 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 211:
#line 777 "parser/evoparser.y"
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

  case 212:
#line 787 "parser/evoparser.y"
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

  case 213:
#line 799 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 214:
#line 800 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 215:
#line 800 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 216:
#line 803 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 217:
#line 804 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 218:
#line 805 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 219:
#line 806 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 220:
#line 810 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 221:
#line 813 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 222:
#line 814 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 223:
#line 815 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 224:
#line 816 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 225:
#line 822 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 226:
#line 828 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 227:
#line 833 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 228:
#line 838 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 229:
#line 843 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 230:
#line 850 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 231:
#line 855 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 232:
#line 856 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 233:
#line 857 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 234:
#line 862 "parser/evoparser.y"
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

  case 235:
#line 873 "parser/evoparser.y"
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

  case 236:
#line 884 "parser/evoparser.y"
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

  case 237:
#line 895 "parser/evoparser.y"
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

  case 238:
#line 908 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 239:
#line 912 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 240:
#line 913 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 241:
#line 916 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 242:
#line 917 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 243:
#line 921 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 244:
#line 925 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 245:
#line 926 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 246:
#line 931 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 247:
#line 939 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 248:
#line 947 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 249:
#line 952 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 250:
#line 956 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 251:
#line 961 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 252:
#line 965 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 253:
#line 968 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 254:
#line 969 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 255:
#line 972 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 256:
#line 973 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 257:
#line 976 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 258:
#line 977 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 259:
#line 978 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 260:
#line 979 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 261:
#line 980 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 262:
#line 981 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 263:
#line 984 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 264:
#line 985 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 265:
#line 988 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 266:
#line 990 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 267:
#line 998 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 268:
#line 999 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 270:
#line 1001 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 271:
#line 1002 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 272:
#line 1003 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 273:
#line 1004 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 274:
#line 1005 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 275:
#line 1006 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 276:
#line 1007 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 277:
#line 1008 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY %d", (yyvsp[(4) - (5)].intval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 278:
#line 1009 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 279:
#line 1010 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 280:
#line 1011 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 281:
#line 1012 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 282:
#line 1013 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 283:
#line 1014 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 284:
#line 1017 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 285:
#line 1018 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 286:
#line 1019 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 287:
#line 1022 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 288:
#line 1023 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 289:
#line 1026 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 290:
#line 1027 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 291:
#line 1028 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 293:
#line 1032 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 294:
#line 1033 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 295:
#line 1037 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 296:
#line 1038 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 297:
#line 1039 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 298:
#line 1040 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 299:
#line 1041 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 300:
#line 1042 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 301:
#line 1043 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 302:
#line 1044 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 303:
#line 1045 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 304:
#line 1046 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 305:
#line 1047 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 306:
#line 1048 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 307:
#line 1049 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 308:
#line 1050 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 309:
#line 1051 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 310:
#line 1052 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 311:
#line 1053 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 312:
#line 1054 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 313:
#line 1055 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 314:
#line 1056 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 315:
#line 1057 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 316:
#line 1058 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 317:
#line 1059 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 318:
#line 1060 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 319:
#line 1061 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 320:
#line 1062 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 321:
#line 1063 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 322:
#line 1064 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 323:
#line 1065 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 324:
#line 1066 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 325:
#line 1067 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 326:
#line 1070 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 327:
#line 1071 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 328:
#line 1075 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 329:
#line 1078 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 330:
#line 1079 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 331:
#line 1080 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 332:
#line 1084 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 333:
#line 1087 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 334:
#line 1088 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 338:
#line 1092 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 339:
#line 1093 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4404 "parser/evoparser.tab.c"
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


#line 1096 "parser/evoparser.y"

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
