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
#define YYPURE 1

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
     COLUMN = 311,
     CONCURRENTLY = 312,
     DATABASE = 313,
     DEFERRABLE = 314,
     DEFERRED = 315,
     DISABLE = 316,
     DOMAIN = 317,
     DELAYED = 318,
     DAY_HOUR = 319,
     DAY_MICROSECOND = 320,
     DISTINCT = 321,
     DELETE = 322,
     DROP = 323,
     DAY_MINUTE = 324,
     DISTINCTROW = 325,
     DAY_SECOND = 326,
     DESC = 327,
     DEFAULT = 328,
     DOUBLE = 329,
     DATETIME = 330,
     DECIMAL = 331,
     DATE = 332,
     ENABLE = 333,
     ESCAPED = 334,
     ENUM = 335,
     END = 336,
     ELSE = 337,
     EXPLAIN = 338,
     FLOAT = 339,
     FORCE = 340,
     FOREIGN = 341,
     FROM = 342,
     FULL = 343,
     FULLTEXT = 344,
     FOR = 345,
     GROUP = 346,
     HOUR_MINUTE = 347,
     HOUR_MICROSECOND = 348,
     HIGH_PRIORITY = 349,
     HOUR_SECOND = 350,
     HAVING = 351,
     IMMEDIATE = 352,
     INITIALLY = 353,
     INTEGER = 354,
     INNER = 355,
     IGNORE = 356,
     INDEX = 357,
     IF = 358,
     INSERT = 359,
     INTO = 360,
     INT = 361,
     INTERVAL = 362,
     JOIN = 363,
     KEY = 364,
     LONGTEXT = 365,
     LOW_PRIORITY = 366,
     LEFT = 367,
     LEADING = 368,
     LIMIT = 369,
     LOCKED = 370,
     OFFSET = 371,
     LONGBLOB = 372,
     MATCH = 373,
     MEDIUMTEXT = 374,
     MEDIUMBLOB = 375,
     MEDIUMINT = 376,
     NATURAL = 377,
     NO_ACTION = 378,
     NULLX = 379,
     OUTER = 380,
     ON = 381,
     ORDER = 382,
     ONDUPLICATE = 383,
     PARTIAL = 384,
     PRIMARY = 385,
     QUICK = 386,
     REAL = 387,
     RECLAIM = 388,
     REFERENCES = 389,
     RENAME = 390,
     RESTRICT = 391,
     ROLLUP = 392,
     RIGHT = 393,
     REPLACE = 394,
     SQL_SMALL_RESULT = 395,
     SCHEMA = 396,
     SHARE = 397,
     SKIP = 398,
     SOME = 399,
     SQL_CALC_FOUND_ROWS = 400,
     SQL_BIG_RESULT = 401,
     SIMPLE = 402,
     STRAIGHT_JOIN = 403,
     SMALLINT = 404,
     SET = 405,
     SELECT = 406,
     TINYTEXT = 407,
     TINYINT = 408,
     TO = 409,
     TEMPORARY = 410,
     GLOBAL = 411,
     PRESERVE = 412,
     TEXT = 413,
     TIMESTAMP = 414,
     TABLE = 415,
     THEN = 416,
     TRAILING = 417,
     TRUNCATE = 418,
     TINYBLOB = 419,
     TIME = 420,
     UPDATE = 421,
     UNSIGNED = 422,
     UNIQUE = 423,
     UUID = 424,
     USING = 425,
     USE = 426,
     HASH = 427,
     VALIDATE = 428,
     VARCHAR = 429,
     VALUES = 430,
     VARBINARY = 431,
     WHERE = 432,
     WHEN = 433,
     WITH = 434,
     YEAR = 435,
     YEAR_MONTH = 436,
     ZEROFILL = 437,
     EXISTS = 438,
     FSUBSTRING = 439,
     FTRIM = 440,
     FDATE_ADD = 441,
     FDATE_SUB = 442,
     FCOUNT = 443,
     FSUM = 444,
     FAVG = 445,
     FMIN = 446,
     FMAX = 447,
     FUPPER = 448,
     FLOWER = 449,
     FLENGTH = 450,
     FCONCAT = 451,
     FREPLACE = 452,
     FCOALESCE = 453,
     FGEN_RANDOM_UUID = 454,
     FGEN_RANDOM_UUID_V7 = 455,
     FSNOWFLAKE_ID = 456,
     FLAST_INSERT_ID = 457
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
#define COLUMN 311
#define CONCURRENTLY 312
#define DATABASE 313
#define DEFERRABLE 314
#define DEFERRED 315
#define DISABLE 316
#define DOMAIN 317
#define DELAYED 318
#define DAY_HOUR 319
#define DAY_MICROSECOND 320
#define DISTINCT 321
#define DELETE 322
#define DROP 323
#define DAY_MINUTE 324
#define DISTINCTROW 325
#define DAY_SECOND 326
#define DESC 327
#define DEFAULT 328
#define DOUBLE 329
#define DATETIME 330
#define DECIMAL 331
#define DATE 332
#define ENABLE 333
#define ESCAPED 334
#define ENUM 335
#define END 336
#define ELSE 337
#define EXPLAIN 338
#define FLOAT 339
#define FORCE 340
#define FOREIGN 341
#define FROM 342
#define FULL 343
#define FULLTEXT 344
#define FOR 345
#define GROUP 346
#define HOUR_MINUTE 347
#define HOUR_MICROSECOND 348
#define HIGH_PRIORITY 349
#define HOUR_SECOND 350
#define HAVING 351
#define IMMEDIATE 352
#define INITIALLY 353
#define INTEGER 354
#define INNER 355
#define IGNORE 356
#define INDEX 357
#define IF 358
#define INSERT 359
#define INTO 360
#define INT 361
#define INTERVAL 362
#define JOIN 363
#define KEY 364
#define LONGTEXT 365
#define LOW_PRIORITY 366
#define LEFT 367
#define LEADING 368
#define LIMIT 369
#define LOCKED 370
#define OFFSET 371
#define LONGBLOB 372
#define MATCH 373
#define MEDIUMTEXT 374
#define MEDIUMBLOB 375
#define MEDIUMINT 376
#define NATURAL 377
#define NO_ACTION 378
#define NULLX 379
#define OUTER 380
#define ON 381
#define ORDER 382
#define ONDUPLICATE 383
#define PARTIAL 384
#define PRIMARY 385
#define QUICK 386
#define REAL 387
#define RECLAIM 388
#define REFERENCES 389
#define RENAME 390
#define RESTRICT 391
#define ROLLUP 392
#define RIGHT 393
#define REPLACE 394
#define SQL_SMALL_RESULT 395
#define SCHEMA 396
#define SHARE 397
#define SKIP 398
#define SOME 399
#define SQL_CALC_FOUND_ROWS 400
#define SQL_BIG_RESULT 401
#define SIMPLE 402
#define STRAIGHT_JOIN 403
#define SMALLINT 404
#define SET 405
#define SELECT 406
#define TINYTEXT 407
#define TINYINT 408
#define TO 409
#define TEMPORARY 410
#define GLOBAL 411
#define PRESERVE 412
#define TEXT 413
#define TIMESTAMP 414
#define TABLE 415
#define THEN 416
#define TRAILING 417
#define TRUNCATE 418
#define TINYBLOB 419
#define TIME 420
#define UPDATE 421
#define UNSIGNED 422
#define UNIQUE 423
#define UUID 424
#define USING 425
#define USE 426
#define HASH 427
#define VALIDATE 428
#define VARCHAR 429
#define VALUES 430
#define VARBINARY 431
#define WHERE 432
#define WHEN 433
#define WITH 434
#define YEAR 435
#define YEAR_MONTH 436
#define ZEROFILL 437
#define EXISTS 438
#define FSUBSTRING 439
#define FTRIM 440
#define FDATE_ADD 441
#define FDATE_SUB 442
#define FCOUNT 443
#define FSUM 444
#define FAVG 445
#define FMIN 446
#define FMAX 447
#define FUPPER 448
#define FLOWER 449
#define FLENGTH 450
#define FCONCAT 451
#define FREPLACE 452
#define FCOALESCE 453
#define FGEN_RANDOM_UUID 454
#define FGEN_RANDOM_UUID_V7 455
#define FSNOWFLAKE_ID 456
#define FLAST_INSERT_ID 457




/* Copy the first part of user declarations.  */
#line 4 "parser/evoparser.y"

	#define _CRT_SECURE_NO_WARNINGS
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdio.h>
	#include "../db/database.h"
	#include "../db/expression.h"

	void yyerror(void *scanner, const char *s, ...);
	void emit(const char *s, ...);

	/* Forward declare yylex for reentrant parser */
	#ifndef YY_DECL
	union YYSTYPE;
	int yylex(union YYSTYPE *lvalp, void *scanner);
	#endif

	/* Track alias for current select_expr — thread-local */
	static __thread char g_currentAlias[128];


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
#line 29 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 193 of yacc.c.  */
#line 530 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 543 "parser/evoparser.tab.c"

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
#define YYLAST   2958

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  217
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  452
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1089

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   457

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     214,   215,    26,    24,   216,    25,   213,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   212,
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
     204,   205,   206,   207,   208,   209,   210,   211
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
     451,   453,   455,   457,   459,   463,   476,   477,   480,   481,
     486,   489,   494,   495,   497,   499,   500,   503,   504,   507,
     508,   512,   514,   518,   521,   522,   525,   530,   535,   536,
     539,   542,   547,   552,   553,   556,   558,   562,   563,   566,
     569,   572,   575,   578,   581,   584,   587,   589,   593,   595,
     598,   601,   603,   604,   606,   610,   612,   614,   618,   624,
     628,   632,   634,   635,   641,   645,   651,   658,   664,   665,
     667,   669,   670,   672,   674,   676,   679,   682,   683,   684,
     686,   689,   694,   701,   708,   715,   716,   719,   720,   722,
     726,   730,   732,   740,   743,   746,   749,   750,   757,   760,
     765,   766,   769,   777,   779,   783,   789,   791,   800,   811,
     821,   833,   844,   857,   869,   883,   893,   905,   916,   929,
     941,   954,   956,   960,   962,   967,   972,   977,   984,   986,
     990,   992,   996,   998,  1002,  1004,  1008,  1014,  1016,  1027,
    1038,  1056,  1069,  1089,  1101,  1108,  1117,  1124,  1131,  1138,
    1146,  1148,  1157,  1158,  1163,  1164,  1167,  1170,  1173,  1176,
    1178,  1179,  1180,  1184,  1186,  1190,  1194,  1195,  1202,  1204,
    1206,  1210,  1214,  1222,  1226,  1230,  1236,  1242,  1244,  1253,
    1261,  1269,  1271,  1280,  1281,  1284,  1287,  1291,  1297,  1303,
    1311,  1313,  1318,  1323,  1324,  1327,  1329,  1335,  1343,  1351,
    1361,  1373,  1375,  1378,  1382,  1384,  1394,  1406,  1407,  1412,
    1416,  1422,  1428,  1438,  1445,  1457,  1466,  1467,  1469,  1472,
    1474,  1478,  1484,  1492,  1497,  1502,  1508,  1514,  1519,  1526,
    1538,  1552,  1566,  1582,  1587,  1594,  1596,  1600,  1602,  1606,
    1608,  1612,  1613,  1618,  1624,  1629,  1635,  1640,  1646,  1651,
    1657,  1662,  1667,  1671,  1675,  1679,  1682,  1686,  1691,  1696,
    1698,  1702,  1703,  1708,  1709,  1713,  1716,  1720,  1724,  1728,
    1732,  1738,  1744,  1750,  1754,  1760,  1763,  1771,  1777,  1785,
    1791,  1794,  1798,  1801,  1805,  1808,  1812,  1818,  1823,  1829,
    1837,  1846,  1855,  1863,  1870,  1877,  1883,  1884,  1888,  1894,
    1895,  1897,  1898,  1901,  1904,  1905,  1910,  1914,  1917,  1921,
    1925,  1929,  1933,  1937,  1941,  1945,  1949,  1953,  1957,  1959,
    1961,  1963,  1965,  1967,  1971,  1977,  1980,  1985,  1987,  1989,
    1991,  1993,  1997,  2001,  2005,  2009,  2015,  2021,  2023,  2025,
    2027,  2031,  2035,  2036,  2038,  2040,  2042,  2046,  2050,  2053,
    2055,  2059,  2063
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     218,     0,    -1,   227,   212,    -1,   227,   212,   218,    -1,
       3,    -1,     3,   213,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   133,    -1,   219,    24,
     219,    -1,   219,    25,   219,    -1,   219,    26,   219,    -1,
     219,    27,   219,    -1,   219,    28,   219,    -1,   219,    29,
     219,    -1,    25,   219,    -1,   214,   219,   215,    -1,   219,
      12,   219,    -1,   219,    10,   219,    -1,   219,    11,   219,
      -1,   219,    21,   219,    -1,   219,    22,   219,    -1,   219,
      30,   219,    -1,   219,    23,   219,    -1,    18,   219,    -1,
      17,   219,    -1,   219,    20,   219,    -1,   219,    20,   214,
     228,   215,    -1,   219,    20,    36,   214,   228,   215,    -1,
     219,    20,   153,   214,   228,   215,    -1,   219,    20,    34,
     214,   228,   215,    -1,   219,    15,   133,    -1,   219,    15,
      18,   133,    -1,   219,    15,     6,    -1,   219,    15,    18,
       6,    -1,     8,     9,   219,    -1,   219,    19,   219,    39,
     219,    -1,   219,    18,    19,   219,    39,   219,    -1,   219,
      -1,   219,   216,   220,    -1,    -1,   220,    -1,    -1,   219,
      16,   214,   222,   220,   215,    -1,    -1,   219,    18,    16,
     214,   223,   220,   215,    -1,   219,    16,   214,   228,   215,
      -1,   219,    18,    16,   214,   228,   215,    -1,   192,   214,
     228,   215,    -1,     3,   214,   221,   215,    -1,   197,   214,
      26,   215,    -1,   197,   214,   219,   215,    -1,   198,   214,
     219,   215,    -1,   199,   214,   219,   215,    -1,   200,   214,
     219,   215,    -1,   201,   214,   219,   215,    -1,   193,   214,
     219,   216,   219,   216,   219,   215,    -1,   193,   214,   219,
     216,   219,   215,    -1,   193,   214,   219,    96,   219,   215,
      -1,   193,   214,   219,    96,   219,    99,   219,   215,    -1,
     194,   214,   219,   215,    -1,   194,   214,   224,   219,    96,
     219,   215,    -1,   194,   214,   224,    96,   219,   215,    -1,
     202,   214,   219,   215,    -1,   203,   214,   219,   215,    -1,
     204,   214,   219,   215,    -1,   205,   214,   219,   216,   219,
     215,    -1,   206,   214,   219,   216,   219,   216,   219,   215,
      -1,   207,   214,   219,   216,   219,   215,    -1,   208,   214,
     215,    -1,   209,   214,   215,    -1,   210,   214,   215,    -1,
     211,   214,   215,    -1,   122,    -1,   171,    -1,    50,    -1,
     195,   214,   219,   216,   225,   215,    -1,   196,   214,   219,
     216,   225,   215,    -1,   116,   219,    73,    -1,   116,   219,
      74,    -1,   116,   219,    78,    -1,   116,   219,    80,    -1,
     116,   219,   190,    -1,   116,   219,   189,    -1,   116,   219,
     102,    -1,   116,   219,   101,    -1,   116,   219,   104,    -1,
      58,   219,   226,    90,    -1,    58,   219,   226,    91,   219,
      90,    -1,    58,   226,    90,    -1,    58,   226,    91,   219,
      90,    -1,   187,   219,   170,   219,    -1,   226,   187,   219,
     170,   219,    -1,   219,    14,   219,    -1,   219,    18,    14,
     219,    -1,   219,    13,   219,    -1,   219,    18,    13,   219,
      -1,    54,    -1,    61,    -1,    62,    -1,   228,    -1,   160,
     242,   243,    -1,   160,   242,   243,    96,   246,   229,   230,
     234,   235,   238,   239,   240,    -1,    -1,   186,   219,    -1,
      -1,   100,    48,   231,   233,    -1,   219,   232,    -1,   231,
     216,   219,   232,    -1,    -1,    38,    -1,    81,    -1,    -1,
     188,   146,    -1,    -1,   105,   219,    -1,    -1,   136,    48,
     236,    -1,   237,    -1,   236,   216,   237,    -1,     3,   232,
      -1,    -1,   123,   219,    -1,   123,   219,   216,   219,    -1,
     123,   219,   125,   219,    -1,    -1,    99,   175,    -1,    99,
     151,    -1,    99,   175,   152,   124,    -1,    99,   151,   152,
     124,    -1,    -1,   114,   241,    -1,     3,    -1,   241,   216,
       3,    -1,    -1,   242,    34,    -1,   242,    75,    -1,   242,
      79,    -1,   242,   103,    -1,   242,   157,    -1,   242,   149,
      -1,   242,   155,    -1,   242,   154,    -1,   244,    -1,   243,
     216,   244,    -1,    26,    -1,   219,   245,    -1,    40,     3,
      -1,     3,    -1,    -1,   247,    -1,   246,   216,   247,    -1,
     248,    -1,   250,    -1,     3,   245,   257,    -1,     3,   213,
       3,   245,   257,    -1,   260,   249,     3,    -1,   214,   246,
     215,    -1,    40,    -1,    -1,   247,   251,   117,   248,   255,
      -1,   247,   157,   248,    -1,   247,   157,   248,   135,   219,
      -1,   247,   253,   252,   117,   248,   256,    -1,   247,   131,
     254,   117,   248,    -1,    -1,   109,    -1,    57,    -1,    -1,
     134,    -1,   121,    -1,   147,    -1,   121,   252,    -1,   147,
     252,    -1,    -1,    -1,   256,    -1,   135,   219,    -1,   179,
     214,   241,   215,    -1,   180,   118,   258,   214,   259,   215,
      -1,   110,   118,   258,   214,   259,   215,    -1,    94,   118,
     258,   214,   259,   215,    -1,    -1,    99,   117,    -1,    -1,
       3,    -1,   259,   216,     3,    -1,   214,   228,   215,    -1,
     261,    -1,    76,   262,    96,     3,   229,   235,   238,    -1,
     262,   120,    -1,   262,   140,    -1,   262,   110,    -1,    -1,
      76,   262,   263,    96,   246,   229,    -1,     3,   264,    -1,
     263,   216,     3,   264,    -1,    -1,   213,    26,    -1,    76,
     262,    96,   263,   179,   246,   229,    -1,   265,    -1,    77,
     169,     3,    -1,    77,   169,   112,   192,     3,    -1,   266,
      -1,    55,   111,     3,   135,     3,   214,   267,   215,    -1,
      55,   111,   112,   192,     3,   135,     3,   214,   267,   215,
      -1,    55,   177,   111,     3,   135,     3,   214,   267,   215,
      -1,    55,   177,   111,   112,   192,     3,   135,     3,   214,
     267,   215,    -1,    55,   111,     3,   135,     3,   179,   181,
     214,   267,   215,    -1,    55,   111,   112,   192,     3,   135,
       3,   179,   181,   214,   267,   215,    -1,    55,   177,   111,
       3,   135,     3,   179,   181,   214,   267,   215,    -1,    55,
     177,   111,   112,   192,     3,   135,     3,   179,   181,   214,
     267,   215,    -1,    55,   111,    66,     3,   135,     3,   214,
     267,   215,    -1,    55,   111,    66,   112,   192,     3,   135,
       3,   214,   267,   215,    -1,    55,   177,   111,    66,     3,
     135,     3,   214,   267,   215,    -1,    55,   177,   111,    66,
     112,   192,     3,   135,     3,   214,   267,   215,    -1,    55,
     111,    66,     3,   135,     3,   179,   181,   214,   267,   215,
      -1,    55,   177,   111,    66,     3,   135,     3,   179,   181,
     214,   267,   215,    -1,     3,    -1,   267,   216,     3,    -1,
     268,    -1,   202,   214,     3,   215,    -1,   203,   214,     3,
     215,    -1,   204,   214,     3,   215,    -1,   205,   214,     3,
     216,     3,   215,    -1,   269,    -1,    77,   111,     3,    -1,
     270,    -1,   172,   169,     3,    -1,   271,    -1,   142,   169,
       3,    -1,   272,    -1,    35,   169,     3,    -1,    35,   169,
       3,   213,     3,    -1,   273,    -1,    32,   169,     3,    33,
      53,     3,    59,   214,   219,   215,    -1,    32,   169,     3,
      33,    53,     3,   177,   214,   301,   215,    -1,    32,   169,
       3,    33,    53,     3,    95,   118,   214,   298,   215,   143,
       3,   214,   299,   215,   300,    -1,    32,   169,     3,    33,
      53,     3,    59,   214,   219,   215,    18,   182,    -1,    32,
     169,     3,    33,    53,     3,    95,   118,   214,   298,   215,
     143,     3,   214,   299,   215,   300,    18,   182,    -1,    32,
     169,     3,    33,    53,     3,   139,   118,   214,   297,   215,
      -1,    32,   169,     3,    77,    53,     3,    -1,    32,   169,
       3,   144,    53,     3,   163,     3,    -1,    32,   169,     3,
      87,    53,     3,    -1,    32,   169,     3,    70,    53,     3,
      -1,    32,   169,     3,   182,    53,     3,    -1,    32,   169,
       3,    33,    65,     3,   308,    -1,   274,    -1,   113,   276,
     277,     3,   278,   184,   280,   275,    -1,    -1,   137,   118,
     175,   283,    -1,    -1,   276,   120,    -1,   276,    72,    -1,
     276,   103,    -1,   276,   110,    -1,   114,    -1,    -1,    -1,
     214,   279,   215,    -1,     3,    -1,   279,   216,     3,    -1,
     214,   282,   215,    -1,    -1,   280,   216,   281,   214,   282,
     215,    -1,   219,    -1,    82,    -1,   282,   216,   219,    -1,
     282,   216,    82,    -1,   113,   276,   277,     3,   159,   283,
     275,    -1,     3,    20,   219,    -1,     3,    20,    82,    -1,
     283,   216,     3,    20,   219,    -1,   283,   216,     3,    20,
      82,    -1,   284,    -1,   148,   276,   277,     3,   278,   184,
     280,   275,    -1,   148,   276,   277,     3,   159,   283,   275,
      -1,   148,   276,   277,     3,   278,   228,   275,    -1,   285,
      -1,   175,   286,   246,   159,   287,   229,   235,   238,    -1,
      -1,   276,   120,    -1,   276,   110,    -1,     3,    20,   219,
      -1,     3,   213,     3,    20,   219,    -1,   287,   216,     3,
      20,   219,    -1,   287,   216,     3,   213,     3,    20,   219,
      -1,   288,    -1,    55,    67,   289,     3,    -1,    55,   150,
     289,     3,    -1,    -1,   112,   192,    -1,   290,    -1,    55,
      71,     3,    40,   308,    -1,    55,    71,     3,    40,   308,
      82,   219,    -1,    55,    71,     3,    40,   308,    18,   133,
      -1,    55,    71,     3,    40,   308,    59,   214,   219,   215,
      -1,    55,    71,     3,    40,   308,    18,   133,    59,   214,
     219,   215,    -1,   291,    -1,   180,     3,    -1,   180,    67,
       3,    -1,   292,    -1,    55,   294,   169,   289,     3,   214,
     295,   215,   293,    -1,    55,   294,   169,   289,     3,   213,
       3,   214,   295,   215,   293,    -1,    -1,   293,    37,    20,
       5,    -1,   293,    37,     5,    -1,   293,   135,     3,    76,
       3,    -1,   293,   135,     3,   166,     3,    -1,    55,   294,
     169,   289,     3,   214,   295,   215,   310,    -1,    55,   294,
     169,   289,     3,   310,    -1,    55,   294,   169,   289,     3,
     213,     3,   214,   295,   215,   310,    -1,    55,   294,   169,
     289,     3,   213,     3,   310,    -1,    -1,   164,    -1,   165,
     164,    -1,   296,    -1,   295,   216,   296,    -1,   139,   118,
     214,   297,   215,    -1,    53,     3,   139,   118,   214,   297,
     215,    -1,   118,   214,   241,   215,    -1,   111,   214,   241,
     215,    -1,    98,   111,   214,   241,   215,    -1,    98,   118,
     214,   241,   215,    -1,    59,   214,   219,   215,    -1,    53,
       3,    59,   214,   219,   215,    -1,    95,   118,   214,   298,
     215,   143,     3,   214,   299,   215,   300,    -1,    95,   118,
     214,   298,   215,   143,     3,   213,     3,   214,   299,   215,
     300,    -1,    53,     3,    95,   118,   214,   298,   215,   143,
       3,   214,   299,   215,   300,    -1,    53,     3,    95,   118,
     214,   298,   215,   143,     3,   213,     3,   214,   299,   215,
     300,    -1,   177,   214,   301,   215,    -1,    53,     3,   177,
     214,   301,   215,    -1,     3,    -1,   297,   216,     3,    -1,
       3,    -1,   298,   216,     3,    -1,     3,    -1,   299,   216,
       3,    -1,    -1,   300,   135,    76,    56,    -1,   300,   135,
      76,   159,   133,    -1,   300,   135,    76,   145,    -1,   300,
     135,    76,   159,    82,    -1,   300,   135,   175,    56,    -1,
     300,   135,   175,   159,   133,    -1,   300,   135,   175,   145,
      -1,   300,   135,   175,   159,    82,    -1,   300,   135,    76,
     132,    -1,   300,   135,   175,   132,    -1,   300,   127,    97,
      -1,   300,   127,   156,    -1,   300,   127,   138,    -1,   300,
      68,    -1,   300,    18,    68,    -1,   300,    68,   107,    69,
      -1,   300,    68,   107,   106,    -1,     3,    -1,   301,   216,
       3,    -1,    -1,   302,     3,   308,   303,    -1,    -1,   303,
      18,   133,    -1,   303,   133,    -1,   303,    82,     4,    -1,
     303,    82,     5,    -1,   303,    82,     7,    -1,   303,    82,
       6,    -1,   303,    82,   208,   214,   215,    -1,   303,    82,
     209,   214,   215,    -1,   303,    82,   210,   214,   215,    -1,
     303,    82,    54,    -1,   303,    82,   214,   219,   215,    -1,
     303,    37,    -1,   303,    37,   214,     5,   216,     5,   215,
      -1,   303,    37,   214,     5,   215,    -1,   303,    42,   214,
       5,   216,     5,   215,    -1,   303,    42,   214,     5,   215,
      -1,   303,    42,    -1,   303,   177,   118,    -1,   303,   177,
      -1,   303,   139,   118,    -1,   303,   118,    -1,   303,    60,
       4,    -1,   303,    59,   214,   219,   215,    -1,   303,    53,
       3,   177,    -1,   303,    53,     3,   139,   118,    -1,   303,
      53,     3,    59,   214,   219,   215,    -1,   303,    43,    41,
      40,   214,   219,   215,    44,    -1,   303,    43,    41,    40,
     214,   219,   215,    45,    -1,   303,    43,    41,    40,   214,
     219,   215,    -1,   303,    40,   214,   219,   215,    44,    -1,
     303,    40,   214,   219,   215,    45,    -1,   303,    40,   214,
     219,   215,    -1,    -1,   214,     5,   215,    -1,   214,     5,
     216,     5,   215,    -1,    -1,    49,    -1,    -1,   306,   176,
      -1,   306,   191,    -1,    -1,   307,    63,   159,     4,    -1,
     307,    64,     4,    -1,    52,   304,    -1,   162,   304,   306,
      -1,   158,   304,   306,    -1,   130,   304,   306,    -1,   115,
     304,   306,    -1,   108,   304,   306,    -1,    51,   304,   306,
      -1,   141,   304,   306,    -1,    83,   304,   306,    -1,    93,
     304,   306,    -1,    85,   304,   306,    -1,    86,    -1,   174,
      -1,   168,    -1,    84,    -1,   189,    -1,    63,   304,   307,
      -1,   183,   214,     5,   215,   307,    -1,    49,   304,    -1,
     185,   214,     5,   215,    -1,   173,    -1,    46,    -1,   129,
      -1,   126,    -1,   161,   305,   307,    -1,   167,   305,   307,
      -1,   128,   305,   307,    -1,   119,   305,   307,    -1,    89,
     214,   309,   215,   307,    -1,   159,   214,   309,   215,   307,
      -1,    47,    -1,   178,    -1,     4,    -1,   309,   216,     4,
      -1,   311,   249,   228,    -1,    -1,   110,    -1,   148,    -1,
     312,    -1,   159,   150,     3,    -1,   159,   150,    82,    -1,
     159,   313,    -1,   314,    -1,   313,   216,   314,    -1,     8,
      20,   219,    -1,     8,     9,   219,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   313,   313,   314,   319,   326,   327,   328,   346,   354,
     362,   368,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     399,   400,   401,   402,   405,   406,   407,   408,   409,   412,
     413,   416,   417,   420,   421,   424,   424,   425,   425,   426,
     427,   428,   432,   436,   437,   438,   439,   440,   441,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   463,   470,   477,   483,   484,   485,   488,
     489,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     503,   505,   507,   509,   513,   521,   532,   533,   536,   537,
     540,   548,   556,   567,   577,   578,   592,   593,   594,   595,
     598,   605,   613,   614,   615,   618,   619,   622,   623,   626,
     627,   630,   631,   634,   642,   643,   644,   645,   648,   649,
     650,   651,   652,   655,   656,   659,   660,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   674,   675,   676,   684,
     690,   691,   692,   695,   696,   699,   700,   704,   710,   711,
     712,   715,   716,   720,   722,   724,   726,   728,   732,   733,
     734,   737,   738,   741,   742,   745,   746,   747,   750,   751,
     754,   755,   759,   761,   763,   765,   768,   769,   772,   773,
     776,   780,   788,   796,   797,   798,   799,   803,   806,   807,
     810,   810,   812,   816,   823,   830,   840,   847,   854,   864,
     872,   882,   890,   899,   908,   918,   926,   935,   944,   954,
     963,   975,   980,   985,   991,   998,  1005,  1012,  1022,  1029,
    1038,  1045,  1054,  1061,  1070,  1077,  1083,  1094,  1097,  1103,
    1109,  1116,  1122,  1129,  1135,  1141,  1147,  1153,  1159,  1165,
    1173,  1180,  1188,  1189,  1192,  1193,  1194,  1195,  1196,  1199,
    1199,  1202,  1203,  1206,  1216,  1229,  1230,  1230,  1233,  1234,
    1235,  1236,  1239,  1243,  1244,  1245,  1246,  1252,  1255,  1261,
    1266,  1272,  1278,  1285,  1286,  1287,  1291,  1302,  1313,  1324,
    1338,  1342,  1343,  1346,  1347,  1351,  1355,  1357,  1359,  1361,
    1363,  1368,  1372,  1373,  1377,  1386,  1396,  1400,  1401,  1402,
    1403,  1404,  1407,  1422,  1435,  1450,  1463,  1464,  1465,  1468,
    1469,  1472,  1473,  1474,  1475,  1476,  1477,  1478,  1479,  1480,
    1482,  1484,  1486,  1488,  1490,  1494,  1495,  1498,  1499,  1502,
    1503,  1506,  1507,  1508,  1509,  1510,  1511,  1512,  1513,  1514,
    1515,  1516,  1517,  1518,  1519,  1520,  1521,  1522,  1523,  1526,
    1527,  1530,  1530,  1540,  1541,  1542,  1543,  1544,  1545,  1546,
    1547,  1548,  1549,  1550,  1551,  1558,  1559,  1560,  1561,  1562,
    1563,  1564,  1565,  1566,  1567,  1568,  1569,  1570,  1571,  1572,
    1573,  1574,  1575,  1576,  1577,  1578,  1581,  1582,  1583,  1586,
    1587,  1590,  1591,  1592,  1595,  1596,  1597,  1601,  1602,  1603,
    1604,  1605,  1606,  1607,  1608,  1609,  1610,  1611,  1612,  1613,
    1614,  1615,  1616,  1617,  1618,  1619,  1620,  1621,  1622,  1623,
    1624,  1625,  1626,  1627,  1628,  1629,  1630,  1631,  1632,  1635,
    1636,  1639,  1652,  1653,  1654,  1658,  1661,  1662,  1663,  1664,
    1664,  1666,  1667
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
  "COMMENT", "CURRENT_DATE", "CURRENT_TIME", "CHAR", "COLLATE", "COLUMN",
  "CONCURRENTLY", "DATABASE", "DEFERRABLE", "DEFERRED", "DISABLE",
  "DOMAIN", "DELAYED", "DAY_HOUR", "DAY_MICROSECOND", "DISTINCT", "DELETE",
  "DROP", "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT",
  "DOUBLE", "DATETIME", "DECIMAL", "DATE", "ENABLE", "ESCAPED", "ENUM",
  "END", "ELSE", "EXPLAIN", "FLOAT", "FORCE", "FOREIGN", "FROM", "FULL",
  "FULLTEXT", "FOR", "GROUP", "HOUR_MINUTE", "HOUR_MICROSECOND",
  "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "IMMEDIATE", "INITIALLY",
  "INTEGER", "INNER", "IGNORE", "INDEX", "IF", "INSERT", "INTO", "INT",
  "INTERVAL", "JOIN", "KEY", "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING",
  "LIMIT", "LOCKED", "OFFSET", "LONGBLOB", "MATCH", "MEDIUMTEXT",
  "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NO_ACTION", "NULLX", "OUTER",
  "ON", "ORDER", "ONDUPLICATE", "PARTIAL", "PRIMARY", "QUICK", "REAL",
  "RECLAIM", "REFERENCES", "RENAME", "RESTRICT", "ROLLUP", "RIGHT",
  "REPLACE", "SQL_SMALL_RESULT", "SCHEMA", "SHARE", "SKIP", "SOME",
  "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT", "SIMPLE", "STRAIGHT_JOIN",
  "SMALLINT", "SET", "SELECT", "TINYTEXT", "TINYINT", "TO", "TEMPORARY",
  "GLOBAL", "PRESERVE", "TEXT", "TIMESTAMP", "TABLE", "THEN", "TRAILING",
  "TRUNCATE", "TINYBLOB", "TIME", "UPDATE", "UNSIGNED", "UNIQUE", "UUID",
  "USING", "USE", "HASH", "VALIDATE", "VARCHAR", "VALUES", "VARBINARY",
  "WHERE", "WHEN", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS",
  "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT", "FSUM",
  "FAVG", "FMIN", "FMAX", "FUPPER", "FLOWER", "FLENGTH", "FCONCAT",
  "FREPLACE", "FCOALESCE", "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7",
  "FSNOWFLAKE_ID", "FLAST_INSERT_ID", "';'", "'.'", "'('", "')'", "','",
  "$accept", "stmt_list", "expr", "val_list", "opt_val_list", "@1", "@2",
  "trim_ltb", "interval_exp", "case_list", "stmt", "select_stmt",
  "opt_where", "opt_groupby", "groupby_list", "opt_asc_desc",
  "opt_with_rollup", "opt_having", "opt_orderby", "orderby_list",
  "orderby_item", "opt_limit", "opt_for_update", "opt_into_list",
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
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   217,   218,   218,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   220,   220,   221,   221,   222,   219,   223,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   224,   224,   224,   219,
     219,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     219,   219,   219,   219,   226,   226,   219,   219,   219,   219,
     219,   219,   219,   227,   228,   228,   229,   229,   230,   230,
     231,   231,   232,   232,   232,   233,   233,   234,   234,   235,
     235,   236,   236,   237,   238,   238,   238,   238,   239,   239,
     239,   239,   239,   240,   240,   241,   241,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   243,   243,   243,   244,
     245,   245,   245,   246,   246,   247,   247,   248,   248,   248,
     248,   249,   249,   250,   250,   250,   250,   250,   251,   251,
     251,   252,   252,   253,   253,   254,   254,   254,   255,   255,
     256,   256,   257,   257,   257,   257,   258,   258,   259,   259,
     260,   227,   261,   262,   262,   262,   262,   261,   263,   263,
     264,   264,   261,   227,   265,   265,   227,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   267,   267,   267,   268,   268,   268,   268,   227,   269,
     227,   270,   227,   271,   227,   272,   272,   227,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     227,   274,   275,   275,   276,   276,   276,   276,   276,   277,
     277,   278,   278,   279,   279,   280,   281,   280,   282,   282,
     282,   282,   274,   283,   283,   283,   283,   227,   284,   284,
     284,   227,   285,   286,   286,   286,   287,   287,   287,   287,
     227,   288,   288,   289,   289,   227,   290,   290,   290,   290,
     290,   227,   291,   291,   227,   292,   292,   293,   293,   293,
     293,   293,   292,   292,   292,   292,   294,   294,   294,   295,
     295,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   297,   297,   298,   298,   299,
     299,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   301,
     301,   302,   296,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   304,   304,   304,   305,
     305,   306,   306,   306,   307,   307,   307,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   309,
     309,   310,   311,   311,   311,   227,   312,   312,   312,   313,
     313,   314,   314
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
       1,     1,     1,     1,     3,    12,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     1,     3,     2,     0,     2,     4,     4,     0,     2,
       2,     4,     4,     0,     2,     1,     3,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     1,     2,
       2,     1,     0,     1,     3,     1,     1,     3,     5,     3,
       3,     1,     0,     5,     3,     5,     6,     5,     0,     1,
       1,     0,     1,     1,     1,     2,     2,     0,     0,     1,
       2,     4,     6,     6,     6,     0,     2,     0,     1,     3,
       3,     1,     7,     2,     2,     2,     0,     6,     2,     4,
       0,     2,     7,     1,     3,     5,     1,     8,    10,     9,
      11,    10,    12,    11,    13,     9,    11,    10,    12,    11,
      12,     1,     3,     1,     4,     4,     4,     6,     1,     3,
       1,     3,     1,     3,     1,     3,     5,     1,    10,    10,
      17,    12,    19,    11,     6,     8,     6,     6,     6,     7,
       1,     8,     0,     4,     0,     2,     2,     2,     2,     1,
       0,     0,     3,     1,     3,     3,     0,     6,     1,     1,
       3,     3,     7,     3,     3,     5,     5,     1,     8,     7,
       7,     1,     8,     0,     2,     2,     3,     5,     5,     7,
       1,     4,     4,     0,     2,     1,     5,     7,     7,     9,
      11,     1,     2,     3,     1,     9,    11,     0,     4,     3,
       5,     5,     9,     6,    11,     8,     0,     1,     2,     1,
       3,     5,     7,     4,     4,     5,     5,     4,     6,    11,
      13,    13,    15,     4,     6,     1,     3,     1,     3,     1,
       3,     0,     4,     5,     4,     5,     4,     5,     4,     5,
       4,     4,     3,     3,     3,     2,     3,     4,     4,     1,
       3,     0,     4,     0,     3,     2,     3,     3,     3,     3,
       5,     5,     5,     3,     5,     2,     7,     5,     7,     5,
       2,     3,     2,     3,     2,     3,     5,     4,     5,     7,
       8,     8,     7,     6,     6,     5,     0,     3,     5,     0,
       1,     0,     2,     2,     0,     4,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     3,     5,     2,     4,     1,     1,     1,
       1,     3,     3,     3,     3,     5,     5,     1,     1,     1,
       3,     3,     0,     1,     1,     1,     3,     3,     2,     1,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   316,   196,     0,   254,     0,   254,     0,
     137,     0,   254,     0,     0,     0,   103,   191,   203,   206,
     228,   230,   232,   234,   237,   250,   277,   281,   290,   295,
     301,   304,   445,     0,     0,   293,     0,     0,   293,   317,
       0,     0,     0,     0,     0,     0,   260,     0,   260,     0,
       0,   448,   449,     0,     0,     0,     0,   302,     0,     1,
       2,     0,   235,     0,     0,     0,     0,     0,     0,     0,
     318,     0,   293,   200,     0,   195,   193,   194,     0,   229,
     204,     0,   256,   257,   258,   259,   255,     0,   233,     0,
       0,     0,   446,   447,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   148,   138,   100,     0,   101,   102,
     139,   140,   141,    11,   143,   145,   144,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
     104,   146,   231,   258,   255,   152,     0,     0,   153,   155,
     156,   162,   303,     3,     0,     0,     0,     0,     0,     0,
       0,   294,   291,     0,     0,     0,     0,     0,   292,     0,
       0,     0,     0,     0,   198,   106,     0,     0,     0,     0,
     261,   261,   452,   451,   450,     0,    43,     0,    28,    27,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   149,     0,     0,
       0,   185,     0,     0,     0,     0,   170,   169,   173,   177,
     174,     0,     0,   171,   161,     0,     0,     0,     0,     0,
       0,     0,     0,   236,   428,   437,   396,   396,   396,   396,
     396,   421,   396,   418,     0,   396,   396,   396,   399,   430,
     399,   429,   396,   396,   396,     0,   399,   396,   399,   420,
     427,   419,   438,     0,     0,   422,   296,     0,     0,     0,
       0,     0,     0,     0,     0,   442,   201,     0,   119,     0,
     106,   200,   205,     0,     0,     0,     0,     0,     5,    41,
      44,     0,    38,     0,     0,    92,     0,     0,     0,     0,
      78,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    19,    21,    22,    20,    98,    96,    36,
       0,    34,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    23,    24,    26,    12,    13,    14,    15,
      16,    17,    25,   150,   106,   147,   152,     0,     0,     0,
     157,   190,   160,     0,   106,   154,   171,   171,     0,   164,
       0,   172,     0,   159,     0,     0,   247,   244,   246,     0,
     248,     0,   425,   401,   407,   404,   401,   401,     0,   401,
     401,   401,   400,   404,   404,   401,   401,   401,     0,   404,
     401,   404,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,   444,     0,   361,
     313,   162,   107,     0,   124,   106,   197,   199,     0,   252,
     263,     0,     0,   252,     0,   252,     0,    52,     0,    90,
       0,     0,     0,    51,     0,     0,    63,     0,     0,     0,
       0,    53,    54,    55,    56,    57,    58,    66,    67,    68,
       0,     0,     0,    37,    35,     0,     0,    99,    97,    47,
       0,     0,     0,     0,     0,     0,   108,   185,   187,   187,
     187,     0,     0,     0,   119,   175,   176,     0,     0,   178,
       0,     0,     0,     0,     0,   249,     0,     0,   413,   423,
     415,   417,   439,     0,   416,   412,   411,   434,   433,   410,
     414,   409,     0,   431,   408,   432,     0,     0,   298,     0,
     297,     0,   221,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   319,     0,
       0,     0,     0,   192,   202,     0,     0,     0,   272,   262,
       0,     0,   252,   279,   252,   280,    42,    94,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,    39,     0,     0,     0,
      30,     0,   117,   158,     0,     0,     0,     0,   286,     0,
       0,   124,   167,   165,     0,     0,   163,   179,     0,     0,
       0,     0,     0,   245,   397,     0,   402,   403,     0,     0,
     404,     0,   404,   404,   426,     0,     0,     0,     0,     0,
       0,     0,   207,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   361,   315,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   307,   361,     0,   441,
     112,   120,   121,   125,   274,   273,     0,     0,   264,   269,
     268,     0,   266,   251,   278,    91,    95,     0,    61,    60,
       0,    65,     0,     0,    79,    80,    69,     0,    71,    46,
       0,    50,    40,    33,    31,    32,     0,     0,   119,   186,
       0,     0,     0,     0,     0,     0,   282,   180,     0,   166,
       0,     0,     0,   359,     0,     0,     0,   406,   435,   440,
     436,   424,     0,   299,     0,     0,     0,     0,     0,   222,
       0,   215,     0,     0,     0,     0,   209,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,     0,     0,     0,     0,   305,   312,   320,   363,
     113,   114,   123,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,    64,    81,    82,    83,    84,    88,    87,
      89,    86,    85,     0,    48,   112,   115,   118,   124,   188,
       0,     0,     0,   287,   288,     0,     0,   238,   337,     0,
     335,     0,   239,     0,   398,   405,     0,   211,   224,   225,
     226,     0,     0,     0,     0,   208,     0,     0,   217,     0,
       0,     0,   307,     0,     0,     0,     0,   327,     0,     0,
       0,   324,     0,   323,     0,   333,     0,     0,   362,   122,
     127,   126,   253,   276,   275,   271,   270,     0,    62,    59,
      70,   110,     0,     0,   109,   128,   184,     0,   183,   182,
       0,   181,     0,     0,     0,   243,     0,   360,   300,     0,
     219,   216,     0,   213,     0,     0,     0,   210,   306,   314,
       0,     0,     0,     0,     0,   325,   326,   136,   321,   309,
       0,     0,     0,   375,     0,   380,     0,     0,     0,     0,
       0,   384,   365,     0,   382,     0,   116,   112,     0,   133,
     189,   289,   241,     0,   338,   336,   227,   212,   220,   218,
       0,   328,     0,     0,   334,     0,   308,     0,     0,   364,
       0,     0,     0,     0,     0,     0,   385,   366,   367,   369,
     368,   373,     0,     0,     0,     0,   383,   381,   267,   111,
     130,   129,     0,   105,     0,   214,     0,   322,     0,   310,
     311,     0,     0,     0,     0,     0,     0,   387,     0,     0,
       0,     0,     0,     0,     0,   134,     0,     0,     0,     0,
     377,     0,   395,   379,     0,     0,     0,   388,   386,   370,
     371,   372,   374,   132,   131,   339,     0,     0,     0,     0,
       0,   393,   394,     0,     0,     0,   341,     0,     0,     0,
       0,   341,   376,   378,   392,   389,   240,   340,     0,     0,
       0,   329,   390,   391,     0,   355,     0,     0,     0,   341,
     341,     0,   356,   242,     0,   352,   354,   353,     0,     0,
       0,   331,   330,   357,   358,   342,   350,   344,     0,   346,
     351,   348,     0,   341,   345,   343,   349,   347,   332
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   319,   320,   321,   495,   613,   334,   606,   193,
      15,    16,   308,   622,   816,   792,   884,   728,   454,   691,
     692,   583,   939,   983,   782,    53,   140,   141,   237,   147,
     148,   149,   255,   150,   252,   402,   253,   398,   636,   637,
     390,   625,   820,   151,    17,    43,    78,   174,    18,    19,
     557,   558,    20,    21,    22,    23,    24,    25,   588,    46,
      87,   315,   461,   592,   800,   701,   459,    26,    27,    56,
     394,    28,    64,    29,    30,    31,   786,    42,   577,   578,
     831,   829,  1026,  1046,   744,   579,   868,   412,   423,   528,
     529,   296,   533,   450,   451,    32,    51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -781
static const yytype_int16 yypact[] =
{
    2494,   -78,   -32,   241,  -781,   -49,  -781,    83,  -781,    20,
    -781,   138,     7,    44,   258,    33,  -781,  -781,  -781,  -781,
    -781,  -781,  -781,  -781,  -781,  -781,  -781,  -781,  -781,  -781,
    -781,  -781,  -781,   312,   329,   232,   354,   205,   232,  -781,
     106,   238,   211,   157,   391,    84,   294,   395,   294,   390,
      40,   186,  -781,   317,   410,   244,    12,  -781,   413,  -781,
    2494,    18,   194,   255,   420,   409,   318,    87,   285,   466,
    -781,   228,   232,   246,   485,  -781,  -781,  -781,   -31,  -781,
    -781,   298,  -781,  -781,  -781,  -781,  -781,   491,  -781,   494,
    1523,  1523,  -781,  -781,   522,    10,  -781,  -781,  -781,  -781,
     530,  1523,  1523,  1523,  -781,  -781,  -781,   773,  -781,  -781,
    -781,  -781,  -781,  -781,  -781,  -781,  -781,  -781,   330,   332,
     344,   347,   355,   370,   379,   381,   399,   403,   414,   465,
     500,   508,   526,   529,   531,   537,   561,   583,  1523,  2851,
     -23,  -781,  -781,    13,    15,    17,    24,  -107,   272,  -781,
    -781,   652,  -781,  -781,    28,   739,   746,   749,   770,   783,
     854,  -781,  -781,  2598,   860,   729,   673,   870,  -781,   752,
      89,   696,   886,   864,  -781,   123,  -113,    12,   888,   889,
     -87,   -79,  2928,  2928,  -781,   890,  1523,  1523,   819,   819,
    -781,  1523,  2453,    22,   734,  1523,   437,  1523,  1523,   800,
    1523,  1523,  1523,  1523,  1523,  1523,  1523,  1523,  1523,  1523,
     686,   687,   688,   689,  1166,  -781,  1523,  1523,  1523,  1523,
    1523,    58,   691,   454,  1523,   560,  1523,  1523,  1523,  1523,
    1523,  1523,  1523,  1523,  1523,  1523,   904,  -781,    12,  1523,
     908,   170,   698,   196,   911,    12,  -781,  -781,  -781,   -39,
    -781,    12,   798,   782,  -781,   915,   916,   917,   920,   921,
     922,   923,   924,  -781,  -781,  -781,   714,   714,   714,   714,
     714,  -781,   714,  -781,   715,   714,   714,   714,   881,  -781,
     881,  -781,   714,   714,   714,   717,   881,   714,   881,  -781,
    -781,  -781,  -781,   718,   720,  -781,    35,   -83,   932,   933,
     802,   935,   804,   748,   938,   145,  -781,  1523,   806,    12,
      76,   246,  -781,   940,   941,   761,   940,   193,  -781,  1386,
    -781,   732,  2928,  2495,   208,  -781,  1523,  1523,   733,   705,
    -781,  -781,  -781,  1770,   892,  1490,  1585,   736,  1805,  1859,
    1880,  1901,  1927,  1968,  1989,  2011,  1606,  1639,  1660,  -781,
    -781,  -781,  -781,  -781,  1020,   682,  1100,  1336,  1336,  -781,
      36,  -781,   734,  1523,  1523,   735,  1523,  2884,   738,   741,
     742,  1012,   661,   478,   642,   406,   507,   507,   927,   927,
     927,   927,  -781,  -781,    76,  -781,    64,   840,   841,   843,
    -781,  -781,  -781,     2,   115,   272,   782,   782,   847,   850,
      12,  -781,   869,  -781,    73,  2598,  -781,  -781,  -781,   826,
    -781,   985,  -781,  -781,  -781,  -781,  -781,  -781,   987,  -781,
    -781,  -781,  -781,  -781,  -781,  -781,  -781,  -781,   987,  -781,
    -781,  -781,  1007,  1008,   891,   807,  1523,   842,    14,    90,
     887,  1023,   105,  1024,  1025,   925,  -781,  -781,  1048,   161,
    -781,   652,  2928,  1004,   936,    76,  -781,  -781,  1041,   -92,
    -781,   210,   848,   -92,   848,   926,  1523,  -781,  1523,  -781,
    1523,  2778,  2571,  -781,  1523,  1523,  -781,  1523,  2599,   948,
     948,  -781,  -781,  -781,  -781,  -781,  -781,  -781,  -781,  -781,
    1523,  1523,  1523,  -781,  -781,  1523,   861,  1336,  1336,   734,
    2906,  1523,   734,   734,   734,   862,   965,   170,   970,   970,
     970,  1523,  1075,  1076,   806,  -781,  -781,    12,  1523,   -77,
      12,   866,   963,   964,   893,  -781,  1080,   236,   -93,   364,
     -93,   -93,  -781,   245,   -93,   -93,   -93,   364,   364,   -93,
     -93,   -93,   248,   364,   -93,   364,   894,   895,  1046,  1523,
    2928,   903,  -781,   919,   928,   929,   930,   267,  -781,   950,
      14,  1131,   116,   954,    14,   158,  1001,  1134,   -74,  1135,
     955,  1021,   -34,   956,   957,  1022,   959,   277,  -781,  1138,
     734,  1143,  1523,  -781,  -781,  1050,  1036,  1165,  -781,  -781,
    1171,  1262,   -91,  -781,   -91,  -781,  -781,  2928,  2799,  -781,
    1523,  1749,   856,  2032,  1523,  1523,   960,   982,  2057,  1728,
    2078,   983,  -781,  1523,   984,  1523,   577,   986,   988,  1009,
    -781,  1152,  1097,  -781,  1108,  1013,  1014,  1015,  2928,  1210,
      19,   936,  -781,  2928,  1523,  1017,  -781,  -781,   -77,  1523,
    1018,  1019,  1231,  -781,  -781,  1230,  -781,  -781,  1077,  1233,
    -781,  1234,  -781,  -781,  -781,  1026,  2099,    14,  1236,  1238,
    1260,  1268,  -781,  1269,  1059,   338,  1060,  1094,    14,  1062,
     356,  1096,    14,  1275,   176,   161,  -781,   151,  1523,  1067,
    1068,  1069,  1281,  1281,  1071,  1231,   101,   161,  2598,  -781,
     187,  1070,  -781,  1137,  -781,  2928,  1119,  1276,  -781,  -781,
    2928,   358,  -781,  -781,  -781,  -781,  2928,  1523,  -781,  -781,
    1523,  -781,  2125,  2474,  -781,  -781,  -781,  1523,  -781,  -781,
    1082,  -781,   577,  -781,  -781,  -781,  1523,  1523,   806,  -781,
    1292,  1292,  1292,  1523,  1523,  1295,  -781,  2928,  1281,  -781,
    2146,  1296,  1297,  -781,   360,  1086,  1300,  -781,   364,  -781,
     364,   364,  1523,  -781,   367,  1090,  1091,  1092,  1093,  -781,
      14,  -781,    14,  1098,   372,    14,  -781,  1099,   374,  1101,
    1127,    14,   376,  1103,  1193,  1196,  1104,  2187,  1296,  1281,
    1281,  -781,   394,   396,  1297,   400,    70,  -781,  -781,  -781,
    -781,  -781,  -781,  1143,  1523,  1523,   940,  1285,  -781,  1365,
    1105,  2209,  2230,  -781,  -781,  -781,  -781,  -781,  -781,  -781,
    -781,  -781,  -781,  2255,  -781,  2820,   185,  2928,   936,  -781,
     404,   408,   411,  2928,  2928,  1301,   434,  1304,  -781,   440,
    -781,   443,  -781,  1322,  -781,  -781,  2276,  -781,  -781,  -781,
    -781,  1323,   445,   447,    14,  -781,   460,    14,  -781,    14,
    1113,   462,   101,  1523,  1114,  1115,  1231,  -781,   521,   523,
     532,  -781,  1327,  -781,   534,  -781,   231,  1328,   223,  -781,
    2928,  2928,  1116,  -781,  2928,  -781,  2928,  1262,  -781,  -781,
    -781,  -781,  1187,  1523,  -781,  1235,  -781,  1332,  -781,  -781,
    1523,  -781,  1154,  1194,  1335,  -781,  1337,  -781,  -781,  1126,
    -781,  -781,   557,  -781,   567,   569,    14,  -781,    70,  -781,
    2297,  1296,  1297,   571,  1199,  -781,  -781,  -781,  -781,  -781,
    1340,   -36,  1215,  1160,  1161,  1162,  1338,  1374,  1164,  1376,
      25,  -781,  -781,  1266,  1267,   573,  -781,  2820,   212,  1272,
    -781,  2928,  -781,  1384,  -781,  -781,  -781,  -781,  -781,  -781,
     578,  -781,   580,   594,  -781,  1385,  -781,  1388,  1389,  -781,
    1398,  1523,  1412,  1349,    67,  1523,  -781,  -781,  -781,  -781,
    -781,  -781,  1179,  1180,  1206,  1523,  -781,  -781,  -781,  -781,
    1270,  1273,  1281,  -781,  1207,  -781,  1286,  -781,   243,  -781,
    -781,   596,  2323,   598,  1214,  1216,  1306,  -781,  2344,  1217,
    1218,  1219,  2365,  1307,  1311,  1220,  1434,  1435,  1436,  1434,
    -781,  1437,   535,  -781,  1438,  1523,  1523,  -781,  -781,  -781,
    -781,  -781,  -781,  -781,  -781,  -781,   600,   439,  1226,   604,
    1229,  -781,  -781,  1237,  2393,  2428,  -781,  1442,  1443,  1434,
    1434,  -781,  -781,  -781,   777,  -781,    68,  -781,  1227,   613,
     617,   179,  -781,  -781,   -43,  1341,   -41,   -42,  1434,  -781,
    -781,  1381,  -781,  -781,     0,  -781,  -781,  -781,   201,   229,
     635,   179,   179,  -781,  -781,  -781,  -781,  -781,   -14,  -781,
    -781,  -781,    -4,  -781,  -781,  -781,  -781,  -781,   179
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -781,  1390,   -53,  -425,  -781,  -781,  -781,  -781,   971,  1261,
    -781,  -134,  -266,  -781,  -781,  -780,  -781,  -781,  -506,  -781,
     681,  -620,  -781,  -781,  -679,  -781,  -781,  1258,  -138,  -122,
    1277,  -242,  1056,  -781,  -781,   456,  -781,  -781,  -781,   837,
    1016,   346,   128,  -781,  -781,  -781,  1447,  1213,  -781,  -781,
    -558,  -781,  -781,  -781,  -781,  -781,  -781,  -781,  -402,    63,
    1477,  1351,  -781,  1072,  -781,   656,  -315,  -781,  -781,  -781,
    -781,  -781,    51,  -781,  -781,  -781,   683,  -781,   859,   851,
    -751,  -752,  -713,  -674,  -662,  -781,  -781,   273,    96,    59,
    -410,  -400,  1109,  -565,  -781,  -781,  -781,  1445
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -443
static const yytype_int16 yytable[] =
{
     139,   463,   665,   676,   783,   525,   670,   241,   631,   399,
    -283,   736,   242,   537,   538,   145,  -285,   552,  -284,   543,
     215,   545,   511,   785,   243,  1062,   858,   145,    49,   967,
     968,   969,   970,   864,  1068,   881,   446,   182,   183,   734,
     957,   596,   493,    92,   456,   586,   586,    57,   188,   189,
     190,   154,   244,   434,   192,   310,  1065,   236,   634,   826,
     328,   593,    44,   595,   359,   177,   309,   215,  1084,  1073,
     611,    48,   313,   238,   447,    55,   360,   680,  1086,   971,
     316,   256,   396,   646,   681,   214,  1054,    80,   155,    69,
     165,    33,   302,   257,   435,   156,   437,  1066,   647,   754,
     859,   860,   635,   178,   236,   157,  1074,   866,   397,   245,
     764,    58,   325,   326,   768,  1067,   384,   436,   506,  1085,
      45,   787,    93,   172,   587,   702,   995,   314,   514,  1087,
     958,   438,   521,  1069,   322,   314,  1055,    34,   323,  1063,
     675,  -442,   329,   333,   335,   336,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   979,   519,   952,
      73,   953,   158,   354,   355,   356,   357,   358,   522,   494,
      50,   367,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   465,    10,   178,   139,   455,   720,   584,
     703,   361,   704,   239,   913,  1056,    81,  1061,   885,   166,
     159,   303,   842,  1057,   843,   867,   996,   846,    66,   327,
     773,   446,   523,   851,   569,   512,   553,   554,   555,   556,
     570,  -283,   818,   185,   186,   790,   146,  -285,   496,  -284,
     240,   169,   735,   972,   973,   974,   919,   505,   146,   975,
     748,   922,   750,   751,   997,    60,   774,  1055,   507,   447,
     524,   920,    47,    74,   452,   446,   571,  1075,    59,   572,
     923,  -442,   307,   924,   387,   925,   926,    75,   791,   559,
      70,    67,   573,   471,   472,   632,   927,    76,   638,   574,
     388,   478,   928,   929,   563,  1079,   902,   909,   789,   904,
     775,   905,   245,   447,   170,   667,  1029,    77,   469,   470,
     575,   307,  -200,  1005,   560,   930,  1056,    54,    35,   307,
     497,   498,    36,   500,  1057,    61,    82,    68,   214,   564,
      95,    96,    97,    98,    99,   100,  1049,  1050,   776,   246,
     668,   513,    62,  1076,   101,   102,   173,   671,   576,  -200,
     171,   931,   103,   104,    63,  1070,  1077,    83,   950,    71,
     389,   105,    37,    10,   143,   770,   932,    65,   448,   449,
    1078,  1080,   933,   980,   144,   614,    82,  1051,   617,   618,
     619,   106,   672,   882,  1081,   107,   424,   464,   108,   109,
      72,   247,   429,   550,   431,  1071,  1072,   981,  1082,  -168,
     771,    38,   110,   248,    79,   327,   111,    83,    88,    90,
     934,   883,    94,   249,    84,    39,    40,   160,    85,  1088,
      91,   392,   245,   142,    86,   597,   152,   598,    41,   250,
     112,   601,   602,   162,   603,   589,   590,   648,   649,   251,
     229,   230,   231,   232,   233,   234,   235,   608,   609,   610,
      95,    96,    97,    98,    99,   100,   689,   161,   616,   163,
     113,   644,   645,   164,   101,   102,  1008,  1009,   628,   173,
     650,   651,   103,   652,   651,   633,   114,   363,   364,   168,
     365,   115,   116,   366,   117,   530,   531,   167,   534,   535,
     536,   872,   662,   663,   539,   540,   541,   330,   175,   544,
     179,   106,   686,   687,   180,   107,   656,   181,   108,   109,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   693,
      49,   138,   695,   231,   232,   233,   234,   235,   700,   187,
     413,   414,   415,   416,   194,   417,   195,   706,   419,   420,
     421,   712,   713,   761,   663,   425,   426,   427,   196,   331,
     430,   197,   722,    95,    96,    97,    98,    99,   100,   198,
     113,   766,   663,   798,   799,   832,   833,   101,   102,  1031,
    1032,   737,   837,   663,   199,   103,   740,   845,   663,   848,
     663,   852,   687,   200,   368,   201,   369,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   332,   861,
     862,   863,   862,   202,   106,   865,   833,   203,   107,   886,
     887,   108,   109,   888,   887,   777,   889,   887,   204,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   891,
     862,   138,  1038,  1039,   801,   893,   894,   802,   895,   896,
     900,   663,   901,   663,   813,   228,   229,   230,   231,   232,
     233,   234,   235,   815,   817,   903,   663,   907,   663,   205,
     823,   824,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   254,   113,   218,   219,   220,   221,   222,   836,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   370,   206,   216,   217,   218,   219,   220,
     221,   222,   207,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   914,   894,   915,   862,
     208,   870,   871,   209,   874,   210,   876,   916,   862,   918,
     896,   211,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   947,   663,   371,   212,    95,    96,    97,    98,
      99,   100,   948,   663,   949,   663,   954,   833,   978,   799,
     101,   102,   258,   985,   663,   986,   894,   213,   103,   259,
     910,   474,   260,    95,    96,    97,    98,    99,   100,   987,
     896,  1010,  1011,  1013,  1014,  1036,  1037,   101,   102,  1041,
    1037,  1052,  1053,   261,   700,   103,   337,   106,  1059,  1037,
     937,   107,  1060,  1037,   108,   109,   262,   941,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
    1083,  1037,   515,   516,   106,   626,   627,   263,   107,   821,
     822,   108,   109,   297,   298,   299,   216,   217,   218,   219,
     220,   221,   222,   300,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   301,   304,   305,
     306,   311,   312,   318,    10,    95,    96,    97,    98,    99,
     100,   349,   350,   351,   352,   362,   113,   383,   992,   101,
     102,   386,   998,   391,   393,   400,   401,   103,   403,   404,
     405,   475,  1002,   406,   407,   408,   409,   410,   411,   418,
     422,   428,   432,   113,   433,   439,   440,   441,   442,   443,
     444,   445,   453,   458,   460,   462,   106,   467,   473,   499,
     107,   481,   502,   108,   109,   503,   504,   235,   508,   509,
     191,   510,  1034,  1035,   517,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   518,   520,   138,   477,   526,
     527,   532,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   546,   547,   138,    95,    96,    97,    98,    99,
     100,   549,   561,   551,   548,   113,   562,   565,   566,   101,
     102,   217,   218,   219,   220,   221,   222,   103,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   568,   581,    95,    96,    97,    98,    99,   100,   582,
     567,   585,   591,   586,   605,   621,   106,   101,   102,   624,
     107,   709,   710,   108,   109,   103,   612,   620,   629,   630,
     639,   640,   641,   643,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   106,   655,   138,   642,   107,   653,
     654,   108,   109,   219,   220,   221,   222,   657,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   664,   694,   658,   666,   669,   673,   674,   677,   679,
     684,   688,   659,   660,   661,   113,   690,   216,   217,   218,
     219,   220,   221,   222,   696,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   697,   678,
     682,   683,    10,   685,   698,   714,   216,   217,   218,   219,
     220,   221,   222,   113,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   715,   719,   721,
     726,   723,   727,   724,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   725,   729,   138,   730,   731,   732,
     733,   738,   741,   742,   743,   745,   746,   747,   749,   755,
     752,   756,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   794,   757,   138,    95,    96,    97,    98,    99,
     100,   758,   759,   760,   762,   763,   765,   767,   769,   101,
     102,   778,   779,   780,   781,   784,   793,   103,    95,    96,
      97,    98,    99,   100,   796,   819,   797,   814,   825,   828,
     830,   834,   101,   102,   835,   838,   839,   840,   850,   841,
     103,   854,   844,   847,   855,   849,   106,   853,   856,   877,
     107,   890,   892,   108,   109,   897,   899,   906,   911,   912,
     917,   921,   587,   936,   938,   940,   942,   943,   944,   106,
     945,   946,   955,   107,   699,   956,   108,   109,   959,  -443,
    -443,  -443,  -443,   795,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   873,    95,    96,
      97,    98,    99,   100,   960,   961,   962,   964,   965,   963,
     966,   353,   101,   102,   976,   977,   982,   984,   988,   994,
     103,   989,   990,   999,  1000,   113,   216,   217,   218,   219,
     220,   221,   222,   991,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   993,   113,   106,
    1001,  1006,  1003,   107,  1017,  1004,   108,   109,  1015,  1007,
    1016,  1023,  1019,  1020,  1021,  1024,   862,  1025,  1027,  1028,
    1040,  1058,  1030,  1033,  1042,  1047,  1048,   875,  1064,  1062,
     153,   607,  1043,   324,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   869,   739,   138,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   385,   113,   138,
     216,   217,   218,   219,   220,   221,   222,   580,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   176,   395,   623,   457,    89,    95,    96,    97,    98,
      99,   100,   317,   935,   772,   908,   594,   542,   788,   184,
     101,   102,     0,     0,     0,     0,     0,     0,   103,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   106,     0,   138,
       0,   107,     0,     0,   108,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   466,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   216,   217,   218,   219,
     220,   221,   222,     0,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   113,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     216,   217,   218,   219,   220,   221,   222,     0,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   479,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,     0,   138,   216,   217,
     218,   219,   220,   221,   222,     0,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   216,
     217,   218,   219,   220,   221,   222,     0,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     216,   217,   218,   219,   220,   221,   222,     0,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   490,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   707,     0,
       0,     0,     0,     0,     0,   491,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   492,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     216,   217,   218,   219,   220,   221,   222,     0,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   216,   217,   218,   219,   220,   221,   222,     0,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,     0,     0,     0,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   717,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,     0,     0,
       0,     0,     0,     0,   708,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   476,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   216,
     217,   218,   219,   220,   221,   222,     0,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     482,   216,   217,   218,   219,   220,   221,   222,     0,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   216,   217,   218,   219,   220,   221,   222,     0,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,     0,     0,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   483,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   216,   217,
     218,   219,   220,   221,   222,   484,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   216,
     217,   218,   219,   220,   221,   222,   485,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
       0,     0,     0,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   486,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   216,   217,   218,   219,
     220,   221,   222,     0,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,     0,     0,
       0,     0,     0,   487,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,   217,   218,
     219,   220,   221,   222,   488,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,     0,   216,
     217,   218,   219,   220,   221,   222,   489,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     216,   217,   218,   219,   220,   221,   222,   711,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,     0,     0,     0,     0,   216,   217,   218,   219,   220,
     221,   222,   716,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   216,   217,   218,   219,
     220,   221,   222,   718,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   216,   217,   218,
     219,   220,   221,   222,   753,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,     0,     0,
       0,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     803,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   216,   217,   218,   219,   220,   221,
     222,   827,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   216,   217,   218,   219,   220,
     221,   222,     0,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     0,     0,     0,     0,
       0,     0,   857,   216,   217,   218,   219,   220,   221,   222,
       0,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   878,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   217,
     218,   219,   220,   221,   222,   879,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,     0,
       0,     0,     0,   216,   217,   218,   219,   220,   221,   222,
     880,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   216,   217,   218,   219,   220,   221,
     222,   898,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   216,   217,   218,   219,   220,
     221,   222,   951,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     1,     0,     0,     2,
       0,     0,     0,     0,     0,     0,     0,     0,  1012,     0,
       0,     0,     0,     0,     0,     0,     0,   804,   805,     3,
       0,     0,   806,     0,   807,     0,     0,     0,     0,  1018,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     0,     0,     0,   808,   809,     0,   810,     0,
    1022,   216,   217,   218,   219,   220,   221,   222,     0,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,     0,     0,     0,     0,     0,     6,  1044,   216,
     217,   218,   219,   220,   221,   222,     0,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
     191,     0,     8,  1045,   264,   265,     0,   266,     0,   267,
     268,     0,     0,     9,    10,     0,     0,     0,     0,     0,
       0,   269,     0,   811,   812,   468,    11,     0,     0,    12,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
       0,   270,   271,   272,   273,     0,     0,   274,     0,     0,
       0,   275,     0,     0,     0,   604,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   276,     0,     0,     0,
       0,     0,     0,   277,     0,     0,     0,   278,     0,     0,
       0,     0,     0,     0,   279,     0,   280,   281,   282,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
       0,   600,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   284,   285,     0,   286,
     287,     0,     0,     0,     0,   288,   289,     0,     0,     0,
       0,   290,   291,     0,     0,     0,   292,     0,     0,     0,
       0,   293,     0,   294,     0,     0,     0,   295,   216,   217,
     218,   219,   220,   221,   222,     0,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   216,
     217,   218,   219,   220,   221,   222,     0,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     216,   217,   218,   219,   220,   221,   222,     0,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,     0,     0,     0,   215,     0,     0,     0,   790,     0,
       0,   216,   217,   218,   219,   220,   221,   222,   599,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,     0,     0,     0,     0,     0,     0,     0,   705,
       0,   236,     0,     0,   216,   217,   218,   219,   220,   221,
     222,   791,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,     0,   216,   217,   218,   219,
     220,   221,   222,   501,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,   216,   217,
     218,   219,   220,   221,   222,   615,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235
};

static const yytype_int16 yycheck[] =
{
      53,   316,   560,   568,   683,   405,   564,   145,   514,   251,
       3,   631,   146,   423,   424,     3,     3,     3,     3,   429,
       3,   431,    20,   685,   146,    68,   778,     3,     8,     4,
       5,     6,     7,   784,    76,   815,   110,    90,    91,    20,
      76,   466,     6,     3,   310,   137,   137,     3,   101,   102,
     103,    33,   159,    18,   107,   177,    97,    40,   135,   738,
     194,   463,   111,   465,     6,    96,   179,     3,    82,    69,
     495,     8,   159,    96,   148,    12,    18,   111,    82,    54,
     159,    53,   121,   176,   118,   138,    18,     3,    70,    38,
       3,   169,     3,    65,    59,    77,   179,   138,   191,   657,
     779,   780,   179,   216,    40,    87,   106,    37,   147,   216,
     668,    67,    90,    91,   672,   156,   238,    82,   384,   133,
     169,   686,    82,    72,   216,   216,    59,   214,   394,   133,
     166,   214,    59,   175,   187,   214,    68,   169,   191,   182,
     214,    40,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   937,   400,   911,
       3,   912,   144,   216,   217,   218,   219,   220,    95,   133,
     150,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   317,   160,   216,   239,   309,   613,   455,
     592,   133,   594,   216,   856,   127,   112,    18,   818,   112,
     182,   112,   760,   135,   762,   135,   139,   765,     3,   187,
      59,   110,   139,   771,    53,   213,   202,   203,   204,   205,
      59,   214,   728,   213,   214,    38,   214,   214,   362,   214,
     213,     3,   213,   208,   209,   210,     5,   371,   214,   214,
     650,    18,   652,   653,   177,   212,    95,    68,   386,   148,
     177,    20,   169,    96,   307,   110,    95,    56,     0,    98,
      37,   160,   186,    40,    94,    42,    43,   110,    81,   179,
     164,    66,   111,   326,   327,   517,    53,   120,   520,   118,
     110,   334,    59,    60,   179,    56,   844,   852,   688,   847,
     139,   849,   216,   148,    66,   179,  1009,   140,    90,    91,
     139,   186,   179,   982,   214,    82,   127,   169,    67,   186,
     363,   364,    71,   366,   135,     3,    72,   112,   371,   214,
       3,     4,     5,     6,     7,     8,  1039,  1040,   177,    57,
     214,   216,     3,   132,    17,    18,   213,   179,   177,   216,
     112,   118,    25,    26,   112,  1058,   145,   103,   906,   111,
     180,    34,   111,   160,   110,   179,   133,     3,   213,   214,
     159,   132,   139,   151,   120,   499,    72,  1041,   502,   503,
     504,    54,   214,   188,   145,    58,   280,   184,    61,    62,
     169,   109,   286,   436,   288,  1059,  1060,   175,   159,   117,
     214,   150,    75,   121,     3,   187,    79,   103,     3,     9,
     177,   216,   216,   131,   110,   164,   165,   213,   114,  1083,
      20,   215,   216,     3,   120,   468,     3,   470,   177,   147,
     103,   474,   475,     3,   477,   215,   216,    63,    64,   157,
      24,    25,    26,    27,    28,    29,    30,   490,   491,   492,
       3,     4,     5,     6,     7,     8,   580,   192,   501,    40,
     133,   215,   216,   135,    17,    18,   213,   214,   511,   213,
     215,   216,    25,   215,   216,   518,   149,    13,    14,     3,
      16,   154,   155,    19,   157,   416,   417,   192,   419,   420,
     421,   796,   215,   216,   425,   426,   427,    50,     3,   430,
     192,    54,   215,   216,     3,    58,   549,     3,    61,    62,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   582,
       8,   214,   585,    26,    27,    28,    29,    30,   591,     9,
     267,   268,   269,   270,   214,   272,   214,   600,   275,   276,
     277,   604,   605,   215,   216,   282,   283,   284,   214,   122,
     287,   214,   615,     3,     4,     5,     6,     7,     8,   214,
     133,   215,   216,   215,   216,   215,   216,    17,    18,    44,
      45,   634,   215,   216,   214,    25,   639,   215,   216,   215,
     216,   215,   216,   214,    34,   214,    36,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   171,   215,
     216,   215,   216,   214,    54,   215,   216,   214,    58,   215,
     216,    61,    62,   215,   216,   678,   215,   216,   214,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   215,
     216,   214,   213,   214,   707,   215,   216,   710,   215,   216,
     215,   216,   215,   216,   717,    23,    24,    25,    26,    27,
      28,    29,    30,   726,   727,   215,   216,   215,   216,   214,
     733,   734,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    40,   133,    12,    13,    14,    15,    16,   752,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   153,   214,    10,    11,    12,    13,    14,
      15,    16,   214,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   215,   216,   215,   216,
     214,   794,   795,   214,   797,   214,   799,   215,   216,   215,
     216,   214,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   215,   216,   214,   214,     3,     4,     5,     6,
       7,     8,   215,   216,   215,   216,   215,   216,   215,   216,
      17,    18,    53,   215,   216,   215,   216,   214,    25,    53,
     853,    96,    53,     3,     4,     5,     6,     7,     8,   215,
     216,   215,   216,   215,   216,   215,   216,    17,    18,   215,
     216,    44,    45,    53,   877,    25,    26,    54,   215,   216,
     883,    58,   215,   216,    61,    62,    53,   890,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     215,   216,   396,   397,    54,   509,   510,     3,    58,   731,
     732,    61,    62,     3,   135,   192,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   135,   192,     3,
      26,     3,     3,     3,   160,     3,     4,     5,     6,     7,
       8,   215,   215,   215,   215,   214,   133,     3,   961,    17,
      18,     3,   965,   215,     3,   117,   134,    25,     3,     3,
       3,   216,   975,     3,     3,     3,     3,     3,   214,   214,
      49,   214,   214,   133,   214,     3,     3,   135,     3,   135,
     192,     3,   136,     3,     3,   184,    54,   215,   215,   214,
      58,   215,   214,    61,    62,   214,   214,    30,   118,   118,
     187,   118,  1015,  1016,   117,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   135,   117,   214,    96,   163,
       5,     4,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,     5,     5,   214,     3,     4,     5,     6,     7,
       8,   214,   135,   181,   133,   133,     3,     3,     3,    17,
      18,    11,    12,    13,    14,    15,    16,    25,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     3,    48,     3,     4,     5,     6,     7,     8,   123,
     135,    20,   214,   137,   116,   100,    54,    17,    18,    99,
      58,   215,   216,    61,    62,    25,   215,   215,     3,     3,
     214,   118,   118,     3,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,    54,    59,   214,   214,    58,   215,
     215,    61,    62,    13,    14,    15,    16,   214,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   181,    82,   214,     3,   181,   135,     3,     3,   118,
     118,     3,   214,   214,   214,   133,     3,    10,    11,    12,
      13,    14,    15,    16,   118,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,   214,
     214,   214,   160,   214,     3,   215,    10,    11,    12,    13,
      14,    15,    16,   133,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   215,   215,   215,
      48,   215,   105,   215,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   215,   117,   214,   214,   214,   214,
      20,   214,   214,   214,     3,     5,   159,     4,     4,     3,
     214,     3,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   125,     3,   214,     3,     4,     5,     6,     7,
       8,     3,     3,   214,   214,   181,   214,   181,     3,    17,
      18,   214,   214,   214,     3,   214,   216,    25,     3,     4,
       5,     6,     7,     8,   175,     3,    20,   215,     3,     3,
       3,   215,    17,    18,     4,   215,   215,   215,   181,   216,
      25,   118,   214,   214,   118,   214,    54,   214,   214,   214,
      58,    20,    18,    61,    62,     3,     3,   214,   214,   214,
       3,     3,   216,   146,    99,     3,   182,   143,     3,    54,
       3,   215,   143,    58,    82,     5,    61,    62,   133,    13,
      14,    15,    16,   216,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    82,     3,     4,
       5,     6,     7,     8,   214,   214,   214,     3,   214,    41,
       4,   215,    17,    18,   118,   118,   114,     3,     3,    40,
      25,     3,     3,   214,   214,   133,    10,    11,    12,    13,
      14,    15,    16,     5,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     5,   133,    54,
     214,   214,   152,    58,   118,   152,    61,    62,   214,   143,
     214,   124,   215,   215,   215,   124,   216,     3,     3,     3,
     214,   214,     5,     5,   215,     3,     3,    82,   107,    68,
      60,   480,   215,   192,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   793,   638,   214,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   239,   133,   214,
      10,    11,    12,    13,    14,    15,    16,   451,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    74,   245,   507,   311,    48,     3,     4,     5,     6,
       7,     8,   181,   877,   675,   852,   464,   428,   687,    94,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    54,    -1,   214,
      -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   216,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   133,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,    -1,    -1,   214,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   216,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   216,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   216,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   215,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     215,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   215,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   215,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   215,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   215,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   215,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    10,
      11,    12,    13,    14,    15,    16,   215,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   215,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   215,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   215,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   215,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     215,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   215,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,   215,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   215,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   215,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     215,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   215,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   215,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    32,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    55,
      -1,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,   101,   102,    -1,   104,    -1,
     215,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,   113,   215,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
     187,    -1,   148,   215,    46,    47,    -1,    49,    -1,    51,
      52,    -1,    -1,   159,   160,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,   189,   190,   170,   172,    -1,    -1,   175,
      -1,    -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,   128,   129,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   159,    -1,   161,
     162,    -1,    -1,    -1,    -1,   167,   168,    -1,    -1,    -1,
      -1,   173,   174,    -1,    -1,    -1,   178,    -1,    -1,    -1,
      -1,   183,    -1,   185,    -1,    -1,    -1,   189,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,     3,    -1,    -1,    -1,    38,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    90,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    40,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    81,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,    39,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    10,    11,
      12,    13,    14,    15,    16,    39,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    35,    55,    76,    77,   113,   142,   148,   159,
     160,   172,   175,   180,   218,   227,   228,   261,   265,   266,
     269,   270,   271,   272,   273,   274,   284,   285,   288,   290,
     291,   292,   312,   169,   169,    67,    71,   111,   150,   164,
     165,   177,   294,   262,   111,   169,   276,   169,   276,     8,
     150,   313,   314,   242,   169,   276,   286,     3,    67,     0,
     212,     3,     3,   112,   289,     3,     3,    66,   112,   289,
     164,   111,   169,     3,    96,   110,   120,   140,   263,     3,
       3,   112,    72,   103,   110,   114,   120,   277,     3,   277,
       9,    20,     3,    82,   216,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    34,    54,    58,    61,    62,
      75,    79,   103,   133,   149,   154,   155,   157,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   214,   219,
     243,   244,     3,   110,   120,     3,   214,   246,   247,   248,
     250,   260,     3,   218,    33,    70,    77,    87,   144,   182,
     213,   192,     3,    40,   135,     3,   112,   192,     3,     3,
      66,   112,   289,   213,   264,     3,   263,    96,   216,   192,
       3,     3,   219,   219,   314,   213,   214,     9,   219,   219,
     219,   187,   219,   226,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   219,     3,    10,    11,    12,    13,
      14,    15,    16,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    40,   245,    96,   216,
     213,   245,   228,   246,   159,   216,    57,   109,   121,   131,
     147,   157,   251,   253,    40,   249,    53,    65,    53,    53,
      53,    53,    53,     3,    46,    47,    49,    51,    52,    63,
      83,    84,    85,    86,    89,    93,   108,   115,   119,   126,
     128,   129,   130,   141,   158,   159,   161,   162,   167,   168,
     173,   174,   178,   183,   185,   189,   308,     3,   135,   192,
       3,   135,     3,   112,   192,     3,    26,   186,   229,   179,
     246,     3,     3,   159,   214,   278,   159,   278,     3,   219,
     220,   221,   219,   219,   226,    90,    91,   187,   228,   219,
      50,   122,   171,   219,   224,   219,   219,    26,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   215,
     215,   215,   215,   215,   219,   219,   219,   219,   219,     6,
      18,   133,   214,    13,    14,    16,    19,   219,    34,    36,
     153,   214,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,     3,   246,   244,     3,    94,   110,   180,
     257,   215,   215,     3,   287,   247,   121,   147,   254,   248,
     117,   134,   252,     3,     3,     3,     3,     3,     3,     3,
       3,   214,   304,   304,   304,   304,   304,   304,   214,   304,
     304,   304,    49,   305,   305,   304,   304,   304,   214,   305,
     304,   305,   214,   214,    18,    59,    82,   179,   214,     3,
       3,   135,     3,   135,   192,     3,   110,   148,   213,   214,
     310,   311,   219,   136,   235,   246,   229,   264,     3,   283,
       3,   279,   184,   283,   184,   228,   216,   215,   170,    90,
      91,   219,   219,   215,    96,   216,   215,    96,   219,   216,
     216,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     216,   216,   216,     6,   133,   222,   228,   219,   219,   214,
     219,    39,   214,   214,   214,   228,   229,   245,   118,   118,
     118,    20,   213,   216,   229,   252,   252,   117,   135,   248,
     117,    59,    95,   139,   177,   308,   163,     5,   306,   307,
     306,   306,     4,   309,   306,   306,   306,   307,   307,   306,
     306,   306,   309,   307,   306,   307,     5,     5,   133,   214,
     219,   181,     3,   202,   203,   204,   205,   267,   268,   179,
     214,   135,     3,   179,   214,     3,     3,   135,     3,    53,
      59,    95,    98,   111,   118,   139,   177,   295,   296,   302,
     249,    48,   123,   238,   229,    20,   137,   216,   275,   215,
     216,   214,   280,   275,   280,   275,   220,   219,   219,    90,
     170,   219,   219,   219,    96,   116,   225,   225,   219,   219,
     219,   220,   215,   223,   228,    39,   219,   228,   228,   228,
     215,   100,   230,   257,    99,   258,   258,   258,   219,     3,
       3,   235,   248,   219,   135,   179,   255,   256,   248,   214,
     118,   118,   214,     3,   215,   216,   176,   191,    63,    64,
     215,   216,   215,   215,   215,    59,   219,   214,   214,   214,
     214,   214,   215,   216,   181,   267,     3,   179,   214,   181,
     267,   179,   214,   135,     3,   214,   310,     3,   214,   118,
     111,   118,   214,   214,   118,   214,   215,   216,     3,   228,
       3,   236,   237,   219,    82,   219,   118,     3,     3,    82,
     219,   282,   216,   275,   275,    90,   219,    99,   215,   215,
     216,   215,   219,   219,   215,   215,   215,   216,   215,   215,
     220,   215,   219,   215,   215,   215,    48,   105,   234,   117,
     214,   214,   214,    20,    20,   213,   238,   219,   214,   256,
     219,   214,   214,     3,   301,     5,   159,     4,   307,     4,
     307,   307,   214,   215,   267,     3,     3,     3,     3,     3,
     214,   215,   214,   181,   267,   214,   215,   181,   267,     3,
     179,   214,   295,    59,    95,   139,   177,   219,   214,   214,
     214,     3,   241,   241,   214,   301,   293,   310,   296,   308,
      38,    81,   232,   216,   125,   216,   175,    20,   215,   216,
     281,   219,   219,   215,    73,    74,    78,    80,   101,   102,
     104,   189,   190,   219,   215,   219,   231,   219,   235,     3,
     259,   259,   259,   219,   219,     3,   241,   215,     3,   298,
       3,   297,   215,   216,   215,     4,   219,   215,   215,   215,
     215,   216,   267,   267,   214,   215,   267,   214,   215,   214,
     181,   267,   215,   214,   118,   118,   214,   215,   298,   241,
     241,   215,   216,   215,   297,   215,    37,   135,   303,   237,
     219,   219,   283,    82,   219,    82,   219,   214,   215,   215,
     215,   232,   188,   216,   233,   238,   215,   216,   215,   215,
      20,   215,    18,   215,   216,   215,   216,     3,   215,     3,
     215,   215,   267,   215,   267,   267,   214,   215,   293,   310,
     219,   214,   214,   301,   215,   215,   215,     3,   215,     5,
      20,     3,    18,    37,    40,    42,    43,    53,    59,    60,
      82,   118,   133,   139,   177,   282,   146,   219,    99,   239,
       3,   219,   182,   143,     3,     3,   215,   215,   215,   215,
     267,   215,   298,   297,   215,   143,     5,    76,   166,   133,
     214,   214,   214,    41,     3,   214,     4,     4,     5,     6,
       7,    54,   208,   209,   210,   214,   118,   118,   215,   232,
     151,   175,   114,   240,     3,   215,   215,   215,     3,     3,
       3,     5,   219,     5,    40,    59,   139,   177,   219,   214,
     214,   214,   219,   152,   152,   241,   214,   143,   213,   214,
     215,   216,   215,   215,   216,   214,   214,   118,   215,   215,
     215,   215,   215,   124,   124,     3,   299,     3,     3,   299,
       5,    44,    45,     5,   219,   219,   215,   216,   213,   214,
     214,   215,   215,   215,   215,   215,   300,     3,     3,   299,
     299,   300,    44,    45,    18,    68,   127,   135,   214,   215,
     215,    18,    68,   182,   107,    97,   138,   156,    76,   175,
     299,   300,   300,    69,   106,    56,   132,   145,   159,    56,
     132,   145,   159,   215,    82,   133,    82,   133,   300
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
      yyerror (scanner, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, scanner)
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
		  Type, Value, scanner); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *scanner)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *scanner;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *scanner)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, scanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *scanner;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, scanner);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, void *scanner)
#else
static void
yy_reduce_print (yyvsp, yyrule, scanner)
    YYSTYPE *yyvsp;
    int yyrule;
    void *scanner;
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
		       		       , scanner);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, scanner); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void *scanner)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, scanner)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    void *scanner;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (scanner);

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
int yyparse (void *scanner);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






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
yyparse (void *scanner)
#else
int
yyparse (scanner)
    void *scanner;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

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
#line 320 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 326 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 327 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 329 "parser/evoparser.y"
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
#line 347 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 355 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 363 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 369 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 376 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 377 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 378 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 379 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 380 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 381 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 382 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 383 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 384 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 385 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 386 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 387 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 388 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 389 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 390 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 391 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 392 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 394 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 399 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 400 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 401 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 402 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 405 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 406 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 407 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 408 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 409 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 412 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 413 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 416 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 417 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 43:
#line 420 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 424 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 46:
#line 424 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 47:
#line 425 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 48:
#line 425 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 49:
#line 426 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 427 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 428 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 432 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 436 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 437 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 438 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 439 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 440 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 441 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 443 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 444 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 445 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 446 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 447 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 448 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 449 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 450 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 451 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 452 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 453 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 454 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 455 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 456 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 463 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 470 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 477 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 483 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 77:
#line 484 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 78:
#line 485 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 79:
#line 488 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 80:
#line 489 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 81:
#line 492 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 82:
#line 493 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 83:
#line 494 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 84:
#line 495 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 85:
#line 496 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 86:
#line 497 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 87:
#line 498 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 88:
#line 499 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 89:
#line 500 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 90:
#line 504 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 91:
#line 506 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 92:
#line 508 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 93:
#line 510 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 94:
#line 514 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 95:
#line 522 "parser/evoparser.y"
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
#line 532 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 97:
#line 533 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 98:
#line 536 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 99:
#line 537 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 100:
#line 541 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 549 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 557 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 568 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 104:
#line 577 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 105:
#line 582 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 107:
#line 593 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 109:
#line 595 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 110:
#line 598 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 111:
#line 605 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 112:
#line 613 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 614 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 114:
#line 615 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 115:
#line 618 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 619 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 118:
#line 623 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 123:
#line 635 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 124:
#line 642 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 125:
#line 643 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 126:
#line 644 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 127:
#line 645 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 128:
#line 648 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 129:
#line 649 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 130:
#line 650 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 131:
#line 651 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 132:
#line 652 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 134:
#line 656 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 135:
#line 659 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 136:
#line 660 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 137:
#line 663 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 138:
#line 664 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 139:
#line 665 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 140:
#line 666 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 141:
#line 667 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 142:
#line 668 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 143:
#line 669 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 144:
#line 670 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 145:
#line 671 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 146:
#line 674 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 147:
#line 675 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 148:
#line 677 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 149:
#line 685 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 150:
#line 690 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 151:
#line 691 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 152:
#line 692 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 153:
#line 695 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 154:
#line 696 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 157:
#line 705 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 158:
#line 710 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 159:
#line 711 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 160:
#line 712 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 163:
#line 721 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 164:
#line 723 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 165:
#line 725 "parser/evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 166:
#line 727 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 167:
#line 729 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 168:
#line 732 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 169:
#line 733 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 170:
#line 734 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 171:
#line 737 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 172:
#line 738 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 173:
#line 741 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 174:
#line 742 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 175:
#line 745 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 176:
#line 746 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 177:
#line 747 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 180:
#line 754 "parser/evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 181:
#line 755 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 182:
#line 760 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 183:
#line 762 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 184:
#line 764 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 186:
#line 768 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 187:
#line 769 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 188:
#line 772 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 189:
#line 773 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 190:
#line 776 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 191:
#line 781 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 192:
#line 789 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 193:
#line 796 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 194:
#line 797 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 195:
#line 798 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 196:
#line 799 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 197:
#line 803 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 198:
#line 806 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 199:
#line 807 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 202:
#line 812 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 203:
#line 817 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 204:
#line 824 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 205:
#line 831 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 206:
#line 841 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 207:
#line 848 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 208:
#line 855 "parser/evoparser.y"
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

  case 209:
#line 865 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 210:
#line 873 "parser/evoparser.y"
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

  case 211:
#line 883 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 212:
#line 891 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 213:
#line 900 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 214:
#line 909 "parser/evoparser.y"
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

  case 215:
#line 919 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 216:
#line 927 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 217:
#line 936 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 218:
#line 945 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(7) - (12)].strval), (yyvsp[(9) - (12)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(7) - (12)].strval), (yyvsp[(9) - (12)].strval), "");
        free((yyvsp[(7) - (12)].strval));
        free((yyvsp[(9) - (12)].strval));
    ;}
    break;

  case 219:
#line 955 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 220:
#line 964 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 221:
#line 976 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 222:
#line 981 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 223:
#line 986 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 224:
#line 992 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 225:
#line 999 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 226:
#line 1006 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 227:
#line 1013 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 228:
#line 1023 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 229:
#line 1030 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 230:
#line 1039 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 231:
#line 1046 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 232:
#line 1055 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 233:
#line 1062 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 234:
#line 1071 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 235:
#line 1078 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 236:
#line 1084 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 237:
#line 1094 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 238:
#line 1098 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 239:
#line 1104 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 240:
#line 1110 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 241:
#line 1117 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 242:
#line 1123 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 243:
#line 1130 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 244:
#line 1136 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 245:
#line 1142 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 246:
#line 1148 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 247:
#line 1154 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 248:
#line 1160 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 249:
#line 1166 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        AlterTableAddColumn((yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(6) - (7)].strval));
    ;}
    break;

  case 250:
#line 1174 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 251:
#line 1181 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 253:
#line 1189 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 254:
#line 1192 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 255:
#line 1193 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 256:
#line 1194 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 257:
#line 1195 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 258:
#line 1196 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 262:
#line 1203 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 263:
#line 1207 "parser/evoparser.y"
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

  case 264:
#line 1217 "parser/evoparser.y"
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

  case 265:
#line 1229 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 266:
#line 1230 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 267:
#line 1230 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 268:
#line 1233 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1234 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 270:
#line 1235 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 271:
#line 1236 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 272:
#line 1240 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 273:
#line 1243 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 274:
#line 1244 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 275:
#line 1245 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 276:
#line 1246 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 277:
#line 1252 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 278:
#line 1258 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 279:
#line 1263 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 280:
#line 1268 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 281:
#line 1273 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 282:
#line 1280 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 283:
#line 1285 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 284:
#line 1286 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 285:
#line 1287 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 286:
#line 1292 "parser/evoparser.y"
    {
        if ((yyvsp[(2) - (3)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s", (yyvsp[(1) - (3)].strval));
            YYERROR;
        }
        emit("ASSIGN1 %s", (yyvsp[(1) - (3)].strval));
        GetUpdateColumnName((yyvsp[(1) - (3)].strval)); /*for first column name after the SET Terminal symbol*/
        free((yyvsp[(1) - (3)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 287:
#line 1303 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s", (yyvsp[(1) - (5)].strval));
            YYERROR;
        }
        emit("ASSIGN2 %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval));
        free((yyvsp[(1) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 288:
#line 1314 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s", (yyvsp[(3) - (5)].strval));
            YYERROR;
        }
        emit("ASSIGN3 %s", (yyvsp[(3) - (5)].strval));
        GetUpdateColumnName((yyvsp[(3) - (5)].strval)); /*for other column names*/
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
    ;}
    break;

  case 289:
#line 1325 "parser/evoparser.y"
    {
        if ((yyvsp[(6) - (7)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s.$s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval));
            YYERROR;
        }
        emit("ASSIGN4 %s.%s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval));
        free((yyvsp[(3) - (7)].strval));
        free((yyvsp[(5) - (7)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 290:
#line 1338 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 291:
#line 1342 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 292:
#line 1343 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 293:
#line 1346 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 294:
#line 1347 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 295:
#line 1351 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 296:
#line 1356 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 297:
#line 1358 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 298:
#line 1360 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 299:
#line 1362 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 300:
#line 1364 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 301:
#line 1368 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 302:
#line 1372 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 303:
#line 1373 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 304:
#line 1378 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 305:
#line 1388 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 306:
#line 1397 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 308:
#line 1401 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 309:
#line 1402 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 310:
#line 1403 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 311:
#line 1404 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 312:
#line 1409 "parser/evoparser.y"
    {
    emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
    g_create.ctasMode = CTAS_EXPLICIT;
    strncpy(g_create.ctasTableName, (yyvsp[(5) - (9)].strval), 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = (yyvsp[(4) - (9)].intval);
    g_create.ctasTemporary = (yyvsp[(2) - (9)].intval);
    g_create.isTemporary = (yyvsp[(2) - (9)].intval);
    GetTableName((yyvsp[(5) - (9)].strval));
    free((yyvsp[(5) - (9)].strval));
;}
    break;

  case 313:
#line 1423 "parser/evoparser.y"
    {
    emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval));
    g_create.ctasMode = CTAS_INFER;
    strncpy(g_create.ctasTableName, (yyvsp[(5) - (6)].strval), 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = (yyvsp[(4) - (6)].intval);
    g_create.ctasTemporary = (yyvsp[(2) - (6)].intval);
    GetTableName((yyvsp[(5) - (6)].strval));
    free((yyvsp[(5) - (6)].strval));
;}
    break;

  case 314:
#line 1437 "parser/evoparser.y"
    {
    emit("CREATESELECT %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval));
    g_create.ctasMode = CTAS_EXPLICIT;
    strncpy(g_create.ctasTableName, (yyvsp[(7) - (11)].strval), 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = (yyvsp[(4) - (11)].intval);
    g_create.ctasTemporary = (yyvsp[(2) - (11)].intval);
    g_create.isTemporary = (yyvsp[(2) - (11)].intval);
    GetTableName((yyvsp[(7) - (11)].strval));
    free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval));
;}
    break;

  case 315:
#line 1451 "parser/evoparser.y"
    {
    emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval));
    g_create.ctasMode = CTAS_INFER;
    strncpy(g_create.ctasTableName, (yyvsp[(7) - (8)].strval), 255);
    g_create.ctasTableName[255] = '\0';
    g_create.ctasIfNotExists = (yyvsp[(4) - (8)].intval);
    g_create.ctasTemporary = (yyvsp[(2) - (8)].intval);
    GetTableName((yyvsp[(7) - (8)].strval));
    free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval));
;}
    break;

  case 316:
#line 1463 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 317:
#line 1464 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 318:
#line 1465 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 319:
#line 1468 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 320:
#line 1469 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 321:
#line 1472 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 322:
#line 1473 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 323:
#line 1474 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 324:
#line 1475 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 325:
#line 1476 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 326:
#line 1477 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 327:
#line 1478 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 328:
#line 1479 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 329:
#line 1481 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 330:
#line 1483 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 331:
#line 1485 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 332:
#line 1487 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 333:
#line 1489 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 334:
#line 1491 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 335:
#line 1494 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 336:
#line 1495 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 337:
#line 1498 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 338:
#line 1499 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 339:
#line 1502 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 340:
#line 1503 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 342:
#line 1507 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 343:
#line 1508 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 344:
#line 1509 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 345:
#line 1510 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 346:
#line 1511 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 347:
#line 1512 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 348:
#line 1513 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 349:
#line 1514 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 350:
#line 1515 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 351:
#line 1516 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 352:
#line 1517 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 353:
#line 1518 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 354:
#line 1519 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 355:
#line 1520 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 356:
#line 1521 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 357:
#line 1522 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 358:
#line 1523 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 359:
#line 1526 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 360:
#line 1527 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 361:
#line 1530 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 362:
#line 1532 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 363:
#line 1540 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 364:
#line 1541 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 366:
#line 1543 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 367:
#line 1544 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 368:
#line 1545 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 369:
#line 1546 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 370:
#line 1547 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 371:
#line 1548 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 372:
#line 1549 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 373:
#line 1550 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 374:
#line 1551 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 375:
#line 1558 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 376:
#line 1559 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 377:
#line 1560 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 378:
#line 1561 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 379:
#line 1562 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 380:
#line 1563 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 381:
#line 1564 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 382:
#line 1565 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 383:
#line 1566 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 384:
#line 1567 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 385:
#line 1568 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 386:
#line 1569 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 387:
#line 1570 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 388:
#line 1571 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 389:
#line 1572 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 390:
#line 1573 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 391:
#line 1574 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 392:
#line 1575 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 393:
#line 1576 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 394:
#line 1577 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 395:
#line 1578 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 396:
#line 1581 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 397:
#line 1582 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 398:
#line 1583 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 399:
#line 1586 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 400:
#line 1587 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 401:
#line 1590 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 402:
#line 1591 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 403:
#line 1592 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 405:
#line 1596 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 406:
#line 1597 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 407:
#line 1601 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 408:
#line 1602 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 409:
#line 1603 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 410:
#line 1604 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 411:
#line 1605 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 412:
#line 1606 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 413:
#line 1607 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 414:
#line 1608 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 415:
#line 1609 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 416:
#line 1610 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 417:
#line 1611 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 418:
#line 1612 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 419:
#line 1613 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 420:
#line 1614 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 421:
#line 1615 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 422:
#line 1616 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 423:
#line 1617 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 424:
#line 1618 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 425:
#line 1619 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 426:
#line 1620 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 427:
#line 1621 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 428:
#line 1622 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 429:
#line 1623 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 430:
#line 1624 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 431:
#line 1625 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 432:
#line 1626 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 433:
#line 1627 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 434:
#line 1628 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 435:
#line 1629 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 436:
#line 1630 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 437:
#line 1631 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 438:
#line 1632 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 439:
#line 1635 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 440:
#line 1636 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 441:
#line 1640 "parser/evoparser.y"
    {
        emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval));
        /* In CTAS context, select_stmt is not a standalone stmt,
         * so SelectProcess() is not called automatically.
         * Call it here to set g_sel.lastTable for post-parse. */
        if ((yyvsp[(3) - (3)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 442:
#line 1652 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 443:
#line 1653 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 444:
#line 1654 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 445:
#line 1658 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 446:
#line 1661 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 447:
#line 1662 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 451:
#line 1666 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 452:
#line 1667 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5744 "parser/evoparser.tab.c"
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
      yyerror (scanner, YY_("syntax error"));
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
	    yyerror (scanner, yymsg);
	  }
	else
	  {
	    yyerror (scanner, YY_("syntax error"));
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
		      yytoken, &yylval, scanner);
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
		  yystos[yystate], yyvsp, scanner);
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
  yyerror (scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, scanner);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, scanner);
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


#line 1670 "parser/evoparser.y"

void emit(const char *s, ...)
{
	va_list ap;
	if (g_gui_mode) return;
	va_start(ap, s);
	printf("rpn: ");
	vfprintf(stdout, s, ap);
	printf("\n");
}
void yyerror(void *scanner, const char *s, ...)
{
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "error: ");
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
}
