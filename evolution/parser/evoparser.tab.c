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
     CASCADE = 295,
     CROSS = 296,
     CASE = 297,
     CHECK = 298,
     COMMENT = 299,
     CURRENT_DATE = 300,
     CURRENT_TIME = 301,
     CHAR = 302,
     COLLATE = 303,
     DATABASE = 304,
     DELAYED = 305,
     DAY_HOUR = 306,
     DAY_MICROSECOND = 307,
     DISTINCT = 308,
     DELETE = 309,
     DROP = 310,
     DAY_MINUTE = 311,
     DISTINCTROW = 312,
     DAY_SECOND = 313,
     DESC = 314,
     DEFAULT = 315,
     DOUBLE = 316,
     DATETIME = 317,
     DECIMAL = 318,
     DATE = 319,
     ESCAPED = 320,
     ENUM = 321,
     END = 322,
     ELSE = 323,
     EXPLAIN = 324,
     FLOAT = 325,
     FORCE = 326,
     FOREIGN = 327,
     FROM = 328,
     FULLTEXT = 329,
     FOR = 330,
     GROUP = 331,
     HOUR_MINUTE = 332,
     HOUR_MICROSECOND = 333,
     HIGH_PRIORITY = 334,
     HOUR_SECOND = 335,
     HAVING = 336,
     INTEGER = 337,
     INNER = 338,
     IGNORE = 339,
     INDEX = 340,
     IF = 341,
     INSERT = 342,
     INTO = 343,
     INT = 344,
     INTERVAL = 345,
     JOIN = 346,
     KEY = 347,
     LONGTEXT = 348,
     LOW_PRIORITY = 349,
     LEFT = 350,
     LEADING = 351,
     LIMIT = 352,
     OFFSET = 353,
     LONGBLOB = 354,
     MEDIUMTEXT = 355,
     MEDIUMBLOB = 356,
     MEDIUMINT = 357,
     NATURAL = 358,
     NULLX = 359,
     OUTER = 360,
     ON = 361,
     ORDER = 362,
     ONDUPLICATE = 363,
     PRIMARY = 364,
     QUICK = 365,
     REAL = 366,
     RECLAIM = 367,
     REFERENCES = 368,
     RESTRICT = 369,
     ROLLUP = 370,
     RIGHT = 371,
     REPLACE = 372,
     SQL_SMALL_RESULT = 373,
     SCHEMA = 374,
     SOME = 375,
     SQL_CALC_FOUND_ROWS = 376,
     SQL_BIG_RESULT = 377,
     STRAIGHT_JOIN = 378,
     SMALLINT = 379,
     SET = 380,
     SELECT = 381,
     TINYTEXT = 382,
     TINYINT = 383,
     TEMPORARY = 384,
     TEXT = 385,
     TIMESTAMP = 386,
     TABLE = 387,
     THEN = 388,
     TRAILING = 389,
     TRUNCATE = 390,
     TINYBLOB = 391,
     TIME = 392,
     UPDATE = 393,
     UNSIGNED = 394,
     UNIQUE = 395,
     USING = 396,
     USE = 397,
     VARCHAR = 398,
     VALUES = 399,
     VARBINARY = 400,
     WHERE = 401,
     WHEN = 402,
     WITH = 403,
     YEAR = 404,
     YEAR_MONTH = 405,
     ZEROFILL = 406,
     EXISTS = 407,
     FSUBSTRING = 408,
     FTRIM = 409,
     FDATE_ADD = 410,
     FDATE_SUB = 411,
     FCOUNT = 412,
     FSUM = 413,
     FAVG = 414,
     FMIN = 415,
     FMAX = 416,
     FUPPER = 417,
     FLOWER = 418,
     FLENGTH = 419,
     FCONCAT = 420,
     FREPLACE = 421,
     FCOALESCE = 422
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
#define CASCADE 295
#define CROSS 296
#define CASE 297
#define CHECK 298
#define COMMENT 299
#define CURRENT_DATE 300
#define CURRENT_TIME 301
#define CHAR 302
#define COLLATE 303
#define DATABASE 304
#define DELAYED 305
#define DAY_HOUR 306
#define DAY_MICROSECOND 307
#define DISTINCT 308
#define DELETE 309
#define DROP 310
#define DAY_MINUTE 311
#define DISTINCTROW 312
#define DAY_SECOND 313
#define DESC 314
#define DEFAULT 315
#define DOUBLE 316
#define DATETIME 317
#define DECIMAL 318
#define DATE 319
#define ESCAPED 320
#define ENUM 321
#define END 322
#define ELSE 323
#define EXPLAIN 324
#define FLOAT 325
#define FORCE 326
#define FOREIGN 327
#define FROM 328
#define FULLTEXT 329
#define FOR 330
#define GROUP 331
#define HOUR_MINUTE 332
#define HOUR_MICROSECOND 333
#define HIGH_PRIORITY 334
#define HOUR_SECOND 335
#define HAVING 336
#define INTEGER 337
#define INNER 338
#define IGNORE 339
#define INDEX 340
#define IF 341
#define INSERT 342
#define INTO 343
#define INT 344
#define INTERVAL 345
#define JOIN 346
#define KEY 347
#define LONGTEXT 348
#define LOW_PRIORITY 349
#define LEFT 350
#define LEADING 351
#define LIMIT 352
#define OFFSET 353
#define LONGBLOB 354
#define MEDIUMTEXT 355
#define MEDIUMBLOB 356
#define MEDIUMINT 357
#define NATURAL 358
#define NULLX 359
#define OUTER 360
#define ON 361
#define ORDER 362
#define ONDUPLICATE 363
#define PRIMARY 364
#define QUICK 365
#define REAL 366
#define RECLAIM 367
#define REFERENCES 368
#define RESTRICT 369
#define ROLLUP 370
#define RIGHT 371
#define REPLACE 372
#define SQL_SMALL_RESULT 373
#define SCHEMA 374
#define SOME 375
#define SQL_CALC_FOUND_ROWS 376
#define SQL_BIG_RESULT 377
#define STRAIGHT_JOIN 378
#define SMALLINT 379
#define SET 380
#define SELECT 381
#define TINYTEXT 382
#define TINYINT 383
#define TEMPORARY 384
#define TEXT 385
#define TIMESTAMP 386
#define TABLE 387
#define THEN 388
#define TRAILING 389
#define TRUNCATE 390
#define TINYBLOB 391
#define TIME 392
#define UPDATE 393
#define UNSIGNED 394
#define UNIQUE 395
#define USING 396
#define USE 397
#define VARCHAR 398
#define VALUES 399
#define VARBINARY 400
#define WHERE 401
#define WHEN 402
#define WITH 403
#define YEAR 404
#define YEAR_MONTH 405
#define ZEROFILL 406
#define EXISTS 407
#define FSUBSTRING 408
#define FTRIM 409
#define FDATE_ADD 410
#define FDATE_SUB 411
#define FCOUNT 412
#define FSUM 413
#define FAVG 414
#define FMIN 415
#define FMAX 416
#define FUPPER 417
#define FLOWER 418
#define FLENGTH 419
#define FCONCAT 420
#define FREPLACE 421
#define FCOALESCE 422




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
#line 455 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 468 "parser/evoparser.tab.c"

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
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2557

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  182
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  362
/* YYNRULES -- Number of states.  */
#define YYNSTATES  795

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   422

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     179,   180,    26,    24,   181,    25,   178,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   177,
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
     174,   175,   176
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
     781,   793,   795,   799,   801,   805,   807,   811,   813,   817,
     819,   828,   829,   834,   835,   838,   841,   844,   847,   849,
     850,   851,   855,   857,   861,   865,   866,   873,   875,   877,
     881,   885,   893,   897,   901,   907,   913,   915,   924,   932,
     940,   942,   951,   952,   955,   958,   962,   968,   974,   982,
     984,   989,   994,   995,   998,  1000,  1003,  1007,  1009,  1018,
    1029,  1039,  1046,  1058,  1067,  1068,  1070,  1072,  1076,  1082,
    1087,  1092,  1098,  1104,  1109,  1121,  1123,  1127,  1129,  1133,
    1135,  1139,  1140,  1145,  1151,  1156,  1161,  1167,  1172,  1173,
    1178,  1179,  1183,  1186,  1190,  1194,  1198,  1202,  1205,  1213,
    1219,  1225,  1229,  1232,  1236,  1239,  1243,  1249,  1250,  1254,
    1260,  1261,  1263,  1264,  1267,  1270,  1271,  1276,  1280,  1283,
    1287,  1291,  1295,  1299,  1303,  1307,  1311,  1315,  1319,  1323,
    1325,  1327,  1329,  1331,  1333,  1337,  1343,  1346,  1351,  1353,
    1355,  1357,  1359,  1363,  1367,  1371,  1375,  1381,  1387,  1389,
    1391,  1395,  1399,  1400,  1402,  1404,  1406,  1410,  1414,  1417,
    1419,  1423,  1427
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     183,     0,    -1,   192,   177,    -1,   192,   177,   183,    -1,
       3,    -1,     3,   178,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   113,    -1,   184,    24,
     184,    -1,   184,    25,   184,    -1,   184,    26,   184,    -1,
     184,    27,   184,    -1,   184,    28,   184,    -1,   184,    29,
     184,    -1,    25,   184,    -1,   179,   184,   180,    -1,   184,
      12,   184,    -1,   184,    10,   184,    -1,   184,    11,   184,
      -1,   184,    21,   184,    -1,   184,    22,   184,    -1,   184,
      30,   184,    -1,   184,    23,   184,    -1,    18,   184,    -1,
      17,   184,    -1,   184,    20,   184,    -1,   184,    20,   179,
     193,   180,    -1,   184,    20,    35,   179,   193,   180,    -1,
     184,    20,   129,   179,   193,   180,    -1,   184,    20,    34,
     179,   193,   180,    -1,   184,    15,   113,    -1,   184,    15,
      18,   113,    -1,   184,    15,     6,    -1,   184,    15,    18,
       6,    -1,     8,     9,   184,    -1,   184,    19,   184,    38,
     184,    -1,   184,    18,    19,   184,    38,   184,    -1,   184,
      -1,   184,   181,   185,    -1,    -1,   185,    -1,    -1,   184,
      16,   179,   187,   185,   180,    -1,    -1,   184,    18,    16,
     179,   188,   185,   180,    -1,   184,    16,   179,   193,   180,
      -1,   184,    18,    16,   179,   193,   180,    -1,   161,   179,
     193,   180,    -1,     3,   179,   186,   180,    -1,   166,   179,
      26,   180,    -1,   166,   179,   184,   180,    -1,   167,   179,
     184,   180,    -1,   168,   179,   184,   180,    -1,   169,   179,
     184,   180,    -1,   170,   179,   184,   180,    -1,   162,   179,
     184,   181,   184,   181,   184,   180,    -1,   162,   179,   184,
     181,   184,   180,    -1,   162,   179,   184,    82,   184,   180,
      -1,   162,   179,   184,    82,   184,    84,   184,   180,    -1,
     163,   179,   184,   180,    -1,   163,   179,   189,   184,    82,
     184,   180,    -1,   163,   179,   189,    82,   184,   180,    -1,
     171,   179,   184,   180,    -1,   172,   179,   184,   180,    -1,
     173,   179,   184,   180,    -1,   174,   179,   184,   181,   184,
     180,    -1,   175,   179,   184,   181,   184,   181,   184,   180,
      -1,   176,   179,   184,   181,   184,   180,    -1,   105,    -1,
     143,    -1,    44,    -1,   164,   179,   184,   181,   190,   180,
      -1,   165,   179,   184,   181,   190,   180,    -1,    99,   184,
      60,    -1,    99,   184,    61,    -1,    99,   184,    65,    -1,
      99,   184,    67,    -1,    99,   184,   159,    -1,    99,   184,
     158,    -1,    99,   184,    87,    -1,    99,   184,    86,    -1,
      99,   184,    89,    -1,    51,   184,   191,    76,    -1,    51,
     184,   191,    77,   184,    76,    -1,    51,   191,    76,    -1,
      51,   191,    77,   184,    76,    -1,   156,   184,   142,   184,
      -1,   191,   156,   184,   142,   184,    -1,   184,    14,   184,
      -1,   184,    18,    14,   184,    -1,   184,    13,   184,    -1,
     184,    18,    13,   184,    -1,    47,    -1,    54,    -1,    55,
      -1,   193,    -1,   135,   206,   207,    -1,   135,   206,   207,
      82,   210,   194,   195,   199,   200,   203,   204,    -1,    -1,
     155,   184,    -1,    -1,    85,    42,   196,   198,    -1,   184,
     197,    -1,   196,   181,   184,   197,    -1,    -1,    37,    -1,
      68,    -1,    -1,   157,   124,    -1,    -1,    90,   184,    -1,
      -1,   116,    42,   201,    -1,   202,    -1,   201,   181,   202,
      -1,     3,   197,    -1,    -1,   106,   184,    -1,   106,   184,
     181,   184,    -1,   106,   184,   107,   184,    -1,    -1,    97,
     205,    -1,     3,    -1,   205,   181,     3,    -1,    -1,   206,
      34,    -1,   206,    62,    -1,   206,    66,    -1,   206,    88,
      -1,   206,   132,    -1,   206,   127,    -1,   206,   131,    -1,
     206,   130,    -1,   208,    -1,   207,   181,   208,    -1,    26,
      -1,   184,   209,    -1,    39,     3,    -1,     3,    -1,    -1,
     211,    -1,   210,   181,   211,    -1,   212,    -1,   214,    -1,
       3,   209,   221,    -1,     3,   178,     3,   209,   221,    -1,
     224,   213,     3,    -1,   179,   210,   180,    -1,    39,    -1,
      -1,   211,   215,   100,   212,   219,    -1,   211,   132,   212,
      -1,   211,   132,   212,   115,   184,    -1,   211,   217,   216,
     100,   212,   220,    -1,   211,   112,   218,   100,   212,    -1,
      -1,    92,    -1,    50,    -1,    -1,   114,    -1,   104,    -1,
     125,    -1,   104,   216,    -1,   125,   216,    -1,    -1,    -1,
     220,    -1,   115,   184,    -1,   150,   179,   205,   180,    -1,
     151,   101,   222,   179,   223,   180,    -1,    93,   101,   222,
     179,   223,   180,    -1,    80,   101,   222,   179,   223,   180,
      -1,    -1,    84,   100,    -1,    -1,     3,    -1,   223,   181,
       3,    -1,   179,   193,   180,    -1,   225,    -1,    63,   226,
      82,     3,   194,   200,   203,    -1,   226,   103,    -1,   226,
     119,    -1,   226,    93,    -1,    -1,    63,   226,   227,    82,
     210,   194,    -1,     3,   228,    -1,   227,   181,     3,   228,
      -1,    -1,   178,    26,    -1,    63,   226,    82,   227,   150,
     210,   194,    -1,   229,    -1,    64,   141,     3,    -1,   230,
      -1,    48,    94,     3,   115,     3,   179,   231,   180,    -1,
      48,    94,    95,   161,     3,   115,     3,   179,   231,   180,
      -1,    48,   149,    94,     3,   115,     3,   179,   231,   180,
      -1,    48,   149,    94,    95,   161,     3,   115,     3,   179,
     231,   180,    -1,     3,    -1,   231,   181,     3,    -1,   232,
      -1,    64,    94,     3,    -1,   233,    -1,   144,   141,     3,
      -1,   234,    -1,   121,   141,     3,    -1,   235,    -1,    96,
     237,   238,     3,   239,   153,   241,   236,    -1,    -1,   117,
     101,   147,   244,    -1,    -1,   237,   103,    -1,   237,    59,
      -1,   237,    88,    -1,   237,    93,    -1,    97,    -1,    -1,
      -1,   179,   240,   180,    -1,     3,    -1,   240,   181,     3,
      -1,   179,   243,   180,    -1,    -1,   241,   181,   242,   179,
     243,   180,    -1,   184,    -1,    69,    -1,   243,   181,   184,
      -1,   243,   181,    69,    -1,    96,   237,   238,     3,   134,
     244,   236,    -1,     3,    20,   184,    -1,     3,    20,    69,
      -1,   244,   181,     3,    20,   184,    -1,   244,   181,     3,
      20,    69,    -1,   245,    -1,   126,   237,   238,     3,   239,
     153,   241,   236,    -1,   126,   237,   238,     3,   134,   244,
     236,    -1,   126,   237,   238,     3,   239,   193,   236,    -1,
     246,    -1,   147,   247,   210,   134,   248,   194,   200,   203,
      -1,    -1,   237,   103,    -1,   237,    93,    -1,     3,    20,
     184,    -1,     3,   178,     3,    20,   184,    -1,   248,   181,
       3,    20,   184,    -1,   248,   181,     3,   178,     3,    20,
     184,    -1,   249,    -1,    48,    58,   250,     3,    -1,    48,
     128,   250,     3,    -1,    -1,    95,   161,    -1,   251,    -1,
     151,     3,    -1,   151,    58,     3,    -1,   252,    -1,    48,
     253,   141,   250,     3,   179,   254,   180,    -1,    48,   253,
     141,   250,     3,   178,     3,   179,   254,   180,    -1,    48,
     253,   141,   250,     3,   179,   254,   180,   268,    -1,    48,
     253,   141,   250,     3,   268,    -1,    48,   253,   141,   250,
       3,   178,     3,   179,   254,   180,   268,    -1,    48,   253,
     141,   250,     3,   178,     3,   268,    -1,    -1,   138,    -1,
     255,    -1,   254,   181,   255,    -1,   118,   101,   179,   256,
     180,    -1,   101,   179,   205,   180,    -1,    94,   179,   205,
     180,    -1,    83,    94,   179,   205,   180,    -1,    83,   101,
     179,   205,   180,    -1,    52,   179,   184,   180,    -1,    81,
     101,   179,   257,   180,   122,     3,   179,   258,   180,   259,
      -1,     3,    -1,   256,   181,     3,    -1,     3,    -1,   257,
     181,     3,    -1,     3,    -1,   258,   181,     3,    -1,    -1,
     259,   115,    63,    49,    -1,   259,   115,    63,   134,   113,
      -1,   259,   115,    63,   123,    -1,   259,   115,   147,    49,
      -1,   259,   115,   147,   134,   113,    -1,   259,   115,   147,
     123,    -1,    -1,   260,     3,   266,   261,    -1,    -1,   261,
      18,   113,    -1,   261,   113,    -1,   261,    69,     4,    -1,
     261,    69,     5,    -1,   261,    69,     7,    -1,   261,    69,
       6,    -1,   261,    36,    -1,   261,    36,   179,     5,   181,
       5,   180,    -1,   261,    36,   179,     5,   180,    -1,   261,
     149,   179,   205,   180,    -1,   261,   149,   101,    -1,   261,
     149,    -1,   261,   118,   101,    -1,   261,   101,    -1,   261,
      53,     4,    -1,   261,    52,   179,   184,   180,    -1,    -1,
     179,     5,   180,    -1,   179,     5,   181,     5,   180,    -1,
      -1,    43,    -1,    -1,   264,   148,    -1,   264,   160,    -1,
      -1,   265,    56,   134,     4,    -1,   265,    57,     4,    -1,
      46,   262,    -1,   137,   262,   264,    -1,   133,   262,   264,
      -1,   111,   262,   264,    -1,    98,   262,   264,    -1,    91,
     262,   264,    -1,    45,   262,   264,    -1,   120,   262,   264,
      -1,    70,   262,   264,    -1,    79,   262,   264,    -1,    72,
     262,   264,    -1,    73,    -1,   146,    -1,   140,    -1,    71,
      -1,   158,    -1,    56,   262,   265,    -1,   152,   179,     5,
     180,   265,    -1,    43,   262,    -1,   154,   179,     5,   180,
      -1,   145,    -1,    40,    -1,   110,    -1,   108,    -1,   136,
     263,   265,    -1,   139,   263,   265,    -1,   109,   263,   265,
      -1,   102,   263,   265,    -1,    75,   179,   267,   180,   265,
      -1,   134,   179,   267,   180,   265,    -1,    41,    -1,     4,
      -1,   267,   181,     4,    -1,   269,   213,   193,    -1,    -1,
      93,    -1,   126,    -1,   270,    -1,   134,   128,     3,    -1,
     134,   128,    69,    -1,   134,   271,    -1,   272,    -1,   271,
     181,   272,    -1,     8,    20,   184,    -1,     8,     9,   184,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   268,   268,   269,   274,   281,   282,   283,   301,   309,
     317,   323,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     354,   355,   356,   357,   360,   361,   362,   363,   364,   367,
     368,   371,   372,   375,   376,   379,   379,   380,   380,   381,
     382,   383,   387,   391,   392,   393,   394,   395,   396,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   413,   414,   415,   418,   419,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   433,   435,   437,   439,
     443,   451,   462,   463,   466,   467,   470,   471,   472,   476,
     486,   487,   501,   502,   503,   504,   507,   514,   522,   523,
     524,   527,   528,   531,   532,   535,   536,   539,   540,   543,
     551,   552,   553,   554,   557,   558,   561,   562,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   576,   577,   578,
     586,   592,   593,   594,   597,   598,   601,   602,   606,   612,
     613,   614,   617,   618,   622,   624,   626,   628,   630,   634,
     635,   636,   639,   640,   643,   644,   647,   648,   649,   652,
     653,   656,   657,   661,   663,   665,   667,   670,   671,   674,
     675,   678,   682,   690,   698,   699,   700,   701,   705,   708,
     709,   712,   712,   714,   718,   725,   734,   741,   748,   758,
     766,   778,   783,   791,   798,   807,   814,   823,   830,   838,
     845,   853,   854,   857,   858,   859,   860,   861,   864,   864,
     867,   868,   871,   881,   894,   895,   895,   898,   899,   900,
     901,   904,   908,   909,   910,   911,   917,   920,   926,   931,
     937,   943,   950,   951,   952,   956,   967,   978,   989,  1003,
    1007,  1008,  1011,  1012,  1016,  1020,  1021,  1025,  1032,  1041,
    1045,  1050,  1054,  1059,  1063,  1064,  1067,  1068,  1071,  1072,
    1073,  1074,  1075,  1076,  1077,  1081,  1082,  1085,  1086,  1089,
    1090,  1093,  1094,  1095,  1096,  1097,  1098,  1099,  1102,  1102,
    1112,  1113,  1114,  1115,  1116,  1117,  1118,  1119,  1120,  1121,
    1122,  1123,  1124,  1125,  1126,  1127,  1128,  1131,  1132,  1133,
    1136,  1137,  1140,  1141,  1142,  1145,  1146,  1147,  1151,  1152,
    1153,  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,
    1163,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,
    1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1184,
    1185,  1188,  1192,  1193,  1194,  1198,  1201,  1202,  1203,  1204,
    1204,  1206,  1207
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
  "CREATE", "CASCADE", "CROSS", "CASE", "CHECK", "COMMENT", "CURRENT_DATE",
  "CURRENT_TIME", "CHAR", "COLLATE", "DATABASE", "DELAYED", "DAY_HOUR",
  "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP", "DAY_MINUTE",
  "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE", "DATETIME",
  "DECIMAL", "DATE", "ESCAPED", "ENUM", "END", "ELSE", "EXPLAIN", "FLOAT",
  "FORCE", "FOREIGN", "FROM", "FULLTEXT", "FOR", "GROUP", "HOUR_MINUTE",
  "HOUR_MICROSECOND", "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "INTEGER",
  "INNER", "IGNORE", "INDEX", "IF", "INSERT", "INTO", "INT", "INTERVAL",
  "JOIN", "KEY", "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT",
  "OFFSET", "LONGBLOB", "MEDIUMTEXT", "MEDIUMBLOB", "MEDIUMINT", "NATURAL",
  "NULLX", "OUTER", "ON", "ORDER", "ONDUPLICATE", "PRIMARY", "QUICK",
  "REAL", "RECLAIM", "REFERENCES", "RESTRICT", "ROLLUP", "RIGHT",
  "REPLACE", "SQL_SMALL_RESULT", "SCHEMA", "SOME", "SQL_CALC_FOUND_ROWS",
  "SQL_BIG_RESULT", "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT",
  "TINYTEXT", "TINYINT", "TEMPORARY", "TEXT", "TIMESTAMP", "TABLE", "THEN",
  "TRAILING", "TRUNCATE", "TINYBLOB", "TIME", "UPDATE", "UNSIGNED",
  "UNIQUE", "USING", "USE", "VARCHAR", "VALUES", "VARBINARY", "WHERE",
  "WHEN", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING",
  "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT", "FSUM", "FAVG", "FMIN",
  "FMAX", "FUPPER", "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE",
  "FCOALESCE", "';'", "'.'", "'('", "')'", "','", "$accept", "stmt_list",
  "expr", "val_list", "opt_val_list", "@1", "@2", "trim_ltb",
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
  "drop_index_stmt", "truncate_table_stmt", "reclaim_table_stmt",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_col_list", "insert_vals_list", "@3",
  "insert_vals", "insert_asgn_list", "replace_stmt", "update_stmt",
  "update_opts", "update_asgn_list", "create_database_stmt",
  "opt_if_not_exists", "use_database_stmt", "create_table_stmt",
  "opt_temporary", "create_col_list", "create_definition",
  "pk_column_list", "fk_column_list", "fk_ref_column_list", "fk_actions",
  "@4", "column_atts", "opt_length", "opt_binary", "opt_uz", "opt_csc",
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
     416,   417,   418,   419,   420,   421,   422,    59,    46,    40,
      41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   182,   183,   183,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   185,   185,   186,   186,   187,   184,   188,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   189,   189,   189,   184,   184,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   184,   184,   184,   184,
     191,   191,   184,   184,   184,   184,   184,   184,   184,   192,
     193,   193,   194,   194,   195,   195,   196,   196,   197,   197,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     203,   203,   203,   203,   204,   204,   205,   205,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   207,   207,   207,
     208,   209,   209,   209,   210,   210,   211,   211,   212,   212,
     212,   212,   213,   213,   214,   214,   214,   214,   214,   215,
     215,   215,   216,   216,   217,   217,   218,   218,   218,   219,
     219,   220,   220,   221,   221,   221,   221,   222,   222,   223,
     223,   224,   192,   225,   226,   226,   226,   226,   225,   227,
     227,   228,   228,   225,   192,   229,   192,   230,   230,   230,
     230,   231,   231,   192,   232,   192,   233,   192,   234,   192,
     235,   236,   236,   237,   237,   237,   237,   237,   238,   238,
     239,   239,   240,   240,   241,   242,   241,   243,   243,   243,
     243,   235,   244,   244,   244,   244,   192,   245,   245,   245,
     192,   246,   247,   247,   247,   248,   248,   248,   248,   192,
     249,   249,   250,   250,   192,   251,   251,   192,   252,   252,
     252,   252,   252,   252,   253,   253,   254,   254,   255,   255,
     255,   255,   255,   255,   255,   256,   256,   257,   257,   258,
     258,   259,   259,   259,   259,   259,   259,   259,   260,   255,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   262,   262,   262,
     263,   263,   264,   264,   264,   265,   265,   265,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   267,
     267,   268,   269,   269,   269,   192,   270,   270,   270,   271,
     271,   272,   272
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
      11,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       8,     0,     4,     0,     2,     2,     2,     2,     1,     0,
       0,     3,     1,     3,     3,     0,     6,     1,     1,     3,
       3,     7,     3,     3,     5,     5,     1,     8,     7,     7,
       1,     8,     0,     2,     2,     3,     5,     5,     7,     1,
       4,     4,     0,     2,     1,     2,     3,     1,     8,    10,
       9,     6,    11,     8,     0,     1,     1,     3,     5,     4,
       4,     5,     5,     4,    11,     1,     3,     1,     3,     1,
       3,     0,     4,     5,     4,     4,     5,     4,     0,     4,
       0,     3,     2,     3,     3,     3,     3,     2,     7,     5,
       5,     3,     2,     3,     2,     3,     5,     0,     3,     5,
       0,     1,     0,     2,     2,     0,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     3,     5,     2,     4,     1,     1,
       1,     1,     3,     3,     3,     3,     5,     5,     1,     1,
       3,     3,     0,     1,     1,     1,     3,     3,     2,     1,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   264,   187,     0,   213,     0,   213,     0,   128,     0,
     213,     0,     0,     0,    99,   182,   194,   196,   203,   205,
     207,   209,   236,   240,   249,   254,   257,   355,   252,     0,
     252,   265,     0,     0,     0,     0,     0,   219,     0,   219,
       0,     0,   358,   359,     0,     0,     0,     0,   255,     0,
       1,     2,     0,     0,     0,     0,     0,     0,   252,   191,
       0,   186,   184,   185,     0,   204,   195,   215,   216,   217,
     218,   214,     0,   208,     0,     0,     0,   356,   357,     0,
       4,     7,     8,    10,     9,     6,     0,     0,     0,   139,
     129,    96,     0,    97,    98,   130,   131,   132,    11,   134,
     136,   135,   133,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,   100,   137,   206,   217,   214,   143,     0,     0,   144,
     146,   147,   153,   256,     3,   253,   250,     0,     0,   251,
       0,     0,     0,     0,   189,   102,     0,     0,     0,   220,
     220,   362,   361,   360,     0,    43,     0,    28,    27,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,   176,     0,     0,     0,
       0,   161,   160,   164,   168,   165,     0,     0,   162,   152,
       0,     0,     0,     0,     0,   352,   192,     0,   115,     0,
     102,   191,     0,     0,     0,     0,     0,     5,    41,    44,
       0,    38,     0,     0,    88,     0,     0,     0,     0,    74,
      72,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,    21,
      22,    20,    94,    92,    36,     0,    34,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    23,    24,
      26,    12,    13,    14,    15,    16,    17,    25,   141,   102,
     138,   143,     0,     0,     0,   148,   181,   151,     0,   102,
     145,   162,   162,     0,   155,     0,   163,     0,   150,     0,
       0,     0,     0,   353,   354,     0,   288,   261,   153,   103,
       0,   120,   102,   188,   190,     0,   211,   222,     0,     0,
     211,     0,   211,     0,    52,     0,    86,     0,     0,     0,
      51,     0,     0,    63,     0,     0,     0,     0,    53,    54,
      55,    56,    57,    58,    66,    67,    68,     0,     0,     0,
      37,    35,     0,     0,    95,    93,    47,     0,     0,     0,
       0,     0,     0,   104,   176,   178,   178,   178,     0,     0,
       0,   115,   166,   167,     0,     0,   169,     0,   201,     0,
       0,     0,     0,   352,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,   183,   193,     0,     0,
       0,   231,   221,     0,     0,   211,   238,   211,   239,    42,
      90,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,     0,    39,
       0,     0,     0,    30,     0,   113,   149,     0,     0,     0,
       0,   245,     0,     0,   120,   158,   156,     0,     0,   154,
     170,     0,   197,     0,     0,     0,     0,   288,   263,     0,
       0,     0,     0,     0,     0,     0,   352,   288,     0,   351,
     108,   116,   117,   121,   233,   232,     0,     0,   223,   228,
     227,     0,   225,   210,   237,    87,    91,     0,    61,    60,
       0,    65,     0,     0,    75,    76,    69,     0,    71,    46,
       0,    50,    40,    33,    31,    32,     0,     0,   115,   177,
       0,     0,     0,     0,     0,     0,   241,   171,     0,   157,
     202,     0,   199,     0,     0,     0,     0,     0,     0,   126,
       0,     0,     0,   260,   267,   339,   348,   307,   307,   307,
     307,   307,   332,   307,   329,     0,   307,   307,   307,   310,
     341,   310,   340,   307,   307,   307,     0,   310,   307,   310,
     331,   338,   330,     0,     0,   333,   290,   109,   110,   119,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
      64,    77,    78,    79,    80,    84,    83,    85,    82,    81,
       0,    48,   108,   111,   114,   120,   179,     0,     0,     0,
     246,   247,     0,     0,   198,     0,   352,   273,   277,     0,
       0,     0,   270,     0,   269,   275,     0,     0,   336,   312,
     318,   315,   312,   312,     0,   312,   312,   312,   311,   315,
     315,   312,   312,   312,     0,   315,   312,   315,     0,     0,
     289,   118,   123,   122,   212,   235,   234,   230,   229,     0,
      62,    59,    70,   106,     0,     0,   105,   124,   175,     0,
     174,   173,     0,   172,   200,   262,     0,     0,   271,   272,
     127,   268,     0,     0,   324,   334,   326,   328,   349,     0,
     327,   323,   322,   345,   344,   321,   325,   320,     0,   342,
     319,   343,     0,     0,     0,   297,     0,     0,     0,   304,
     292,     0,   302,     0,   112,   108,     0,   101,   180,   248,
       0,   278,   276,   308,     0,   313,   314,     0,     0,   315,
       0,   315,   315,   337,   291,     0,     0,   305,   293,   294,
     296,   295,   303,   301,     0,   226,   107,   125,     0,     0,
       0,   317,   346,   350,   347,   335,     0,     0,     0,     0,
     309,   316,   299,     0,   306,   300,   279,     0,     0,   281,
       0,   298,   274,   280,     0,     0,     0,   282,   284,     0,
     285,   287,     0,   283,   286
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,   238,   239,   240,   372,   446,   253,   439,   162,
      13,    14,   228,   455,   613,   589,   676,   528,   331,   491,
     492,   416,   727,   550,    44,   121,   122,   202,   128,   129,
     130,   220,   131,   217,   317,   218,   313,   469,   470,   305,
     458,   617,   132,    15,    34,    64,   144,    16,    17,   399,
      18,    19,    20,    21,   421,    37,    72,   234,   338,   425,
     597,   501,   336,    22,    23,    47,   309,    24,    53,    25,
      26,    33,   410,   411,   636,   629,   777,   782,   412,   660,
     638,   649,   694,   695,   586,   699,   327,   328,    27,    42,
      43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -591
static const yytype_int16 yypact[] =
{
     290,   160,  -591,   102,  -591,   -89,  -591,    15,  -591,   -81,
       2,   175,   174,    21,  -591,  -591,  -591,  -591,  -591,  -591,
    -591,  -591,  -591,  -591,  -591,  -591,  -591,  -591,    84,    10,
      84,  -591,   131,    87,   110,   250,   257,   243,   297,   243,
      42,   190,   130,  -591,   392,   313,   254,     5,  -591,   315,
    -591,   290,   159,   323,   214,   182,   338,    14,    84,   177,
     349,  -591,  -591,  -591,   -64,  -591,  -591,  -591,  -591,  -591,
    -591,  -591,   355,  -591,   370,  1350,  1350,  -591,  -591,   373,
    -124,  -591,  -591,  -591,  -591,   376,  1350,  1350,  1350,  -591,
    -591,  -591,   666,  -591,  -591,  -591,  -591,  -591,  -591,  -591,
    -591,  -591,  -591,   213,   224,   259,   261,   263,   278,   300,
     309,   312,   325,   337,   339,   341,   342,   356,   358,  1350,
    2380,   -23,  -591,  -591,     8,     9,    11,     7,  -108,   120,
    -591,  -591,   430,  -591,  -591,  -591,  -591,   385,   512,  -591,
     402,   377,   531,   513,  -591,   167,  -112,     5,   538,  -109,
    -101,  2452,  2452,  -591,   539,  1350,  1350,   761,   761,  -591,
    1350,  2064,   -41,   410,  1350,   489,  1350,  1350,   749,  1350,
    1350,  1350,  1350,  1350,  1350,  1350,  1350,  1350,  1350,  1595,
    -591,  1350,  1350,  1350,  1350,  1350,    23,   367,   314,  1350,
     572,  1350,  1350,  1350,  1350,  1350,  1350,  1350,  1350,  1350,
    1350,   546,  -591,     5,  1350,   548,   -40,   389,   113,   567,
       5,  -591,  -591,  -591,   -58,  -591,     5,   472,   459,  -591,
     571,   403,   466,   580,   581,    68,  -591,  1350,   469,     5,
      16,   177,   583,   584,   435,   583,   -77,  -591,  1231,  -591,
     411,  2452,   974,   100,  -591,  1350,  1350,   412,   255,  -591,
    -591,  -591,  1618,   847,  1254,  1403,   413,  1642,  1663,  1684,
    1705,  1730,  1758,  1781,  1805,  1431,  1454,  1520,  -591,  2472,
    2491,  2509,  2527,  2527,  -591,    31,  -591,   410,  1350,  1350,
     416,  1350,  2410,   417,   419,   420,   927,   618,   670,   502,
     336,   401,   401,   570,   570,   570,   570,  -591,  -591,    16,
    -591,    25,   500,   503,   504,  -591,  -591,  -591,   -14,    40,
     120,   459,   459,   520,   488,     5,  -591,   521,  -591,   619,
     621,   449,   514,  -591,  -591,   627,   238,  -591,   430,  2452,
     591,   528,    16,  -591,  -591,   615,    46,  -591,   116,   457,
      46,   457,   532,  1350,  -591,  1350,  -591,  1350,  2300,  2131,
    -591,  1350,  1350,  -591,  1350,  2279,   568,   568,  -591,  -591,
    -591,  -591,  -591,  -591,  -591,  -591,  -591,  1350,  1350,  1350,
    -591,  -591,  1350,   486,  2527,  2527,   410,  2431,  1350,   410,
     410,   410,   495,   552,   -40,   592,   592,   592,  1350,   674,
     675,   469,  -591,  -591,     5,  1350,   -76,     5,  -591,   125,
     501,   619,   676,   -69,   507,   586,   -33,   509,   510,   589,
     134,  -591,   678,   410,   679,  1350,  -591,  -591,  1060,   602,
     701,  -591,  -591,   702,  1127,    55,  -591,    55,  -591,  -591,
    2452,  2321,  -591,  1350,  1567,    69,  1826,  1350,  1350,   526,
     527,  1847,  1541,  1868,   529,  -591,  1350,   530,  1350,   588,
     534,   535,   536,  -591,   669,   622,  -591,   608,   540,   543,
     544,  2452,   698,   -13,   528,  -591,  2452,  1350,   545,  -591,
    -591,   -76,  -591,   722,   619,   169,   547,   238,  -591,  1350,
     549,   550,   551,   724,   724,   553,   -63,   238,  2130,  -591,
     180,   569,  -591,   863,  -591,  2452,   611,   711,  -591,  -591,
    2452,   198,  -591,  -591,  -591,  -591,  2452,  1350,  -591,  -591,
    1350,  -591,  1893,  2039,  -591,  -591,  -591,  1350,  -591,  -591,
     579,  -591,   588,  -591,  -591,  -591,  1350,  1350,   469,  -591,
     746,   746,   746,  1350,  1350,   757,  -591,  2452,   724,  -591,
    -591,   210,  -591,   619,   221,  1921,   758,   724,   724,  -591,
     225,   227,   759,  -591,  -591,  -591,  -591,   585,   585,   585,
     585,   585,  -591,   585,  -591,   590,   585,   585,   585,   720,
    -591,   720,  -591,   585,   585,   585,   593,   720,   585,   720,
    -591,  -591,  -591,   594,   597,  -591,  -591,  -591,  -591,  -591,
     679,  1350,  1350,   583,  1150,  -591,  1327,   598,  1944,  1968,
    -591,  -591,  -591,  -591,  -591,  -591,  -591,  -591,  -591,  -591,
    1989,  -591,  2344,  -110,  2452,   528,  -591,   239,   241,   252,
    2452,  2452,   745,   264,  -591,   268,    80,  -591,  -591,   270,
     272,   275,  -591,   765,  -591,  -591,   279,   766,  -591,  -591,
    -591,  -591,  -591,  -591,   774,  -591,  -591,  -591,  -591,  -591,
    -591,  -591,  -591,  -591,   774,  -591,  -591,  -591,   787,   788,
     186,  -591,  2452,  2452,   613,  -591,  2452,  -591,  2452,  1127,
    -591,  -591,  -591,  -591,   646,  1350,  -591,   700,  -591,   792,
    -591,  -591,  1350,  -591,  -591,  -591,   677,   795,  -591,  -591,
    -591,  -591,   798,   281,    63,   418,    63,    63,  -591,   284,
      63,    63,    63,   418,   418,    63,    63,    63,   304,   418,
      63,   418,   625,   626,   689,   628,   629,   805,   408,  -591,
    -591,   709,     1,   306,  -591,  2344,   724,  -591,  -591,  2452,
     808,  -591,  -591,  -591,   807,  -591,  -591,   680,   809,  -591,
     811,  -591,  -591,  -591,  -591,   812,  1350,  -591,  -591,  -591,
    -591,  -591,  -591,  -591,   724,  -591,  -591,   635,   639,   640,
     815,  -591,   418,  -591,   418,   418,   318,  2010,   320,   818,
    -591,  -591,  -591,   819,  -591,  -591,  -591,   322,   643,  -591,
     822,  -591,   728,  -591,    44,   -15,   117,  -591,  -591,   713,
    -591,  -591,   731,  -591,  -591
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -591,   796,   -44,  -271,  -591,  -591,  -591,  -591,   491,   685,
    -591,  -118,   -68,  -591,  -591,  -590,  -591,  -591,  -371,  -591,
     266,  -448,  -591,  -482,  -591,  -591,   645,  -111,    83,   647,
    -212,   533,  -591,  -591,   197,  -591,  -591,  -591,   387,   475,
     124,   -19,  -591,  -591,  -591,   800,   632,  -591,  -591,  -374,
    -591,  -591,  -591,  -591,  -321,   209,   827,   717,  -591,   554,
    -591,   199,  -234,  -591,  -591,  -591,  -591,  -591,    19,  -591,
    -591,  -591,   393,   382,  -591,  -591,  -591,  -591,  -591,  -591,
    -191,  -363,  -175,  -450,  -591,   217,  -400,  -591,  -591,  -591,
     801
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -260
static const yytype_int16 yytable[] =
{
     120,   340,   551,   478,   314,  -242,   388,   534,   126,   207,
     126,  -244,  -243,    54,   180,   206,   536,   140,   147,   426,
     464,   428,   673,    40,   323,   232,   209,   475,   180,   274,
     323,   151,   152,   235,   787,   244,   245,   370,   229,   467,
     302,   275,   157,   158,   159,   247,   311,   674,   161,    56,
     201,    75,    38,   303,   154,   155,   623,   324,     8,   203,
      45,   481,    76,   324,   201,   630,   631,   312,   482,   148,
     233,   675,   429,   210,   468,   179,   341,   142,   233,   181,
     182,   183,   184,   185,   186,   187,   553,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     541,   444,   753,   396,   503,    55,   504,   785,   788,   141,
     477,   304,   241,    59,  -258,   246,   242,   148,   342,   789,
     248,   252,   254,   255,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   756,   276,   269,   270,   271,
     272,   273,     8,    41,   371,   282,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   615,   204,   373,
     120,   323,   333,   419,   389,   535,   790,   677,   382,   625,
     211,   227,   419,   323,    50,   520,   346,   347,    48,    52,
     754,  -242,   465,   329,   127,   471,   127,  -244,  -243,   205,
     384,   786,    60,    77,   324,   227,    35,   210,    51,   703,
     704,   348,   349,    61,   714,   709,   324,   711,   650,   355,
     208,   735,   212,    62,   655,    39,   657,   587,    28,    46,
    -159,   390,   715,   736,   213,    57,   685,   420,    58,    63,
     230,   383,   214,    49,   374,   375,   502,   377,   716,   717,
     791,   391,   179,    36,   757,   215,   325,   326,   588,   509,
     510,   792,   216,    65,    29,   718,   246,  -259,   447,    78,
      66,   450,   451,   452,   417,   181,   182,   183,   184,   185,
     186,   187,   768,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   299,   719,    30,   762,
     404,   764,   765,   307,   210,   489,   422,   423,    31,   720,
      73,   430,    67,   431,   721,   472,   473,   434,   435,    32,
     436,    79,   332,    67,   486,   487,   123,  -191,   133,   405,
     135,   406,   227,   441,   442,   443,   136,   278,   279,   137,
     280,    68,   407,   281,   449,   722,    69,   351,     1,   408,
      70,   139,    68,   138,   461,   143,    71,   124,  -191,   542,
     473,   466,   145,     2,     3,   143,   409,   125,   149,   664,
     194,   195,   196,   197,   198,   199,   200,   639,   640,   641,
     642,   493,   643,   150,   495,   645,   646,   647,   595,   596,
     500,    40,   651,   652,   653,   156,     4,   656,   221,   506,
     624,   473,   163,   512,   513,    80,    81,    82,    83,    84,
      85,   626,   487,   164,   522,   632,   633,   634,   633,    86,
      87,     5,   748,   749,   750,   751,     6,    88,    89,   678,
     679,   680,   679,   537,     7,     8,    90,   196,   197,   198,
     199,   200,   681,   679,     9,   545,   352,    10,   165,    91,
     166,    11,   167,    92,   683,   633,    93,    94,   684,   473,
     686,   687,   688,   633,    95,   689,   633,   168,    96,   691,
     692,   733,   734,   598,   739,   740,   599,   696,   697,   219,
     700,   701,   702,   610,   737,   738,   705,   706,   707,   169,
      97,   710,   612,   614,   741,   740,   755,   596,   170,   620,
     621,   171,    80,    81,    82,    83,    84,    85,   772,   773,
     775,   633,   779,   780,   172,    98,    86,    87,   392,   393,
     459,   460,   618,   619,    88,   222,   173,   223,   174,    99,
     175,   176,   100,   101,   102,   193,   194,   195,   196,   197,
     198,   199,   200,   249,   225,   177,    91,   178,   224,   226,
      92,   231,   237,    93,    94,     8,   277,   662,   663,   298,
     666,   301,   668,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   306,
     308,   119,   315,   316,   318,    80,    81,    82,    83,    84,
      85,   320,   319,   321,   322,   330,   335,   337,   339,    86,
      87,   344,   350,   358,   250,   376,   379,    88,   380,   381,
     200,   385,    98,   395,   386,   387,   283,   284,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,    91,
     394,   397,   398,    92,   400,   500,    93,    94,   401,   402,
     403,   725,   251,   414,   415,   418,   424,   454,   729,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   419,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   445,   438,   119,    80,
      81,    82,    83,    84,    85,   453,   457,   462,   463,   476,
     474,   488,   490,    86,    87,    98,   479,   480,   483,   484,
     485,    88,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   285,   767,   496,   497,   498,   514,   515,   529,   519,
     521,   526,   527,    91,   523,   524,   525,    92,   533,   530,
      93,    94,   531,   532,   538,   540,   543,   549,   546,   547,
     548,   594,   552,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   616,
     590,   286,    80,    81,    82,    83,    84,    85,   593,   611,
     622,   628,   635,   648,   637,   682,    86,    87,   690,   644,
     724,   693,   654,   658,    88,   256,   659,   669,   698,    98,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   712,   713,   420,   728,    91,   726,   731,   730,
      92,   732,   744,    93,    94,   742,   743,   745,   746,   747,
     752,   758,   759,   761,   760,   763,   633,   766,   769,   771,
     770,   776,   160,   781,   778,   783,   793,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   784,   794,   119,   243,   134,   440,   300,
      80,    81,    82,    83,    84,    85,   661,   310,   539,   456,
     146,   413,    98,   334,    86,    87,    74,   236,   723,   554,
     544,   708,    88,   181,   182,   183,   184,   185,   186,   187,
     153,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,    91,   427,     0,     0,    92,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,     0,     0,   119,   354,
      80,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     591,     0,     0,     0,    91,     0,     0,     0,    92,     0,
       0,    93,    94,     0,   181,   182,   183,   184,   185,   186,
     187,     0,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,     0,     0,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,   592,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,    80,    81,    82,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     0,     0,     0,    88,     0,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,     0,     0,   119,    91,     0,     0,
       0,    92,     0,     0,    93,    94,   345,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   494,
      80,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,     0,     0,     0,     0,
       0,     0,    88,    80,    81,    82,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     0,    98,    91,    88,     0,     0,    92,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   499,    91,     0,     0,
       0,    92,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   665,
       0,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,     0,     0,   119,
      98,   181,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,     0,    98,   181,   182,   183,   184,   185,   186,
     187,     0,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,     0,     0,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,     0,     0,   119,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,     0,     0,   119,
      80,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,     0,     0,     0,     0,
       0,     0,    88,    80,    81,    82,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     0,     0,    91,    88,     0,     0,    92,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   667,    91,     0,     0,
       0,    92,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,   343,   181,   182,   183,   184,   185,   186,   187,
       0,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,     0,   356,     0,     0,     0,     0,
      98,   181,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,     0,    98,   181,   182,   183,   184,   185,   186,
     187,     0,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,     0,     0,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,     0,     0,   119,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,     0,     0,   119,
     181,   182,   183,   184,   185,   186,   187,     0,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   181,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,     0,     0,     0,     0,     0,   181,   182,   183,
     184,   185,   186,   187,   357,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,     0,     0,
       0,     0,     0,     0,     0,   181,   182,   183,   184,   185,
     186,   187,   367,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,     0,     0,   181,   182,
     183,   184,   185,   186,   187,   368,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,     0,
       0,   507,   181,   182,   183,   184,   185,   186,   187,     0,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   181,   182,   183,   184,   185,   186,   187,
       0,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   181,   182,   183,   184,   185,   186,
     187,   369,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   181,   182,   183,   184,   185,
     186,   187,   517,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,     0,     0,     0,     0,
     181,   182,   183,   184,   185,   186,   187,   508,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,     0,     0,     0,     0,     0,     0,     0,   181,   182,
     183,   184,   185,   186,   187,   268,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,     0,
       0,   181,   182,   183,   184,   185,   186,   187,   353,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,     0,     0,     0,   181,   182,   183,   184,   185,
     186,   187,   359,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   181,   182,   183,   184,
     185,   186,   187,   360,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   181,   182,   183,
     184,   185,   186,   187,   361,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   181,   182,
     183,   184,   185,   186,   187,   362,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,     0,
       0,     0,     0,   181,   182,   183,   184,   185,   186,   187,
     363,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,     0,     0,     0,     0,     0,     0,
       0,   181,   182,   183,   184,   185,   186,   187,   364,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,     0,     0,   181,   182,   183,   184,   185,   186,
     187,   365,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,     0,     0,     0,   181,   182,
     183,   184,   185,   186,   187,   366,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   181,
     182,   183,   184,   185,   186,   187,   511,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     181,   182,   183,   184,   185,   186,   187,   516,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,     0,     0,     0,     0,     0,     0,     0,   518,   181,
     182,   183,   184,   185,   186,   187,     0,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
       0,     0,     0,   600,   181,   182,   183,   184,   185,   186,
     187,     0,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,     0,     0,     0,     0,   601,
     602,   627,     0,     0,   603,     0,   604,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   670,   605,   606,     0,   607,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   182,   183,   184,   185,   186,   187,   671,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,     0,     0,     0,     0,     0,     0,     0,   672,
     555,   556,     0,   557,     0,   558,   559,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   560,     0,     0,     0,
     774,     0,     0,     0,     0,     0,     0,   608,   609,     0,
     561,   562,   563,   564,     0,   565,     0,     0,     0,   566,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     160,   567,     0,     0,     0,     0,     0,     0,   568,     0,
       0,     0,   569,     0,     0,     0,     0,     0,   570,   571,
     572,   573,     0,     0,     0,     0,     0,     0,     0,     0,
     574,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   575,   576,     0,   577,   578,     0,   579,
     580,     0,     0,   433,     0,   581,   582,     0,     0,     0,
       0,     0,   583,     0,   584,     0,     0,     0,   585,   181,
     182,   183,   184,   185,   186,   187,     0,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     181,   182,   183,   184,   185,   186,   187,     0,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   181,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,     0,     0,   181,   182,   183,   184,   185,   186,
     187,   437,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,     0,   432,     0,     0,     0,
       0,   587,     0,   180,     0,     0,     0,     0,     0,     0,
     181,   182,   183,   184,   185,   186,   187,   505,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,     0,   588,     0,     0,     0,     0,     0,     0,   201,
     181,   182,   183,   184,   185,   186,   187,     0,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   181,   182,   183,   184,   185,   186,   187,   378,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   181,   182,   183,   184,   185,   186,   187,   448,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   182,   183,   184,   185,   186,   187,     0,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   183,   184,   185,   186,   187,     0,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   184,   185,   186,   187,     0,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
    -260,  -260,  -260,  -260,     0,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200
};

static const yytype_int16 yycheck[] =
{
      44,   235,   484,   403,   216,     3,    20,    20,     3,   127,
       3,     3,     3,     3,     3,   126,   464,     3,    82,   340,
     391,   342,   612,     8,    93,   134,   134,   401,     3,     6,
      93,    75,    76,   134,    49,    76,    77,     6,   150,   115,
      80,    18,    86,    87,    88,   163,   104,   157,    92,    30,
      39,     9,   141,    93,   178,   179,   538,   126,   135,    82,
     141,    94,    20,   126,    39,   547,   548,   125,   101,   181,
     179,   181,   343,   181,   150,   119,   153,    58,   179,    10,
      11,    12,    13,    14,    15,    16,   486,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     474,   372,   101,   315,   425,    95,   427,    63,   123,    95,
     179,   151,   156,     3,   177,   156,   160,   181,   236,   134,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   725,   113,   181,   182,   183,
     184,   185,   135,   128,   113,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   528,   181,   277,
     204,    93,   230,   117,   178,   178,    49,   615,   286,   543,
      50,   155,   117,    93,     0,   446,    76,    77,     3,    95,
     179,   179,   394,   227,   179,   397,   179,   179,   179,   178,
     301,   147,    82,     3,   126,   155,    94,   181,   177,   649,
     650,   245,   246,    93,    18,   655,   126,   657,   571,   253,
     127,   148,    92,   103,   577,     6,   579,    37,    58,    10,
     100,   181,    36,   160,   104,    94,   626,   181,   141,   119,
     147,   299,   112,    58,   278,   279,   181,   281,    52,    53,
     123,   309,   286,   141,   726,   125,   178,   179,    68,   180,
     181,   134,   132,     3,    94,    69,   156,   177,   376,    69,
       3,   379,   380,   381,   332,    10,    11,    12,    13,    14,
      15,    16,   754,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   203,   101,   128,   739,
      52,   741,   742,   180,   181,   413,   180,   181,   138,   113,
       3,   345,    59,   347,   118,   180,   181,   351,   352,   149,
     354,   181,   229,    59,   180,   181,     3,   150,     3,    81,
     161,    83,   155,   367,   368,   369,     3,    13,    14,   115,
      16,    88,    94,    19,   378,   149,    93,    82,    48,   101,
      97,     3,    88,   161,   388,   178,   103,    93,   181,   180,
     181,   395,     3,    63,    64,   178,   118,   103,     3,   593,
      24,    25,    26,    27,    28,    29,    30,   558,   559,   560,
     561,   415,   563,     3,   418,   566,   567,   568,   180,   181,
     424,     8,   573,   574,   575,     9,    96,   578,     3,   433,
     180,   181,   179,   437,   438,     3,     4,     5,     6,     7,
       8,   180,   181,   179,   448,   180,   181,   180,   181,    17,
      18,   121,     4,     5,     6,     7,   126,    25,    26,   180,
     181,   180,   181,   467,   134,   135,    34,    26,    27,    28,
      29,    30,   180,   181,   144,   479,   181,   147,   179,    47,
     179,   151,   179,    51,   180,   181,    54,    55,   180,   181,
     180,   181,   180,   181,    62,   180,   181,   179,    66,   180,
     181,   180,   181,   507,   180,   181,   510,   642,   643,    39,
     645,   646,   647,   517,    56,    57,   651,   652,   653,   179,
      88,   656,   526,   527,   180,   181,   180,   181,   179,   533,
     534,   179,     3,     4,     5,     6,     7,     8,   180,   181,
     180,   181,   180,   181,   179,   113,    17,    18,   311,   312,
     386,   387,   531,   532,    25,     3,   179,   115,   179,   127,
     179,   179,   130,   131,   132,    23,    24,    25,    26,    27,
      28,    29,    30,    44,     3,   179,    47,   179,   161,    26,
      51,     3,     3,    54,    55,   135,   179,   591,   592,     3,
     594,     3,   596,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   180,
       3,   179,   100,   114,     3,     3,     4,     5,     6,     7,
       8,   115,   179,     3,     3,   116,     3,     3,   153,    17,
      18,   180,   180,   180,   105,   179,   179,    25,   179,   179,
      30,   101,   113,   115,   101,   101,    34,    35,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    47,
     100,   100,     3,    51,     3,   669,    54,    55,   179,   115,
       3,   675,   143,    42,   106,    20,   179,    85,   682,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   117,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   180,    99,   179,     3,
       4,     5,     6,     7,     8,   180,    84,     3,     3,     3,
     179,     3,     3,    17,    18,   113,   179,   101,   179,   179,
     101,    25,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   129,   746,   101,     3,     3,   180,   180,   100,   180,
     180,    42,    90,    47,   180,   180,   180,    51,    20,   179,
      54,    55,   179,   179,   179,     3,   179,     3,   179,   179,
     179,    20,   179,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     3,
     181,   179,     3,     4,     5,     6,     7,     8,   147,   180,
       3,     3,     3,    43,   179,    20,    17,    18,     3,   179,
     124,     5,   179,   179,    25,    26,   179,   179,     4,   113,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     5,     5,   181,     3,    47,    97,     3,   122,
      51,     3,   113,    54,    55,   180,   180,   179,   179,     4,
     101,     3,     5,     4,   134,     4,   181,     5,   179,     4,
     180,     3,   156,   180,     5,     3,   113,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   115,   113,   179,   161,    51,   357,   204,
       3,     4,     5,     6,     7,     8,   590,   210,   471,   384,
      60,   328,   113,   231,    17,    18,    39,   150,   669,   487,
     477,   654,    25,    10,    11,    12,    13,    14,    15,    16,
      79,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    47,   341,    -1,    -1,    51,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    -1,    -1,   179,    82,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    -1,
      -1,    54,    55,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,    -1,    -1,   179,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,    -1,    -1,   179,    47,    -1,    -1,
      -1,    51,    -1,    -1,    54,    55,   142,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,   113,    47,    25,    -1,    -1,    51,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    47,    -1,    -1,
      -1,    51,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    -1,    -1,   179,
     113,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   113,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,    -1,    -1,   179,    -1,    -1,    -1,
      -1,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    -1,    -1,   179,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    47,    25,    -1,    -1,    51,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    47,    -1,    -1,
      -1,    51,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,   181,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,   181,    -1,    -1,    -1,    -1,
     113,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   113,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,    -1,    -1,   179,    -1,    -1,    -1,
      -1,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    -1,    -1,   179,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   181,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   181,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   181,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    84,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   181,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   181,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   180,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   180,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   180,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   180,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   180,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   180,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   180,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     180,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   180,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   180,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   180,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   180,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   180,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,   180,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    60,
      61,   180,    -1,    -1,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   180,    86,    87,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   180,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
      40,    41,    -1,    43,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
     180,    -1,    -1,    -1,    -1,    -1,    -1,   158,   159,    -1,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,   108,   109,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,   134,    -1,   136,   137,    -1,   139,
     140,    -1,    -1,   142,    -1,   145,   146,    -1,    -1,    -1,
      -1,    -1,   152,    -1,   154,    -1,    -1,    -1,   158,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    82,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    76,    -1,    -1,    -1,
      -1,    37,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    76,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    38,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    38,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    48,    63,    64,    96,   121,   126,   134,   135,   144,
     147,   151,   183,   192,   193,   225,   229,   230,   232,   233,
     234,   235,   245,   246,   249,   251,   252,   270,    58,    94,
     128,   138,   149,   253,   226,    94,   141,   237,   141,   237,
       8,   128,   271,   272,   206,   141,   237,   247,     3,    58,
       0,   177,    95,   250,     3,    95,   250,    94,   141,     3,
      82,    93,   103,   119,   227,     3,     3,    59,    88,    93,
      97,   103,   238,     3,   238,     9,    20,     3,    69,   181,
       3,     4,     5,     6,     7,     8,    17,    18,    25,    26,
      34,    47,    51,    54,    55,    62,    66,    88,   113,   127,
     130,   131,   132,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   179,
     184,   207,   208,     3,    93,   103,     3,   179,   210,   211,
     212,   214,   224,     3,   183,   161,     3,   115,   161,     3,
       3,    95,   250,   178,   228,     3,   227,    82,   181,     3,
       3,   184,   184,   272,   178,   179,     9,   184,   184,   184,
     156,   184,   191,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   184,
       3,    10,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    39,   209,    82,   181,   178,   209,   193,   210,   134,
     181,    50,    92,   104,   112,   125,   132,   215,   217,    39,
     213,     3,     3,   115,   161,     3,    26,   155,   194,   150,
     210,     3,   134,   179,   239,   134,   239,     3,   184,   185,
     186,   184,   184,   191,    76,    77,   156,   193,   184,    44,
     105,   143,   184,   189,   184,   184,    26,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   180,   184,
     184,   184,   184,   184,     6,    18,   113,   179,    13,    14,
      16,    19,   184,    34,    35,   129,   179,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,     3,   210,
     208,     3,    80,    93,   151,   221,   180,   180,     3,   248,
     211,   104,   125,   218,   212,   100,   114,   216,     3,   179,
     115,     3,     3,    93,   126,   178,   179,   268,   269,   184,
     116,   200,   210,   194,   228,     3,   244,     3,   240,   153,
     244,   153,   193,   181,   180,   142,    76,    77,   184,   184,
     180,    82,   181,   180,    82,   184,   181,   181,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   181,   181,   181,
       6,   113,   187,   193,   184,   184,   179,   184,    38,   179,
     179,   179,   193,   194,   209,   101,   101,   101,    20,   178,
     181,   194,   216,   216,   100,   115,   212,   100,     3,   231,
       3,   179,   115,     3,    52,    81,    83,    94,   101,   118,
     254,   255,   260,   213,    42,   106,   203,   194,    20,   117,
     181,   236,   180,   181,   179,   241,   236,   241,   236,   185,
     184,   184,    76,   142,   184,   184,   184,    82,    99,   190,
     190,   184,   184,   184,   185,   180,   188,   193,    38,   184,
     193,   193,   193,   180,    85,   195,   221,    84,   222,   222,
     222,   184,     3,     3,   200,   212,   184,   115,   150,   219,
     220,   212,   180,   181,   179,   231,     3,   179,   268,   179,
     101,    94,   101,   179,   179,   101,   180,   181,     3,   193,
       3,   201,   202,   184,    69,   184,   101,     3,     3,    69,
     184,   243,   181,   236,   236,    76,   184,    84,   180,   180,
     181,   180,   184,   184,   180,   180,   180,   181,   180,   180,
     185,   180,   184,   180,   180,   180,    42,    90,   199,   100,
     179,   179,   179,    20,    20,   178,   203,   184,   179,   220,
       3,   231,   180,   179,   254,   184,   179,   179,   179,     3,
     205,   205,   179,   268,   255,    40,    41,    43,    45,    46,
      56,    70,    71,    72,    73,    75,    79,    91,    98,   102,
     108,   109,   110,   111,   120,   133,   134,   136,   137,   139,
     140,   145,   146,   152,   154,   158,   266,    37,    68,   197,
     181,   107,   181,   147,    20,   180,   181,   242,   184,   184,
     180,    60,    61,    65,    67,    86,    87,    89,   158,   159,
     184,   180,   184,   196,   184,   200,     3,   223,   223,   223,
     184,   184,     3,   205,   180,   231,   180,   180,     3,   257,
     205,   205,   180,   181,   180,     3,   256,   179,   262,   262,
     262,   262,   262,   262,   179,   262,   262,   262,    43,   263,
     263,   262,   262,   262,   179,   263,   262,   263,   179,   179,
     261,   202,   184,   184,   244,    69,   184,    69,   184,   179,
     180,   180,   180,   197,   157,   181,   198,   203,   180,   181,
     180,   180,    20,   180,   180,   268,   180,   181,   180,   180,
       3,   180,   181,     5,   264,   265,   264,   264,     4,   267,
     264,   264,   264,   265,   265,   264,   264,   264,   267,   265,
     264,   265,     5,     5,    18,    36,    52,    53,    69,   101,
     113,   118,   149,   243,   124,   184,    97,   204,     3,   184,
     122,     3,     3,   180,   181,   148,   160,    56,    57,   180,
     181,   180,   180,   180,   113,   179,   179,     4,     4,     5,
       6,     7,   101,   101,   179,   180,   197,   205,     3,     5,
     134,     4,   265,     4,   265,   265,     5,   184,   205,   179,
     180,     4,   180,   181,   180,   180,     3,   258,     5,   180,
     181,   180,   259,     3,   115,    63,   147,    49,   123,   134,
      49,   123,   134,   113,   113
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
#line 275 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 281 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 282 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 284 "parser/evoparser.y"
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
#line 302 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 310 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 318 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 324 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 331 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 332 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 333 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 334 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 335 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 336 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 337 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 338 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 339 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 340 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 341 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 342 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 343 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 344 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 345 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 346 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 347 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 349 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 354 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 355 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 356 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 357 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 360 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 361 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 362 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 363 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 364 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 367 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 368 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 371 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_inListCount < MAX_IN_LIST) g_inListExprs[g_inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 372 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_inListCount; _i>0; _i--) g_inListExprs[_i]=g_inListExprs[_i-1]; g_inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_inListCount++; } ;}
    break;

  case 43:
#line 375 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 379 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 46:
#line 379 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 47:
#line 380 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 48:
#line 380 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 49:
#line 381 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 382 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 383 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 387 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 391 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 392 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 393 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 394 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 395 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 396 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 398 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 399 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 400 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 401 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 402 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 403 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 404 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 405 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 406 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 407 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 408 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 409 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 410 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 413 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 73:
#line 414 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 74:
#line 415 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 75:
#line 418 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 76:
#line 419 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 77:
#line 422 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 78:
#line 423 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 79:
#line 424 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 80:
#line 425 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 81:
#line 426 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 82:
#line 427 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 83:
#line 428 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 84:
#line 429 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 85:
#line 430 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 86:
#line 434 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_caseWhenCount, NULL); ;}
    break;

  case 87:
#line 436 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 88:
#line 438 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, NULL); ;}
    break;

  case 89:
#line 440 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 90:
#line 444 "parser/evoparser.y"
    {
        g_caseWhenCount = 0;
        g_caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 91:
#line 452 "parser/evoparser.y"
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
#line 462 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 93:
#line 463 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 94:
#line 466 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 95:
#line 467 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 96:
#line 470 "parser/evoparser.y"
    { emit("NOW"); (yyval.exprval) = expr_make_current_timestamp(); ;}
    break;

  case 97:
#line 471 "parser/evoparser.y"
    { emit("NOW"); (yyval.exprval) = expr_make_current_date(); ;}
    break;

  case 98:
#line 472 "parser/evoparser.y"
    { emit("NOW"); (yyval.exprval) = expr_make_current_time(); ;}
    break;

  case 99:
#line 477 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 100:
#line 486 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_selectDistinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 101:
#line 491 "parser/evoparser.y"
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
#line 502 "parser/evoparser.y"
    { emit("WHERE"); g_whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 105:
#line 504 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 106:
#line 507 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_groupByCount = 0;
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 107:
#line 514 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 108:
#line 522 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 109:
#line 523 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 110:
#line 524 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 111:
#line 527 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 112:
#line 528 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 114:
#line 532 "parser/evoparser.y"
    { emit("HAVING"); g_havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 119:
#line 544 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 120:
#line 551 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 121:
#line 552 "parser/evoparser.y"
    { emit("LIMIT 1"); g_limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 122:
#line 553 "parser/evoparser.y"
    { emit("LIMIT 2"); g_offsetExpr = (yyvsp[(2) - (4)].exprval); g_limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 123:
#line 554 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_limitExpr = (yyvsp[(2) - (4)].exprval); g_offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 125:
#line 558 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 126:
#line 561 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 127:
#line 562 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 128:
#line 565 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 129:
#line 566 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 130:
#line 567 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 131:
#line 568 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 132:
#line 569 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 133:
#line 570 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 134:
#line 571 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 135:
#line 572 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 136:
#line 573 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 137:
#line 576 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 138:
#line 577 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 139:
#line 579 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 140:
#line 587 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 141:
#line 592 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 142:
#line 593 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 143:
#line 594 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 144:
#line 597 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 145:
#line 598 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 148:
#line 607 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 149:
#line 612 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 150:
#line 613 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 151:
#line 614 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 154:
#line 623 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 155:
#line 625 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 156:
#line 627 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 157:
#line 629 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 158:
#line 631 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 159:
#line 634 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 160:
#line 635 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 161:
#line 636 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 162:
#line 639 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 163:
#line 640 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 164:
#line 643 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 165:
#line 644 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 166:
#line 647 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 167:
#line 648 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 168:
#line 649 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 171:
#line 656 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 172:
#line 657 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 173:
#line 662 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 174:
#line 664 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 175:
#line 666 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 177:
#line 670 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 178:
#line 671 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 179:
#line 674 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 180:
#line 675 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 181:
#line 678 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 182:
#line 683 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 183:
#line 691 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 184:
#line 698 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 185:
#line 699 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 186:
#line 700 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 187:
#line 701 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 188:
#line 705 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 189:
#line 708 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 190:
#line 709 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 193:
#line 714 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 194:
#line 719 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 195:
#line 726 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 196:
#line 735 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 197:
#line 742 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 198:
#line 749 "parser/evoparser.y"
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
#line 759 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 200:
#line 767 "parser/evoparser.y"
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
#line 779 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 202:
#line 784 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 203:
#line 792 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 204:
#line 799 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 205:
#line 808 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 206:
#line 815 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 207:
#line 824 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 208:
#line 831 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 209:
#line 839 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 210:
#line 846 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 212:
#line 854 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 213:
#line 857 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 214:
#line 858 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 215:
#line 859 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 216:
#line 860 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 217:
#line 861 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 221:
#line 868 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 222:
#line 872 "parser/evoparser.y"
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

  case 223:
#line 882 "parser/evoparser.y"
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

  case 224:
#line 894 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 225:
#line 895 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 226:
#line 895 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 227:
#line 898 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 228:
#line 899 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 229:
#line 900 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 230:
#line 901 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 231:
#line 905 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 232:
#line 908 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 233:
#line 909 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 234:
#line 910 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 235:
#line 911 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 236:
#line 917 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 237:
#line 923 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 238:
#line 928 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 239:
#line 933 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 240:
#line 938 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 241:
#line 945 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 242:
#line 950 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 243:
#line 951 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 244:
#line 952 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 245:
#line 957 "parser/evoparser.y"
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

  case 246:
#line 968 "parser/evoparser.y"
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

  case 247:
#line 979 "parser/evoparser.y"
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

  case 248:
#line 990 "parser/evoparser.y"
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

  case 249:
#line 1003 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 250:
#line 1007 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 251:
#line 1008 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 252:
#line 1011 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 253:
#line 1012 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 254:
#line 1016 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 255:
#line 1020 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 256:
#line 1021 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 257:
#line 1026 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 258:
#line 1034 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 259:
#line 1042 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 260:
#line 1047 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 261:
#line 1051 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 262:
#line 1056 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 263:
#line 1060 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 264:
#line 1063 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 265:
#line 1064 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 266:
#line 1067 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 267:
#line 1068 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 268:
#line 1071 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 269:
#line 1072 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 270:
#line 1073 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 271:
#line 1074 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 272:
#line 1075 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 273:
#line 1076 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 274:
#line 1078 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 275:
#line 1081 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 276:
#line 1082 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 277:
#line 1085 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 278:
#line 1086 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 279:
#line 1089 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 280:
#line 1090 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 282:
#line 1094 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 283:
#line 1095 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 284:
#line 1096 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 285:
#line 1097 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 286:
#line 1098 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 287:
#line 1099 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 288:
#line 1102 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 289:
#line 1104 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 290:
#line 1112 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 291:
#line 1113 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 293:
#line 1115 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 294:
#line 1116 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 295:
#line 1117 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 296:
#line 1118 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 297:
#line 1119 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 298:
#line 1120 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 299:
#line 1121 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 300:
#line 1122 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY %d", (yyvsp[(4) - (5)].intval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 301:
#line 1123 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 302:
#line 1124 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 303:
#line 1125 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 304:
#line 1126 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 305:
#line 1127 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 306:
#line 1128 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 307:
#line 1131 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 308:
#line 1132 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 309:
#line 1133 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 310:
#line 1136 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 311:
#line 1137 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 312:
#line 1140 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 313:
#line 1141 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 314:
#line 1142 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 316:
#line 1146 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 317:
#line 1147 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 318:
#line 1151 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 319:
#line 1152 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 320:
#line 1153 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 321:
#line 1154 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 322:
#line 1155 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 323:
#line 1156 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 324:
#line 1157 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 325:
#line 1158 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 326:
#line 1159 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 327:
#line 1160 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 328:
#line 1161 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 329:
#line 1162 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 330:
#line 1163 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 331:
#line 1164 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 332:
#line 1165 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 333:
#line 1166 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 334:
#line 1167 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 335:
#line 1168 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 336:
#line 1169 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 337:
#line 1170 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 338:
#line 1171 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 339:
#line 1172 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 340:
#line 1173 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 341:
#line 1174 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 342:
#line 1175 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 343:
#line 1176 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 344:
#line 1177 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 345:
#line 1178 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 346:
#line 1179 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 347:
#line 1180 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 348:
#line 1181 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 349:
#line 1184 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 350:
#line 1185 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 351:
#line 1189 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 352:
#line 1192 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 353:
#line 1193 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1194 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 355:
#line 1198 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 356:
#line 1201 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 357:
#line 1202 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 361:
#line 1206 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 362:
#line 1207 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4680 "parser/evoparser.tab.c"
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


#line 1210 "parser/evoparser.y"

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
