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
     LESS = 365,
     LONGTEXT = 366,
     LOW_PRIORITY = 367,
     LEFT = 368,
     LEADING = 369,
     LIMIT = 370,
     LOCKED = 371,
     OFFSET = 372,
     LONGBLOB = 373,
     MATCH = 374,
     MAXVALUE = 375,
     MEDIUMTEXT = 376,
     MEDIUMBLOB = 377,
     MEDIUMINT = 378,
     NATURAL = 379,
     NODE = 380,
     NO_ACTION = 381,
     NULLX = 382,
     OUTER = 383,
     ON = 384,
     ORDER = 385,
     ONDUPLICATE = 386,
     PARTIAL = 387,
     PRIMARY = 388,
     QUICK = 389,
     RANGE = 390,
     REAL = 391,
     RECLAIM = 392,
     REFERENCES = 393,
     RENAME = 394,
     RESTRICT = 395,
     ROLLUP = 396,
     RIGHT = 397,
     REPLACE = 398,
     SQL_SMALL_RESULT = 399,
     SCHEMA = 400,
     SHARD = 401,
     SHARDS = 402,
     SHARE = 403,
     SKIP = 404,
     SOME = 405,
     SQL_CALC_FOUND_ROWS = 406,
     SQL_BIG_RESULT = 407,
     SIMPLE = 408,
     STRAIGHT_JOIN = 409,
     SMALLINT = 410,
     SET = 411,
     SELECT = 412,
     TINYTEXT = 413,
     TINYINT = 414,
     TO = 415,
     TEMPORARY = 416,
     GLOBAL = 417,
     PRESERVE = 418,
     TEXT = 419,
     THAN = 420,
     TIMESTAMP = 421,
     TABLE = 422,
     THEN = 423,
     TRAILING = 424,
     TRUNCATE = 425,
     TINYBLOB = 426,
     TIME = 427,
     UPDATE = 428,
     UNSIGNED = 429,
     UNIQUE = 430,
     UUID = 431,
     USING = 432,
     USE = 433,
     HASH = 434,
     VALIDATE = 435,
     VARCHAR = 436,
     VALUES = 437,
     VARBINARY = 438,
     WHERE = 439,
     WHEN = 440,
     WITH = 441,
     YEAR = 442,
     YEAR_MONTH = 443,
     ZEROFILL = 444,
     EXISTS = 445,
     FSUBSTRING = 446,
     FTRIM = 447,
     FDATE_ADD = 448,
     FDATE_SUB = 449,
     FCOUNT = 450,
     FSUM = 451,
     FAVG = 452,
     FMIN = 453,
     FMAX = 454,
     FUPPER = 455,
     FLOWER = 456,
     FLENGTH = 457,
     FCONCAT = 458,
     FREPLACE = 459,
     FCOALESCE = 460,
     FGEN_RANDOM_UUID = 461,
     FGEN_RANDOM_UUID_V7 = 462,
     FSNOWFLAKE_ID = 463,
     FLAST_INSERT_ID = 464
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
#define LESS 365
#define LONGTEXT 366
#define LOW_PRIORITY 367
#define LEFT 368
#define LEADING 369
#define LIMIT 370
#define LOCKED 371
#define OFFSET 372
#define LONGBLOB 373
#define MATCH 374
#define MAXVALUE 375
#define MEDIUMTEXT 376
#define MEDIUMBLOB 377
#define MEDIUMINT 378
#define NATURAL 379
#define NODE 380
#define NO_ACTION 381
#define NULLX 382
#define OUTER 383
#define ON 384
#define ORDER 385
#define ONDUPLICATE 386
#define PARTIAL 387
#define PRIMARY 388
#define QUICK 389
#define RANGE 390
#define REAL 391
#define RECLAIM 392
#define REFERENCES 393
#define RENAME 394
#define RESTRICT 395
#define ROLLUP 396
#define RIGHT 397
#define REPLACE 398
#define SQL_SMALL_RESULT 399
#define SCHEMA 400
#define SHARD 401
#define SHARDS 402
#define SHARE 403
#define SKIP 404
#define SOME 405
#define SQL_CALC_FOUND_ROWS 406
#define SQL_BIG_RESULT 407
#define SIMPLE 408
#define STRAIGHT_JOIN 409
#define SMALLINT 410
#define SET 411
#define SELECT 412
#define TINYTEXT 413
#define TINYINT 414
#define TO 415
#define TEMPORARY 416
#define GLOBAL 417
#define PRESERVE 418
#define TEXT 419
#define THAN 420
#define TIMESTAMP 421
#define TABLE 422
#define THEN 423
#define TRAILING 424
#define TRUNCATE 425
#define TINYBLOB 426
#define TIME 427
#define UPDATE 428
#define UNSIGNED 429
#define UNIQUE 430
#define UUID 431
#define USING 432
#define USE 433
#define HASH 434
#define VALIDATE 435
#define VARCHAR 436
#define VALUES 437
#define VARBINARY 438
#define WHERE 439
#define WHEN 440
#define WITH 441
#define YEAR 442
#define YEAR_MONTH 443
#define ZEROFILL 444
#define EXISTS 445
#define FSUBSTRING 446
#define FTRIM 447
#define FDATE_ADD 448
#define FDATE_SUB 449
#define FCOUNT 450
#define FSUM 451
#define FAVG 452
#define FMIN 453
#define FMAX 454
#define FUPPER 455
#define FLOWER 456
#define FLENGTH 457
#define FCONCAT 458
#define FREPLACE 459
#define FCOALESCE 460
#define FGEN_RANDOM_UUID 461
#define FGEN_RANDOM_UUID_V7 462
#define FSNOWFLAKE_ID 463
#define FLAST_INSERT_ID 464




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
#line 544 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 557 "parser/evoparser.tab.c"

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
#define YYLAST   2813

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  224
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  458
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1120

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   464

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     221,   222,    26,    24,   223,    25,   220,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   219,
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
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218
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
    1416,  1422,  1428,  1438,  1449,  1451,  1455,  1465,  1475,  1485,
    1492,  1504,  1513,  1514,  1516,  1519,  1521,  1525,  1531,  1539,
    1544,  1549,  1555,  1561,  1566,  1573,  1585,  1599,  1613,  1629,
    1634,  1641,  1643,  1647,  1649,  1653,  1655,  1659,  1660,  1665,
    1671,  1676,  1682,  1687,  1693,  1698,  1704,  1709,  1714,  1718,
    1722,  1726,  1729,  1733,  1738,  1743,  1745,  1749,  1750,  1755,
    1756,  1760,  1763,  1767,  1771,  1775,  1779,  1785,  1791,  1797,
    1801,  1807,  1810,  1818,  1824,  1832,  1838,  1841,  1845,  1848,
    1852,  1855,  1859,  1865,  1870,  1876,  1884,  1893,  1902,  1910,
    1917,  1924,  1930,  1931,  1935,  1941,  1942,  1944,  1945,  1948,
    1951,  1952,  1957,  1961,  1964,  1968,  1972,  1976,  1980,  1984,
    1988,  1992,  1996,  2000,  2004,  2006,  2008,  2010,  2012,  2014,
    2018,  2024,  2027,  2032,  2034,  2036,  2038,  2040,  2044,  2048,
    2052,  2056,  2062,  2068,  2070,  2072,  2074,  2078,  2082,  2083,
    2085,  2087,  2089,  2093,  2097,  2100,  2102,  2106,  2110
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     225,     0,    -1,   234,   219,    -1,   234,   219,   225,    -1,
       3,    -1,     3,   220,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   136,    -1,   226,    24,
     226,    -1,   226,    25,   226,    -1,   226,    26,   226,    -1,
     226,    27,   226,    -1,   226,    28,   226,    -1,   226,    29,
     226,    -1,    25,   226,    -1,   221,   226,   222,    -1,   226,
      12,   226,    -1,   226,    10,   226,    -1,   226,    11,   226,
      -1,   226,    21,   226,    -1,   226,    22,   226,    -1,   226,
      30,   226,    -1,   226,    23,   226,    -1,    18,   226,    -1,
      17,   226,    -1,   226,    20,   226,    -1,   226,    20,   221,
     235,   222,    -1,   226,    20,    36,   221,   235,   222,    -1,
     226,    20,   159,   221,   235,   222,    -1,   226,    20,    34,
     221,   235,   222,    -1,   226,    15,   136,    -1,   226,    15,
      18,   136,    -1,   226,    15,     6,    -1,   226,    15,    18,
       6,    -1,     8,     9,   226,    -1,   226,    19,   226,    39,
     226,    -1,   226,    18,    19,   226,    39,   226,    -1,   226,
      -1,   226,   223,   227,    -1,    -1,   227,    -1,    -1,   226,
      16,   221,   229,   227,   222,    -1,    -1,   226,    18,    16,
     221,   230,   227,   222,    -1,   226,    16,   221,   235,   222,
      -1,   226,    18,    16,   221,   235,   222,    -1,   199,   221,
     235,   222,    -1,     3,   221,   228,   222,    -1,   204,   221,
      26,   222,    -1,   204,   221,   226,   222,    -1,   205,   221,
     226,   222,    -1,   206,   221,   226,   222,    -1,   207,   221,
     226,   222,    -1,   208,   221,   226,   222,    -1,   200,   221,
     226,   223,   226,   223,   226,   222,    -1,   200,   221,   226,
     223,   226,   222,    -1,   200,   221,   226,    96,   226,   222,
      -1,   200,   221,   226,    96,   226,    99,   226,   222,    -1,
     201,   221,   226,   222,    -1,   201,   221,   231,   226,    96,
     226,   222,    -1,   201,   221,   231,    96,   226,   222,    -1,
     209,   221,   226,   222,    -1,   210,   221,   226,   222,    -1,
     211,   221,   226,   222,    -1,   212,   221,   226,   223,   226,
     222,    -1,   213,   221,   226,   223,   226,   223,   226,   222,
      -1,   214,   221,   226,   223,   226,   222,    -1,   215,   221,
     222,    -1,   216,   221,   222,    -1,   217,   221,   222,    -1,
     218,   221,   222,    -1,   123,    -1,   178,    -1,    50,    -1,
     202,   221,   226,   223,   232,   222,    -1,   203,   221,   226,
     223,   232,   222,    -1,   116,   226,    73,    -1,   116,   226,
      74,    -1,   116,   226,    78,    -1,   116,   226,    80,    -1,
     116,   226,   197,    -1,   116,   226,   196,    -1,   116,   226,
     102,    -1,   116,   226,   101,    -1,   116,   226,   104,    -1,
      58,   226,   233,    90,    -1,    58,   226,   233,    91,   226,
      90,    -1,    58,   233,    90,    -1,    58,   233,    91,   226,
      90,    -1,   194,   226,   177,   226,    -1,   233,   194,   226,
     177,   226,    -1,   226,    14,   226,    -1,   226,    18,    14,
     226,    -1,   226,    13,   226,    -1,   226,    18,    13,   226,
      -1,    54,    -1,    61,    -1,    62,    -1,   235,    -1,   166,
     249,   250,    -1,   166,   249,   250,    96,   253,   236,   237,
     241,   242,   245,   246,   247,    -1,    -1,   193,   226,    -1,
      -1,   100,    48,   238,   240,    -1,   226,   239,    -1,   238,
     223,   226,   239,    -1,    -1,    38,    -1,    81,    -1,    -1,
     195,   150,    -1,    -1,   105,   226,    -1,    -1,   139,    48,
     243,    -1,   244,    -1,   243,   223,   244,    -1,     3,   239,
      -1,    -1,   124,   226,    -1,   124,   226,   223,   226,    -1,
     124,   226,   126,   226,    -1,    -1,    99,   182,    -1,    99,
     157,    -1,    99,   182,   158,   125,    -1,    99,   157,   158,
     125,    -1,    -1,   114,   248,    -1,     3,    -1,   248,   223,
       3,    -1,    -1,   249,    34,    -1,   249,    75,    -1,   249,
      79,    -1,   249,   103,    -1,   249,   163,    -1,   249,   153,
      -1,   249,   161,    -1,   249,   160,    -1,   251,    -1,   250,
     223,   251,    -1,    26,    -1,   226,   252,    -1,    40,     3,
      -1,     3,    -1,    -1,   254,    -1,   253,   223,   254,    -1,
     255,    -1,   257,    -1,     3,   252,   264,    -1,     3,   220,
       3,   252,   264,    -1,   267,   256,     3,    -1,   221,   253,
     222,    -1,    40,    -1,    -1,   254,   258,   117,   255,   262,
      -1,   254,   163,   255,    -1,   254,   163,   255,   138,   226,
      -1,   254,   260,   259,   117,   255,   263,    -1,   254,   133,
     261,   117,   255,    -1,    -1,   109,    -1,    57,    -1,    -1,
     137,    -1,   122,    -1,   151,    -1,   122,   259,    -1,   151,
     259,    -1,    -1,    -1,   263,    -1,   138,   226,    -1,   186,
     221,   248,   222,    -1,   187,   118,   265,   221,   266,   222,
      -1,   110,   118,   265,   221,   266,   222,    -1,    94,   118,
     265,   221,   266,   222,    -1,    -1,    99,   117,    -1,    -1,
       3,    -1,   266,   223,     3,    -1,   221,   235,   222,    -1,
     268,    -1,    76,   269,    96,     3,   236,   242,   245,    -1,
     269,   121,    -1,   269,   143,    -1,   269,   110,    -1,    -1,
      76,   269,   270,    96,   253,   236,    -1,     3,   271,    -1,
     270,   223,     3,   271,    -1,    -1,   220,    26,    -1,    76,
     269,    96,   270,   186,   253,   236,    -1,   272,    -1,    77,
     176,     3,    -1,    77,   176,   112,   199,     3,    -1,   273,
      -1,    55,   111,     3,   138,     3,   221,   274,   222,    -1,
      55,   111,   112,   199,     3,   138,     3,   221,   274,   222,
      -1,    55,   184,   111,     3,   138,     3,   221,   274,   222,
      -1,    55,   184,   111,   112,   199,     3,   138,     3,   221,
     274,   222,    -1,    55,   111,     3,   138,     3,   186,   188,
     221,   274,   222,    -1,    55,   111,   112,   199,     3,   138,
       3,   186,   188,   221,   274,   222,    -1,    55,   184,   111,
       3,   138,     3,   186,   188,   221,   274,   222,    -1,    55,
     184,   111,   112,   199,     3,   138,     3,   186,   188,   221,
     274,   222,    -1,    55,   111,    66,     3,   138,     3,   221,
     274,   222,    -1,    55,   111,    66,   112,   199,     3,   138,
       3,   221,   274,   222,    -1,    55,   184,   111,    66,     3,
     138,     3,   221,   274,   222,    -1,    55,   184,   111,    66,
     112,   199,     3,   138,     3,   221,   274,   222,    -1,    55,
     111,    66,     3,   138,     3,   186,   188,   221,   274,   222,
      -1,    55,   184,   111,    66,     3,   138,     3,   186,   188,
     221,   274,   222,    -1,     3,    -1,   274,   223,     3,    -1,
     275,    -1,   209,   221,     3,   222,    -1,   210,   221,     3,
     222,    -1,   211,   221,     3,   222,    -1,   212,   221,     3,
     223,     3,   222,    -1,   276,    -1,    77,   111,     3,    -1,
     277,    -1,   179,   176,     3,    -1,   278,    -1,   146,   176,
       3,    -1,   279,    -1,    35,   176,     3,    -1,    35,   176,
       3,   220,     3,    -1,   280,    -1,    32,   176,     3,    33,
      53,     3,    59,   221,   226,   222,    -1,    32,   176,     3,
      33,    53,     3,   184,   221,   310,   222,    -1,    32,   176,
       3,    33,    53,     3,    95,   118,   221,   307,   222,   147,
       3,   221,   308,   222,   309,    -1,    32,   176,     3,    33,
      53,     3,    59,   221,   226,   222,    18,   189,    -1,    32,
     176,     3,    33,    53,     3,    95,   118,   221,   307,   222,
     147,     3,   221,   308,   222,   309,    18,   189,    -1,    32,
     176,     3,    33,    53,     3,   142,   118,   221,   306,   222,
      -1,    32,   176,     3,    77,    53,     3,    -1,    32,   176,
       3,   148,    53,     3,   169,     3,    -1,    32,   176,     3,
      87,    53,     3,    -1,    32,   176,     3,    70,    53,     3,
      -1,    32,   176,     3,   189,    53,     3,    -1,    32,   176,
       3,    33,    65,     3,   317,    -1,   281,    -1,   113,   283,
     284,     3,   285,   191,   287,   282,    -1,    -1,   140,   118,
     182,   290,    -1,    -1,   283,   121,    -1,   283,    72,    -1,
     283,   103,    -1,   283,   110,    -1,   114,    -1,    -1,    -1,
     221,   286,   222,    -1,     3,    -1,   286,   223,     3,    -1,
     221,   289,   222,    -1,    -1,   287,   223,   288,   221,   289,
     222,    -1,   226,    -1,    82,    -1,   289,   223,   226,    -1,
     289,   223,    82,    -1,   113,   283,   284,     3,   165,   290,
     282,    -1,     3,    20,   226,    -1,     3,    20,    82,    -1,
     290,   223,     3,    20,   226,    -1,   290,   223,     3,    20,
      82,    -1,   291,    -1,   152,   283,   284,     3,   285,   191,
     287,   282,    -1,   152,   283,   284,     3,   165,   290,   282,
      -1,   152,   283,   284,     3,   285,   235,   282,    -1,   292,
      -1,   182,   293,   253,   165,   294,   236,   242,   245,    -1,
      -1,   283,   121,    -1,   283,   110,    -1,     3,    20,   226,
      -1,     3,   220,     3,    20,   226,    -1,   294,   223,     3,
      20,   226,    -1,   294,   223,     3,   220,     3,    20,   226,
      -1,   295,    -1,    55,    67,   296,     3,    -1,    55,   154,
     296,     3,    -1,    -1,   112,   199,    -1,   297,    -1,    55,
      71,     3,    40,   317,    -1,    55,    71,     3,    40,   317,
      82,   226,    -1,    55,    71,     3,    40,   317,    18,   136,
      -1,    55,    71,     3,    40,   317,    59,   221,   226,   222,
      -1,    55,    71,     3,    40,   317,    18,   136,    59,   221,
     226,   222,    -1,   298,    -1,   187,     3,    -1,   187,    67,
       3,    -1,   299,    -1,    55,   303,   176,   296,     3,   221,
     304,   222,   300,    -1,    55,   303,   176,   296,     3,   220,
       3,   221,   304,   222,   300,    -1,    -1,   300,    37,    20,
       5,    -1,   300,    37,     5,    -1,   300,   138,     3,    76,
       3,    -1,   300,   138,     3,   172,     3,    -1,   300,   155,
      48,   188,   221,     3,   222,   156,     5,    -1,   300,   155,
      48,   144,   221,     3,   222,   221,   301,   222,    -1,   302,
      -1,   301,   223,   302,    -1,   155,     3,   191,   119,   174,
       4,   138,   134,     5,    -1,   155,     3,   191,   119,   174,
     129,   138,   134,     5,    -1,    55,   303,   176,   296,     3,
     221,   304,   222,   319,    -1,    55,   303,   176,   296,     3,
     319,    -1,    55,   303,   176,   296,     3,   220,     3,   221,
     304,   222,   319,    -1,    55,   303,   176,   296,     3,   220,
       3,   319,    -1,    -1,   170,    -1,   171,   170,    -1,   305,
      -1,   304,   223,   305,    -1,   142,   118,   221,   306,   222,
      -1,    53,     3,   142,   118,   221,   306,   222,    -1,   118,
     221,   248,   222,    -1,   111,   221,   248,   222,    -1,    98,
     111,   221,   248,   222,    -1,    98,   118,   221,   248,   222,
      -1,    59,   221,   226,   222,    -1,    53,     3,    59,   221,
     226,   222,    -1,    95,   118,   221,   307,   222,   147,     3,
     221,   308,   222,   309,    -1,    95,   118,   221,   307,   222,
     147,     3,   220,     3,   221,   308,   222,   309,    -1,    53,
       3,    95,   118,   221,   307,   222,   147,     3,   221,   308,
     222,   309,    -1,    53,     3,    95,   118,   221,   307,   222,
     147,     3,   220,     3,   221,   308,   222,   309,    -1,   184,
     221,   310,   222,    -1,    53,     3,   184,   221,   310,   222,
      -1,     3,    -1,   306,   223,     3,    -1,     3,    -1,   307,
     223,     3,    -1,     3,    -1,   308,   223,     3,    -1,    -1,
     309,   138,    76,    56,    -1,   309,   138,    76,   165,   136,
      -1,   309,   138,    76,   149,    -1,   309,   138,    76,   165,
      82,    -1,   309,   138,   182,    56,    -1,   309,   138,   182,
     165,   136,    -1,   309,   138,   182,   149,    -1,   309,   138,
     182,   165,    82,    -1,   309,   138,    76,   135,    -1,   309,
     138,   182,   135,    -1,   309,   128,    97,    -1,   309,   128,
     162,    -1,   309,   128,   141,    -1,   309,    68,    -1,   309,
      18,    68,    -1,   309,    68,   107,    69,    -1,   309,    68,
     107,   106,    -1,     3,    -1,   310,   223,     3,    -1,    -1,
     311,     3,   317,   312,    -1,    -1,   312,    18,   136,    -1,
     312,   136,    -1,   312,    82,     4,    -1,   312,    82,     5,
      -1,   312,    82,     7,    -1,   312,    82,     6,    -1,   312,
      82,   215,   221,   222,    -1,   312,    82,   216,   221,   222,
      -1,   312,    82,   217,   221,   222,    -1,   312,    82,    54,
      -1,   312,    82,   221,   226,   222,    -1,   312,    37,    -1,
     312,    37,   221,     5,   223,     5,   222,    -1,   312,    37,
     221,     5,   222,    -1,   312,    42,   221,     5,   223,     5,
     222,    -1,   312,    42,   221,     5,   222,    -1,   312,    42,
      -1,   312,   184,   118,    -1,   312,   184,    -1,   312,   142,
     118,    -1,   312,   118,    -1,   312,    60,     4,    -1,   312,
      59,   221,   226,   222,    -1,   312,    53,     3,   184,    -1,
     312,    53,     3,   142,   118,    -1,   312,    53,     3,    59,
     221,   226,   222,    -1,   312,    43,    41,    40,   221,   226,
     222,    44,    -1,   312,    43,    41,    40,   221,   226,   222,
      45,    -1,   312,    43,    41,    40,   221,   226,   222,    -1,
     312,    40,   221,   226,   222,    44,    -1,   312,    40,   221,
     226,   222,    45,    -1,   312,    40,   221,   226,   222,    -1,
      -1,   221,     5,   222,    -1,   221,     5,   223,     5,   222,
      -1,    -1,    49,    -1,    -1,   315,   183,    -1,   315,   198,
      -1,    -1,   316,    63,   165,     4,    -1,   316,    64,     4,
      -1,    52,   313,    -1,   168,   313,   315,    -1,   164,   313,
     315,    -1,   132,   313,   315,    -1,   115,   313,   315,    -1,
     108,   313,   315,    -1,    51,   313,   315,    -1,   145,   313,
     315,    -1,    83,   313,   315,    -1,    93,   313,   315,    -1,
      85,   313,   315,    -1,    86,    -1,   181,    -1,   175,    -1,
      84,    -1,   196,    -1,    63,   313,   316,    -1,   190,   221,
       5,   222,   316,    -1,    49,   313,    -1,   192,   221,     5,
     222,    -1,   180,    -1,    46,    -1,   131,    -1,   127,    -1,
     167,   314,   316,    -1,   173,   314,   316,    -1,   130,   314,
     316,    -1,   120,   314,   316,    -1,    89,   221,   318,   222,
     316,    -1,   165,   221,   318,   222,   316,    -1,    47,    -1,
     185,    -1,     4,    -1,   318,   223,     4,    -1,   320,   256,
     235,    -1,    -1,   110,    -1,   152,    -1,   321,    -1,   165,
     154,     3,    -1,   165,   154,    82,    -1,   165,   322,    -1,
     323,    -1,   322,   223,   323,    -1,     8,    20,   226,    -1,
       8,     9,   226,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   320,   320,   321,   326,   333,   334,   335,   353,   361,
     369,   375,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     406,   407,   408,   409,   412,   413,   414,   415,   416,   419,
     420,   423,   424,   427,   428,   431,   431,   432,   432,   433,
     434,   435,   439,   443,   444,   445,   446,   447,   448,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   470,   477,   484,   490,   491,   492,   495,
     496,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     510,   512,   514,   516,   520,   528,   539,   540,   543,   544,
     547,   555,   563,   574,   584,   585,   599,   600,   601,   602,
     605,   612,   620,   621,   622,   625,   626,   629,   630,   633,
     634,   637,   638,   641,   649,   650,   651,   652,   655,   656,
     657,   658,   659,   662,   663,   666,   667,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   681,   682,   683,   691,
     697,   698,   699,   702,   703,   706,   707,   711,   718,   719,
     720,   723,   724,   728,   730,   732,   734,   736,   740,   741,
     742,   745,   746,   749,   750,   753,   754,   755,   758,   759,
     762,   763,   767,   769,   771,   773,   776,   777,   780,   781,
     784,   788,   796,   804,   805,   806,   807,   811,   814,   815,
     818,   818,   820,   824,   831,   838,   848,   855,   862,   872,
     880,   890,   898,   907,   916,   926,   934,   943,   952,   962,
     971,   983,   988,   993,   999,  1006,  1013,  1020,  1030,  1037,
    1046,  1053,  1062,  1069,  1078,  1085,  1091,  1102,  1105,  1111,
    1117,  1124,  1130,  1137,  1143,  1149,  1155,  1161,  1167,  1173,
    1181,  1188,  1196,  1197,  1200,  1201,  1202,  1203,  1204,  1207,
    1207,  1210,  1211,  1214,  1224,  1237,  1238,  1238,  1241,  1242,
    1243,  1244,  1247,  1251,  1252,  1253,  1254,  1260,  1263,  1269,
    1274,  1280,  1286,  1293,  1294,  1295,  1299,  1310,  1321,  1332,
    1346,  1350,  1351,  1354,  1355,  1359,  1363,  1365,  1367,  1369,
    1371,  1376,  1380,  1381,  1385,  1394,  1404,  1408,  1409,  1410,
    1411,  1412,  1413,  1415,  1419,  1420,  1423,  1438,  1445,  1460,
    1473,  1488,  1501,  1502,  1503,  1506,  1507,  1510,  1511,  1512,
    1513,  1514,  1515,  1516,  1517,  1518,  1520,  1522,  1524,  1526,
    1528,  1532,  1533,  1536,  1537,  1540,  1541,  1544,  1545,  1546,
    1547,  1548,  1549,  1550,  1551,  1552,  1553,  1554,  1555,  1556,
    1557,  1558,  1559,  1560,  1561,  1564,  1565,  1568,  1568,  1578,
    1579,  1580,  1581,  1582,  1583,  1584,  1585,  1586,  1587,  1588,
    1589,  1596,  1597,  1598,  1599,  1600,  1601,  1602,  1603,  1604,
    1605,  1606,  1607,  1608,  1609,  1610,  1611,  1612,  1613,  1614,
    1615,  1616,  1619,  1620,  1621,  1624,  1625,  1628,  1629,  1630,
    1633,  1634,  1635,  1639,  1640,  1641,  1642,  1643,  1644,  1645,
    1646,  1647,  1648,  1649,  1650,  1651,  1652,  1653,  1654,  1655,
    1656,  1657,  1658,  1659,  1660,  1661,  1662,  1663,  1664,  1665,
    1666,  1667,  1668,  1669,  1670,  1673,  1674,  1677,  1690,  1691,
    1692,  1696,  1699,  1700,  1701,  1702,  1702,  1704,  1705
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
  "INTERVAL", "JOIN", "KEY", "LESS", "LONGTEXT", "LOW_PRIORITY", "LEFT",
  "LEADING", "LIMIT", "LOCKED", "OFFSET", "LONGBLOB", "MATCH", "MAXVALUE",
  "MEDIUMTEXT", "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NODE", "NO_ACTION",
  "NULLX", "OUTER", "ON", "ORDER", "ONDUPLICATE", "PARTIAL", "PRIMARY",
  "QUICK", "RANGE", "REAL", "RECLAIM", "REFERENCES", "RENAME", "RESTRICT",
  "ROLLUP", "RIGHT", "REPLACE", "SQL_SMALL_RESULT", "SCHEMA", "SHARD",
  "SHARDS", "SHARE", "SKIP", "SOME", "SQL_CALC_FOUND_ROWS",
  "SQL_BIG_RESULT", "SIMPLE", "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT",
  "TINYTEXT", "TINYINT", "TO", "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT",
  "THAN", "TIMESTAMP", "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB",
  "TIME", "UPDATE", "UNSIGNED", "UNIQUE", "UUID", "USING", "USE", "HASH",
  "VALIDATE", "VARCHAR", "VALUES", "VARBINARY", "WHERE", "WHEN", "WITH",
  "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM",
  "FDATE_ADD", "FDATE_SUB", "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX",
  "FUPPER", "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE", "FCOALESCE",
  "FGEN_RANDOM_UUID", "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID",
  "FLAST_INSERT_ID", "';'", "'.'", "'('", "')'", "','", "$accept",
  "stmt_list", "expr", "val_list", "opt_val_list", "@1", "@2", "trim_ltb",
  "interval_exp", "case_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_orderby", "orderby_list", "orderby_item", "opt_limit",
  "opt_for_update", "opt_into_list", "column_list", "select_opts",
  "select_expr_list", "select_expr", "opt_as_alias", "table_references",
  "table_reference", "table_factor", "opt_as", "join_table",
  "opt_inner_cross", "opt_outer", "left_or_right",
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
  "opt_table_options", "shard_range_list", "shard_range_def",
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
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,    59,
      46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   224,   225,   225,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   227,   227,   228,   228,   229,   226,   230,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   231,   231,   231,   226,
     226,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     226,   226,   226,   226,   233,   233,   226,   226,   226,   226,
     226,   226,   226,   234,   235,   235,   236,   236,   237,   237,
     238,   238,   239,   239,   239,   240,   240,   241,   241,   242,
     242,   243,   243,   244,   245,   245,   245,   245,   246,   246,
     246,   246,   246,   247,   247,   248,   248,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   250,   250,   250,   251,
     252,   252,   252,   253,   253,   254,   254,   255,   255,   255,
     255,   256,   256,   257,   257,   257,   257,   257,   258,   258,
     258,   259,   259,   260,   260,   261,   261,   261,   262,   262,
     263,   263,   264,   264,   264,   264,   265,   265,   266,   266,
     267,   234,   268,   269,   269,   269,   269,   268,   270,   270,
     271,   271,   268,   234,   272,   272,   234,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   274,   274,   274,   275,   275,   275,   275,   234,   276,
     234,   277,   234,   278,   234,   279,   279,   234,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     234,   281,   282,   282,   283,   283,   283,   283,   283,   284,
     284,   285,   285,   286,   286,   287,   288,   287,   289,   289,
     289,   289,   281,   290,   290,   290,   290,   234,   291,   291,
     291,   234,   292,   293,   293,   293,   294,   294,   294,   294,
     234,   295,   295,   296,   296,   234,   297,   297,   297,   297,
     297,   234,   298,   298,   234,   299,   299,   300,   300,   300,
     300,   300,   300,   300,   301,   301,   302,   302,   299,   299,
     299,   299,   303,   303,   303,   304,   304,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   306,   306,   307,   307,   308,   308,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   310,   310,   311,   305,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   313,   313,   313,   314,   314,   315,   315,   315,
     316,   316,   316,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   318,   318,   319,   320,   320,
     320,   234,   321,   321,   321,   322,   322,   323,   323
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
       5,     5,     9,    10,     1,     3,     9,     9,     9,     6,
      11,     8,     0,     1,     2,     1,     3,     5,     7,     4,
       4,     5,     5,     4,     6,    11,    13,    13,    15,     4,
       6,     1,     3,     1,     3,     1,     3,     0,     4,     5,
       4,     5,     4,     5,     4,     5,     4,     4,     3,     3,
       3,     2,     3,     4,     4,     1,     3,     0,     4,     0,
       3,     2,     3,     3,     3,     3,     5,     5,     5,     3,
       5,     2,     7,     5,     7,     5,     2,     3,     2,     3,
       2,     3,     5,     4,     5,     7,     8,     8,     7,     6,
       6,     5,     0,     3,     5,     0,     1,     0,     2,     2,
       0,     4,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     3,
       5,     2,     4,     1,     1,     1,     1,     3,     3,     3,
       3,     5,     5,     1,     1,     1,     3,     3,     0,     1,
       1,     1,     3,     3,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   322,   196,     0,   254,     0,   254,     0,
     137,     0,   254,     0,     0,     0,   103,   191,   203,   206,
     228,   230,   232,   234,   237,   250,   277,   281,   290,   295,
     301,   304,   451,     0,     0,   293,     0,     0,   293,   323,
       0,     0,     0,     0,     0,     0,   260,     0,   260,     0,
       0,   454,   455,     0,     0,     0,     0,   302,     0,     1,
       2,     0,   235,     0,     0,     0,     0,     0,     0,     0,
     324,     0,   293,   200,     0,   195,   193,   194,     0,   229,
     204,     0,   256,   257,   258,   259,   255,     0,   233,     0,
       0,     0,   452,   453,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   148,   138,   100,     0,   101,   102,
     139,   140,   141,    11,   143,   145,   144,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
     104,   146,   231,   258,   255,   152,     0,     0,   153,   155,
     156,   162,   303,     3,     0,     0,     0,     0,     0,     0,
       0,   294,   291,     0,     0,     0,     0,     0,   292,     0,
       0,     0,     0,     0,   198,   106,     0,     0,     0,     0,
     261,   261,   458,   457,   456,     0,    43,     0,    28,    27,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   149,     0,     0,
       0,   185,     0,     0,     0,     0,   170,   169,   173,   177,
     174,     0,     0,   171,   161,     0,     0,     0,     0,     0,
       0,     0,     0,   236,   434,   443,   402,   402,   402,   402,
     402,   427,   402,   424,     0,   402,   402,   402,   405,   436,
     405,   435,   402,   402,   402,     0,   405,   402,   405,   426,
     433,   425,   444,     0,     0,   428,   296,     0,     0,     0,
       0,     0,     0,     0,     0,   448,   201,     0,   119,     0,
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
     248,     0,   431,   407,   413,   410,   407,   407,     0,   407,
     407,   407,   406,   410,   410,   407,   407,   407,     0,   410,
     407,   410,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,   450,     0,   367,
     319,   162,   107,     0,   124,   106,   197,   199,     0,   252,
     263,     0,     0,   252,     0,   252,     0,    52,     0,    90,
       0,     0,     0,    51,     0,     0,    63,     0,     0,     0,
       0,    53,    54,    55,    56,    57,    58,    66,    67,    68,
       0,     0,     0,    37,    35,     0,     0,    99,    97,    47,
       0,     0,     0,     0,     0,     0,   108,   185,   187,   187,
     187,     0,     0,     0,   119,   175,   176,     0,     0,   178,
       0,     0,     0,     0,     0,   249,     0,     0,   419,   429,
     421,   423,   445,     0,   422,   418,   417,   440,   439,   416,
     420,   415,     0,   437,   414,   438,     0,     0,   298,     0,
     297,     0,   221,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   448,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   325,     0,
       0,     0,     0,   192,   202,     0,     0,     0,   272,   262,
       0,     0,   252,   279,   252,   280,    42,    94,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,    39,     0,     0,     0,
      30,     0,   117,   158,     0,     0,     0,     0,   286,     0,
       0,   124,   167,   165,     0,     0,   163,   179,     0,     0,
       0,     0,     0,   245,   403,     0,   408,   409,     0,     0,
     410,     0,   410,   410,   432,     0,     0,     0,     0,     0,
       0,     0,   207,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,   321,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   307,   367,     0,   447,
     112,   120,   121,   125,   274,   273,     0,     0,   264,   269,
     268,     0,   266,   251,   278,    91,    95,     0,    61,    60,
       0,    65,     0,     0,    79,    80,    69,     0,    71,    46,
       0,    50,    40,    33,    31,    32,     0,     0,   119,   186,
       0,     0,     0,     0,     0,     0,   282,   180,     0,   166,
       0,     0,     0,   365,     0,     0,     0,   412,   441,   446,
     442,   430,     0,   299,     0,     0,     0,     0,     0,   222,
       0,   215,     0,     0,     0,     0,   209,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,     0,     0,     0,     0,   305,   318,   326,   369,
     113,   114,   123,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,    64,    81,    82,    83,    84,    88,    87,
      89,    86,    85,     0,    48,   112,   115,   118,   124,   188,
       0,     0,     0,   287,   288,     0,     0,   238,   343,     0,
     341,     0,   239,     0,   404,   411,     0,   211,   224,   225,
     226,     0,     0,     0,     0,   208,     0,     0,   217,     0,
       0,     0,   307,     0,     0,     0,     0,   333,     0,     0,
       0,   330,     0,   329,     0,   339,     0,     0,     0,   368,
     122,   127,   126,   253,   276,   275,   271,   270,     0,    62,
      59,    70,   110,     0,     0,   109,   128,   184,     0,   183,
     182,     0,   181,     0,     0,     0,   243,     0,   366,   300,
       0,   219,   216,     0,   213,     0,     0,     0,   210,   306,
     320,     0,     0,     0,     0,     0,   331,   332,   136,   327,
     309,     0,     0,     0,     0,   381,     0,   386,     0,     0,
       0,     0,     0,   390,   371,     0,   388,     0,   116,   112,
       0,   133,   189,   289,   241,     0,   344,   342,   227,   212,
     220,   218,     0,   334,     0,     0,   340,     0,   308,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
     391,   372,   373,   375,   374,   379,     0,     0,     0,     0,
     389,   387,   267,   111,   130,   129,     0,   105,     0,   214,
       0,   328,     0,   310,   311,     0,     0,     0,     0,     0,
       0,     0,     0,   393,     0,     0,     0,     0,     0,     0,
       0,   134,     0,     0,     0,     0,     0,     0,   383,     0,
     401,   385,     0,     0,     0,   394,   392,   376,   377,   378,
     380,   132,   131,   345,     0,     0,     0,     0,     0,     0,
       0,   399,   400,     0,     0,     0,   347,     0,     0,     0,
       0,   347,     0,     0,   382,   384,   398,   395,   240,   346,
       0,     0,     0,   335,     0,     0,   314,   312,   396,   397,
       0,   361,     0,     0,     0,   347,   347,     0,     0,   313,
       0,   362,   242,     0,   358,   360,   359,     0,     0,     0,
     337,   336,     0,   315,   363,   364,   348,   356,   350,     0,
     352,   357,   354,     0,   347,     0,   351,   349,   355,   353,
     338,     0,     0,     0,     0,     0,     0,     0,   316,   317
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   319,   320,   321,   495,   613,   334,   606,   193,
      15,    16,   308,   622,   816,   792,   885,   728,   454,   691,
     692,   583,   941,   987,   782,    53,   140,   141,   237,   147,
     148,   149,   255,   150,   252,   402,   253,   398,   636,   637,
     390,   625,   820,   151,    17,    43,    78,   174,    18,    19,
     557,   558,    20,    21,    22,    23,    24,    25,   588,    46,
      87,   315,   461,   592,   800,   701,   459,    26,    27,    56,
     394,    28,    64,    29,    30,    31,   786,  1065,  1066,    42,
     577,   578,   831,   829,  1034,  1058,   744,   579,   869,   412,
     423,   528,   529,   296,   533,   450,   451,    32,    51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -757
static const yytype_int16 yypact[] =
{
     195,  -114,    91,   468,  -757,   -69,  -757,   117,  -757,    16,
    -757,   120,     5,   248,   342,   134,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,   359,   361,   311,   431,   127,   311,  -757,
     281,   343,   290,   407,   454,   102,   443,   458,   443,   270,
     121,   245,  -757,   191,   470,   397,     8,  -757,   492,  -757,
     195,   225,   277,   300,   499,   476,   393,   103,   335,   551,
    -757,   238,   311,   336,   555,  -757,  -757,  -757,   -62,  -757,
    -757,   377,  -757,  -757,  -757,  -757,  -757,   558,  -757,   562,
    1193,  1193,  -757,  -757,   570,   284,  -757,  -757,  -757,  -757,
     593,  1193,  1193,  1193,  -757,  -757,  -757,   730,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,   419,   432,
     461,   465,   479,   504,   511,   522,   524,   530,   564,   566,
     572,   603,   609,   627,   644,   652,   655,   661,  1193,  2706,
     -55,  -757,  -757,    12,    13,    15,    23,  -125,   309,  -757,
    -757,   578,  -757,  -757,    55,   571,   626,   674,   833,   856,
     908,  -757,  -757,  2425,   912,   785,   729,   949,  -757,   817,
     126,   757,   954,   932,  -757,   247,  -135,     8,   956,   957,
    -129,  -112,  2783,  2783,  -757,   958,  1193,  1193,   873,   873,
    -757,  1193,  2293,    25,   796,  1193,   505,  1193,  1193,   791,
    1193,  1193,  1193,  1193,  1193,  1193,  1193,  1193,  1193,  1193,
     741,   742,   744,   745,  1573,  -757,  1193,  1193,  1193,  1193,
    1193,    85,   747,   561,  1193,   565,  1193,  1193,  1193,  1193,
    1193,  1193,  1193,  1193,  1193,  1193,   966,  -757,     8,  1193,
     969,   189,   751,   297,   971,     8,  -757,  -757,  -757,   -18,
    -757,     8,   858,   839,  -757,   974,   975,   976,   977,   978,
     979,   980,   981,  -757,  -757,  -757,   764,   764,   764,   764,
     764,  -757,   764,  -757,   765,   764,   764,   764,   938,  -757,
     938,  -757,   764,   764,   764,   768,   938,   764,   938,  -757,
    -757,  -757,  -757,   789,   790,  -757,   368,    82,  1010,  1011,
     877,  1013,   879,   820,  1017,   -20,  -757,  1193,   882,     8,
    -130,   336,  -757,  1019,  1020,   834,  1019,   180,  -757,  1405,
    -757,   802,  2783,  2373,    37,  -757,  1193,  1193,   804,   464,
    -757,  -757,  -757,  1594,   829,  1426,  1447,   805,  1653,  1674,
    1695,  1716,  1737,  1778,  1799,  1820,  1468,  1489,  1510,  -757,
    -757,  -757,  -757,  -757,  1618,  1757,  1983,  2209,  2209,  -757,
      51,  -757,   796,  1193,  1193,   827,  1193,  2739,   828,   850,
     851,   852,   621,   607,   642,   777,   514,   514,  1050,  1050,
    1050,  1050,  -757,  -757,  -130,  -757,    99,   963,   964,   965,
    -757,  -757,  -757,     0,   152,   309,   839,   839,   967,   947,
       8,  -757,   970,  -757,    27,  2425,  -757,  -757,  -757,   917,
    -757,  1085,  -757,  -757,  -757,  -757,  -757,  -757,  1087,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  1087,  -757,
    -757,  -757,  1088,  1089,   959,   871,  1193,   915,    53,    96,
     968,  1101,   192,  1102,  1104,   972,  -757,  -757,  1105,   403,
    -757,   578,  2783,  1061,   989,  -130,  -757,  -757,  1095,  -111,
    -757,   302,   893,  -111,   893,   982,  1193,  -757,  1193,  -757,
    1193,  2633,  2394,  -757,  1193,  1193,  -757,  1193,  2612,  1000,
    1000,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    1193,  1193,  1193,  -757,  -757,  1193,   895,  2209,  2209,   796,
    2761,  1193,   796,   796,   796,   896,  1021,   189,  1024,  1024,
    1024,  1193,  1117,  1121,   882,  -757,  -757,     8,  1193,    94,
       8,   905,  1009,  1012,   907,  -757,  1128,   304,   249,   473,
     249,   249,  -757,   326,   249,   249,   249,   473,   473,   249,
     249,   249,   362,   473,   249,   473,   919,   920,  1075,  1193,
    2783,   922,  -757,   923,   924,   925,   926,   366,  -757,   983,
      53,  1148,   242,   986,    53,   243,  1016,  1161,   -15,  1162,
     945,  1049,   341,   948,   960,  1052,   961,   369,  -757,  1165,
     796,  1172,  1193,  -757,  -757,  1071,  1059,  1175,  -757,  -757,
    1176,  1094,   -97,  -757,   -97,  -757,  -757,  2783,  2654,  -757,
    1193,  1552,    54,  1841,  1193,  1193,   962,   973,  1879,  1531,
    1900,   984,  -757,  1193,   990,  1193,   668,   993,   997,   998,
    -757,  1135,  1080,  -757,  1070,   987,  1001,  1002,  2783,  1168,
       2,   989,  -757,  2783,  1193,  1003,  -757,  -757,    94,  1193,
    1004,  1005,  1186,  -757,  -757,  1187,  -757,  -757,  1026,  1198,
    -757,  1199,  -757,  -757,  -757,  1006,  1921,    53,  1201,  1202,
    1218,  1225,  -757,  1226,  1014,   371,  1015,  1043,    53,  1018,
     384,  1044,    53,  1230,   285,   403,  -757,   164,  1193,  1022,
    1023,  1025,  1231,  1231,  1027,  1186,   206,   403,  2425,  -757,
      59,  1029,  -757,   310,  -757,  2783,  1056,  1220,  -757,  -757,
    2783,   386,  -757,  -757,  -757,  -757,  2783,  1193,  -757,  -757,
    1193,  -757,  1942,  2272,  -757,  -757,  -757,  1193,  -757,  -757,
    1028,  -757,   668,  -757,  -757,  -757,  1193,  1193,   882,  -757,
    1238,  1238,  1238,  1193,  1193,  1239,  -757,  2783,  1231,  -757,
    1963,  1242,  1246,  -757,   391,  1031,  1252,  -757,   473,  -757,
     473,   473,  1193,  -757,   394,  1035,  1036,  1037,  1038,  -757,
      53,  -757,    53,  1039,   398,    53,  -757,  1041,   433,  1042,
    1076,    53,   436,  1045,  1147,  1149,  1048,  2004,  1242,  1231,
    1231,  -757,   438,   440,  1246,   453,   154,  -757,  -757,  -757,
    -757,  -757,  -757,  1172,  1193,  1193,  1019,  1132,  -757,  1155,
    1069,  2025,  2046,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  2067,  -757,  2675,   161,  2783,   989,  -757,
     455,   462,   480,  2783,  2783,  1293,   506,  1296,  -757,   508,
    -757,   517,  -757,  1313,  -757,  -757,  2105,  -757,  -757,  -757,
    -757,  1314,   534,   539,    53,  -757,   567,    53,  -757,    53,
    1097,   588,   206,  1193,  1098,  1099,  1186,  -757,   590,   592,
     596,  -757,  1318,  -757,   598,  -757,   280,  1319,  1275,  2407,
    -757,  2783,  2783,  1103,  -757,  2783,  -757,  2783,  1094,  -757,
    -757,  -757,  -757,  1174,  1193,  -757,  1228,  -757,  1322,  -757,
    -757,  1193,  -757,  1139,  1183,  1348,  -757,  1349,  -757,  -757,
    1152,  -757,  -757,   600,  -757,   604,   606,    53,  -757,   154,
    -757,  2126,  1242,  1246,   617,  1232,  -757,  -757,  -757,  -757,
    -757,  1370,   -41,   237,  1241,  1157,  1159,  1160,  1341,  1380,
    1163,  1381,    40,  -757,  -757,  1268,  1269,   619,  -757,  2675,
     273,  1274,  -757,  2783,  -757,  1386,  -757,  -757,  -757,  -757,
    -757,  -757,   628,  -757,   639,   641,  -757,  1387,  -757,  1388,
    1409,  1192,  1222,  -757,  1417,  1193,  1459,  1445,    76,  1193,
    -757,  -757,  -757,  -757,  -757,  -757,  1285,  1306,  1327,  1193,
    -757,  -757,  -757,  -757,  1411,  1432,  1231,  -757,  1390,  -757,
    1478,  -757,   623,  -757,  -757,  1623,  1624,   645,  2147,   649,
    1414,  1429,  1534,  -757,  2168,  1431,  1433,  1434,  2189,  1529,
    1532,  1435,  1656,  1657,  1658,  1656,  1440,  1546,  -757,  1832,
     830,  -757,  1853,  1193,  1193,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,   656,   660,  1651,   662,  1652,  1718,
    1654,  -757,  -757,  1655,  2230,  2251,  -757,  1875,  1876,  1656,
    1656,  -757,  1725,  1877,  -757,  -757,   844,  -757,   229,  -757,
    1660,   682,   685,   251,  1880,   695,  -757,  -757,  -757,  -757,
       3,  1777,   -45,   -46,  1656,  -757,  -757,  1817,  1696,  -757,
    1725,  -757,  -757,   274,  -757,  -757,  -757,   -24,   149,   697,
     251,   251,  1767,  -757,  -757,  -757,  -757,  -757,  -757,   219,
    -757,  -757,  -757,   223,  -757,  1714,  -757,  -757,  -757,  -757,
     251,    83,  1842,  1856,  1861,  1950,  2093,  2094,  -757,  -757
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -757,  2040,   -53,  -377,  -757,  -757,  -757,  -757,  1622,  1911,
    -757,  -134,  -271,  -757,  -757,  -754,  -757,  -757,  -504,  -757,
    1311,  -608,  -757,  -757,  -679,  -757,  -757,  1866,  -138,  -119,
    1862,  -242,  1659,  -757,  -757,   525,  -757,  -757,  -757,  1470,
    1599,   444,   218,  -757,  -757,  -757,  2035,  1800,  -757,  -757,
    -558,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -432,   441,
    2064,  1932,  -757,  1650,  -757,  1328,  -315,  -757,  -757,  -757,
    -757,  -757,   373,  -757,  -757,  -757,  1368,  -757,  1141,  -757,
    1635,  1637,  -756,  -753,  -630,  -688,  -668,  -757,  -757,   328,
     155,   333,  -410,  -400,  1897,  -565,  -757,  -757,  -757,  2232
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -449
static const yytype_int16 yytable[] =
{
     139,   463,   665,   676,   783,   525,   670,   241,  -283,   399,
     631,   145,   242,   537,   538,  -285,  -284,   785,   215,   543,
     511,   545,   734,   736,    49,   858,   145,   243,   864,   586,
    1087,   593,  1096,   595,   177,   959,   313,   182,   183,   456,
     244,   238,    44,   586,   971,   972,   973,   974,   188,   189,
     190,   309,  1084,   316,   192,   236,   552,   493,   310,   826,
     328,   882,    33,   307,   216,   217,   218,   219,   220,   221,
     222,  1081,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   214,   521,  1112,   178,   596,
     446,   359,   314,   245,   975,   446,  1085,   790,   245,   754,
     859,   860,   215,   360,   396,    80,   165,    45,   256,   314,
     764,  1097,   587,   506,   768,   325,   326,  1086,   611,   384,
     257,   787,   522,   514,    92,  1098,   702,   469,   470,   302,
      66,   960,   447,   397,   322,  1001,  1088,   447,   323,   236,
     791,  1099,   329,   333,   335,   336,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   955,   519,   954,
     703,   178,   704,   354,   355,   356,   357,   358,   239,   523,
      50,   367,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   465,   584,   983,   139,   494,   914,    10,
     455,   866,  1082,    67,    95,    96,    97,    98,    99,   100,
     448,   449,   842,    93,   843,  1100,   675,   846,   101,   102,
     886,   524,  1113,   851,    81,   166,   103,   104,  1002,   327,
     512,   361,   735,   773,   818,   105,  -283,     1,   496,   146,
       2,   327,   634,  -285,  -284,   240,   720,   505,   303,    68,
     748,   169,   750,   751,   146,   106,  -448,  1070,   507,   107,
       3,    57,   108,   109,   452,   976,   977,   978,   154,   774,
    1003,   979,   553,   554,   555,   556,   110,    34,   437,  1077,
     111,     4,     5,   471,   472,   632,   709,   710,   638,    90,
     635,   478,   559,   387,  1101,   920,   903,   910,   789,   905,
      91,   906,   867,    47,   112,   155,    54,  1071,  1102,   388,
     921,  1106,   156,   438,   170,  1108,   775,  1011,     6,   868,
     497,   498,   157,   500,  1103,    58,   446,   560,   214,  1071,
     216,   217,   218,   219,   220,   221,   222,   113,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,     7,    59,  1094,   114,   307,    10,     8,   776,   952,
     171,   115,   116,    60,   117,  1107,   883,  1072,   447,  1109,
       9,    10,    61,  1063,    62,   614,   246,  1073,   617,   618,
     619,   464,  -448,   158,    11,   513,   389,    12,   563,  1072,
    1095,   961,    13,   550,   884,  1037,   434,  1090,  1091,  1073,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      73,    69,   138,   564,   159,   597,  1110,   598,   247,  1061,
    1062,   601,   602,    63,   603,   962,  -168,   435,   667,   671,
     984,   248,   646,  -200,    65,   424,   794,   608,   609,   610,
     307,   429,   249,   431,  1089,   172,   689,   647,   616,    48,
     436,    70,   680,    55,    71,   985,   569,    79,   628,   681,
     250,    88,   570,   668,   672,   633,    72,   173,    94,    82,
    -200,   770,   251,   142,   216,   217,   218,   219,   220,   221,
     222,   873,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   152,   656,   160,   571,   161,
      83,   572,   162,    74,   185,   186,   771,   143,    95,    96,
      97,    98,    99,   100,   573,    82,   163,    75,   144,   392,
     245,   574,   101,   102,   589,   590,   644,   645,    76,   693,
     103,   164,   695,   795,   167,    35,   648,   649,   700,    36,
     231,   232,   233,   234,   235,   575,    83,   706,   650,   651,
      77,   712,   713,    84,   168,   330,   173,    85,   175,   106,
     474,   180,   722,   107,    86,   181,   108,   109,    95,    96,
      97,    98,    99,   100,   363,   364,   179,   365,    49,    37,
     366,   737,   101,   102,   652,   651,   740,   576,   662,   663,
     103,   686,   687,   761,   663,   413,   414,   415,   416,   368,
     417,   369,   187,   419,   420,   421,   766,   663,   798,   799,
     425,   426,   427,   832,   833,   430,   837,   663,   254,   106,
     845,   663,    38,   107,   258,   777,   108,   109,   331,   227,
     228,   229,   230,   231,   232,   233,   234,   235,    39,    40,
     194,   113,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,    41,   195,   801,   848,   663,   802,   852,   687,
     861,   862,   863,   862,   813,   228,   229,   230,   231,   232,
     233,   234,   235,   815,   817,   865,   833,   887,   888,   259,
     823,   824,   196,   332,   889,   888,   197,   475,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   836,
     198,   113,   890,   888,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   370,   199,   138,   260,   892,   862,
     894,   895,   200,    95,    96,    97,    98,    99,   100,   896,
     897,   871,   872,   201,   875,   202,   877,   101,   102,   530,
     531,   203,   534,   535,   536,   103,   901,   663,   539,   540,
     541,   902,   663,   544,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   106,   204,   371,   205,   107,   904,
     663,   108,   109,   206,    95,    96,    97,    98,    99,   100,
     911,   229,   230,   231,   232,   233,   234,   235,   101,   102,
     908,   663,   915,   895,   916,   862,   103,   337,   917,   862,
     919,   897,   949,   663,   207,   700,   950,   663,   951,   663,
     208,   939,    95,    96,    97,    98,    99,   100,   943,   956,
     833,   982,   799,  1014,  1015,   106,   101,   102,   209,   107,
     989,   663,   108,   109,   103,    95,    96,    97,    98,    99,
     100,   990,   895,   991,   897,   210,   113,  1018,  1019,   101,
     102,  1021,  1022,   211,  1041,  1042,   212,   103,  1046,  1047,
    1048,  1049,   213,   106,  1051,  1047,   261,   107,  1068,  1069,
     108,   109,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,  1075,  1047,   106,  1076,  1047,   262,
     107,   263,   998,   108,   109,   297,  1004,  1079,  1080,  1104,
    1047,   515,   516,   298,   191,   477,  1008,   113,   299,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   821,
     822,   138,   300,   626,   627,   301,   304,   305,   306,   311,
     312,   318,    10,   349,   350,   113,   351,   352,   362,   383,
    1044,  1045,   386,   391,   393,   400,   401,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   418,   422,   113,   428,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     432,   433,   138,   439,   440,   441,   442,   443,    10,   444,
     445,   453,   458,   460,   467,   462,   473,   481,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   499,   502,
     138,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   503,   504,   138,    95,    96,    97,    98,    99,   100,
     235,   508,   509,   510,   517,   518,   526,   520,   101,   102,
     527,   532,   549,   546,   547,   548,   103,    95,    96,    97,
      98,    99,   100,   551,   562,   565,   561,   566,   568,   581,
     567,   101,   102,   582,   591,   585,   605,   612,   620,   103,
     629,   621,   586,   624,   630,   106,   639,   640,   642,   107,
     641,   643,   108,   109,   655,    95,    96,    97,    98,    99,
     100,   653,   654,   657,   658,   659,   660,   661,   106,   101,
     102,   666,   107,   694,   673,   108,   109,   103,    95,    96,
      97,    98,    99,   100,   674,   677,   678,   679,   688,   682,
     684,   664,   101,   102,   669,   690,   699,   696,   697,   698,
     103,   683,   685,   726,   714,   727,   106,   729,   733,   743,
     107,   746,   745,   108,   109,   715,    95,    96,    97,    98,
      99,   100,   747,   749,   755,   756,   719,   113,   730,   106,
     101,   102,   721,   107,   874,   723,   108,   109,   103,   724,
     725,   757,   731,   732,   738,   741,   742,   752,   758,   759,
     113,   763,   767,   769,   781,   760,   762,   876,   796,   765,
     797,   819,   825,   778,   779,   828,   780,   106,   784,   830,
     814,   107,   793,   834,   108,   109,   835,   838,   839,   840,
     844,   841,   847,   849,   850,   854,   853,   855,   113,   856,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     878,   113,   138,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   891,   893,   138,   898,   900,   907,   912,
     913,   918,   922,   923,   938,   942,   587,   940,   944,   113,
     945,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   946,   947,   138,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   948,   958,   138,   963,   964,   957,
     965,   966,   967,   968,   969,   970,   980,   981,   986,   988,
     992,   993,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   994,   995,   138,   216,   217,   218,   219,   220,
     221,   222,   997,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   216,   217,   218,   219,
     220,   221,   222,   996,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   216,   217,   218,
     219,   220,   221,   222,   999,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   216,   217,
     218,   219,   220,   221,   222,  1000,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   216,
     217,   218,   219,   220,   221,   222,  1005,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     216,   217,   218,   219,   220,   221,   222,  1006,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   216,   217,   218,   219,   220,   221,   222,  1007,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   216,   217,   218,   219,   220,   221,   222,  1009,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   216,   217,   218,   219,   220,   221,   222,
    1010,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   216,   217,   218,   219,   220,   221,
     222,  1012,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,  1013,  1016,  1017,   466,   217,
     218,   219,   220,   221,   222,  1023,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   479,
    1024,   707,  1025,  1027,  1031,  1028,  1029,  1032,   862,  1033,
    1035,  1036,  1038,   216,   217,   218,   219,   220,   221,   222,
     480,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   216,   217,   218,   219,   220,   221,
     222,   490,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   216,   217,   218,   219,   220,
     221,   222,   491,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   216,   217,   218,   219,
     220,   221,   222,   492,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   216,   217,   218,
     219,   220,   221,   222,   717,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,  1039,   218,
     219,   220,   221,   222,   708,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   216,   217,
     218,   219,   220,   221,   222,   353,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   216,
     217,   218,   219,   220,   221,   222,   476,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     216,   217,   218,   219,   220,   221,   222,  1040,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   216,   217,   218,   219,   220,   221,   222,  1043,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,  1050,  1052,  1053,   482,  1054,  1055,  1059,  1060,
    1064,  1074,  1067,  1078,  1083,  1081,  1105,  1092,  1111,   216,
     217,   218,   219,   220,   221,   222,   483,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     216,   217,   218,   219,   220,   221,   222,   484,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   216,   217,   218,   219,   220,   221,   222,   485,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   216,   217,   218,   219,   220,   221,   222,   486,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   216,   217,   218,   219,   220,   221,   222,
    1114,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,  1115,  1116,   219,   220,   221,   222,
     487,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   216,   217,   218,   219,   220,   221,
     222,   488,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   216,   217,   218,   219,   220,
     221,   222,   489,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   216,   217,   218,   219,
     220,   221,   222,   711,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   216,   217,   218,
     219,   220,   221,   222,  1117,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,  1118,  1119,
     153,   716,   607,   324,   870,   385,   623,   395,   739,   176,
     580,   457,    89,   317,   594,   216,   217,   218,   219,   220,
     221,   222,   718,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   216,   217,   218,   219,
     220,   221,   222,   753,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   216,   217,   218,
     219,   220,   221,   222,   803,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   216,   217,
     218,   219,   220,   221,   222,   827,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   216,
     217,   218,   219,   220,   221,   222,   937,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     909,  1093,  -449,  -449,  -449,  -449,   857,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     216,   217,   218,   219,   220,   221,   222,   879,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   216,   217,   218,   219,   220,   221,   222,   880,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   216,   217,   218,   219,   220,   221,   222,   881,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   216,   217,   218,   219,   220,   221,   222,
     772,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   788,   542,   184,   899,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   804,   805,     0,   953,     0,
     806,     0,   807,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1020,
       0,     0,     0,   808,   809,     0,   810,     0,     0,     0,
       0,     0,     0,   216,   217,   218,   219,   220,   221,   222,
    1026,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   216,   217,   218,   219,   220,   221,
     222,  1030,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   924,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   925,     0,     0,   926,     0,   927,
     928,     0,  1056,     0,     0,     0,     0,     0,     0,     0,
     929,     0,     0,     0,     0,     0,   930,   931,   811,   812,
       0,   264,   265,  1057,   266,     0,   267,   268,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   191,   269,   932,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   270,   271,
     272,   273,     0,     0,   274,     0,     0,     0,   275,     0,
       0,     0,     0,     0,     0,   933,     0,     0,     0,     0,
       0,     0,     0,   276,     0,     0,     0,     0,     0,     0,
     277,     0,     0,   934,     0,   278,     0,     0,     0,   935,
     468,     0,   279,     0,     0,   280,   281,   282,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     283,   600,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   284,
     285,   936,   286,   287,     0,     0,     0,     0,   288,     0,
     289,     0,     0,     0,     0,   290,   291,     0,     0,     0,
     292,     0,     0,     0,     0,   293,     0,   294,     0,     0,
       0,   295,   216,   217,   218,   219,   220,   221,   222,     0,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   216,   217,   218,   219,   220,   221,   222,
       0,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   216,   217,   218,   219,   220,   221,
     222,     0,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   216,   217,   218,   219,   220,
     221,   222,     0,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     0,     0,   604,   215,
       0,     0,     0,   790,     0,     0,   216,   217,   218,   219,
     220,   221,   222,   599,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,     0,     0,
       0,     0,     0,     0,   705,     0,   236,     0,     0,   216,
     217,   218,   219,   220,   221,   222,   791,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
       0,   216,   217,   218,   219,   220,   221,   222,   501,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,     0,   216,   217,   218,   219,   220,   221,   222,
     615,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235
};

static const yytype_int16 yycheck[] =
{
      53,   316,   560,   568,   683,   405,   564,   145,     3,   251,
     514,     3,   146,   423,   424,     3,     3,   685,     3,   429,
      20,   431,    20,   631,     8,   778,     3,   146,   784,   140,
      76,   463,    56,   465,    96,    76,   165,    90,    91,   310,
     165,    96,   111,   140,     4,     5,     6,     7,   101,   102,
     103,   186,    97,   165,   107,    40,     3,     6,   177,   738,
     194,   815,   176,   193,    10,    11,    12,    13,    14,    15,
      16,    68,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   138,    59,     4,   223,   466,
     110,     6,   221,   223,    54,   110,   141,    38,   223,   657,
     779,   780,     3,    18,   122,     3,     3,   176,    53,   221,
     668,   135,   223,   384,   672,    90,    91,   162,   495,   238,
      65,   686,    95,   394,     3,   149,   223,    90,    91,     3,
       3,   172,   152,   151,   187,    59,   182,   152,   191,    40,
      81,   165,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   913,   400,   912,
     592,   223,   594,   216,   217,   218,   219,   220,   223,   142,
     154,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   317,   455,   939,   239,   136,   856,   166,
     309,    37,   189,    66,     3,     4,     5,     6,     7,     8,
     220,   221,   760,    82,   762,    56,   221,   765,    17,    18,
     818,   184,   129,   771,   112,   112,    25,    26,   142,   194,
     220,   136,   220,    59,   728,    34,   221,    32,   362,   221,
      35,   194,   138,   221,   221,   220,   613,   371,   112,   112,
     650,     3,   652,   653,   221,    54,    40,    18,   386,    58,
      55,     3,    61,    62,   307,   215,   216,   217,    33,    95,
     184,   221,   209,   210,   211,   212,    75,   176,   186,    18,
      79,    76,    77,   326,   327,   517,   222,   223,   520,     9,
     186,   334,   186,    94,   135,     5,   844,   852,   688,   847,
      20,   849,   138,   176,   103,    70,   176,    68,   149,   110,
      20,    82,    77,   221,    66,    82,   142,   986,   113,   155,
     363,   364,    87,   366,   165,    67,   110,   221,   371,    68,
      10,    11,    12,    13,    14,    15,    16,   136,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   146,     0,    69,   153,   193,   166,   152,   184,   907,
     112,   160,   161,   219,   163,   136,   195,   128,   152,   136,
     165,   166,     3,  1051,     3,   499,    57,   138,   502,   503,
     504,   191,   166,   148,   179,   223,   187,   182,   186,   128,
     106,   144,   187,   436,   223,  1015,    18,  1075,  1076,   138,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
       3,    38,   221,   221,   189,   468,  1104,   470,   109,  1049,
    1050,   474,   475,   112,   477,   188,   117,    59,   186,   186,
     157,   122,   183,   186,     3,   280,   126,   490,   491,   492,
     193,   286,   133,   288,  1074,    72,   580,   198,   501,     8,
      82,   170,   111,    12,   111,   182,    53,     3,   511,   118,
     151,     3,    59,   221,   221,   518,   176,   220,   223,    72,
     223,   186,   163,     3,    10,    11,    12,    13,    14,    15,
      16,   796,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     3,   549,   220,    95,   199,
     103,    98,     3,    96,   220,   221,   221,   110,     3,     4,
       5,     6,     7,     8,   111,    72,    40,   110,   121,   222,
     223,   118,    17,    18,   222,   223,   222,   223,   121,   582,
      25,   138,   585,   223,   199,    67,    63,    64,   591,    71,
      26,    27,    28,    29,    30,   142,   103,   600,   222,   223,
     143,   604,   605,   110,     3,    50,   220,   114,     3,    54,
      96,     3,   615,    58,   121,     3,    61,    62,     3,     4,
       5,     6,     7,     8,    13,    14,   199,    16,     8,   111,
      19,   634,    17,    18,   222,   223,   639,   184,   222,   223,
      25,   222,   223,   222,   223,   267,   268,   269,   270,    34,
     272,    36,     9,   275,   276,   277,   222,   223,   222,   223,
     282,   283,   284,   222,   223,   287,   222,   223,    40,    54,
     222,   223,   154,    58,    53,   678,    61,    62,   123,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   170,   171,
     221,   136,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   184,   221,   707,   222,   223,   710,   222,   223,
     222,   223,   222,   223,   717,    23,    24,    25,    26,    27,
      28,    29,    30,   726,   727,   222,   223,   222,   223,    53,
     733,   734,   221,   178,   222,   223,   221,   223,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   752,
     221,   136,   222,   223,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   159,   221,   221,    53,   222,   223,
     222,   223,   221,     3,     4,     5,     6,     7,     8,   222,
     223,   794,   795,   221,   797,   221,   799,    17,    18,   416,
     417,   221,   419,   420,   421,    25,   222,   223,   425,   426,
     427,   222,   223,   430,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    54,   221,   221,   221,    58,   222,
     223,    61,    62,   221,     3,     4,     5,     6,     7,     8,
     853,    24,    25,    26,    27,    28,    29,    30,    17,    18,
     222,   223,   222,   223,   222,   223,    25,    26,   222,   223,
     222,   223,   222,   223,   221,   878,   222,   223,   222,   223,
     221,   884,     3,     4,     5,     6,     7,     8,   891,   222,
     223,   222,   223,   220,   221,    54,    17,    18,   221,    58,
     222,   223,    61,    62,    25,     3,     4,     5,     6,     7,
       8,   222,   223,   222,   223,   221,   136,   222,   223,    17,
      18,   222,   223,   221,    44,    45,   221,    25,   222,   223,
     220,   221,   221,    54,   222,   223,    53,    58,    44,    45,
      61,    62,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   222,   223,    54,   222,   223,    53,
      58,     3,   965,    61,    62,     3,   969,   222,   223,   222,
     223,   396,   397,   138,   194,    96,   979,   136,   199,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   731,
     732,   221,     3,   509,   510,   138,   199,     3,    26,     3,
       3,     3,   166,   222,   222,   136,   222,   222,   221,     3,
    1023,  1024,     3,   222,     3,   117,   137,     3,     3,     3,
       3,     3,     3,     3,     3,   221,   221,    49,   136,   221,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     221,   221,   221,     3,     3,   138,     3,   138,   166,   199,
       3,   139,     3,     3,   222,   191,   222,   222,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   221,   221,
     221,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   221,   221,   221,     3,     4,     5,     6,     7,     8,
      30,   118,   118,   118,   117,   138,   169,   117,    17,    18,
       5,     4,   221,     5,     5,   136,    25,     3,     4,     5,
       6,     7,     8,   188,     3,     3,   138,     3,     3,    48,
     138,    17,    18,   124,   221,    20,   116,   222,   222,    25,
       3,   100,   140,    99,     3,    54,   221,   118,   221,    58,
     118,     3,    61,    62,    59,     3,     4,     5,     6,     7,
       8,   222,   222,   221,   221,   221,   221,   221,    54,    17,
      18,     3,    58,    82,   138,    61,    62,    25,     3,     4,
       5,     6,     7,     8,     3,     3,   221,   118,     3,   221,
     118,   188,    17,    18,   188,     3,    82,   118,     3,     3,
      25,   221,   221,    48,   222,   105,    54,   117,    20,     3,
      58,   165,     5,    61,    62,   222,     3,     4,     5,     6,
       7,     8,     4,     4,     3,     3,   222,   136,   221,    54,
      17,    18,   222,    58,    82,   222,    61,    62,    25,   222,
     222,     3,   221,   221,   221,   221,   221,   221,     3,     3,
     136,   188,   188,     3,     3,   221,   221,    82,   182,   221,
      20,     3,     3,   221,   221,     3,   221,    54,   221,     3,
     222,    58,   223,   222,    61,    62,     4,   222,   222,   222,
     221,   223,   221,   221,   188,   118,   221,   118,   136,   221,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     221,   136,   221,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,    20,    18,   221,     3,     3,   221,   221,
     221,     3,     3,    48,   150,     3,   223,    99,   189,   136,
     147,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,     3,     3,   221,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   222,     5,   221,   136,   221,   147,
     221,   221,    41,     3,   221,     4,   118,   118,   114,     3,
       3,     3,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,     3,   221,   221,    10,    11,    12,    13,    14,
      15,    16,     5,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   221,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,     5,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    40,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   221,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   221,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   221,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   158,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     158,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   221,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   147,     3,     3,   223,    11,
      12,    13,    14,    15,    16,   221,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   223,
     221,    99,   118,   222,   125,   222,   222,   125,   223,     3,
       3,     3,   222,    10,    11,    12,    13,    14,    15,    16,
     223,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   223,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   223,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   223,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   223,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   222,    12,
      13,    14,    15,    16,   222,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   222,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   222,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,     5,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,     5,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   221,   221,   156,   222,   222,   222,     3,     3,
     155,   221,     5,     3,   107,    68,   119,   191,   174,    10,
      11,    12,    13,    14,    15,    16,   222,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   222,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   222,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   222,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     138,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   138,   134,    13,    14,    15,    16,
     222,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   222,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   222,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   222,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   134,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     5,     5,
      60,   222,   480,   192,   793,   239,   507,   245,   638,    74,
     451,   311,    48,   181,   464,    10,    11,    12,    13,    14,
      15,    16,   222,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   222,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   222,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   222,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   878,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     852,  1080,    13,    14,    15,    16,   222,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   222,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   222,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   222,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     675,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   687,   428,    94,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    -1,   222,    -1,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,    -1,    -1,   101,   102,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     222,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   222,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,
      43,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,   196,   197,
      -1,    46,    47,   222,    49,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,    63,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,   136,    -1,   120,    -1,    -1,    -1,   142,
     177,    -1,   127,    -1,    -1,   130,   131,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     165,   184,   167,   168,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,    -1,    -1,    -1,   180,   181,    -1,    -1,    -1,
     185,    -1,    -1,    -1,    -1,   190,    -1,   192,    -1,    -1,
      -1,   196,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    96,     3,
      -1,    -1,    -1,    38,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    90,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    40,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    81,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    10,    11,    12,    13,    14,    15,    16,    39,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
      39,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    35,    55,    76,    77,   113,   146,   152,   165,
     166,   179,   182,   187,   225,   234,   235,   268,   272,   273,
     276,   277,   278,   279,   280,   281,   291,   292,   295,   297,
     298,   299,   321,   176,   176,    67,    71,   111,   154,   170,
     171,   184,   303,   269,   111,   176,   283,   176,   283,     8,
     154,   322,   323,   249,   176,   283,   293,     3,    67,     0,
     219,     3,     3,   112,   296,     3,     3,    66,   112,   296,
     170,   111,   176,     3,    96,   110,   121,   143,   270,     3,
       3,   112,    72,   103,   110,   114,   121,   284,     3,   284,
       9,    20,     3,    82,   223,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    34,    54,    58,    61,    62,
      75,    79,   103,   136,   153,   160,   161,   163,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   221,   226,
     250,   251,     3,   110,   121,     3,   221,   253,   254,   255,
     257,   267,     3,   225,    33,    70,    77,    87,   148,   189,
     220,   199,     3,    40,   138,     3,   112,   199,     3,     3,
      66,   112,   296,   220,   271,     3,   270,    96,   223,   199,
       3,     3,   226,   226,   323,   220,   221,     9,   226,   226,
     226,   194,   226,   233,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   226,     3,    10,    11,    12,    13,
      14,    15,    16,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    40,   252,    96,   223,
     220,   252,   235,   253,   165,   223,    57,   109,   122,   133,
     151,   163,   258,   260,    40,   256,    53,    65,    53,    53,
      53,    53,    53,     3,    46,    47,    49,    51,    52,    63,
      83,    84,    85,    86,    89,    93,   108,   115,   120,   127,
     130,   131,   132,   145,   164,   165,   167,   168,   173,   175,
     180,   181,   185,   190,   192,   196,   317,     3,   138,   199,
       3,   138,     3,   112,   199,     3,    26,   193,   236,   186,
     253,     3,     3,   165,   221,   285,   165,   285,     3,   226,
     227,   228,   226,   226,   233,    90,    91,   194,   235,   226,
      50,   123,   178,   226,   231,   226,   226,    26,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   222,
     222,   222,   222,   222,   226,   226,   226,   226,   226,     6,
      18,   136,   221,    13,    14,    16,    19,   226,    34,    36,
     159,   221,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,     3,   253,   251,     3,    94,   110,   187,
     264,   222,   222,     3,   294,   254,   122,   151,   261,   255,
     117,   137,   259,     3,     3,     3,     3,     3,     3,     3,
       3,   221,   313,   313,   313,   313,   313,   313,   221,   313,
     313,   313,    49,   314,   314,   313,   313,   313,   221,   314,
     313,   314,   221,   221,    18,    59,    82,   186,   221,     3,
       3,   138,     3,   138,   199,     3,   110,   152,   220,   221,
     319,   320,   226,   139,   242,   253,   236,   271,     3,   290,
       3,   286,   191,   290,   191,   235,   223,   222,   177,    90,
      91,   226,   226,   222,    96,   223,   222,    96,   226,   223,
     223,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     223,   223,   223,     6,   136,   229,   235,   226,   226,   221,
     226,    39,   221,   221,   221,   235,   236,   252,   118,   118,
     118,    20,   220,   223,   236,   259,   259,   117,   138,   255,
     117,    59,    95,   142,   184,   317,   169,     5,   315,   316,
     315,   315,     4,   318,   315,   315,   315,   316,   316,   315,
     315,   315,   318,   316,   315,   316,     5,     5,   136,   221,
     226,   188,     3,   209,   210,   211,   212,   274,   275,   186,
     221,   138,     3,   186,   221,     3,     3,   138,     3,    53,
      59,    95,    98,   111,   118,   142,   184,   304,   305,   311,
     256,    48,   124,   245,   236,    20,   140,   223,   282,   222,
     223,   221,   287,   282,   287,   282,   227,   226,   226,    90,
     177,   226,   226,   226,    96,   116,   232,   232,   226,   226,
     226,   227,   222,   230,   235,    39,   226,   235,   235,   235,
     222,   100,   237,   264,    99,   265,   265,   265,   226,     3,
       3,   242,   255,   226,   138,   186,   262,   263,   255,   221,
     118,   118,   221,     3,   222,   223,   183,   198,    63,    64,
     222,   223,   222,   222,   222,    59,   226,   221,   221,   221,
     221,   221,   222,   223,   188,   274,     3,   186,   221,   188,
     274,   186,   221,   138,     3,   221,   319,     3,   221,   118,
     111,   118,   221,   221,   118,   221,   222,   223,     3,   235,
       3,   243,   244,   226,    82,   226,   118,     3,     3,    82,
     226,   289,   223,   282,   282,    90,   226,    99,   222,   222,
     223,   222,   226,   226,   222,   222,   222,   223,   222,   222,
     227,   222,   226,   222,   222,   222,    48,   105,   241,   117,
     221,   221,   221,    20,    20,   220,   245,   226,   221,   263,
     226,   221,   221,     3,   310,     5,   165,     4,   316,     4,
     316,   316,   221,   222,   274,     3,     3,     3,     3,     3,
     221,   222,   221,   188,   274,   221,   222,   188,   274,     3,
     186,   221,   304,    59,    95,   142,   184,   226,   221,   221,
     221,     3,   248,   248,   221,   310,   300,   319,   305,   317,
      38,    81,   239,   223,   126,   223,   182,    20,   222,   223,
     288,   226,   226,   222,    73,    74,    78,    80,   101,   102,
     104,   196,   197,   226,   222,   226,   238,   226,   242,     3,
     266,   266,   266,   226,   226,     3,   248,   222,     3,   307,
       3,   306,   222,   223,   222,     4,   226,   222,   222,   222,
     222,   223,   274,   274,   221,   222,   274,   221,   222,   221,
     188,   274,   222,   221,   118,   118,   221,   222,   307,   248,
     248,   222,   223,   222,   306,   222,    37,   138,   155,   312,
     244,   226,   226,   290,    82,   226,    82,   226,   221,   222,
     222,   222,   239,   195,   223,   240,   245,   222,   223,   222,
     222,    20,   222,    18,   222,   223,   222,   223,     3,   222,
       3,   222,   222,   274,   222,   274,   274,   221,   222,   300,
     319,   226,   221,   221,   310,   222,   222,   222,     3,   222,
       5,    20,     3,    48,    18,    37,    40,    42,    43,    53,
      59,    60,    82,   118,   136,   142,   184,   289,   150,   226,
      99,   246,     3,   226,   189,   147,     3,     3,   222,   222,
     222,   222,   274,   222,   307,   306,   222,   147,     5,    76,
     172,   144,   188,   136,   221,   221,   221,    41,     3,   221,
       4,     4,     5,     6,     7,    54,   215,   216,   217,   221,
     118,   118,   222,   239,   157,   182,   114,   247,     3,   222,
     222,   222,     3,     3,     3,   221,   221,     5,   226,     5,
      40,    59,   142,   184,   226,   221,   221,   221,   226,   158,
     158,   248,   221,   147,   220,   221,     3,     3,   222,   223,
     222,   222,   223,   221,   221,   118,   222,   222,   222,   222,
     222,   125,   125,     3,   308,     3,     3,   308,   222,   222,
       5,    44,    45,     5,   226,   226,   222,   223,   220,   221,
     221,   222,   221,   156,   222,   222,   222,   222,   309,     3,
       3,   308,   308,   309,   155,   301,   302,     5,    44,    45,
      18,    68,   128,   138,   221,   222,   222,    18,     3,   222,
     223,    68,   189,   107,    97,   141,   162,    76,   182,   308,
     309,   309,   191,   302,    69,   106,    56,   135,   149,   165,
      56,   135,   149,   165,   222,   119,    82,   136,    82,   136,
     309,   174,     4,   129,   138,   138,   134,   134,     5,     5
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
#line 327 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 333 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 334 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 336 "parser/evoparser.y"
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
#line 354 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 362 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 370 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 376 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 383 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 384 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 385 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 386 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 387 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 388 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 389 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 390 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 391 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 392 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 393 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 394 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 395 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 396 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 397 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 398 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 399 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 401 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 406 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 407 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 408 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 409 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 412 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 413 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 414 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 415 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 416 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 419 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 420 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 423 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 424 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 43:
#line 427 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 431 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 46:
#line 431 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 47:
#line 432 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 48:
#line 432 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 49:
#line 433 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 434 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 435 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 439 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 443 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 444 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 445 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 446 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 447 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 448 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 450 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 451 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 452 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 453 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 454 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 455 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 456 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 457 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 458 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 459 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 460 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 461 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 462 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 463 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 470 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 477 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 484 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 490 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 77:
#line 491 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 78:
#line 492 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 79:
#line 495 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 80:
#line 496 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 81:
#line 499 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 82:
#line 500 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 83:
#line 501 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 84:
#line 502 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 85:
#line 503 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 86:
#line 504 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 87:
#line 505 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 88:
#line 506 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 89:
#line 507 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 90:
#line 511 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 91:
#line 513 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 92:
#line 515 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 93:
#line 517 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 94:
#line 521 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 95:
#line 529 "parser/evoparser.y"
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
#line 539 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 97:
#line 540 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 98:
#line 543 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 99:
#line 544 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 100:
#line 548 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 556 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 564 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 575 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 104:
#line 584 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 105:
#line 589 "parser/evoparser.y"
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
#line 600 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 109:
#line 602 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 110:
#line 605 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 111:
#line 612 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 112:
#line 620 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 621 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 114:
#line 622 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 115:
#line 625 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 626 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 118:
#line 630 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 123:
#line 642 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 124:
#line 649 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 125:
#line 650 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 126:
#line 651 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 127:
#line 652 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 128:
#line 655 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 129:
#line 656 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 130:
#line 657 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 131:
#line 658 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 132:
#line 659 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 134:
#line 663 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 135:
#line 666 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 136:
#line 667 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 137:
#line 670 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 138:
#line 671 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 139:
#line 672 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 140:
#line 673 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 141:
#line 674 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 142:
#line 675 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 143:
#line 676 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 144:
#line 677 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 145:
#line 678 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 146:
#line 681 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 147:
#line 682 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 148:
#line 684 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 149:
#line 692 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 150:
#line 697 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 151:
#line 698 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 152:
#line 699 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 153:
#line 702 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 154:
#line 703 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 157:
#line 712 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 158:
#line 718 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 159:
#line 719 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 160:
#line 720 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 163:
#line 729 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 164:
#line 731 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 165:
#line 733 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 166:
#line 735 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 167:
#line 737 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 168:
#line 740 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 169:
#line 741 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 170:
#line 742 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 171:
#line 745 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 172:
#line 746 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 173:
#line 749 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 174:
#line 750 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 175:
#line 753 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 176:
#line 754 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 177:
#line 755 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 180:
#line 762 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 181:
#line 763 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 182:
#line 768 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 183:
#line 770 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 184:
#line 772 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 186:
#line 776 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 187:
#line 777 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 188:
#line 780 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 189:
#line 781 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 190:
#line 784 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 191:
#line 789 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 192:
#line 797 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 193:
#line 804 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 194:
#line 805 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 195:
#line 806 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 196:
#line 807 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 197:
#line 811 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 198:
#line 814 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 199:
#line 815 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 202:
#line 820 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 203:
#line 825 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 204:
#line 832 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 205:
#line 839 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 206:
#line 849 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 207:
#line 856 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 208:
#line 863 "parser/evoparser.y"
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
#line 873 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 210:
#line 881 "parser/evoparser.y"
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
#line 891 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 212:
#line 899 "parser/evoparser.y"
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
#line 908 "parser/evoparser.y"
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
#line 917 "parser/evoparser.y"
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
#line 927 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 216:
#line 935 "parser/evoparser.y"
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
#line 944 "parser/evoparser.y"
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
#line 953 "parser/evoparser.y"
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
#line 963 "parser/evoparser.y"
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
#line 972 "parser/evoparser.y"
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
#line 984 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 222:
#line 989 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 223:
#line 994 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 224:
#line 1000 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 225:
#line 1007 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 226:
#line 1014 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 227:
#line 1021 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 228:
#line 1031 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 229:
#line 1038 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 230:
#line 1047 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 231:
#line 1054 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 232:
#line 1063 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 233:
#line 1070 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 234:
#line 1079 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 235:
#line 1086 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 236:
#line 1092 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 237:
#line 1102 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 238:
#line 1106 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 239:
#line 1112 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 240:
#line 1118 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 241:
#line 1125 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 242:
#line 1131 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 243:
#line 1138 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 244:
#line 1144 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 245:
#line 1150 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 246:
#line 1156 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 247:
#line 1162 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 248:
#line 1168 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 249:
#line 1174 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        AlterTableAddColumn((yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(6) - (7)].strval));
    ;}
    break;

  case 250:
#line 1182 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 251:
#line 1189 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 253:
#line 1197 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 254:
#line 1200 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 255:
#line 1201 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 256:
#line 1202 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 257:
#line 1203 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 258:
#line 1204 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 262:
#line 1211 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 263:
#line 1215 "parser/evoparser.y"
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
#line 1225 "parser/evoparser.y"
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
#line 1237 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 266:
#line 1238 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 267:
#line 1238 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 268:
#line 1241 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 269:
#line 1242 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 270:
#line 1243 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 271:
#line 1244 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 272:
#line 1248 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 273:
#line 1251 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 274:
#line 1252 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 275:
#line 1253 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 276:
#line 1254 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 277:
#line 1260 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 278:
#line 1266 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 279:
#line 1271 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 280:
#line 1276 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 281:
#line 1281 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 282:
#line 1288 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 283:
#line 1293 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 284:
#line 1294 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 285:
#line 1295 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 286:
#line 1300 "parser/evoparser.y"
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
#line 1311 "parser/evoparser.y"
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
#line 1322 "parser/evoparser.y"
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
#line 1333 "parser/evoparser.y"
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
#line 1346 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 291:
#line 1350 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 292:
#line 1351 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 293:
#line 1354 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 294:
#line 1355 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 295:
#line 1359 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 296:
#line 1364 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 297:
#line 1366 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 298:
#line 1368 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 299:
#line 1370 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 300:
#line 1372 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 301:
#line 1376 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 302:
#line 1380 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 303:
#line 1381 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 304:
#line 1386 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 305:
#line 1396 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 306:
#line 1405 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 308:
#line 1409 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 309:
#line 1410 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 310:
#line 1411 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 311:
#line 1412 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 312:
#line 1414 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 313:
#line 1416 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 316:
#line 1424 "parser/evoparser.y"
    {
        char *sv = (yyvsp[(6) - (9)].strval);
        int slen = (int)strlen(sv);
        char stripped[256];
        if (slen >= 2 && (sv[0] == '\'' || sv[0] == '"')) {
            strncpy(stripped, sv + 1, slen - 2);
            stripped[slen - 2] = '\0';
        } else {
            strncpy(stripped, sv, sizeof(stripped) - 1);
            stripped[sizeof(stripped) - 1] = '\0';
        }
        AddShardRangeDef((yyvsp[(2) - (9)].strval), stripped, (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval)); free(sv);
    ;}
    break;

  case 317:
#line 1439 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 318:
#line 1447 "parser/evoparser.y"
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

  case 319:
#line 1461 "parser/evoparser.y"
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

  case 320:
#line 1475 "parser/evoparser.y"
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

  case 321:
#line 1489 "parser/evoparser.y"
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

  case 322:
#line 1501 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 323:
#line 1502 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 324:
#line 1503 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 325:
#line 1506 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 326:
#line 1507 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 327:
#line 1510 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 328:
#line 1511 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 329:
#line 1512 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 330:
#line 1513 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 331:
#line 1514 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 332:
#line 1515 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 333:
#line 1516 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 334:
#line 1517 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 335:
#line 1519 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 336:
#line 1521 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 337:
#line 1523 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 338:
#line 1525 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 339:
#line 1527 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 340:
#line 1529 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 341:
#line 1532 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 342:
#line 1533 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 343:
#line 1536 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 344:
#line 1537 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 345:
#line 1540 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 346:
#line 1541 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 348:
#line 1545 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 349:
#line 1546 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 350:
#line 1547 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 351:
#line 1548 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 352:
#line 1549 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 353:
#line 1550 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 354:
#line 1551 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 355:
#line 1552 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 356:
#line 1553 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 357:
#line 1554 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 358:
#line 1555 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 359:
#line 1556 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 360:
#line 1557 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 361:
#line 1558 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 362:
#line 1559 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 363:
#line 1560 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 364:
#line 1561 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 365:
#line 1564 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 366:
#line 1565 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 367:
#line 1568 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 368:
#line 1570 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 369:
#line 1578 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 370:
#line 1579 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 372:
#line 1581 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 373:
#line 1582 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 374:
#line 1583 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 375:
#line 1584 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 376:
#line 1585 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 377:
#line 1586 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 378:
#line 1587 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 379:
#line 1588 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 380:
#line 1589 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 381:
#line 1596 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 382:
#line 1597 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 383:
#line 1598 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 384:
#line 1599 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 385:
#line 1600 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 386:
#line 1601 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 387:
#line 1602 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 388:
#line 1603 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 389:
#line 1604 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 390:
#line 1605 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 391:
#line 1606 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 392:
#line 1607 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 393:
#line 1608 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 394:
#line 1609 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 395:
#line 1610 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 396:
#line 1611 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 397:
#line 1612 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 398:
#line 1613 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 399:
#line 1614 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 400:
#line 1615 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 401:
#line 1616 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 402:
#line 1619 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 403:
#line 1620 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 404:
#line 1621 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 405:
#line 1624 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 406:
#line 1625 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 407:
#line 1628 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 408:
#line 1629 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 409:
#line 1630 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 411:
#line 1634 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 412:
#line 1635 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 413:
#line 1639 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 414:
#line 1640 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 415:
#line 1641 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 416:
#line 1642 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 417:
#line 1643 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 418:
#line 1644 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 419:
#line 1645 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 420:
#line 1646 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 421:
#line 1647 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 422:
#line 1648 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 423:
#line 1649 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 424:
#line 1650 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 425:
#line 1651 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 426:
#line 1652 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 427:
#line 1653 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 428:
#line 1654 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 429:
#line 1655 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 430:
#line 1656 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 431:
#line 1657 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 432:
#line 1658 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 433:
#line 1659 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 434:
#line 1660 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 435:
#line 1661 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 436:
#line 1662 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 437:
#line 1663 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 438:
#line 1664 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 439:
#line 1665 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 440:
#line 1666 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 441:
#line 1667 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 442:
#line 1668 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 443:
#line 1669 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 444:
#line 1670 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 445:
#line 1673 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 446:
#line 1674 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 447:
#line 1678 "parser/evoparser.y"
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

  case 448:
#line 1690 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 449:
#line 1691 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 450:
#line 1692 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 451:
#line 1696 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 452:
#line 1699 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 453:
#line 1700 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 457:
#line 1704 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 458:
#line 1705 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5784 "parser/evoparser.tab.c"
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


#line 1708 "parser/evoparser.y"

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
