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
     HASH = 414,
     VALIDATE = 415,
     VARCHAR = 416,
     VALUES = 417,
     VARBINARY = 418,
     WHERE = 419,
     WHEN = 420,
     WITH = 421,
     YEAR = 422,
     YEAR_MONTH = 423,
     ZEROFILL = 424,
     EXISTS = 425,
     FSUBSTRING = 426,
     FTRIM = 427,
     FDATE_ADD = 428,
     FDATE_SUB = 429,
     FCOUNT = 430,
     FSUM = 431,
     FAVG = 432,
     FMIN = 433,
     FMAX = 434,
     FUPPER = 435,
     FLOWER = 436,
     FLENGTH = 437,
     FCONCAT = 438,
     FREPLACE = 439,
     FCOALESCE = 440,
     FGEN_RANDOM_UUID = 441,
     FGEN_RANDOM_UUID_V7 = 442,
     FSNOWFLAKE_ID = 443
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
#define HASH 414
#define VALIDATE 415
#define VARCHAR 416
#define VALUES 417
#define VARBINARY 418
#define WHERE 419
#define WHEN 420
#define WITH 421
#define YEAR 422
#define YEAR_MONTH 423
#define ZEROFILL 424
#define EXISTS 425
#define FSUBSTRING 426
#define FTRIM 427
#define FDATE_ADD 428
#define FDATE_SUB 429
#define FCOUNT 430
#define FSUM 431
#define FAVG 432
#define FMIN 433
#define FMAX 434
#define FUPPER 435
#define FLOWER 436
#define FLENGTH 437
#define FCONCAT 438
#define FREPLACE 439
#define FCOALESCE 440
#define FGEN_RANDOM_UUID 441
#define FGEN_RANDOM_UUID_V7 442
#define FSNOWFLAKE_ID 443




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
#line 497 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 510 "parser/evoparser.tab.c"

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
#define YYLAST   2727

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  203
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  420
/* YYNRULES -- Number of states.  */
#define YYNSTATES  991

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   443

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     200,   201,    26,    24,   202,    25,   199,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   198,
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
     194,   195,   196,   197
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
     903,   905,   909,   911,   922,   933,   951,   964,   984,   996,
    1003,  1012,  1019,  1026,  1033,  1035,  1044,  1045,  1050,  1051,
    1054,  1057,  1060,  1063,  1065,  1066,  1067,  1071,  1073,  1077,
    1081,  1082,  1089,  1091,  1093,  1097,  1101,  1109,  1113,  1117,
    1123,  1129,  1131,  1140,  1148,  1156,  1158,  1167,  1168,  1171,
    1174,  1178,  1184,  1190,  1198,  1200,  1205,  1210,  1211,  1214,
    1216,  1222,  1230,  1238,  1248,  1260,  1262,  1265,  1269,  1271,
    1280,  1291,  1301,  1308,  1320,  1329,  1330,  1332,  1334,  1338,
    1344,  1352,  1357,  1362,  1368,  1374,  1379,  1386,  1398,  1412,
    1426,  1442,  1447,  1454,  1456,  1460,  1462,  1466,  1468,  1472,
    1473,  1478,  1484,  1489,  1495,  1500,  1506,  1511,  1517,  1522,
    1527,  1531,  1535,  1539,  1542,  1546,  1551,  1556,  1558,  1562,
    1563,  1568,  1569,  1573,  1576,  1580,  1584,  1588,  1592,  1598,
    1604,  1610,  1614,  1617,  1625,  1631,  1635,  1638,  1642,  1645,
    1649,  1655,  1660,  1666,  1674,  1675,  1679,  1685,  1686,  1688,
    1689,  1692,  1695,  1696,  1701,  1705,  1708,  1712,  1716,  1720,
    1724,  1728,  1732,  1736,  1740,  1744,  1748,  1750,  1752,  1754,
    1756,  1758,  1762,  1768,  1771,  1776,  1778,  1780,  1782,  1784,
    1788,  1792,  1796,  1800,  1806,  1812,  1814,  1816,  1818,  1822,
    1826,  1827,  1829,  1831,  1833,  1837,  1841,  1844,  1846,  1850,
    1854
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     204,     0,    -1,   213,   198,    -1,   213,   198,   204,    -1,
       3,    -1,     3,   199,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   124,    -1,   205,    24,
     205,    -1,   205,    25,   205,    -1,   205,    26,   205,    -1,
     205,    27,   205,    -1,   205,    28,   205,    -1,   205,    29,
     205,    -1,    25,   205,    -1,   200,   205,   201,    -1,   205,
      12,   205,    -1,   205,    10,   205,    -1,   205,    11,   205,
      -1,   205,    21,   205,    -1,   205,    22,   205,    -1,   205,
      30,   205,    -1,   205,    23,   205,    -1,    18,   205,    -1,
      17,   205,    -1,   205,    20,   205,    -1,   205,    20,   200,
     214,   201,    -1,   205,    20,    35,   200,   214,   201,    -1,
     205,    20,   142,   200,   214,   201,    -1,   205,    20,    34,
     200,   214,   201,    -1,   205,    15,   124,    -1,   205,    15,
      18,   124,    -1,   205,    15,     6,    -1,   205,    15,    18,
       6,    -1,     8,     9,   205,    -1,   205,    19,   205,    38,
     205,    -1,   205,    18,    19,   205,    38,   205,    -1,   205,
      -1,   205,   202,   206,    -1,    -1,   206,    -1,    -1,   205,
      16,   200,   208,   206,   201,    -1,    -1,   205,    18,    16,
     200,   209,   206,   201,    -1,   205,    16,   200,   214,   201,
      -1,   205,    18,    16,   200,   214,   201,    -1,   179,   200,
     214,   201,    -1,     3,   200,   207,   201,    -1,   184,   200,
      26,   201,    -1,   184,   200,   205,   201,    -1,   185,   200,
     205,   201,    -1,   186,   200,   205,   201,    -1,   187,   200,
     205,   201,    -1,   188,   200,   205,   201,    -1,   180,   200,
     205,   202,   205,   202,   205,   201,    -1,   180,   200,   205,
     202,   205,   201,    -1,   180,   200,   205,    88,   205,   201,
      -1,   180,   200,   205,    88,   205,    91,   205,   201,    -1,
     181,   200,   205,   201,    -1,   181,   200,   210,   205,    88,
     205,   201,    -1,   181,   200,   210,    88,   205,   201,    -1,
     189,   200,   205,   201,    -1,   190,   200,   205,   201,    -1,
     191,   200,   205,   201,    -1,   192,   200,   205,   202,   205,
     201,    -1,   193,   200,   205,   202,   205,   202,   205,   201,
      -1,   194,   200,   205,   202,   205,   201,    -1,   195,   200,
     201,    -1,   196,   200,   201,    -1,   197,   200,   201,    -1,
     114,    -1,   158,    -1,    44,    -1,   182,   200,   205,   202,
     211,   201,    -1,   183,   200,   205,   202,   211,   201,    -1,
     108,   205,    65,    -1,   108,   205,    66,    -1,   108,   205,
      70,    -1,   108,   205,    72,    -1,   108,   205,   177,    -1,
     108,   205,   176,    -1,   108,   205,    94,    -1,   108,   205,
      93,    -1,   108,   205,    96,    -1,    52,   205,   212,    82,
      -1,    52,   205,   212,    83,   205,    82,    -1,    52,   212,
      82,    -1,    52,   212,    83,   205,    82,    -1,   174,   205,
     157,   205,    -1,   212,   174,   205,   157,   205,    -1,   205,
      14,   205,    -1,   205,    18,    14,   205,    -1,   205,    13,
     205,    -1,   205,    18,    13,   205,    -1,    48,    -1,    55,
      -1,    56,    -1,   214,    -1,   149,   227,   228,    -1,   149,
     227,   228,    88,   231,   215,   216,   220,   221,   224,   225,
      -1,    -1,   173,   205,    -1,    -1,    92,    42,   217,   219,
      -1,   205,   218,    -1,   217,   202,   205,   218,    -1,    -1,
      37,    -1,    73,    -1,    -1,   175,   137,    -1,    -1,    97,
     205,    -1,    -1,   127,    42,   222,    -1,   223,    -1,   222,
     202,   223,    -1,     3,   218,    -1,    -1,   115,   205,    -1,
     115,   205,   202,   205,    -1,   115,   205,   116,   205,    -1,
      -1,   106,   226,    -1,     3,    -1,   226,   202,     3,    -1,
      -1,   227,    34,    -1,   227,    67,    -1,   227,    71,    -1,
     227,    95,    -1,   227,   146,    -1,   227,   140,    -1,   227,
     144,    -1,   227,   143,    -1,   229,    -1,   228,   202,   229,
      -1,    26,    -1,   205,   230,    -1,    39,     3,    -1,     3,
      -1,    -1,   232,    -1,   231,   202,   232,    -1,   233,    -1,
     235,    -1,     3,   230,   242,    -1,     3,   199,     3,   230,
     242,    -1,   245,   234,     3,    -1,   200,   231,   201,    -1,
      39,    -1,    -1,   232,   236,   109,   233,   240,    -1,   232,
     146,   233,    -1,   232,   146,   233,   126,   205,    -1,   232,
     238,   237,   109,   233,   241,    -1,   232,   122,   239,   109,
     233,    -1,    -1,   101,    -1,    51,    -1,    -1,   125,    -1,
     113,    -1,   138,    -1,   113,   237,    -1,   138,   237,    -1,
      -1,    -1,   241,    -1,   126,   205,    -1,   166,   200,   226,
     201,    -1,   167,   110,   243,   200,   244,   201,    -1,   102,
     110,   243,   200,   244,   201,    -1,    86,   110,   243,   200,
     244,   201,    -1,    -1,    91,   109,    -1,    -1,     3,    -1,
     244,   202,     3,    -1,   200,   214,   201,    -1,   246,    -1,
      68,   247,    88,     3,   215,   221,   224,    -1,   247,   112,
      -1,   247,   131,    -1,   247,   102,    -1,    -1,    68,   247,
     248,    88,   231,   215,    -1,     3,   249,    -1,   248,   202,
       3,   249,    -1,    -1,   199,    26,    -1,    68,   247,    88,
     248,   166,   231,   215,    -1,   250,    -1,    69,   156,     3,
      -1,    69,   156,   104,   179,     3,    -1,   251,    -1,    49,
     103,     3,   126,     3,   200,   252,   201,    -1,    49,   103,
     104,   179,     3,   126,     3,   200,   252,   201,    -1,    49,
     164,   103,     3,   126,     3,   200,   252,   201,    -1,    49,
     164,   103,   104,   179,     3,   126,     3,   200,   252,   201,
      -1,    49,   103,     3,   126,     3,   166,   168,   200,   252,
     201,    -1,    49,   103,   104,   179,     3,   126,     3,   166,
     168,   200,   252,   201,    -1,    49,   164,   103,     3,   126,
       3,   166,   168,   200,   252,   201,    -1,    49,   164,   103,
     104,   179,     3,   126,     3,   166,   168,   200,   252,   201,
      -1,     3,    -1,   252,   202,     3,    -1,   253,    -1,   189,
     200,     3,   201,    -1,   190,   200,     3,   201,    -1,   191,
     200,     3,   201,    -1,   192,   200,     3,   202,     3,   201,
      -1,   254,    -1,    69,   103,     3,    -1,   255,    -1,   159,
     156,     3,    -1,   256,    -1,   133,   156,     3,    -1,   257,
      -1,    32,   156,     3,    33,    47,     3,    53,   200,   205,
     201,    -1,    32,   156,     3,    33,    47,     3,   164,   200,
     284,   201,    -1,    32,   156,     3,    33,    47,     3,    87,
     110,   200,   281,   201,   134,     3,   200,   282,   201,   283,
      -1,    32,   156,     3,    33,    47,     3,    53,   200,   205,
     201,    18,   169,    -1,    32,   156,     3,    33,    47,     3,
      87,   110,   200,   281,   201,   134,     3,   200,   282,   201,
     283,    18,   169,    -1,    32,   156,     3,    33,    47,     3,
     130,   110,   200,   280,   201,    -1,    32,   156,     3,    69,
      47,     3,    -1,    32,   156,     3,   135,    47,     3,   152,
       3,    -1,    32,   156,     3,    79,    47,     3,    -1,    32,
     156,     3,    62,    47,     3,    -1,    32,   156,     3,   169,
      47,     3,    -1,   258,    -1,   105,   260,   261,     3,   262,
     171,   264,   259,    -1,    -1,   128,   110,   162,   267,    -1,
      -1,   260,   112,    -1,   260,    64,    -1,   260,    95,    -1,
     260,   102,    -1,   106,    -1,    -1,    -1,   200,   263,   201,
      -1,     3,    -1,   263,   202,     3,    -1,   200,   266,   201,
      -1,    -1,   264,   202,   265,   200,   266,   201,    -1,   205,
      -1,    74,    -1,   266,   202,   205,    -1,   266,   202,    74,
      -1,   105,   260,   261,     3,   148,   267,   259,    -1,     3,
      20,   205,    -1,     3,    20,    74,    -1,   267,   202,     3,
      20,   205,    -1,   267,   202,     3,    20,    74,    -1,   268,
      -1,   139,   260,   261,     3,   262,   171,   264,   259,    -1,
     139,   260,   261,     3,   148,   267,   259,    -1,   139,   260,
     261,     3,   262,   214,   259,    -1,   269,    -1,   162,   270,
     231,   148,   271,   215,   221,   224,    -1,    -1,   260,   112,
      -1,   260,   102,    -1,     3,    20,   205,    -1,     3,   199,
       3,    20,   205,    -1,   271,   202,     3,    20,   205,    -1,
     271,   202,     3,   199,     3,    20,   205,    -1,   272,    -1,
      49,    59,   273,     3,    -1,    49,   141,   273,     3,    -1,
      -1,   104,   179,    -1,   274,    -1,    49,    63,     3,    39,
     291,    -1,    49,    63,     3,    39,   291,    74,   205,    -1,
      49,    63,     3,    39,   291,    18,   124,    -1,    49,    63,
       3,    39,   291,    53,   200,   205,   201,    -1,    49,    63,
       3,    39,   291,    18,   124,    53,   200,   205,   201,    -1,
     275,    -1,   167,     3,    -1,   167,    59,     3,    -1,   276,
      -1,    49,   277,   156,   273,     3,   200,   278,   201,    -1,
      49,   277,   156,   273,     3,   199,     3,   200,   278,   201,
      -1,    49,   277,   156,   273,     3,   200,   278,   201,   293,
      -1,    49,   277,   156,   273,     3,   293,    -1,    49,   277,
     156,   273,     3,   199,     3,   200,   278,   201,   293,    -1,
      49,   277,   156,   273,     3,   199,     3,   293,    -1,    -1,
     153,    -1,   279,    -1,   278,   202,   279,    -1,   130,   110,
     200,   280,   201,    -1,    47,     3,   130,   110,   200,   280,
     201,    -1,   110,   200,   226,   201,    -1,   103,   200,   226,
     201,    -1,    90,   103,   200,   226,   201,    -1,    90,   110,
     200,   226,   201,    -1,    53,   200,   205,   201,    -1,    47,
       3,    53,   200,   205,   201,    -1,    87,   110,   200,   281,
     201,   134,     3,   200,   282,   201,   283,    -1,    87,   110,
     200,   281,   201,   134,     3,   199,     3,   200,   282,   201,
     283,    -1,    47,     3,    87,   110,   200,   281,   201,   134,
       3,   200,   282,   201,   283,    -1,    47,     3,    87,   110,
     200,   281,   201,   134,     3,   199,     3,   200,   282,   201,
     283,    -1,   164,   200,   284,   201,    -1,    47,     3,   164,
     200,   284,   201,    -1,     3,    -1,   280,   202,     3,    -1,
       3,    -1,   281,   202,     3,    -1,     3,    -1,   282,   202,
       3,    -1,    -1,   283,   126,    68,    50,    -1,   283,   126,
      68,   148,   124,    -1,   283,   126,    68,   136,    -1,   283,
     126,    68,   148,    74,    -1,   283,   126,   162,    50,    -1,
     283,   126,   162,   148,   124,    -1,   283,   126,   162,   136,
      -1,   283,   126,   162,   148,    74,    -1,   283,   126,    68,
     123,    -1,   283,   126,   162,   123,    -1,   283,   118,    89,
      -1,   283,   118,   145,    -1,   283,   118,   129,    -1,   283,
      60,    -1,   283,    18,    60,    -1,   283,    60,    99,    61,
      -1,   283,    60,    99,    98,    -1,     3,    -1,   284,   202,
       3,    -1,    -1,   285,     3,   291,   286,    -1,    -1,   286,
      18,   124,    -1,   286,   124,    -1,   286,    74,     4,    -1,
     286,    74,     5,    -1,   286,    74,     7,    -1,   286,    74,
       6,    -1,   286,    74,   195,   200,   201,    -1,   286,    74,
     196,   200,   201,    -1,   286,    74,   197,   200,   201,    -1,
     286,    74,    48,    -1,   286,    36,    -1,   286,    36,   200,
       5,   202,     5,   201,    -1,   286,    36,   200,     5,   201,
      -1,   286,   164,   110,    -1,   286,   164,    -1,   286,   130,
     110,    -1,   286,   110,    -1,   286,    54,     4,    -1,   286,
      53,   200,   205,   201,    -1,   286,    47,     3,   164,    -1,
     286,    47,     3,   130,   110,    -1,   286,    47,     3,    53,
     200,   205,   201,    -1,    -1,   200,     5,   201,    -1,   200,
       5,   202,     5,   201,    -1,    -1,    43,    -1,    -1,   289,
     163,    -1,   289,   178,    -1,    -1,   290,    57,   148,     4,
      -1,   290,    58,     4,    -1,    46,   287,    -1,   151,   287,
     289,    -1,   147,   287,   289,    -1,   121,   287,   289,    -1,
     107,   287,   289,    -1,   100,   287,   289,    -1,    45,   287,
     289,    -1,   132,   287,   289,    -1,    75,   287,   289,    -1,
      85,   287,   289,    -1,    77,   287,   289,    -1,    78,    -1,
     161,    -1,   155,    -1,    76,    -1,   176,    -1,    57,   287,
     290,    -1,   170,   200,     5,   201,   290,    -1,    43,   287,
      -1,   172,   200,     5,   201,    -1,   160,    -1,    40,    -1,
     120,    -1,   117,    -1,   150,   288,   290,    -1,   154,   288,
     290,    -1,   119,   288,   290,    -1,   111,   288,   290,    -1,
      81,   200,   292,   201,   290,    -1,   148,   200,   292,   201,
     290,    -1,    41,    -1,   165,    -1,     4,    -1,   292,   202,
       4,    -1,   294,   234,   214,    -1,    -1,   102,    -1,   139,
      -1,   295,    -1,   148,   141,     3,    -1,   148,   141,    74,
      -1,   148,   296,    -1,   297,    -1,   296,   202,   297,    -1,
       8,    20,   205,    -1,     8,     9,   205,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   289,   289,   290,   295,   302,   303,   304,   322,   330,
     338,   344,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     375,   376,   377,   378,   381,   382,   383,   384,   385,   388,
     389,   392,   393,   396,   397,   400,   400,   401,   401,   402,
     403,   404,   408,   412,   413,   414,   415,   416,   417,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   439,   446,   455,   456,   457,   460,   461,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   475,
     477,   479,   481,   485,   493,   504,   505,   508,   509,   512,
     520,   528,   539,   549,   550,   564,   565,   566,   567,   570,
     577,   585,   586,   587,   590,   591,   594,   595,   598,   599,
     602,   603,   606,   614,   615,   616,   617,   620,   621,   624,
     625,   628,   629,   630,   631,   632,   633,   634,   635,   636,
     639,   640,   641,   649,   655,   656,   657,   660,   661,   664,
     665,   669,   675,   676,   677,   680,   681,   685,   687,   689,
     691,   693,   697,   698,   699,   702,   703,   706,   707,   710,
     711,   712,   715,   716,   719,   720,   724,   726,   728,   730,
     733,   734,   737,   738,   741,   745,   753,   761,   762,   763,
     764,   768,   771,   772,   775,   775,   777,   781,   788,   795,
     805,   812,   819,   829,   837,   847,   855,   864,   873,   885,
     890,   895,   901,   908,   915,   922,   932,   939,   948,   955,
     964,   971,   980,   983,   989,   995,  1002,  1008,  1015,  1021,
    1027,  1033,  1039,  1045,  1053,  1060,  1068,  1069,  1072,  1073,
    1074,  1075,  1076,  1079,  1079,  1082,  1083,  1086,  1096,  1109,
    1110,  1110,  1113,  1114,  1115,  1116,  1119,  1123,  1124,  1125,
    1126,  1132,  1135,  1141,  1146,  1152,  1158,  1165,  1166,  1167,
    1171,  1182,  1193,  1204,  1218,  1222,  1223,  1226,  1227,  1231,
    1235,  1237,  1239,  1241,  1243,  1248,  1252,  1253,  1257,  1264,
    1274,  1278,  1283,  1287,  1292,  1296,  1297,  1300,  1301,  1304,
    1305,  1306,  1307,  1308,  1309,  1310,  1311,  1312,  1314,  1316,
    1318,  1320,  1322,  1326,  1327,  1330,  1331,  1334,  1335,  1338,
    1339,  1340,  1341,  1342,  1343,  1344,  1345,  1346,  1347,  1348,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,  1358,  1359,  1362,
    1362,  1372,  1373,  1374,  1375,  1376,  1377,  1378,  1379,  1380,
    1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,  1389,  1390,
    1391,  1392,  1393,  1394,  1397,  1398,  1399,  1402,  1403,  1406,
    1407,  1408,  1411,  1412,  1413,  1417,  1418,  1419,  1420,  1421,
    1422,  1423,  1424,  1425,  1426,  1427,  1428,  1429,  1430,  1431,
    1432,  1433,  1434,  1435,  1436,  1437,  1438,  1439,  1440,  1441,
    1442,  1443,  1444,  1445,  1446,  1447,  1448,  1451,  1452,  1455,
    1459,  1460,  1461,  1465,  1468,  1469,  1470,  1471,  1471,  1473,
    1474
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
     436,   437,   438,   439,   440,   441,   442,   443,    59,    46,
      40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   203,   204,   204,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   206,   206,   207,   207,   208,   205,   209,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   210,   210,   210,   205,   205,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   205,
     205,   205,   205,   212,   212,   205,   205,   205,   205,   205,
     205,   205,   213,   214,   214,   215,   215,   216,   216,   217,
     217,   218,   218,   218,   219,   219,   220,   220,   221,   221,
     222,   222,   223,   224,   224,   224,   224,   225,   225,   226,
     226,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     228,   228,   228,   229,   230,   230,   230,   231,   231,   232,
     232,   233,   233,   233,   233,   234,   234,   235,   235,   235,
     235,   235,   236,   236,   236,   237,   237,   238,   238,   239,
     239,   239,   240,   240,   241,   241,   242,   242,   242,   242,
     243,   243,   244,   244,   245,   213,   246,   247,   247,   247,
     247,   246,   248,   248,   249,   249,   246,   213,   250,   250,
     213,   251,   251,   251,   251,   251,   251,   251,   251,   252,
     252,   252,   253,   253,   253,   253,   213,   254,   213,   255,
     213,   256,   213,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   213,   258,   259,   259,   260,   260,
     260,   260,   260,   261,   261,   262,   262,   263,   263,   264,
     265,   264,   266,   266,   266,   266,   258,   267,   267,   267,
     267,   213,   268,   268,   268,   213,   269,   270,   270,   270,
     271,   271,   271,   271,   213,   272,   272,   273,   273,   213,
     274,   274,   274,   274,   274,   213,   275,   275,   213,   276,
     276,   276,   276,   276,   276,   277,   277,   278,   278,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   280,   280,   281,   281,   282,   282,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   284,   284,   285,
     279,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   287,   287,   287,   288,   288,   289,
     289,   289,   290,   290,   290,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   292,   292,   293,
     294,   294,   294,   213,   295,   295,   295,   296,   296,   297,
     297
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
       1,     3,     1,    10,    10,    17,    12,    19,    11,     6,
       8,     6,     6,     6,     1,     8,     0,     4,     0,     2,
       2,     2,     2,     1,     0,     0,     3,     1,     3,     3,
       0,     6,     1,     1,     3,     3,     7,     3,     3,     5,
       5,     1,     8,     7,     7,     1,     8,     0,     2,     2,
       3,     5,     5,     7,     1,     4,     4,     0,     2,     1,
       5,     7,     7,     9,    11,     1,     2,     3,     1,     8,
      10,     9,     6,    11,     8,     0,     1,     1,     3,     5,
       7,     4,     4,     5,     5,     4,     6,    11,    13,    13,
      15,     4,     6,     1,     3,     1,     3,     1,     3,     0,
       4,     5,     4,     5,     4,     5,     4,     5,     4,     4,
       3,     3,     3,     2,     3,     4,     4,     1,     3,     0,
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
       0,     0,   295,   190,     0,   238,     0,   238,     0,   131,
       0,   238,     0,     0,     0,   102,   185,   197,   200,   216,
     218,   220,   222,   234,   261,   265,   274,   279,   285,   288,
     413,     0,   277,     0,     0,   277,   296,     0,     0,     0,
       0,     0,   244,     0,   244,     0,     0,   416,   417,     0,
       0,     0,     0,   286,     0,     1,     2,     0,     0,     0,
       0,     0,     0,     0,     0,   277,   194,     0,   189,   187,
     188,     0,   217,   198,     0,   240,   241,   242,   243,   239,
       0,   221,     0,     0,     0,   414,   415,     0,     4,     7,
       8,    10,     9,     6,     0,     0,     0,   142,   132,    99,
       0,   100,   101,   133,   134,   135,    11,   137,   139,   138,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,   103,   140,   219,   242,   239,   146,     0,     0,
     147,   149,   150,   156,   287,     3,     0,     0,     0,     0,
       0,     0,   278,   275,     0,     0,     0,   276,     0,     0,
       0,     0,   192,   105,     0,     0,     0,     0,   245,   245,
     420,   419,   418,     0,    43,     0,    28,    27,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   179,     0,
       0,     0,     0,   164,   163,   167,   171,   168,     0,     0,
     165,   155,     0,     0,     0,     0,     0,     0,     0,   396,
     405,   364,   364,   364,   364,   364,   389,   364,   386,     0,
     364,   364,   364,   367,   398,   367,   397,   364,   364,   364,
       0,   367,   364,   367,   388,   395,   387,   406,     0,     0,
     390,   280,     0,     0,     0,     0,   410,   195,     0,   118,
       0,   105,   194,   199,     0,     0,     0,     0,     0,     5,
      41,    44,     0,    38,     0,     0,    91,     0,     0,     0,
       0,    77,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    19,    21,    22,    20,    97,    95,    36,
       0,    34,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    23,    24,    26,    12,    13,    14,    15,
      16,    17,    25,   144,   105,   141,   146,     0,     0,     0,
     151,   184,   154,     0,   105,   148,   165,   165,     0,   158,
       0,   166,     0,   153,     0,   232,   229,   231,     0,   233,
       0,   393,   369,   375,   372,   369,   369,     0,   369,   369,
     369,   368,   372,   372,   369,   369,   369,     0,   372,   369,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   411,   412,     0,   339,   292,   156,   106,     0,   123,
     105,   191,   193,     0,   236,   247,     0,     0,   236,     0,
     236,     0,    52,     0,    89,     0,     0,     0,    51,     0,
       0,    63,     0,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    66,    67,    68,     0,     0,     0,    37,    35,
       0,     0,    98,    96,    47,     0,     0,     0,     0,     0,
       0,   107,   179,   181,   181,   181,     0,     0,     0,   118,
     169,   170,     0,     0,   172,     0,     0,     0,     0,     0,
       0,     0,   381,   391,   383,   385,   407,     0,   384,   380,
     379,   402,   401,   378,   382,   377,     0,   399,   376,   400,
       0,     0,   282,     0,   281,     0,   209,     0,     0,     0,
       0,     0,   211,     0,     0,     0,     0,   410,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   297,     0,     0,
       0,     0,   186,   196,     0,     0,     0,   256,   246,     0,
       0,   236,   263,   236,   264,    42,    93,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,     0,    39,     0,     0,     0,    30,
       0,   116,   152,     0,     0,     0,     0,   270,     0,     0,
     123,   161,   159,     0,     0,   157,   173,     0,     0,     0,
       0,     0,   230,   365,     0,   370,   371,     0,     0,   372,
       0,   372,   372,   394,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,     0,     0,     0,     0,   339,   294,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   410,
     339,     0,   409,   111,   119,   120,   124,   258,   257,     0,
       0,   248,   253,   252,     0,   250,   235,   262,    90,    94,
       0,    61,    60,     0,    65,     0,     0,    78,    79,    69,
       0,    71,    46,     0,    50,    40,    33,    31,    32,     0,
       0,   118,   180,     0,     0,     0,     0,     0,     0,   266,
     174,     0,   160,     0,     0,     0,   337,     0,     0,     0,
     374,   403,   408,   404,   392,     0,   283,     0,     0,     0,
       0,     0,   210,     0,     0,     0,   203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,     0,   291,   298,   341,   112,   113,   122,     0,
       0,     0,     0,     0,   249,     0,     0,     0,     0,    64,
      80,    81,    82,    83,    87,    86,    88,    85,    84,     0,
      48,   111,   114,   117,   123,   182,     0,     0,     0,   271,
     272,     0,     0,   223,   315,     0,   313,     0,   224,     0,
     366,   373,     0,   205,   212,   213,   214,     0,     0,   202,
       0,     0,     0,   410,     0,     0,     0,     0,   305,     0,
       0,     0,   302,     0,   301,     0,   311,   340,   121,   126,
     125,   237,   260,   259,   255,   254,     0,    62,    59,    70,
     109,     0,     0,   108,   127,   178,     0,   177,   176,     0,
     175,     0,     0,     0,   228,     0,   338,   284,     0,     0,
     207,     0,   204,   293,     0,     0,     0,     0,     0,   303,
     304,   130,   299,     0,   352,     0,     0,     0,     0,   358,
     343,     0,   356,     0,   115,   111,     0,   104,   183,   273,
     226,     0,   316,   314,   215,   206,     0,   306,     0,     0,
     312,     0,   342,     0,     0,     0,   359,   344,   345,   347,
     346,   351,     0,     0,     0,   357,   355,   251,   110,   128,
       0,   208,     0,   300,     0,     0,     0,     0,   361,     0,
       0,     0,     0,     0,     0,     0,     0,   354,     0,     0,
     362,   360,   348,   349,   350,   317,     0,     0,     0,     0,
       0,     0,   319,     0,     0,     0,     0,   319,   353,   363,
     225,   318,     0,     0,     0,   307,     0,   333,     0,     0,
       0,   319,   319,     0,   334,   227,     0,   330,   332,   331,
       0,     0,     0,   309,   308,   335,   336,   320,   328,   322,
       0,   324,   329,   326,     0,   319,   323,   321,   327,   325,
     310
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,   300,   301,   302,   470,   582,   315,   575,   181,
      14,    15,   289,   591,   772,   748,   833,   691,   429,   654,
     655,   552,   877,   739,    49,   132,   133,   224,   139,   140,
     141,   242,   142,   239,   382,   240,   378,   605,   606,   370,
     594,   776,   143,    16,    39,    71,   162,    17,    18,   531,
     532,    19,    20,    21,    22,    23,   557,    42,    80,   296,
     436,   561,   756,   664,   434,    24,    25,    52,   374,    26,
      59,    27,    28,    29,    38,   546,   547,   787,   785,   936,
     950,   707,   548,   817,   391,   402,   502,   503,   281,   507,
     425,   426,    30,    47,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -872
static const yytype_int16 yypact[] =
{
    2342,   -74,   204,  -872,   145,  -872,   -56,  -872,    35,  -872,
      80,     5,    50,    79,    48,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,   246,   156,   306,    25,   156,  -872,   208,   158,    19,
     317,    84,   307,   355,   307,   236,    34,   154,  -872,   489,
     358,   309,     8,  -872,   369,  -872,  2342,    -8,   184,   396,
     371,   294,   255,   433,    85,   156,   225,   449,  -872,  -872,
    -872,   -16,  -872,  -872,   259,  -872,  -872,  -872,  -872,  -872,
     458,  -872,   485,  1459,  1459,  -872,  -872,   451,   117,  -872,
    -872,  -872,  -872,   495,  1459,  1459,  1459,  -872,  -872,  -872,
     195,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,   266,   308,   319,   321,   334,   336,   340,   342,   346,
     367,   372,   378,   383,   410,   412,   428,   430,   446,   453,
    1459,  2607,   -15,  -872,  -872,     9,    15,    17,    10,    66,
     409,  -872,  -872,   541,  -872,  -872,   620,   640,   656,   658,
     678,   681,  -872,  -872,  2323,   731,   748,  -872,   632,   586,
     767,   745,  -872,   241,   -86,     8,   769,   770,   -96,   -83,
    2679,  2679,  -872,   771,  1459,  1459,  1001,  1001,  -872,  1459,
    2233,    20,   626,  1459,   704,  1459,  1459,   809,  1459,  1459,
    1459,  1459,  1459,  1459,  1459,  1459,  1459,  1459,   577,   578,
     580,   575,  -872,  1459,  1459,  1459,  1459,  1459,    57,   582,
     351,  1459,   732,  1459,  1459,  1459,  1459,  1459,  1459,  1459,
    1459,  1459,  1459,   782,  -872,     8,  1459,   783,   138,   588,
     229,   795,     8,  -872,  -872,  -872,   285,  -872,     8,   710,
     695,  -872,   818,   819,   820,   821,   822,   826,   827,  -872,
    -872,   631,   631,   631,   631,   631,  -872,   631,  -872,   633,
     631,   631,   631,   789,  -872,   789,  -872,   631,   631,   631,
     659,   789,   631,   789,  -872,  -872,  -872,  -872,   660,   663,
    -872,   224,   144,   740,   855,   864,   152,  -872,  1459,   741,
       8,  -116,   225,  -872,   866,   867,   700,   866,   257,  -872,
    1049,  -872,   672,  2679,  2311,    23,  -872,  1459,  1459,   674,
     260,  -872,  -872,  -872,  1574,   931,  1150,  1318,   675,  1595,
    1660,  1681,  1717,  1738,  1779,  1800,  1821,  1376,  1475,  1511,
    -872,  -872,  -872,  -872,  1758,  1963,  2168,  2697,  2697,  -872,
      36,  -872,   626,  1459,  1459,   677,  1459,  2637,   679,   682,
     702,   959,   815,   825,   690,   717,   500,   500,   848,   848,
     848,   848,  -872,  -872,  -116,  -872,    89,   793,   796,   797,
    -872,  -872,  -872,     7,  -106,   409,   695,   695,   772,   779,
       8,  -872,   799,  -872,   -32,  -872,  -872,  -872,   757,  -872,
     905,  -872,  -872,  -872,  -872,  -872,  -872,   926,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,   926,  -872,  -872,
    -872,   935,   936,   807,   742,  1459,   775,    41,   941,   146,
     824,  -872,  -872,   942,   524,  -872,   541,  2679,   904,   832,
    -116,  -872,  -872,   932,   -80,  -872,   240,   751,   -80,   751,
     829,  1459,  -872,  1459,  -872,  1459,  2521,  2332,  -872,  1459,
    1459,  -872,  1459,  2500,   845,   845,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  1459,  1459,  1459,  -872,  -872,
    1459,   753,  2697,  2697,   626,  2658,  1459,   626,   626,   626,
     754,   868,   138,   870,   870,   870,  1459,   955,   956,   741,
    -872,  -872,     8,  1459,   -77,     8,   768,   859,   860,   773,
     968,   244,   -94,   393,   -94,   -94,  -872,   253,   -94,   -94,
     -94,   393,   393,   -94,   -94,   -94,   256,   393,   -94,   393,
     774,   777,   919,  1459,  2679,   780,  -872,   785,   808,   810,
     812,   263,  -872,   147,   806,    41,   978,   160,  1010,   816,
     907,   134,   833,   834,   908,   835,   289,  -872,  1029,   626,
    1039,  1459,  -872,  -872,  1033,   933,  1041,  -872,  -872,  1042,
    1183,    -9,  -872,    -9,  -872,  -872,  2679,  2542,  -872,  1459,
     781,   311,  1844,  1459,  1459,   846,   847,  1865,  1532,  1886,
     851,  -872,  1459,   852,  1459,   670,   853,   856,   865,  -872,
    1004,   952,  -872,   947,   880,   882,   884,  2679,  1066,    18,
     832,  -872,  2679,  1459,   887,  -872,  -872,   -77,  1459,   890,
     891,  1089,  -872,  -872,  1088,  -872,  -872,   946,  1091,  -872,
    1092,  -872,  -872,  -872,   897,  1922,    41,  1095,  1096,  1097,
    1098,  -872,  1099,   937,    41,   903,   297,   193,   524,  -872,
     275,  1459,   906,   909,   929,  1101,  1101,   930,  1089,   -73,
     524,  2323,  -872,   220,   934,  -872,   457,  -872,  2679,   970,
    1113,  -872,  -872,  2679,   315,  -872,  -872,  -872,  -872,  2679,
    1459,  -872,  -872,  1459,  -872,  1943,  2212,  -872,  -872,  -872,
    1459,  -872,  -872,   957,  -872,   670,  -872,  -872,  -872,  1459,
    1459,   741,  -872,  1131,  1131,  1131,  1459,  1459,  1132,  -872,
    2679,  1101,  -872,  1984,  1134,  1164,  -872,   331,   980,  1178,
    -872,   393,  -872,   393,   393,  1459,  -872,   337,   982,   983,
     984,   990,  -872,   993,   347,    41,  -872,  1026,    41,   349,
     995,  1086,  1087,   998,  2005,  1134,  1101,  1101,  -872,   356,
     360,  1164,   362,  -872,  -872,  -872,  -872,  -872,  -872,  1039,
    1459,  1459,   866,  1237,  -872,  1261,   999,  2028,  2049,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  2070,
    -872,  2571,   140,  2679,   832,  -872,   380,   405,   407,  2679,
    2679,  1182,   414,  1185,  -872,   416,  -872,   418,  -872,  1201,
    -872,  -872,  2091,  -872,  -872,  -872,  -872,  1202,    41,  -872,
     421,  1006,   424,   102,  1459,  1007,  1009,  1089,  -872,   435,
     437,   441,  -872,  1207,  -872,   443,  -872,   379,  -872,  2679,
    2679,  1030,  -872,  2679,  -872,  2679,  1183,  -872,  -872,  -872,
    -872,  1074,  1459,  -872,  1128,  -872,  1233,  -872,  -872,  1459,
    -872,  1068,  1112,  1244,  -872,  1245,  -872,  -872,  1048,   448,
    -872,    41,  -872,  -872,  2127,  1134,  1164,   450,  1116,  -872,
    -872,  -872,  -872,  1129,  1052,  1253,  1058,  1255,    26,  -872,
    -872,  1151,  1153,   454,  -872,  2571,  1101,  -872,  -872,  2679,
    -872,  1257,  -872,  -872,  -872,  -872,   456,  -872,   459,   461,
    -872,  1267,  -872,  1266,   -12,  1459,  -872,  -872,  -872,  -872,
    -872,  -872,  1072,  1073,  1075,  -872,  -872,  -872,  -872,  1078,
    1076,  -872,  1140,  -872,   301,   463,  1077,  1171,  -872,  2148,
    1081,  1082,  1083,  1284,  1285,  1287,  1284,  -872,  1286,  1459,
    -872,  -872,  -872,  -872,  -872,  -872,   522,   353,  1094,   525,
    1100,  2189,  -872,  1292,  1293,  1284,  1284,  -872,  -872,  -872,
      93,  -872,  1102,   529,   531,   178,   -36,  1198,   163,    29,
    1284,  -872,  -872,  1238,  -872,  -872,   245,  -872,  -872,  -872,
     -24,   299,   552,   178,   178,  -872,  -872,  -872,  -872,  -872,
      -4,  -872,  -872,  -872,   179,  -872,  -872,  -872,  -872,  -872,
     178
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -872,  1243,   -49,  -402,  -872,  -872,  -872,  -872,   849,  1120,
    -872,  -124,  -251,  -872,  -872,  -693,  -872,  -872,  -484,  -872,
     554,  -584,  -872,  -642,  -872,  -872,  1079,  -131,  -115,  1080,
    -231,   888,  -872,  -872,   385,  -872,  -872,  -872,   699,   828,
     279,    74,  -872,  -872,  -872,  1241,  1023,  -872,  -872,  -533,
    -872,  -872,  -872,  -872,  -872,  -872,  -378,   401,  1274,  1152,
    -872,   881,  -872,   493,  -296,  -872,  -872,  -872,  -872,  -872,
     190,  -872,  -872,  -872,  -872,   684,   673,  -705,  -671,  -497,
    -871,  -629,  -872,  -872,  2042,  -188,   170,  -393,   676,   917,
    -534,  -872,  -872,  -872,  1239
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -291
static const yytype_int16 yytable[] =
{
     131,   438,   636,   639,   740,   600,   228,   379,  -267,   511,
     512,   137,  -269,   137,   229,   517,   699,   519,  -268,   742,
     202,   496,    66,   230,   964,   146,   977,   486,    61,   421,
     897,   898,   899,   900,   170,   171,   815,    85,   697,   565,
     431,   916,   468,    45,   526,   176,   177,   178,   555,   603,
     291,   180,   294,    53,   147,   497,   223,   288,   309,   782,
     562,   148,   564,   339,   809,   297,   422,   288,   580,   615,
     986,   149,   165,   225,   901,   340,   955,   403,   830,    55,
     290,   201,    31,   408,   616,   410,   232,    73,   158,   604,
     973,   974,   202,   717,   810,   811,   488,   970,   498,   978,
      43,   724,   306,   307,   295,   444,   445,    67,    86,    54,
     364,   956,   979,   481,   990,   743,   166,   295,   917,   555,
     987,    68,   556,   489,   980,  -289,   303,   150,   223,    62,
     304,    69,   499,   965,   310,   314,   316,   317,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   494,
      70,   889,   918,   957,   334,   335,   336,   337,   338,     9,
     469,   151,   347,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   440,   430,    46,   131,   857,   553,
     683,   341,   908,   666,   888,   667,   166,   226,    74,   159,
     834,   971,   800,   665,   308,   802,   963,   308,    88,    89,
      90,    91,    92,    93,   421,  -267,   487,   774,   138,  -269,
     138,   958,    94,    95,   231,  -268,   227,   698,   471,   959,
      96,   902,   903,   904,   367,    63,   711,   480,   713,   714,
     527,   528,   529,   530,   909,   482,    50,   643,   957,   427,
     368,   422,   413,    99,   644,    83,    56,   100,    40,    57,
     101,   102,   967,   988,   421,   160,    84,   746,   446,   447,
      58,   601,   421,    32,   607,   849,   453,    33,   232,   853,
     203,   204,   205,   206,   207,   208,   209,   414,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   422,   968,   747,   472,   473,   958,   475,   415,   422,
    -290,    41,   201,   989,   959,   369,   975,    34,   969,    60,
     416,    64,   534,   633,    65,   831,   173,   174,   886,   106,
      72,   203,   204,   205,   206,   207,   208,   209,   730,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   832,   976,   417,    35,   535,   634,   449,   981,
     583,   423,   424,   586,   587,   588,    87,    36,    81,   727,
     638,   134,   731,   152,   343,   344,   524,   345,    37,   179,
     346,    75,   144,    75,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   728,   566,   130,   567,   863,   376,   153,
     570,   571,    76,   572,    76,   732,     9,  -194,    44,    77,
     154,   135,    51,    78,   288,   864,   577,   578,   579,    79,
     155,   136,   982,   377,   161,   652,   865,   585,   439,   939,
     372,   232,   866,   867,   156,   983,   157,   597,   167,   733,
     161,   558,   559,  -194,   602,   613,   614,   984,   953,   954,
     617,   618,   163,   868,   619,   620,   821,   621,   620,    45,
     233,   168,   450,   972,   631,   632,   182,   203,   204,   205,
     206,   207,   208,   209,   625,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   169,   869,
     649,   650,    88,    89,    90,    91,    92,    93,   726,   632,
     925,   926,   656,   870,   175,   658,    94,    95,   183,   871,
     234,   663,   672,   673,    96,    97,   754,   755,  -162,   184,
     669,   185,   235,    98,   675,   676,   218,   219,   220,   221,
     222,   236,   788,   789,   186,   685,   187,    99,   793,   632,
     188,   100,   189,   872,   101,   102,   190,   237,   799,   632,
     803,   650,   944,   945,   700,   238,   103,   812,   813,   703,
     104,   814,   813,   816,   789,   504,   505,   191,   508,   509,
     510,   538,   192,   750,   513,   514,   515,   539,   193,   518,
     241,   835,   836,   194,   105,   203,   204,   205,   206,   207,
     208,   209,   734,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   837,   836,   838,   836,
     195,   540,   196,   106,   541,   840,   813,   842,   843,   844,
     845,   757,   850,   632,   758,   852,   632,   542,   197,   107,
     198,   769,   108,   109,   543,   110,   858,   843,   859,   813,
     771,   773,   860,   813,   862,   845,   199,   779,   780,   885,
     632,   890,   789,   200,   544,   907,   755,   911,   632,   751,
     912,   843,   913,   845,   927,   928,   792,   243,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   244,   545,   130,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   819,   820,   245,   823,   246,   825,    88,    89,    90,
      91,    92,    93,   215,   216,   217,   218,   219,   220,   221,
     222,    94,    95,   942,   943,   247,   947,   943,   248,    96,
     961,   943,   962,   943,   282,    88,    89,    90,    91,    92,
      93,   216,   217,   218,   219,   220,   221,   222,   311,    94,
      95,   283,    99,   985,   943,   854,   100,    96,   284,   101,
     102,   490,   491,   595,   596,   285,   348,   349,   777,   778,
     286,   287,   292,   293,   299,     9,   333,   663,   330,   331,
      99,   332,   342,   875,   100,   363,   366,   101,   102,   371,
     879,   203,   204,   205,   206,   207,   208,   209,   373,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,    88,    89,    90,    91,    92,    93,   312,   380,
     381,   383,   384,   385,   386,   387,    94,    95,   106,   388,
     389,   390,   401,   397,    96,   318,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   919,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   106,    99,   419,   407,
     411,   100,   313,   412,   101,   102,   418,   420,   428,   433,
     435,   437,   670,   442,   350,   448,   456,   474,   222,   477,
     941,   492,   478,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   479,   483,   130,   493,   484,   485,   495,   500,
     501,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     506,   522,   351,   106,    88,    89,    90,    91,    92,    93,
     520,   521,   523,   525,   533,   537,   550,   551,    94,    95,
     536,   560,   554,   574,   581,   589,    96,   555,   598,   599,
     590,   593,    88,    89,    90,    91,    92,    93,   608,   609,
     610,   612,   624,   611,   635,   622,    94,    95,   623,    99,
     626,   637,   671,   100,    96,   627,   101,   102,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,    99,   628,   130,
     629,   100,   630,   640,   101,   102,   641,   642,   647,   452,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   651,   645,   646,   648,    88,    89,    90,    91,
      92,    93,   653,   659,   660,   661,   689,   677,   678,   690,
      94,    95,   682,   684,   686,   106,   692,   687,    96,   203,
     204,   205,   206,   207,   208,   209,   688,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     693,    99,   694,   106,   695,   100,   696,   701,   101,   102,
     704,   705,   706,   708,   709,   710,   712,   715,   718,   719,
     720,   721,   722,   725,   738,   723,   735,   657,     9,   736,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   737,
     741,   130,   752,   753,   775,   781,   749,   784,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   106,   770,   130,
     203,   204,   205,   206,   207,   208,   209,   786,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   790,   791,   794,   795,   796,    88,    89,    90,    91,
      92,    93,   797,   798,   801,   804,   805,   806,   807,   826,
      94,    95,   839,   841,   846,   848,   851,   855,    96,   856,
     861,   874,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    99,   556,   130,   876,   100,   878,   880,   101,   102,
      88,    89,    90,    91,    92,    93,   881,   882,   883,   884,
     891,   441,   893,   892,    94,    95,   894,   662,   895,   896,
     910,   905,    96,   906,    88,    89,    90,    91,    92,    93,
     914,   915,   920,   921,   924,   922,   923,   929,    94,    95,
     813,   930,   932,   933,   934,    99,    96,   935,   937,   100,
     938,   940,   101,   102,   946,   951,   952,   966,   964,   145,
     305,   948,   960,   818,   576,   365,   702,   106,   164,    99,
     592,   822,   375,   100,   549,   432,   101,   102,    82,   873,
     563,   298,   729,   744,   516,     0,   172,   745,   203,   204,
     205,   206,   207,   208,   209,   824,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,   454,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,     0,     0,   130,     0,   106,   203,   204,   205,   206,
     207,   208,   209,     0,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,     0,     0,   130,     0,     0,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,     0,
       0,   130,    88,    89,    90,    91,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
       0,     0,     0,     0,    96,   203,   204,   205,   206,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,    99,     0,     0,
       0,   100,     0,     0,   101,   102,     0,     0,     0,     0,
     455,   203,   204,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   203,   204,   205,   206,   207,   208,   209,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   465,     0,
       0,     0,     0,   106,   203,   204,   205,   206,   207,   208,
     209,     0,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   203,   204,   205,   206,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,     0,     0,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,   205,   206,   207,   208,   209,   466,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,   467,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   204,   205,
     206,   207,   208,   209,   680,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   203,   204,
     205,   206,   207,   208,   209,     0,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   204,
     205,   206,   207,   208,   209,   451,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   203,
     204,   205,   206,   207,   208,   209,   457,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     203,   204,   205,   206,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,     0,   203,   204,   205,   206,   207,   208,
     209,   458,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   203,   204,   205,   206,   207,
     208,   209,   459,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   203,   204,   205,   206,
     207,   208,   209,     0,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     0,   460,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   203,   204,   205,   206,   207,   208,   209,   461,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   203,   204,   205,   206,   207,   208,   209,
       0,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,   205,   206,   207,   208,   209,
     462,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   203,   204,   205,   206,   207,   208,
     209,   463,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   203,   204,   205,   206,   207,
     208,   209,   464,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,     0,   203,   204,
     205,   206,   207,   208,   209,   674,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   203,
     204,   205,   206,   207,   208,   209,   679,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     203,   204,   205,   206,   207,   208,   209,   681,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,   716,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   204,   205,
     206,   207,   208,   209,   759,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   203,   204,
     205,   206,   207,   208,   209,     0,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,   206,   207,   208,   209,   783,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   203,
     204,   205,   206,   207,   208,   209,   808,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,   203,   204,   205,   206,   207,   208,   209,   827,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   203,   204,   205,   206,   207,   208,   209,
     828,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,     0,     0,
       0,   829,     0,     0,     0,     0,     0,   760,   761,     0,
       0,     0,   762,     0,   763,     0,     0,     0,     0,     0,
       0,     0,   847,     0,   392,   393,   394,   395,     0,   396,
       0,     0,   398,   399,   400,   764,   765,     0,   766,   404,
     405,   406,     0,     0,   409,     0,     0,     0,     0,     0,
       0,   203,   204,   205,   206,   207,   208,   209,   887,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   203,   204,   205,   206,   207,   208,   209,   931,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   249,   250,     0,   251,     0,   252,   253,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
     254,     0,     0,     0,     0,     0,     0,     0,   767,   768,
     949,     2,     0,     0,     0,     0,     0,     0,   255,   256,
     257,   258,     0,     0,   259,     0,     0,   179,   260,     0,
       3,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,     0,     0,     0,     0,     0,     0,
     262,     0,     0,     0,   263,     0,     0,     0,     0,     0,
     264,     0,   265,   266,   267,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     0,   268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,     0,
     269,   270,     0,   271,   272,     6,     0,   273,   274,     0,
       0,     7,     0,   275,   276,     0,     0,     0,   277,   569,
       8,     9,     0,   278,     0,   279,     0,     0,     0,   280,
       0,    10,     0,     0,    11,     0,     0,     0,     0,    12,
     203,   204,   205,   206,   207,   208,   209,     0,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   203,   204,   205,   206,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   203,   204,   205,   206,   207,   208,   209,     0,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     0,     0,     0,     0,     0,     0,     0,
       0,   203,   204,   205,   206,   207,   208,   209,   573,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,   568,     0,     0,     0,     0,   746,     0,
     202,     0,     0,     0,     0,     0,     0,   203,   204,   205,
     206,   207,   208,   209,   668,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,     0,     0,   747,     0,   223,   203,   204,   205,
     206,   207,   208,   209,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   203,   204,
     205,   206,   207,   208,   209,   476,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   203,
     204,   205,   206,   207,   208,   209,   584,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
    -291,  -291,  -291,  -291,     0,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222
};

static const yytype_int16 yycheck[] =
{
      49,   297,   535,   537,   646,   489,   137,   238,     3,   402,
     403,     3,     3,     3,   138,   408,   600,   410,     3,   648,
       3,    53,     3,   138,    60,    33,    50,    20,     3,   102,
       4,     5,     6,     7,    83,    84,   741,     3,    20,   441,
     291,    53,     6,     8,     3,    94,    95,    96,   128,   126,
     165,   100,   148,     3,    62,    87,    39,   173,   182,   701,
     438,    69,   440,     6,   735,   148,   139,   173,   470,   163,
      74,    79,    88,    88,    48,    18,   947,   265,   771,     0,
     166,   130,   156,   271,   178,   273,   202,     3,     3,   166,
     961,   962,     3,   626,   736,   737,   202,    68,   130,   123,
     156,   634,    82,    83,   200,    82,    83,    88,    74,    59,
     225,    18,   136,   364,   985,   649,   202,   200,   130,   128,
     124,   102,   202,   374,   148,   198,   175,   135,    39,   104,
     179,   112,   164,   169,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   380,
     131,   856,   164,    60,   203,   204,   205,   206,   207,   149,
     124,   169,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   298,   290,   141,   226,   807,   430,
     582,   124,   875,   561,   855,   563,   202,   202,   104,   104,
     774,   162,   725,   202,   174,   728,    18,   174,     3,     4,
       5,     6,     7,     8,   102,   200,   199,   691,   200,   200,
     200,   118,    17,    18,   148,   200,   199,   199,   342,   126,
      25,   195,   196,   197,    86,    35,   619,   351,   621,   622,
     189,   190,   191,   192,   876,   366,   156,   103,    60,   288,
     102,   139,    18,    48,   110,     9,   198,    52,   103,     3,
      55,    56,    89,    74,   102,    65,    20,    37,   307,   308,
     104,   492,   102,    59,   495,   798,   315,    63,   202,   803,
      10,    11,    12,    13,    14,    15,    16,    53,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   139,   129,    73,   343,   344,   118,   346,    74,   139,
     198,   156,   351,   124,   126,   167,    61,   103,   145,     3,
     166,   103,   166,   166,   156,   175,   199,   200,   851,   124,
       3,    10,    11,    12,    13,    14,    15,    16,    53,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   202,    98,   200,   141,   200,   200,    88,    50,
     474,   199,   200,   477,   478,   479,   202,   153,     3,   166,
     200,     3,    87,   179,    13,    14,   415,    16,   164,   174,
      19,    64,     3,    64,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   200,   443,   200,   445,    18,   113,     3,
     449,   450,    95,   452,    95,   130,   149,   166,     7,   102,
      39,   102,    11,   106,   173,    36,   465,   466,   467,   112,
     126,   112,   123,   138,   199,   549,    47,   476,   171,   926,
     201,   202,    53,    54,   179,   136,     3,   486,   179,   164,
     199,   201,   202,   202,   493,   201,   202,   148,   945,   946,
      57,    58,     3,    74,   201,   202,   752,   201,   202,     8,
      51,     3,   202,   960,   201,   202,   200,    10,    11,    12,
      13,    14,    15,    16,   523,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,   110,
     201,   202,     3,     4,     5,     6,     7,     8,   201,   202,
     199,   200,   551,   124,     9,   554,    17,    18,   200,   130,
     101,   560,   201,   202,    25,    26,   201,   202,   109,   200,
     569,   200,   113,    34,   573,   574,    26,    27,    28,    29,
      30,   122,   201,   202,   200,   584,   200,    48,   201,   202,
     200,    52,   200,   164,    55,    56,   200,   138,   201,   202,
     201,   202,   199,   200,   603,   146,    67,   201,   202,   608,
      71,   201,   202,   201,   202,   395,   396,   200,   398,   399,
     400,    47,   200,   116,   404,   405,   406,    53,   200,   409,
      39,   201,   202,   200,    95,    10,    11,    12,    13,    14,
      15,    16,   641,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   201,   202,   201,   202,
     200,    87,   200,   124,    90,   201,   202,   201,   202,   201,
     202,   670,   201,   202,   673,   201,   202,   103,   200,   140,
     200,   680,   143,   144,   110,   146,   201,   202,   201,   202,
     689,   690,   201,   202,   201,   202,   200,   696,   697,   201,
     202,   201,   202,   200,   130,   201,   202,   201,   202,   202,
     201,   202,   201,   202,   201,   202,   715,    47,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    47,   164,   200,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   750,   751,    47,   753,    47,   755,     3,     4,     5,
       6,     7,     8,    23,    24,    25,    26,    27,    28,    29,
      30,    17,    18,   201,   202,    47,   201,   202,    47,    25,
     201,   202,   201,   202,     3,     3,     4,     5,     6,     7,
       8,    24,    25,    26,    27,    28,    29,    30,    44,    17,
      18,     3,    48,   201,   202,   804,    52,    25,   126,    55,
      56,   376,   377,   484,   485,   179,    34,    35,   694,   695,
       3,    26,     3,     3,     3,   149,   201,   826,   201,   201,
      48,   201,   200,   832,    52,     3,     3,    55,    56,   201,
     839,    10,    11,    12,    13,    14,    15,    16,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     3,     4,     5,     6,     7,     8,   114,   109,
     125,     3,     3,     3,     3,     3,    17,    18,   124,     3,
       3,   200,    43,   200,    25,    26,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   895,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   124,    48,     3,   200,
     200,    52,   158,   200,    55,    56,   126,     3,   127,     3,
       3,   171,    91,   201,   142,   201,   201,   200,    30,   200,
     929,   109,   200,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   200,   110,   200,   126,   110,   110,   109,   152,
       5,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
       4,   124,   200,   124,     3,     4,     5,     6,     7,     8,
       5,     5,   200,   168,     3,     3,    42,   115,    17,    18,
     126,   200,    20,   108,   201,   201,    25,   128,     3,     3,
      92,    91,     3,     4,     5,     6,     7,     8,   200,   110,
     110,     3,    53,   200,   168,   201,    17,    18,   201,    48,
     200,     3,   201,    52,    25,   200,    55,    56,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    48,   200,   200,
     200,    52,   200,     3,    55,    56,   200,   110,   110,    88,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     3,   200,   200,   200,     3,     4,     5,     6,
       7,     8,     3,   110,     3,     3,    42,   201,   201,    97,
      17,    18,   201,   201,   201,   124,   109,   201,    25,    10,
      11,    12,    13,    14,    15,    16,   201,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     200,    48,   200,   124,   200,    52,    20,   200,    55,    56,
     200,   200,     3,     5,   148,     4,     4,   200,     3,     3,
       3,     3,     3,   200,     3,   168,   200,    74,   149,   200,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   200,
     200,   200,   162,    20,     3,     3,   202,     3,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   124,   201,   200,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   201,     4,   201,   201,   201,     3,     4,     5,     6,
       7,     8,   202,   200,   168,   200,   110,   110,   200,   200,
      17,    18,    20,    18,     3,     3,   200,   200,    25,   200,
       3,   137,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,    48,   202,   200,   106,    52,     3,   169,    55,    56,
       3,     4,     5,     6,     7,     8,   134,     3,     3,   201,
     134,   202,   200,   124,    17,    18,     3,    74,   200,     4,
       3,   110,    25,   110,     3,     4,     5,     6,     7,     8,
       3,     5,   200,   200,   134,   200,   200,   200,    17,    18,
     202,   110,   201,   201,   201,    48,    25,     3,     3,    52,
       3,     5,    55,    56,   200,     3,     3,    99,    60,    56,
     180,   201,   200,   749,   455,   226,   607,   124,    67,    48,
     482,    74,   232,    52,   426,   292,    55,    56,    44,   826,
     439,   169,   638,   650,   407,    -1,    87,   651,    10,    11,
      12,    13,    14,    15,    16,    74,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,    -1,    -1,   200,    -1,   124,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,    -1,    -1,   200,    -1,    -1,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,    -1,
      -1,   200,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    48,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,
     202,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,
      -1,    -1,    -1,   124,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    -1,    -1,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   202,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   202,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    11,
      12,    13,    14,    15,    16,   201,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   201,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   201,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   201,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,   201,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   201,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    12,    13,    14,    15,    16,
     201,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   201,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   201,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   201,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   201,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   201,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   201,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    13,    14,    15,    16,   201,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   201,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   201,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     201,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,    -1,   252,   253,   254,   255,    -1,   257,
      -1,    -1,   260,   261,   262,    93,    94,    -1,    96,   267,
     268,   269,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   201,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   201,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    40,    41,    -1,    43,    -1,    45,    46,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,
     201,    49,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,   174,    85,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
     117,    -1,   119,   120,   121,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
     147,   148,    -1,   150,   151,   133,    -1,   154,   155,    -1,
      -1,   139,    -1,   160,   161,    -1,    -1,    -1,   165,   157,
     148,   149,    -1,   170,    -1,   172,    -1,    -1,    -1,   176,
      -1,   159,    -1,    -1,   162,    -1,    -1,    -1,    -1,   167,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    88,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    82,    -1,    -1,    -1,    -1,    37,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    82,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    39,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    38,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    38,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    49,    68,    69,   105,   133,   139,   148,   149,
     159,   162,   167,   204,   213,   214,   246,   250,   251,   254,
     255,   256,   257,   258,   268,   269,   272,   274,   275,   276,
     295,   156,    59,    63,   103,   141,   153,   164,   277,   247,
     103,   156,   260,   156,   260,     8,   141,   296,   297,   227,
     156,   260,   270,     3,    59,     0,   198,     3,   104,   273,
       3,     3,   104,   273,   103,   156,     3,    88,   102,   112,
     131,   248,     3,     3,   104,    64,    95,   102,   106,   112,
     261,     3,   261,     9,    20,     3,    74,   202,     3,     4,
       5,     6,     7,     8,    17,    18,    25,    26,    34,    48,
      52,    55,    56,    67,    71,    95,   124,   140,   143,   144,
     146,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     200,   205,   228,   229,     3,   102,   112,     3,   200,   231,
     232,   233,   235,   245,     3,   204,    33,    62,    69,    79,
     135,   169,   179,     3,    39,   126,   179,     3,     3,   104,
     273,   199,   249,     3,   248,    88,   202,   179,     3,     3,
     205,   205,   297,   199,   200,     9,   205,   205,   205,   174,
     205,   212,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   205,     3,    10,    11,    12,    13,    14,    15,    16,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    39,   230,    88,   202,   199,   230,   214,
     231,   148,   202,    51,   101,   113,   122,   138,   146,   236,
     238,    39,   234,    47,    47,    47,    47,    47,    47,    40,
      41,    43,    45,    46,    57,    75,    76,    77,    78,    81,
      85,   100,   107,   111,   117,   119,   120,   121,   132,   147,
     148,   150,   151,   154,   155,   160,   161,   165,   170,   172,
     176,   291,     3,     3,   126,   179,     3,    26,   173,   215,
     166,   231,     3,     3,   148,   200,   262,   148,   262,     3,
     205,   206,   207,   205,   205,   212,    82,    83,   174,   214,
     205,    44,   114,   158,   205,   210,   205,   205,    26,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     201,   201,   201,   201,   205,   205,   205,   205,   205,     6,
      18,   124,   200,    13,    14,    16,    19,   205,    34,    35,
     142,   200,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,     3,   231,   229,     3,    86,   102,   167,
     242,   201,   201,     3,   271,   232,   113,   138,   239,   233,
     109,   125,   237,     3,     3,     3,     3,     3,     3,     3,
     200,   287,   287,   287,   287,   287,   287,   200,   287,   287,
     287,    43,   288,   288,   287,   287,   287,   200,   288,   287,
     288,   200,   200,    18,    53,    74,   166,   200,   126,     3,
       3,   102,   139,   199,   200,   293,   294,   205,   127,   221,
     231,   215,   249,     3,   267,     3,   263,   171,   267,   171,
     214,   202,   201,   157,    82,    83,   205,   205,   201,    88,
     202,   201,    88,   205,   202,   202,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   202,   202,   202,     6,   124,
     208,   214,   205,   205,   200,   205,    38,   200,   200,   200,
     214,   215,   230,   110,   110,   110,    20,   199,   202,   215,
     237,   237,   109,   126,   233,   109,    53,    87,   130,   164,
     152,     5,   289,   290,   289,   289,     4,   292,   289,   289,
     289,   290,   290,   289,   289,   289,   292,   290,   289,   290,
       5,     5,   124,   200,   205,   168,     3,   189,   190,   191,
     192,   252,   253,     3,   166,   200,   126,     3,    47,    53,
      87,    90,   103,   110,   130,   164,   278,   279,   285,   234,
      42,   115,   224,   215,    20,   128,   202,   259,   201,   202,
     200,   264,   259,   264,   259,   206,   205,   205,    82,   157,
     205,   205,   205,    88,   108,   211,   211,   205,   205,   205,
     206,   201,   209,   214,    38,   205,   214,   214,   214,   201,
      92,   216,   242,    91,   243,   243,   243,   205,     3,     3,
     221,   233,   205,   126,   166,   240,   241,   233,   200,   110,
     110,   200,     3,   201,   202,   163,   178,    57,    58,   201,
     202,   201,   201,   201,    53,   205,   200,   200,   200,   200,
     200,   201,   202,   166,   200,   168,   252,     3,   200,   293,
       3,   200,   110,   103,   110,   200,   200,   110,   200,   201,
     202,     3,   214,     3,   222,   223,   205,    74,   205,   110,
       3,     3,    74,   205,   266,   202,   259,   259,    82,   205,
      91,   201,   201,   202,   201,   205,   205,   201,   201,   201,
     202,   201,   201,   206,   201,   205,   201,   201,   201,    42,
      97,   220,   109,   200,   200,   200,    20,    20,   199,   224,
     205,   200,   241,   205,   200,   200,     3,   284,     5,   148,
       4,   290,     4,   290,   290,   200,   201,   252,     3,     3,
       3,     3,     3,   168,   252,   200,   201,   166,   200,   278,
      53,    87,   130,   164,   205,   200,   200,   200,     3,   226,
     226,   200,   284,   293,   279,   291,    37,    73,   218,   202,
     116,   202,   162,    20,   201,   202,   265,   205,   205,   201,
      65,    66,    70,    72,    93,    94,    96,   176,   177,   205,
     201,   205,   217,   205,   221,     3,   244,   244,   244,   205,
     205,     3,   226,   201,     3,   281,     3,   280,   201,   202,
     201,     4,   205,   201,   201,   201,   201,   202,   200,   201,
     252,   168,   252,   201,   200,   110,   110,   200,   201,   281,
     226,   226,   201,   202,   201,   280,   201,   286,   223,   205,
     205,   267,    74,   205,    74,   205,   200,   201,   201,   201,
     218,   175,   202,   219,   224,   201,   202,   201,   201,    20,
     201,    18,   201,   202,   201,   202,     3,   201,     3,   252,
     201,   200,   201,   293,   205,   200,   200,   284,   201,   201,
     201,     3,   201,    18,    36,    47,    53,    54,    74,   110,
     124,   130,   164,   266,   137,   205,   106,   225,     3,   205,
     169,   134,     3,     3,   201,   201,   252,   201,   281,   280,
     201,   134,   124,   200,     3,   200,     4,     4,     5,     6,
       7,    48,   195,   196,   197,   110,   110,   201,   218,   226,
       3,   201,   201,   201,     3,     5,    53,   130,   164,   205,
     200,   200,   200,   200,   134,   199,   200,   201,   202,   200,
     110,   201,   201,   201,   201,     3,   282,     3,     3,   282,
       5,   205,   201,   202,   199,   200,   200,   201,   201,   201,
     283,     3,     3,   282,   282,   283,    18,    60,   118,   126,
     200,   201,   201,    18,    60,   169,    99,    89,   129,   145,
      68,   162,   282,   283,   283,    61,    98,    50,   123,   136,
     148,    50,   123,   136,   148,   201,    74,   124,    74,   124,
     283
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
#line 296 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 302 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 303 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 305 "parser/evoparser.y"
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
#line 323 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 331 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 339 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 345 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 352 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 353 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 354 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 355 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 356 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 357 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 358 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 359 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 360 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 361 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 362 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 363 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 364 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 365 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 366 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 367 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 368 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 370 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 375 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 376 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 377 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 378 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 381 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 382 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 383 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 384 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 385 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 388 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 389 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 392 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_inListCount < MAX_IN_LIST) g_inListExprs[g_inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 393 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_inListCount; _i>0; _i--) g_inListExprs[_i]=g_inListExprs[_i-1]; g_inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_inListCount++; } ;}
    break;

  case 43:
#line 396 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 400 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 46:
#line 400 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 47:
#line 401 "parser/evoparser.y"
    { g_inListCount = 0; ;}
    break;

  case 48:
#line 401 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_inListExprs, g_inListCount); ;}
    break;

  case 49:
#line 402 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 403 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 404 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 408 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 412 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 413 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 414 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 415 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 416 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 417 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 419 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 420 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 421 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 422 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 423 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 424 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 425 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 426 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 427 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 428 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 429 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 430 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 431 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 432 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 439 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 446 "parser/evoparser.y"
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
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 76:
#line 456 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 77:
#line 457 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 78:
#line 460 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 79:
#line 461 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 80:
#line 464 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 81:
#line 465 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 82:
#line 466 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 83:
#line 467 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 84:
#line 468 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 85:
#line 469 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 86:
#line 470 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 87:
#line 471 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 88:
#line 472 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 89:
#line 476 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_caseWhenCount, NULL); ;}
    break;

  case 90:
#line 478 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 91:
#line 480 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, NULL); ;}
    break;

  case 92:
#line 482 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 93:
#line 486 "parser/evoparser.y"
    {
        g_caseWhenCount = 0;
        g_caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 94:
#line 494 "parser/evoparser.y"
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
#line 504 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 96:
#line 505 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 97:
#line 508 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 98:
#line 509 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 99:
#line 513 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 100:
#line 521 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 529 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 540 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 103:
#line 549 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_selectDistinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 104:
#line 554 "parser/evoparser.y"
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
#line 565 "parser/evoparser.y"
    { emit("WHERE"); g_whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 108:
#line 567 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 109:
#line 570 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_groupByCount = 0;
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 110:
#line 577 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_groupByCount < MAX_GROUP_BY)
            g_groupByExprs[g_groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 111:
#line 585 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 112:
#line 586 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 587 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 114:
#line 590 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 115:
#line 591 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 117:
#line 595 "parser/evoparser.y"
    { emit("HAVING"); g_havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 122:
#line 607 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 123:
#line 614 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 124:
#line 615 "parser/evoparser.y"
    { emit("LIMIT 1"); g_limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 125:
#line 616 "parser/evoparser.y"
    { emit("LIMIT 2"); g_offsetExpr = (yyvsp[(2) - (4)].exprval); g_limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 126:
#line 617 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_limitExpr = (yyvsp[(2) - (4)].exprval); g_offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 128:
#line 621 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 129:
#line 624 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 130:
#line 625 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 131:
#line 628 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 132:
#line 629 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 133:
#line 630 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 134:
#line 631 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 135:
#line 632 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 136:
#line 633 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 137:
#line 634 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 138:
#line 635 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 139:
#line 636 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 140:
#line 639 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 141:
#line 640 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 142:
#line 642 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 143:
#line 650 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 144:
#line 655 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 145:
#line 656 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 146:
#line 657 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 147:
#line 660 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 148:
#line 661 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 151:
#line 670 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 152:
#line 675 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 153:
#line 676 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 154:
#line 677 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 157:
#line 686 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 158:
#line 688 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 159:
#line 690 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 160:
#line 692 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 161:
#line 694 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 162:
#line 697 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 163:
#line 698 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 164:
#line 699 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 165:
#line 702 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 166:
#line 703 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 167:
#line 706 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 168:
#line 707 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 169:
#line 710 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 170:
#line 711 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 171:
#line 712 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 174:
#line 719 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 175:
#line 720 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 176:
#line 725 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 177:
#line 727 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 178:
#line 729 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 180:
#line 733 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 181:
#line 734 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 182:
#line 737 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 183:
#line 738 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 184:
#line 741 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 185:
#line 746 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 186:
#line 754 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 187:
#line 761 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 188:
#line 762 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 189:
#line 763 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 190:
#line 764 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 191:
#line 768 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 192:
#line 771 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 193:
#line 772 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 196:
#line 777 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 197:
#line 782 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 198:
#line 789 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_dropIfExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 199:
#line 796 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_dropIfExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 200:
#line 806 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 201:
#line 813 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 202:
#line 820 "parser/evoparser.y"
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
#line 830 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 204:
#line 838 "parser/evoparser.y"
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
#line 848 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 206:
#line 856 "parser/evoparser.y"
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
#line 865 "parser/evoparser.y"
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
#line 874 "parser/evoparser.y"
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
#line 886 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 210:
#line 891 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 211:
#line 896 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 212:
#line 902 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 213:
#line 909 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 214:
#line 916 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 215:
#line 923 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 216:
#line 933 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 217:
#line 940 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 218:
#line 949 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 219:
#line 956 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 220:
#line 965 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 221:
#line 972 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 222:
#line 980 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 223:
#line 984 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 224:
#line 990 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 225:
#line 996 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 226:
#line 1003 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 227:
#line 1009 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 228:
#line 1016 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 229:
#line 1022 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 230:
#line 1028 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 231:
#line 1034 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 232:
#line 1040 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 233:
#line 1046 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 234:
#line 1054 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 235:
#line 1061 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 237:
#line 1069 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 238:
#line 1072 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 239:
#line 1073 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 240:
#line 1074 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 241:
#line 1075 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 242:
#line 1076 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 246:
#line 1083 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 247:
#line 1087 "parser/evoparser.y"
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

  case 248:
#line 1097 "parser/evoparser.y"
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

  case 249:
#line 1109 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 250:
#line 1110 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 251:
#line 1110 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 252:
#line 1113 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 253:
#line 1114 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 254:
#line 1115 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 255:
#line 1116 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 256:
#line 1120 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 257:
#line 1123 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 258:
#line 1124 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 259:
#line 1125 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 260:
#line 1126 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 261:
#line 1132 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 262:
#line 1138 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 263:
#line 1143 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 264:
#line 1148 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 265:
#line 1153 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 266:
#line 1160 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 267:
#line 1165 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 268:
#line 1166 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 269:
#line 1167 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 270:
#line 1172 "parser/evoparser.y"
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

  case 271:
#line 1183 "parser/evoparser.y"
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

  case 272:
#line 1194 "parser/evoparser.y"
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

  case 273:
#line 1205 "parser/evoparser.y"
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

  case 274:
#line 1218 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 275:
#line 1222 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 276:
#line 1223 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 277:
#line 1226 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 278:
#line 1227 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 279:
#line 1231 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 280:
#line 1236 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 281:
#line 1238 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 282:
#line 1240 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 283:
#line 1242 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 284:
#line 1244 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 285:
#line 1248 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 286:
#line 1252 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 287:
#line 1253 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 288:
#line 1258 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 289:
#line 1266 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        g_isTemporary = (yyvsp[(2) - (8)].intval);
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 290:
#line 1275 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); g_isTemporary = (yyvsp[(2) - (10)].intval); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 291:
#line 1280 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 292:
#line 1284 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 293:
#line 1289 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 294:
#line 1293 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 295:
#line 1296 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 296:
#line 1297 "parser/evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 297:
#line 1300 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 298:
#line 1301 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 299:
#line 1304 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 300:
#line 1305 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 301:
#line 1306 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 302:
#line 1307 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 303:
#line 1308 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 304:
#line 1309 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 305:
#line 1310 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 306:
#line 1311 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 307:
#line 1313 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 308:
#line 1315 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 309:
#line 1317 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 310:
#line 1319 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 311:
#line 1321 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 312:
#line 1323 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 313:
#line 1326 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 314:
#line 1327 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 315:
#line 1330 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 316:
#line 1331 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 317:
#line 1334 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 318:
#line 1335 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 320:
#line 1339 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 321:
#line 1340 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 322:
#line 1341 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 323:
#line 1342 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 324:
#line 1343 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 325:
#line 1344 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 326:
#line 1345 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 327:
#line 1346 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 328:
#line 1347 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 329:
#line 1348 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 330:
#line 1349 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 331:
#line 1350 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 332:
#line 1351 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 333:
#line 1352 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 334:
#line 1353 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 335:
#line 1354 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 336:
#line 1355 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 337:
#line 1358 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 338:
#line 1359 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 339:
#line 1362 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 340:
#line 1364 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 341:
#line 1372 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 342:
#line 1373 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 344:
#line 1375 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 345:
#line 1376 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 346:
#line 1377 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 347:
#line 1378 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 348:
#line 1379 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 349:
#line 1380 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 350:
#line 1381 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 351:
#line 1382 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 352:
#line 1383 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 353:
#line 1384 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 354:
#line 1385 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 355:
#line 1386 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 356:
#line 1387 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 357:
#line 1388 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 358:
#line 1389 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 359:
#line 1390 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 360:
#line 1391 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 361:
#line 1392 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 362:
#line 1393 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 363:
#line 1394 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_checkNames[g_checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 364:
#line 1397 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 365:
#line 1398 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 366:
#line 1399 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 367:
#line 1402 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 368:
#line 1403 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 369:
#line 1406 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 370:
#line 1407 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 371:
#line 1408 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 373:
#line 1412 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 374:
#line 1413 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 375:
#line 1417 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 376:
#line 1418 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 377:
#line 1419 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 378:
#line 1420 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 379:
#line 1421 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 380:
#line 1422 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 381:
#line 1423 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 382:
#line 1424 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 383:
#line 1425 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 384:
#line 1426 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 385:
#line 1427 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 386:
#line 1428 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 387:
#line 1429 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 388:
#line 1430 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 389:
#line 1431 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 390:
#line 1432 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 391:
#line 1433 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 392:
#line 1434 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 393:
#line 1435 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 394:
#line 1436 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 395:
#line 1437 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 396:
#line 1438 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 397:
#line 1439 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 398:
#line 1440 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 399:
#line 1441 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 400:
#line 1442 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 401:
#line 1443 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 402:
#line 1444 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 403:
#line 1445 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 404:
#line 1446 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 405:
#line 1447 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 406:
#line 1448 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 407:
#line 1451 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 408:
#line 1452 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 409:
#line 1456 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 410:
#line 1459 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 411:
#line 1460 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 412:
#line 1461 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 413:
#line 1465 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 414:
#line 1468 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 415:
#line 1469 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 419:
#line 1473 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 420:
#line 1474 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5320 "parser/evoparser.tab.c"
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


#line 1477 "parser/evoparser.y"

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
