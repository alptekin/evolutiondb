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
     DISABLE = 306,
     DOMAIN = 307,
     DELAYED = 308,
     DAY_HOUR = 309,
     DAY_MICROSECOND = 310,
     DISTINCT = 311,
     DELETE = 312,
     DROP = 313,
     DAY_MINUTE = 314,
     DISTINCTROW = 315,
     DAY_SECOND = 316,
     DESC = 317,
     DEFAULT = 318,
     DOUBLE = 319,
     DATETIME = 320,
     DECIMAL = 321,
     DATE = 322,
     ENABLE = 323,
     ESCAPED = 324,
     ENUM = 325,
     END = 326,
     ELSE = 327,
     EXPLAIN = 328,
     FLOAT = 329,
     FORCE = 330,
     FOREIGN = 331,
     FROM = 332,
     FULLTEXT = 333,
     FOR = 334,
     GROUP = 335,
     HOUR_MINUTE = 336,
     HOUR_MICROSECOND = 337,
     HIGH_PRIORITY = 338,
     HOUR_SECOND = 339,
     HAVING = 340,
     INTEGER = 341,
     INNER = 342,
     IGNORE = 343,
     INDEX = 344,
     IF = 345,
     INSERT = 346,
     INTO = 347,
     INT = 348,
     INTERVAL = 349,
     JOIN = 350,
     KEY = 351,
     LONGTEXT = 352,
     LOW_PRIORITY = 353,
     LEFT = 354,
     LEADING = 355,
     LIMIT = 356,
     OFFSET = 357,
     LONGBLOB = 358,
     MEDIUMTEXT = 359,
     MEDIUMBLOB = 360,
     MEDIUMINT = 361,
     NATURAL = 362,
     NULLX = 363,
     OUTER = 364,
     ON = 365,
     ORDER = 366,
     ONDUPLICATE = 367,
     PRIMARY = 368,
     QUICK = 369,
     REAL = 370,
     RECLAIM = 371,
     REFERENCES = 372,
     RENAME = 373,
     RESTRICT = 374,
     ROLLUP = 375,
     RIGHT = 376,
     REPLACE = 377,
     SQL_SMALL_RESULT = 378,
     SCHEMA = 379,
     SOME = 380,
     SQL_CALC_FOUND_ROWS = 381,
     SQL_BIG_RESULT = 382,
     STRAIGHT_JOIN = 383,
     SMALLINT = 384,
     SET = 385,
     SELECT = 386,
     TINYTEXT = 387,
     TINYINT = 388,
     TO = 389,
     TEMPORARY = 390,
     TEXT = 391,
     TIMESTAMP = 392,
     TABLE = 393,
     THEN = 394,
     TRAILING = 395,
     TRUNCATE = 396,
     TINYBLOB = 397,
     TIME = 398,
     UPDATE = 399,
     UNSIGNED = 400,
     UNIQUE = 401,
     UUID = 402,
     USING = 403,
     USE = 404,
     VALIDATE = 405,
     VARCHAR = 406,
     VALUES = 407,
     VARBINARY = 408,
     WHERE = 409,
     WHEN = 410,
     WITH = 411,
     YEAR = 412,
     YEAR_MONTH = 413,
     ZEROFILL = 414,
     EXISTS = 415,
     FSUBSTRING = 416,
     FTRIM = 417,
     FDATE_ADD = 418,
     FDATE_SUB = 419,
     FCOUNT = 420,
     FSUM = 421,
     FAVG = 422,
     FMIN = 423,
     FMAX = 424,
     FUPPER = 425,
     FLOWER = 426,
     FLENGTH = 427,
     FCONCAT = 428,
     FREPLACE = 429,
     FCOALESCE = 430,
     FGEN_RANDOM_UUID = 431,
     FGEN_RANDOM_UUID_V7 = 432,
     FSNOWFLAKE_ID = 433
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
#define DISABLE 306
#define DOMAIN 307
#define DELAYED 308
#define DAY_HOUR 309
#define DAY_MICROSECOND 310
#define DISTINCT 311
#define DELETE 312
#define DROP 313
#define DAY_MINUTE 314
#define DISTINCTROW 315
#define DAY_SECOND 316
#define DESC 317
#define DEFAULT 318
#define DOUBLE 319
#define DATETIME 320
#define DECIMAL 321
#define DATE 322
#define ENABLE 323
#define ESCAPED 324
#define ENUM 325
#define END 326
#define ELSE 327
#define EXPLAIN 328
#define FLOAT 329
#define FORCE 330
#define FOREIGN 331
#define FROM 332
#define FULLTEXT 333
#define FOR 334
#define GROUP 335
#define HOUR_MINUTE 336
#define HOUR_MICROSECOND 337
#define HIGH_PRIORITY 338
#define HOUR_SECOND 339
#define HAVING 340
#define INTEGER 341
#define INNER 342
#define IGNORE 343
#define INDEX 344
#define IF 345
#define INSERT 346
#define INTO 347
#define INT 348
#define INTERVAL 349
#define JOIN 350
#define KEY 351
#define LONGTEXT 352
#define LOW_PRIORITY 353
#define LEFT 354
#define LEADING 355
#define LIMIT 356
#define OFFSET 357
#define LONGBLOB 358
#define MEDIUMTEXT 359
#define MEDIUMBLOB 360
#define MEDIUMINT 361
#define NATURAL 362
#define NULLX 363
#define OUTER 364
#define ON 365
#define ORDER 366
#define ONDUPLICATE 367
#define PRIMARY 368
#define QUICK 369
#define REAL 370
#define RECLAIM 371
#define REFERENCES 372
#define RENAME 373
#define RESTRICT 374
#define ROLLUP 375
#define RIGHT 376
#define REPLACE 377
#define SQL_SMALL_RESULT 378
#define SCHEMA 379
#define SOME 380
#define SQL_CALC_FOUND_ROWS 381
#define SQL_BIG_RESULT 382
#define STRAIGHT_JOIN 383
#define SMALLINT 384
#define SET 385
#define SELECT 386
#define TINYTEXT 387
#define TINYINT 388
#define TO 389
#define TEMPORARY 390
#define TEXT 391
#define TIMESTAMP 392
#define TABLE 393
#define THEN 394
#define TRAILING 395
#define TRUNCATE 396
#define TINYBLOB 397
#define TIME 398
#define UPDATE 399
#define UNSIGNED 400
#define UNIQUE 401
#define UUID 402
#define USING 403
#define USE 404
#define VALIDATE 405
#define VARCHAR 406
#define VALUES 407
#define VARBINARY 408
#define WHERE 409
#define WHEN 410
#define WITH 411
#define YEAR 412
#define YEAR_MONTH 413
#define ZEROFILL 414
#define EXISTS 415
#define FSUBSTRING 416
#define FTRIM 417
#define FDATE_ADD 418
#define FDATE_SUB 419
#define FCOUNT 420
#define FSUM 421
#define FAVG 422
#define FMIN 423
#define FMAX 424
#define FUPPER 425
#define FLOWER 426
#define FLENGTH 427
#define FCONCAT 428
#define FREPLACE 429
#define FCOALESCE 430
#define FGEN_RANDOM_UUID 431
#define FGEN_RANDOM_UUID_V7 432
#define FSNOWFLAKE_ID 433




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
#line 477 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 490 "parser/evoparser.tab.c"

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
#define YYLAST   2697

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  193
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  400
/* YYNRULES -- Number of states.  */
#define YYNSTATES  928

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   433

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     190,   191,    26,    24,   192,    25,   189,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   188,
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
     184,   185,   186,   187
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
     767,   769,   778,   789,   799,   811,   813,   817,   819,   823,
     825,   829,   831,   835,   837,   848,   859,   877,   890,   910,
     922,   929,   938,   945,   952,   959,   961,   970,   971,   976,
     977,   980,   983,   986,   989,   991,   992,   993,   997,   999,
    1003,  1007,  1008,  1015,  1017,  1019,  1023,  1027,  1035,  1039,
    1043,  1049,  1055,  1057,  1066,  1074,  1082,  1084,  1093,  1094,
    1097,  1100,  1104,  1110,  1116,  1124,  1126,  1131,  1136,  1137,
    1140,  1142,  1148,  1156,  1164,  1174,  1186,  1188,  1191,  1195,
    1197,  1206,  1217,  1227,  1234,  1246,  1255,  1256,  1258,  1260,
    1264,  1270,  1278,  1283,  1288,  1294,  1300,  1305,  1312,  1324,
    1338,  1343,  1350,  1352,  1356,  1358,  1362,  1364,  1368,  1369,
    1374,  1380,  1385,  1391,  1396,  1402,  1407,  1413,  1415,  1419,
    1420,  1425,  1426,  1430,  1433,  1437,  1441,  1445,  1449,  1455,
    1461,  1467,  1471,  1474,  1482,  1488,  1492,  1495,  1499,  1502,
    1506,  1512,  1517,  1523,  1531,  1532,  1536,  1542,  1543,  1545,
    1546,  1549,  1552,  1553,  1558,  1562,  1565,  1569,  1573,  1577,
    1581,  1585,  1589,  1593,  1597,  1601,  1605,  1607,  1609,  1611,
    1613,  1615,  1619,  1625,  1628,  1633,  1635,  1637,  1639,  1641,
    1645,  1649,  1653,  1657,  1663,  1669,  1671,  1673,  1675,  1679,
    1683,  1684,  1686,  1688,  1690,  1694,  1698,  1701,  1703,  1707,
    1711
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     194,     0,    -1,   203,   188,    -1,   203,   188,   194,    -1,
       3,    -1,     3,   189,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   117,    -1,   195,    24,
     195,    -1,   195,    25,   195,    -1,   195,    26,   195,    -1,
     195,    27,   195,    -1,   195,    28,   195,    -1,   195,    29,
     195,    -1,    25,   195,    -1,   190,   195,   191,    -1,   195,
      12,   195,    -1,   195,    10,   195,    -1,   195,    11,   195,
      -1,   195,    21,   195,    -1,   195,    22,   195,    -1,   195,
      30,   195,    -1,   195,    23,   195,    -1,    18,   195,    -1,
      17,   195,    -1,   195,    20,   195,    -1,   195,    20,   190,
     204,   191,    -1,   195,    20,    35,   190,   204,   191,    -1,
     195,    20,   134,   190,   204,   191,    -1,   195,    20,    34,
     190,   204,   191,    -1,   195,    15,   117,    -1,   195,    15,
      18,   117,    -1,   195,    15,     6,    -1,   195,    15,    18,
       6,    -1,     8,     9,   195,    -1,   195,    19,   195,    38,
     195,    -1,   195,    18,    19,   195,    38,   195,    -1,   195,
      -1,   195,   192,   196,    -1,    -1,   196,    -1,    -1,   195,
      16,   190,   198,   196,   191,    -1,    -1,   195,    18,    16,
     190,   199,   196,   191,    -1,   195,    16,   190,   204,   191,
      -1,   195,    18,    16,   190,   204,   191,    -1,   169,   190,
     204,   191,    -1,     3,   190,   197,   191,    -1,   174,   190,
      26,   191,    -1,   174,   190,   195,   191,    -1,   175,   190,
     195,   191,    -1,   176,   190,   195,   191,    -1,   177,   190,
     195,   191,    -1,   178,   190,   195,   191,    -1,   170,   190,
     195,   192,   195,   192,   195,   191,    -1,   170,   190,   195,
     192,   195,   191,    -1,   170,   190,   195,    86,   195,   191,
      -1,   170,   190,   195,    86,   195,    88,   195,   191,    -1,
     171,   190,   195,   191,    -1,   171,   190,   200,   195,    86,
     195,   191,    -1,   171,   190,   200,    86,   195,   191,    -1,
     179,   190,   195,   191,    -1,   180,   190,   195,   191,    -1,
     181,   190,   195,   191,    -1,   182,   190,   195,   192,   195,
     191,    -1,   183,   190,   195,   192,   195,   192,   195,   191,
      -1,   184,   190,   195,   192,   195,   191,    -1,   185,   190,
     191,    -1,   186,   190,   191,    -1,   187,   190,   191,    -1,
     109,    -1,   149,    -1,    44,    -1,   172,   190,   195,   192,
     201,   191,    -1,   173,   190,   195,   192,   201,   191,    -1,
     103,   195,    63,    -1,   103,   195,    64,    -1,   103,   195,
      68,    -1,   103,   195,    70,    -1,   103,   195,   167,    -1,
     103,   195,   166,    -1,   103,   195,    91,    -1,   103,   195,
      90,    -1,   103,   195,    93,    -1,    52,   195,   202,    80,
      -1,    52,   195,   202,    81,   195,    80,    -1,    52,   202,
      80,    -1,    52,   202,    81,   195,    80,    -1,   164,   195,
     148,   195,    -1,   202,   164,   195,   148,   195,    -1,   195,
      14,   195,    -1,   195,    18,    14,   195,    -1,   195,    13,
     195,    -1,   195,    18,    13,   195,    -1,    48,    -1,    55,
      -1,    56,    -1,   204,    -1,   140,   217,   218,    -1,   140,
     217,   218,    86,   221,   205,   206,   210,   211,   214,   215,
      -1,    -1,   163,   195,    -1,    -1,    89,    42,   207,   209,
      -1,   195,   208,    -1,   207,   192,   195,   208,    -1,    -1,
      37,    -1,    71,    -1,    -1,   165,   129,    -1,    -1,    94,
     195,    -1,    -1,   120,    42,   212,    -1,   213,    -1,   212,
     192,   213,    -1,     3,   208,    -1,    -1,   110,   195,    -1,
     110,   195,   192,   195,    -1,   110,   195,   111,   195,    -1,
      -1,   101,   216,    -1,     3,    -1,   216,   192,     3,    -1,
      -1,   217,    34,    -1,   217,    65,    -1,   217,    69,    -1,
     217,    92,    -1,   217,   137,    -1,   217,   132,    -1,   217,
     136,    -1,   217,   135,    -1,   219,    -1,   218,   192,   219,
      -1,    26,    -1,   195,   220,    -1,    39,     3,    -1,     3,
      -1,    -1,   222,    -1,   221,   192,   222,    -1,   223,    -1,
     225,    -1,     3,   220,   232,    -1,     3,   189,     3,   220,
     232,    -1,   235,   224,     3,    -1,   190,   221,   191,    -1,
      39,    -1,    -1,   222,   226,   104,   223,   230,    -1,   222,
     137,   223,    -1,   222,   137,   223,   119,   195,    -1,   222,
     228,   227,   104,   223,   231,    -1,   222,   116,   229,   104,
     223,    -1,    -1,    96,    -1,    51,    -1,    -1,   118,    -1,
     108,    -1,   130,    -1,   108,   227,    -1,   130,   227,    -1,
      -1,    -1,   231,    -1,   119,   195,    -1,   157,   190,   216,
     191,    -1,   158,   105,   233,   190,   234,   191,    -1,    97,
     105,   233,   190,   234,   191,    -1,    84,   105,   233,   190,
     234,   191,    -1,    -1,    88,   104,    -1,    -1,     3,    -1,
     234,   192,     3,    -1,   190,   204,   191,    -1,   236,    -1,
      66,   237,    86,     3,   205,   211,   214,    -1,   237,   107,
      -1,   237,   123,    -1,   237,    97,    -1,    -1,    66,   237,
     238,    86,   221,   205,    -1,     3,   239,    -1,   238,   192,
       3,   239,    -1,    -1,   189,    26,    -1,    66,   237,    86,
     238,   157,   221,   205,    -1,   240,    -1,    67,   147,     3,
      -1,    67,   147,    99,   169,     3,    -1,   241,    -1,    49,
      98,     3,   119,     3,   190,   242,   191,    -1,    49,    98,
      99,   169,     3,   119,     3,   190,   242,   191,    -1,    49,
     155,    98,     3,   119,     3,   190,   242,   191,    -1,    49,
     155,    98,    99,   169,     3,   119,     3,   190,   242,   191,
      -1,     3,    -1,   242,   192,     3,    -1,   243,    -1,    67,
      98,     3,    -1,   244,    -1,   150,   147,     3,    -1,   245,
      -1,   125,   147,     3,    -1,   246,    -1,    32,   147,     3,
      33,    47,     3,    53,   190,   195,   191,    -1,    32,   147,
       3,    33,    47,     3,   155,   190,   273,   191,    -1,    32,
     147,     3,    33,    47,     3,    85,   105,   190,   270,   191,
     126,     3,   190,   271,   191,   272,    -1,    32,   147,     3,
      33,    47,     3,    53,   190,   195,   191,    18,   159,    -1,
      32,   147,     3,    33,    47,     3,    85,   105,   190,   270,
     191,   126,     3,   190,   271,   191,   272,    18,   159,    -1,
      32,   147,     3,    33,    47,     3,   122,   105,   190,   269,
     191,    -1,    32,   147,     3,    67,    47,     3,    -1,    32,
     147,     3,   127,    47,     3,   143,     3,    -1,    32,   147,
       3,    77,    47,     3,    -1,    32,   147,     3,    60,    47,
       3,    -1,    32,   147,     3,   159,    47,     3,    -1,   247,
      -1,   100,   249,   250,     3,   251,   161,   253,   248,    -1,
      -1,   121,   105,   153,   256,    -1,    -1,   249,   107,    -1,
     249,    62,    -1,   249,    92,    -1,   249,    97,    -1,   101,
      -1,    -1,    -1,   190,   252,   191,    -1,     3,    -1,   252,
     192,     3,    -1,   190,   255,   191,    -1,    -1,   253,   192,
     254,   190,   255,   191,    -1,   195,    -1,    72,    -1,   255,
     192,   195,    -1,   255,   192,    72,    -1,   100,   249,   250,
       3,   139,   256,   248,    -1,     3,    20,   195,    -1,     3,
      20,    72,    -1,   256,   192,     3,    20,   195,    -1,   256,
     192,     3,    20,    72,    -1,   257,    -1,   131,   249,   250,
       3,   251,   161,   253,   248,    -1,   131,   249,   250,     3,
     139,   256,   248,    -1,   131,   249,   250,     3,   251,   204,
     248,    -1,   258,    -1,   153,   259,   221,   139,   260,   205,
     211,   214,    -1,    -1,   249,   107,    -1,   249,    97,    -1,
       3,    20,   195,    -1,     3,   189,     3,    20,   195,    -1,
     260,   192,     3,    20,   195,    -1,   260,   192,     3,   189,
       3,    20,   195,    -1,   261,    -1,    49,    59,   262,     3,
      -1,    49,   133,   262,     3,    -1,    -1,    99,   169,    -1,
     263,    -1,    49,    61,     3,    39,   280,    -1,    49,    61,
       3,    39,   280,    72,   195,    -1,    49,    61,     3,    39,
     280,    18,   117,    -1,    49,    61,     3,    39,   280,    53,
     190,   195,   191,    -1,    49,    61,     3,    39,   280,    18,
     117,    53,   190,   195,   191,    -1,   264,    -1,   158,     3,
      -1,   158,    59,     3,    -1,   265,    -1,    49,   266,   147,
     262,     3,   190,   267,   191,    -1,    49,   266,   147,   262,
       3,   189,     3,   190,   267,   191,    -1,    49,   266,   147,
     262,     3,   190,   267,   191,   282,    -1,    49,   266,   147,
     262,     3,   282,    -1,    49,   266,   147,   262,     3,   189,
       3,   190,   267,   191,   282,    -1,    49,   266,   147,   262,
       3,   189,     3,   282,    -1,    -1,   144,    -1,   268,    -1,
     267,   192,   268,    -1,   122,   105,   190,   269,   191,    -1,
      47,     3,   122,   105,   190,   269,   191,    -1,   105,   190,
     216,   191,    -1,    98,   190,   216,   191,    -1,    87,    98,
     190,   216,   191,    -1,    87,   105,   190,   216,   191,    -1,
      53,   190,   195,   191,    -1,    47,     3,    53,   190,   195,
     191,    -1,    85,   105,   190,   270,   191,   126,     3,   190,
     271,   191,   272,    -1,    47,     3,    85,   105,   190,   270,
     191,   126,     3,   190,   271,   191,   272,    -1,   155,   190,
     273,   191,    -1,    47,     3,   155,   190,   273,   191,    -1,
       3,    -1,   269,   192,     3,    -1,     3,    -1,   270,   192,
       3,    -1,     3,    -1,   271,   192,     3,    -1,    -1,   272,
     119,    66,    50,    -1,   272,   119,    66,   139,   117,    -1,
     272,   119,    66,   128,    -1,   272,   119,    66,   139,    72,
      -1,   272,   119,   153,    50,    -1,   272,   119,   153,   139,
     117,    -1,   272,   119,   153,   128,    -1,   272,   119,   153,
     139,    72,    -1,     3,    -1,   273,   192,     3,    -1,    -1,
     274,     3,   280,   275,    -1,    -1,   275,    18,   117,    -1,
     275,   117,    -1,   275,    72,     4,    -1,   275,    72,     5,
      -1,   275,    72,     7,    -1,   275,    72,     6,    -1,   275,
      72,   185,   190,   191,    -1,   275,    72,   186,   190,   191,
      -1,   275,    72,   187,   190,   191,    -1,   275,    72,    48,
      -1,   275,    36,    -1,   275,    36,   190,     5,   192,     5,
     191,    -1,   275,    36,   190,     5,   191,    -1,   275,   155,
     105,    -1,   275,   155,    -1,   275,   122,   105,    -1,   275,
     105,    -1,   275,    54,     4,    -1,   275,    53,   190,   195,
     191,    -1,   275,    47,     3,   155,    -1,   275,    47,     3,
     122,   105,    -1,   275,    47,     3,    53,   190,   195,   191,
      -1,    -1,   190,     5,   191,    -1,   190,     5,   192,     5,
     191,    -1,    -1,    43,    -1,    -1,   278,   154,    -1,   278,
     168,    -1,    -1,   279,    57,   139,     4,    -1,   279,    58,
       4,    -1,    46,   276,    -1,   142,   276,   278,    -1,   138,
     276,   278,    -1,   115,   276,   278,    -1,   102,   276,   278,
      -1,    95,   276,   278,    -1,    45,   276,   278,    -1,   124,
     276,   278,    -1,    73,   276,   278,    -1,    83,   276,   278,
      -1,    75,   276,   278,    -1,    76,    -1,   152,    -1,   146,
      -1,    74,    -1,   166,    -1,    57,   276,   279,    -1,   160,
     190,     5,   191,   279,    -1,    43,   276,    -1,   162,   190,
       5,   191,    -1,   151,    -1,    40,    -1,   114,    -1,   112,
      -1,   141,   277,   279,    -1,   145,   277,   279,    -1,   113,
     277,   279,    -1,   106,   277,   279,    -1,    79,   190,   281,
     191,   279,    -1,   139,   190,   281,   191,   279,    -1,    41,
      -1,   156,    -1,     4,    -1,   281,   192,     4,    -1,   283,
     224,   204,    -1,    -1,    97,    -1,   131,    -1,   284,    -1,
     139,   133,     3,    -1,   139,   133,    72,    -1,   139,   285,
      -1,   286,    -1,   285,   192,   286,    -1,     8,    20,   195,
      -1,     8,     9,   195,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   279,   279,   280,   285,   292,   293,   294,   312,   320,
     328,   334,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     365,   366,   367,   368,   371,   372,   373,   374,   375,   378,
     379,   382,   383,   386,   387,   390,   390,   391,   391,   392,
     393,   394,   398,   402,   403,   404,   405,   406,   407,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   429,   436,   445,   446,   447,   450,   451,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   465,
     467,   469,   471,   475,   483,   494,   495,   498,   499,   502,
     510,   518,   529,   539,   540,   554,   555,   556,   557,   560,
     567,   575,   576,   577,   580,   581,   584,   585,   588,   589,
     592,   593,   596,   604,   605,   606,   607,   610,   611,   614,
     615,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     629,   630,   631,   639,   645,   646,   647,   650,   651,   654,
     655,   659,   665,   666,   667,   670,   671,   675,   677,   679,
     681,   683,   687,   688,   689,   692,   693,   696,   697,   700,
     701,   702,   705,   706,   709,   710,   714,   716,   718,   720,
     723,   724,   727,   728,   731,   735,   743,   751,   752,   753,
     754,   758,   761,   762,   765,   765,   767,   771,   778,   785,
     795,   802,   809,   819,   827,   839,   844,   852,   859,   868,
     875,   884,   891,   900,   903,   909,   915,   922,   928,   935,
     941,   947,   953,   959,   965,   973,   980,   988,   989,   992,
     993,   994,   995,   996,   999,   999,  1002,  1003,  1006,  1016,
    1029,  1030,  1030,  1033,  1034,  1035,  1036,  1039,  1043,  1044,
    1045,  1046,  1052,  1055,  1061,  1066,  1072,  1078,  1085,  1086,
    1087,  1091,  1102,  1113,  1124,  1138,  1142,  1143,  1146,  1147,
    1151,  1155,  1157,  1159,  1161,  1163,  1168,  1172,  1173,  1177,
    1184,  1194,  1198,  1203,  1207,  1212,  1216,  1217,  1220,  1221,
    1224,  1225,  1226,  1227,  1228,  1229,  1230,  1231,  1232,  1234,
    1236,  1238,  1242,  1243,  1246,  1247,  1250,  1251,  1254,  1255,
    1256,  1257,  1258,  1259,  1260,  1261,  1262,  1265,  1266,  1269,
    1269,  1279,  1280,  1281,  1282,  1283,  1284,  1285,  1286,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,
    1298,  1299,  1300,  1301,  1304,  1305,  1306,  1309,  1310,  1313,
    1314,  1315,  1318,  1319,  1320,  1324,  1325,  1326,  1327,  1328,
    1329,  1330,  1331,  1332,  1333,  1334,  1335,  1336,  1337,  1338,
    1339,  1340,  1341,  1342,  1343,  1344,  1345,  1346,  1347,  1348,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,  1358,  1359,  1362,
    1366,  1367,  1368,  1372,  1375,  1376,  1377,  1378,  1378,  1380,
    1381
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
  "DISABLE", "DOMAIN", "DELAYED", "DAY_HOUR", "DAY_MICROSECOND",
  "DISTINCT", "DELETE", "DROP", "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND",
  "DESC", "DEFAULT", "DOUBLE", "DATETIME", "DECIMAL", "DATE", "ENABLE",
  "ESCAPED", "ENUM", "END", "ELSE", "EXPLAIN", "FLOAT", "FORCE", "FOREIGN",
  "FROM", "FULLTEXT", "FOR", "GROUP", "HOUR_MINUTE", "HOUR_MICROSECOND",
  "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "INTEGER", "INNER", "IGNORE",
  "INDEX", "IF", "INSERT", "INTO", "INT", "INTERVAL", "JOIN", "KEY",
  "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "OFFSET",
  "LONGBLOB", "MEDIUMTEXT", "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NULLX",
  "OUTER", "ON", "ORDER", "ONDUPLICATE", "PRIMARY", "QUICK", "REAL",
  "RECLAIM", "REFERENCES", "RENAME", "RESTRICT", "ROLLUP", "RIGHT",
  "REPLACE", "SQL_SMALL_RESULT", "SCHEMA", "SOME", "SQL_CALC_FOUND_ROWS",
  "SQL_BIG_RESULT", "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT",
  "TINYTEXT", "TINYINT", "TO", "TEMPORARY", "TEXT", "TIMESTAMP", "TABLE",
  "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME", "UPDATE", "UNSIGNED",
  "UNIQUE", "UUID", "USING", "USE", "VALIDATE", "VARCHAR", "VALUES",
  "VARBINARY", "WHERE", "WHEN", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL",
  "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT",
  "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH", "FCONCAT",
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
  "alter_table_stmt", "insert_stmt", "opt_ondupupdate", "insert_opts",
  "opt_into", "opt_col_names", "insert_col_list", "insert_vals_list", "@3",
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
     426,   427,   428,   429,   430,   431,   432,   433,    59,    46,
      40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   193,   194,   194,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   196,   196,   197,   197,   198,   195,   199,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   200,   200,   200,   195,   195,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   195,
     195,   195,   195,   202,   202,   195,   195,   195,   195,   195,
     195,   195,   203,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   208,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   213,   214,   214,   214,   214,   215,   215,   216,
     216,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     218,   218,   218,   219,   220,   220,   220,   221,   221,   222,
     222,   223,   223,   223,   223,   224,   224,   225,   225,   225,
     225,   225,   226,   226,   226,   227,   227,   228,   228,   229,
     229,   229,   230,   230,   231,   231,   232,   232,   232,   232,
     233,   233,   234,   234,   235,   203,   236,   237,   237,   237,
     237,   236,   238,   238,   239,   239,   236,   203,   240,   240,
     203,   241,   241,   241,   241,   242,   242,   203,   243,   203,
     244,   203,   245,   203,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   203,   247,   248,   248,   249,
     249,   249,   249,   249,   250,   250,   251,   251,   252,   252,
     253,   254,   253,   255,   255,   255,   255,   247,   256,   256,
     256,   256,   203,   257,   257,   257,   203,   258,   259,   259,
     259,   260,   260,   260,   260,   203,   261,   261,   262,   262,
     203,   263,   263,   263,   263,   263,   203,   264,   264,   203,
     265,   265,   265,   265,   265,   265,   266,   266,   267,   267,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   269,   269,   270,   270,   271,   271,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   273,   273,   274,
     268,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   276,   276,   276,   277,   277,   278,
     278,   278,   279,   279,   279,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   281,   281,   282,
     283,   283,   283,   203,   284,   284,   284,   285,   285,   286,
     286
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
       1,     8,    10,     9,    11,     1,     3,     1,     3,     1,
       3,     1,     3,     1,    10,    10,    17,    12,    19,    11,
       6,     8,     6,     6,     6,     1,     8,     0,     4,     0,
       2,     2,     2,     2,     1,     0,     0,     3,     1,     3,
       3,     0,     6,     1,     1,     3,     3,     7,     3,     3,
       5,     5,     1,     8,     7,     7,     1,     8,     0,     2,
       2,     3,     5,     5,     7,     1,     4,     4,     0,     2,
       1,     5,     7,     7,     9,    11,     1,     2,     3,     1,
       8,    10,     9,     6,    11,     8,     0,     1,     1,     3,
       5,     7,     4,     4,     5,     5,     4,     6,    11,    13,
       4,     6,     1,     3,     1,     3,     1,     3,     0,     4,
       5,     4,     5,     4,     5,     4,     5,     1,     3,     0,
       4,     0,     3,     2,     3,     3,     3,     3,     5,     5,
       5,     3,     2,     7,     5,     3,     2,     3,     2,     3,
       5,     4,     5,     7,     0,     3,     5,     0,     1,     0,
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
       0,     0,   286,   190,     0,   229,     0,   229,     0,   131,
       0,   229,     0,     0,     0,   102,   185,   197,   200,   207,
     209,   211,   213,   225,   252,   256,   265,   270,   276,   279,
     393,     0,   268,     0,     0,   268,   287,     0,     0,     0,
       0,     0,   235,     0,   235,     0,     0,   396,   397,     0,
       0,     0,     0,   277,     0,     1,     2,     0,     0,     0,
       0,     0,     0,     0,     0,   268,   194,     0,   189,   187,
     188,     0,   208,   198,     0,   231,   232,   233,   234,   230,
       0,   212,     0,     0,     0,   394,   395,     0,     4,     7,
       8,    10,     9,     6,     0,     0,     0,   142,   132,    99,
       0,   100,   101,   133,   134,   135,    11,   137,   139,   138,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,   103,   140,   210,   233,   230,   146,     0,     0,
     147,   149,   150,   156,   278,     3,     0,     0,     0,     0,
       0,     0,   269,   266,     0,     0,     0,   267,     0,     0,
       0,     0,   192,   105,     0,     0,     0,     0,   236,   236,
     400,   399,   398,     0,    43,     0,    28,    27,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   179,     0,
       0,     0,     0,   164,   163,   167,   171,   168,     0,     0,
     165,   155,     0,     0,     0,     0,     0,     0,     0,   376,
     385,   344,   344,   344,   344,   344,   369,   344,   366,     0,
     344,   344,   344,   347,   378,   347,   377,   344,   344,   344,
       0,   347,   344,   347,   368,   375,   367,   386,     0,     0,
     370,   271,     0,     0,     0,     0,   390,   195,     0,   118,
       0,   105,   194,   199,     0,     0,     0,     0,     0,     5,
      41,    44,     0,    38,     0,     0,    91,     0,     0,     0,
       0,    77,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    19,    21,    22,    20,    97,    95,    36,
       0,    34,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    23,    24,    26,    12,    13,    14,    15,
      16,    17,    25,   144,   105,   141,   146,     0,     0,     0,
     151,   184,   154,     0,   105,   148,   165,   165,     0,   158,
       0,   166,     0,   153,     0,   223,   220,   222,     0,   224,
       0,   373,   349,   355,   352,   349,   349,     0,   349,   349,
     349,   348,   352,   352,   349,   349,   349,     0,   352,   349,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     391,   392,     0,   319,   283,   156,   106,     0,   123,   105,
     191,   193,     0,   227,   238,     0,     0,   227,     0,   227,
       0,    52,     0,    89,     0,     0,     0,    51,     0,     0,
      63,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    66,    67,    68,     0,     0,     0,    37,    35,     0,
       0,    98,    96,    47,     0,     0,     0,     0,     0,     0,
     107,   179,   181,   181,   181,     0,     0,     0,   118,   169,
     170,     0,     0,   172,     0,     0,     0,     0,     0,     0,
       0,   361,   371,   363,   365,   387,     0,   364,   360,   359,
     382,   381,   358,   362,   357,     0,   379,   356,   380,     0,
       0,   273,     0,   272,   205,     0,     0,     0,     0,   390,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
       0,     0,     0,     0,   186,   196,     0,     0,     0,   247,
     237,     0,     0,   227,   254,   227,   255,    42,    93,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,    39,     0,     0,
       0,    30,     0,   116,   152,     0,     0,     0,     0,   261,
       0,     0,   123,   161,   159,     0,     0,   157,   173,     0,
       0,     0,     0,     0,   221,   345,     0,   350,   351,     0,
       0,   352,     0,   352,   352,   374,     0,     0,   201,     0,
       0,     0,     0,   319,   285,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   390,   319,     0,   389,   111,   119,
     120,   124,   249,   248,     0,     0,   239,   244,   243,     0,
     241,   226,   253,    90,    94,     0,    61,    60,     0,    65,
       0,     0,    78,    79,    69,     0,    71,    46,     0,    50,
      40,    33,    31,    32,     0,     0,   118,   180,     0,     0,
       0,     0,     0,     0,   257,   174,     0,   160,     0,     0,
       0,   317,     0,     0,     0,   354,   383,   388,   384,   372,
       0,   274,   206,     0,   203,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,     0,     0,
     282,   289,   321,   112,   113,   122,     0,     0,     0,     0,
       0,   240,     0,     0,     0,     0,    64,    80,    81,    82,
      83,    87,    86,    88,    85,    84,     0,    48,   111,   114,
     117,   123,   182,     0,     0,     0,   262,   263,     0,     0,
     214,   304,     0,   302,     0,   215,     0,   346,   353,     0,
     202,     0,   390,     0,     0,     0,     0,   296,     0,     0,
       0,   293,     0,   292,     0,   300,   320,   121,   126,   125,
     228,   251,   250,   246,   245,     0,    62,    59,    70,   109,
       0,     0,   108,   127,   178,     0,   177,   176,     0,   175,
       0,     0,     0,   219,     0,   318,   275,   204,   284,     0,
       0,     0,     0,     0,   294,   295,   130,   290,     0,   332,
       0,     0,     0,     0,   338,   323,     0,   336,     0,   115,
     111,     0,   104,   183,   264,   217,     0,   305,   303,   297,
       0,     0,   301,     0,   322,     0,     0,     0,   339,   324,
     325,   327,   326,   331,     0,     0,     0,   337,   335,   242,
     110,   128,     0,     0,   291,     0,     0,     0,     0,   341,
       0,     0,     0,     0,     0,     0,     0,   334,     0,     0,
     342,   340,   328,   329,   330,   306,     0,     0,     0,     0,
       0,   308,     0,     0,   308,   333,   343,   216,   307,     0,
     298,     0,     0,   308,   218,     0,     0,   299,   309,   311,
       0,   313,   315,     0,   312,   310,   316,   314
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,   300,   301,   302,   469,   574,   315,   567,   181,
      14,    15,   289,   583,   749,   725,   802,   676,   428,   639,
     640,   544,   842,   716,    49,   132,   133,   224,   139,   140,
     141,   242,   142,   239,   382,   240,   378,   597,   598,   370,
     586,   753,   143,    16,    39,    71,   162,    17,    18,   525,
      19,    20,    21,    22,    23,   549,    42,    80,   296,   435,
     553,   733,   649,   433,    24,    25,    52,   374,    26,    59,
      27,    28,    29,    38,   538,   539,   764,   762,   896,   907,
     692,   540,   786,   391,   402,   501,   502,   281,   506,   424,
     425,    30,    47,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -807
static const yytype_int16 yypact[] =
{
     189,   -68,   163,  -807,   -20,  -807,   -63,  -807,    48,  -807,
     -60,     6,    52,    89,    24,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,   234,   144,   250,    26,   144,  -807,   170,   124,   113,
     271,    91,   244,   274,   244,   267,    47,    94,  -807,   275,
     285,   165,     8,  -807,   288,  -807,   189,    25,   134,   318,
     296,   194,   174,   343,    92,   144,   160,   349,  -807,  -807,
    -807,   -33,  -807,  -807,   206,  -807,  -807,  -807,  -807,  -807,
     388,  -807,   391,  1452,  1452,  -807,  -807,   390,    62,  -807,
    -807,  -807,  -807,   399,  1452,  1452,  1452,  -807,  -807,  -807,
     737,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,   224,   237,   251,   330,   344,   351,   354,   371,   379,
     415,   420,   434,   444,   453,   454,   455,   457,   462,   467,
    1452,  2553,   -10,  -807,  -807,    11,    13,    15,    10,   -79,
     305,  -807,  -807,   395,  -807,  -807,   461,   501,   549,   612,
     613,   617,  -807,  -807,  2320,   662,   663,  -807,   552,   503,
     671,   649,  -807,    78,   -69,     8,   673,   674,   -82,   -73,
    2629,  2629,  -807,   677,  1452,  1452,   693,   693,  -807,  1452,
    2221,   -43,   542,  1452,   518,  1452,  1452,   808,  1452,  1452,
    1452,  1452,  1452,  1452,  1452,  1452,  1452,  1452,   493,   494,
     495,  1581,  -807,  1452,  1452,  1452,  1452,  1452,    34,   516,
     406,  1452,   594,  1452,  1452,  1452,  1452,  1452,  1452,  1452,
    1452,  1452,  1452,   704,  -807,     8,  1452,   706,   -36,   519,
     125,   722,     8,  -807,  -807,  -807,   -25,  -807,     8,   622,
     609,  -807,   744,   745,   746,   747,   748,   750,   753,  -807,
    -807,   567,   567,   567,   567,   567,  -807,   567,  -807,   568,
     567,   567,   567,   717,  -807,   717,  -807,   567,   567,   567,
     571,   717,   567,   717,  -807,  -807,  -807,  -807,   592,   593,
    -807,    21,   596,   668,   785,   787,    95,  -807,  1452,   684,
       8,   -91,   160,  -807,   788,   802,   645,   788,   129,  -807,
     918,  -807,   616,  2629,  2263,   169,  -807,  1452,  1452,   618,
     456,  -807,  -807,  -807,  1643,   840,  1136,  1349,   619,  1674,
    1699,  1720,  1755,  1776,  1797,  1825,  1848,  1372,  1468,  1499,
    -807,  -807,  -807,  -807,  2649,  2301,   565,  2667,  2667,  -807,
      36,  -807,   542,  1452,  1452,   637,  1452,  2587,   638,   639,
     640,   948,   773,   335,   794,   463,   402,   402,   801,   801,
     801,   801,  -807,  -807,   -91,  -807,    79,   727,   730,   731,
    -807,  -807,  -807,    -1,    81,   305,   609,   609,   733,   719,
       8,  -807,   735,  -807,   -23,  -807,  -807,  -807,   698,  -807,
     837,  -807,  -807,  -807,  -807,  -807,  -807,   845,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,   845,  -807,  -807,
    -807,   846,   847,   736,   660,  1452,   852,   858,   669,   743,
    -807,  -807,   870,   460,  -807,   395,  2629,   848,   777,   -91,
    -807,  -807,   869,   -80,  -807,   133,   701,   -80,   701,   772,
    1452,  -807,  1452,  -807,  1452,  2477,  2327,  -807,  1452,  1452,
    -807,  1452,  2427,   791,   791,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  1452,  1452,  1452,  -807,  -807,  1452,
     707,  2667,  2667,   542,  2608,  1452,   542,   542,   542,   708,
     811,   -36,   809,   809,   809,  1452,   899,   900,   684,  -807,
    -807,     8,  1452,   -54,     8,   714,   800,   830,   759,   947,
     146,    63,   332,    63,    63,  -807,   205,    63,    63,    63,
     332,   332,    63,    63,    63,   212,   332,    63,   332,   767,
     768,   907,  1452,  2629,  -807,   232,   771,   852,   959,   -61,
     960,   774,   863,   214,   779,   780,   866,   782,   246,  -807,
     971,   542,   972,  1452,  -807,  -807,  1028,   871,   994,  -807,
    -807,   996,  1168,   -78,  -807,   -78,  -807,  -807,  2629,  2504,
    -807,  1452,  1560,   358,  1873,  1452,  1452,   810,   814,  1894,
    1524,  1915,   815,  -807,  1452,   816,  1452,   709,   817,   838,
     849,  -807,   986,   908,  -807,   933,   851,   853,   854,  2629,
    1018,     0,   777,  -807,  2629,  1452,   857,  -807,  -807,   -54,
    1452,   859,   860,  1036,  -807,  -807,  1037,  -807,  -807,   912,
    1048,  -807,  1050,  -807,  -807,  -807,   865,  1950,  -807,  1053,
     852,   248,   867,   460,  -807,    75,  1452,   868,   872,   873,
    1056,  1056,   874,  1036,   111,   460,  2320,  -807,    27,   875,
    -807,   856,  -807,  2629,   913,  1040,  -807,  -807,  2629,   272,
    -807,  -807,  -807,  -807,  2629,  1452,  -807,  -807,  1452,  -807,
    1971,  2242,  -807,  -807,  -807,  1452,  -807,  -807,   877,  -807,
     709,  -807,  -807,  -807,  1452,  1452,   684,  -807,  1058,  1058,
    1058,  1452,  1452,  1066,  -807,  2629,  1056,  -807,  1999,  1067,
    1068,  -807,   310,   881,  1069,  -807,   332,  -807,   332,   332,
    1452,  -807,  -807,   319,  -807,   852,   323,   884,   970,   973,
     887,  2022,  1067,  1056,  1056,  -807,   327,   337,  1068,   339,
    -807,  -807,  -807,  -807,  -807,  -807,   972,  1452,  1452,   788,
    1239,  -807,  1264,   889,  2047,  2068,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  2089,  -807,  2525,   -88,
    2629,   777,  -807,   341,   346,   348,  2629,  2629,  1061,   361,
    1064,  -807,   363,  -807,   365,  -807,  1082,  -807,  -807,  2110,
    -807,   368,   117,  1452,   896,   897,  1036,  -807,   372,   376,
     380,  -807,  1086,  -807,   384,  -807,   193,  -807,  2629,  2629,
     898,  -807,  2629,  -807,  2629,  1168,  -807,  -807,  -807,  -807,
     962,  1452,  -807,   991,  -807,  1090,  -807,  -807,  1452,  -807,
     935,   969,  1093,  -807,  1094,  -807,  -807,  -807,  -807,  2145,
    1067,  1068,   412,   975,  -807,  -807,  -807,  -807,   981,   909,
    1099,   914,  1101,    20,  -807,  -807,   998,  1001,   416,  -807,
    2525,  1056,  -807,  -807,  2629,  -807,  1104,  -807,  -807,  -807,
     422,   426,  -807,  1105,  -807,  1106,   -22,  1452,  -807,  -807,
    -807,  -807,  -807,  -807,   919,   922,   923,  -807,  -807,  -807,
    -807,   924,   925,   988,  -807,   946,   429,   949,  1032,  -807,
    2173,   950,   951,   952,  1137,  1141,  1137,  -807,  1148,  1452,
    -807,  -807,  -807,  -807,  -807,  -807,   431,   977,   439,   978,
    2196,  -807,  1165,  1137,  -807,  -807,  -807,    68,  -807,   445,
    1051,  1019,    49,  -807,  -807,   136,   183,  1051,  -807,  -807,
       3,  -807,  -807,   137,  -807,  -807,  -807,  -807
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -807,  1121,   -49,  -396,  -807,  -807,  -807,  -807,   725,  1000,
    -807,  -123,  -268,  -807,  -807,  -716,  -807,  -807,  -482,  -807,
     458,  -571,  -807,  -623,  -807,  -807,   955,  -134,  -116,   956,
    -231,   757,  -807,  -807,    29,  -807,  -807,  -807,   584,   710,
     155,   -39,  -807,  -807,  -807,  1120,   902,  -807,  -807,  -510,
    -807,  -807,  -807,  -807,  -807,  -370,   297,  1145,  1021,  -807,
     754,  -807,   400,  -296,  -807,  -807,  -807,  -807,  -807,   158,
    -807,  -807,  -807,  -807,   573,   582,  -690,  -641,  -806,  -679,
    -600,  -807,  -807,   401,    61,   100,  -398,   583,   818,  -527,
    -807,  -807,  -807,  1134
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -282
static const yytype_int16 yytable[] =
{
     131,   437,   624,   228,   510,   511,   592,   379,   717,  -258,
     516,   137,   518,   137,  -260,   229,  -259,   621,   202,   485,
     682,   684,   230,   430,   859,   860,   861,   862,   784,    61,
     495,   877,   799,   719,   170,   171,   420,   306,   307,   413,
     339,   547,   467,   547,   557,   176,   177,   178,   367,   291,
      85,   180,   340,   165,   223,    53,    45,   294,   146,   309,
     231,   368,   496,   759,   723,   595,   297,   554,   863,   556,
     421,   778,   288,   572,   414,   924,   225,   800,    40,    31,
     898,   201,   202,   376,    43,   147,   911,    50,   290,    55,
     779,   780,   148,   415,    73,   158,   480,   909,   724,   497,
     878,   232,   149,   596,   801,   377,   488,   720,   295,   364,
     703,    54,   548,   232,   650,   915,    66,   295,   223,    86,
     925,   308,   369,   166,   870,    62,   303,    41,   707,   623,
     304,   851,   498,   879,   310,   314,   316,   317,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   493,
       9,   341,   150,   468,   334,   335,   336,   337,   338,   166,
     708,   545,   347,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   429,   439,   822,   131,   668,   850,
     803,    46,   226,   651,   151,   652,   918,   912,   486,   683,
      74,   159,   420,    63,   751,   771,  -258,   709,   138,    67,
     138,  -260,   916,  -259,   227,   864,   865,   866,   420,   926,
      68,   828,    56,   696,   420,   698,   699,   607,   871,   470,
      69,     1,    32,   160,    33,   910,   421,    75,   479,   829,
     710,   608,   481,   921,   917,  -194,    70,    57,     2,   426,
     830,   288,   421,    58,   288,   818,   831,   832,   421,   443,
     444,   173,   174,    60,   927,     3,     4,    76,   445,   446,
     593,    34,   135,   599,   919,   833,   452,   161,    64,     9,
    -194,    65,   136,   487,    72,   920,    83,    81,    88,    89,
      90,    91,    92,    93,   422,   423,    87,    84,   134,     5,
     438,   144,    94,    95,   471,   472,    35,   474,   834,  -280,
      96,    97,   201,   152,    44,  -281,    75,    36,    51,    98,
     835,   922,   628,   155,     6,   836,   372,   232,    37,   629,
       7,   153,   923,    99,   550,   551,   403,   100,     8,     9,
     101,   102,   408,   308,   410,   154,    76,   605,   606,    10,
     103,    77,    11,   156,   104,    78,   157,    12,   837,   161,
     575,    79,   163,   578,   579,   580,   233,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   523,   105,   203,   204,
     205,   206,   207,   208,   209,   167,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   609,
     610,   168,   106,   558,   169,   559,   611,   612,    45,   562,
     563,   234,   564,   613,   612,   489,   490,   107,   175,  -162,
     108,   109,   110,   235,   182,   569,   570,   571,   637,   343,
     344,   236,   345,   618,   619,   346,   577,   183,   218,   219,
     220,   221,   222,   790,   241,   237,   589,   634,   635,   704,
     619,   184,   238,   594,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   731,   732,   130,   203,   204,   205,   206,
     207,   208,   209,   617,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   216,   217,   218,
     219,   220,   221,   222,   641,   503,   504,   643,   507,   508,
     509,   765,   766,   648,   512,   513,   514,   530,   243,   517,
     770,   619,   654,   531,   772,   635,   660,   661,   781,   782,
     185,    88,    89,    90,    91,    92,    93,   670,   783,   782,
     785,   766,   804,   805,   186,    94,    95,   806,   805,   807,
     805,   187,   448,    96,   188,   532,   685,   533,   244,   657,
     658,   688,   809,   782,   811,   812,   813,   814,   534,   817,
     619,   189,   311,   823,   812,   535,    99,   824,   782,   190,
     100,   825,   782,   101,   102,   827,   814,   711,   206,   207,
     208,   209,   536,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   245,    88,    89,    90,
      91,    92,    93,   852,   766,   191,   734,   869,   732,   735,
     192,    94,    95,   873,   812,   537,   746,   874,   814,    96,
     887,   888,   901,   902,   193,   748,   750,   312,   348,   349,
     904,   902,   756,   757,   194,   106,   913,   902,   587,   588,
     754,   755,    99,   195,   196,   197,   100,   198,   449,   101,
     102,   769,   199,   392,   393,   394,   395,   200,   396,   246,
     247,   398,   399,   400,   248,   282,   283,   313,   404,   405,
     406,   284,   285,   409,   286,   287,   292,   293,   788,   789,
     299,   792,     9,   794,   330,   331,   332,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   342,   363,   130,   366,
     371,   106,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   819,   373,   380,   381,   350,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
      88,    89,    90,    91,    92,    93,   648,   383,   384,   385,
     386,   387,   840,   388,    94,    95,   389,   390,   397,   844,
     401,   407,    96,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   411,   412,   351,    99,   416,   417,   418,   100,
     419,   432,   101,   102,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   427,   434,   436,   441,   880,   447,
     455,    88,    89,    90,    91,    92,    93,   215,   216,   217,
     218,   219,   220,   221,   222,    94,    95,   473,   476,   477,
     478,   222,   482,    96,   318,   483,   484,   491,   492,   494,
     900,   499,   500,    88,    89,    90,    91,    92,    93,   505,
     522,   519,   520,   521,   106,   524,    99,    94,    95,   527,
     100,   526,   528,   101,   102,    96,   203,   204,   205,   206,
     207,   208,   209,   529,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   543,    99,   546,
     542,   552,   100,   547,   566,   101,   102,   585,   573,   581,
     582,   179,   590,   591,   600,   601,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   106,   451,   130,   203,   204,
     205,   206,   207,   208,   209,   602,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   603,
     604,    88,    89,    90,    91,    92,    93,   106,   614,   615,
     616,   620,   622,   625,   626,    94,    95,   727,   627,   630,
     631,   632,   633,    96,   636,   638,   644,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    99,   645,   130,   646,
     100,   662,   675,   101,   102,   663,   667,   669,   671,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   674,   672,
     130,    88,    89,    90,    91,    92,    93,   677,   681,   691,
     673,   678,   693,   679,   680,    94,    95,   686,   728,   689,
     690,   694,   695,    96,   697,   700,   702,   705,   712,   715,
     730,   752,   713,   714,   718,   106,   729,   726,   747,   758,
     761,   763,   767,   768,   773,   774,    99,   776,   775,   795,
     100,   808,   810,   101,   102,   815,   820,   821,     9,   826,
     548,   839,   841,   843,   845,   846,   847,   848,   854,   855,
     642,   853,   856,   867,   857,   858,   868,   872,   875,   881,
     440,   876,   882,   883,   885,   884,   782,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   886,   890,   130,   889,
     895,   892,   893,   894,   897,   106,   203,   204,   205,   206,
     207,   208,   209,   899,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   903,   908,   905,
     912,    88,    89,    90,    91,    92,    93,   145,   914,   568,
     305,   365,   541,   687,   787,    94,    95,   164,   375,    82,
     298,   584,   555,    96,   431,   838,   706,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    99,   721,   130,   722,
     100,   172,     0,   101,   102,   515,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     647,     0,    88,    89,    90,    91,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
       0,     0,     0,     0,    96,     0,     0,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,   106,     0,    99,     0,    96,
       0,   100,     0,     0,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   791,    99,     0,     0,     0,   100,     0,     0,   101,
     102,     0,     0,     0,     0,     0,     0,     0,   453,     0,
       0,     0,     0,     0,     0,     0,   793,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   106,     0,   130,   203,
     204,   205,   206,   207,   208,   209,     0,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
       0,   106,   203,   204,   205,   206,   207,   208,   209,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     0,     0,     0,     0,     0,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,     0,     0,   130,
       0,     0,     0,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,     0,     0,   130,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95,     0,     0,     0,     0,     0,     0,    96,   203,   204,
     205,   206,   207,   208,   209,     0,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,     0,
      99,     0,     0,     0,   100,     0,     0,   101,   102,   203,
     204,   205,   206,   207,   208,   209,     0,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,   203,   204,   205,   206,   207,   208,
     209,   454,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   464,     0,     0,     0,     0,   106,
     203,   204,   205,   206,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
       0,     0,   130,     0,     0,     0,     0,     0,   655,     0,
       0,     0,     0,   203,   204,   205,   206,   207,   208,   209,
     465,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   203,   204,   205,   206,   207,   208,
     209,   466,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,   203,
     204,   205,   206,   207,   208,   209,   665,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     203,   204,   205,   206,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   656,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,   204,   205,   206,   207,
     208,   209,   333,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   203,   204,   205,   206,
     207,   208,   209,     0,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   203,   204,   205,
     206,   207,   208,   209,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,     0,     0,   450,   203,   204,   205,   206,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,     0,   203,   204,
     205,   206,   207,   208,   209,   456,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,   203,   204,   205,   206,   207,   208,   209,
     457,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   203,   204,   205,   206,   207,   208,
     209,   458,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   203,   204,   205,   206,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   459,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,   207,   208,   209,   460,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,   461,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,   207,   208,   209,   462,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,   203,   204,   205,   206,   207,   208,   209,   463,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     0,     0,     0,     0,   203,   204,   205,
     206,   207,   208,   209,   659,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   203,   204,
     205,   206,   207,   208,   209,   664,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   203,
     204,   205,   206,   207,   208,   209,   666,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     203,   204,   205,   206,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   701,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,   204,   205,   206,   207,
     208,   209,   736,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,     0,     0,     0,
       0,     0,     0,   203,   204,   205,   206,   207,   208,   209,
     760,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,   203,   204,   205,   206,
     207,   208,   209,   777,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     0,     0,     0,
       0,   203,   204,   205,   206,   207,   208,   209,   796,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   203,   204,   205,   206,   207,   208,   209,   797,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   203,   204,   205,   206,   207,   208,   209,
     798,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,     0,     0,
       0,   816,     0,     0,     0,   737,   738,     0,     0,     0,
     739,     0,   740,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   741,   742,     0,   743,   849,   203,   204,   205,
     206,   207,   208,   209,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
     249,   250,     0,   251,   891,   252,   253,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   254,     0,     0,
       0,     0,     0,     0,     0,   179,     0,   906,     0,     0,
       0,     0,     0,   255,   256,   257,   258,     0,     0,   259,
       0,     0,     0,   260,     0,     0,     0,     0,   744,   745,
       0,   442,     0,     0,     0,   261,     0,     0,     0,     0,
       0,     0,   262,     0,     0,     0,   263,     0,     0,     0,
       0,     0,   264,   265,   266,   267,     0,   203,   204,   205,
     206,   207,   208,   209,   268,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   269,   270,
       0,   271,   272,     0,     0,   273,   274,     0,     0,     0,
       0,   275,   276,     0,     0,   561,   277,     0,     0,     0,
     278,     0,   279,     0,     0,     0,   280,   203,   204,   205,
     206,   207,   208,   209,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,     0,   565,   203,   204,   205,   206,   207,   208,
     209,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   203,   204,   205,   206,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   202,   560,     0,     0,
       0,     0,   723,   203,   204,   205,   206,   207,   208,   209,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   653,     0,     0,     0,     0,     0,
       0,     0,   223,     0,     0,     0,   724,   203,   204,   205,
     206,   207,   208,   209,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   203,   204,
     205,   206,   207,   208,   209,   475,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   203,
     204,   205,   206,   207,   208,   209,   576,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     204,   205,   206,   207,   208,   209,     0,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
    -282,  -282,  -282,  -282,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222
};

static const yytype_int16 yycheck[] =
{
      49,   297,   529,   137,   402,   403,   488,   238,   631,     3,
     408,     3,   410,     3,     3,   138,     3,   527,     3,    20,
      20,   592,   138,   291,     4,     5,     6,     7,   718,     3,
      53,    53,   748,   633,    83,    84,    97,    80,    81,    18,
       6,   121,     6,   121,   440,    94,    95,    96,    84,   165,
       3,   100,    18,    86,    39,     3,     8,   139,    33,   182,
     139,    97,    85,   686,    37,   119,   139,   437,    48,   439,
     131,   712,   163,   469,    53,    72,    86,   165,    98,   147,
     886,   130,     3,   108,   147,    60,    18,   147,   157,     0,
     713,   714,    67,    72,     3,     3,   364,   903,    71,   122,
     122,   192,    77,   157,   192,   130,   374,   634,   190,   225,
     620,    59,   192,   192,   192,    66,     3,   190,    39,    72,
     117,   164,   158,   192,   840,    99,   175,   147,    53,   190,
     179,   821,   155,   155,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   380,
     140,   117,   127,   117,   203,   204,   205,   206,   207,   192,
      85,   429,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   290,   298,   776,   226,   574,   820,
     751,   133,   192,   553,   159,   555,    50,   119,   189,   189,
      99,    99,    97,    35,   676,   705,   190,   122,   190,    86,
     190,   190,   153,   190,   189,   185,   186,   187,    97,    72,
      97,    18,   188,   611,    97,   613,   614,   154,   841,   342,
     107,    32,    59,    65,    61,   904,   131,    62,   351,    36,
     155,   168,   366,    50,   913,   157,   123,     3,    49,   288,
      47,   163,   131,    99,   163,   772,    53,    54,   131,    80,
      81,   189,   190,     3,   117,    66,    67,    92,   307,   308,
     491,    98,    97,   494,   128,    72,   315,   189,    98,   140,
     192,   147,   107,   192,     3,   139,     9,     3,     3,     4,
       5,     6,     7,     8,   189,   190,   192,    20,     3,   100,
     161,     3,    17,    18,   343,   344,   133,   346,   105,   188,
      25,    26,   351,   169,     7,   188,    62,   144,    11,    34,
     117,   128,    98,   119,   125,   122,   191,   192,   155,   105,
     131,     3,   139,    48,   191,   192,   265,    52,   139,   140,
      55,    56,   271,   164,   273,    39,    92,   191,   192,   150,
      65,    97,   153,   169,    69,   101,     3,   158,   155,   189,
     473,   107,     3,   476,   477,   478,    51,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   415,    92,    10,    11,
      12,    13,    14,    15,    16,   169,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    57,
      58,     3,   117,   442,     3,   444,   191,   192,     8,   448,
     449,    96,   451,   191,   192,   376,   377,   132,     9,   104,
     135,   136,   137,   108,   190,   464,   465,   466,   541,    13,
      14,   116,    16,   191,   192,    19,   475,   190,    26,    27,
      28,    29,    30,   729,    39,   130,   485,   191,   192,   191,
     192,   190,   137,   492,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   191,   192,   190,    10,    11,    12,    13,
      14,    15,    16,   522,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    24,    25,    26,
      27,    28,    29,    30,   543,   395,   396,   546,   398,   399,
     400,   191,   192,   552,   404,   405,   406,    47,    47,   409,
     191,   192,   561,    53,   191,   192,   565,   566,   191,   192,
     190,     3,     4,     5,     6,     7,     8,   576,   191,   192,
     191,   192,   191,   192,   190,    17,    18,   191,   192,   191,
     192,   190,    86,    25,   190,    85,   595,    87,    47,   191,
     192,   600,   191,   192,   191,   192,   191,   192,    98,   191,
     192,   190,    44,   191,   192,   105,    48,   191,   192,   190,
      52,   191,   192,    55,    56,   191,   192,   626,    13,    14,
      15,    16,   122,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    47,     3,     4,     5,
       6,     7,     8,   191,   192,   190,   655,   191,   192,   658,
     190,    17,    18,   191,   192,   155,   665,   191,   192,    25,
     191,   192,   191,   192,   190,   674,   675,   109,    34,    35,
     191,   192,   681,   682,   190,   117,   191,   192,   483,   484,
     679,   680,    48,   190,   190,   190,    52,   190,   192,    55,
      56,   700,   190,   252,   253,   254,   255,   190,   257,    47,
      47,   260,   261,   262,    47,     3,     3,   149,   267,   268,
     269,   119,   169,   272,     3,    26,     3,     3,   727,   728,
       3,   730,   140,   732,   191,   191,   191,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   190,     3,   190,     3,
     191,   117,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   773,     3,   104,   118,   134,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       3,     4,     5,     6,     7,     8,   795,     3,     3,     3,
       3,     3,   801,     3,    17,    18,     3,   190,   190,   808,
      43,   190,    25,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   190,   190,   190,    48,   190,   119,     3,    52,
       3,     3,    55,    56,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   120,     3,   161,   191,   857,   191,
     191,     3,     4,     5,     6,     7,     8,    23,    24,    25,
      26,    27,    28,    29,    30,    17,    18,   190,   190,   190,
     190,    30,   105,    25,    26,   105,   105,   104,   119,   104,
     889,   143,     5,     3,     4,     5,     6,     7,     8,     4,
     190,     5,     5,   117,   117,     3,    48,    17,    18,   190,
      52,     3,   119,    55,    56,    25,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   110,    48,    20,
      42,   190,    52,   121,   103,    55,    56,    88,   191,   191,
      89,   164,     3,     3,   190,   105,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   117,    86,   190,    10,    11,
      12,    13,    14,    15,    16,   105,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   190,
       3,     3,     4,     5,     6,     7,     8,   117,   191,   191,
      53,   190,     3,     3,   190,    17,    18,   111,   105,   190,
     190,   105,   190,    25,     3,     3,   105,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    48,     3,   190,     3,
      52,   191,    94,    55,    56,   191,   191,   191,   191,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    42,   191,
     190,     3,     4,     5,     6,     7,     8,   104,    20,     3,
     191,   190,     5,   190,   190,    17,    18,   190,   192,   190,
     190,   139,     4,    25,     4,   190,     3,   190,   190,     3,
      20,     3,   190,   190,   190,   117,   153,   192,   191,     3,
       3,     3,   191,     4,   190,   105,    48,   190,   105,   190,
      52,    20,    18,    55,    56,     3,   190,   190,   140,     3,
     192,   129,   101,     3,   159,   126,     3,     3,   117,   190,
      72,   126,     3,   105,   190,     4,   105,     3,     3,   190,
     192,     5,   190,   190,   126,   190,   192,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   190,   105,   190,   190,
       3,   191,   191,   191,     3,   117,    10,    11,    12,    13,
      14,    15,    16,     5,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   190,     3,   191,
     119,     3,     4,     5,     6,     7,     8,    56,   159,   454,
     180,   226,   425,   599,   726,    17,    18,    67,   232,    44,
     169,   481,   438,    25,   292,   795,   623,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    48,   635,   190,   636,
      52,    87,    -1,    55,    56,   407,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,   117,    -1,    48,    -1,    25,
      -1,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    48,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   117,    -1,   190,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,   117,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,    -1,    -1,   190,
      -1,    -1,    -1,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,    -1,   190,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      48,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   192,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,   117,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     192,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   192,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   192,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   191,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,   191,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   191,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     191,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   191,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   191,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   191,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   191,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   191,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   191,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   191,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   191,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   191,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     191,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   191,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   191,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   191,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     191,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   191,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      68,    -1,    70,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    90,    91,    -1,    93,   191,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      40,    41,    -1,    43,   191,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,    -1,   191,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,    79,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,   166,   167,
      -1,   148,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,   112,   113,   114,   115,    -1,    10,    11,    12,
      13,    14,    15,    16,   124,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   138,   139,
      -1,   141,   142,    -1,    -1,   145,   146,    -1,    -1,    -1,
      -1,   151,   152,    -1,    -1,   148,   156,    -1,    -1,    -1,
     160,    -1,   162,    -1,    -1,    -1,   166,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    86,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     3,    80,    -1,    -1,
      -1,    -1,    37,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    71,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    38,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    38,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    49,    66,    67,   100,   125,   131,   139,   140,
     150,   153,   158,   194,   203,   204,   236,   240,   241,   243,
     244,   245,   246,   247,   257,   258,   261,   263,   264,   265,
     284,   147,    59,    61,    98,   133,   144,   155,   266,   237,
      98,   147,   249,   147,   249,     8,   133,   285,   286,   217,
     147,   249,   259,     3,    59,     0,   188,     3,    99,   262,
       3,     3,    99,   262,    98,   147,     3,    86,    97,   107,
     123,   238,     3,     3,    99,    62,    92,    97,   101,   107,
     250,     3,   250,     9,    20,     3,    72,   192,     3,     4,
       5,     6,     7,     8,    17,    18,    25,    26,    34,    48,
      52,    55,    56,    65,    69,    92,   117,   132,   135,   136,
     137,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     190,   195,   218,   219,     3,    97,   107,     3,   190,   221,
     222,   223,   225,   235,     3,   194,    33,    60,    67,    77,
     127,   159,   169,     3,    39,   119,   169,     3,     3,    99,
     262,   189,   239,     3,   238,    86,   192,   169,     3,     3,
     195,   195,   286,   189,   190,     9,   195,   195,   195,   164,
     195,   202,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   195,     3,    10,    11,    12,    13,    14,    15,    16,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    39,   220,    86,   192,   189,   220,   204,
     221,   139,   192,    51,    96,   108,   116,   130,   137,   226,
     228,    39,   224,    47,    47,    47,    47,    47,    47,    40,
      41,    43,    45,    46,    57,    73,    74,    75,    76,    79,
      83,    95,   102,   106,   112,   113,   114,   115,   124,   138,
     139,   141,   142,   145,   146,   151,   152,   156,   160,   162,
     166,   280,     3,     3,   119,   169,     3,    26,   163,   205,
     157,   221,     3,     3,   139,   190,   251,   139,   251,     3,
     195,   196,   197,   195,   195,   202,    80,    81,   164,   204,
     195,    44,   109,   149,   195,   200,   195,   195,    26,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     191,   191,   191,   191,   195,   195,   195,   195,   195,     6,
      18,   117,   190,    13,    14,    16,    19,   195,    34,    35,
     134,   190,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,     3,   221,   219,     3,    84,    97,   158,
     232,   191,   191,     3,   260,   222,   108,   130,   229,   223,
     104,   118,   227,     3,     3,     3,     3,     3,     3,     3,
     190,   276,   276,   276,   276,   276,   276,   190,   276,   276,
     276,    43,   277,   277,   276,   276,   276,   190,   277,   276,
     277,   190,   190,    18,    53,    72,   190,   119,     3,     3,
      97,   131,   189,   190,   282,   283,   195,   120,   211,   221,
     205,   239,     3,   256,     3,   252,   161,   256,   161,   204,
     192,   191,   148,    80,    81,   195,   195,   191,    86,   192,
     191,    86,   195,   192,   192,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   192,   192,   192,     6,   117,   198,
     204,   195,   195,   190,   195,    38,   190,   190,   190,   204,
     205,   220,   105,   105,   105,    20,   189,   192,   205,   227,
     227,   104,   119,   223,   104,    53,    85,   122,   155,   143,
       5,   278,   279,   278,   278,     4,   281,   278,   278,   278,
     279,   279,   278,   278,   278,   281,   279,   278,   279,     5,
       5,   117,   190,   195,     3,   242,     3,   190,   119,     3,
      47,    53,    85,    87,    98,   105,   122,   155,   267,   268,
     274,   224,    42,   110,   214,   205,    20,   121,   192,   248,
     191,   192,   190,   253,   248,   253,   248,   196,   195,   195,
      80,   148,   195,   195,   195,    86,   103,   201,   201,   195,
     195,   195,   196,   191,   199,   204,    38,   195,   204,   204,
     204,   191,    89,   206,   232,    88,   233,   233,   233,   195,
       3,     3,   211,   223,   195,   119,   157,   230,   231,   223,
     190,   105,   105,   190,     3,   191,   192,   154,   168,    57,
      58,   191,   192,   191,   191,   191,    53,   195,   191,   192,
     190,   242,     3,   190,   282,     3,   190,   105,    98,   105,
     190,   190,   105,   190,   191,   192,     3,   204,     3,   212,
     213,   195,    72,   195,   105,     3,     3,    72,   195,   255,
     192,   248,   248,    80,   195,    88,   191,   191,   192,   191,
     195,   195,   191,   191,   191,   192,   191,   191,   196,   191,
     195,   191,   191,   191,    42,    94,   210,   104,   190,   190,
     190,    20,    20,   189,   214,   195,   190,   231,   195,   190,
     190,     3,   273,     5,   139,     4,   279,     4,   279,   279,
     190,   191,     3,   242,   191,   190,   267,    53,    85,   122,
     155,   195,   190,   190,   190,     3,   216,   216,   190,   273,
     282,   268,   280,    37,    71,   208,   192,   111,   192,   153,
      20,   191,   192,   254,   195,   195,   191,    63,    64,    68,
      70,    90,    91,    93,   166,   167,   195,   191,   195,   207,
     195,   211,     3,   234,   234,   234,   195,   195,     3,   216,
     191,     3,   270,     3,   269,   191,   192,   191,     4,   195,
     191,   242,   191,   190,   105,   105,   190,   191,   270,   216,
     216,   191,   192,   191,   269,   191,   275,   213,   195,   195,
     256,    72,   195,    72,   195,   190,   191,   191,   191,   208,
     165,   192,   209,   214,   191,   192,   191,   191,    20,   191,
      18,   191,   192,   191,   192,     3,   191,   191,   282,   195,
     190,   190,   273,   191,   191,   191,     3,   191,    18,    36,
      47,    53,    54,    72,   105,   117,   122,   155,   255,   129,
     195,   101,   215,     3,   195,   159,   126,     3,     3,   191,
     270,   269,   191,   126,   117,   190,     3,   190,     4,     4,
       5,     6,     7,    48,   185,   186,   187,   105,   105,   191,
     208,   216,     3,   191,   191,     3,     5,    53,   122,   155,
     195,   190,   190,   190,   190,   126,   190,   191,   192,   190,
     105,   191,   191,   191,   191,     3,   271,     3,   271,     5,
     195,   191,   192,   190,   191,   191,   191,   272,     3,   271,
     272,    18,   119,   191,   159,    66,   153,   272,    50,   128,
     139,    50,   128,   139,    72,   117,    72,   117
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
#line 286 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 292 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 293 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 295 "parser/evoparser.y"
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
#line 313 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 321 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 329 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 335 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 342 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 343 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 344 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 345 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 346 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 347 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 348 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 349 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 350 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 351 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 352 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 353 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 354 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 355 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 356 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 357 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 358 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 360 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 365 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 366 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 367 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 368 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 371 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 372 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 373 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 374 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 375 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 378 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 379 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 382 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_inListCount < MAX_IN_LIST) g_inListExprs[g_inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 383 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_inListCount; _i>0; _i--) g_inListExprs[_i]=g_inListExprs[_i-1]; g_inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_inListCount++; } ;}
    break;

  case 43:
#line 386 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 390 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 46:
#line 390 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 47:
#line 391 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 48:
#line 391 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 49:
#line 392 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 393 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 394 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 398 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 402 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 403 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 404 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 405 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 406 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 407 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 409 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 410 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 411 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 412 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 413 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 414 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 415 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 416 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 417 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 418 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 419 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 420 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 421 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 422 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 429 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 436 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 445 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 76:
#line 446 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 77:
#line 447 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 78:
#line 450 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 79:
#line 451 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 80:
#line 454 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 81:
#line 455 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 82:
#line 456 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 83:
#line 457 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 84:
#line 458 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 85:
#line 459 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 86:
#line 460 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 87:
#line 461 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 88:
#line 462 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 89:
#line 466 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_caseWhenCount, NULL); ;}
    break;

  case 90:
#line 468 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 91:
#line 470 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, NULL); ;}
    break;

  case 92:
#line 472 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 93:
#line 476 "parser/evoparser.y"
    {
        g_caseWhenCount = 0;
        g_caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 94:
#line 484 "parser/evoparser.y"
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
#line 494 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 96:
#line 495 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 97:
#line 498 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 98:
#line 499 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 99:
#line 503 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 100:
#line 511 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 519 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 530 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 103:
#line 539 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_selectDistinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 104:
#line 544 "parser/evoparser.y"
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
#line 555 "parser/evoparser.y"
    { emit("WHERE"); g_whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 108:
#line 557 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 109:
#line 560 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_groupByCount = 0;
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 110:
#line 567 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 111:
#line 575 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 112:
#line 576 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 577 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 114:
#line 580 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 115:
#line 581 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 117:
#line 585 "parser/evoparser.y"
    { emit("HAVING"); g_havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 122:
#line 597 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 123:
#line 604 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 124:
#line 605 "parser/evoparser.y"
    { emit("LIMIT 1"); g_limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 125:
#line 606 "parser/evoparser.y"
    { emit("LIMIT 2"); g_offsetExpr = (yyvsp[(2) - (4)].exprval); g_limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 126:
#line 607 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_limitExpr = (yyvsp[(2) - (4)].exprval); g_offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 128:
#line 611 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 129:
#line 614 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 130:
#line 615 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 131:
#line 618 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 132:
#line 619 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 133:
#line 620 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 134:
#line 621 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 135:
#line 622 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 136:
#line 623 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 137:
#line 624 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 138:
#line 625 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 139:
#line 626 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 140:
#line 629 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 141:
#line 630 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 142:
#line 632 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 143:
#line 640 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 144:
#line 645 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 145:
#line 646 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 146:
#line 647 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 147:
#line 650 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 148:
#line 651 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 151:
#line 660 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 152:
#line 665 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 153:
#line 666 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 154:
#line 667 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 157:
#line 676 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 158:
#line 678 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 159:
#line 680 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 160:
#line 682 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 161:
#line 684 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 162:
#line 687 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 163:
#line 688 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 164:
#line 689 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 165:
#line 692 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 166:
#line 693 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 167:
#line 696 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 168:
#line 697 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 169:
#line 700 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 170:
#line 701 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 171:
#line 702 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 174:
#line 709 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 175:
#line 710 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 176:
#line 715 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 177:
#line 717 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 178:
#line 719 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 180:
#line 723 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 181:
#line 724 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 182:
#line 727 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 183:
#line 728 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 184:
#line 731 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 185:
#line 736 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 186:
#line 744 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 187:
#line 751 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 188:
#line 752 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 189:
#line 753 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 190:
#line 754 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 191:
#line 758 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 192:
#line 761 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 193:
#line 762 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 196:
#line 767 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 197:
#line 772 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 198:
#line 779 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_dropIfExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 199:
#line 786 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_dropIfExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 200:
#line 796 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 201:
#line 803 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 202:
#line 810 "parser/evoparser.y"
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
#line 820 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 204:
#line 828 "parser/evoparser.y"
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
#line 840 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 206:
#line 845 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 207:
#line 853 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 208:
#line 860 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 209:
#line 869 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 210:
#line 876 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 211:
#line 885 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 212:
#line 892 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 213:
#line 900 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 214:
#line 904 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 215:
#line 910 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 216:
#line 916 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 217:
#line 923 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 218:
#line 929 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 219:
#line 936 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 220:
#line 942 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 221:
#line 948 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 222:
#line 954 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 223:
#line 960 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 224:
#line 966 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 225:
#line 974 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 226:
#line 981 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 228:
#line 989 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 229:
#line 992 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 230:
#line 993 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 231:
#line 994 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 232:
#line 995 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 233:
#line 996 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 237:
#line 1003 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 238:
#line 1007 "parser/evoparser.y"
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

  case 239:
#line 1017 "parser/evoparser.y"
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

  case 240:
#line 1029 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 241:
#line 1030 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 242:
#line 1030 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 243:
#line 1033 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 244:
#line 1034 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 245:
#line 1035 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 246:
#line 1036 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 247:
#line 1040 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 248:
#line 1043 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 249:
#line 1044 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 250:
#line 1045 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 251:
#line 1046 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 252:
#line 1052 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 253:
#line 1058 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 254:
#line 1063 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 255:
#line 1068 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 256:
#line 1073 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 257:
#line 1080 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 258:
#line 1085 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 259:
#line 1086 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 260:
#line 1087 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 261:
#line 1092 "parser/evoparser.y"
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

  case 262:
#line 1103 "parser/evoparser.y"
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

  case 263:
#line 1114 "parser/evoparser.y"
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

  case 264:
#line 1125 "parser/evoparser.y"
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

  case 265:
#line 1138 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 266:
#line 1142 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 267:
#line 1143 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 268:
#line 1146 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 269:
#line 1147 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 270:
#line 1151 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 271:
#line 1156 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 272:
#line 1158 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 273:
#line 1160 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 274:
#line 1162 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 275:
#line 1164 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 276:
#line 1168 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 277:
#line 1172 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 278:
#line 1173 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 279:
#line 1178 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 280:
#line 1186 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        g_isTemporary = (yyvsp[(2) - (8)].intval);
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 281:
#line 1195 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); g_isTemporary = (yyvsp[(2) - (10)].intval); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 282:
#line 1200 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 283:
#line 1204 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 284:
#line 1209 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 285:
#line 1213 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 286:
#line 1216 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 287:
#line 1217 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 288:
#line 1220 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 289:
#line 1221 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 290:
#line 1224 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 291:
#line 1225 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 292:
#line 1226 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 293:
#line 1227 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 294:
#line 1228 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 295:
#line 1229 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 296:
#line 1230 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 297:
#line 1231 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 298:
#line 1233 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 299:
#line 1235 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 300:
#line 1237 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 301:
#line 1239 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 302:
#line 1242 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 303:
#line 1243 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 304:
#line 1246 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 305:
#line 1247 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 306:
#line 1250 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 307:
#line 1251 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 309:
#line 1255 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 310:
#line 1256 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 311:
#line 1257 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 312:
#line 1258 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 313:
#line 1259 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 314:
#line 1260 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 315:
#line 1261 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 316:
#line 1262 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 317:
#line 1265 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 318:
#line 1266 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 319:
#line 1269 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 320:
#line 1271 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 321:
#line 1279 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 322:
#line 1280 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 324:
#line 1282 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 325:
#line 1283 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 326:
#line 1284 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 327:
#line 1285 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 328:
#line 1286 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 329:
#line 1287 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 330:
#line 1288 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 331:
#line 1289 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 332:
#line 1290 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 333:
#line 1291 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 334:
#line 1292 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 335:
#line 1293 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 336:
#line 1294 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 337:
#line 1295 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 338:
#line 1296 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 339:
#line 1297 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 340:
#line 1298 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 341:
#line 1299 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 342:
#line 1300 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 343:
#line 1301 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 344:
#line 1304 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 345:
#line 1305 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 346:
#line 1306 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 347:
#line 1309 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 348:
#line 1310 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 349:
#line 1313 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 350:
#line 1314 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 351:
#line 1315 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 353:
#line 1319 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 354:
#line 1320 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 355:
#line 1324 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 356:
#line 1325 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 357:
#line 1326 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 358:
#line 1327 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 359:
#line 1328 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 360:
#line 1329 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 361:
#line 1330 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 362:
#line 1331 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 363:
#line 1332 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 364:
#line 1333 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 365:
#line 1334 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 366:
#line 1335 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 367:
#line 1336 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 368:
#line 1337 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 369:
#line 1338 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 370:
#line 1339 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 371:
#line 1340 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 372:
#line 1341 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 373:
#line 1342 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 374:
#line 1343 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 375:
#line 1344 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 376:
#line 1345 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 377:
#line 1346 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 378:
#line 1347 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 379:
#line 1348 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 380:
#line 1349 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 381:
#line 1350 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 382:
#line 1351 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 383:
#line 1352 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 384:
#line 1353 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 385:
#line 1354 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 386:
#line 1355 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 387:
#line 1358 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 388:
#line 1359 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 389:
#line 1363 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 390:
#line 1366 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 391:
#line 1367 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 392:
#line 1368 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 393:
#line 1372 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 394:
#line 1375 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 395:
#line 1376 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 399:
#line 1380 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 400:
#line 1381 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5097 "parser/evoparser.tab.c"
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


#line 1384 "parser/evoparser.y"

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
