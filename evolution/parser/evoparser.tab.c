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
     UUID = 396,
     USING = 397,
     USE = 398,
     VARCHAR = 399,
     VALUES = 400,
     VARBINARY = 401,
     WHERE = 402,
     WHEN = 403,
     WITH = 404,
     YEAR = 405,
     YEAR_MONTH = 406,
     ZEROFILL = 407,
     EXISTS = 408,
     FSUBSTRING = 409,
     FTRIM = 410,
     FDATE_ADD = 411,
     FDATE_SUB = 412,
     FCOUNT = 413,
     FSUM = 414,
     FAVG = 415,
     FMIN = 416,
     FMAX = 417,
     FUPPER = 418,
     FLOWER = 419,
     FLENGTH = 420,
     FCONCAT = 421,
     FREPLACE = 422,
     FCOALESCE = 423,
     FGEN_RANDOM_UUID = 424,
     FGEN_RANDOM_UUID_V7 = 425,
     FSNOWFLAKE_ID = 426
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
#define UUID 396
#define USING 397
#define USE 398
#define VARCHAR 399
#define VALUES 400
#define VARBINARY 401
#define WHERE 402
#define WHEN 403
#define WITH 404
#define YEAR 405
#define YEAR_MONTH 406
#define ZEROFILL 407
#define EXISTS 408
#define FSUBSTRING 409
#define FTRIM 410
#define FDATE_ADD 411
#define FDATE_SUB 412
#define FCOUNT 413
#define FSUM 414
#define FAVG 415
#define FMIN 416
#define FMAX 417
#define FUPPER 418
#define FLOWER 419
#define FLENGTH 420
#define FCONCAT 421
#define FREPLACE 422
#define FCOALESCE 423
#define FGEN_RANDOM_UUID 424
#define FGEN_RANDOM_UUID_V7 425
#define FSNOWFLAKE_ID 426




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
#line 463 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 476 "parser/evoparser.tab.c"

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
#define YYLAST   2564

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  186
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  370
/* YYNRULES -- Number of states.  */
#define YYNSTATES  815

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   426

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     183,   184,    26,    24,   185,    25,   182,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   181,
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
     174,   175,   176,   177,   178,   179,   180
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
     763,   772,   783,   793,   805,   807,   811,   813,   817,   819,
     823,   825,   829,   831,   840,   841,   846,   847,   850,   853,
     856,   859,   861,   862,   863,   867,   869,   873,   877,   878,
     885,   887,   889,   893,   897,   905,   909,   913,   919,   925,
     927,   936,   944,   952,   954,   963,   964,   967,   970,   974,
     980,   986,   994,   996,  1001,  1006,  1007,  1010,  1012,  1015,
    1019,  1021,  1030,  1041,  1051,  1058,  1070,  1079,  1080,  1082,
    1084,  1088,  1094,  1099,  1104,  1110,  1116,  1121,  1133,  1135,
    1139,  1141,  1145,  1147,  1151,  1152,  1157,  1163,  1168,  1173,
    1179,  1184,  1185,  1190,  1191,  1195,  1198,  1202,  1206,  1210,
    1214,  1220,  1226,  1232,  1236,  1239,  1247,  1253,  1259,  1263,
    1266,  1270,  1273,  1277,  1283,  1284,  1288,  1294,  1295,  1297,
    1298,  1301,  1304,  1305,  1310,  1314,  1317,  1321,  1325,  1329,
    1333,  1337,  1341,  1345,  1349,  1353,  1357,  1359,  1361,  1363,
    1365,  1367,  1371,  1377,  1380,  1385,  1387,  1389,  1391,  1393,
    1397,  1401,  1405,  1409,  1415,  1421,  1423,  1425,  1427,  1431,
    1435,  1436,  1438,  1440,  1442,  1446,  1450,  1453,  1455,  1459,
    1463
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     187,     0,    -1,   196,   181,    -1,   196,   181,   187,    -1,
       3,    -1,     3,   182,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   113,    -1,   188,    24,
     188,    -1,   188,    25,   188,    -1,   188,    26,   188,    -1,
     188,    27,   188,    -1,   188,    28,   188,    -1,   188,    29,
     188,    -1,    25,   188,    -1,   183,   188,   184,    -1,   188,
      12,   188,    -1,   188,    10,   188,    -1,   188,    11,   188,
      -1,   188,    21,   188,    -1,   188,    22,   188,    -1,   188,
      30,   188,    -1,   188,    23,   188,    -1,    18,   188,    -1,
      17,   188,    -1,   188,    20,   188,    -1,   188,    20,   183,
     197,   184,    -1,   188,    20,    35,   183,   197,   184,    -1,
     188,    20,   129,   183,   197,   184,    -1,   188,    20,    34,
     183,   197,   184,    -1,   188,    15,   113,    -1,   188,    15,
      18,   113,    -1,   188,    15,     6,    -1,   188,    15,    18,
       6,    -1,     8,     9,   188,    -1,   188,    19,   188,    38,
     188,    -1,   188,    18,    19,   188,    38,   188,    -1,   188,
      -1,   188,   185,   189,    -1,    -1,   189,    -1,    -1,   188,
      16,   183,   191,   189,   184,    -1,    -1,   188,    18,    16,
     183,   192,   189,   184,    -1,   188,    16,   183,   197,   184,
      -1,   188,    18,    16,   183,   197,   184,    -1,   162,   183,
     197,   184,    -1,     3,   183,   190,   184,    -1,   167,   183,
      26,   184,    -1,   167,   183,   188,   184,    -1,   168,   183,
     188,   184,    -1,   169,   183,   188,   184,    -1,   170,   183,
     188,   184,    -1,   171,   183,   188,   184,    -1,   163,   183,
     188,   185,   188,   185,   188,   184,    -1,   163,   183,   188,
     185,   188,   184,    -1,   163,   183,   188,    82,   188,   184,
      -1,   163,   183,   188,    82,   188,    84,   188,   184,    -1,
     164,   183,   188,   184,    -1,   164,   183,   193,   188,    82,
     188,   184,    -1,   164,   183,   193,    82,   188,   184,    -1,
     172,   183,   188,   184,    -1,   173,   183,   188,   184,    -1,
     174,   183,   188,   184,    -1,   175,   183,   188,   185,   188,
     184,    -1,   176,   183,   188,   185,   188,   185,   188,   184,
      -1,   177,   183,   188,   185,   188,   184,    -1,   178,   183,
     184,    -1,   179,   183,   184,    -1,   180,   183,   184,    -1,
     105,    -1,   143,    -1,    44,    -1,   165,   183,   188,   185,
     194,   184,    -1,   166,   183,   188,   185,   194,   184,    -1,
      99,   188,    60,    -1,    99,   188,    61,    -1,    99,   188,
      65,    -1,    99,   188,    67,    -1,    99,   188,   160,    -1,
      99,   188,   159,    -1,    99,   188,    87,    -1,    99,   188,
      86,    -1,    99,   188,    89,    -1,    51,   188,   195,    76,
      -1,    51,   188,   195,    77,   188,    76,    -1,    51,   195,
      76,    -1,    51,   195,    77,   188,    76,    -1,   157,   188,
     142,   188,    -1,   195,   157,   188,   142,   188,    -1,   188,
      14,   188,    -1,   188,    18,    14,   188,    -1,   188,    13,
     188,    -1,   188,    18,    13,   188,    -1,    47,    -1,    54,
      -1,    55,    -1,   197,    -1,   135,   210,   211,    -1,   135,
     210,   211,    82,   214,   198,   199,   203,   204,   207,   208,
      -1,    -1,   156,   188,    -1,    -1,    85,    42,   200,   202,
      -1,   188,   201,    -1,   200,   185,   188,   201,    -1,    -1,
      37,    -1,    68,    -1,    -1,   158,   124,    -1,    -1,    90,
     188,    -1,    -1,   116,    42,   205,    -1,   206,    -1,   205,
     185,   206,    -1,     3,   201,    -1,    -1,   106,   188,    -1,
     106,   188,   185,   188,    -1,   106,   188,   107,   188,    -1,
      -1,    97,   209,    -1,     3,    -1,   209,   185,     3,    -1,
      -1,   210,    34,    -1,   210,    62,    -1,   210,    66,    -1,
     210,    88,    -1,   210,   132,    -1,   210,   127,    -1,   210,
     131,    -1,   210,   130,    -1,   212,    -1,   211,   185,   212,
      -1,    26,    -1,   188,   213,    -1,    39,     3,    -1,     3,
      -1,    -1,   215,    -1,   214,   185,   215,    -1,   216,    -1,
     218,    -1,     3,   213,   225,    -1,     3,   182,     3,   213,
     225,    -1,   228,   217,     3,    -1,   183,   214,   184,    -1,
      39,    -1,    -1,   215,   219,   100,   216,   223,    -1,   215,
     132,   216,    -1,   215,   132,   216,   115,   188,    -1,   215,
     221,   220,   100,   216,   224,    -1,   215,   112,   222,   100,
     216,    -1,    -1,    92,    -1,    50,    -1,    -1,   114,    -1,
     104,    -1,   125,    -1,   104,   220,    -1,   125,   220,    -1,
      -1,    -1,   224,    -1,   115,   188,    -1,   151,   183,   209,
     184,    -1,   152,   101,   226,   183,   227,   184,    -1,    93,
     101,   226,   183,   227,   184,    -1,    80,   101,   226,   183,
     227,   184,    -1,    -1,    84,   100,    -1,    -1,     3,    -1,
     227,   185,     3,    -1,   183,   197,   184,    -1,   229,    -1,
      63,   230,    82,     3,   198,   204,   207,    -1,   230,   103,
      -1,   230,   119,    -1,   230,    93,    -1,    -1,    63,   230,
     231,    82,   214,   198,    -1,     3,   232,    -1,   231,   185,
       3,   232,    -1,    -1,   182,    26,    -1,    63,   230,    82,
     231,   151,   214,   198,    -1,   233,    -1,    64,   141,     3,
      -1,   234,    -1,    48,    94,     3,   115,     3,   183,   235,
     184,    -1,    48,    94,    95,   162,     3,   115,     3,   183,
     235,   184,    -1,    48,   149,    94,     3,   115,     3,   183,
     235,   184,    -1,    48,   149,    94,    95,   162,     3,   115,
       3,   183,   235,   184,    -1,     3,    -1,   235,   185,     3,
      -1,   236,    -1,    64,    94,     3,    -1,   237,    -1,   144,
     141,     3,    -1,   238,    -1,   121,   141,     3,    -1,   239,
      -1,    96,   241,   242,     3,   243,   154,   245,   240,    -1,
      -1,   117,   101,   147,   248,    -1,    -1,   241,   103,    -1,
     241,    59,    -1,   241,    88,    -1,   241,    93,    -1,    97,
      -1,    -1,    -1,   183,   244,   184,    -1,     3,    -1,   244,
     185,     3,    -1,   183,   247,   184,    -1,    -1,   245,   185,
     246,   183,   247,   184,    -1,   188,    -1,    69,    -1,   247,
     185,   188,    -1,   247,   185,    69,    -1,    96,   241,   242,
       3,   134,   248,   240,    -1,     3,    20,   188,    -1,     3,
      20,    69,    -1,   248,   185,     3,    20,   188,    -1,   248,
     185,     3,    20,    69,    -1,   249,    -1,   126,   241,   242,
       3,   243,   154,   245,   240,    -1,   126,   241,   242,     3,
     134,   248,   240,    -1,   126,   241,   242,     3,   243,   197,
     240,    -1,   250,    -1,   147,   251,   214,   134,   252,   198,
     204,   207,    -1,    -1,   241,   103,    -1,   241,    93,    -1,
       3,    20,   188,    -1,     3,   182,     3,    20,   188,    -1,
     252,   185,     3,    20,   188,    -1,   252,   185,     3,   182,
       3,    20,   188,    -1,   253,    -1,    48,    58,   254,     3,
      -1,    48,   128,   254,     3,    -1,    -1,    95,   162,    -1,
     255,    -1,   152,     3,    -1,   152,    58,     3,    -1,   256,
      -1,    48,   257,   141,   254,     3,   183,   258,   184,    -1,
      48,   257,   141,   254,     3,   182,     3,   183,   258,   184,
      -1,    48,   257,   141,   254,     3,   183,   258,   184,   272,
      -1,    48,   257,   141,   254,     3,   272,    -1,    48,   257,
     141,   254,     3,   182,     3,   183,   258,   184,   272,    -1,
      48,   257,   141,   254,     3,   182,     3,   272,    -1,    -1,
     138,    -1,   259,    -1,   258,   185,   259,    -1,   118,   101,
     183,   260,   184,    -1,   101,   183,   209,   184,    -1,    94,
     183,   209,   184,    -1,    83,    94,   183,   209,   184,    -1,
      83,   101,   183,   209,   184,    -1,    52,   183,   188,   184,
      -1,    81,   101,   183,   261,   184,   122,     3,   183,   262,
     184,   263,    -1,     3,    -1,   260,   185,     3,    -1,     3,
      -1,   261,   185,     3,    -1,     3,    -1,   262,   185,     3,
      -1,    -1,   263,   115,    63,    49,    -1,   263,   115,    63,
     134,   113,    -1,   263,   115,    63,   123,    -1,   263,   115,
     147,    49,    -1,   263,   115,   147,   134,   113,    -1,   263,
     115,   147,   123,    -1,    -1,   264,     3,   270,   265,    -1,
      -1,   265,    18,   113,    -1,   265,   113,    -1,   265,    69,
       4,    -1,   265,    69,     5,    -1,   265,    69,     7,    -1,
     265,    69,     6,    -1,   265,    69,   178,   183,   184,    -1,
     265,    69,   179,   183,   184,    -1,   265,    69,   180,   183,
     184,    -1,   265,    69,    47,    -1,   265,    36,    -1,   265,
      36,   183,     5,   185,     5,   184,    -1,   265,    36,   183,
       5,   184,    -1,   265,   149,   183,   209,   184,    -1,   265,
     149,   101,    -1,   265,   149,    -1,   265,   118,   101,    -1,
     265,   101,    -1,   265,    53,     4,    -1,   265,    52,   183,
     188,   184,    -1,    -1,   183,     5,   184,    -1,   183,     5,
     185,     5,   184,    -1,    -1,    43,    -1,    -1,   268,   148,
      -1,   268,   161,    -1,    -1,   269,    56,   134,     4,    -1,
     269,    57,     4,    -1,    46,   266,    -1,   137,   266,   268,
      -1,   133,   266,   268,    -1,   111,   266,   268,    -1,    98,
     266,   268,    -1,    91,   266,   268,    -1,    45,   266,   268,
      -1,   120,   266,   268,    -1,    70,   266,   268,    -1,    79,
     266,   268,    -1,    72,   266,   268,    -1,    73,    -1,   146,
      -1,   140,    -1,    71,    -1,   159,    -1,    56,   266,   269,
      -1,   153,   183,     5,   184,   269,    -1,    43,   266,    -1,
     155,   183,     5,   184,    -1,   145,    -1,    40,    -1,   110,
      -1,   108,    -1,   136,   267,   269,    -1,   139,   267,   269,
      -1,   109,   267,   269,    -1,   102,   267,   269,    -1,    75,
     183,   271,   184,   269,    -1,   134,   183,   271,   184,   269,
      -1,    41,    -1,   150,    -1,     4,    -1,   271,   185,     4,
      -1,   273,   217,   197,    -1,    -1,    93,    -1,   126,    -1,
     274,    -1,   134,   128,     3,    -1,   134,   128,    69,    -1,
     134,   275,    -1,   276,    -1,   275,   185,   276,    -1,     8,
      20,   188,    -1,     8,     9,   188,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   272,   272,   273,   278,   285,   286,   287,   305,   313,
     321,   327,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     358,   359,   360,   361,   364,   365,   366,   367,   368,   371,
     372,   375,   376,   379,   380,   383,   383,   384,   384,   385,
     386,   387,   391,   395,   396,   397,   398,   399,   400,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   422,   429,   438,   439,   440,   443,   444,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   458,
     460,   462,   464,   468,   476,   487,   488,   491,   492,   495,
     503,   511,   522,   532,   533,   547,   548,   549,   550,   553,
     560,   568,   569,   570,   573,   574,   577,   578,   581,   582,
     585,   586,   589,   597,   598,   599,   600,   603,   604,   607,
     608,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     622,   623,   624,   632,   638,   639,   640,   643,   644,   647,
     648,   652,   658,   659,   660,   663,   664,   668,   670,   672,
     674,   676,   680,   681,   682,   685,   686,   689,   690,   693,
     694,   695,   698,   699,   702,   703,   707,   709,   711,   713,
     716,   717,   720,   721,   724,   728,   736,   744,   745,   746,
     747,   751,   754,   755,   758,   758,   760,   764,   771,   780,
     787,   794,   804,   812,   824,   829,   837,   844,   853,   860,
     869,   876,   884,   891,   899,   900,   903,   904,   905,   906,
     907,   910,   910,   913,   914,   917,   927,   940,   941,   941,
     944,   945,   946,   947,   950,   954,   955,   956,   957,   963,
     966,   972,   977,   983,   989,   996,   997,   998,  1002,  1013,
    1024,  1035,  1049,  1053,  1054,  1057,  1058,  1062,  1066,  1067,
    1071,  1078,  1088,  1092,  1097,  1101,  1106,  1110,  1111,  1114,
    1115,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1128,  1129,
    1132,  1133,  1136,  1137,  1140,  1141,  1142,  1143,  1144,  1145,
    1146,  1149,  1149,  1159,  1160,  1161,  1162,  1163,  1164,  1165,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,
    1176,  1177,  1178,  1179,  1182,  1183,  1184,  1187,  1188,  1191,
    1192,  1193,  1196,  1197,  1198,  1202,  1203,  1204,  1205,  1206,
    1207,  1208,  1209,  1210,  1211,  1212,  1213,  1214,  1215,  1216,
    1217,  1218,  1219,  1220,  1221,  1222,  1223,  1224,  1225,  1226,
    1227,  1228,  1229,  1230,  1231,  1232,  1233,  1236,  1237,  1240,
    1244,  1245,  1246,  1250,  1253,  1254,  1255,  1256,  1256,  1258,
    1259
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
  "UNIQUE", "UUID", "USING", "USE", "VARCHAR", "VALUES", "VARBINARY",
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
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   186,   187,   187,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   189,   189,   190,   190,   191,   188,   192,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   193,   193,   193,   188,   188,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   188,
     188,   188,   188,   195,   195,   188,   188,   188,   188,   188,
     188,   188,   196,   197,   197,   198,   198,   199,   199,   200,
     200,   201,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   207,   207,   207,   207,   208,   208,   209,
     209,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     211,   211,   211,   212,   213,   213,   213,   214,   214,   215,
     215,   216,   216,   216,   216,   217,   217,   218,   218,   218,
     218,   218,   219,   219,   219,   220,   220,   221,   221,   222,
     222,   222,   223,   223,   224,   224,   225,   225,   225,   225,
     226,   226,   227,   227,   228,   196,   229,   230,   230,   230,
     230,   229,   231,   231,   232,   232,   229,   196,   233,   196,
     234,   234,   234,   234,   235,   235,   196,   236,   196,   237,
     196,   238,   196,   239,   240,   240,   241,   241,   241,   241,
     241,   242,   242,   243,   243,   244,   244,   245,   246,   245,
     247,   247,   247,   247,   239,   248,   248,   248,   248,   196,
     249,   249,   249,   196,   250,   251,   251,   251,   252,   252,
     252,   252,   196,   253,   253,   254,   254,   196,   255,   255,
     196,   256,   256,   256,   256,   256,   256,   257,   257,   258,
     258,   259,   259,   259,   259,   259,   259,   259,   260,   260,
     261,   261,   262,   262,   263,   263,   263,   263,   263,   263,
     263,   264,   259,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   266,   266,   266,   267,   267,   268,
     268,   268,   269,   269,   269,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   271,   271,   272,
     273,   273,   273,   196,   274,   274,   274,   275,   275,   276,
     276
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
       0,     6,     2,     4,     0,     2,     7,     1,     3,     1,
       8,    10,     9,    11,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     8,     0,     4,     0,     2,     2,     2,
       2,     1,     0,     0,     3,     1,     3,     3,     0,     6,
       1,     1,     3,     3,     7,     3,     3,     5,     5,     1,
       8,     7,     7,     1,     8,     0,     2,     2,     3,     5,
       5,     7,     1,     4,     4,     0,     2,     1,     2,     3,
       1,     8,    10,     9,     6,    11,     8,     0,     1,     1,
       3,     5,     4,     4,     5,     5,     4,    11,     1,     3,
       1,     3,     1,     3,     0,     4,     5,     4,     4,     5,
       4,     0,     4,     0,     3,     2,     3,     3,     3,     3,
       5,     5,     5,     3,     2,     7,     5,     5,     3,     2,
       3,     2,     3,     5,     0,     3,     5,     0,     1,     0,
       2,     2,     0,     4,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     3,     5,     2,     4,     1,     1,     1,     1,     3,
       3,     3,     3,     5,     5,     1,     1,     1,     3,     3,
       0,     1,     1,     1,     3,     3,     2,     1,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   267,   190,     0,   216,     0,   216,     0,   131,     0,
     216,     0,     0,     0,   102,   185,   197,   199,   206,   208,
     210,   212,   239,   243,   252,   257,   260,   363,   255,     0,
     255,   268,     0,     0,     0,     0,     0,   222,     0,   222,
       0,     0,   366,   367,     0,     0,     0,     0,   258,     0,
       1,     2,     0,     0,     0,     0,     0,     0,   255,   194,
       0,   189,   187,   188,     0,   207,   198,   218,   219,   220,
     221,   217,     0,   211,     0,     0,     0,   364,   365,     0,
       4,     7,     8,    10,     9,     6,     0,     0,     0,   142,
     132,    99,     0,   100,   101,   133,   134,   135,    11,   137,
     139,   138,   136,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   146,   103,   140,   209,   220,   217,   146,
       0,     0,   147,   149,   150,   156,   259,     3,   256,   253,
       0,     0,   254,     0,     0,     0,     0,   192,   105,     0,
       0,     0,   223,   223,   370,   369,   368,     0,    43,     0,
      28,    27,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,   179,     0,     0,     0,     0,   164,   163,   167,
     171,   168,     0,     0,   165,   155,     0,     0,     0,     0,
       0,   360,   195,     0,   118,     0,   105,   194,     0,     0,
       0,     0,     0,     5,    41,    44,     0,    38,     0,     0,
      91,     0,     0,     0,     0,    77,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    19,    21,    22,
      20,    97,    95,    36,     0,    34,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    23,    24,    26,
      12,    13,    14,    15,    16,    17,    25,   144,   105,   141,
     146,     0,     0,     0,   151,   184,   154,     0,   105,   148,
     165,   165,     0,   158,     0,   166,     0,   153,     0,     0,
       0,     0,   361,   362,     0,   291,   264,   156,   106,     0,
     123,   105,   191,   193,     0,   214,   225,     0,     0,   214,
       0,   214,     0,    52,     0,    89,     0,     0,     0,    51,
       0,     0,    63,     0,     0,     0,     0,    53,    54,    55,
      56,    57,    58,    66,    67,    68,     0,     0,     0,    37,
      35,     0,     0,    98,    96,    47,     0,     0,     0,     0,
       0,     0,   107,   179,   181,   181,   181,     0,     0,     0,
     118,   169,   170,     0,     0,   172,     0,   204,     0,     0,
       0,     0,   360,     0,     0,     0,     0,     0,     0,     0,
     269,     0,     0,     0,     0,   186,   196,     0,     0,     0,
     234,   224,     0,     0,   214,   241,   214,   242,    42,    93,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,    39,     0,
       0,     0,    30,     0,   116,   152,     0,     0,     0,     0,
     248,     0,     0,   123,   161,   159,     0,     0,   157,   173,
       0,   200,     0,     0,     0,     0,   291,   266,     0,     0,
       0,     0,     0,     0,     0,   360,   291,     0,   359,   111,
     119,   120,   124,   236,   235,     0,     0,   226,   231,   230,
       0,   228,   213,   240,    90,    94,     0,    61,    60,     0,
      65,     0,     0,    78,    79,    69,     0,    71,    46,     0,
      50,    40,    33,    31,    32,     0,     0,   118,   180,     0,
       0,     0,     0,     0,     0,   244,   174,     0,   160,   205,
       0,   202,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,   263,   270,   346,   355,   314,   314,   314,   314,
     314,   339,   314,   336,     0,   314,   314,   314,   317,   348,
     317,   347,   314,   314,   314,     0,   317,   314,   317,   338,
     345,   337,   356,     0,     0,   340,   293,   112,   113,   122,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
      64,    80,    81,    82,    83,    87,    86,    88,    85,    84,
       0,    48,   111,   114,   117,   123,   182,     0,     0,     0,
     249,   250,     0,     0,   201,     0,   360,   276,   280,     0,
       0,     0,   273,     0,   272,   278,     0,     0,   343,   319,
     325,   322,   319,   319,     0,   319,   319,   319,   318,   322,
     322,   319,   319,   319,     0,   322,   319,   322,     0,     0,
     292,   121,   126,   125,   215,   238,   237,   233,   232,     0,
      62,    59,    70,   109,     0,     0,   108,   127,   178,     0,
     177,   176,     0,   175,   203,   265,     0,     0,   274,   275,
     130,   271,     0,     0,   331,   341,   333,   335,   357,     0,
     334,   330,   329,   352,   351,   328,   332,   327,     0,   349,
     326,   350,     0,     0,     0,   304,     0,     0,     0,   311,
     295,     0,   309,     0,   115,   111,     0,   104,   183,   251,
       0,   281,   279,   315,     0,   320,   321,     0,     0,   322,
       0,   322,   322,   344,   294,     0,     0,   312,   296,   297,
     299,   298,   303,     0,     0,     0,   310,   308,     0,   229,
     110,   128,     0,     0,     0,   324,   353,   358,   354,   342,
       0,     0,     0,     0,     0,     0,     0,   316,   323,   306,
       0,   313,   300,   301,   302,   307,   282,     0,     0,   284,
       0,   305,   277,   283,     0,     0,     0,   285,   287,     0,
     288,   290,     0,   286,   289
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,   244,   245,   246,   381,   455,   259,   448,   165,
      13,    14,   234,   464,   623,   599,   686,   537,   340,   500,
     501,   425,   737,   559,    44,   124,   125,   208,   131,   132,
     133,   226,   134,   223,   326,   224,   322,   478,   479,   314,
     467,   627,   135,    15,    34,    64,   147,    16,    17,   408,
      18,    19,    20,    21,   430,    37,    72,   240,   347,   434,
     607,   510,   345,    22,    23,    47,   318,    24,    53,    25,
      26,    33,   419,   420,   646,   639,   797,   802,   421,   670,
     648,   659,   704,   705,   596,   709,   336,   337,    27,    42,
      43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -598
static const yytype_int16 yypact[] =
{
     202,   201,  -598,   -64,  -598,   -87,  -598,    20,  -598,   -78,
       7,    47,   114,    -2,  -598,  -598,  -598,  -598,  -598,  -598,
    -598,  -598,  -598,  -598,  -598,  -598,  -598,  -598,    88,    13,
      88,  -598,   105,    61,   211,   257,   296,   276,   306,   276,
      53,   108,   139,  -598,   401,   345,   263,     8,  -598,   352,
    -598,   202,    51,   354,   253,   199,   356,    72,    88,   195,
     371,  -598,  -598,  -598,   -68,  -598,  -598,  -598,  -598,  -598,
    -598,  -598,   382,  -598,   398,  1373,  1373,  -598,  -598,   404,
      21,  -598,  -598,  -598,  -598,   407,  1373,  1373,  1373,  -598,
    -598,  -598,   680,  -598,  -598,  -598,  -598,  -598,  -598,  -598,
    -598,  -598,  -598,   241,   245,   266,   268,   283,   291,   298,
     307,   314,   332,   342,   343,   344,   346,   347,   361,   362,
     365,   366,  1373,  2470,   -63,  -598,  -598,     9,    10,    12,
       4,   -73,   325,  -598,  -598,   397,  -598,  -598,  -598,  -598,
     457,   544,  -598,   436,   390,   552,   530,  -598,   162,  -113,
       8,   556,    64,    66,  2534,  2534,  -598,   558,  1373,  1373,
     630,   630,  -598,  1373,  2167,   -37,   447,  1373,   499,  1373,
    1373,   763,  1373,  1373,  1373,  1373,  1373,  1373,  1373,  1373,
    1373,  1373,   399,   410,   414,  1595,  -598,  1373,  1373,  1373,
    1373,  1373,    28,   408,   292,  1373,   582,  1373,  1373,  1373,
    1373,  1373,  1373,  1373,  1373,  1373,  1373,   602,  -598,     8,
    1373,   605,   168,   425,   187,   607,     8,  -598,  -598,  -598,
      76,  -598,     8,   511,   500,  -598,   610,   432,   515,   628,
     629,    80,  -598,  1373,   518,     8,  -115,   195,   635,   636,
     486,   635,   -86,  -598,   878,  -598,   459,  2534,  2188,    99,
    -598,  1373,  1373,   460,   210,  -598,  -598,  -598,  1645,   862,
     993,  1265,   461,  1666,  1687,  1715,  1743,  1770,  1791,  1812,
    1833,  1419,  1446,  1469,  -598,  -598,  -598,  -598,  1621,   958,
     806,  1046,  1046,  -598,    27,  -598,   447,  1373,  1373,   463,
    1373,  2492,   464,   497,   498,   944,   692,   512,   713,   748,
     364,   364,   659,   659,   659,   659,  -598,  -598,  -115,  -598,
     178,   589,   590,   591,  -598,  -598,  -598,   -14,   185,   325,
     500,   500,   593,   579,     8,  -598,   596,  -598,   696,   697,
     519,   586,  -598,  -598,   700,   244,  -598,   397,  2534,   662,
     600,  -115,  -598,  -598,   687,   -82,  -598,   197,   525,   -82,
     525,   592,  1373,  -598,  1373,  -598,  1373,  2377,  2236,  -598,
    1373,  1373,  -598,  1373,  2266,   611,   611,  -598,  -598,  -598,
    -598,  -598,  -598,  -598,  -598,  -598,  1373,  1373,  1373,  -598,
    -598,  1373,   539,  1046,  1046,   447,  2513,  1373,   447,   447,
     447,   540,   640,   168,   642,   642,   642,  1373,   725,   726,
     518,  -598,  -598,     8,  1373,   143,     8,  -598,   203,   547,
     696,   729,   -19,   550,   663,   -34,   580,   599,   678,   212,
    -598,   780,   447,   781,  1373,  -598,  -598,  1078,   684,   783,
    -598,  -598,   784,  1146,    -7,  -598,    -7,  -598,  -598,  2534,
    2398,  -598,  1373,  1568,    69,  1854,  1373,  1373,   606,   608,
    1882,  1547,  1910,   612,  -598,  1373,   613,  1373,   598,   614,
     615,   616,  -598,   749,   704,  -598,   695,   618,   619,   620,
    2534,   785,   -12,   600,  -598,  2534,  1373,   621,  -598,  -598,
     143,  -598,   803,   696,   215,   624,   244,  -598,  1373,   625,
     626,   632,   808,   808,   633,   116,   244,  2227,  -598,   284,
     627,  -598,   260,  -598,  2534,   666,   818,  -598,  -598,  2534,
     226,  -598,  -598,  -598,  -598,  2534,  1373,  -598,  -598,  1373,
    -598,  1937,  2085,  -598,  -598,  -598,  1373,  -598,  -598,   639,
    -598,   598,  -598,  -598,  -598,  1373,  1373,   518,  -598,   836,
     836,   836,  1373,  1373,   837,  -598,  2534,   808,  -598,  -598,
     230,  -598,   696,   236,  1958,   838,   808,   808,  -598,   238,
     246,   858,  -598,  -598,  -598,  -598,   679,   679,   679,   679,
     679,  -598,   679,  -598,   681,   679,   679,   679,   828,  -598,
     828,  -598,   679,   679,   679,   689,   828,   679,   828,  -598,
    -598,  -598,  -598,   690,   691,  -598,  -598,  -598,  -598,  -598,
     781,  1373,  1373,   635,  1169,  -598,  1350,   694,  1979,  2000,
    -598,  -598,  -598,  -598,  -598,  -598,  -598,  -598,  -598,  -598,
    2021,  -598,  2419,   173,  2534,   600,  -598,   249,   254,   256,
    2534,  2534,   855,   258,  -598,   262,   126,  -598,  -598,   269,
     274,   277,  -598,   875,  -598,  -598,   280,   876,  -598,  -598,
    -598,  -598,  -598,  -598,   879,  -598,  -598,  -598,  -598,  -598,
    -598,  -598,  -598,  -598,   879,  -598,  -598,  -598,   877,   880,
       0,  -598,  2534,  2534,   699,  -598,  2534,  -598,  2534,  1146,
    -598,  -598,  -598,  -598,   762,  1373,  -598,   798,  -598,   907,
    -598,  -598,  1373,  -598,  -598,  -598,   789,   909,  -598,  -598,
    -598,  -598,   911,   295,   -90,   430,   -90,   -90,  -598,   309,
     -90,   -90,   -90,   430,   430,   -90,   -90,   -90,   311,   430,
     -90,   430,   731,   734,   807,   736,   738,   918,    17,  -598,
    -598,   822,   -74,   316,  -598,  2419,   808,  -598,  -598,  2534,
     921,  -598,  -598,  -598,   940,  -598,  -598,   819,   950,  -598,
     951,  -598,  -598,  -598,  -598,   952,  1373,  -598,  -598,  -598,
    -598,  -598,  -598,   773,   775,   776,  -598,  -598,   808,  -598,
    -598,   778,   777,   782,   960,  -598,   430,  -598,   430,   430,
     324,  2049,   805,   809,   810,   326,   962,  -598,  -598,  -598,
     963,  -598,  -598,  -598,  -598,  -598,  -598,   328,   812,  -598,
     964,  -598,   882,  -598,   -43,   192,   242,  -598,  -598,   887,
    -598,  -598,   888,  -598,  -598
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -598,   939,   -44,  -305,  -598,  -598,  -598,  -598,   644,   883,
    -598,  -121,  -136,  -598,  -598,  -597,  -598,  -598,  -374,  -598,
     392,  -456,  -598,  -491,  -598,  -598,   792,  -124,   -93,   827,
    -218,   707,  -598,  -598,   198,  -598,  -598,  -598,   566,   655,
     125,   -18,  -598,  -598,  -598,   989,   813,  -598,  -598,  -381,
    -598,  -598,  -598,  -598,   -94,    49,  1012,   899,  -598,   703,
    -598,   375,  -240,  -598,  -598,  -598,  -598,  -598,   154,  -598,
    -598,  -598,   569,   560,  -598,  -598,  -598,  -598,  -598,  -598,
     -99,  -202,   -60,  -449,  -598,   394,  -409,  -598,  -598,  -598,
     998
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -263
static const yytype_int16 yytable[] =
{
     123,   349,   560,   487,   323,   212,   397,   129,   543,   213,
    -245,   129,  -247,  -246,   150,   186,    54,   545,   724,   209,
     805,   758,   759,   760,   761,   683,   473,   767,    40,   484,
      35,   154,   155,   379,   283,   428,   725,   214,   235,   250,
     251,   233,   160,   161,   162,   253,   284,   438,   164,     8,
      48,   207,   726,   727,    38,    39,   633,   236,   745,    46,
     490,   215,    75,    45,   762,   640,   641,   491,   350,   728,
     216,   746,   151,    76,   332,   143,   453,    36,   185,   187,
     188,   189,   190,   191,   192,   193,   562,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     342,   729,   550,   429,   806,    49,   405,   333,    55,   768,
     428,    77,   216,   730,    50,   247,   308,   151,   731,   248,
     252,   351,   210,   254,   258,   260,   261,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   770,     8,
     380,   285,   341,   278,   279,   280,   281,   282,    41,   732,
     529,   291,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   625,   486,   382,   123,   144,   398,   687,
     544,   635,   392,   332,   391,   355,   356,    78,   511,    51,
     320,   186,   400,    52,    56,   474,   393,   130,   480,   338,
    -245,   130,  -247,  -246,   211,   763,   764,   765,   238,    57,
     241,   321,    58,   157,   158,   426,   333,   357,   358,   332,
     713,   714,   145,   138,    59,   364,   719,   207,   721,   332,
     187,   188,   189,   190,   191,   192,   193,   695,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   807,   333,   383,   384,   771,   386,   239,   311,   239,
       1,   185,   333,   518,   519,   435,   252,   437,   476,    28,
      65,   312,   334,   335,   456,     2,     3,   459,   460,   461,
     187,   188,   189,   190,   191,   192,   193,   785,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   810,   360,    60,   477,    29,   413,  -261,     4,    66,
     776,   498,   778,   779,    61,   287,   288,  -262,   289,    73,
     439,   290,   440,  -194,    62,   808,   443,   444,   233,   445,
     313,   597,    67,     5,    79,   414,   809,   415,     6,    30,
      63,   684,   450,   451,   452,    67,     7,     8,   416,    31,
     512,   233,   513,   458,   146,   417,     9,  -194,   126,    10,
      32,    68,   598,   470,    11,   136,   127,   139,   685,   142,
     475,   141,   418,   674,    68,   811,   128,   601,   140,    69,
     399,   316,   216,    70,   148,   217,   812,   146,   660,    71,
     502,   431,   432,   504,   665,   152,   667,   481,   482,   509,
     202,   203,   204,   205,   206,   361,   495,   496,   515,   551,
     482,   153,   521,   522,    80,    81,    82,    83,    84,    85,
     605,   606,    40,   531,   634,   482,   159,   218,    86,    87,
     636,   496,   642,   643,   166,  -162,    88,    89,   167,   219,
     644,   643,   546,   688,   689,    90,   225,   220,   690,   689,
     691,   689,   693,   643,   554,   602,   694,   482,    91,   168,
     221,   169,    92,   696,   697,    93,    94,   222,   698,   643,
     227,   699,   643,    95,   701,   702,   170,    96,   649,   650,
     651,   652,   608,   653,   171,   609,   655,   656,   657,   743,
     744,   172,   620,   661,   662,   663,   747,   748,   666,    97,
     173,   622,   624,   749,   750,   751,   750,   174,   630,   631,
     769,   606,    80,    81,    82,    83,    84,    85,   789,   790,
     795,   643,   799,   800,    98,   175,    86,    87,   401,   402,
     468,   469,   628,   629,    88,   176,   177,   178,    99,   179,
     180,   100,   101,   102,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   255,   181,   182,    91,   228,   183,   184,
      92,   229,   230,    93,    94,   231,   232,   672,   673,   237,
     676,   243,   678,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,     8,   274,   122,    80,    81,    82,    83,    84,
      85,   286,   706,   707,   275,   710,   711,   712,   276,    86,
      87,   715,   716,   717,   256,   307,   720,    88,   310,   315,
     317,   324,    98,   327,   325,   328,   292,   293,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,    91,
     329,   330,   331,    92,   339,   509,    93,    94,   344,   346,
     348,   735,   257,   353,   359,   367,   385,   388,   739,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     389,   390,   122,    80,    81,    82,    83,    84,    85,   206,
     394,   395,   396,   403,   404,    98,   406,    86,    87,   407,
     409,   411,   410,   412,   423,    88,   424,   427,   433,   428,
     447,   294,   781,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   454,   462,   463,   466,    91,   471,   472,
     483,    92,   485,   488,    93,    94,   199,   200,   201,   202,
     203,   204,   205,   206,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   492,   489,   295,    80,    81,    82,    83,
      84,    85,   200,   201,   202,   203,   204,   205,   206,   494,
      86,    87,   493,   497,   499,   505,   506,   507,    88,   262,
     523,   535,   524,    98,   536,   538,   528,   530,   532,   533,
     534,   539,   540,   541,   547,   542,   549,   552,   555,   556,
      91,   558,   600,   603,    92,   557,   561,    93,    94,   190,
     191,   192,   193,   621,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   163,   604,   626,
     632,   638,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   645,   647,   122,   654,    80,    81,    82,    83,    84,
      85,   658,   664,   668,   669,   692,    98,   679,   700,    86,
      87,   703,   722,   708,   429,   723,   734,    88,   187,   188,
     189,   190,   191,   192,   193,   736,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,    91,
     738,   740,   741,    92,   742,   752,    93,    94,   753,   755,
     754,   756,   757,   766,   772,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   363,   773,   122,    80,    81,    82,
      83,    84,    85,   774,   775,   777,   782,   780,   783,   784,
     786,    86,    87,   643,   788,   796,   787,   803,   798,    88,
     189,   190,   191,   192,   193,    98,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   792,
     137,    91,   671,   793,   794,    92,   801,   804,    93,    94,
     813,   814,   309,   187,   188,   189,   190,   191,   192,   193,
     449,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   319,   422,   122,   548,   249,   465,   149,
     343,    74,   242,   436,   733,   553,   563,    98,   718,  -263,
    -263,  -263,  -263,   352,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   156,     0,     8,
       0,    80,    81,    82,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,     0,     0,     0,
       0,     0,     0,    88,     0,     0,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    91,     0,   122,     0,    92,
       0,     0,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   503,     0,    80,
      81,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,     0,     0,     0,     0,     0,
       0,    88,    80,    81,    82,    83,    84,    85,   365,     0,
       0,     0,     0,     0,     0,     0,    86,    87,     0,     0,
       0,    98,     0,    91,    88,     0,     0,    92,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   508,    91,     0,     0,     0,
      92,     0,     0,    93,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   675,     0,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    98,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,    98,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     0,     0,   122,
       0,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
       0,     0,   122,    80,    81,    82,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     0,     0,     0,    88,    80,    81,    82,    83,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,     0,     0,     0,     0,     0,    91,    88,     0,
       0,    92,     0,     0,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   677,
      91,     0,     0,     0,    92,     0,     0,    93,    94,   187,
     188,   189,   190,   191,   192,   193,     0,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     366,     0,     0,     0,     0,     0,   187,   188,   189,   190,
     191,   192,   193,    98,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,     0,     0,   187,
     188,   189,   190,   191,   192,   193,    98,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,     0,     0,   122,     0,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,     0,     0,   122,   187,   188,   189,
     190,   191,   192,   193,     0,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   187,   188,
     189,   190,   191,   192,   193,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,     0,
       0,     0,     0,     0,   376,   187,   188,   189,   190,   191,
     192,   193,     0,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,   377,   188,   189,   190,   191,   192,   193,     0,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   516,     0,   378,   187,   188,   189,   190,   191,
     192,   193,     0,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   187,   188,   189,   190,
     191,   192,   193,     0,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   187,   188,   189,
     190,   191,   192,   193,     0,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   526,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,   517,   187,   188,   189,   190,   191,   192,   193,
       0,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,     0,     0,     0,     0,     0,   277,
     187,   188,   189,   190,   191,   192,   193,     0,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   187,   188,   189,   190,   191,   192,   193,     0,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   187,   188,   189,   190,   191,   192,   193,   362,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   187,   188,   189,   190,   191,   192,   193,
     368,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   187,   188,   189,   190,   191,   192,
     193,   369,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,     0,     0,     0,     0,     0,
       0,     0,   187,   188,   189,   190,   191,   192,   193,   370,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,     0,     0,     0,     0,     0,     0,     0,
     187,   188,   189,   190,   191,   192,   193,   371,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,     0,     0,     0,     0,     0,     0,   187,   188,   189,
     190,   191,   192,   193,   372,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   187,   188,
     189,   190,   191,   192,   193,   373,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   187,
     188,   189,   190,   191,   192,   193,   374,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     187,   188,   189,   190,   191,   192,   193,   375,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   187,   188,   189,   190,   191,   192,   193,   520,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,     0,     0,     0,     0,     0,     0,     0,   187,
     188,   189,   190,   191,   192,   193,   525,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   527,   187,   188,   189,   190,   191,
     192,   193,     0,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,   610,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   637,     0,     0,   611,   612,     0,     0,     0,
     613,     0,   614,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   680,     0,     0,     0,     0,     0,     0,
       0,   615,   616,     0,   617,     0,     0,   187,   188,   189,
     190,   191,   192,   193,   681,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   187,   188,
     189,   190,   191,   192,   193,   682,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   791,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   618,   619,   187,   188,   189,   190,
     191,   192,   193,     0,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   564,   565,     0,
     566,     0,   567,   568,     0,     0,   187,   188,   189,   190,
     191,   192,   193,   569,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   570,   571,   572,
     573,     0,   574,     0,     0,     0,   575,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   576,     0,
       0,     0,     0,     0,   163,   577,     0,     0,     0,   578,
     354,     0,     0,     0,     0,   579,   580,   581,   582,     0,
       0,     0,     0,     0,     0,     0,     0,   583,   446,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     584,   585,     0,   586,   587,     0,   588,   589,     0,     0,
       0,     0,   590,   591,     0,     0,     0,   592,   442,     0,
     593,     0,   594,     0,     0,     0,   595,   187,   188,   189,
     190,   191,   192,   193,     0,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   187,   188,
     189,   190,   191,   192,   193,     0,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   187,
     188,   189,   190,   191,   192,   193,     0,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       0,     0,     0,   441,     0,     0,   597,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   186,   514,     0,     0,     0,     0,     0,
     187,   188,   189,   190,   191,   192,   193,   598,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,     0,   187,   188,   189,   190,   191,   192,   193,   207,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   187,   188,   189,   190,   191,   192,   193,
     387,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   187,   188,   189,   190,   191,   192,
     193,   457,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206
};

static const yytype_int16 yycheck[] =
{
      44,   241,   493,   412,   222,   129,    20,     3,    20,   130,
       3,     3,     3,     3,    82,     3,     3,   473,    18,    82,
      63,     4,     5,     6,     7,   622,   400,   101,     8,   410,
      94,    75,    76,     6,     6,   117,    36,   130,   151,    76,
      77,   156,    86,    87,    88,   166,    18,   352,    92,   135,
       3,    39,    52,    53,   141,     6,   547,   150,   148,    10,
      94,   134,     9,   141,    47,   556,   557,   101,   154,    69,
     185,   161,   185,    20,    93,     3,   381,   141,   122,    10,
      11,    12,    13,    14,    15,    16,   495,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     236,   101,   483,   185,   147,    58,   324,   126,    95,   183,
     117,     3,   185,   113,     0,   159,   209,   185,   118,   163,
     157,   242,   185,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   735,   135,
     113,   113,   235,   187,   188,   189,   190,   191,   128,   149,
     455,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   537,   183,   286,   210,    95,   182,   625,
     182,   552,   308,    93,   295,    76,    77,    69,   185,   181,
     104,     3,   318,    95,    30,   403,   310,   183,   406,   233,
     183,   183,   183,   183,   182,   178,   179,   180,   134,    94,
     134,   125,   141,   182,   183,   341,   126,   251,   252,    93,
     659,   660,    58,   162,     3,   259,   665,    39,   667,    93,
      10,    11,    12,    13,    14,    15,    16,   636,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    49,   126,   287,   288,   736,   290,   183,    80,   183,
      48,   295,   126,   184,   185,   349,   157,   351,   115,    58,
       3,    93,   182,   183,   385,    63,    64,   388,   389,   390,
      10,    11,    12,    13,    14,    15,    16,   768,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    49,    82,    82,   151,    94,    52,   181,    96,     3,
     749,   422,   751,   752,    93,    13,    14,   181,    16,     3,
     354,    19,   356,   151,   103,   123,   360,   361,   156,   363,
     152,    37,    59,   121,   185,    81,   134,    83,   126,   128,
     119,   158,   376,   377,   378,    59,   134,   135,    94,   138,
     434,   156,   436,   387,   182,   101,   144,   185,     3,   147,
     149,    88,    68,   397,   152,     3,    93,     3,   185,     3,
     404,   162,   118,   603,    88,   123,   103,   107,   115,    93,
     185,   184,   185,    97,     3,    50,   134,   182,   580,   103,
     424,   184,   185,   427,   586,     3,   588,   184,   185,   433,
      26,    27,    28,    29,    30,   185,   184,   185,   442,   184,
     185,     3,   446,   447,     3,     4,     5,     6,     7,     8,
     184,   185,     8,   457,   184,   185,     9,    92,    17,    18,
     184,   185,   184,   185,   183,   100,    25,    26,   183,   104,
     184,   185,   476,   184,   185,    34,    39,   112,   184,   185,
     184,   185,   184,   185,   488,   185,   184,   185,    47,   183,
     125,   183,    51,   184,   185,    54,    55,   132,   184,   185,
       3,   184,   185,    62,   184,   185,   183,    66,   567,   568,
     569,   570,   516,   572,   183,   519,   575,   576,   577,   184,
     185,   183,   526,   582,   583,   584,    56,    57,   587,    88,
     183,   535,   536,   184,   185,   184,   185,   183,   542,   543,
     184,   185,     3,     4,     5,     6,     7,     8,   184,   185,
     184,   185,   184,   185,   113,   183,    17,    18,   320,   321,
     395,   396,   540,   541,    25,   183,   183,   183,   127,   183,
     183,   130,   131,   132,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    44,   183,   183,    47,     3,   183,   183,
      51,   115,   162,    54,    55,     3,    26,   601,   602,     3,
     604,     3,   606,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   135,   184,   183,     3,     4,     5,     6,     7,
       8,   183,   652,   653,   184,   655,   656,   657,   184,    17,
      18,   661,   662,   663,   105,     3,   666,    25,     3,   184,
       3,   100,   113,     3,   114,   183,    34,    35,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    47,
     115,     3,     3,    51,   116,   679,    54,    55,     3,     3,
     154,   685,   143,   184,   184,   184,   183,   183,   692,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     183,   183,   183,     3,     4,     5,     6,     7,     8,    30,
     101,   101,   101,   100,   115,   113,   100,    17,    18,     3,
       3,   115,   183,     3,    42,    25,   106,    20,   183,   117,
      99,   129,   756,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   184,   184,    85,    84,    47,     3,     3,
     183,    51,     3,   183,    54,    55,    23,    24,    25,    26,
      27,    28,    29,    30,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   183,   101,   183,     3,     4,     5,     6,
       7,     8,    24,    25,    26,    27,    28,    29,    30,   101,
      17,    18,   183,     3,     3,   101,     3,     3,    25,    26,
     184,    42,   184,   113,    90,   100,   184,   184,   184,   184,
     184,   183,   183,   183,   183,    20,     3,   183,   183,   183,
      47,     3,   185,   147,    51,   183,   183,    54,    55,    13,
      14,    15,    16,   184,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   157,    20,     3,
       3,     3,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     3,   183,   183,   183,     3,     4,     5,     6,     7,
       8,    43,   183,   183,   183,    20,   113,   183,     3,    17,
      18,     5,     5,     4,   185,     5,   124,    25,    10,    11,
      12,    13,    14,    15,    16,    97,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    47,
       3,   122,     3,    51,     3,   184,    54,    55,   184,   183,
     113,   183,     4,   101,     3,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,    82,     5,   183,     3,     4,     5,
       6,     7,     8,   134,     4,     4,   183,     5,   183,   183,
     183,    17,    18,   185,     4,     3,   184,     3,     5,    25,
      12,    13,    14,    15,    16,   113,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   184,
      51,    47,   600,   184,   184,    51,   184,   115,    54,    55,
     113,   113,   210,    10,    11,    12,    13,    14,    15,    16,
     366,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   216,   337,   183,   480,   164,   393,    60,
     237,    39,   153,   350,   679,   486,   496,   113,   664,    13,
      14,    15,    16,   185,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    79,    -1,   135,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,    47,    -1,   183,    -1,    51,
      -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,     3,     4,     5,     6,     7,     8,   185,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,   113,    -1,    47,    25,    -1,    -1,    51,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    47,    -1,    -1,    -1,
      51,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   113,
      -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   113,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,    -1,    -1,   183,
      -1,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
      -1,    -1,   183,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    25,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    47,    25,    -1,
      -1,    51,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      47,    -1,    -1,    -1,    51,    -1,    -1,    54,    55,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     185,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   113,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   113,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,    -1,    -1,   183,    -1,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,    -1,    -1,   183,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,   185,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,   185,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    84,    -1,   185,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   185,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,   184,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,   184,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   184,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     184,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   184,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   184,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   184,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   184,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   184,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   184,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   184,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   184,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   184,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   184,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   184,    -1,    -1,    60,    61,    -1,    -1,    -1,
      65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   184,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   184,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   160,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    40,    41,    -1,
      43,    -1,    45,    46,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    56,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,   157,    98,    -1,    -1,    -1,   102,
     142,    -1,    -1,    -1,    -1,   108,   109,   110,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   134,    -1,   136,   137,    -1,   139,   140,    -1,    -1,
      -1,    -1,   145,   146,    -1,    -1,    -1,   150,   142,    -1,
     153,    -1,   155,    -1,    -1,    -1,   159,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    76,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    76,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    68,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    10,    11,    12,    13,    14,    15,    16,    39,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      38,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    38,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    48,    63,    64,    96,   121,   126,   134,   135,   144,
     147,   152,   187,   196,   197,   229,   233,   234,   236,   237,
     238,   239,   249,   250,   253,   255,   256,   274,    58,    94,
     128,   138,   149,   257,   230,    94,   141,   241,   141,   241,
       8,   128,   275,   276,   210,   141,   241,   251,     3,    58,
       0,   181,    95,   254,     3,    95,   254,    94,   141,     3,
      82,    93,   103,   119,   231,     3,     3,    59,    88,    93,
      97,   103,   242,     3,   242,     9,    20,     3,    69,   185,
       3,     4,     5,     6,     7,     8,    17,    18,    25,    26,
      34,    47,    51,    54,    55,    62,    66,    88,   113,   127,
     130,   131,   132,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   183,   188,   211,   212,     3,    93,   103,     3,
     183,   214,   215,   216,   218,   228,     3,   187,   162,     3,
     115,   162,     3,     3,    95,   254,   182,   232,     3,   231,
      82,   185,     3,     3,   188,   188,   276,   182,   183,     9,
     188,   188,   188,   157,   188,   195,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   188,     3,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    39,   213,    82,
     185,   182,   213,   197,   214,   134,   185,    50,    92,   104,
     112,   125,   132,   219,   221,    39,   217,     3,     3,   115,
     162,     3,    26,   156,   198,   151,   214,     3,   134,   183,
     243,   134,   243,     3,   188,   189,   190,   188,   188,   195,
      76,    77,   157,   197,   188,    44,   105,   143,   188,   193,
     188,   188,    26,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   184,   184,   184,   184,   188,   188,
     188,   188,   188,     6,    18,   113,   183,    13,    14,    16,
      19,   188,    34,    35,   129,   183,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,     3,   214,   212,
       3,    80,    93,   152,   225,   184,   184,     3,   252,   215,
     104,   125,   222,   216,   100,   114,   220,     3,   183,   115,
       3,     3,    93,   126,   182,   183,   272,   273,   188,   116,
     204,   214,   198,   232,     3,   248,     3,   244,   154,   248,
     154,   197,   185,   184,   142,    76,    77,   188,   188,   184,
      82,   185,   184,    82,   188,   185,   185,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   185,   185,   185,     6,
     113,   191,   197,   188,   188,   183,   188,    38,   183,   183,
     183,   197,   198,   213,   101,   101,   101,    20,   182,   185,
     198,   220,   220,   100,   115,   216,   100,     3,   235,     3,
     183,   115,     3,    52,    81,    83,    94,   101,   118,   258,
     259,   264,   217,    42,   106,   207,   198,    20,   117,   185,
     240,   184,   185,   183,   245,   240,   245,   240,   189,   188,
     188,    76,   142,   188,   188,   188,    82,    99,   194,   194,
     188,   188,   188,   189,   184,   192,   197,    38,   188,   197,
     197,   197,   184,    85,   199,   225,    84,   226,   226,   226,
     188,     3,     3,   204,   216,   188,   115,   151,   223,   224,
     216,   184,   185,   183,   235,     3,   183,   272,   183,   101,
      94,   101,   183,   183,   101,   184,   185,     3,   197,     3,
     205,   206,   188,    69,   188,   101,     3,     3,    69,   188,
     247,   185,   240,   240,    76,   188,    84,   184,   184,   185,
     184,   188,   188,   184,   184,   184,   185,   184,   184,   189,
     184,   188,   184,   184,   184,    42,    90,   203,   100,   183,
     183,   183,    20,    20,   182,   207,   188,   183,   224,     3,
     235,   184,   183,   258,   188,   183,   183,   183,     3,   209,
     209,   183,   272,   259,    40,    41,    43,    45,    46,    56,
      70,    71,    72,    73,    75,    79,    91,    98,   102,   108,
     109,   110,   111,   120,   133,   134,   136,   137,   139,   140,
     145,   146,   150,   153,   155,   159,   270,    37,    68,   201,
     185,   107,   185,   147,    20,   184,   185,   246,   188,   188,
     184,    60,    61,    65,    67,    86,    87,    89,   159,   160,
     188,   184,   188,   200,   188,   204,     3,   227,   227,   227,
     188,   188,     3,   209,   184,   235,   184,   184,     3,   261,
     209,   209,   184,   185,   184,     3,   260,   183,   266,   266,
     266,   266,   266,   266,   183,   266,   266,   266,    43,   267,
     267,   266,   266,   266,   183,   267,   266,   267,   183,   183,
     265,   206,   188,   188,   248,    69,   188,    69,   188,   183,
     184,   184,   184,   201,   158,   185,   202,   207,   184,   185,
     184,   184,    20,   184,   184,   272,   184,   185,   184,   184,
       3,   184,   185,     5,   268,   269,   268,   268,     4,   271,
     268,   268,   268,   269,   269,   268,   268,   268,   271,   269,
     268,   269,     5,     5,    18,    36,    52,    53,    69,   101,
     113,   118,   149,   247,   124,   188,    97,   208,     3,   188,
     122,     3,     3,   184,   185,   148,   161,    56,    57,   184,
     185,   184,   184,   184,   113,   183,   183,     4,     4,     5,
       6,     7,    47,   178,   179,   180,   101,   101,   183,   184,
     201,   209,     3,     5,   134,     4,   269,     4,   269,   269,
       5,   188,   183,   183,   183,   209,   183,   184,     4,   184,
     185,   184,   184,   184,   184,   184,     3,   262,     5,   184,
     185,   184,   263,     3,   115,    63,   147,    49,   123,   134,
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
#line 279 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 285 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 286 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 288 "parser/evoparser.y"
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
#line 306 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 314 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 322 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 328 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 335 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 336 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 337 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 338 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 339 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 340 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 341 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 342 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 343 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 344 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 345 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 346 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 347 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 348 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 349 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 350 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 351 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 353 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 358 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 359 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 360 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 361 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 364 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 365 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 366 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 367 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 368 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 371 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 372 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 375 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_inListCount < MAX_IN_LIST) g_inListExprs[g_inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 376 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_inListCount; _i>0; _i--) g_inListExprs[_i]=g_inListExprs[_i-1]; g_inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_inListCount++; } ;}
    break;

  case 43:
#line 379 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 383 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 46:
#line 383 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 47:
#line 384 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 48:
#line 384 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 49:
#line 385 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 386 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 387 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 391 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 395 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 396 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 397 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 398 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 399 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 400 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 402 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 403 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 404 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 405 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 406 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 407 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 408 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 409 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 410 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 411 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 412 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 413 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 414 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 415 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 422 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 429 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 438 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 76:
#line 439 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 77:
#line 440 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 78:
#line 443 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 79:
#line 444 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 80:
#line 447 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 81:
#line 448 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 82:
#line 449 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 83:
#line 450 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 84:
#line 451 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 85:
#line 452 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 86:
#line 453 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 87:
#line 454 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 88:
#line 455 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 89:
#line 459 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_caseWhenCount, NULL); ;}
    break;

  case 90:
#line 461 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 91:
#line 463 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, NULL); ;}
    break;

  case 92:
#line 465 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 93:
#line 469 "parser/evoparser.y"
    {
        g_caseWhenCount = 0;
        g_caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 94:
#line 477 "parser/evoparser.y"
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
#line 487 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 96:
#line 488 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 97:
#line 491 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 98:
#line 492 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 99:
#line 496 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 100:
#line 504 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 512 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 523 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 103:
#line 532 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_selectDistinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 104:
#line 537 "parser/evoparser.y"
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
#line 548 "parser/evoparser.y"
    { emit("WHERE"); g_whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 108:
#line 550 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 109:
#line 553 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_groupByCount = 0;
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 110:
#line 560 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 111:
#line 568 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 112:
#line 569 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 570 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 114:
#line 573 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 115:
#line 574 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 117:
#line 578 "parser/evoparser.y"
    { emit("HAVING"); g_havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 122:
#line 590 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 123:
#line 597 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 124:
#line 598 "parser/evoparser.y"
    { emit("LIMIT 1"); g_limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 125:
#line 599 "parser/evoparser.y"
    { emit("LIMIT 2"); g_offsetExpr = (yyvsp[(2) - (4)].exprval); g_limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 126:
#line 600 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_limitExpr = (yyvsp[(2) - (4)].exprval); g_offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 128:
#line 604 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 129:
#line 607 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 130:
#line 608 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 131:
#line 611 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 132:
#line 612 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 133:
#line 613 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 134:
#line 614 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 135:
#line 615 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 136:
#line 616 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 137:
#line 617 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 138:
#line 618 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 139:
#line 619 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 140:
#line 622 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 141:
#line 623 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 142:
#line 625 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 143:
#line 633 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 144:
#line 638 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 145:
#line 639 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 146:
#line 640 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 147:
#line 643 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 148:
#line 644 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 151:
#line 653 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 152:
#line 658 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 153:
#line 659 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 154:
#line 660 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 157:
#line 669 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 158:
#line 671 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 159:
#line 673 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 160:
#line 675 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 161:
#line 677 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 162:
#line 680 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 163:
#line 681 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 164:
#line 682 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 165:
#line 685 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 166:
#line 686 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 167:
#line 689 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 168:
#line 690 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 169:
#line 693 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 170:
#line 694 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 171:
#line 695 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 174:
#line 702 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 175:
#line 703 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 176:
#line 708 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 177:
#line 710 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 178:
#line 712 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 180:
#line 716 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 181:
#line 717 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 182:
#line 720 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 183:
#line 721 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 184:
#line 724 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 185:
#line 729 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 186:
#line 737 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 187:
#line 744 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 188:
#line 745 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 189:
#line 746 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 190:
#line 747 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 191:
#line 751 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 192:
#line 754 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 193:
#line 755 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 196:
#line 760 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 197:
#line 765 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 198:
#line 772 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 199:
#line 781 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 200:
#line 788 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 201:
#line 795 "parser/evoparser.y"
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

  case 202:
#line 805 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 203:
#line 813 "parser/evoparser.y"
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

  case 204:
#line 825 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 205:
#line 830 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 206:
#line 838 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 207:
#line 845 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 208:
#line 854 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 209:
#line 861 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 210:
#line 870 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 211:
#line 877 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 212:
#line 885 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 213:
#line 892 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 215:
#line 900 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 216:
#line 903 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 217:
#line 904 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 218:
#line 905 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 219:
#line 906 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 220:
#line 907 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 224:
#line 914 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 225:
#line 918 "parser/evoparser.y"
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

  case 226:
#line 928 "parser/evoparser.y"
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

  case 227:
#line 940 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 228:
#line 941 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 229:
#line 941 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 230:
#line 944 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 231:
#line 945 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 232:
#line 946 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 233:
#line 947 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 234:
#line 951 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 235:
#line 954 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 236:
#line 955 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 237:
#line 956 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 238:
#line 957 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 239:
#line 963 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 240:
#line 969 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 241:
#line 974 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 242:
#line 979 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 243:
#line 984 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 244:
#line 991 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 245:
#line 996 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 246:
#line 997 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 247:
#line 998 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 248:
#line 1003 "parser/evoparser.y"
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

  case 249:
#line 1014 "parser/evoparser.y"
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

  case 250:
#line 1025 "parser/evoparser.y"
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

  case 251:
#line 1036 "parser/evoparser.y"
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

  case 252:
#line 1049 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 253:
#line 1053 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 254:
#line 1054 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 255:
#line 1057 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 256:
#line 1058 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 257:
#line 1062 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 258:
#line 1066 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 259:
#line 1067 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 260:
#line 1072 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 261:
#line 1080 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        g_isTemporary = (yyvsp[(2) - (8)].intval);
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 262:
#line 1089 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); g_isTemporary = (yyvsp[(2) - (10)].intval); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 263:
#line 1094 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 264:
#line 1098 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 265:
#line 1103 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 266:
#line 1107 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 267:
#line 1110 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 268:
#line 1111 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 269:
#line 1114 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 270:
#line 1115 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 271:
#line 1118 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 272:
#line 1119 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 273:
#line 1120 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 274:
#line 1121 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 275:
#line 1122 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 276:
#line 1123 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 277:
#line 1125 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 278:
#line 1128 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 279:
#line 1129 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 280:
#line 1132 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 281:
#line 1133 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 282:
#line 1136 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 283:
#line 1137 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 285:
#line 1141 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 286:
#line 1142 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 287:
#line 1143 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 288:
#line 1144 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 289:
#line 1145 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 290:
#line 1146 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 291:
#line 1149 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 292:
#line 1151 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 293:
#line 1159 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 294:
#line 1160 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 296:
#line 1162 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 297:
#line 1163 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 298:
#line 1164 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 299:
#line 1165 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 300:
#line 1166 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 301:
#line 1167 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 302:
#line 1168 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 303:
#line 1169 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 304:
#line 1170 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 305:
#line 1171 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 306:
#line 1172 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 307:
#line 1173 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY %d", (yyvsp[(4) - (5)].intval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 308:
#line 1174 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 309:
#line 1175 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 310:
#line 1176 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 311:
#line 1177 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 312:
#line 1178 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 313:
#line 1179 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 314:
#line 1182 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 315:
#line 1183 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 316:
#line 1184 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 317:
#line 1187 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 318:
#line 1188 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 319:
#line 1191 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 320:
#line 1192 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 321:
#line 1193 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 323:
#line 1197 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 324:
#line 1198 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 325:
#line 1202 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 326:
#line 1203 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 327:
#line 1204 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 328:
#line 1205 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 329:
#line 1206 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 330:
#line 1207 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 331:
#line 1208 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 332:
#line 1209 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 333:
#line 1210 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 334:
#line 1211 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 335:
#line 1212 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 336:
#line 1213 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 337:
#line 1214 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 338:
#line 1215 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 339:
#line 1216 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 340:
#line 1217 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 341:
#line 1218 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 342:
#line 1219 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 343:
#line 1220 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 344:
#line 1221 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 345:
#line 1222 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 346:
#line 1223 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 347:
#line 1224 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 348:
#line 1225 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 349:
#line 1226 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 350:
#line 1227 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 351:
#line 1228 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 352:
#line 1229 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 353:
#line 1230 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 354:
#line 1231 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 355:
#line 1232 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 356:
#line 1233 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 357:
#line 1236 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 358:
#line 1237 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 359:
#line 1241 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 360:
#line 1244 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 361:
#line 1245 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 362:
#line 1246 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 363:
#line 1250 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 364:
#line 1253 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 365:
#line 1254 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 369:
#line 1258 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 370:
#line 1259 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4781 "parser/evoparser.tab.c"
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


#line 1262 "parser/evoparser.y"

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
