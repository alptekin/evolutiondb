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
     ALWAYS = 287,
     IDENTITY = 288,
     GENERATED = 289,
     STORED = 290,
     VIRTUAL = 291,
     BLOB = 292,
     BOOLEAN = 293,
     BY = 294,
     BINARY = 295,
     BOTH = 296,
     BIGINT = 297,
     BIT = 298,
     CONSTRAINT = 299,
     CURRENT_TIMESTAMP = 300,
     CREATE = 301,
     CASCADE = 302,
     CROSS = 303,
     CASE = 304,
     CHECK = 305,
     COMMENT = 306,
     CURRENT_DATE = 307,
     CURRENT_TIME = 308,
     CHAR = 309,
     COLLATE = 310,
     DATABASE = 311,
     DEFERRABLE = 312,
     DEFERRED = 313,
     DISABLE = 314,
     DOMAIN = 315,
     DELAYED = 316,
     DAY_HOUR = 317,
     DAY_MICROSECOND = 318,
     DISTINCT = 319,
     DELETE = 320,
     DROP = 321,
     DAY_MINUTE = 322,
     DISTINCTROW = 323,
     DAY_SECOND = 324,
     DESC = 325,
     DEFAULT = 326,
     DOUBLE = 327,
     DATETIME = 328,
     DECIMAL = 329,
     DATE = 330,
     ENABLE = 331,
     ESCAPED = 332,
     ENUM = 333,
     END = 334,
     ELSE = 335,
     EXPLAIN = 336,
     FLOAT = 337,
     FORCE = 338,
     FOREIGN = 339,
     FROM = 340,
     FULL = 341,
     FULLTEXT = 342,
     FOR = 343,
     GROUP = 344,
     HOUR_MINUTE = 345,
     HOUR_MICROSECOND = 346,
     HIGH_PRIORITY = 347,
     HOUR_SECOND = 348,
     HAVING = 349,
     IMMEDIATE = 350,
     INITIALLY = 351,
     INTEGER = 352,
     INNER = 353,
     IGNORE = 354,
     INDEX = 355,
     IF = 356,
     INSERT = 357,
     INTO = 358,
     INT = 359,
     INTERVAL = 360,
     JOIN = 361,
     KEY = 362,
     LONGTEXT = 363,
     LOW_PRIORITY = 364,
     LEFT = 365,
     LEADING = 366,
     LIMIT = 367,
     OFFSET = 368,
     LONGBLOB = 369,
     MATCH = 370,
     MEDIUMTEXT = 371,
     MEDIUMBLOB = 372,
     MEDIUMINT = 373,
     NATURAL = 374,
     NO_ACTION = 375,
     NULLX = 376,
     OUTER = 377,
     ON = 378,
     ORDER = 379,
     ONDUPLICATE = 380,
     PARTIAL = 381,
     PRIMARY = 382,
     QUICK = 383,
     REAL = 384,
     RECLAIM = 385,
     REFERENCES = 386,
     RENAME = 387,
     RESTRICT = 388,
     ROLLUP = 389,
     RIGHT = 390,
     REPLACE = 391,
     SQL_SMALL_RESULT = 392,
     SCHEMA = 393,
     SOME = 394,
     SQL_CALC_FOUND_ROWS = 395,
     SQL_BIG_RESULT = 396,
     SIMPLE = 397,
     STRAIGHT_JOIN = 398,
     SMALLINT = 399,
     SET = 400,
     SELECT = 401,
     TINYTEXT = 402,
     TINYINT = 403,
     TO = 404,
     TEMPORARY = 405,
     GLOBAL = 406,
     PRESERVE = 407,
     TEXT = 408,
     TIMESTAMP = 409,
     TABLE = 410,
     THEN = 411,
     TRAILING = 412,
     TRUNCATE = 413,
     TINYBLOB = 414,
     TIME = 415,
     UPDATE = 416,
     UNSIGNED = 417,
     UNIQUE = 418,
     UUID = 419,
     USING = 420,
     USE = 421,
     HASH = 422,
     VALIDATE = 423,
     VARCHAR = 424,
     VALUES = 425,
     VARBINARY = 426,
     WHERE = 427,
     WHEN = 428,
     WITH = 429,
     YEAR = 430,
     YEAR_MONTH = 431,
     ZEROFILL = 432,
     EXISTS = 433,
     FSUBSTRING = 434,
     FTRIM = 435,
     FDATE_ADD = 436,
     FDATE_SUB = 437,
     FCOUNT = 438,
     FSUM = 439,
     FAVG = 440,
     FMIN = 441,
     FMAX = 442,
     FUPPER = 443,
     FLOWER = 444,
     FLENGTH = 445,
     FCONCAT = 446,
     FREPLACE = 447,
     FCOALESCE = 448,
     FGEN_RANDOM_UUID = 449,
     FGEN_RANDOM_UUID_V7 = 450,
     FSNOWFLAKE_ID = 451,
     FLAST_INSERT_ID = 452
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
#define ALWAYS 287
#define IDENTITY 288
#define GENERATED 289
#define STORED 290
#define VIRTUAL 291
#define BLOB 292
#define BOOLEAN 293
#define BY 294
#define BINARY 295
#define BOTH 296
#define BIGINT 297
#define BIT 298
#define CONSTRAINT 299
#define CURRENT_TIMESTAMP 300
#define CREATE 301
#define CASCADE 302
#define CROSS 303
#define CASE 304
#define CHECK 305
#define COMMENT 306
#define CURRENT_DATE 307
#define CURRENT_TIME 308
#define CHAR 309
#define COLLATE 310
#define DATABASE 311
#define DEFERRABLE 312
#define DEFERRED 313
#define DISABLE 314
#define DOMAIN 315
#define DELAYED 316
#define DAY_HOUR 317
#define DAY_MICROSECOND 318
#define DISTINCT 319
#define DELETE 320
#define DROP 321
#define DAY_MINUTE 322
#define DISTINCTROW 323
#define DAY_SECOND 324
#define DESC 325
#define DEFAULT 326
#define DOUBLE 327
#define DATETIME 328
#define DECIMAL 329
#define DATE 330
#define ENABLE 331
#define ESCAPED 332
#define ENUM 333
#define END 334
#define ELSE 335
#define EXPLAIN 336
#define FLOAT 337
#define FORCE 338
#define FOREIGN 339
#define FROM 340
#define FULL 341
#define FULLTEXT 342
#define FOR 343
#define GROUP 344
#define HOUR_MINUTE 345
#define HOUR_MICROSECOND 346
#define HIGH_PRIORITY 347
#define HOUR_SECOND 348
#define HAVING 349
#define IMMEDIATE 350
#define INITIALLY 351
#define INTEGER 352
#define INNER 353
#define IGNORE 354
#define INDEX 355
#define IF 356
#define INSERT 357
#define INTO 358
#define INT 359
#define INTERVAL 360
#define JOIN 361
#define KEY 362
#define LONGTEXT 363
#define LOW_PRIORITY 364
#define LEFT 365
#define LEADING 366
#define LIMIT 367
#define OFFSET 368
#define LONGBLOB 369
#define MATCH 370
#define MEDIUMTEXT 371
#define MEDIUMBLOB 372
#define MEDIUMINT 373
#define NATURAL 374
#define NO_ACTION 375
#define NULLX 376
#define OUTER 377
#define ON 378
#define ORDER 379
#define ONDUPLICATE 380
#define PARTIAL 381
#define PRIMARY 382
#define QUICK 383
#define REAL 384
#define RECLAIM 385
#define REFERENCES 386
#define RENAME 387
#define RESTRICT 388
#define ROLLUP 389
#define RIGHT 390
#define REPLACE 391
#define SQL_SMALL_RESULT 392
#define SCHEMA 393
#define SOME 394
#define SQL_CALC_FOUND_ROWS 395
#define SQL_BIG_RESULT 396
#define SIMPLE 397
#define STRAIGHT_JOIN 398
#define SMALLINT 399
#define SET 400
#define SELECT 401
#define TINYTEXT 402
#define TINYINT 403
#define TO 404
#define TEMPORARY 405
#define GLOBAL 406
#define PRESERVE 407
#define TEXT 408
#define TIMESTAMP 409
#define TABLE 410
#define THEN 411
#define TRAILING 412
#define TRUNCATE 413
#define TINYBLOB 414
#define TIME 415
#define UPDATE 416
#define UNSIGNED 417
#define UNIQUE 418
#define UUID 419
#define USING 420
#define USE 421
#define HASH 422
#define VALIDATE 423
#define VARCHAR 424
#define VALUES 425
#define VARBINARY 426
#define WHERE 427
#define WHEN 428
#define WITH 429
#define YEAR 430
#define YEAR_MONTH 431
#define ZEROFILL 432
#define EXISTS 433
#define FSUBSTRING 434
#define FTRIM 435
#define FDATE_ADD 436
#define FDATE_SUB 437
#define FCOUNT 438
#define FSUM 439
#define FAVG 440
#define FMIN 441
#define FMAX 442
#define FUPPER 443
#define FLOWER 444
#define FLENGTH 445
#define FCONCAT 446
#define FREPLACE 447
#define FCOALESCE 448
#define FGEN_RANDOM_UUID 449
#define FGEN_RANDOM_UUID_V7 450
#define FSNOWFLAKE_ID 451
#define FLAST_INSERT_ID 452




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
#line 515 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 528 "parser/evoparser.tab.c"

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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2877

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  212
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  440
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1038

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   452

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     209,   210,    26,    24,   211,    25,   208,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   207,
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
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206
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
     312,   321,   328,   332,   336,   340,   344,   346,   348,   350,
     357,   364,   368,   372,   376,   380,   384,   388,   392,   396,
     400,   405,   412,   416,   422,   427,   433,   437,   442,   446,
     451,   453,   455,   457,   459,   463,   475,   476,   479,   480,
     485,   488,   493,   494,   496,   498,   499,   502,   503,   506,
     507,   511,   513,   517,   520,   521,   524,   529,   534,   535,
     538,   540,   544,   545,   548,   551,   554,   557,   560,   563,
     566,   569,   571,   575,   577,   580,   583,   585,   586,   588,
     592,   594,   596,   600,   606,   610,   614,   616,   617,   623,
     627,   633,   640,   646,   647,   649,   651,   652,   654,   656,
     658,   661,   664,   665,   666,   668,   671,   676,   683,   690,
     697,   698,   701,   702,   704,   708,   712,   714,   722,   725,
     728,   731,   732,   739,   742,   747,   748,   751,   759,   761,
     765,   771,   773,   782,   793,   803,   815,   826,   839,   851,
     865,   867,   871,   873,   878,   883,   888,   895,   897,   901,
     903,   907,   909,   913,   915,   919,   925,   927,   938,   949,
     967,   980,  1000,  1012,  1019,  1028,  1035,  1042,  1049,  1051,
    1060,  1061,  1066,  1067,  1070,  1073,  1076,  1079,  1081,  1082,
    1083,  1087,  1089,  1093,  1097,  1098,  1105,  1107,  1109,  1113,
    1117,  1125,  1129,  1133,  1139,  1145,  1147,  1156,  1164,  1172,
    1174,  1183,  1184,  1187,  1190,  1194,  1200,  1206,  1214,  1216,
    1221,  1226,  1227,  1230,  1232,  1238,  1246,  1254,  1264,  1276,
    1278,  1281,  1285,  1287,  1297,  1309,  1310,  1315,  1319,  1325,
    1331,  1341,  1348,  1360,  1369,  1370,  1372,  1375,  1377,  1381,
    1387,  1395,  1400,  1405,  1411,  1417,  1422,  1429,  1441,  1455,
    1469,  1485,  1490,  1497,  1499,  1503,  1505,  1509,  1511,  1515,
    1516,  1521,  1527,  1532,  1538,  1543,  1549,  1554,  1560,  1565,
    1570,  1574,  1578,  1582,  1585,  1589,  1594,  1599,  1601,  1605,
    1606,  1611,  1612,  1616,  1619,  1623,  1627,  1631,  1635,  1641,
    1647,  1653,  1657,  1663,  1666,  1674,  1680,  1688,  1694,  1697,
    1701,  1704,  1708,  1711,  1715,  1721,  1726,  1732,  1740,  1749,
    1758,  1766,  1773,  1780,  1786,  1787,  1791,  1797,  1798,  1800,
    1801,  1804,  1807,  1808,  1813,  1817,  1820,  1824,  1828,  1832,
    1836,  1840,  1844,  1848,  1852,  1856,  1860,  1862,  1864,  1866,
    1868,  1870,  1874,  1880,  1883,  1888,  1890,  1892,  1894,  1896,
    1900,  1904,  1908,  1912,  1918,  1924,  1926,  1928,  1930,  1934,
    1938,  1939,  1941,  1943,  1945,  1949,  1953,  1956,  1958,  1962,
    1966
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     213,     0,    -1,   222,   207,    -1,   222,   207,   213,    -1,
       3,    -1,     3,   208,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   130,    -1,   214,    24,
     214,    -1,   214,    25,   214,    -1,   214,    26,   214,    -1,
     214,    27,   214,    -1,   214,    28,   214,    -1,   214,    29,
     214,    -1,    25,   214,    -1,   209,   214,   210,    -1,   214,
      12,   214,    -1,   214,    10,   214,    -1,   214,    11,   214,
      -1,   214,    21,   214,    -1,   214,    22,   214,    -1,   214,
      30,   214,    -1,   214,    23,   214,    -1,    18,   214,    -1,
      17,   214,    -1,   214,    20,   214,    -1,   214,    20,   209,
     223,   210,    -1,   214,    20,    36,   209,   223,   210,    -1,
     214,    20,   148,   209,   223,   210,    -1,   214,    20,    34,
     209,   223,   210,    -1,   214,    15,   130,    -1,   214,    15,
      18,   130,    -1,   214,    15,     6,    -1,   214,    15,    18,
       6,    -1,     8,     9,   214,    -1,   214,    19,   214,    39,
     214,    -1,   214,    18,    19,   214,    39,   214,    -1,   214,
      -1,   214,   211,   215,    -1,    -1,   215,    -1,    -1,   214,
      16,   209,   217,   215,   210,    -1,    -1,   214,    18,    16,
     209,   218,   215,   210,    -1,   214,    16,   209,   223,   210,
      -1,   214,    18,    16,   209,   223,   210,    -1,   187,   209,
     223,   210,    -1,     3,   209,   216,   210,    -1,   192,   209,
      26,   210,    -1,   192,   209,   214,   210,    -1,   193,   209,
     214,   210,    -1,   194,   209,   214,   210,    -1,   195,   209,
     214,   210,    -1,   196,   209,   214,   210,    -1,   188,   209,
     214,   211,   214,   211,   214,   210,    -1,   188,   209,   214,
     211,   214,   210,    -1,   188,   209,   214,    94,   214,   210,
      -1,   188,   209,   214,    94,   214,    97,   214,   210,    -1,
     189,   209,   214,   210,    -1,   189,   209,   219,   214,    94,
     214,   210,    -1,   189,   209,   219,    94,   214,   210,    -1,
     197,   209,   214,   210,    -1,   198,   209,   214,   210,    -1,
     199,   209,   214,   210,    -1,   200,   209,   214,   211,   214,
     210,    -1,   201,   209,   214,   211,   214,   211,   214,   210,
      -1,   202,   209,   214,   211,   214,   210,    -1,   203,   209,
     210,    -1,   204,   209,   210,    -1,   205,   209,   210,    -1,
     206,   209,   210,    -1,   120,    -1,   166,    -1,    50,    -1,
     190,   209,   214,   211,   220,   210,    -1,   191,   209,   214,
     211,   220,   210,    -1,   114,   214,    71,    -1,   114,   214,
      72,    -1,   114,   214,    76,    -1,   114,   214,    78,    -1,
     114,   214,   185,    -1,   114,   214,   184,    -1,   114,   214,
     100,    -1,   114,   214,    99,    -1,   114,   214,   102,    -1,
      58,   214,   221,    88,    -1,    58,   214,   221,    89,   214,
      88,    -1,    58,   221,    88,    -1,    58,   221,    89,   214,
      88,    -1,   182,   214,   165,   214,    -1,   221,   182,   214,
     165,   214,    -1,   214,    14,   214,    -1,   214,    18,    14,
     214,    -1,   214,    13,   214,    -1,   214,    18,    13,   214,
      -1,    54,    -1,    61,    -1,    62,    -1,   223,    -1,   155,
     236,   237,    -1,   155,   236,   237,    94,   240,   224,   225,
     229,   230,   233,   234,    -1,    -1,   181,   214,    -1,    -1,
      98,    48,   226,   228,    -1,   214,   227,    -1,   226,   211,
     214,   227,    -1,    -1,    38,    -1,    79,    -1,    -1,   183,
     143,    -1,    -1,   103,   214,    -1,    -1,   133,    48,   231,
      -1,   232,    -1,   231,   211,   232,    -1,     3,   227,    -1,
      -1,   121,   214,    -1,   121,   214,   211,   214,    -1,   121,
     214,   122,   214,    -1,    -1,   112,   235,    -1,     3,    -1,
     235,   211,     3,    -1,    -1,   236,    34,    -1,   236,    73,
      -1,   236,    77,    -1,   236,   101,    -1,   236,   152,    -1,
     236,   146,    -1,   236,   150,    -1,   236,   149,    -1,   238,
      -1,   237,   211,   238,    -1,    26,    -1,   214,   239,    -1,
      40,     3,    -1,     3,    -1,    -1,   241,    -1,   240,   211,
     241,    -1,   242,    -1,   244,    -1,     3,   239,   251,    -1,
       3,   208,     3,   239,   251,    -1,   254,   243,     3,    -1,
     209,   240,   210,    -1,    40,    -1,    -1,   241,   245,   115,
     242,   249,    -1,   241,   152,   242,    -1,   241,   152,   242,
     132,   214,    -1,   241,   247,   246,   115,   242,   250,    -1,
     241,   128,   248,   115,   242,    -1,    -1,   107,    -1,    57,
      -1,    -1,   131,    -1,   119,    -1,   144,    -1,   119,   246,
      -1,   144,   246,    -1,    -1,    -1,   250,    -1,   132,   214,
      -1,   174,   209,   235,   210,    -1,   175,   116,   252,   209,
     253,   210,    -1,   108,   116,   252,   209,   253,   210,    -1,
      92,   116,   252,   209,   253,   210,    -1,    -1,    97,   115,
      -1,    -1,     3,    -1,   253,   211,     3,    -1,   209,   223,
     210,    -1,   255,    -1,    74,   256,    94,     3,   224,   230,
     233,    -1,   256,   118,    -1,   256,   137,    -1,   256,   108,
      -1,    -1,    74,   256,   257,    94,   240,   224,    -1,     3,
     258,    -1,   257,   211,     3,   258,    -1,    -1,   208,    26,
      -1,    74,   256,    94,   257,   174,   240,   224,    -1,   259,
      -1,    75,   164,     3,    -1,    75,   164,   110,   187,     3,
      -1,   260,    -1,    55,   109,     3,   132,     3,   209,   261,
     210,    -1,    55,   109,   110,   187,     3,   132,     3,   209,
     261,   210,    -1,    55,   172,   109,     3,   132,     3,   209,
     261,   210,    -1,    55,   172,   109,   110,   187,     3,   132,
       3,   209,   261,   210,    -1,    55,   109,     3,   132,     3,
     174,   176,   209,   261,   210,    -1,    55,   109,   110,   187,
       3,   132,     3,   174,   176,   209,   261,   210,    -1,    55,
     172,   109,     3,   132,     3,   174,   176,   209,   261,   210,
      -1,    55,   172,   109,   110,   187,     3,   132,     3,   174,
     176,   209,   261,   210,    -1,     3,    -1,   261,   211,     3,
      -1,   262,    -1,   197,   209,     3,   210,    -1,   198,   209,
       3,   210,    -1,   199,   209,     3,   210,    -1,   200,   209,
       3,   211,     3,   210,    -1,   263,    -1,    75,   109,     3,
      -1,   264,    -1,   167,   164,     3,    -1,   265,    -1,   139,
     164,     3,    -1,   266,    -1,    35,   164,     3,    -1,    35,
     164,     3,   208,     3,    -1,   267,    -1,    32,   164,     3,
      33,    53,     3,    59,   209,   214,   210,    -1,    32,   164,
       3,    33,    53,     3,   172,   209,   295,   210,    -1,    32,
     164,     3,    33,    53,     3,    93,   116,   209,   292,   210,
     140,     3,   209,   293,   210,   294,    -1,    32,   164,     3,
      33,    53,     3,    59,   209,   214,   210,    18,   177,    -1,
      32,   164,     3,    33,    53,     3,    93,   116,   209,   292,
     210,   140,     3,   209,   293,   210,   294,    18,   177,    -1,
      32,   164,     3,    33,    53,     3,   136,   116,   209,   291,
     210,    -1,    32,   164,     3,    75,    53,     3,    -1,    32,
     164,     3,   141,    53,     3,   158,     3,    -1,    32,   164,
       3,    85,    53,     3,    -1,    32,   164,     3,    68,    53,
       3,    -1,    32,   164,     3,   177,    53,     3,    -1,   268,
      -1,   111,   270,   271,     3,   272,   179,   274,   269,    -1,
      -1,   134,   116,   170,   277,    -1,    -1,   270,   118,    -1,
     270,    70,    -1,   270,   101,    -1,   270,   108,    -1,   112,
      -1,    -1,    -1,   209,   273,   210,    -1,     3,    -1,   273,
     211,     3,    -1,   209,   276,   210,    -1,    -1,   274,   211,
     275,   209,   276,   210,    -1,   214,    -1,    80,    -1,   276,
     211,   214,    -1,   276,   211,    80,    -1,   111,   270,   271,
       3,   154,   277,   269,    -1,     3,    20,   214,    -1,     3,
      20,    80,    -1,   277,   211,     3,    20,   214,    -1,   277,
     211,     3,    20,    80,    -1,   278,    -1,   145,   270,   271,
       3,   272,   179,   274,   269,    -1,   145,   270,   271,     3,
     154,   277,   269,    -1,   145,   270,   271,     3,   272,   223,
     269,    -1,   279,    -1,   170,   280,   240,   154,   281,   224,
     230,   233,    -1,    -1,   270,   118,    -1,   270,   108,    -1,
       3,    20,   214,    -1,     3,   208,     3,    20,   214,    -1,
     281,   211,     3,    20,   214,    -1,   281,   211,     3,   208,
       3,    20,   214,    -1,   282,    -1,    55,    65,   283,     3,
      -1,    55,   147,   283,     3,    -1,    -1,   110,   187,    -1,
     284,    -1,    55,    69,     3,    40,   302,    -1,    55,    69,
       3,    40,   302,    80,   214,    -1,    55,    69,     3,    40,
     302,    18,   130,    -1,    55,    69,     3,    40,   302,    59,
     209,   214,   210,    -1,    55,    69,     3,    40,   302,    18,
     130,    59,   209,   214,   210,    -1,   285,    -1,   175,     3,
      -1,   175,    65,     3,    -1,   286,    -1,    55,   288,   164,
     283,     3,   209,   289,   210,   287,    -1,    55,   288,   164,
     283,     3,   208,     3,   209,   289,   210,   287,    -1,    -1,
     287,    37,    20,     5,    -1,   287,    37,     5,    -1,   287,
     132,     3,    74,     3,    -1,   287,   132,     3,   161,     3,
      -1,    55,   288,   164,   283,     3,   209,   289,   210,   304,
      -1,    55,   288,   164,   283,     3,   304,    -1,    55,   288,
     164,   283,     3,   208,     3,   209,   289,   210,   304,    -1,
      55,   288,   164,   283,     3,   208,     3,   304,    -1,    -1,
     159,    -1,   160,   159,    -1,   290,    -1,   289,   211,   290,
      -1,   136,   116,   209,   291,   210,    -1,    53,     3,   136,
     116,   209,   291,   210,    -1,   116,   209,   235,   210,    -1,
     109,   209,   235,   210,    -1,    96,   109,   209,   235,   210,
      -1,    96,   116,   209,   235,   210,    -1,    59,   209,   214,
     210,    -1,    53,     3,    59,   209,   214,   210,    -1,    93,
     116,   209,   292,   210,   140,     3,   209,   293,   210,   294,
      -1,    93,   116,   209,   292,   210,   140,     3,   208,     3,
     209,   293,   210,   294,    -1,    53,     3,    93,   116,   209,
     292,   210,   140,     3,   209,   293,   210,   294,    -1,    53,
       3,    93,   116,   209,   292,   210,   140,     3,   208,     3,
     209,   293,   210,   294,    -1,   172,   209,   295,   210,    -1,
      53,     3,   172,   209,   295,   210,    -1,     3,    -1,   291,
     211,     3,    -1,     3,    -1,   292,   211,     3,    -1,     3,
      -1,   293,   211,     3,    -1,    -1,   294,   132,    74,    56,
      -1,   294,   132,    74,   154,   130,    -1,   294,   132,    74,
     142,    -1,   294,   132,    74,   154,    80,    -1,   294,   132,
     170,    56,    -1,   294,   132,   170,   154,   130,    -1,   294,
     132,   170,   142,    -1,   294,   132,   170,   154,    80,    -1,
     294,   132,    74,   129,    -1,   294,   132,   170,   129,    -1,
     294,   124,    95,    -1,   294,   124,   151,    -1,   294,   124,
     135,    -1,   294,    66,    -1,   294,    18,    66,    -1,   294,
      66,   105,    67,    -1,   294,    66,   105,   104,    -1,     3,
      -1,   295,   211,     3,    -1,    -1,   296,     3,   302,   297,
      -1,    -1,   297,    18,   130,    -1,   297,   130,    -1,   297,
      80,     4,    -1,   297,    80,     5,    -1,   297,    80,     7,
      -1,   297,    80,     6,    -1,   297,    80,   203,   209,   210,
      -1,   297,    80,   204,   209,   210,    -1,   297,    80,   205,
     209,   210,    -1,   297,    80,    54,    -1,   297,    80,   209,
     214,   210,    -1,   297,    37,    -1,   297,    37,   209,     5,
     211,     5,   210,    -1,   297,    37,   209,     5,   210,    -1,
     297,    42,   209,     5,   211,     5,   210,    -1,   297,    42,
     209,     5,   210,    -1,   297,    42,    -1,   297,   172,   116,
      -1,   297,   172,    -1,   297,   136,   116,    -1,   297,   116,
      -1,   297,    60,     4,    -1,   297,    59,   209,   214,   210,
      -1,   297,    53,     3,   172,    -1,   297,    53,     3,   136,
     116,    -1,   297,    53,     3,    59,   209,   214,   210,    -1,
     297,    43,    41,    40,   209,   214,   210,    44,    -1,   297,
      43,    41,    40,   209,   214,   210,    45,    -1,   297,    43,
      41,    40,   209,   214,   210,    -1,   297,    40,   209,   214,
     210,    44,    -1,   297,    40,   209,   214,   210,    45,    -1,
     297,    40,   209,   214,   210,    -1,    -1,   209,     5,   210,
      -1,   209,     5,   211,     5,   210,    -1,    -1,    49,    -1,
      -1,   300,   171,    -1,   300,   186,    -1,    -1,   301,    63,
     154,     4,    -1,   301,    64,     4,    -1,    52,   298,    -1,
     157,   298,   300,    -1,   153,   298,   300,    -1,   127,   298,
     300,    -1,   113,   298,   300,    -1,   106,   298,   300,    -1,
      51,   298,   300,    -1,   138,   298,   300,    -1,    81,   298,
     300,    -1,    91,   298,   300,    -1,    83,   298,   300,    -1,
      84,    -1,   169,    -1,   163,    -1,    82,    -1,   184,    -1,
      63,   298,   301,    -1,   178,   209,     5,   210,   301,    -1,
      49,   298,    -1,   180,   209,     5,   210,    -1,   168,    -1,
      46,    -1,   126,    -1,   123,    -1,   156,   299,   301,    -1,
     162,   299,   301,    -1,   125,   299,   301,    -1,   117,   299,
     301,    -1,    87,   209,   303,   210,   301,    -1,   154,   209,
     303,   210,   301,    -1,    47,    -1,   173,    -1,     4,    -1,
     303,   211,     4,    -1,   305,   243,   223,    -1,    -1,   108,
      -1,   145,    -1,   306,    -1,   154,   147,     3,    -1,   154,
     147,    80,    -1,   154,   307,    -1,   308,    -1,   307,   211,
     308,    -1,     8,    20,   214,    -1,     8,     9,   214,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   299,   299,   300,   305,   312,   313,   314,   332,   340,
     348,   354,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     385,   386,   387,   388,   391,   392,   393,   394,   395,   398,
     399,   402,   403,   406,   407,   410,   410,   411,   411,   412,
     413,   414,   418,   422,   423,   424,   425,   426,   427,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   449,   456,   463,   469,   470,   471,   474,
     475,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     489,   491,   493,   495,   499,   507,   518,   519,   522,   523,
     526,   534,   542,   553,   563,   564,   578,   579,   580,   581,
     584,   591,   599,   600,   601,   604,   605,   608,   609,   612,
     613,   616,   617,   620,   628,   629,   630,   631,   634,   635,
     638,   639,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   653,   654,   655,   663,   669,   670,   671,   674,   675,
     678,   679,   683,   689,   690,   691,   694,   695,   699,   701,
     703,   705,   707,   711,   712,   713,   716,   717,   720,   721,
     724,   725,   726,   729,   730,   733,   734,   738,   740,   742,
     744,   747,   748,   751,   752,   755,   759,   767,   775,   776,
     777,   778,   782,   785,   786,   789,   789,   791,   795,   802,
     809,   819,   826,   833,   843,   851,   861,   869,   878,   887,
     899,   904,   909,   915,   922,   929,   936,   946,   953,   962,
     969,   978,   985,   994,  1001,  1007,  1018,  1021,  1027,  1033,
    1040,  1046,  1053,  1059,  1065,  1071,  1077,  1083,  1091,  1098,
    1106,  1107,  1110,  1111,  1112,  1113,  1114,  1117,  1117,  1120,
    1121,  1124,  1134,  1147,  1148,  1148,  1151,  1152,  1153,  1154,
    1157,  1161,  1162,  1163,  1164,  1170,  1173,  1179,  1184,  1190,
    1196,  1203,  1204,  1205,  1209,  1220,  1231,  1242,  1256,  1260,
    1261,  1264,  1265,  1269,  1273,  1275,  1277,  1279,  1281,  1286,
    1290,  1291,  1295,  1302,  1312,  1316,  1317,  1318,  1319,  1320,
    1323,  1328,  1332,  1337,  1341,  1342,  1343,  1346,  1347,  1350,
    1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,  1360,  1362,
    1364,  1366,  1368,  1372,  1373,  1376,  1377,  1380,  1381,  1384,
    1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,  1394,
    1395,  1396,  1397,  1398,  1399,  1400,  1401,  1404,  1405,  1408,
    1408,  1418,  1419,  1420,  1421,  1422,  1423,  1424,  1425,  1426,
    1427,  1428,  1429,  1436,  1437,  1438,  1439,  1440,  1441,  1442,
    1443,  1444,  1445,  1446,  1447,  1448,  1449,  1450,  1451,  1452,
    1453,  1454,  1455,  1456,  1459,  1460,  1461,  1464,  1465,  1468,
    1469,  1470,  1473,  1474,  1475,  1479,  1480,  1481,  1482,  1483,
    1484,  1485,  1486,  1487,  1488,  1489,  1490,  1491,  1492,  1493,
    1494,  1495,  1496,  1497,  1498,  1499,  1500,  1501,  1502,  1503,
    1504,  1505,  1506,  1507,  1508,  1509,  1510,  1513,  1514,  1517,
    1521,  1522,  1523,  1527,  1530,  1531,  1532,  1533,  1533,  1535,
    1536
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
  "ALWAYS", "IDENTITY", "GENERATED", "STORED", "VIRTUAL", "BLOB",
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
  "TO", "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT", "TIMESTAMP", "TABLE",
  "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME", "UPDATE", "UNSIGNED",
  "UNIQUE", "UUID", "USING", "USE", "HASH", "VALIDATE", "VARCHAR",
  "VALUES", "VARBINARY", "WHERE", "WHEN", "WITH", "YEAR", "YEAR_MONTH",
  "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB",
  "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH",
  "FCONCAT", "FREPLACE", "FCOALESCE", "FGEN_RANDOM_UUID",
  "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID", "FLAST_INSERT_ID", "';'", "'.'",
  "'('", "')'", "','", "$accept", "stmt_list", "expr", "val_list",
  "opt_val_list", "@1", "@2", "trim_ltb", "interval_exp", "case_list",
  "stmt", "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_orderby",
  "orderby_list", "orderby_item", "opt_limit", "opt_into_list",
  "column_list", "select_opts", "select_expr_list", "select_expr",
  "opt_as_alias", "table_references", "table_reference", "table_factor",
  "opt_as", "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "drop_table_stmt", "create_index_stmt", "index_col_list", "index_expr",
  "drop_index_stmt", "truncate_table_stmt", "reclaim_table_stmt",
  "analyze_table_stmt", "alter_table_stmt", "insert_stmt",
  "opt_ondupupdate", "insert_opts", "opt_into", "opt_col_names",
  "insert_col_list", "insert_vals_list", "@3", "insert_vals",
  "insert_asgn_list", "replace_stmt", "update_stmt", "update_opts",
  "update_asgn_list", "create_database_stmt", "opt_if_not_exists",
  "create_domain_stmt", "use_database_stmt", "create_table_stmt",
  "opt_table_options", "opt_temporary", "create_col_list",
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
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,    59,    46,    40,
      41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   212,   213,   213,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   215,   215,   216,   216,   217,   214,   218,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   219,   219,   219,   214,
     214,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     214,   214,   214,   214,   221,   221,   214,   214,   214,   214,
     214,   214,   214,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   227,   228,   228,   229,   229,   230,
     230,   231,   231,   232,   233,   233,   233,   233,   234,   234,
     235,   235,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   237,   237,   237,   238,   239,   239,   239,   240,   240,
     241,   241,   242,   242,   242,   242,   243,   243,   244,   244,
     244,   244,   244,   245,   245,   245,   246,   246,   247,   247,
     248,   248,   248,   249,   249,   250,   250,   251,   251,   251,
     251,   252,   252,   253,   253,   254,   222,   255,   256,   256,
     256,   256,   255,   257,   257,   258,   258,   255,   222,   259,
     259,   222,   260,   260,   260,   260,   260,   260,   260,   260,
     261,   261,   261,   262,   262,   262,   262,   222,   263,   222,
     264,   222,   265,   222,   266,   266,   222,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   222,   268,
     269,   269,   270,   270,   270,   270,   270,   271,   271,   272,
     272,   273,   273,   274,   275,   274,   276,   276,   276,   276,
     268,   277,   277,   277,   277,   222,   278,   278,   278,   222,
     279,   280,   280,   280,   281,   281,   281,   281,   222,   282,
     282,   283,   283,   222,   284,   284,   284,   284,   284,   222,
     285,   285,   222,   286,   286,   287,   287,   287,   287,   287,
     286,   286,   286,   286,   288,   288,   288,   289,   289,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   291,   291,   292,   292,   293,   293,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   295,   295,   296,
     290,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   298,   298,   298,   299,   299,   300,
     300,   300,   301,   301,   301,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   303,   303,   304,
     305,   305,   305,   222,   306,   306,   306,   307,   307,   308,
     308
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
       8,     6,     3,     3,     3,     3,     1,     1,     1,     6,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     6,     3,     5,     4,     5,     3,     4,     3,     4,
       1,     1,     1,     1,     3,    11,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     1,     3,     2,     0,     2,     4,     4,     0,     2,
       1,     3,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     1,     2,     2,     1,     0,     1,     3,
       1,     1,     3,     5,     3,     3,     1,     0,     5,     3,
       5,     6,     5,     0,     1,     1,     0,     1,     1,     1,
       2,     2,     0,     0,     1,     2,     4,     6,     6,     6,
       0,     2,     0,     1,     3,     3,     1,     7,     2,     2,
       2,     0,     6,     2,     4,     0,     2,     7,     1,     3,
       5,     1,     8,    10,     9,    11,    10,    12,    11,    13,
       1,     3,     1,     4,     4,     4,     6,     1,     3,     1,
       3,     1,     3,     1,     3,     5,     1,    10,    10,    17,
      12,    19,    11,     6,     8,     6,     6,     6,     1,     8,
       0,     4,     0,     2,     2,     2,     2,     1,     0,     0,
       3,     1,     3,     3,     0,     6,     1,     1,     3,     3,
       7,     3,     3,     5,     5,     1,     8,     7,     7,     1,
       8,     0,     2,     2,     3,     5,     5,     7,     1,     4,
       4,     0,     2,     1,     5,     7,     7,     9,    11,     1,
       2,     3,     1,     9,    11,     0,     4,     3,     5,     5,
       9,     6,    11,     8,     0,     1,     2,     1,     3,     5,
       7,     4,     4,     5,     5,     4,     6,    11,    13,    13,
      15,     4,     6,     1,     3,     1,     3,     1,     3,     0,
       4,     5,     4,     5,     4,     5,     4,     5,     4,     4,
       3,     3,     3,     2,     3,     4,     4,     1,     3,     0,
       4,     0,     3,     2,     3,     3,     3,     3,     5,     5,
       5,     3,     5,     2,     7,     5,     7,     5,     2,     3,
       2,     3,     2,     3,     5,     4,     5,     7,     8,     8,
       7,     6,     6,     5,     0,     3,     5,     0,     1,     0,
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
       0,     0,     0,   304,   191,     0,   242,     0,   242,     0,
     132,     0,   242,     0,     0,     0,   103,   186,   198,   201,
     217,   219,   221,   223,   226,   238,   265,   269,   278,   283,
     289,   292,   433,     0,     0,   281,     0,     0,   281,   305,
       0,     0,     0,     0,     0,     0,   248,     0,   248,     0,
       0,   436,   437,     0,     0,     0,     0,   290,     0,     1,
       2,     0,   224,     0,     0,     0,     0,     0,     0,   306,
       0,   281,   195,     0,   190,   188,   189,     0,   218,   199,
       0,   244,   245,   246,   247,   243,     0,   222,     0,     0,
       0,   434,   435,     0,     4,     7,     8,    10,     9,     6,
       0,     0,     0,   143,   133,   100,     0,   101,   102,   134,
     135,   136,    11,   138,   140,   139,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   147,   104,
     141,   220,   246,   243,   147,     0,     0,   148,   150,   151,
     157,   291,     3,     0,     0,     0,     0,     0,     0,     0,
     282,   279,     0,     0,     0,   280,     0,     0,     0,     0,
     193,   106,     0,     0,     0,     0,   249,   249,   440,   439,
     438,     0,    43,     0,    28,    27,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,     0,     0,     0,   180,     0,     0,
       0,     0,   165,   164,   168,   172,   169,     0,     0,   166,
     156,     0,     0,     0,     0,     0,     0,     0,   225,   416,
     425,   384,   384,   384,   384,   384,   409,   384,   406,     0,
     384,   384,   384,   387,   418,   387,   417,   384,   384,   384,
       0,   387,   384,   387,   408,   415,   407,   426,     0,     0,
     410,   284,     0,     0,     0,     0,   430,   196,     0,   119,
       0,   106,   195,   200,     0,     0,     0,     0,     0,     5,
      41,    44,     0,    38,     0,     0,    92,     0,     0,     0,
       0,    78,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    19,    21,    22,    20,    98,    96,
      36,     0,    34,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    23,    24,    26,    12,    13,    14,
      15,    16,    17,    25,   145,   106,   142,   147,     0,     0,
       0,   152,   185,   155,     0,   106,   149,   166,   166,     0,
     159,     0,   167,     0,   154,     0,   236,   233,   235,     0,
     237,     0,   413,   389,   395,   392,   389,   389,     0,   389,
     389,   389,   388,   392,   392,   389,   389,   389,     0,   392,
     389,   392,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   431,   432,     0,   349,   301,   157,   107,     0,
     124,   106,   192,   194,     0,   240,   251,     0,     0,   240,
       0,   240,     0,    52,     0,    90,     0,     0,     0,    51,
       0,     0,    63,     0,     0,     0,     0,    53,    54,    55,
      56,    57,    58,    66,    67,    68,     0,     0,     0,    37,
      35,     0,     0,    99,    97,    47,     0,     0,     0,     0,
       0,     0,   108,   180,   182,   182,   182,     0,     0,     0,
     119,   170,   171,     0,     0,   173,     0,     0,     0,     0,
       0,     0,     0,   401,   411,   403,   405,   427,     0,   404,
     400,   399,   422,   421,   398,   402,   397,     0,   419,   396,
     420,     0,     0,   286,     0,   285,     0,   210,     0,     0,
       0,     0,     0,   212,     0,     0,     0,     0,   430,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   307,     0,
       0,     0,     0,   187,   197,     0,     0,     0,   260,   250,
       0,     0,   240,   267,   240,   268,    42,    94,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,    39,     0,     0,     0,
      30,     0,   117,   153,     0,     0,     0,     0,   274,     0,
       0,   124,   162,   160,     0,     0,   158,   174,     0,     0,
       0,     0,     0,   234,   385,     0,   390,   391,     0,     0,
     392,     0,   392,   392,   414,     0,     0,     0,     0,     0,
       0,     0,   202,     0,     0,     0,     0,     0,     0,   349,
     303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     295,   349,     0,   429,   112,   120,   121,   125,   262,   261,
       0,     0,   252,   257,   256,     0,   254,   239,   266,    91,
      95,     0,    61,    60,     0,    65,     0,     0,    79,    80,
      69,     0,    71,    46,     0,    50,    40,    33,    31,    32,
       0,     0,   119,   181,     0,     0,     0,     0,     0,     0,
     270,   175,     0,   161,     0,     0,     0,   347,     0,     0,
       0,   394,   423,   428,   424,   412,     0,   287,     0,     0,
       0,     0,     0,   211,     0,     0,     0,   204,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
       0,     0,     0,     0,   293,   300,   308,   351,   113,   114,
     123,     0,     0,     0,     0,     0,   253,     0,     0,     0,
       0,    64,    81,    82,    83,    84,    88,    87,    89,    86,
      85,     0,    48,   112,   115,   118,   124,   183,     0,     0,
       0,   275,   276,     0,     0,   227,   325,     0,   323,     0,
     228,     0,   386,   393,     0,   206,   213,   214,   215,     0,
       0,   203,     0,     0,     0,   295,     0,     0,     0,     0,
     315,     0,     0,     0,   312,     0,   311,     0,   321,     0,
       0,   350,   122,   127,   126,   241,   264,   263,   259,   258,
       0,    62,    59,    70,   110,     0,     0,   109,   128,   179,
       0,   178,   177,     0,   176,     0,     0,     0,   232,     0,
     348,   288,     0,     0,   208,     0,   205,   294,   302,     0,
       0,     0,     0,     0,   313,   314,   131,   309,   297,     0,
       0,     0,   363,     0,   368,     0,     0,     0,     0,     0,
     372,   353,     0,   370,     0,   116,   112,     0,   105,   184,
     277,   230,     0,   326,   324,   216,   207,     0,   316,     0,
       0,   322,     0,   296,     0,     0,   352,     0,     0,     0,
       0,     0,     0,   373,   354,   355,   357,   356,   361,     0,
       0,     0,     0,   371,   369,   255,   111,   129,     0,   209,
       0,   310,     0,   298,   299,     0,     0,     0,     0,     0,
       0,   375,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   365,     0,   383,   367,     0,     0,     0,   376,   374,
     358,   359,   360,   362,   327,     0,     0,     0,     0,     0,
     381,   382,     0,     0,     0,   329,     0,     0,     0,     0,
     329,   364,   366,   380,   377,   229,   328,     0,     0,     0,
     317,   378,   379,     0,   343,     0,     0,     0,   329,   329,
       0,   344,   231,     0,   340,   342,   341,     0,     0,     0,
     319,   318,   345,   346,   330,   338,   332,     0,   334,   339,
     336,     0,   329,   333,   331,   337,   335,   320
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   310,   311,   312,   481,   593,   325,   586,   189,
      15,    16,   299,   602,   784,   760,   847,   702,   440,   665,
     666,   563,   898,   750,    53,   139,   140,   233,   146,   147,
     148,   251,   149,   248,   393,   249,   389,   616,   617,   381,
     605,   788,   150,    17,    43,    77,   170,    18,    19,   542,
     543,    20,    21,    22,    23,    24,    25,   568,    46,    86,
     306,   447,   572,   768,   675,   445,    26,    27,    56,   385,
      28,    64,    29,    30,    31,   754,    42,   557,   558,   799,
     797,   975,   995,   718,   559,   831,   402,   413,   513,   514,
     291,   518,   436,   437,    32,    51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -935
static const yytype_int16 yypact[] =
{
    2425,  -106,   -95,   396,  -935,   -78,  -935,    54,  -935,    19,
    -935,    67,     4,    25,   241,    42,  -935,  -935,  -935,  -935,
    -935,  -935,  -935,  -935,  -935,  -935,  -935,  -935,  -935,  -935,
    -935,  -935,  -935,   255,   277,   200,   309,    88,   200,  -935,
     159,   234,   182,    93,   348,    89,   199,   352,   199,    51,
      26,   198,  -935,   387,   413,   244,     5,  -935,   415,  -935,
    2425,    12,   212,   248,   425,   397,   307,   266,   447,  -935,
      99,   200,   249,   465,  -935,  -935,  -935,   -28,  -935,  -935,
     275,  -935,  -935,  -935,  -935,  -935,   469,  -935,   479,  1380,
    1380,  -935,  -935,   477,   238,  -935,  -935,  -935,  -935,   521,
    1380,  1380,  1380,  -935,  -935,  -935,   736,  -935,  -935,  -935,
    -935,  -935,  -935,  -935,  -935,  -935,  -935,   290,   297,   329,
     332,   338,   350,   353,   410,   418,   444,   467,   491,   502,
     504,   522,   524,   542,   546,   553,   571,  1380,  2751,   -21,
    -935,  -935,     8,    10,    17,     3,  -108,   372,  -935,  -935,
     737,  -935,  -935,   746,   774,   782,   785,   807,   808,   828,
    -935,  -935,  2522,   834,   859,  -935,   731,   677,   864,   842,
    -935,   278,  -130,     5,   868,   869,    50,    85,  2828,  2828,
    -935,   870,  1380,  1380,   638,   638,  -935,  1380,  2323,   165,
     720,  1380,   490,  1380,  1380,   778,  1380,  1380,  1380,  1380,
    1380,  1380,  1380,  1380,  1380,  1380,   666,   670,   671,   672,
      98,  -935,  1380,  1380,  1380,  1380,  1380,    58,   674,   544,
    1380,   698,  1380,  1380,  1380,  1380,  1380,  1380,  1380,  1380,
    1380,  1380,   881,  -935,     5,  1380,   902,   140,   696,   291,
     906,     5,  -935,  -935,  -935,   292,  -935,     5,   796,   781,
    -935,   912,   913,   914,   916,   917,   918,   919,  -935,  -935,
    -935,   734,   734,   734,   734,   734,  -935,   734,  -935,   735,
     734,   734,   734,   936,  -935,   936,  -935,   734,   734,   734,
     742,   936,   734,   936,  -935,  -935,  -935,  -935,   777,   788,
    -935,    20,   139,   866,   996,   997,    97,  -935,  1380,   890,
       5,   177,   249,  -935,   998,   999,   845,   998,   259,  -935,
    1144,  -935,   822,  2828,  2395,   167,  -935,  1380,  1380,   823,
     263,  -935,  -935,  -935,  1673,   816,  1247,  1479,   824,  1695,
    1723,  1744,  1774,  1795,  1816,  1844,  1866,  1501,  1580,  1601,
    -935,  -935,  -935,  -935,  -935,  2519,  2847,   829,   934,   934,
    -935,    24,  -935,   720,  1380,  1380,   826,  1380,  2784,   827,
     830,   833,  1023,   784,   966,   616,   700,   543,   543,  1007,
    1007,  1007,  1007,  -935,  -935,   177,  -935,    49,   922,   927,
     928,  -935,  -935,  -935,    -2,   208,   372,   781,   781,   930,
     915,     5,  -935,   931,  -935,   260,  -935,  -935,  -935,   897,
    -935,  1051,  -935,  -935,  -935,  -935,  -935,  -935,  1053,  -935,
    -935,  -935,  -935,  -935,  -935,  -935,  -935,  -935,  1053,  -935,
    -935,  -935,  1054,  1055,   932,   849,  1380,   885,    37,  1062,
     189,   935,  -935,  -935,  1063,   347,  -935,   737,  2828,  1020,
     948,   177,  -935,  -935,  1050,   -79,  -935,   293,   863,   -79,
     863,   939,  1380,  -935,  1380,  -935,  1380,  2643,  2423,  -935,
    1380,  1380,  -935,  1380,  2499,   960,   960,  -935,  -935,  -935,
    -935,  -935,  -935,  -935,  -935,  -935,  1380,  1380,  1380,  -935,
    -935,  1380,   865,   934,   934,   720,  2806,  1380,   720,   720,
     720,   872,   978,   140,   981,   981,   981,  1380,  1076,  1077,
     890,  -935,  -935,     5,  1380,   125,     5,   874,   970,   971,
     879,  1086,   300,  -109,   450,  -109,  -109,  -935,   310,  -109,
    -109,  -109,   450,   450,  -109,  -109,  -109,   315,   450,  -109,
     450,   880,   882,  1032,  1380,  2828,   884,  -935,   886,   887,
     888,   889,   318,  -935,   190,   923,    37,  1091,   107,  1098,
     893,   987,   151,   896,   900,   990,   901,   324,  -935,  1108,
     720,  1109,  1380,  -935,  -935,  1046,  1000,  1110,  -935,  -935,
    1111,  1126,    86,  -935,    86,  -935,  -935,  2828,  2697,  -935,
    1380,  1643,   312,  1888,  1380,  1380,   905,   907,  1916,  1622,
    1937,   908,  -935,  1380,   909,  1380,   744,   910,   911,   925,
    -935,  1074,  1021,  -935,  1008,   929,   933,   937,  2828,  1105,
      -1,   948,  -935,  2828,  1380,   938,  -935,  -935,   125,  1380,
     940,   941,  1124,  -935,  -935,  1123,  -935,  -935,   982,  1133,
    -935,  1135,  -935,  -935,  -935,   943,  1967,    37,  1137,  1138,
    1142,  1145,  -935,  1158,  1001,    37,   972,   335,   213,   347,
    -935,   261,  1380,   973,   974,   976,  1172,  1172,   977,  1124,
      95,   347,  2522,  -935,   224,   968,  -935,   356,  -935,  2828,
    1019,  1170,  -935,  -935,  2828,   339,  -935,  -935,  -935,  -935,
    2828,  1380,  -935,  -935,  1380,  -935,  1988,  2302,  -935,  -935,
    -935,  1380,  -935,  -935,   983,  -935,   744,  -935,  -935,  -935,
    1380,  1380,   890,  -935,  1188,  1188,  1188,  1380,  1380,  1189,
    -935,  2828,  1172,  -935,  2009,  1191,  1192,  -935,   343,   986,
    1193,  -935,   450,  -935,   450,   450,  1380,  -935,   354,   988,
     989,   991,   992,  -935,   993,   384,    37,  -935,  1024,    37,
     390,   995,  1089,  1092,  1022,  2037,  1191,  1172,  1172,  -935,
     392,   394,  1192,   402,    68,  -935,  -935,  -935,  -935,  -935,
    -935,  1109,  1380,  1380,   998,  1279,  -935,  1357,  1044,  2059,
    2081,  -935,  -935,  -935,  -935,  -935,  -935,  -935,  -935,  -935,
    -935,  2109,  -935,  2722,  -133,  2828,   948,  -935,   407,   414,
     419,  2828,  2828,  1187,   422,  1212,  -935,   424,  -935,   426,
    -935,  1206,  -935,  -935,  2130,  -935,  -935,  -935,  -935,  1251,
      37,  -935,   439,  1069,   441,    95,  1380,  1070,  1071,  1124,
    -935,   459,   461,   464,  -935,  1261,  -935,   487,  -935,   345,
    1278,  2436,  -935,  2828,  2828,  1078,  -935,  2828,  -935,  2828,
    1126,  -935,  -935,  -935,  -935,  1147,  1380,  -935,  1176,  -935,
    1288,  -935,  -935,  1380,  -935,  1115,  1153,  1291,  -935,  1292,
    -935,  -935,  1088,   497,  -935,    37,  -935,    68,  -935,  2160,
    1191,  1192,   507,  1159,  -935,  -935,  -935,  -935,  -935,  1295,
     134,  1171,  1093,  1094,  1096,  1265,  1304,  1099,  1305,    18,
    -935,  -935,  1194,  1195,   509,  -935,  2722,  1172,  -935,  -935,
    2828,  -935,  1309,  -935,  -935,  -935,  -935,   511,  -935,   525,
     527,  -935,  1331,  -935,  1333,  1335,  -935,  1334,  1380,  1337,
    1303,    74,  1380,  -935,  -935,  -935,  -935,  -935,  -935,  1136,
    1139,  1140,  1380,  -935,  -935,  -935,  -935,  1141,  1148,  -935,
    1204,  -935,   389,  -935,  -935,   535,  2181,   537,  1149,  1157,
    1230,  -935,  2202,  1143,  1146,  1160,  2230,  1344,  1347,  1348,
    1344,  -935,  1349,   705,  -935,  1362,  1380,  1380,  -935,  -935,
    -935,  -935,  -935,  -935,  -935,   547,   567,  1162,   568,  1163,
    -935,  -935,  1166,  2252,  2274,  -935,  1365,  1366,  1344,  1344,
    -935,  -935,  -935,   747,  -935,    70,  -935,  1168,   578,   591,
     119,  -935,  -935,    16,  1267,   -52,   -41,  1344,  -935,  -935,
    1312,  -935,  -935,   194,  -935,  -935,  -935,   273,   288,   605,
     119,   119,  -935,  -935,  -935,  -935,  -935,   -45,  -935,  -935,
    -935,   -26,  -935,  -935,  -935,  -935,  -935,   119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -935,  1319,   -53,  -413,  -935,  -935,  -935,  -935,   924,  1201,
    -935,  -129,  -194,  -935,  -935,  -732,  -935,  -935,  -486,  -935,
     619,  -590,  -935,  -653,  -935,  -935,  1156,  -139,  -103,  1151,
    -235,   944,  -935,  -935,   430,  -935,  -935,  -935,   775,   903,
     330,   124,  -935,  -935,  -935,  1321,  1097,  -935,  -935,  -544,
    -935,  -935,  -935,  -935,  -935,  -935,  -935,  -417,    55,  1352,
    1218,  -935,   951,  -935,   562,  -306,  -935,  -935,  -935,  -935,
    -935,   225,  -935,  -935,  -935,   588,  -935,   755,   745,  -687,
    -705,  -534,  -934,  -633,  -935,  -935,   344,   209,    60,  -404,
     748,   994,  -545,  -935,  -935,  -935,  1314
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -431
static const yytype_int16 yytable[] =
{
     138,   449,   647,   650,   751,   237,   144,  -271,   144,   522,
     523,  -273,   390,  -272,   611,   528,   238,   530,   497,   708,
     211,   710,   924,   925,   926,   927,   753,    49,    57,    91,
     479,    44,   573,  1017,   575,  1033,   178,   179,   424,   576,
     537,   821,   239,  1014,   300,   153,   240,   184,   185,   186,
     845,   844,   211,   188,  1035,   566,  1000,   232,    33,   794,
      89,   319,   626,    48,   350,   827,   173,    55,   591,    34,
     301,    90,   928,   234,  1020,  1021,   351,   627,   846,   425,
     154,   174,  1011,  1015,   210,  1034,    45,   155,  1003,   232,
      58,    66,    79,   728,   822,   823,    72,   156,  1037,  1016,
     426,   735,   166,   241,  1036,   829,    92,   442,   212,   213,
     214,   215,   216,   217,   218,   755,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,  1018,
     313,   375,   567,   949,   314,  -430,  1004,  1010,   320,   324,
     326,   327,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   157,   480,   677,   505,   678,    10,   345,
     346,   347,   348,   349,   936,   909,    50,   358,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   451,
     694,   492,   138,   174,   910,  1004,   872,    73,   352,   158,
     235,   500,   812,  1012,  1005,   814,   848,   441,    67,    80,
     830,    74,  1006,   432,   304,   432,   498,   709,   914,   167,
     950,    75,   145,  -271,   145,   432,   786,  -273,    47,  -272,
     566,   929,   930,   931,   482,   236,   722,   932,   724,   725,
      76,    54,   378,   491,   538,   539,   540,   541,   493,   307,
     433,    59,   433,  1005,   937,   438,   951,   564,   379,    60,
    -430,  1006,   433,   316,   317,   455,   456,   614,    61,   305,
     654,  1022,   758,    68,   457,   458,   863,   655,   612,    81,
     868,   618,   464,   212,   213,   214,   215,   216,   217,   218,
      62,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   305,   915,   168,   676,  1023,   615,
      82,   483,   484,   759,   486,   434,   435,    83,   344,   210,
      63,    84,    65,   427,    81,   380,   649,    85,    69,   507,
     741,   907,   212,   213,   214,   215,   216,   217,   218,  1024,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,    70,  1028,    82,    71,   318,   428,   318,
     878,    78,   142,   508,   742,    87,   594,   460,   298,   597,
     598,   599,   143,   545,   644,   879,   212,   213,   214,   215,
     216,   217,   218,   535,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   738,   241,   298,
      94,    95,    96,    97,    98,    99,   509,   743,   546,   645,
     549,   577,  1025,   578,   100,   101,   550,   581,   582,    93,
     583,   387,   102,   103,    10,  1026,   141,  1029,   151,   499,
     159,   104,   739,   588,   589,   590,   978,  1027,   161,   242,
    1030,   663,   510,   744,   596,   160,   388,   162,   450,   163,
     551,   105,  1031,   552,   608,   106,   181,   182,   107,   108,
     165,   613,  -195,   164,   998,   999,   553,   169,   835,   298,
     109,    35,   175,   554,   110,    36,   515,   516,   171,   519,
     520,   521,   176,  1019,   461,   524,   525,   526,   762,   243,
     529,   636,   177,   555,   414,    49,   169,  -163,   111,  -195,
     419,   244,   421,    94,    95,    96,    97,    98,    99,   190,
     245,   383,   241,   569,   570,    37,   191,   100,   101,   667,
     624,   625,   669,   628,   629,   102,   246,   112,   674,   556,
     630,   631,   683,   684,   247,   632,   631,   680,   642,   643,
     183,   686,   687,   113,   660,   661,   114,   115,   192,   116,
     321,   193,   696,    38,   105,   737,   643,   194,   106,   766,
     767,   107,   108,   800,   801,    39,    40,   354,   355,   195,
     356,   711,   196,   357,   805,   643,   714,   763,    41,   227,
     228,   229,   230,   231,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   811,   643,   137,   959,   960,   745,
     815,   661,   824,   825,   826,   825,   403,   404,   405,   406,
     322,   407,   828,   801,   409,   410,   411,   849,   850,   197,
     112,   415,   416,   417,   851,   850,   420,   198,   769,   852,
     850,   770,   854,   825,   856,   857,   858,   859,   781,   224,
     225,   226,   227,   228,   229,   230,   231,   783,   785,   864,
     643,   866,   643,   199,   791,   792,   323,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   873,
     857,   874,   825,   804,   875,   825,   200,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   877,   859,   137,
     201,    94,    95,    96,    97,    98,    99,   906,   643,   833,
     834,   202,   837,   203,   839,   100,   101,   911,   801,   935,
     767,   939,   643,   102,   225,   226,   227,   228,   229,   230,
     231,   204,   359,   205,   360,   940,   857,   941,   859,    94,
      95,    96,    97,    98,    99,   961,   962,   964,   965,   980,
     981,   206,   105,   100,   101,   207,   106,   985,   986,   107,
     108,   102,   208,   869,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   987,   988,   250,   990,   986,
     209,    94,    95,    96,    97,    98,    99,   674,  1008,   986,
     105,  1001,  1002,   896,   106,   100,   101,   107,   108,   252,
     900,  1009,   986,   102,   328,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,  1032,   986,   501,   502,    94,
      95,    96,    97,    98,    99,   606,   607,   253,   112,   789,
     790,   258,   105,   100,   101,   254,   106,   292,   255,   107,
     108,   102,   215,   216,   217,   218,   361,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     256,   257,   293,   294,   295,   946,   112,   296,   297,   952,
     105,   302,   303,   309,   106,    10,   340,   107,   108,   956,
     341,   342,   343,   353,   374,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   377,   382,   362,   112,   384,
     463,   391,   392,   983,   984,   394,   395,   396,   187,   397,
     398,   399,   400,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   401,   408,   137,   112,  -431,  -431,  -431,
    -431,   418,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   412,   422,   137,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   423,   429,   430,
     431,   444,   446,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   439,   448,   137,    94,    95,    96,    97,
      98,    99,   453,   459,   467,   485,   488,   231,   494,   489,
     100,   101,   490,   495,   496,   503,   506,   504,   102,    94,
      95,    96,    97,    98,    99,   511,   512,   517,   534,   531,
     532,   536,   533,   100,   101,   544,   548,   547,   561,   562,
     565,   102,   571,   566,   585,   592,   601,   105,   604,   609,
     610,   106,   600,   619,   107,   108,   620,   621,   622,   623,
     633,   635,   634,   637,   648,   638,   639,   640,   641,   646,
     105,   651,   652,   653,   106,   656,   658,   107,   108,   657,
     659,   662,   664,   671,   672,   688,   670,   689,   693,   695,
     697,   698,   700,   703,   701,   707,   668,   717,   719,    94,
      95,    96,    97,    98,    99,   699,   720,   721,   704,   723,
     729,   730,   705,   100,   101,   731,   706,   712,   732,   715,
     716,   102,   726,   112,   212,   213,   214,   215,   216,   217,
     218,   733,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   749,   112,   734,    10,   761,
     105,   736,   746,   747,   106,   748,   752,   107,   108,   764,
     765,   787,   793,   782,   796,   798,   802,   803,   806,   807,
     813,   808,   810,   809,   816,   817,   673,   853,   818,   860,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     855,   819,   137,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   840,   862,   137,   112,   212,   213,   214,
     215,   216,   217,   218,   876,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   865,   870,
     871,   880,    94,    95,    96,    97,    98,    99,   897,   567,
     895,   899,   901,   902,   903,   904,   100,   101,   905,   912,
     913,   916,   917,   918,   102,   919,   920,   921,   922,   923,
     933,   934,   938,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   105,   942,   137,   943,   106,   944,   945,
     107,   108,   947,   948,   958,   953,   968,   974,   954,   955,
     976,   977,   825,   970,   979,   452,   971,   957,   966,   836,
      94,    95,    96,    97,    98,    99,   967,   982,   996,   997,
     972,   989,  1013,   991,   100,   101,   992,  1007,  1011,   152,
     832,   560,   102,    94,    95,    96,    97,    98,    99,   315,
     587,   376,   386,   713,   172,   308,   603,   100,   101,   443,
      88,   574,   894,   867,   740,   102,   756,   180,     0,   112,
     757,   105,   527,     0,     0,   106,     0,     0,   107,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,     0,     0,   838,   106,     0,
       0,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   465,     0,
       0,     0,     0,     0,     0,     0,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,     0,   112,   137,   212,
     213,   214,   215,   216,   217,   218,     0,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     112,   212,   213,   214,   215,   216,   217,   218,     0,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,     0,     0,   137,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,     0,     0,   137,
     212,   213,   214,   215,   216,   217,   218,     0,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   212,   213,   214,   215,   216,   217,   218,     0,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   212,   213,   214,   215,   216,   217,   218,     0,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   212,   213,   214,   215,   216,   217,   218,
       0,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   212,   213,   214,   215,   216,   217,   218,
     466,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,     0,   212,   213,   214,   215,   216,
     217,   218,   476,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,     0,     0,     0,     0,
       0,     0,     0,   212,   213,   214,   215,   216,   217,   218,
     681,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   212,   213,   214,   215,   216,   217,
     218,     0,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   212,   213,   214,   215,   216,   217,
     218,   477,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   212,   213,   214,   215,   216,
     217,   218,   478,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   212,   213,   214,   215,
     216,   217,   218,   691,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,     0,     0,     0,
       0,     0,     0,   682,   212,   213,   214,   215,   216,   217,
     218,     0,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,     0,   212,   213,   214,   215,
     216,   217,   218,   462,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,     0,   212,   213,
     214,   215,   216,   217,   218,   468,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,   215,
     216,   217,   218,   469,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   212,   213,   214,
     215,   216,   217,   218,   470,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
     215,   216,   217,   218,   471,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   212,   213,
     214,   215,   216,   217,   218,   472,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   212,
     213,   214,   215,   216,   217,   218,   473,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
     215,   216,   217,   218,   474,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,     0,   212,
     213,   214,   215,   216,   217,   218,   475,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
       0,   212,   213,   214,   215,   216,   217,   218,   685,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,     0,     0,     0,     0,     0,     0,     0,   212,
     213,   214,   215,   216,   217,   218,   690,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     212,   213,   214,   215,   216,   217,   218,   692,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     212,   213,   214,   215,   216,   217,   218,   727,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   212,   213,   214,   215,   216,   217,   218,   771,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   212,   213,   214,   215,   216,   217,   218,   795,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,     0,     0,     0,     0,     0,     0,     0,
     212,   213,   214,   215,   216,   217,   218,   820,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,     0,   212,   213,   214,   215,   216,   217,   218,   841,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,     0,   212,   213,   214,   215,   216,   217,
     218,   842,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,   215,   216,   217,   218,   843,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   212,   213,   214,   215,   216,   217,   218,
     861,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     908,     0,     0,   772,   773,     0,     0,     0,   774,     0,
     775,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   963,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   776,   777,     0,   778,   212,   213,   214,   215,   216,
     217,   218,   969,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,     0,     0,     0,     0,
       0,     0,     0,   212,   213,   214,   215,   216,   217,   218,
     973,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   881,     0,     0,     1,     0,     0,
       2,     0,   993,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   882,     0,     0,   883,     0,   884,   885,
       3,     0,     0,     0,   994,     0,   779,   780,     0,   886,
       0,     0,     0,     0,     0,   887,   888,     0,     0,     4,
       5,     0,     0,     0,     0,   187,     0,     0,     0,   212,
     213,   214,   215,   216,   217,   218,   889,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     213,   214,   215,   216,   217,   218,     6,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
       0,     0,   890,     0,     0,     0,     0,     0,     0,     0,
     454,     0,     0,     0,     7,     0,   891,     0,   259,   260,
       8,   261,   892,   262,   263,     0,     0,     0,     0,     9,
      10,     0,     0,     0,     0,   264,     0,     0,   580,     0,
       0,     0,    11,   584,     0,    12,     0,     0,     0,     0,
      13,     0,     0,   265,   266,   267,   268,     0,   893,   269,
       0,     0,     0,   270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   271,     0,
       0,     0,     0,     0,     0,   272,     0,     0,     0,   273,
       0,     0,     0,     0,     0,   274,     0,   275,   276,   277,
       0,     0,     0,   212,   213,   214,   215,   216,   217,   218,
     278,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,     0,   279,   280,     0,   281,   282,
       0,     0,     0,     0,   283,   284,     0,     0,     0,     0,
     285,   286,     0,     0,     0,   287,     0,     0,     0,     0,
     288,     0,   289,     0,     0,     0,   290,   212,   213,   214,
     215,   216,   217,   218,     0,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,     0,     0,
       0,   579,   212,   213,   214,   215,   216,   217,   218,     0,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,     0,   211,     0,     0,     0,     0,     0,
     758,   212,   213,   214,   215,   216,   217,   218,     0,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,     0,     0,     0,   679,     0,     0,     0,     0,
       0,   232,     0,     0,   212,   213,   214,   215,   216,   217,
     218,   759,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,     0,   212,   213,   214,   215,
     216,   217,   218,   487,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,     0,   212,   213,
     214,   215,   216,   217,   218,   595,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   214,
     215,   216,   217,   218,     0,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231
};

static const yytype_int16 yycheck[] =
{
      53,   307,   546,   548,   657,   144,     3,     3,     3,   413,
     414,     3,   247,     3,   500,   419,   145,   421,    20,    20,
       3,   611,     4,     5,     6,     7,   659,     8,     3,     3,
       6,   109,   449,    74,   451,    80,    89,    90,    18,   452,
       3,   746,   145,    95,   174,    33,   154,   100,   101,   102,
     183,   783,     3,   106,    80,   134,   990,    40,   164,   712,
       9,   190,   171,     8,     6,   752,    94,    12,   481,   164,
     173,    20,    54,    94,  1008,  1009,    18,   186,   211,    59,
      68,   211,    66,   135,   137,   130,   164,    75,    18,    40,
      65,     3,     3,   637,   747,   748,     3,    85,  1032,   151,
      80,   645,     3,   211,   130,    37,    80,   301,    10,    11,
      12,    13,    14,    15,    16,   660,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   170,
     183,   234,   211,    59,   187,    40,    66,    18,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   141,   130,   572,   391,   574,   155,   212,
     213,   214,   215,   216,   896,   870,   147,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   308,
     593,   375,   235,   211,   871,    66,   819,    94,   130,   177,
     211,   385,   736,   177,   124,   739,   786,   300,   110,   110,
     132,   108,   132,   108,   154,   108,   208,   208,    74,   110,
     136,   118,   209,   209,   209,   108,   702,   209,   164,   209,
     134,   203,   204,   205,   353,   208,   630,   209,   632,   633,
     137,   164,    92,   362,   197,   198,   199,   200,   377,   154,
     145,     0,   145,   124,   897,   298,   172,   441,   108,   207,
     155,   132,   145,    88,    89,    88,    89,   132,     3,   209,
     109,    67,    38,    38,   317,   318,   810,   116,   503,    70,
     815,   506,   325,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   209,   161,    71,   211,   104,   174,
     101,   354,   355,    79,   357,   208,   209,   108,   210,   362,
     110,   112,     3,   174,    70,   175,   209,   118,   159,    59,
      59,   865,    10,    11,    12,    13,    14,    15,    16,    56,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   109,    56,   101,   164,   182,   209,   182,
       5,     3,   108,    93,    93,     3,   485,    94,   181,   488,
     489,   490,   118,   174,   174,    20,    10,    11,    12,    13,
      14,    15,    16,   426,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   174,   211,   181,
       3,     4,     5,     6,     7,     8,   136,   136,   209,   209,
      53,   454,   129,   456,    17,    18,    59,   460,   461,   211,
     463,   119,    25,    26,   155,   142,     3,   129,     3,   211,
     208,    34,   209,   476,   477,   478,   960,   154,     3,    57,
     142,   560,   172,   172,   487,   187,   144,    40,   179,   132,
      93,    54,   154,    96,   497,    58,   208,   209,    61,    62,
       3,   504,   174,   187,   988,   989,   109,   208,   764,   181,
      73,    65,   187,   116,    77,    69,   406,   407,     3,   409,
     410,   411,     3,  1007,   211,   415,   416,   417,   122,   107,
     420,   534,     3,   136,   275,     8,   208,   115,   101,   211,
     281,   119,   283,     3,     4,     5,     6,     7,     8,   209,
     128,   210,   211,   210,   211,   109,   209,    17,    18,   562,
     210,   211,   565,    63,    64,    25,   144,   130,   571,   172,
     210,   211,   210,   211,   152,   210,   211,   580,   210,   211,
       9,   584,   585,   146,   210,   211,   149,   150,   209,   152,
      50,   209,   595,   147,    54,   210,   211,   209,    58,   210,
     211,    61,    62,   210,   211,   159,   160,    13,    14,   209,
      16,   614,   209,    19,   210,   211,   619,   211,   172,    26,
      27,    28,    29,    30,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   210,   211,   209,   208,   209,   652,
     210,   211,   210,   211,   210,   211,   262,   263,   264,   265,
     120,   267,   210,   211,   270,   271,   272,   210,   211,   209,
     130,   277,   278,   279,   210,   211,   282,   209,   681,   210,
     211,   684,   210,   211,   210,   211,   210,   211,   691,    23,
      24,    25,    26,    27,    28,    29,    30,   700,   701,   210,
     211,   210,   211,   209,   707,   708,   166,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   210,
     211,   210,   211,   726,   210,   211,   209,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   210,   211,   209,
     209,     3,     4,     5,     6,     7,     8,   210,   211,   762,
     763,   209,   765,   209,   767,    17,    18,   210,   211,   210,
     211,   210,   211,    25,    24,    25,    26,    27,    28,    29,
      30,   209,    34,   209,    36,   210,   211,   210,   211,     3,
       4,     5,     6,     7,     8,   210,   211,   210,   211,    44,
      45,   209,    54,    17,    18,   209,    58,   210,   211,    61,
      62,    25,   209,   816,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   208,   209,    40,   210,   211,
     209,     3,     4,     5,     6,     7,     8,   840,   210,   211,
      54,    44,    45,   846,    58,    17,    18,    61,    62,    53,
     853,   210,   211,    25,    26,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   210,   211,   387,   388,     3,
       4,     5,     6,     7,     8,   495,   496,    53,   130,   705,
     706,     3,    54,    17,    18,    53,    58,     3,    53,    61,
      62,    25,    13,    14,    15,    16,   148,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      53,    53,     3,   132,   187,   918,   130,     3,    26,   922,
      54,     3,     3,     3,    58,   155,   210,    61,    62,   932,
     210,   210,   210,   209,     3,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,     3,   210,   209,   130,     3,
      94,   115,   131,   966,   967,     3,     3,     3,   182,     3,
       3,     3,     3,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   209,   209,   209,   130,    13,    14,    15,
      16,   209,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,    49,   209,   209,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   209,   132,     3,
       3,     3,     3,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   133,   179,   209,     3,     4,     5,     6,
       7,     8,   210,   210,   210,   209,   209,    30,   116,   209,
      17,    18,   209,   116,   116,   115,   115,   132,    25,     3,
       4,     5,     6,     7,     8,   158,     5,     4,   209,     5,
       5,   176,   130,    17,    18,     3,     3,   132,    48,   121,
      20,    25,   209,   134,   114,   210,    98,    54,    97,     3,
       3,    58,   210,   209,    61,    62,   116,   116,   209,     3,
     210,    59,   210,   209,     3,   209,   209,   209,   209,   176,
      54,     3,   209,   116,    58,   209,   116,    61,    62,   209,
     209,     3,     3,     3,     3,   210,   116,   210,   210,   210,
     210,   210,    48,   115,   103,    20,    80,     3,     5,     3,
       4,     5,     6,     7,     8,   210,   154,     4,   209,     4,
       3,     3,   209,    17,    18,     3,   209,   209,     3,   209,
     209,    25,   209,   130,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     3,   130,   176,   155,   211,
      54,   209,   209,   209,    58,   209,   209,    61,    62,   170,
      20,     3,     3,   210,     3,     3,   210,     4,   210,   210,
     176,   210,   209,   211,   209,   116,    80,    20,   116,     3,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
      18,   209,   209,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   209,     3,   209,   130,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   209,   209,
     209,     3,     3,     4,     5,     6,     7,     8,   112,   211,
     143,     3,   177,   140,     3,     3,    17,    18,   210,   140,
       5,   130,   209,   209,    25,   209,    41,     3,   209,     4,
     116,   116,     3,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,    54,     3,   209,     3,    58,     3,     5,
      61,    62,     5,    40,   140,   209,   116,     3,   209,   209,
       3,     3,   211,   210,     5,   211,   210,   209,   209,    80,
       3,     4,     5,     6,     7,     8,   209,     5,     3,     3,
     210,   209,   105,   210,    17,    18,   210,   209,    66,    60,
     761,   437,    25,     3,     4,     5,     6,     7,     8,   188,
     466,   235,   241,   618,    73,   177,   493,    17,    18,   302,
      48,   450,   840,   815,   649,    25,   661,    93,    -1,   130,
     662,    54,   418,    -1,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    80,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,    -1,   130,   209,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     130,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,    -1,    -1,   209,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,    -1,    -1,   209,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     211,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,   211,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      97,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   211,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   211,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   211,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,   210,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,   210,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    10,    11,
      12,    13,    14,    15,    16,   210,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   210,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   210,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   210,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   210,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   210,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   210,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    10,
      11,    12,    13,    14,    15,    16,   210,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    10,    11,    12,    13,    14,    15,    16,   210,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   210,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   210,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   210,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   210,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   210,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   210,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    10,    11,    12,    13,    14,    15,    16,   210,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    10,    11,    12,    13,    14,    15,
      16,   210,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   210,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     210,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,    -1,    -1,    71,    72,    -1,    -1,    -1,    76,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,    -1,   102,    10,    11,    12,    13,    14,
      15,    16,   210,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     210,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    18,    -1,    -1,    32,    -1,    -1,
      35,    -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,    43,
      55,    -1,    -1,    -1,   210,    -1,   184,   185,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    74,
      75,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    80,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      11,    12,    13,    14,    15,    16,   111,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,   139,    -1,   130,    -1,    46,    47,
     145,    49,   136,    51,    52,    -1,    -1,    -1,    -1,   154,
     155,    -1,    -1,    -1,    -1,    63,    -1,    -1,   165,    -1,
      -1,    -1,   167,    94,    -1,   170,    -1,    -1,    -1,    -1,
     175,    -1,    -1,    81,    82,    83,    84,    -1,   172,    87,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,   123,    -1,   125,   126,   127,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     138,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,   153,   154,    -1,   156,   157,
      -1,    -1,    -1,    -1,   162,   163,    -1,    -1,    -1,    -1,
     168,   169,    -1,    -1,    -1,   173,    -1,    -1,    -1,    -1,
     178,    -1,   180,    -1,    -1,    -1,   184,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    88,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      38,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    79,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,    39,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    10,    11,
      12,    13,    14,    15,    16,    39,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    35,    55,    74,    75,   111,   139,   145,   154,
     155,   167,   170,   175,   213,   222,   223,   255,   259,   260,
     263,   264,   265,   266,   267,   268,   278,   279,   282,   284,
     285,   286,   306,   164,   164,    65,    69,   109,   147,   159,
     160,   172,   288,   256,   109,   164,   270,   164,   270,     8,
     147,   307,   308,   236,   164,   270,   280,     3,    65,     0,
     207,     3,     3,   110,   283,     3,     3,   110,   283,   159,
     109,   164,     3,    94,   108,   118,   137,   257,     3,     3,
     110,    70,   101,   108,   112,   118,   271,     3,   271,     9,
      20,     3,    80,   211,     3,     4,     5,     6,     7,     8,
      17,    18,    25,    26,    34,    54,    58,    61,    62,    73,
      77,   101,   130,   146,   149,   150,   152,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   209,   214,   237,
     238,     3,   108,   118,     3,   209,   240,   241,   242,   244,
     254,     3,   213,    33,    68,    75,    85,   141,   177,   208,
     187,     3,    40,   132,   187,     3,     3,   110,   283,   208,
     258,     3,   257,    94,   211,   187,     3,     3,   214,   214,
     308,   208,   209,     9,   214,   214,   214,   182,   214,   221,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     214,     3,    10,    11,    12,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    40,   239,    94,   211,   208,   239,   223,   240,
     154,   211,    57,   107,   119,   128,   144,   152,   245,   247,
      40,   243,    53,    53,    53,    53,    53,    53,     3,    46,
      47,    49,    51,    52,    63,    81,    82,    83,    84,    87,
      91,   106,   113,   117,   123,   125,   126,   127,   138,   153,
     154,   156,   157,   162,   163,   168,   169,   173,   178,   180,
     184,   302,     3,     3,   132,   187,     3,    26,   181,   224,
     174,   240,     3,     3,   154,   209,   272,   154,   272,     3,
     214,   215,   216,   214,   214,   221,    88,    89,   182,   223,
     214,    50,   120,   166,   214,   219,   214,   214,    26,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     210,   210,   210,   210,   210,   214,   214,   214,   214,   214,
       6,    18,   130,   209,    13,    14,    16,    19,   214,    34,
      36,   148,   209,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,     3,   240,   238,     3,    92,   108,
     175,   251,   210,   210,     3,   281,   241,   119,   144,   248,
     242,   115,   131,   246,     3,     3,     3,     3,     3,     3,
       3,   209,   298,   298,   298,   298,   298,   298,   209,   298,
     298,   298,    49,   299,   299,   298,   298,   298,   209,   299,
     298,   299,   209,   209,    18,    59,    80,   174,   209,   132,
       3,     3,   108,   145,   208,   209,   304,   305,   214,   133,
     230,   240,   224,   258,     3,   277,     3,   273,   179,   277,
     179,   223,   211,   210,   165,    88,    89,   214,   214,   210,
      94,   211,   210,    94,   214,   211,   211,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   211,   211,   211,     6,
     130,   217,   223,   214,   214,   209,   214,    39,   209,   209,
     209,   223,   224,   239,   116,   116,   116,    20,   208,   211,
     224,   246,   246,   115,   132,   242,   115,    59,    93,   136,
     172,   158,     5,   300,   301,   300,   300,     4,   303,   300,
     300,   300,   301,   301,   300,   300,   300,   303,   301,   300,
     301,     5,     5,   130,   209,   214,   176,     3,   197,   198,
     199,   200,   261,   262,     3,   174,   209,   132,     3,    53,
      59,    93,    96,   109,   116,   136,   172,   289,   290,   296,
     243,    48,   121,   233,   224,    20,   134,   211,   269,   210,
     211,   209,   274,   269,   274,   269,   215,   214,   214,    88,
     165,   214,   214,   214,    94,   114,   220,   220,   214,   214,
     214,   215,   210,   218,   223,    39,   214,   223,   223,   223,
     210,    98,   225,   251,    97,   252,   252,   252,   214,     3,
       3,   230,   242,   214,   132,   174,   249,   250,   242,   209,
     116,   116,   209,     3,   210,   211,   171,   186,    63,    64,
     210,   211,   210,   210,   210,    59,   214,   209,   209,   209,
     209,   209,   210,   211,   174,   209,   176,   261,     3,   209,
     304,     3,   209,   116,   109,   116,   209,   209,   116,   209,
     210,   211,     3,   223,     3,   231,   232,   214,    80,   214,
     116,     3,     3,    80,   214,   276,   211,   269,   269,    88,
     214,    97,   210,   210,   211,   210,   214,   214,   210,   210,
     210,   211,   210,   210,   215,   210,   214,   210,   210,   210,
      48,   103,   229,   115,   209,   209,   209,    20,    20,   208,
     233,   214,   209,   250,   214,   209,   209,     3,   295,     5,
     154,     4,   301,     4,   301,   301,   209,   210,   261,     3,
       3,     3,     3,     3,   176,   261,   209,   210,   174,   209,
     289,    59,    93,   136,   172,   214,   209,   209,   209,     3,
     235,   235,   209,   295,   287,   304,   290,   302,    38,    79,
     227,   211,   122,   211,   170,    20,   210,   211,   275,   214,
     214,   210,    71,    72,    76,    78,    99,   100,   102,   184,
     185,   214,   210,   214,   226,   214,   230,     3,   253,   253,
     253,   214,   214,     3,   235,   210,     3,   292,     3,   291,
     210,   211,   210,     4,   214,   210,   210,   210,   210,   211,
     209,   210,   261,   176,   261,   210,   209,   116,   116,   209,
     210,   292,   235,   235,   210,   211,   210,   291,   210,    37,
     132,   297,   232,   214,   214,   277,    80,   214,    80,   214,
     209,   210,   210,   210,   227,   183,   211,   228,   233,   210,
     211,   210,   210,    20,   210,    18,   210,   211,   210,   211,
       3,   210,     3,   261,   210,   209,   210,   287,   304,   214,
     209,   209,   295,   210,   210,   210,     3,   210,     5,    20,
       3,    18,    37,    40,    42,    43,    53,    59,    60,    80,
     116,   130,   136,   172,   276,   143,   214,   112,   234,     3,
     214,   177,   140,     3,     3,   210,   210,   261,   210,   292,
     291,   210,   140,     5,    74,   161,   130,   209,   209,   209,
      41,     3,   209,     4,     4,     5,     6,     7,    54,   203,
     204,   205,   209,   116,   116,   210,   227,   235,     3,   210,
     210,   210,     3,     3,     3,     5,   214,     5,    40,    59,
     136,   172,   214,   209,   209,   209,   214,   209,   140,   208,
     209,   210,   211,   210,   210,   211,   209,   209,   116,   210,
     210,   210,   210,   210,     3,   293,     3,     3,   293,     5,
      44,    45,     5,   214,   214,   210,   211,   208,   209,   209,
     210,   210,   210,   210,   210,   294,     3,     3,   293,   293,
     294,    44,    45,    18,    66,   124,   132,   209,   210,   210,
      18,    66,   177,   105,    95,   135,   151,    74,   170,   293,
     294,   294,    67,   104,    56,   129,   142,   154,    56,   129,
     142,   154,   210,    80,   130,    80,   130,   294
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
#line 306 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 312 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 313 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 315 "parser/evoparser.y"
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
#line 333 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 341 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 349 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 355 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 362 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 363 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 364 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 365 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 366 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 367 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 368 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 369 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 370 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 371 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 372 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 373 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 374 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 375 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 376 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 377 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 378 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 380 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 385 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 386 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 387 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 388 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 391 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 392 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 393 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 394 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 395 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 398 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 399 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 402 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 403 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 43:
#line 406 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 410 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 46:
#line 410 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 47:
#line 411 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 48:
#line 411 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 49:
#line 412 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 413 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 414 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 418 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 422 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 423 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 424 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 425 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 426 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 427 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 429 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 430 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 431 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 432 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 433 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 434 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 435 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 436 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 437 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 438 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 439 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 440 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 441 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 442 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 449 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 456 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 463 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 469 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 77:
#line 470 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 78:
#line 471 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 79:
#line 474 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 80:
#line 475 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 81:
#line 478 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 82:
#line 479 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 83:
#line 480 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 84:
#line 481 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 85:
#line 482 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 86:
#line 483 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 87:
#line 484 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 88:
#line 485 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 89:
#line 486 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 90:
#line 490 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 91:
#line 492 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 92:
#line 494 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 93:
#line 496 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 94:
#line 500 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 95:
#line 508 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 96:
#line 518 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 97:
#line 519 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 98:
#line 522 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 99:
#line 523 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 100:
#line 527 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 535 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 543 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 554 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 104:
#line 563 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 105:
#line 568 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (11)].intval), (yyvsp[(3) - (11)].intval), (yyvsp[(5) - (11)].intval));
        g_sel.distinct = ((yyvsp[(2) - (11)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (11)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 107:
#line 579 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 109:
#line 581 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 110:
#line 584 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 111:
#line 591 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 112:
#line 599 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 600 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 114:
#line 601 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 115:
#line 604 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 605 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 118:
#line 609 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 123:
#line 621 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 124:
#line 628 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 125:
#line 629 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 126:
#line 630 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 127:
#line 631 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 129:
#line 635 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 130:
#line 638 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 131:
#line 639 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 132:
#line 642 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 133:
#line 643 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 134:
#line 644 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 135:
#line 645 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 136:
#line 646 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 137:
#line 647 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 138:
#line 648 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 139:
#line 649 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 140:
#line 650 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 141:
#line 653 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 142:
#line 654 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 143:
#line 656 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 144:
#line 664 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 145:
#line 669 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 146:
#line 670 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 147:
#line 671 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 148:
#line 674 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 149:
#line 675 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 152:
#line 684 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 153:
#line 689 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 154:
#line 690 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 155:
#line 691 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 158:
#line 700 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 159:
#line 702 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 160:
#line 704 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 161:
#line 706 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 162:
#line 708 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 163:
#line 711 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 164:
#line 712 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 165:
#line 713 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 166:
#line 716 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 167:
#line 717 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 168:
#line 720 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 169:
#line 721 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 170:
#line 724 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 171:
#line 725 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 172:
#line 726 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 175:
#line 733 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 176:
#line 734 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 177:
#line 739 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 178:
#line 741 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 179:
#line 743 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 181:
#line 747 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 182:
#line 748 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 183:
#line 751 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 184:
#line 752 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 185:
#line 755 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 186:
#line 760 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 187:
#line 768 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 188:
#line 775 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 189:
#line 776 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 190:
#line 777 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 191:
#line 778 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 192:
#line 782 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 193:
#line 785 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 194:
#line 786 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 197:
#line 791 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 198:
#line 796 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 199:
#line 803 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 200:
#line 810 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 201:
#line 820 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 202:
#line 827 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 203:
#line 834 "parser/evoparser.y"
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

  case 204:
#line 844 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 205:
#line 852 "parser/evoparser.y"
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

  case 206:
#line 862 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 207:
#line 870 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 208:
#line 879 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 209:
#line 888 "parser/evoparser.y"
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

  case 210:
#line 900 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 211:
#line 905 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 212:
#line 910 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 213:
#line 916 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 214:
#line 923 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 215:
#line 930 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 216:
#line 937 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 217:
#line 947 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 218:
#line 954 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 219:
#line 963 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 220:
#line 970 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 221:
#line 979 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 222:
#line 986 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 223:
#line 995 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 224:
#line 1002 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 225:
#line 1008 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 226:
#line 1018 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 227:
#line 1022 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 228:
#line 1028 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 229:
#line 1034 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 230:
#line 1041 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 231:
#line 1047 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 232:
#line 1054 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 233:
#line 1060 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 234:
#line 1066 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 235:
#line 1072 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 236:
#line 1078 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 237:
#line 1084 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 238:
#line 1092 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 239:
#line 1099 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 241:
#line 1107 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 242:
#line 1110 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 243:
#line 1111 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 244:
#line 1112 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 245:
#line 1113 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 246:
#line 1114 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 250:
#line 1121 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 251:
#line 1125 "parser/evoparser.y"
    {
        g_ins.columnCount = 0;
        strncpy(g_ins.columns[g_ins.columnCount], (yyvsp[(1) - (1)].strval), 127);
        g_ins.columns[g_ins.columnCount][127] = '\0';
        g_ins.columnCount++;
        emit("COLUMN %s", (yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 252:
#line 1135 "parser/evoparser.y"
    {
        if (g_ins.columnCount < 64) {
            strncpy(g_ins.columns[g_ins.columnCount], (yyvsp[(3) - (3)].strval), 127);
            g_ins.columns[g_ins.columnCount][127] = '\0';
            g_ins.columnCount++;
        }
        emit("COLUMN %s", (yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
        (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1;
    ;}
    break;

  case 253:
#line 1147 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 254:
#line 1148 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 255:
#line 1148 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 256:
#line 1151 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 257:
#line 1152 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 258:
#line 1153 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 259:
#line 1154 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 260:
#line 1158 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 261:
#line 1161 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 262:
#line 1162 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 263:
#line 1163 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 264:
#line 1164 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 265:
#line 1170 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 266:
#line 1176 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 267:
#line 1181 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 268:
#line 1186 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 269:
#line 1191 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 270:
#line 1198 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 271:
#line 1203 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 272:
#line 1204 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 273:
#line 1205 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 274:
#line 1210 "parser/evoparser.y"
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

  case 275:
#line 1221 "parser/evoparser.y"
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

  case 276:
#line 1232 "parser/evoparser.y"
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

  case 277:
#line 1243 "parser/evoparser.y"
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

  case 278:
#line 1256 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 279:
#line 1260 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 280:
#line 1261 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 281:
#line 1264 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 282:
#line 1265 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 283:
#line 1269 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 284:
#line 1274 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 285:
#line 1276 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 286:
#line 1278 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 287:
#line 1280 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 288:
#line 1282 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 289:
#line 1286 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 290:
#line 1290 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 291:
#line 1291 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 292:
#line 1296 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 293:
#line 1304 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 294:
#line 1313 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 296:
#line 1317 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 297:
#line 1318 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 298:
#line 1319 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 299:
#line 1320 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 300:
#line 1325 "parser/evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 301:
#line 1329 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 302:
#line 1334 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 303:
#line 1338 "parser/evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 304:
#line 1341 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 305:
#line 1342 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 306:
#line 1343 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 307:
#line 1346 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 308:
#line 1347 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 309:
#line 1350 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 310:
#line 1351 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 311:
#line 1352 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 312:
#line 1353 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 313:
#line 1354 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 314:
#line 1355 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 315:
#line 1356 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 316:
#line 1357 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 317:
#line 1359 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 318:
#line 1361 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 319:
#line 1363 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 320:
#line 1365 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 321:
#line 1367 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 322:
#line 1369 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 323:
#line 1372 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 324:
#line 1373 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 325:
#line 1376 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 326:
#line 1377 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 327:
#line 1380 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 328:
#line 1381 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 330:
#line 1385 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 331:
#line 1386 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 332:
#line 1387 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 333:
#line 1388 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 334:
#line 1389 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 335:
#line 1390 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 336:
#line 1391 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 337:
#line 1392 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 338:
#line 1393 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 339:
#line 1394 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 340:
#line 1395 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 341:
#line 1396 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 342:
#line 1397 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 343:
#line 1398 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 344:
#line 1399 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 345:
#line 1400 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 346:
#line 1401 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 347:
#line 1404 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 348:
#line 1405 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 349:
#line 1408 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 350:
#line 1410 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 351:
#line 1418 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 352:
#line 1419 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 354:
#line 1421 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 355:
#line 1422 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 356:
#line 1423 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 357:
#line 1424 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 358:
#line 1425 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 359:
#line 1426 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 360:
#line 1427 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 361:
#line 1428 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 362:
#line 1429 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 363:
#line 1436 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 364:
#line 1437 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 365:
#line 1438 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 366:
#line 1439 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 367:
#line 1440 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 368:
#line 1441 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 369:
#line 1442 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 370:
#line 1443 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 371:
#line 1444 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 372:
#line 1445 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 373:
#line 1446 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 374:
#line 1447 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 375:
#line 1448 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 376:
#line 1449 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 377:
#line 1450 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 378:
#line 1451 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 379:
#line 1452 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 380:
#line 1453 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 381:
#line 1454 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 382:
#line 1455 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 383:
#line 1456 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 384:
#line 1459 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 385:
#line 1460 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 386:
#line 1461 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 387:
#line 1464 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 388:
#line 1465 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 389:
#line 1468 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 390:
#line 1469 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 391:
#line 1470 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 393:
#line 1474 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 394:
#line 1475 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 395:
#line 1479 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 396:
#line 1480 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 397:
#line 1481 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 398:
#line 1482 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 399:
#line 1483 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 400:
#line 1484 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 401:
#line 1485 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 402:
#line 1486 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 403:
#line 1487 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 404:
#line 1488 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 405:
#line 1489 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 406:
#line 1490 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 407:
#line 1491 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 408:
#line 1492 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 409:
#line 1493 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 410:
#line 1494 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 411:
#line 1495 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 412:
#line 1496 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 413:
#line 1497 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 414:
#line 1498 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 415:
#line 1499 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 416:
#line 1500 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 417:
#line 1501 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 418:
#line 1502 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 419:
#line 1503 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 420:
#line 1504 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 421:
#line 1505 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 422:
#line 1506 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 423:
#line 1507 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 424:
#line 1508 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 425:
#line 1509 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 426:
#line 1510 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 427:
#line 1513 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 428:
#line 1514 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 429:
#line 1518 "parser/evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)); ;}
    break;

  case 430:
#line 1521 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 431:
#line 1522 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 432:
#line 1523 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 433:
#line 1527 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 434:
#line 1530 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 435:
#line 1531 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 439:
#line 1535 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 440:
#line 1536 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5521 "parser/evoparser.tab.c"
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


#line 1539 "parser/evoparser.y"

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
