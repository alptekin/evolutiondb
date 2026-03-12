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
#define YYLAST   2669

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  202
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  411
/* YYNRULES -- Number of states.  */
#define YYNSTATES  952

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
    1338,  1352,  1368,  1373,  1380,  1382,  1386,  1388,  1392,  1394,
    1398,  1399,  1404,  1410,  1415,  1421,  1426,  1432,  1437,  1443,
    1448,  1453,  1457,  1461,  1465,  1468,  1472,  1477,  1482,  1484,
    1488,  1489,  1494,  1495,  1499,  1502,  1506,  1510,  1514,  1518,
    1524,  1530,  1536,  1540,  1543,  1551,  1557,  1561,  1564,  1568,
    1571,  1575,  1581,  1586,  1592,  1600,  1601,  1605,  1611,  1612,
    1614,  1615,  1618,  1621,  1622,  1627,  1631,  1634,  1638,  1642,
    1646,  1650,  1654,  1658,  1662,  1666,  1670,  1674,  1676,  1678,
    1680,  1682,  1684,  1688,  1694,  1697,  1702,  1704,  1706,  1708,
    1710,  1714,  1718,  1722,  1726,  1732,  1738,  1740,  1742,  1744,
    1748,  1752,  1753,  1755,  1757,  1759,  1763,  1767,  1770,  1772,
    1776,  1780
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
      -1,     3,    -1,   251,   201,     3,    -1,   252,    -1,    69,
     103,     3,    -1,   253,    -1,   159,   156,     3,    -1,   254,
      -1,   133,   156,     3,    -1,   255,    -1,    32,   156,     3,
      33,    47,     3,    53,   199,   204,   200,    -1,    32,   156,
       3,    33,    47,     3,   164,   199,   282,   200,    -1,    32,
     156,     3,    33,    47,     3,    87,   110,   199,   279,   200,
     134,     3,   199,   280,   200,   281,    -1,    32,   156,     3,
      33,    47,     3,    53,   199,   204,   200,    18,   168,    -1,
      32,   156,     3,    33,    47,     3,    87,   110,   199,   279,
     200,   134,     3,   199,   280,   200,   281,    18,   168,    -1,
      32,   156,     3,    33,    47,     3,   130,   110,   199,   278,
     200,    -1,    32,   156,     3,    69,    47,     3,    -1,    32,
     156,     3,   135,    47,     3,   152,     3,    -1,    32,   156,
       3,    79,    47,     3,    -1,    32,   156,     3,    62,    47,
       3,    -1,    32,   156,     3,   168,    47,     3,    -1,   256,
      -1,   105,   258,   259,     3,   260,   170,   262,   257,    -1,
      -1,   128,   110,   162,   265,    -1,    -1,   258,   112,    -1,
     258,    64,    -1,   258,    95,    -1,   258,   102,    -1,   106,
      -1,    -1,    -1,   199,   261,   200,    -1,     3,    -1,   261,
     201,     3,    -1,   199,   264,   200,    -1,    -1,   262,   201,
     263,   199,   264,   200,    -1,   204,    -1,    74,    -1,   264,
     201,   204,    -1,   264,   201,    74,    -1,   105,   258,   259,
       3,   148,   265,   257,    -1,     3,    20,   204,    -1,     3,
      20,    74,    -1,   265,   201,     3,    20,   204,    -1,   265,
     201,     3,    20,    74,    -1,   266,    -1,   139,   258,   259,
       3,   260,   170,   262,   257,    -1,   139,   258,   259,     3,
     148,   265,   257,    -1,   139,   258,   259,     3,   260,   213,
     257,    -1,   267,    -1,   162,   268,   230,   148,   269,   214,
     220,   223,    -1,    -1,   258,   112,    -1,   258,   102,    -1,
       3,    20,   204,    -1,     3,   198,     3,    20,   204,    -1,
     269,   201,     3,    20,   204,    -1,   269,   201,     3,   198,
       3,    20,   204,    -1,   270,    -1,    49,    59,   271,     3,
      -1,    49,   141,   271,     3,    -1,    -1,   104,   178,    -1,
     272,    -1,    49,    63,     3,    39,   289,    -1,    49,    63,
       3,    39,   289,    74,   204,    -1,    49,    63,     3,    39,
     289,    18,   124,    -1,    49,    63,     3,    39,   289,    53,
     199,   204,   200,    -1,    49,    63,     3,    39,   289,    18,
     124,    53,   199,   204,   200,    -1,   273,    -1,   167,     3,
      -1,   167,    59,     3,    -1,   274,    -1,    49,   275,   156,
     271,     3,   199,   276,   200,    -1,    49,   275,   156,   271,
       3,   198,     3,   199,   276,   200,    -1,    49,   275,   156,
     271,     3,   199,   276,   200,   291,    -1,    49,   275,   156,
     271,     3,   291,    -1,    49,   275,   156,   271,     3,   198,
       3,   199,   276,   200,   291,    -1,    49,   275,   156,   271,
       3,   198,     3,   291,    -1,    -1,   153,    -1,   277,    -1,
     276,   201,   277,    -1,   130,   110,   199,   278,   200,    -1,
      47,     3,   130,   110,   199,   278,   200,    -1,   110,   199,
     225,   200,    -1,   103,   199,   225,   200,    -1,    90,   103,
     199,   225,   200,    -1,    90,   110,   199,   225,   200,    -1,
      53,   199,   204,   200,    -1,    47,     3,    53,   199,   204,
     200,    -1,    87,   110,   199,   279,   200,   134,     3,   199,
     280,   200,   281,    -1,    87,   110,   199,   279,   200,   134,
       3,   198,     3,   199,   280,   200,   281,    -1,    47,     3,
      87,   110,   199,   279,   200,   134,     3,   199,   280,   200,
     281,    -1,    47,     3,    87,   110,   199,   279,   200,   134,
       3,   198,     3,   199,   280,   200,   281,    -1,   164,   199,
     282,   200,    -1,    47,     3,   164,   199,   282,   200,    -1,
       3,    -1,   278,   201,     3,    -1,     3,    -1,   279,   201,
       3,    -1,     3,    -1,   280,   201,     3,    -1,    -1,   281,
     126,    68,    50,    -1,   281,   126,    68,   148,   124,    -1,
     281,   126,    68,   136,    -1,   281,   126,    68,   148,    74,
      -1,   281,   126,   162,    50,    -1,   281,   126,   162,   148,
     124,    -1,   281,   126,   162,   136,    -1,   281,   126,   162,
     148,    74,    -1,   281,   126,    68,   123,    -1,   281,   126,
     162,   123,    -1,   281,   118,    89,    -1,   281,   118,   145,
      -1,   281,   118,   129,    -1,   281,    60,    -1,   281,    18,
      60,    -1,   281,    60,    99,    61,    -1,   281,    60,    99,
      98,    -1,     3,    -1,   282,   201,     3,    -1,    -1,   283,
       3,   289,   284,    -1,    -1,   284,    18,   124,    -1,   284,
     124,    -1,   284,    74,     4,    -1,   284,    74,     5,    -1,
     284,    74,     7,    -1,   284,    74,     6,    -1,   284,    74,
     194,   199,   200,    -1,   284,    74,   195,   199,   200,    -1,
     284,    74,   196,   199,   200,    -1,   284,    74,    48,    -1,
     284,    36,    -1,   284,    36,   199,     5,   201,     5,   200,
      -1,   284,    36,   199,     5,   200,    -1,   284,   164,   110,
      -1,   284,   164,    -1,   284,   130,   110,    -1,   284,   110,
      -1,   284,    54,     4,    -1,   284,    53,   199,   204,   200,
      -1,   284,    47,     3,   164,    -1,   284,    47,     3,   130,
     110,    -1,   284,    47,     3,    53,   199,   204,   200,    -1,
      -1,   199,     5,   200,    -1,   199,     5,   201,     5,   200,
      -1,    -1,    43,    -1,    -1,   287,   163,    -1,   287,   177,
      -1,    -1,   288,    57,   148,     4,    -1,   288,    58,     4,
      -1,    46,   285,    -1,   151,   285,   287,    -1,   147,   285,
     287,    -1,   121,   285,   287,    -1,   107,   285,   287,    -1,
     100,   285,   287,    -1,    45,   285,   287,    -1,   132,   285,
     287,    -1,    75,   285,   287,    -1,    85,   285,   287,    -1,
      77,   285,   287,    -1,    78,    -1,   161,    -1,   155,    -1,
      76,    -1,   175,    -1,    57,   285,   288,    -1,   169,   199,
       5,   200,   288,    -1,    43,   285,    -1,   171,   199,     5,
     200,    -1,   160,    -1,    40,    -1,   120,    -1,   117,    -1,
     150,   286,   288,    -1,   154,   286,   288,    -1,   119,   286,
     288,    -1,   111,   286,   288,    -1,    81,   199,   290,   200,
     288,    -1,   148,   199,   290,   200,   288,    -1,    41,    -1,
     165,    -1,     4,    -1,   290,   201,     4,    -1,   292,   233,
     213,    -1,    -1,   102,    -1,   139,    -1,   293,    -1,   148,
     141,     3,    -1,   148,   141,    74,    -1,   148,   294,    -1,
     295,    -1,   294,   201,   295,    -1,     8,    20,   204,    -1,
       8,     9,   204,    -1
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
     804,   811,   818,   828,   836,   848,   853,   861,   868,   877,
     884,   893,   900,   909,   912,   918,   924,   931,   937,   944,
     950,   956,   962,   968,   974,   982,   989,   997,   998,  1001,
    1002,  1003,  1004,  1005,  1008,  1008,  1011,  1012,  1015,  1025,
    1038,  1039,  1039,  1042,  1043,  1044,  1045,  1048,  1052,  1053,
    1054,  1055,  1061,  1064,  1070,  1075,  1081,  1087,  1094,  1095,
    1096,  1100,  1111,  1122,  1133,  1147,  1151,  1152,  1155,  1156,
    1160,  1164,  1166,  1168,  1170,  1172,  1177,  1181,  1182,  1186,
    1193,  1203,  1207,  1212,  1216,  1221,  1225,  1226,  1229,  1230,
    1233,  1234,  1235,  1236,  1237,  1238,  1239,  1240,  1241,  1243,
    1245,  1247,  1249,  1251,  1255,  1256,  1259,  1260,  1263,  1264,
    1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,
    1277,  1278,  1279,  1280,  1281,  1282,  1283,  1284,  1287,  1288,
    1291,  1291,  1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1317,  1318,
    1319,  1320,  1321,  1322,  1323,  1326,  1327,  1328,  1331,  1332,
    1335,  1336,  1337,  1340,  1341,  1342,  1346,  1347,  1348,  1349,
    1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,  1359,
    1360,  1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,
    1370,  1371,  1372,  1373,  1374,  1375,  1376,  1377,  1380,  1381,
    1384,  1388,  1389,  1390,  1394,  1397,  1398,  1399,  1400,  1400,
    1402,  1403
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
     212,   250,   250,   250,   250,   251,   251,   212,   252,   212,
     253,   212,   254,   212,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   212,   256,   257,   257,   258,
     258,   258,   258,   258,   259,   259,   260,   260,   261,   261,
     262,   263,   262,   264,   264,   264,   264,   256,   265,   265,
     265,   265,   212,   266,   266,   266,   212,   267,   268,   268,
     268,   269,   269,   269,   269,   212,   270,   270,   271,   271,
     212,   272,   272,   272,   272,   272,   212,   273,   273,   212,
     274,   274,   274,   274,   274,   274,   275,   275,   276,   276,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   278,   278,   279,   279,   280,   280,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   282,   282,
     283,   277,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   285,   285,   285,   286,   286,
     287,   287,   287,   288,   288,   288,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   290,   290,
     291,   292,   292,   292,   212,   293,   293,   293,   294,   294,
     295,   295
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
      13,    15,     4,     6,     1,     3,     1,     3,     1,     3,
       0,     4,     5,     4,     5,     4,     5,     4,     5,     4,
       4,     3,     3,     3,     2,     3,     4,     4,     1,     3,
       0,     4,     0,     3,     2,     3,     3,     3,     3,     5,
       5,     5,     3,     2,     7,     5,     3,     2,     3,     2,
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
       0,     0,   286,   190,     0,   229,     0,   229,     0,   131,
       0,   229,     0,     0,     0,   102,   185,   197,   200,   207,
     209,   211,   213,   225,   252,   256,   265,   270,   276,   279,
     404,     0,   268,     0,     0,   268,   287,     0,     0,     0,
       0,     0,   235,     0,   235,     0,     0,   407,   408,     0,
       0,     0,     0,   277,     0,     1,     2,     0,     0,     0,
       0,     0,     0,     0,     0,   268,   194,     0,   189,   187,
     188,     0,   208,   198,     0,   231,   232,   233,   234,   230,
       0,   212,     0,     0,     0,   405,   406,     0,     4,     7,
       8,    10,     9,     6,     0,     0,     0,   142,   132,    99,
       0,   100,   101,   133,   134,   135,    11,   137,   139,   138,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,   103,   140,   210,   233,   230,   146,     0,     0,
     147,   149,   150,   156,   278,     3,     0,     0,     0,     0,
       0,     0,   269,   266,     0,     0,     0,   267,     0,     0,
       0,     0,   192,   105,     0,     0,     0,     0,   236,   236,
     411,   410,   409,     0,    43,     0,    28,    27,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   179,     0,
       0,     0,     0,   164,   163,   167,   171,   168,     0,     0,
     165,   155,     0,     0,     0,     0,     0,     0,     0,   387,
     396,   355,   355,   355,   355,   355,   380,   355,   377,     0,
     355,   355,   355,   358,   389,   358,   388,   355,   355,   355,
       0,   358,   355,   358,   379,   386,   378,   397,     0,     0,
     381,   271,     0,     0,     0,     0,   401,   195,     0,   118,
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
       0,   384,   360,   366,   363,   360,   360,     0,   360,   360,
     360,   359,   363,   363,   360,   360,   360,     0,   363,   360,
     363,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,   403,     0,   330,   283,   156,   106,     0,   123,   105,
     191,   193,     0,   227,   238,     0,     0,   227,     0,   227,
       0,    52,     0,    89,     0,     0,     0,    51,     0,     0,
      63,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    66,    67,    68,     0,     0,     0,    37,    35,     0,
       0,    98,    96,    47,     0,     0,     0,     0,     0,     0,
     107,   179,   181,   181,   181,     0,     0,     0,   118,   169,
     170,     0,     0,   172,     0,     0,     0,     0,     0,     0,
       0,   372,   382,   374,   376,   398,     0,   375,   371,   370,
     393,   392,   369,   373,   368,     0,   390,   367,   391,     0,
       0,   273,     0,   272,   205,     0,     0,     0,     0,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
       0,     0,     0,     0,   186,   196,     0,     0,     0,   247,
     237,     0,     0,   227,   254,   227,   255,    42,    93,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,    39,     0,     0,
       0,    30,     0,   116,   152,     0,     0,     0,     0,   261,
       0,     0,   123,   161,   159,     0,     0,   157,   173,     0,
       0,     0,     0,     0,   221,   356,     0,   361,   362,     0,
       0,   363,     0,   363,   363,   385,     0,     0,   201,     0,
       0,     0,     0,   330,   285,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   401,   330,     0,   400,   111,   119,
     120,   124,   249,   248,     0,     0,   239,   244,   243,     0,
     241,   226,   253,    90,    94,     0,    61,    60,     0,    65,
       0,     0,    78,    79,    69,     0,    71,    46,     0,    50,
      40,    33,    31,    32,     0,     0,   118,   180,     0,     0,
       0,     0,     0,     0,   257,   174,     0,   160,     0,     0,
       0,   328,     0,     0,     0,   365,   394,   399,   395,   383,
       0,   274,   206,     0,   203,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,     0,     0,
     282,   289,   332,   112,   113,   122,     0,     0,     0,     0,
       0,   240,     0,     0,     0,     0,    64,    80,    81,    82,
      83,    87,    86,    88,    85,    84,     0,    48,   111,   114,
     117,   123,   182,     0,     0,     0,   262,   263,     0,     0,
     214,   306,     0,   304,     0,   215,     0,   357,   364,     0,
     202,     0,   401,     0,     0,     0,     0,   296,     0,     0,
       0,   293,     0,   292,     0,   302,   331,   121,   126,   125,
     228,   251,   250,   246,   245,     0,    62,    59,    70,   109,
       0,     0,   108,   127,   178,     0,   177,   176,     0,   175,
       0,     0,     0,   219,     0,   329,   275,   204,   284,     0,
       0,     0,     0,     0,   294,   295,   130,   290,     0,   343,
       0,     0,     0,     0,   349,   334,     0,   347,     0,   115,
     111,     0,   104,   183,   264,   217,     0,   307,   305,   297,
       0,     0,   303,     0,   333,     0,     0,     0,   350,   335,
     336,   338,   337,   342,     0,     0,     0,   348,   346,   242,
     110,   128,     0,     0,   291,     0,     0,     0,     0,   352,
       0,     0,     0,     0,     0,     0,     0,     0,   345,     0,
       0,   353,   351,   339,   340,   341,   308,     0,     0,     0,
       0,     0,     0,   310,     0,     0,     0,     0,   310,   344,
     354,   216,   309,     0,     0,     0,   298,     0,   324,     0,
       0,     0,   310,   310,     0,   325,   218,     0,   321,   323,
     322,     0,     0,     0,   300,   299,   326,   327,   311,   319,
     313,     0,   315,   320,   317,     0,   310,   314,   312,   318,
     316,   301
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
      27,    28,    29,    38,   538,   539,   764,   762,   897,   911,
     692,   540,   786,   391,   402,   501,   502,   281,   506,   424,
     425,    30,    47,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -635
static const yytype_int16 yypact[] =
{
     372,   -89,   174,  -635,   -74,  -635,   -86,  -635,    19,  -635,
     -77,     6,    21,   122,    52,  -635,  -635,  -635,  -635,  -635,
    -635,  -635,  -635,  -635,  -635,  -635,  -635,  -635,  -635,  -635,
    -635,   252,   194,   298,    83,   194,  -635,   220,   184,    92,
     342,   222,   299,   349,   299,    51,    55,   164,  -635,   266,
     366,   407,     8,  -635,   389,  -635,   372,    -7,   229,   395,
     380,   296,   289,   466,   226,   194,   274,   472,  -635,  -635,
    -635,   -50,  -635,  -635,   301,  -635,  -635,  -635,  -635,  -635,
     480,  -635,   487,  1346,  1346,  -635,  -635,   500,  -122,  -635,
    -635,  -635,  -635,   515,  1346,  1346,  1346,  -635,  -635,  -635,
     582,  -635,  -635,  -635,  -635,  -635,  -635,  -635,  -635,  -635,
    -635,   311,   319,   327,   329,   333,   336,   339,   341,   344,
     346,   351,   361,   399,   409,   413,   430,   483,   485,   506,
    1346,  2510,   -23,  -635,  -635,    13,    15,    10,     3,  -109,
     369,  -635,  -635,   491,  -635,  -635,   505,   529,   678,   694,
     698,   704,  -635,  -635,  2237,   712,   726,  -635,   632,   616,
     802,   781,  -635,   231,    95,     8,   813,   822,  -126,  -105,
    2582,  2582,  -635,   836,  1346,  1346,   763,   763,  -635,  1346,
    2156,   159,   662,  1346,   481,  1346,  1346,   682,  1346,  1346,
    1346,  1346,  1346,  1346,  1346,  1346,  1346,  1346,   645,   646,
     659,  1586,  -635,  1346,  1346,  1346,  1346,  1346,    35,   680,
     528,  1346,   192,  1346,  1346,  1346,  1346,  1346,  1346,  1346,
    1346,  1346,  1346,   885,  -635,     8,  1346,   886,   179,   690,
     213,   888,     8,  -635,  -635,  -635,   144,  -635,     8,   783,
     768,  -635,   891,   892,   895,   896,   897,   898,   899,  -635,
    -635,   715,   715,   715,   715,   715,  -635,   715,  -635,   716,
     715,   715,   715,   860,  -635,   860,  -635,   715,   715,   715,
     718,   860,   715,   860,  -635,  -635,  -635,  -635,   719,   720,
    -635,    22,   721,   795,   919,   920,   149,  -635,  1346,   797,
       8,   104,   274,  -635,   922,   923,   758,   922,   219,  -635,
    1218,  -635,   729,  2582,  2223,   171,  -635,  1346,  1346,   730,
     543,  -635,  -635,  -635,  1607,   792,  1240,  1402,   732,  1629,
    1653,  1674,  1695,  1720,  1741,  1769,  1790,  1437,  1461,  1536,
    -635,  -635,  -635,  -635,  2602,  2621,   997,  2639,  2639,  -635,
      50,  -635,   662,  1346,  1346,   734,  1346,  2540,   744,   759,
     760,   879,   828,   883,   668,   554,   626,   626,   927,   927,
     927,   927,  -635,  -635,   104,  -635,    54,   850,   851,   852,
    -635,  -635,  -635,    -6,   138,   369,   768,   768,   854,   838,
       8,  -635,   856,  -635,   -33,  -635,  -635,  -635,   814,  -635,
     962,  -635,  -635,  -635,  -635,  -635,  -635,   964,  -635,  -635,
    -635,  -635,  -635,  -635,  -635,  -635,  -635,   964,  -635,  -635,
    -635,   984,   985,   845,   793,  1346,   990,   991,   796,   870,
    -635,  -635,   994,   177,  -635,   491,  2582,   956,   884,   104,
    -635,  -635,   980,   108,  -635,   224,   803,   108,   803,   873,
    1346,  -635,  1346,  -635,  1346,  2424,  2244,  -635,  1346,  1346,
    -635,  1346,  2403,   906,   906,  -635,  -635,  -635,  -635,  -635,
    -635,  -635,  -635,  -635,  1346,  1346,  1346,  -635,  -635,  1346,
     804,  2639,  2639,   662,  2561,  1346,   662,   662,   662,   805,
     914,   179,   916,   916,   916,  1346,  1026,  1027,   797,  -635,
    -635,     8,  1346,   -82,     8,   839,   929,   930,   842,  1034,
     230,   260,   377,   260,   260,  -635,   238,   260,   260,   260,
     377,   377,   260,   260,   260,   263,   377,   260,   377,   843,
     844,   995,  1346,  2582,  -635,   292,   848,   990,  1046,   150,
    1047,   853,   941,   210,   855,   857,   945,   878,   295,  -635,
    1076,   662,  1078,  1346,  -635,  -635,  1028,   972,  1082,  -635,
    -635,  1083,  1101,   118,  -635,   118,  -635,  -635,  2582,  2445,
    -635,  1346,    90,   808,  1812,  1346,  1346,   887,   889,  1836,
    1557,  1857,   890,  -635,  1346,   893,  1346,   620,   894,   900,
     901,  -635,  1049,   998,  -635,   979,   904,   911,   912,  2582,
    1072,     5,   884,  -635,  2582,  1346,   913,  -635,  -635,   -82,
    1346,   915,   917,  1093,  -635,  -635,  1092,  -635,  -635,   950,
    1095,  -635,  1109,  -635,  -635,  -635,   918,  1878,  -635,  1112,
     990,   300,   921,   177,  -635,   148,  1346,   924,   925,   935,
    1118,  1118,   936,  1093,   154,   177,  2237,  -635,   294,   937,
    -635,   926,  -635,  2582,   960,  1105,  -635,  -635,  2582,   313,
    -635,  -635,  -635,  -635,  2582,  1346,  -635,  -635,  1346,  -635,
    1903,  2135,  -635,  -635,  -635,  1346,  -635,  -635,   939,  -635,
     620,  -635,  -635,  -635,  1346,  1346,   797,  -635,  1133,  1133,
    1133,  1346,  1346,  1134,  -635,  2582,  1118,  -635,  1924,  1137,
    1138,  -635,   322,   944,  1141,  -635,   377,  -635,   377,   377,
    1346,  -635,  -635,   348,  -635,   990,   374,   947,  1037,  1038,
     952,  1952,  1137,  1118,  1118,  -635,   391,   393,  1138,   396,
    -635,  -635,  -635,  -635,  -635,  -635,  1078,  1346,  1346,   922,
    1125,  -635,  1322,   955,  1973,  1995,  -635,  -635,  -635,  -635,
    -635,  -635,  -635,  -635,  -635,  -635,  2019,  -635,  2474,  -113,
    2582,   884,  -635,   401,   403,   417,  2582,  2582,  1135,   422,
    1140,  -635,   427,  -635,   435,  -635,  1156,  -635,  -635,  2040,
    -635,   457,   160,  1346,   961,   963,  1093,  -635,   501,   503,
     509,  -635,  1158,  -635,   517,  -635,   232,  -635,  2582,  2582,
     965,  -635,  2582,  -635,  2582,  1101,  -635,  -635,  -635,  -635,
    1030,  1346,  -635,  1057,  -635,  1161,  -635,  -635,  1346,  -635,
    1000,  1031,  1166,  -635,  1167,  -635,  -635,  -635,  -635,  2061,
    1137,  1138,   522,  1040,  -635,  -635,  -635,  -635,  1048,   977,
    1168,   983,  1174,    26,  -635,  -635,  1069,  1073,   532,  -635,
    2474,  1118,  -635,  -635,  2582,  -635,  1181,  -635,  -635,  -635,
     535,   539,  -635,  1182,  -635,  1183,   -32,  1346,  -635,  -635,
    -635,  -635,  -635,  -635,   987,   988,   992,  -635,  -635,  -635,
    -635,   989,   993,  1055,  -635,   544,   547,   996,  1084,  -635,
    2086,  1001,  1002,  1003,  1190,  1193,  1194,  1190,  -635,  1195,
    1346,  -635,  -635,  -635,  -635,  -635,  -635,   549,   555,   999,
     556,  1004,  2107,  -635,  1202,  1223,  1190,  1190,  -635,  -635,
    -635,    65,  -635,  1036,   579,   601,    67,   -18,  1172,   214,
     166,  1190,  -635,  -635,  1197,  -635,  -635,    -9,  -635,  -635,
    -635,   181,   188,   603,    67,    67,  -635,  -635,  -635,  -635,
    -635,   201,  -635,  -635,  -635,   234,  -635,  -635,  -635,  -635,
    -635,    67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -635,  1216,   -49,  -421,  -635,  -635,  -635,  -635,   819,  1094,
    -635,  -123,  -241,  -635,  -635,  -505,  -635,  -635,  -465,  -635,
     550,  -575,  -635,  -623,  -635,  -635,  1051,  -134,  -101,  1043,
    -231,   874,  -635,  -635,   436,  -635,  -635,  -635,   679,   817,
     331,   163,  -635,  -635,  -635,  1234,  1010,  -635,  -635,  -499,
    -635,  -635,  -635,  -635,  -635,  -371,   353,  1278,  1154,  -635,
     903,  -635,   536,  -296,  -635,  -635,  -635,  -635,  -635,    34,
    -635,  -635,  -635,  -635,   709,   699,  -631,  -634,  -479,  -442,
    -597,  -635,  -635,   459,   203,   215,  -398,   697,   928,  -527,
    -635,  -635,  -635,  1249
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -282
static const yytype_int16 yytable[] =
{
     131,   437,   624,   228,   510,   511,   137,   379,   717,  -258,
     516,   137,   518,   202,   485,   229,  -260,   684,  -259,   557,
     495,   877,   294,   592,    53,   682,   146,    45,   621,    40,
     859,   860,   861,   862,   170,   171,   719,   230,   165,   231,
     413,   339,   925,   297,   595,   176,   177,   178,   572,   223,
     430,   180,   936,   340,   496,   147,   467,   202,    85,   309,
      83,   800,   148,   759,   291,   225,   554,    31,   556,    63,
      43,    84,   149,   295,   863,   414,   173,   174,   778,    50,
      54,   201,    41,   917,   596,   924,    61,   784,   801,   937,
     779,   780,   232,   223,   295,    66,   415,   497,   878,   160,
     203,   204,   205,   206,   207,   208,   209,   720,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   703,    55,   480,   364,   918,   303,   918,   150,    86,
     304,   498,   879,   488,   310,   314,   316,   317,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   493,
     926,   166,     9,   668,   334,   335,   336,   337,   338,   341,
      46,   151,   347,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   468,   439,   803,   131,   226,   822,
      67,   655,   651,   919,   652,   919,   850,    62,   545,   429,
     851,   920,   486,   920,    68,    88,    89,    90,    91,    92,
      93,   707,   138,   683,    69,  -258,   771,   138,   227,    94,
      95,   751,  -260,   696,  -259,   698,   699,    96,   871,   470,
     864,   865,   866,    70,   530,    73,   348,   349,   479,   158,
     531,   938,   481,    32,   931,   708,   547,    33,   942,   426,
      99,   306,   307,   799,   100,   818,   547,   101,   102,    56,
     828,   420,   420,   443,   444,    57,   420,   376,   445,   446,
     593,   290,   420,   599,   532,   367,   452,   533,   829,    88,
      89,    90,    91,    92,    93,   947,   288,    34,   709,   830,
     534,   368,   377,    94,    95,   831,   832,   535,   421,   421,
     656,    96,    97,   421,   471,   472,   166,   474,    58,   421,
      98,    60,   201,   928,   939,   232,   833,   536,   949,   548,
     288,   943,   710,   628,    99,    35,   106,   940,   100,   650,
     629,   101,   102,    64,   944,   948,    74,    36,   932,   941,
     159,   723,   308,   103,   350,   870,   945,   104,    37,   487,
      65,   537,   834,   929,   308,    72,   369,   422,   423,   623,
     575,  -280,    81,   578,   579,   580,   835,  -281,   950,   930,
      44,   105,   836,    75,    51,    87,   523,   724,     9,   134,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   438,
     106,   351,   144,   558,    76,   559,   837,  -194,   153,   562,
     563,    77,   564,   288,     1,    78,   107,   152,   900,   108,
     109,    79,   110,   372,   232,   569,   570,   571,   637,   154,
     233,     2,   155,   607,   550,   551,   577,   914,   915,   161,
     605,   606,  -194,   790,   609,   610,   589,   608,   611,   612,
       3,     4,   933,   594,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   613,   612,   130,   916,   156,   403,   157,
     234,    75,   161,   617,   408,   163,   410,     5,  -162,   167,
     934,   935,   235,   168,    88,    89,    90,    91,    92,    93,
     169,   236,   618,   619,   641,   634,   635,   643,    94,    95,
     704,   619,    76,   648,   951,     6,    96,   237,    45,   135,
     182,     7,   654,   731,   732,   238,   660,   661,   183,   136,
       8,     9,   765,   766,   175,   311,   184,   670,   185,    99,
     241,    10,   186,   100,    11,   187,   101,   102,   188,    12,
     189,   343,   344,   190,   345,   191,   685,   346,   770,   619,
     192,   688,   243,   203,   204,   205,   206,   207,   208,   209,
     193,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   772,   635,   244,   711,   216,   217,
     218,   219,   220,   221,   222,    88,    89,    90,    91,    92,
      93,   781,   782,   783,   782,   312,   785,   766,   194,    94,
      95,   804,   805,   806,   805,   106,   734,    96,   195,   735,
     503,   504,   196,   507,   508,   509,   746,   807,   805,   512,
     513,   514,   809,   782,   517,   748,   750,   811,   812,   197,
      99,   448,   756,   757,   100,   813,   814,   101,   102,   313,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   769,   218,   219,   220,   221,   222,   817,   619,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   788,   789,
     130,   792,   198,   794,   199,    88,    89,    90,    91,    92,
      93,   215,   216,   217,   218,   219,   220,   221,   222,    94,
      95,   823,   812,   824,   782,   200,   106,    96,   318,   825,
     782,   392,   393,   394,   395,   282,   396,   827,   814,   398,
     399,   400,   852,   766,   819,   245,   404,   405,   406,   283,
      99,   409,   869,   732,   100,   873,   812,   101,   102,   874,
     814,   246,   886,   887,   449,   247,   648,   888,   889,   903,
     904,   248,   840,   905,   906,   179,   908,   904,   284,   844,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   922,
     904,   130,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   285,    88,    89,    90,    91,    92,
      93,   923,   904,   946,   904,   286,   106,   287,   880,    94,
      95,     9,   489,   490,   587,   588,   292,    96,   203,   204,
     205,   206,   207,   208,   209,   293,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   299,
      99,   902,   754,   755,   100,   330,   331,   101,   102,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   332,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   342,
     451,   130,    88,    89,    90,    91,    92,    93,   363,   366,
     371,   373,   380,   381,   383,   384,    94,    95,   385,   386,
     387,   388,   389,   401,    96,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   390,   397,   106,   407,   411,   412,
     416,   417,   418,   419,   427,   432,   434,    99,   436,   441,
     447,   100,   455,   473,   101,   102,   203,   204,   205,   206,
     207,   208,   209,   476,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   222,   477,   478,
     482,   483,   484,   491,   492,   494,   499,   500,   505,   521,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   519,
     520,   130,   522,   524,   526,   527,   528,   529,   542,   543,
     546,   547,   552,   106,   573,   581,   582,   585,   657,   658,
     206,   207,   208,   209,   566,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     9,   590,
     591,    88,    89,    90,    91,    92,    93,   604,   600,   601,
     602,   603,   727,   614,   615,    94,    95,   620,   616,   622,
     625,   627,   626,    96,   630,   632,   631,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    99,   633,   130,   636,
     100,   638,   644,   101,   102,   645,   646,   662,   677,   663,
     667,   674,   681,   669,   671,   675,   691,   693,   694,   695,
     672,   673,   642,   678,    88,    89,    90,    91,    92,    93,
     679,   680,   686,   697,   689,   702,   690,   700,    94,    95,
     705,   715,   729,   712,   713,   730,    96,   728,    88,    89,
      90,    91,    92,    93,   714,   718,   752,   758,   726,   747,
     761,   763,    94,    95,   767,   768,   773,   774,   775,    99,
      96,   776,   106,   100,   795,   808,   101,   102,   810,   815,
     820,   826,   821,   841,   843,   846,   548,   839,   845,   847,
     848,   856,   854,    99,   853,   647,   855,   100,   858,   867,
     101,   102,   857,   868,   872,   875,   881,   882,   876,   885,
     782,   883,   884,   896,   891,   890,   898,   899,   907,   791,
     901,   893,   894,   895,   909,   912,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   106,   913,   130,   203,   204,
     205,   206,   207,   208,   209,   921,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   106,
     203,   204,   205,   206,   207,   208,   209,   925,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   927,   145,   568,   305,   375,   787,   365,   687,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   584,   541,
     130,   164,   431,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,    82,   298,   130,    88,    89,    90,    91,    92,
      93,   838,   706,   722,   721,   515,   172,     0,     0,    94,
      95,   555,     0,     0,     0,     0,     0,    96,     0,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,     0,     0,     0,
      99,    96,     0,     0,   100,     0,     0,   101,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,   793,     0,   100,     0,
       0,   101,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   203,   204,   205,   206,   207,   208,   209,   440,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     0,     0,     0,     0,     0,     0,     0,
       0,   453,     0,     0,     0,     0,   106,   203,   204,   205,
     206,   207,   208,   209,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
     106,   203,   204,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,     0,     0,     0,     0,     0,     0,     0,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,     0,
       0,   130,     0,     0,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,     0,     0,   130,   203,   204,   205,   206,
     207,   208,   209,     0,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   203,   204,   205,
     206,   207,   208,   209,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,     0,     0,     0,     0,   203,   204,   205,   206,
     207,   208,   209,   454,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   203,   204,   205,
     206,   207,   208,   209,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   464,   203,
     204,   205,   206,   207,   208,   209,     0,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,   465,   203,   204,   205,   206,   207,   208,   209,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   203,   204,   205,   206,   207,   208,
     209,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   203,   204,   205,   206,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,     0,     0,     0,
     203,   204,   205,   206,   207,   208,   209,   466,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,   665,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,     0,     0,     0,     0,     0,     0,   203,
     204,   205,   206,   207,   208,   209,   333,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     203,   204,   205,   206,   207,   208,   209,   450,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,     0,   203,   204,   205,   206,   207,   208,   209,   456,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     0,     0,     0,   203,   204,   205,   206,
     207,   208,   209,   457,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   203,   204,   205,
     206,   207,   208,   209,   458,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   203,   204,
     205,   206,   207,   208,   209,   459,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,   203,   204,   205,   206,   207,   208,   209,
     460,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   203,   204,   205,   206,   207,   208,
     209,   461,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,     0,
       0,     0,   203,   204,   205,   206,   207,   208,   209,   462,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   203,   204,   205,   206,   207,   208,   209,
     463,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,   203,   204,   205,   206,   207,
     208,   209,   659,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,     0,     0,   203,
     204,   205,   206,   207,   208,   209,   664,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     203,   204,   205,   206,   207,   208,   209,   666,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,   701,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,     0,     0,     0,   203,   204,   205,   206,
     207,   208,   209,   736,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   203,   204,   205,
     206,   207,   208,   209,   760,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,     0,     0,     0,   203,   204,   205,   206,   207,
     208,   209,   777,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   203,   204,   205,   206,
     207,   208,   209,   796,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     0,     0,     0,
       0,     0,     0,     0,     0,   797,     0,     0,     0,     0,
     737,   738,     0,     0,     0,   739,     0,   740,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   798,
       0,     0,     0,     0,     0,     0,     0,     0,   741,   742,
       0,   743,     0,   203,   204,   205,   206,   207,   208,   209,
     816,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   203,   204,   205,   206,   207,   208,
     209,   849,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,   249,   250,     0,
     251,     0,   252,   253,     0,     0,   892,     0,     0,     0,
       0,     0,     0,     0,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   910,     0,     0,
     744,   745,   255,   256,   257,   258,     0,     0,   259,     0,
       0,     0,   260,     0,     0,     0,     0,     0,     0,   179,
       0,     0,     0,     0,     0,     0,     0,   261,     0,     0,
       0,     0,     0,     0,   262,     0,     0,     0,   263,     0,
       0,     0,     0,     0,   264,     0,   265,   266,   267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   268,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,   269,   270,     0,   271,   272,     0,
       0,   273,   274,     0,     0,     0,     0,   275,   276,     0,
       0,   561,   277,     0,     0,     0,   278,     0,   279,     0,
       0,     0,   280,   203,   204,   205,   206,   207,   208,   209,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   203,   204,   205,   206,   207,   208,
     209,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   203,   204,   205,   206,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,     0,     0,     0,
       0,     0,     0,     0,   203,   204,   205,   206,   207,   208,
     209,   565,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,   560,     0,     0,     0,
       0,   723,     0,   202,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,   207,   208,   209,   653,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,     0,     0,     0,     0,     0,     0,   724,     0,   223,
     203,   204,   205,   206,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,   475,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   203,   204,   205,   206,   207,   208,   209,   576,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   204,   205,   206,   207,   208,   209,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,  -282,  -282,  -282,  -282,     0,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222
};

static const yytype_int16 yycheck[] =
{
      49,   297,   529,   137,   402,   403,     3,   238,   631,     3,
     408,     3,   410,     3,    20,   138,     3,   592,     3,   440,
      53,    53,   148,   488,     3,    20,    33,     8,   527,   103,
       4,     5,     6,     7,    83,    84,   633,   138,    88,   148,
      18,     6,    60,   148,   126,    94,    95,    96,   469,    39,
     291,   100,    61,    18,    87,    62,     6,     3,     3,   182,
       9,   174,    69,   686,   165,    88,   437,   156,   439,    35,
     156,    20,    79,   199,    48,    53,   198,   199,   712,   156,
      59,   130,   156,    18,   166,    18,     3,   718,   201,    98,
     713,   714,   201,    39,   199,     3,    74,   130,   130,    65,
      10,    11,    12,    13,    14,    15,    16,   634,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   620,     0,   364,   225,    60,   175,    60,   135,    74,
     179,   164,   164,   374,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   380,
     168,   201,   149,   574,   203,   204,   205,   206,   207,   124,
     141,   168,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   124,   298,   751,   226,   201,   776,
      88,    91,   553,   118,   555,   118,   820,   104,   429,   290,
     821,   126,   198,   126,   102,     3,     4,     5,     6,     7,
       8,    53,   199,   198,   112,   199,   705,   199,   198,    17,
      18,   676,   199,   611,   199,   613,   614,    25,   841,   342,
     194,   195,   196,   131,    47,     3,    34,    35,   351,     3,
      53,    50,   366,    59,    68,    87,   128,    63,    50,   288,
      48,    82,    83,   748,    52,   772,   128,    55,    56,   197,
      18,   102,   102,    82,    83,     3,   102,   113,   307,   308,
     491,   166,   102,   494,    87,    86,   315,    90,    36,     3,
       4,     5,     6,     7,     8,    74,   172,   103,   130,    47,
     103,   102,   138,    17,    18,    53,    54,   110,   139,   139,
     200,    25,    26,   139,   343,   344,   201,   346,   104,   139,
      34,     3,   351,    89,   123,   201,    74,   130,    74,   201,
     172,   123,   164,   103,    48,   141,   124,   136,    52,   201,
     110,    55,    56,   103,   136,   124,   104,   153,   162,   148,
     104,    37,   173,    67,   142,   840,   148,    71,   164,   201,
     156,   164,   110,   129,   173,     3,   167,   198,   199,   199,
     473,   197,     3,   476,   477,   478,   124,   197,   124,   145,
       7,    95,   130,    64,    11,   201,   415,    73,   149,     3,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   170,
     124,   199,     3,   442,    95,   444,   164,   166,     3,   448,
     449,   102,   451,   172,    32,   106,   140,   178,   887,   143,
     144,   112,   146,   200,   201,   464,   465,   466,   541,    39,
      51,    49,   126,   163,   200,   201,   475,   906,   907,   198,
     200,   201,   201,   729,    57,    58,   485,   177,   200,   201,
      68,    69,   921,   492,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   200,   201,   199,   908,   178,   265,     3,
     101,    64,   198,   522,   271,     3,   273,   105,   109,   178,
     922,   923,   113,     3,     3,     4,     5,     6,     7,     8,
       3,   122,   200,   201,   543,   200,   201,   546,    17,    18,
     200,   201,    95,   552,   946,   133,    25,   138,     8,   102,
     199,   139,   561,   200,   201,   146,   565,   566,   199,   112,
     148,   149,   200,   201,     9,    44,   199,   576,   199,    48,
      39,   159,   199,    52,   162,   199,    55,    56,   199,   167,
     199,    13,    14,   199,    16,   199,   595,    19,   200,   201,
     199,   600,    47,    10,    11,    12,    13,    14,    15,    16,
     199,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   200,   201,    47,   626,    24,    25,
      26,    27,    28,    29,    30,     3,     4,     5,     6,     7,
       8,   200,   201,   200,   201,   114,   200,   201,   199,    17,
      18,   200,   201,   200,   201,   124,   655,    25,   199,   658,
     395,   396,   199,   398,   399,   400,   665,   200,   201,   404,
     405,   406,   200,   201,   409,   674,   675,   200,   201,   199,
      48,    88,   681,   682,    52,   200,   201,    55,    56,   158,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   700,    26,    27,    28,    29,    30,   200,   201,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   727,   728,
     199,   730,   199,   732,   199,     3,     4,     5,     6,     7,
       8,    23,    24,    25,    26,    27,    28,    29,    30,    17,
      18,   200,   201,   200,   201,   199,   124,    25,    26,   200,
     201,   252,   253,   254,   255,     3,   257,   200,   201,   260,
     261,   262,   200,   201,   773,    47,   267,   268,   269,     3,
      48,   272,   200,   201,    52,   200,   201,    55,    56,   200,
     201,    47,   198,   199,   201,    47,   795,   200,   201,   200,
     201,    47,   801,   198,   199,   173,   200,   201,   126,   808,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   200,
     201,   199,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   178,     3,     4,     5,     6,     7,
       8,   200,   201,   200,   201,     3,   124,    26,   857,    17,
      18,   149,   376,   377,   483,   484,     3,    25,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
      48,   890,   679,   680,    52,   200,   200,    55,    56,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   200,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   199,
      88,   199,     3,     4,     5,     6,     7,     8,     3,     3,
     200,     3,   109,   125,     3,     3,    17,    18,     3,     3,
       3,     3,     3,    43,    25,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   199,   199,   124,   199,   199,   199,
     199,   126,     3,     3,   127,     3,     3,    48,   170,   200,
     200,    52,   200,   199,    55,    56,    10,    11,    12,    13,
      14,    15,    16,   199,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    30,   199,   199,
     110,   110,   110,   109,   126,   109,   152,     5,     4,   124,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     5,
       5,   199,   199,     3,     3,   199,   126,     3,    42,   115,
      20,   128,   199,   124,   200,   200,    92,    91,   200,   201,
      13,    14,    15,    16,   108,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   149,     3,
       3,     3,     4,     5,     6,     7,     8,     3,   199,   110,
     110,   199,   116,   200,   200,    17,    18,   199,    53,     3,
       3,   110,   199,    25,   199,   110,   199,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,    48,   199,   199,     3,
      52,     3,   110,    55,    56,     3,     3,   200,   109,   200,
     200,    42,    20,   200,   200,    97,     3,     5,   148,     4,
     200,   200,    74,   199,     3,     4,     5,     6,     7,     8,
     199,   199,   199,     4,   199,     3,   199,   199,    17,    18,
     199,     3,   162,   199,   199,    20,    25,   201,     3,     4,
       5,     6,     7,     8,   199,   199,     3,     3,   201,   200,
       3,     3,    17,    18,   200,     4,   199,   110,   110,    48,
      25,   199,   124,    52,   199,    20,    55,    56,    18,     3,
     199,     3,   199,   106,     3,   134,   201,   137,   168,     3,
       3,     3,   124,    48,   134,    74,   199,    52,     4,   110,
      55,    56,   199,   110,     3,     3,   199,   199,     5,   134,
     201,   199,   199,     3,   110,   199,     3,     3,   199,    74,
       5,   200,   200,   200,   200,     3,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   124,     3,   199,    10,    11,
      12,    13,    14,    15,    16,   199,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   124,
      10,    11,    12,    13,    14,    15,    16,    60,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    99,    56,   454,   180,   232,   726,   226,   599,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   481,   425,
     199,    67,   292,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,    44,   169,   199,     3,     4,     5,     6,     7,
       8,   795,   623,   636,   635,   407,    87,    -1,    -1,    17,
      18,   438,    -1,    -1,    -1,    -1,    -1,    25,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      48,    25,    -1,    -1,    52,    -1,    -1,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    74,    -1,    52,    -1,
      -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   201,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,   124,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
     124,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,    -1,
      -1,   199,    -1,    -1,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   201,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   201,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,   201,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   201,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   201,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   200,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   200,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    10,    11,    12,    13,    14,    15,    16,   200,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   200,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   200,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   200,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     200,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   200,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   200,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     200,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,   200,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   200,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   200,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   200,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   200,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   200,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   200,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   200,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,
      65,    66,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    96,    -1,    10,    11,    12,    13,    14,    15,    16,
     200,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   200,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    40,    41,    -1,
      43,    -1,    45,    46,    -1,    -1,   200,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,
     175,   176,    75,    76,    77,    78,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,   173,
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
      28,    29,    30,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    49,    68,    69,   105,   133,   139,   148,   149,
     159,   162,   167,   203,   212,   213,   245,   249,   250,   252,
     253,   254,   255,   256,   266,   267,   270,   272,   273,   274,
     293,   156,    59,    63,   103,   141,   153,   164,   275,   246,
     103,   156,   258,   156,   258,     8,   141,   294,   295,   226,
     156,   258,   268,     3,    59,     0,   197,     3,   104,   271,
       3,     3,   104,   271,   103,   156,     3,    88,   102,   112,
     131,   247,     3,     3,   104,    64,    95,   102,   106,   112,
     259,     3,   259,     9,    20,     3,    74,   201,     3,     4,
       5,     6,     7,     8,    17,    18,    25,    26,    34,    48,
      52,    55,    56,    67,    71,    95,   124,   140,   143,   144,
     146,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     199,   204,   227,   228,     3,   102,   112,     3,   199,   230,
     231,   232,   234,   244,     3,   203,    33,    62,    69,    79,
     135,   168,   178,     3,    39,   126,   178,     3,     3,   104,
     271,   198,   248,     3,   247,    88,   201,   178,     3,     3,
     204,   204,   295,   198,   199,     9,   204,   204,   204,   173,
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
     175,   289,     3,     3,   126,   178,     3,    26,   172,   214,
     166,   230,     3,     3,   148,   199,   260,   148,   260,     3,
     204,   205,   206,   204,   204,   211,    82,    83,   173,   213,
     204,    44,   114,   158,   204,   209,   204,   204,    26,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     200,   200,   200,   200,   204,   204,   204,   204,   204,     6,
      18,   124,   199,    13,    14,    16,    19,   204,    34,    35,
     142,   199,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,     3,   230,   228,     3,    86,   102,   167,
     241,   200,   200,     3,   269,   231,   113,   138,   238,   232,
     109,   125,   236,     3,     3,     3,     3,     3,     3,     3,
     199,   285,   285,   285,   285,   285,   285,   199,   285,   285,
     285,    43,   286,   286,   285,   285,   285,   199,   286,   285,
     286,   199,   199,    18,    53,    74,   199,   126,     3,     3,
     102,   139,   198,   199,   291,   292,   204,   127,   220,   230,
     214,   248,     3,   265,     3,   261,   170,   265,   170,   213,
     201,   200,   157,    82,    83,   204,   204,   200,    88,   201,
     200,    88,   204,   201,   201,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   201,   201,   201,     6,   124,   207,
     213,   204,   204,   199,   204,    38,   199,   199,   199,   213,
     214,   229,   110,   110,   110,    20,   198,   201,   214,   236,
     236,   109,   126,   232,   109,    53,    87,   130,   164,   152,
       5,   287,   288,   287,   287,     4,   290,   287,   287,   287,
     288,   288,   287,   287,   287,   290,   288,   287,   288,     5,
       5,   124,   199,   204,     3,   251,     3,   199,   126,     3,
      47,    53,    87,    90,   103,   110,   130,   164,   276,   277,
     283,   233,    42,   115,   223,   214,    20,   128,   201,   257,
     200,   201,   199,   262,   257,   262,   257,   205,   204,   204,
      82,   157,   204,   204,   204,    88,   108,   210,   210,   204,
     204,   204,   205,   200,   208,   213,    38,   204,   213,   213,
     213,   200,    92,   215,   241,    91,   242,   242,   242,   204,
       3,     3,   220,   232,   204,   126,   166,   239,   240,   232,
     199,   110,   110,   199,     3,   200,   201,   163,   177,    57,
      58,   200,   201,   200,   200,   200,    53,   204,   200,   201,
     199,   251,     3,   199,   291,     3,   199,   110,   103,   110,
     199,   199,   110,   199,   200,   201,     3,   213,     3,   221,
     222,   204,    74,   204,   110,     3,     3,    74,   204,   264,
     201,   257,   257,    82,   204,    91,   200,   200,   201,   200,
     204,   204,   200,   200,   200,   201,   200,   200,   205,   200,
     204,   200,   200,   200,    42,    97,   219,   109,   199,   199,
     199,    20,    20,   198,   223,   204,   199,   240,   204,   199,
     199,     3,   282,     5,   148,     4,   288,     4,   288,   288,
     199,   200,     3,   251,   200,   199,   276,    53,    87,   130,
     164,   204,   199,   199,   199,     3,   225,   225,   199,   282,
     291,   277,   289,    37,    73,   217,   201,   116,   201,   162,
      20,   200,   201,   263,   204,   204,   200,    65,    66,    70,
      72,    93,    94,    96,   175,   176,   204,   200,   204,   216,
     204,   220,     3,   243,   243,   243,   204,   204,     3,   225,
     200,     3,   279,     3,   278,   200,   201,   200,     4,   204,
     200,   251,   200,   199,   110,   110,   199,   200,   279,   225,
     225,   200,   201,   200,   278,   200,   284,   222,   204,   204,
     265,    74,   204,    74,   204,   199,   200,   200,   200,   217,
     174,   201,   218,   223,   200,   201,   200,   200,    20,   200,
      18,   200,   201,   200,   201,     3,   200,   200,   291,   204,
     199,   199,   282,   200,   200,   200,     3,   200,    18,    36,
      47,    53,    54,    74,   110,   124,   130,   164,   264,   137,
     204,   106,   224,     3,   204,   168,   134,     3,     3,   200,
     279,   278,   200,   134,   124,   199,     3,   199,     4,     4,
       5,     6,     7,    48,   194,   195,   196,   110,   110,   200,
     217,   225,     3,   200,   200,     3,     5,    53,   130,   164,
     204,   199,   199,   199,   199,   134,   198,   199,   200,   201,
     199,   110,   200,   200,   200,   200,     3,   280,     3,     3,
     280,     5,   204,   200,   201,   198,   199,   199,   200,   200,
     200,   281,     3,     3,   280,   280,   281,    18,    60,   118,
     126,   199,   200,   200,    18,    60,   168,    99,    89,   129,
     145,    68,   162,   280,   281,   281,    61,    98,    50,   123,
     136,   148,    50,   123,   136,   148,   200,    74,   124,    74,
     124,   281
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
#line 862 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 208:
#line 869 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 209:
#line 878 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 210:
#line 885 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 211:
#line 894 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 212:
#line 901 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 213:
#line 909 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 214:
#line 913 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 215:
#line 919 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 216:
#line 925 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 217:
#line 932 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 218:
#line 938 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 219:
#line 945 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 220:
#line 951 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 221:
#line 957 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 222:
#line 963 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 223:
#line 969 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 224:
#line 975 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 225:
#line 983 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 226:
#line 990 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 228:
#line 998 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 229:
#line 1001 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 230:
#line 1002 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 231:
#line 1003 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 232:
#line 1004 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 233:
#line 1005 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 237:
#line 1012 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 238:
#line 1016 "parser/evoparser.y"
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
#line 1026 "parser/evoparser.y"
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
#line 1038 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 241:
#line 1039 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 242:
#line 1039 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 243:
#line 1042 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 244:
#line 1043 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 245:
#line 1044 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 246:
#line 1045 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 247:
#line 1049 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 248:
#line 1052 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 249:
#line 1053 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 250:
#line 1054 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 251:
#line 1055 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 252:
#line 1061 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 253:
#line 1067 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 254:
#line 1072 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 255:
#line 1077 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 256:
#line 1082 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 257:
#line 1089 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 258:
#line 1094 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 259:
#line 1095 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 260:
#line 1096 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 261:
#line 1101 "parser/evoparser.y"
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
#line 1112 "parser/evoparser.y"
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
#line 1123 "parser/evoparser.y"
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
#line 1134 "parser/evoparser.y"
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
#line 1147 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 266:
#line 1151 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 267:
#line 1152 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 268:
#line 1155 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 269:
#line 1156 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 270:
#line 1160 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 271:
#line 1165 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 272:
#line 1167 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 273:
#line 1169 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 274:
#line 1171 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 275:
#line 1173 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 276:
#line 1177 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 277:
#line 1181 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 278:
#line 1182 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 279:
#line 1187 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 280:
#line 1195 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        g_isTemporary = (yyvsp[(2) - (8)].intval);
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 281:
#line 1204 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); g_isTemporary = (yyvsp[(2) - (10)].intval); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 282:
#line 1209 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 283:
#line 1213 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 284:
#line 1218 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 285:
#line 1222 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 286:
#line 1225 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 287:
#line 1226 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 288:
#line 1229 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 289:
#line 1230 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 290:
#line 1233 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 291:
#line 1234 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 292:
#line 1235 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 293:
#line 1236 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 294:
#line 1237 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 295:
#line 1238 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 296:
#line 1239 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 297:
#line 1240 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 298:
#line 1242 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 299:
#line 1244 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 300:
#line 1246 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 301:
#line 1248 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 302:
#line 1250 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 303:
#line 1252 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 304:
#line 1255 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 305:
#line 1256 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 306:
#line 1259 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 307:
#line 1260 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 308:
#line 1263 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 309:
#line 1264 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 311:
#line 1268 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 312:
#line 1269 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 313:
#line 1270 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 314:
#line 1271 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 315:
#line 1272 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 316:
#line 1273 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 317:
#line 1274 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 318:
#line 1275 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 319:
#line 1276 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 320:
#line 1277 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 321:
#line 1278 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 322:
#line 1279 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 323:
#line 1280 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 324:
#line 1281 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 325:
#line 1282 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 326:
#line 1283 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 327:
#line 1284 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 328:
#line 1287 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 329:
#line 1288 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 330:
#line 1291 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 331:
#line 1293 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 332:
#line 1301 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 333:
#line 1302 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 335:
#line 1304 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 336:
#line 1305 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 337:
#line 1306 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 338:
#line 1307 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 339:
#line 1308 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 340:
#line 1309 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 341:
#line 1310 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 342:
#line 1311 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 343:
#line 1312 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 344:
#line 1313 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 345:
#line 1314 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 346:
#line 1315 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 347:
#line 1316 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 348:
#line 1317 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 349:
#line 1318 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 350:
#line 1319 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 351:
#line 1320 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 352:
#line 1321 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 353:
#line 1322 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 354:
#line 1323 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 355:
#line 1326 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 356:
#line 1327 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 357:
#line 1328 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 358:
#line 1331 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 359:
#line 1332 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 360:
#line 1335 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 361:
#line 1336 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 362:
#line 1337 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 364:
#line 1341 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 365:
#line 1342 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 366:
#line 1346 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 367:
#line 1347 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 368:
#line 1348 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 369:
#line 1349 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 370:
#line 1350 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 371:
#line 1351 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 372:
#line 1352 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 373:
#line 1353 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 374:
#line 1354 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 375:
#line 1355 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 376:
#line 1356 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 377:
#line 1357 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 378:
#line 1358 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 379:
#line 1359 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 380:
#line 1360 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 381:
#line 1361 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 382:
#line 1362 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 383:
#line 1363 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 384:
#line 1364 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 385:
#line 1365 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 386:
#line 1366 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 387:
#line 1367 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 388:
#line 1368 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 389:
#line 1369 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 390:
#line 1370 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 391:
#line 1371 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 392:
#line 1372 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 393:
#line 1373 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 394:
#line 1374 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 395:
#line 1375 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 396:
#line 1376 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 397:
#line 1377 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 398:
#line 1380 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 399:
#line 1381 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 400:
#line 1385 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 401:
#line 1388 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 402:
#line 1389 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 403:
#line 1390 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 404:
#line 1394 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 405:
#line 1397 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 406:
#line 1398 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 410:
#line 1402 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 411:
#line 1403 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5188 "parser/evoparser.tab.c"
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


#line 1406 "parser/evoparser.y"

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
