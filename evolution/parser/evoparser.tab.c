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
     CONTINUE = 289,
     RESTART = 290,
     GENERATED = 291,
     STORED = 292,
     VIRTUAL = 293,
     BLOB = 294,
     BOOLEAN = 295,
     BY = 296,
     BINARY = 297,
     BOTH = 298,
     BIGINT = 299,
     BIT = 300,
     CONSTRAINT = 301,
     CURRENT_TIMESTAMP = 302,
     CREATE = 303,
     CASCADE = 304,
     CROSS = 305,
     CASE = 306,
     CHECK = 307,
     COMMENT = 308,
     CURRENT_DATE = 309,
     CURRENT_TIME = 310,
     CHAR = 311,
     COLLATE = 312,
     COLUMN = 313,
     CONCURRENTLY = 314,
     DATABASE = 315,
     DEFERRABLE = 316,
     DEFERRED = 317,
     DISABLE = 318,
     DOMAIN = 319,
     DELAYED = 320,
     DAY_HOUR = 321,
     DAY_MICROSECOND = 322,
     DISTINCT = 323,
     DELETE = 324,
     DROP = 325,
     DAY_MINUTE = 326,
     DISTINCTROW = 327,
     DAY_SECOND = 328,
     DESC = 329,
     DEFAULT = 330,
     DOUBLE = 331,
     DATETIME = 332,
     DECIMAL = 333,
     DATE = 334,
     ENABLE = 335,
     ESCAPED = 336,
     ENUM = 337,
     END = 338,
     ELSE = 339,
     EXPLAIN = 340,
     FLOAT = 341,
     FORCE = 342,
     FOREIGN = 343,
     FROM = 344,
     FULL = 345,
     FULLTEXT = 346,
     FOR = 347,
     GROUP = 348,
     HOUR_MINUTE = 349,
     HOUR_MICROSECOND = 350,
     HIGH_PRIORITY = 351,
     HOUR_SECOND = 352,
     HAVING = 353,
     IMMEDIATE = 354,
     INITIALLY = 355,
     INTEGER = 356,
     INNER = 357,
     IGNORE = 358,
     INDEX = 359,
     IF = 360,
     INSERT = 361,
     INTO = 362,
     INT = 363,
     INTERVAL = 364,
     JOIN = 365,
     KEY = 366,
     LESS = 367,
     LONGTEXT = 368,
     LOW_PRIORITY = 369,
     LEFT = 370,
     LEADING = 371,
     LIMIT = 372,
     LOCKED = 373,
     OFFSET = 374,
     LONGBLOB = 375,
     MATCH = 376,
     MAXVALUE = 377,
     MEDIUMTEXT = 378,
     MEDIUMBLOB = 379,
     MEDIUMINT = 380,
     NATURAL = 381,
     NODE = 382,
     NO_ACTION = 383,
     NULLX = 384,
     OUTER = 385,
     ON = 386,
     ORDER = 387,
     ONDUPLICATE = 388,
     PARTIAL = 389,
     PRIMARY = 390,
     QUICK = 391,
     RANGE = 392,
     REAL = 393,
     RECLAIM = 394,
     REFERENCES = 395,
     RENAME = 396,
     RESTRICT = 397,
     ROLLUP = 398,
     RIGHT = 399,
     REPLACE = 400,
     SQL_SMALL_RESULT = 401,
     SCHEMA = 402,
     SHARD = 403,
     SHARDS = 404,
     SHARE = 405,
     SKIP = 406,
     SOME = 407,
     SQL_CALC_FOUND_ROWS = 408,
     SQL_BIG_RESULT = 409,
     SIMPLE = 410,
     STRAIGHT_JOIN = 411,
     SMALLINT = 412,
     SET = 413,
     SELECT = 414,
     TINYTEXT = 415,
     TINYINT = 416,
     TO = 417,
     TEMPORARY = 418,
     GLOBAL = 419,
     PRESERVE = 420,
     TEXT = 421,
     THAN = 422,
     TIMESTAMP = 423,
     TABLE = 424,
     THEN = 425,
     TRAILING = 426,
     TRUNCATE = 427,
     TINYBLOB = 428,
     TIME = 429,
     UPDATE = 430,
     UNSIGNED = 431,
     UNIQUE = 432,
     UUID = 433,
     USING = 434,
     USE = 435,
     HASH = 436,
     VALIDATE = 437,
     VARCHAR = 438,
     VALUES = 439,
     VARBINARY = 440,
     WHERE = 441,
     WHEN = 442,
     WITH = 443,
     YEAR = 444,
     YEAR_MONTH = 445,
     ZEROFILL = 446,
     EXISTS = 447,
     FSUBSTRING = 448,
     FTRIM = 449,
     FDATE_ADD = 450,
     FDATE_SUB = 451,
     FCOUNT = 452,
     FSUM = 453,
     FAVG = 454,
     FMIN = 455,
     FMAX = 456,
     FUPPER = 457,
     FLOWER = 458,
     FLENGTH = 459,
     FCONCAT = 460,
     FREPLACE = 461,
     FCOALESCE = 462,
     FGEN_RANDOM_UUID = 463,
     FGEN_RANDOM_UUID_V7 = 464,
     FSNOWFLAKE_ID = 465,
     FLAST_INSERT_ID = 466
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
#define CONTINUE 289
#define RESTART 290
#define GENERATED 291
#define STORED 292
#define VIRTUAL 293
#define BLOB 294
#define BOOLEAN 295
#define BY 296
#define BINARY 297
#define BOTH 298
#define BIGINT 299
#define BIT 300
#define CONSTRAINT 301
#define CURRENT_TIMESTAMP 302
#define CREATE 303
#define CASCADE 304
#define CROSS 305
#define CASE 306
#define CHECK 307
#define COMMENT 308
#define CURRENT_DATE 309
#define CURRENT_TIME 310
#define CHAR 311
#define COLLATE 312
#define COLUMN 313
#define CONCURRENTLY 314
#define DATABASE 315
#define DEFERRABLE 316
#define DEFERRED 317
#define DISABLE 318
#define DOMAIN 319
#define DELAYED 320
#define DAY_HOUR 321
#define DAY_MICROSECOND 322
#define DISTINCT 323
#define DELETE 324
#define DROP 325
#define DAY_MINUTE 326
#define DISTINCTROW 327
#define DAY_SECOND 328
#define DESC 329
#define DEFAULT 330
#define DOUBLE 331
#define DATETIME 332
#define DECIMAL 333
#define DATE 334
#define ENABLE 335
#define ESCAPED 336
#define ENUM 337
#define END 338
#define ELSE 339
#define EXPLAIN 340
#define FLOAT 341
#define FORCE 342
#define FOREIGN 343
#define FROM 344
#define FULL 345
#define FULLTEXT 346
#define FOR 347
#define GROUP 348
#define HOUR_MINUTE 349
#define HOUR_MICROSECOND 350
#define HIGH_PRIORITY 351
#define HOUR_SECOND 352
#define HAVING 353
#define IMMEDIATE 354
#define INITIALLY 355
#define INTEGER 356
#define INNER 357
#define IGNORE 358
#define INDEX 359
#define IF 360
#define INSERT 361
#define INTO 362
#define INT 363
#define INTERVAL 364
#define JOIN 365
#define KEY 366
#define LESS 367
#define LONGTEXT 368
#define LOW_PRIORITY 369
#define LEFT 370
#define LEADING 371
#define LIMIT 372
#define LOCKED 373
#define OFFSET 374
#define LONGBLOB 375
#define MATCH 376
#define MAXVALUE 377
#define MEDIUMTEXT 378
#define MEDIUMBLOB 379
#define MEDIUMINT 380
#define NATURAL 381
#define NODE 382
#define NO_ACTION 383
#define NULLX 384
#define OUTER 385
#define ON 386
#define ORDER 387
#define ONDUPLICATE 388
#define PARTIAL 389
#define PRIMARY 390
#define QUICK 391
#define RANGE 392
#define REAL 393
#define RECLAIM 394
#define REFERENCES 395
#define RENAME 396
#define RESTRICT 397
#define ROLLUP 398
#define RIGHT 399
#define REPLACE 400
#define SQL_SMALL_RESULT 401
#define SCHEMA 402
#define SHARD 403
#define SHARDS 404
#define SHARE 405
#define SKIP 406
#define SOME 407
#define SQL_CALC_FOUND_ROWS 408
#define SQL_BIG_RESULT 409
#define SIMPLE 410
#define STRAIGHT_JOIN 411
#define SMALLINT 412
#define SET 413
#define SELECT 414
#define TINYTEXT 415
#define TINYINT 416
#define TO 417
#define TEMPORARY 418
#define GLOBAL 419
#define PRESERVE 420
#define TEXT 421
#define THAN 422
#define TIMESTAMP 423
#define TABLE 424
#define THEN 425
#define TRAILING 426
#define TRUNCATE 427
#define TINYBLOB 428
#define TIME 429
#define UPDATE 430
#define UNSIGNED 431
#define UNIQUE 432
#define UUID 433
#define USING 434
#define USE 435
#define HASH 436
#define VALIDATE 437
#define VARCHAR 438
#define VALUES 439
#define VARBINARY 440
#define WHERE 441
#define WHEN 442
#define WITH 443
#define YEAR 444
#define YEAR_MONTH 445
#define ZEROFILL 446
#define EXISTS 447
#define FSUBSTRING 448
#define FTRIM 449
#define FDATE_ADD 450
#define FDATE_SUB 451
#define FCOUNT 452
#define FSUM 453
#define FAVG 454
#define FMIN 455
#define FMAX 456
#define FUPPER 457
#define FLOWER 458
#define FLENGTH 459
#define FCONCAT 460
#define FREPLACE 461
#define FCOALESCE 462
#define FGEN_RANDOM_UUID 463
#define FGEN_RANDOM_UUID_V7 464
#define FSNOWFLAKE_ID 465
#define FLAST_INSERT_ID 466




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
#line 548 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 561 "parser/evoparser.tab.c"

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
#define YYLAST   2880

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  226
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  466
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1132

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   466

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     223,   224,    26,    24,   225,    25,   222,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   221,
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
     214,   215,   216,   217,   218,   219,   220
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
     990,   993,   997,  1003,  1005,  1009,  1010,  1013,  1016,  1020,
    1024,  1026,  1030,  1032,  1036,  1042,  1044,  1055,  1066,  1084,
    1097,  1117,  1129,  1136,  1145,  1152,  1159,  1166,  1174,  1176,
    1185,  1186,  1191,  1192,  1195,  1198,  1201,  1204,  1206,  1207,
    1208,  1212,  1214,  1218,  1222,  1223,  1230,  1232,  1234,  1238,
    1242,  1250,  1254,  1258,  1264,  1270,  1272,  1281,  1289,  1297,
    1299,  1308,  1309,  1312,  1315,  1319,  1325,  1331,  1339,  1341,
    1346,  1351,  1352,  1355,  1357,  1363,  1371,  1379,  1389,  1401,
    1403,  1406,  1410,  1412,  1422,  1434,  1435,  1440,  1444,  1450,
    1456,  1466,  1477,  1479,  1483,  1493,  1503,  1513,  1520,  1532,
    1541,  1542,  1544,  1547,  1549,  1553,  1559,  1567,  1572,  1577,
    1583,  1589,  1594,  1601,  1613,  1627,  1641,  1657,  1662,  1669,
    1671,  1675,  1677,  1681,  1683,  1687,  1688,  1693,  1699,  1704,
    1710,  1715,  1721,  1726,  1732,  1737,  1742,  1746,  1750,  1754,
    1757,  1761,  1766,  1771,  1773,  1777,  1778,  1783,  1784,  1788,
    1791,  1795,  1799,  1803,  1807,  1813,  1819,  1825,  1829,  1835,
    1838,  1846,  1852,  1860,  1866,  1869,  1873,  1876,  1880,  1883,
    1887,  1893,  1898,  1904,  1912,  1921,  1930,  1938,  1945,  1952,
    1958,  1959,  1963,  1969,  1970,  1972,  1973,  1976,  1979,  1980,
    1985,  1989,  1992,  1996,  2000,  2004,  2008,  2012,  2016,  2020,
    2024,  2028,  2032,  2034,  2036,  2038,  2040,  2042,  2046,  2052,
    2055,  2060,  2062,  2064,  2066,  2068,  2072,  2076,  2080,  2084,
    2090,  2096,  2098,  2100,  2102,  2106,  2110,  2111,  2113,  2115,
    2117,  2121,  2125,  2128,  2130,  2134,  2138
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     227,     0,    -1,   236,   221,    -1,   236,   221,   227,    -1,
       3,    -1,     3,   222,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   138,    -1,   228,    24,
     228,    -1,   228,    25,   228,    -1,   228,    26,   228,    -1,
     228,    27,   228,    -1,   228,    28,   228,    -1,   228,    29,
     228,    -1,    25,   228,    -1,   223,   228,   224,    -1,   228,
      12,   228,    -1,   228,    10,   228,    -1,   228,    11,   228,
      -1,   228,    21,   228,    -1,   228,    22,   228,    -1,   228,
      30,   228,    -1,   228,    23,   228,    -1,    18,   228,    -1,
      17,   228,    -1,   228,    20,   228,    -1,   228,    20,   223,
     237,   224,    -1,   228,    20,    36,   223,   237,   224,    -1,
     228,    20,   161,   223,   237,   224,    -1,   228,    20,    34,
     223,   237,   224,    -1,   228,    15,   138,    -1,   228,    15,
      18,   138,    -1,   228,    15,     6,    -1,   228,    15,    18,
       6,    -1,     8,     9,   228,    -1,   228,    19,   228,    39,
     228,    -1,   228,    18,    19,   228,    39,   228,    -1,   228,
      -1,   228,   225,   229,    -1,    -1,   229,    -1,    -1,   228,
      16,   223,   231,   229,   224,    -1,    -1,   228,    18,    16,
     223,   232,   229,   224,    -1,   228,    16,   223,   237,   224,
      -1,   228,    18,    16,   223,   237,   224,    -1,   201,   223,
     237,   224,    -1,     3,   223,   230,   224,    -1,   206,   223,
      26,   224,    -1,   206,   223,   228,   224,    -1,   207,   223,
     228,   224,    -1,   208,   223,   228,   224,    -1,   209,   223,
     228,   224,    -1,   210,   223,   228,   224,    -1,   202,   223,
     228,   225,   228,   225,   228,   224,    -1,   202,   223,   228,
     225,   228,   224,    -1,   202,   223,   228,    98,   228,   224,
      -1,   202,   223,   228,    98,   228,   101,   228,   224,    -1,
     203,   223,   228,   224,    -1,   203,   223,   233,   228,    98,
     228,   224,    -1,   203,   223,   233,    98,   228,   224,    -1,
     211,   223,   228,   224,    -1,   212,   223,   228,   224,    -1,
     213,   223,   228,   224,    -1,   214,   223,   228,   225,   228,
     224,    -1,   215,   223,   228,   225,   228,   225,   228,   224,
      -1,   216,   223,   228,   225,   228,   224,    -1,   217,   223,
     224,    -1,   218,   223,   224,    -1,   219,   223,   224,    -1,
     220,   223,   224,    -1,   125,    -1,   180,    -1,    52,    -1,
     204,   223,   228,   225,   234,   224,    -1,   205,   223,   228,
     225,   234,   224,    -1,   118,   228,    75,    -1,   118,   228,
      76,    -1,   118,   228,    80,    -1,   118,   228,    82,    -1,
     118,   228,   199,    -1,   118,   228,   198,    -1,   118,   228,
     104,    -1,   118,   228,   103,    -1,   118,   228,   106,    -1,
      60,   228,   235,    92,    -1,    60,   228,   235,    93,   228,
      92,    -1,    60,   235,    92,    -1,    60,   235,    93,   228,
      92,    -1,   196,   228,   179,   228,    -1,   235,   196,   228,
     179,   228,    -1,   228,    14,   228,    -1,   228,    18,    14,
     228,    -1,   228,    13,   228,    -1,   228,    18,    13,   228,
      -1,    56,    -1,    63,    -1,    64,    -1,   237,    -1,   168,
     251,   252,    -1,   168,   251,   252,    98,   255,   238,   239,
     243,   244,   247,   248,   249,    -1,    -1,   195,   228,    -1,
      -1,   102,    50,   240,   242,    -1,   228,   241,    -1,   240,
     225,   228,   241,    -1,    -1,    38,    -1,    83,    -1,    -1,
     197,   152,    -1,    -1,   107,   228,    -1,    -1,   141,    50,
     245,    -1,   246,    -1,   245,   225,   246,    -1,     3,   241,
      -1,    -1,   126,   228,    -1,   126,   228,   225,   228,    -1,
     126,   228,   128,   228,    -1,    -1,   101,   184,    -1,   101,
     159,    -1,   101,   184,   160,   127,    -1,   101,   159,   160,
     127,    -1,    -1,   116,   250,    -1,     3,    -1,   250,   225,
       3,    -1,    -1,   251,    34,    -1,   251,    77,    -1,   251,
      81,    -1,   251,   105,    -1,   251,   165,    -1,   251,   155,
      -1,   251,   163,    -1,   251,   162,    -1,   253,    -1,   252,
     225,   253,    -1,    26,    -1,   228,   254,    -1,    40,     3,
      -1,     3,    -1,    -1,   256,    -1,   255,   225,   256,    -1,
     257,    -1,   259,    -1,     3,   254,   266,    -1,     3,   222,
       3,   254,   266,    -1,   269,   258,     3,    -1,   223,   255,
     224,    -1,    40,    -1,    -1,   256,   260,   119,   257,   264,
      -1,   256,   165,   257,    -1,   256,   165,   257,   140,   228,
      -1,   256,   262,   261,   119,   257,   265,    -1,   256,   135,
     263,   119,   257,    -1,    -1,   111,    -1,    59,    -1,    -1,
     139,    -1,   124,    -1,   153,    -1,   124,   261,    -1,   153,
     261,    -1,    -1,    -1,   265,    -1,   140,   228,    -1,   188,
     223,   250,   224,    -1,   189,   120,   267,   223,   268,   224,
      -1,   112,   120,   267,   223,   268,   224,    -1,    96,   120,
     267,   223,   268,   224,    -1,    -1,   101,   119,    -1,    -1,
       3,    -1,   268,   225,     3,    -1,   223,   237,   224,    -1,
     270,    -1,    78,   271,    98,     3,   238,   244,   247,    -1,
     271,   123,    -1,   271,   145,    -1,   271,   112,    -1,    -1,
      78,   271,   272,    98,   255,   238,    -1,     3,   273,    -1,
     272,   225,     3,   273,    -1,    -1,   222,    26,    -1,    78,
     271,    98,   272,   188,   255,   238,    -1,   274,    -1,    79,
     178,     3,    -1,    79,   178,   114,   201,     3,    -1,   275,
      -1,    57,   113,     3,   140,     3,   223,   276,   224,    -1,
      57,   113,   114,   201,     3,   140,     3,   223,   276,   224,
      -1,    57,   186,   113,     3,   140,     3,   223,   276,   224,
      -1,    57,   186,   113,   114,   201,     3,   140,     3,   223,
     276,   224,    -1,    57,   113,     3,   140,     3,   188,   190,
     223,   276,   224,    -1,    57,   113,   114,   201,     3,   140,
       3,   188,   190,   223,   276,   224,    -1,    57,   186,   113,
       3,   140,     3,   188,   190,   223,   276,   224,    -1,    57,
     186,   113,   114,   201,     3,   140,     3,   188,   190,   223,
     276,   224,    -1,    57,   113,    68,     3,   140,     3,   223,
     276,   224,    -1,    57,   113,    68,   114,   201,     3,   140,
       3,   223,   276,   224,    -1,    57,   186,   113,    68,     3,
     140,     3,   223,   276,   224,    -1,    57,   186,   113,    68,
     114,   201,     3,   140,     3,   223,   276,   224,    -1,    57,
     113,    68,     3,   140,     3,   188,   190,   223,   276,   224,
      -1,    57,   186,   113,    68,     3,   140,     3,   188,   190,
     223,   276,   224,    -1,     3,    -1,   276,   225,     3,    -1,
     277,    -1,   211,   223,     3,   224,    -1,   212,   223,     3,
     224,    -1,   213,   223,     3,   224,    -1,   214,   223,     3,
     225,     3,   224,    -1,   278,    -1,    79,   113,     3,    -1,
     279,   281,    -1,   181,   178,     3,    -1,   181,   178,     3,
     225,   280,    -1,     3,    -1,   280,   225,     3,    -1,    -1,
     281,    58,    -1,   281,   151,    -1,   281,    44,    42,    -1,
     281,    43,    42,    -1,   282,    -1,   148,   178,     3,    -1,
     283,    -1,    35,   178,     3,    -1,    35,   178,     3,   222,
       3,    -1,   284,    -1,    32,   178,     3,    33,    55,     3,
      61,   223,   228,   224,    -1,    32,   178,     3,    33,    55,
       3,   186,   223,   314,   224,    -1,    32,   178,     3,    33,
      55,     3,    97,   120,   223,   311,   224,   149,     3,   223,
     312,   224,   313,    -1,    32,   178,     3,    33,    55,     3,
      61,   223,   228,   224,    18,   191,    -1,    32,   178,     3,
      33,    55,     3,    97,   120,   223,   311,   224,   149,     3,
     223,   312,   224,   313,    18,   191,    -1,    32,   178,     3,
      33,    55,     3,   144,   120,   223,   310,   224,    -1,    32,
     178,     3,    79,    55,     3,    -1,    32,   178,     3,   150,
      55,     3,   171,     3,    -1,    32,   178,     3,    89,    55,
       3,    -1,    32,   178,     3,    72,    55,     3,    -1,    32,
     178,     3,   191,    55,     3,    -1,    32,   178,     3,    33,
      67,     3,   321,    -1,   285,    -1,   115,   287,   288,     3,
     289,   193,   291,   286,    -1,    -1,   142,   120,   184,   294,
      -1,    -1,   287,   123,    -1,   287,    74,    -1,   287,   105,
      -1,   287,   112,    -1,   116,    -1,    -1,    -1,   223,   290,
     224,    -1,     3,    -1,   290,   225,     3,    -1,   223,   293,
     224,    -1,    -1,   291,   225,   292,   223,   293,   224,    -1,
     228,    -1,    84,    -1,   293,   225,   228,    -1,   293,   225,
      84,    -1,   115,   287,   288,     3,   167,   294,   286,    -1,
       3,    20,   228,    -1,     3,    20,    84,    -1,   294,   225,
       3,    20,   228,    -1,   294,   225,     3,    20,    84,    -1,
     295,    -1,   154,   287,   288,     3,   289,   193,   291,   286,
      -1,   154,   287,   288,     3,   167,   294,   286,    -1,   154,
     287,   288,     3,   289,   237,   286,    -1,   296,    -1,   184,
     297,   255,   167,   298,   238,   244,   247,    -1,    -1,   287,
     123,    -1,   287,   112,    -1,     3,    20,   228,    -1,     3,
     222,     3,    20,   228,    -1,   298,   225,     3,    20,   228,
      -1,   298,   225,     3,   222,     3,    20,   228,    -1,   299,
      -1,    57,    69,   300,     3,    -1,    57,   156,   300,     3,
      -1,    -1,   114,   201,    -1,   301,    -1,    57,    73,     3,
      40,   321,    -1,    57,    73,     3,    40,   321,    84,   228,
      -1,    57,    73,     3,    40,   321,    18,   138,    -1,    57,
      73,     3,    40,   321,    61,   223,   228,   224,    -1,    57,
      73,     3,    40,   321,    18,   138,    61,   223,   228,   224,
      -1,   302,    -1,   189,     3,    -1,   189,    69,     3,    -1,
     303,    -1,    57,   307,   178,   300,     3,   223,   308,   224,
     304,    -1,    57,   307,   178,   300,     3,   222,     3,   223,
     308,   224,   304,    -1,    -1,   304,    37,    20,     5,    -1,
     304,    37,     5,    -1,   304,   140,     3,    78,     3,    -1,
     304,   140,     3,   174,     3,    -1,   304,   157,    50,   190,
     223,     3,   224,   158,     5,    -1,   304,   157,    50,   146,
     223,     3,   224,   223,   305,   224,    -1,   306,    -1,   305,
     225,   306,    -1,   157,     3,   193,   121,   176,     4,   140,
     136,     5,    -1,   157,     3,   193,   121,   176,   131,   140,
     136,     5,    -1,    57,   307,   178,   300,     3,   223,   308,
     224,   323,    -1,    57,   307,   178,   300,     3,   323,    -1,
      57,   307,   178,   300,     3,   222,     3,   223,   308,   224,
     323,    -1,    57,   307,   178,   300,     3,   222,     3,   323,
      -1,    -1,   172,    -1,   173,   172,    -1,   309,    -1,   308,
     225,   309,    -1,   144,   120,   223,   310,   224,    -1,    55,
       3,   144,   120,   223,   310,   224,    -1,   120,   223,   250,
     224,    -1,   113,   223,   250,   224,    -1,   100,   113,   223,
     250,   224,    -1,   100,   120,   223,   250,   224,    -1,    61,
     223,   228,   224,    -1,    55,     3,    61,   223,   228,   224,
      -1,    97,   120,   223,   311,   224,   149,     3,   223,   312,
     224,   313,    -1,    97,   120,   223,   311,   224,   149,     3,
     222,     3,   223,   312,   224,   313,    -1,    55,     3,    97,
     120,   223,   311,   224,   149,     3,   223,   312,   224,   313,
      -1,    55,     3,    97,   120,   223,   311,   224,   149,     3,
     222,     3,   223,   312,   224,   313,    -1,   186,   223,   314,
     224,    -1,    55,     3,   186,   223,   314,   224,    -1,     3,
      -1,   310,   225,     3,    -1,     3,    -1,   311,   225,     3,
      -1,     3,    -1,   312,   225,     3,    -1,    -1,   313,   140,
      78,    58,    -1,   313,   140,    78,   167,   138,    -1,   313,
     140,    78,   151,    -1,   313,   140,    78,   167,    84,    -1,
     313,   140,   184,    58,    -1,   313,   140,   184,   167,   138,
      -1,   313,   140,   184,   151,    -1,   313,   140,   184,   167,
      84,    -1,   313,   140,    78,   137,    -1,   313,   140,   184,
     137,    -1,   313,   130,    99,    -1,   313,   130,   164,    -1,
     313,   130,   143,    -1,   313,    70,    -1,   313,    18,    70,
      -1,   313,    70,   109,    71,    -1,   313,    70,   109,   108,
      -1,     3,    -1,   314,   225,     3,    -1,    -1,   315,     3,
     321,   316,    -1,    -1,   316,    18,   138,    -1,   316,   138,
      -1,   316,    84,     4,    -1,   316,    84,     5,    -1,   316,
      84,     7,    -1,   316,    84,     6,    -1,   316,    84,   217,
     223,   224,    -1,   316,    84,   218,   223,   224,    -1,   316,
      84,   219,   223,   224,    -1,   316,    84,    56,    -1,   316,
      84,   223,   228,   224,    -1,   316,    37,    -1,   316,    37,
     223,     5,   225,     5,   224,    -1,   316,    37,   223,     5,
     224,    -1,   316,    42,   223,     5,   225,     5,   224,    -1,
     316,    42,   223,     5,   224,    -1,   316,    42,    -1,   316,
     186,   120,    -1,   316,   186,    -1,   316,   144,   120,    -1,
     316,   120,    -1,   316,    62,     4,    -1,   316,    61,   223,
     228,   224,    -1,   316,    55,     3,   186,    -1,   316,    55,
       3,   144,   120,    -1,   316,    55,     3,    61,   223,   228,
     224,    -1,   316,    45,    41,    40,   223,   228,   224,    46,
      -1,   316,    45,    41,    40,   223,   228,   224,    47,    -1,
     316,    45,    41,    40,   223,   228,   224,    -1,   316,    40,
     223,   228,   224,    46,    -1,   316,    40,   223,   228,   224,
      47,    -1,   316,    40,   223,   228,   224,    -1,    -1,   223,
       5,   224,    -1,   223,     5,   225,     5,   224,    -1,    -1,
      51,    -1,    -1,   319,   185,    -1,   319,   200,    -1,    -1,
     320,    65,   167,     4,    -1,   320,    66,     4,    -1,    54,
     317,    -1,   170,   317,   319,    -1,   166,   317,   319,    -1,
     134,   317,   319,    -1,   117,   317,   319,    -1,   110,   317,
     319,    -1,    53,   317,   319,    -1,   147,   317,   319,    -1,
      85,   317,   319,    -1,    95,   317,   319,    -1,    87,   317,
     319,    -1,    88,    -1,   183,    -1,   177,    -1,    86,    -1,
     198,    -1,    65,   317,   320,    -1,   192,   223,     5,   224,
     320,    -1,    51,   317,    -1,   194,   223,     5,   224,    -1,
     182,    -1,    48,    -1,   133,    -1,   129,    -1,   169,   318,
     320,    -1,   175,   318,   320,    -1,   132,   318,   320,    -1,
     122,   318,   320,    -1,    91,   223,   322,   224,   320,    -1,
     167,   223,   322,   224,   320,    -1,    49,    -1,   187,    -1,
       4,    -1,   322,   225,     4,    -1,   324,   258,   237,    -1,
      -1,   112,    -1,   154,    -1,   325,    -1,   167,   156,     3,
      -1,   167,   156,    84,    -1,   167,   326,    -1,   327,    -1,
     326,   225,   327,    -1,     8,    20,   228,    -1,     8,     9,
     228,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   322,   322,   323,   328,   335,   336,   337,   355,   363,
     371,   377,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     408,   409,   410,   411,   414,   415,   416,   417,   418,   421,
     422,   425,   426,   429,   430,   433,   433,   434,   434,   435,
     436,   437,   441,   445,   446,   447,   448,   449,   450,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   472,   479,   486,   492,   493,   494,   497,
     498,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     512,   514,   516,   518,   522,   530,   541,   542,   545,   546,
     549,   557,   565,   576,   586,   587,   601,   602,   603,   604,
     607,   614,   622,   623,   624,   627,   628,   631,   632,   635,
     636,   639,   640,   643,   651,   652,   653,   654,   657,   658,
     659,   660,   661,   664,   665,   668,   669,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   683,   684,   685,   693,
     699,   700,   701,   704,   705,   708,   709,   713,   720,   721,
     722,   725,   726,   730,   732,   734,   736,   738,   742,   743,
     744,   747,   748,   751,   752,   755,   756,   757,   760,   761,
     764,   765,   769,   771,   773,   775,   778,   779,   782,   783,
     786,   790,   798,   806,   807,   808,   809,   813,   816,   817,
     820,   820,   822,   826,   833,   840,   850,   857,   864,   874,
     882,   892,   900,   909,   918,   928,   936,   945,   954,   964,
     973,   985,   990,   995,  1001,  1008,  1015,  1022,  1032,  1039,
    1048,  1055,  1061,  1069,  1075,  1083,  1084,  1085,  1086,  1087,
    1091,  1098,  1107,  1114,  1120,  1131,  1134,  1140,  1146,  1153,
    1159,  1166,  1172,  1178,  1184,  1190,  1196,  1202,  1210,  1217,
    1225,  1226,  1229,  1230,  1231,  1232,  1233,  1236,  1236,  1239,
    1240,  1243,  1253,  1266,  1267,  1267,  1270,  1271,  1272,  1273,
    1276,  1280,  1281,  1282,  1283,  1289,  1292,  1298,  1303,  1309,
    1315,  1322,  1323,  1324,  1328,  1339,  1350,  1361,  1375,  1379,
    1380,  1383,  1384,  1388,  1392,  1394,  1396,  1398,  1400,  1405,
    1409,  1410,  1414,  1423,  1433,  1437,  1438,  1439,  1440,  1441,
    1442,  1444,  1448,  1449,  1452,  1467,  1474,  1489,  1502,  1517,
    1530,  1531,  1532,  1535,  1536,  1539,  1540,  1541,  1542,  1543,
    1544,  1545,  1546,  1547,  1549,  1551,  1553,  1555,  1557,  1561,
    1562,  1565,  1566,  1569,  1570,  1573,  1574,  1575,  1576,  1577,
    1578,  1579,  1580,  1581,  1582,  1583,  1584,  1585,  1586,  1587,
    1588,  1589,  1590,  1593,  1594,  1597,  1597,  1607,  1608,  1609,
    1610,  1611,  1612,  1613,  1614,  1615,  1616,  1617,  1618,  1625,
    1626,  1627,  1628,  1629,  1630,  1631,  1632,  1633,  1634,  1635,
    1636,  1637,  1638,  1639,  1640,  1641,  1642,  1643,  1644,  1645,
    1648,  1649,  1650,  1653,  1654,  1657,  1658,  1659,  1662,  1663,
    1664,  1668,  1669,  1670,  1671,  1672,  1673,  1674,  1675,  1676,
    1677,  1678,  1679,  1680,  1681,  1682,  1683,  1684,  1685,  1686,
    1687,  1688,  1689,  1690,  1691,  1692,  1693,  1694,  1695,  1696,
    1697,  1698,  1699,  1702,  1703,  1706,  1719,  1720,  1721,  1725,
    1728,  1729,  1730,  1731,  1731,  1733,  1734
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
  "ALWAYS", "IDENTITY", "CONTINUE", "RESTART", "GENERATED", "STORED",
  "VIRTUAL", "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT",
  "CONSTRAINT", "CURRENT_TIMESTAMP", "CREATE", "CASCADE", "CROSS", "CASE",
  "CHECK", "COMMENT", "CURRENT_DATE", "CURRENT_TIME", "CHAR", "COLLATE",
  "COLUMN", "CONCURRENTLY", "DATABASE", "DEFERRABLE", "DEFERRED",
  "DISABLE", "DOMAIN", "DELAYED", "DAY_HOUR", "DAY_MICROSECOND",
  "DISTINCT", "DELETE", "DROP", "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND",
  "DESC", "DEFAULT", "DOUBLE", "DATETIME", "DECIMAL", "DATE", "ENABLE",
  "ESCAPED", "ENUM", "END", "ELSE", "EXPLAIN", "FLOAT", "FORCE", "FOREIGN",
  "FROM", "FULL", "FULLTEXT", "FOR", "GROUP", "HOUR_MINUTE",
  "HOUR_MICROSECOND", "HIGH_PRIORITY", "HOUR_SECOND", "HAVING",
  "IMMEDIATE", "INITIALLY", "INTEGER", "INNER", "IGNORE", "INDEX", "IF",
  "INSERT", "INTO", "INT", "INTERVAL", "JOIN", "KEY", "LESS", "LONGTEXT",
  "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "LOCKED", "OFFSET",
  "LONGBLOB", "MATCH", "MAXVALUE", "MEDIUMTEXT", "MEDIUMBLOB", "MEDIUMINT",
  "NATURAL", "NODE", "NO_ACTION", "NULLX", "OUTER", "ON", "ORDER",
  "ONDUPLICATE", "PARTIAL", "PRIMARY", "QUICK", "RANGE", "REAL", "RECLAIM",
  "REFERENCES", "RENAME", "RESTRICT", "ROLLUP", "RIGHT", "REPLACE",
  "SQL_SMALL_RESULT", "SCHEMA", "SHARD", "SHARDS", "SHARE", "SKIP", "SOME",
  "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT", "SIMPLE", "STRAIGHT_JOIN",
  "SMALLINT", "SET", "SELECT", "TINYTEXT", "TINYINT", "TO", "TEMPORARY",
  "GLOBAL", "PRESERVE", "TEXT", "THAN", "TIMESTAMP", "TABLE", "THEN",
  "TRAILING", "TRUNCATE", "TINYBLOB", "TIME", "UPDATE", "UNSIGNED",
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
  "orderby_list", "orderby_item", "opt_limit", "opt_for_update",
  "opt_into_list", "column_list", "select_opts", "select_expr_list",
  "select_expr", "opt_as_alias", "table_references", "table_reference",
  "table_factor", "opt_as", "join_table", "opt_inner_cross", "opt_outer",
  "left_or_right", "opt_left_or_right_outer", "opt_join_condition",
  "join_condition", "index_hint", "opt_for_join", "index_list",
  "table_subquery", "delete_stmt", "delete_opts", "delete_list",
  "opt_dot_star", "drop_table_stmt", "create_index_stmt", "index_col_list",
  "index_expr", "drop_index_stmt", "truncate_table_stmt",
  "truncate_extra_tables", "opt_truncate_options", "reclaim_table_stmt",
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
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   226,   227,   227,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   229,   229,   230,   230,   231,   228,   232,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   233,   233,   233,   228,
     228,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     228,   228,   228,   228,   235,   235,   228,   228,   228,   228,
     228,   228,   228,   236,   237,   237,   238,   238,   239,   239,
     240,   240,   241,   241,   241,   242,   242,   243,   243,   244,
     244,   245,   245,   246,   247,   247,   247,   247,   248,   248,
     248,   248,   248,   249,   249,   250,   250,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   252,   252,   252,   253,
     254,   254,   254,   255,   255,   256,   256,   257,   257,   257,
     257,   258,   258,   259,   259,   259,   259,   259,   260,   260,
     260,   261,   261,   262,   262,   263,   263,   263,   264,   264,
     265,   265,   266,   266,   266,   266,   267,   267,   268,   268,
     269,   236,   270,   271,   271,   271,   271,   270,   272,   272,
     273,   273,   270,   236,   274,   274,   236,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   276,   276,   276,   277,   277,   277,   277,   236,   278,
     236,   279,   279,   280,   280,   281,   281,   281,   281,   281,
     236,   282,   236,   283,   283,   236,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   236,   285,
     286,   286,   287,   287,   287,   287,   287,   288,   288,   289,
     289,   290,   290,   291,   292,   291,   293,   293,   293,   293,
     285,   294,   294,   294,   294,   236,   295,   295,   295,   236,
     296,   297,   297,   297,   298,   298,   298,   298,   236,   299,
     299,   300,   300,   236,   301,   301,   301,   301,   301,   236,
     302,   302,   236,   303,   303,   304,   304,   304,   304,   304,
     304,   304,   305,   305,   306,   306,   303,   303,   303,   303,
     307,   307,   307,   308,   308,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   310,
     310,   311,   311,   312,   312,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   314,   314,   315,   309,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     317,   317,   317,   318,   318,   319,   319,   319,   320,   320,
     320,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   322,   322,   323,   324,   324,   324,   236,
     325,   325,   325,   326,   326,   327,   327
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
       2,     3,     5,     1,     3,     0,     2,     2,     3,     3,
       1,     3,     1,     3,     5,     1,    10,    10,    17,    12,
      19,    11,     6,     8,     6,     6,     6,     7,     1,     8,
       0,     4,     0,     2,     2,     2,     2,     1,     0,     0,
       3,     1,     3,     3,     0,     6,     1,     1,     3,     3,
       7,     3,     3,     5,     5,     1,     8,     7,     7,     1,
       8,     0,     2,     2,     3,     5,     5,     7,     1,     4,
       4,     0,     2,     1,     5,     7,     7,     9,    11,     1,
       2,     3,     1,     9,    11,     0,     4,     3,     5,     5,
       9,    10,     1,     3,     9,     9,     9,     6,    11,     8,
       0,     1,     2,     1,     3,     5,     7,     4,     4,     5,
       5,     4,     6,    11,    13,    13,    15,     4,     6,     1,
       3,     1,     3,     1,     3,     0,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     4,     3,     3,     3,     2,
       3,     4,     4,     1,     3,     0,     4,     0,     3,     2,
       3,     3,     3,     3,     5,     5,     5,     3,     5,     2,
       7,     5,     7,     5,     2,     3,     2,     3,     2,     3,
       5,     4,     5,     7,     8,     8,     7,     6,     6,     5,
       0,     3,     5,     0,     1,     0,     2,     2,     0,     4,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     3,     5,     2,
       4,     1,     1,     1,     1,     3,     3,     3,     3,     5,
       5,     1,     1,     1,     3,     3,     0,     1,     1,     1,
       3,     3,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   330,   196,     0,   262,     0,   262,     0,
     137,     0,   262,     0,     0,     0,   103,   191,   203,   206,
     228,   235,   240,   242,   245,   258,   285,   289,   298,   303,
     309,   312,   459,     0,     0,   301,     0,     0,   301,   331,
       0,     0,     0,     0,     0,     0,   268,     0,   268,     0,
       0,   462,   463,     0,     0,     0,     0,   310,     0,     1,
       2,   230,     0,   243,     0,     0,     0,     0,     0,     0,
       0,   332,     0,   301,   200,     0,   195,   193,   194,     0,
     229,   204,     0,   264,   265,   266,   267,   263,     0,   241,
       0,     0,     0,   460,   461,     0,     4,     7,     8,    10,
       9,     6,     0,     0,     0,   148,   138,   100,     0,   101,
     102,   139,   140,   141,    11,   143,   145,   144,   142,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,   104,   146,   231,   266,   263,   152,     0,     0,   153,
     155,   156,   162,   311,     3,     0,     0,   236,   237,     0,
       0,     0,     0,     0,     0,     0,   302,   299,     0,     0,
       0,     0,     0,   300,     0,     0,     0,     0,     0,   198,
     106,     0,     0,     0,     0,   269,   269,   466,   465,   464,
       0,    43,     0,    28,    27,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   149,     0,     0,     0,     0,   185,     0,     0,
       0,     0,   170,   169,   173,   177,   174,     0,     0,   171,
     161,     0,   239,   238,     0,     0,     0,     0,     0,     0,
       0,   244,   442,   451,   410,   410,   410,   410,   410,   435,
     410,   432,     0,   410,   410,   410,   413,   444,   413,   443,
     410,   410,   410,     0,   413,   410,   413,   434,   441,   433,
     452,     0,     0,   436,   304,     0,     0,     0,     0,     0,
       0,     0,     0,   456,   201,     0,   119,     0,   106,   200,
     205,     0,     0,     0,     0,     0,     5,    41,    44,     0,
      38,     0,     0,    92,     0,     0,     0,     0,    78,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    19,    21,    22,    20,    98,    96,    36,     0,    34,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    23,    24,    26,    12,    13,    14,    15,    16,    17,
      25,   150,   106,   147,   233,   232,   152,     0,     0,     0,
     157,   190,   160,     0,   106,   154,   171,   171,     0,   164,
       0,   172,     0,   159,     0,     0,   255,   252,   254,     0,
     256,     0,   439,   415,   421,   418,   415,   415,     0,   415,
     415,   415,   414,   418,   418,   415,   415,   415,     0,   418,
     415,   418,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   457,   458,     0,   375,
     327,   162,   107,     0,   124,   106,   197,   199,     0,   260,
     271,     0,     0,   260,     0,   260,     0,    52,     0,    90,
       0,     0,     0,    51,     0,     0,    63,     0,     0,     0,
       0,    53,    54,    55,    56,    57,    58,    66,    67,    68,
       0,     0,     0,    37,    35,     0,     0,    99,    97,    47,
       0,     0,     0,     0,     0,     0,   108,     0,   185,   187,
     187,   187,     0,     0,     0,   119,   175,   176,     0,     0,
     178,     0,     0,     0,     0,     0,   257,     0,     0,   427,
     437,   429,   431,   453,     0,   430,   426,   425,   448,   447,
     424,   428,   423,     0,   445,   422,   446,     0,     0,   306,
       0,   305,     0,   221,     0,     0,     0,     0,     0,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   456,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   333,
       0,     0,     0,     0,   192,   202,     0,     0,     0,   280,
     270,     0,     0,   260,   287,   260,   288,    42,    94,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,    39,     0,     0,
       0,    30,     0,   117,   234,   158,     0,     0,     0,     0,
     294,     0,     0,   124,   167,   165,     0,     0,   163,   179,
       0,     0,     0,     0,     0,   253,   411,     0,   416,   417,
       0,     0,   418,     0,   418,   418,   440,     0,     0,     0,
       0,     0,     0,     0,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   375,   329,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   315,   375,
       0,   455,   112,   120,   121,   125,   282,   281,     0,     0,
     272,   277,   276,     0,   274,   259,   286,    91,    95,     0,
      61,    60,     0,    65,     0,     0,    79,    80,    69,     0,
      71,    46,     0,    50,    40,    33,    31,    32,     0,     0,
     119,   186,     0,     0,     0,     0,     0,     0,   290,   180,
       0,   166,     0,     0,     0,   373,     0,     0,     0,   420,
     449,   454,   450,   438,     0,   307,     0,     0,     0,     0,
       0,   222,     0,   215,     0,     0,     0,     0,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,     0,     0,   313,   326,
     334,   377,   113,   114,   123,     0,     0,     0,     0,     0,
     273,     0,     0,     0,     0,    64,    81,    82,    83,    84,
      88,    87,    89,    86,    85,     0,    48,   112,   115,   118,
     124,   188,     0,     0,     0,   295,   296,     0,     0,   246,
     351,     0,   349,     0,   247,     0,   412,   419,     0,   211,
     224,   225,   226,     0,     0,     0,     0,   208,     0,     0,
     217,     0,     0,     0,   315,     0,     0,     0,     0,   341,
       0,     0,     0,   338,     0,   337,     0,   347,     0,     0,
       0,   376,   122,   127,   126,   261,   284,   283,   279,   278,
       0,    62,    59,    70,   110,     0,     0,   109,   128,   184,
       0,   183,   182,     0,   181,     0,     0,     0,   251,     0,
     374,   308,     0,   219,   216,     0,   213,     0,     0,     0,
     210,   314,   328,     0,     0,     0,     0,     0,   339,   340,
     136,   335,   317,     0,     0,     0,     0,   389,     0,   394,
       0,     0,     0,     0,     0,   398,   379,     0,   396,     0,
     116,   112,     0,   133,   189,   297,   249,     0,   352,   350,
     227,   212,   220,   218,     0,   342,     0,     0,   348,     0,
     316,     0,     0,     0,     0,   378,     0,     0,     0,     0,
       0,     0,   399,   380,   381,   383,   382,   387,     0,     0,
       0,     0,   397,   395,   275,   111,   130,   129,     0,   105,
       0,   214,     0,   336,     0,   318,   319,     0,     0,     0,
       0,     0,     0,     0,     0,   401,     0,     0,     0,     0,
       0,     0,     0,   134,     0,     0,     0,     0,     0,     0,
     391,     0,   409,   393,     0,     0,     0,   402,   400,   384,
     385,   386,   388,   132,   131,   353,     0,     0,     0,     0,
       0,     0,     0,   407,   408,     0,     0,     0,   355,     0,
       0,     0,     0,   355,     0,     0,   390,   392,   406,   403,
     248,   354,     0,     0,     0,   343,     0,     0,   322,   320,
     404,   405,     0,   369,     0,     0,     0,   355,   355,     0,
       0,   321,     0,   370,   250,     0,   366,   368,   367,     0,
       0,     0,   345,   344,     0,   323,   371,   372,   356,   364,
     358,     0,   360,   365,   362,     0,   355,     0,   359,   357,
     363,   361,   346,     0,     0,     0,     0,     0,     0,     0,
     324,   325
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   327,   328,   329,   505,   624,   342,   617,   198,
      15,    16,   316,   633,   828,   804,   897,   740,   464,   703,
     704,   594,   953,   999,   794,    53,   141,   142,   242,   148,
     149,   150,   261,   151,   258,   412,   259,   408,   648,   649,
     400,   637,   832,   152,    17,    43,    79,   179,    18,    19,
     568,   569,    20,    21,   395,    61,    22,    23,    24,    25,
     599,    46,    88,   323,   471,   603,   812,   713,   469,    26,
      27,    56,   404,    28,    65,    29,    30,    31,   798,  1077,
    1078,    42,   588,   589,   843,   841,  1046,  1070,   756,   590,
     881,   422,   433,   539,   540,   304,   544,   460,   461,    32,
      51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -759
static const yytype_int16 yypact[] =
{
     481,  -117,   -51,   355,  -759,   -60,  -759,   107,  -759,    18,
    -759,   123,     8,    51,   124,   -89,  -759,  -759,  -759,  -759,
    -759,  -759,  -759,  -759,  -759,  -759,  -759,  -759,  -759,  -759,
    -759,  -759,  -759,   308,   364,   203,   438,    27,   203,  -759,
     274,   352,   275,   161,   468,   114,   314,   470,   314,   353,
      49,   242,  -759,   193,   490,   347,    11,  -759,   505,  -759,
     481,   284,    15,   311,   277,   533,   472,   390,   137,   360,
     549,  -759,   247,   203,   350,   566,  -759,  -759,  -759,   -58,
    -759,  -759,   388,  -759,  -759,  -759,  -759,  -759,   591,  -759,
     594,  1471,  1471,  -759,  -759,   622,   233,  -759,  -759,  -759,
    -759,   597,  1471,  1471,  1471,  -759,  -759,  -759,   650,  -759,
    -759,  -759,  -759,  -759,  -759,  -759,  -759,  -759,  -759,   413,
     415,   451,   461,   486,   489,   532,   534,   554,   560,   574,
     580,   590,   592,   600,   619,   626,   664,   667,   668,  1471,
    2772,   -10,  -759,   436,    12,    13,     4,    22,   127,   418,
    -759,  -759,   631,  -759,  -759,   696,   767,  -759,  -759,   240,
     837,   838,   839,   840,   843,   896,  -759,  -759,  2508,   897,
     761,   701,   901,  -759,   765,   190,   705,   904,   882,  -759,
     250,   -99,    11,   906,   907,  -109,   109,  2850,  2850,  -759,
     914,  1471,  1471,   991,   991,  -759,  1471,  2413,   244,   750,
    1471,   514,  1471,  1471,   871,  1471,  1471,  1471,  1471,  1471,
    1471,  1471,  1471,  1471,  1471,   695,   697,   698,   699,  1697,
    -759,  1471,  1471,  1471,  1471,  1471,    25,   706,   447,  1471,
     742,  1471,  1471,  1471,  1471,  1471,  1471,  1471,  1471,  1471,
    1471,   917,  -759,    11,  1471,   927,   929,   179,   712,   159,
     934,    11,  -759,  -759,  -759,   309,  -759,    11,   820,   801,
    -759,   938,  -759,  -759,   939,   960,   963,   964,   966,   967,
     976,  -759,  -759,  -759,   757,   757,   757,   757,   757,  -759,
     757,  -759,   758,   757,   757,   757,   933,  -759,   933,  -759,
     757,   757,   757,   762,   933,   757,   933,  -759,  -759,  -759,
    -759,   763,   766,  -759,    52,   157,   987,   988,   852,   990,
     854,   807,  1004,   156,  -759,  1471,   881,    11,    84,   350,
    -759,  1020,  1021,   832,  1020,   -59,  -759,   476,  -759,   803,
    2850,  2491,   254,  -759,  1471,  1471,   804,   589,  -759,  -759,
    -759,  1718,   908,   806,  1437,   805,  1755,  1776,  1800,  1828,
    1849,  1870,  1904,  1925,  1526,  1547,  1568,  -759,  -759,  -759,
    -759,  -759,  2242,  1276,  1358,  1631,  1631,  -759,    35,  -759,
     750,  1471,  1471,   809,  1471,  2806,   824,   846,   847,   970,
     975,   598,   617,   653,   518,   518,  1025,  1025,  1025,  1025,
    -759,  -759,    84,  -759,  -759,   867,   283,   951,   973,   977,
    -759,  -759,  -759,    -1,   192,   418,   801,   801,   979,   955,
      11,  -759,   980,  -759,   168,  2508,  -759,  -759,  -759,   925,
    -759,  1095,  -759,  -759,  -759,  -759,  -759,  -759,  1097,  -759,
    -759,  -759,  -759,  -759,  -759,  -759,  -759,  -759,  1097,  -759,
    -759,  -759,  1098,  1099,   968,   879,  1471,   915,    26,   169,
     989,  1104,   197,  1127,  1129,   993,  -759,  -759,  1131,   200,
    -759,   631,  2850,  1085,  1010,    84,  -759,  -759,  1117,  -100,
    -759,   256,   922,  -100,   922,  1005,  1471,  -759,  1471,  -759,
    1471,  2697,  2525,  -759,  1471,  1471,  -759,  1471,  2638,  1028,
    1028,  -759,  -759,  -759,  -759,  -759,  -759,  -759,  -759,  -759,
    1471,  1471,  1471,  -759,  -759,  1471,   924,  1631,  1631,   750,
    2828,  1471,   750,   750,   750,   926,  1047,  1148,   179,  1051,
    1051,  1051,  1471,  1152,  1153,   881,  -759,  -759,    11,  1471,
     -83,    11,   935,  1037,  1039,   937,  -759,  1159,   285,   -77,
     417,   -77,   -77,  -759,   290,   -77,   -77,   -77,   417,   417,
     -77,   -77,   -77,   299,   417,   -77,   417,   940,   941,  1102,
    1471,  2850,   944,  -759,   945,   946,   947,   971,   301,  -759,
    1001,    26,  1192,   234,  1007,    26,   241,  1058,  1204,   -16,
    1205,   986,  1090,   261,   994,   995,  1091,   996,   310,  -759,
    1209,   750,  1210,  1471,  -759,  -759,  1136,  1094,  1218,  -759,
    -759,  1219,  1198,   -96,  -759,   -96,  -759,  -759,  2850,  2719,
    -759,  1471,  1613,    53,  1946,  1471,  1471,  1000,  1008,  1983,
    1592,  2007,  1009,  -759,  1471,  1011,  1471,  1015,  1012,  1013,
    1014,  -759,  1175,  1132,  -759,  -759,  1115,  1019,  1022,  1023,
    2850,  1224,     1,  1010,  -759,  2850,  1471,  1024,  -759,  -759,
     -83,  1471,  1026,  1027,  1240,  -759,  -759,  1246,  -759,  -759,
    1086,  1248,  -759,  1251,  -759,  -759,  -759,  1033,  2035,    26,
    1254,  1256,  1257,  1261,  -759,  1262,  1043,   326,  1044,  1078,
      26,  1046,   330,  1080,    26,  1268,   251,   200,  -759,   205,
    1471,  1049,  1050,  1052,  1273,  1273,  1054,  1240,   104,   200,
    2508,  -759,   258,  1053,  -759,  1038,  -759,  2850,  1096,  1264,
    -759,  -759,  2850,   332,  -759,  -759,  -759,  -759,  2850,  1471,
    -759,  -759,  1471,  -759,  2056,  2389,  -759,  -759,  -759,  1471,
    -759,  -759,  1057,  -759,  1015,  -759,  -759,  -759,  1471,  1471,
     881,  -759,  1282,  1282,  1282,  1471,  1471,  1290,  -759,  2850,
    1273,  -759,  2077,  1305,  1312,  -759,   340,  1092,  1313,  -759,
     417,  -759,   417,   417,  1471,  -759,   343,  1101,  1103,  1105,
    1093,  -759,    26,  -759,    26,  1107,   351,    26,  -759,  1109,
     363,  1110,  1130,    26,   407,  1111,  1199,  1201,  1112,  2111,
    1305,  1273,  1273,  -759,   409,   426,  1312,   435,   165,  -759,
    -759,  -759,  -759,  -759,  -759,  1210,  1471,  1471,  1020,  1223,
    -759,  1306,  1134,  2132,  2153,  -759,  -759,  -759,  -759,  -759,
    -759,  -759,  -759,  -759,  -759,  2174,  -759,  2740,   226,  2850,
    1010,  -759,   439,   448,   464,  2850,  2850,  1302,   466,  1308,
    -759,   471,  -759,   473,  -759,  1325,  -759,  -759,  2198,  -759,
    -759,  -759,  -759,  1355,   475,   478,    26,  -759,   480,    26,
    -759,    26,  1137,   483,   104,  1471,  1140,  1141,  1240,  -759,
     511,   515,   517,  -759,  1362,  -759,   519,  -759,   346,  1364,
    1318,   298,  -759,  2850,  2850,  1150,  -759,  2850,  -759,  2850,
    1198,  -759,  -759,  -759,  -759,  1237,  1471,  -759,  1291,  -759,
    1388,  -759,  -759,  1471,  -759,  1202,  1245,  1392,  -759,  1393,
    -759,  -759,  1173,  -759,  -759,   527,  -759,   537,   539,    26,
    -759,   165,  -759,  2222,  1305,  1312,   541,  1249,  -759,  -759,
    -759,  -759,  -759,  1414,    21,   -87,  1284,  1197,  1200,  1222,
    1413,  1465,  1247,  1467,    29,  -759,  -759,  1349,  1352,   544,
    -759,  2740,   -49,  1357,  -759,  2850,  -759,  1477,  -759,  -759,
    -759,  -759,  -759,  -759,   546,  -759,   548,   550,  -759,  1478,
    -759,  1479,  1480,  1263,  1267,  -759,  1482,  1471,  1486,  1444,
      81,  1471,  -759,  -759,  -759,  -759,  -759,  -759,  1269,  1270,
    1271,  1471,  -759,  -759,  -759,  -759,  1335,  1337,  1273,  -759,
    1275,  -759,  1336,  -759,   357,  -759,  -759,  1496,  1497,   555,
    2263,   557,  1278,  1279,  1383,  -759,  2284,  1280,  1281,  1304,
    2318,  1379,  1403,  1307,  1530,  1540,  1561,  1530,  1361,  1375,
    -759,  1595,   744,  -759,  1596,  1471,  1471,  -759,  -759,  -759,
    -759,  -759,  -759,  -759,  -759,  -759,   571,   585,  1407,   586,
    1425,  1505,  1440,  -759,  -759,  1441,  2339,  2360,  -759,  1663,
    1664,  1530,  1530,  -759,  1511,  1665,  -759,  -759,   792,  -759,
     194,  -759,  1446,   616,   620,   199,  1668,   623,  -759,  -759,
    -759,  -759,   -46,  1583,   -52,    20,  1530,  -759,  -759,  1623,
    1502,  -759,  1511,  -759,  -759,   262,  -759,  -759,  -759,   -30,
     -21,   647,   199,   199,  1575,  -759,  -759,  -759,  -759,  -759,
    -759,   176,  -759,  -759,  -759,   187,  -759,  1521,  -759,  -759,
    -759,  -759,   199,    93,  1558,  1559,  1564,  1565,  1698,  1699,
    -759,  -759
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -759,  1642,   -53,  -449,  -759,  -759,  -759,  -759,  1215,  1509,
    -759,  -137,  -273,  -759,  -759,  -721,  -759,  -759,  -508,  -759,
     930,  -621,  -759,  -759,  -690,  -759,  -759,  1506,  -142,   -54,
    1498,  -248,  1292,  -759,  -759,   477,  -759,  -759,  -759,  1106,
    1234,   361,   142,  -759,  -759,  -759,  1679,  1436,  -759,  -759,
    -569,  -759,  -759,  -759,  -759,  -759,  -759,  -759,  -759,  -759,
    -383,   291,  1709,  1572,  -759,  1285,  -759,   870,  -323,  -759,
    -759,  -759,  -759,  -759,   406,  -759,  -759,  -759,   898,  -759,
     669,  -759,  1076,  1065,  -712,  -758,  -697,  -673,  -674,  -759,
    -759,   509,    75,   155,  -421,  -407,  1369,  -576,  -759,  -759,
    -759,  1713
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -457
static const yytype_int16 yytable[] =
{
     140,   473,   677,   688,   247,   795,   682,   220,   536,   409,
     248,  -291,   548,   549,   146,  -293,  -292,   643,   554,   522,
     556,   746,   748,   797,  1093,   146,    49,   607,  1108,   563,
      67,   367,   870,   983,   984,   985,   986,  1112,   187,   188,
     182,   503,   597,   368,   241,   466,   597,  1096,   159,   193,
     194,   195,    93,    44,    57,   197,   622,   646,   321,   973,
     838,    33,   336,   221,   222,   223,   224,   225,   226,   227,
     444,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   876,   987,   219,   160,   243,   317,
     604,  1097,   606,   249,   161,    68,   456,  1124,  1099,   971,
     766,   871,   872,   974,   162,   647,   894,  1109,   658,    10,
     996,   776,  1098,   445,   322,   780,  1113,    81,    45,   516,
      58,  1110,   799,   659,    59,   598,   183,    34,   318,   714,
    1114,   525,    60,    94,   474,   997,   446,  1111,   457,   330,
     170,    69,  1013,   331,  -456,  1094,  1115,   337,   341,   343,
     344,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   530,   369,    74,   163,   966,   183,   362,   363,
     364,   365,   366,   504,    50,   732,   375,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   475,   392,
      10,   140,   595,   310,   926,   972,    96,    97,    98,    99,
     100,   101,   878,   854,  1100,   855,   164,   687,   858,   898,
     102,   103,  1082,   967,   863,   244,   456,  1089,   104,   105,
     715,   523,   716,   747,  1125,  1014,   246,   106,    82,   532,
     995,  -291,   830,   506,   147,  -293,  -292,   564,   565,   566,
     567,   760,   515,   762,   763,   147,   988,   989,   990,   107,
     174,   171,   991,   108,   518,   580,   109,   110,   457,    75,
    1118,   581,   462,   465,  1083,   533,   785,  1015,   456,  1083,
     111,  1120,  -456,    76,   112,   397,   324,   721,   722,   315,
     644,   481,   482,   650,    77,    47,   220,   915,   922,   488,
     917,   398,   918,   801,   250,   264,   802,   582,   113,    48,
     583,    54,   786,    55,   311,   879,    78,   265,  1023,   251,
     457,    62,   534,   584,  1119,   175,   936,    64,   507,   508,
     585,   510,   880,   241,  1084,  1121,   219,   155,   156,  1084,
    1049,   114,   322,  1106,  1085,   937,   333,   334,   938,  1085,
     939,   803,   157,   940,   586,   447,   479,   480,   115,   787,
     964,   932,   251,   941,   535,   116,   117,   570,   118,   942,
     943,   176,    91,   434,  1073,  1074,   933,    63,   399,   439,
    1107,   441,   625,    92,   692,   628,   629,   630,   458,   459,
     448,   693,   944,   402,   251,   574,   587,   315,    83,  1101,
    1075,   788,   571,   561,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,  1102,  1103,   139,   524,   945,    84,
     575,    83,   679,   895,    35,   608,    85,   609,    36,   683,
      86,   612,   613,   406,   614,   158,   946,    87,  -200,   782,
     335,    66,   947,  1122,    70,   315,    71,   619,   620,   621,
     335,   896,    84,    73,   701,   190,   191,   680,   627,   144,
     371,   372,   407,   373,   684,    72,   374,    95,    37,   640,
     145,    80,   178,    89,   783,  -200,   645,   252,   166,   177,
     600,   601,   660,   661,   948,   885,   221,   222,   223,   224,
     225,   226,   227,   143,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   668,   153,   656,
     657,    38,   168,     1,   662,   663,     2,    96,    97,    98,
      99,   100,   101,   664,   663,   674,   675,    39,    40,   253,
     169,   102,   103,   165,   698,   699,   167,  -168,     3,   104,
     705,    41,   254,   707,   236,   237,   238,   239,   240,   712,
     773,   675,   173,   255,   778,   675,   810,   811,   718,     4,
       5,   172,   724,   725,   844,   845,   338,   849,   675,   180,
     107,   256,   178,   734,   108,   857,   675,   109,   110,  1026,
    1027,   541,   542,   257,   545,   546,   547,   860,   675,   184,
     550,   551,   552,   749,   185,   555,     6,   186,   752,   221,
     222,   223,   224,   225,   226,   227,   192,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     7,
      49,   864,   699,   873,   874,     8,   199,   789,   200,   339,
     233,   234,   235,   236,   237,   238,   239,   240,     9,    10,
     875,   874,   114,    96,    97,    98,    99,   100,   101,   877,
     845,   245,    11,   899,   900,    12,   813,   102,   103,   814,
      13,   260,   901,   900,   201,   104,   825,   234,   235,   236,
     237,   238,   239,   240,   202,   827,   829,   484,   902,   900,
     904,   874,   835,   836,   340,   906,   907,   908,   909,   913,
     675,   476,   914,   675,   916,   675,   107,   920,   675,   203,
     108,   848,   204,   109,   110,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   927,   907,   139,   262,   928,
     874,   929,   874,   931,   909,    96,    97,    98,    99,   100,
     101,   961,   675,   883,   884,   205,   887,   206,   889,   102,
     103,   962,   675,   963,   675,   968,   845,   104,   994,   811,
    1001,   675,  1002,   907,  1003,   909,   376,   207,   377,  1030,
    1031,  1033,  1034,   208,   423,   424,   425,   426,   114,   427,
    1053,  1054,   429,   430,   431,  1058,  1059,   209,   107,   435,
     436,   437,   108,   210,   440,   109,   110,  1060,  1061,   263,
    1063,  1059,   923,   211,   485,   212,   221,   222,   223,   224,
     225,   226,   227,   213,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   712,  1080,  1081,
    1087,  1059,   214,   951,  1088,  1059,   196,  1091,  1092,   215,
     955,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,  1116,  1059,   139,    96,    97,    98,    99,   100,   101,
     114,   638,   639,   526,   527,   833,   834,   216,   102,   103,
     217,   218,   266,   267,   268,   269,   104,   345,   270,   271,
     305,   306,   307,   378,   308,   309,   312,   313,   314,   319,
     320,    96,    97,    98,    99,   100,   101,   326,    10,   357,
     391,   358,   359,   360,  1010,   102,   103,   107,  1016,   370,
     394,   108,   396,   104,   109,   110,   401,   403,  1020,   410,
     411,   413,   414,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   415,   107,   379,   416,   417,   108,   418,
     419,   109,   110,    96,    97,    98,    99,   100,   101,   420,
     421,   428,  1056,  1057,   432,   438,   442,   102,   103,   443,
     449,   450,   451,   452,   453,   104,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   487,   455,   454,   114,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   463,   468,   470,   472,   107,   477,   483,   491,
     108,   489,   509,   109,   110,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   114,   512,   221,   222,
     223,   224,   225,   226,   227,   240,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   513,
     514,   519,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   517,   520,   139,   529,   537,   521,   528,   531,
     538,   543,   560,   557,   558,   562,   559,   573,   114,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   572,
     576,   139,   577,   578,   579,   592,   593,   596,    10,    96,
      97,    98,    99,   100,   101,   602,   616,   597,   623,   632,
     631,   634,   636,   102,   103,   641,   642,   652,   651,   653,
     654,   104,   655,   667,   665,   666,   806,   669,   670,   671,
     672,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   676,   107,   139,   673,   678,   108,   681,   685,   109,
     110,    96,    97,    98,    99,   100,   101,   686,   689,   690,
     691,   696,   700,   702,   708,   102,   103,   694,   695,   697,
     706,   709,   710,   104,   726,   738,    96,    97,    98,    99,
     100,   101,   727,   731,   741,   733,   735,   736,   737,   739,
     102,   103,   742,   755,   745,   743,   744,   750,   104,   753,
     754,   757,   759,   758,   107,   761,   764,   767,   108,   768,
     769,   109,   110,   807,   770,   771,   772,   774,   775,   777,
     779,   781,   790,   791,   114,   792,   793,   796,   805,   107,
     808,   826,   711,   108,   809,   831,   109,   110,   223,   224,
     225,   226,   227,   837,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   886,   840,    96,
      97,    98,    99,   100,   101,   842,   846,   847,   853,   866,
     862,   867,   903,   102,   103,   850,   905,   851,   910,   852,
     856,   104,   859,   861,   865,   868,   114,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   890,   912,   139,
     919,   114,   107,   924,   925,   930,   108,   934,   935,   109,
     110,   224,   225,   226,   227,   598,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   950,
     888,   954,   952,   956,   957,   958,   959,   960,   969,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   970,
     976,   139,   975,   977,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   114,   978,   139,   221,   222,   223,
     224,   225,   226,   227,   979,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   980,   992,
     981,   982,   993,   998,    96,    97,    98,    99,   100,   101,
    1000,  1004,  1005,  1006,  1012,  1025,  1007,  1009,   102,   103,
    1008,  1011,  1017,  1018,  1019,  1021,   104,  1022,  1024,  1028,
    1029,  1035,  1036,  1037,  1039,  1040,  1043,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   107,  1041,   139,
    1044,   108,   874,  1045,   109,   110,   221,   222,   223,   224,
     225,   226,   227,  1047,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   221,   222,   223,
     224,   225,   226,   227,  1048,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   221,   222,
     223,   224,   225,   226,   227,  1050,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,  1051,
    1052,  1055,   221,   222,   223,   224,   225,   226,   227,   114,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   221,   222,   223,   224,   225,   226,   227,
    1062,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,  -457,  -457,  -457,  -457,  1064,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   490,  1065,  1066,  1067,  1071,  1072,  1076,  1086,
    1079,  1090,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,  1095,  1093,   139,  1104,  1117,  1123,  1126,  1127,
    1128,  1129,   154,  1130,  1131,   618,   332,   221,   222,   223,
     224,   225,   226,   227,   719,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   221,   222,
     223,   224,   225,   226,   227,   882,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   405,
     393,   500,   635,   591,   181,   467,   751,    90,   325,   605,
     949,  1105,   921,   784,   800,   221,   222,   223,   224,   225,
     226,   227,   501,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   221,   222,   223,   224,
     225,   226,   227,   502,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   553,   189,     0,
     221,   222,   223,   224,   225,   226,   227,   729,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,   720,   221,   222,
     223,   224,   225,   226,   227,     0,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   221,
     222,   223,   224,   225,   226,   227,     0,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     221,   222,   223,   224,   225,   226,   227,     0,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   221,   222,   223,   224,   225,   226,
     227,   361,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   221,   222,   223,   224,   225,
     226,   227,   486,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   221,   222,   223,   224,
     225,   226,   227,     0,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,     0,   492,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   221,   222,   223,   224,   225,   226,   227,
     493,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,   221,   222,   223,
     224,   225,   226,   227,   494,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,   221,   222,   223,   224,   225,
     226,   227,   495,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   221,   222,   223,   224,
     225,   226,   227,   496,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   221,   222,   223,
     224,   225,   226,   227,   497,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   221,   222,   223,   224,   225,   226,   227,   498,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   221,   222,   223,   224,   225,   226,   227,   499,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   221,   222,   223,   224,   225,   226,   227,
     723,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   221,   222,   223,   224,   225,   226,
     227,     0,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,     0,   728,   221,   222,
     223,   224,   225,   226,   227,     0,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,   730,   221,   222,   223,   224,   225,   226,   227,     0,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   222,   223,   224,   225,   226,   227,   765,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   221,   222,   223,   224,   225,   226,   227,
     815,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   221,   222,   223,   224,   225,   226,
     227,   839,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   221,   222,
     223,   224,   225,   226,   227,   869,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   221,
     222,   223,   224,   225,   226,   227,   891,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     221,   222,   223,   224,   225,   226,   227,   892,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,   893,   221,
     222,   223,   224,   225,   226,   227,     0,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,     0,   911,   221,   222,   223,   224,   225,   226,   227,
       0,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,   965,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   816,   817,     0,     0,     0,   818,
       0,   819,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1032,     0,     0,
       0,     0,   820,   821,     0,   822,     0,     0,     0,     0,
       0,   221,   222,   223,   224,   225,   226,   227,  1038,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   221,   222,   223,   224,   225,
     226,   227,  1042,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   272,   273,     0,   274,
       0,   275,   276,  1068,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   277,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1069,     0,     0,   823,   824,     0,
       0,     0,     0,   278,   279,   280,   281,     0,     0,   282,
       0,     0,     0,   283,     0,     0,     0,     0,     0,   196,
       0,     0,     0,     0,     0,     0,     0,     0,   284,     0,
       0,     0,     0,     0,     0,   285,     0,     0,     0,     0,
     286,     0,     0,     0,     0,     0,     0,   287,     0,     0,
     288,   289,   290,     0,     0,     0,     0,     0,   221,   222,
     223,   224,   225,   226,   227,   291,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     478,     0,     0,     0,   292,   293,     0,   294,   295,     0,
       0,     0,     0,   296,     0,   297,     0,     0,     0,     0,
     298,   299,     0,     0,     0,   300,     0,     0,     0,     0,
     301,     0,   302,     0,   611,     0,   303,   221,   222,   223,
     224,   225,   226,   227,     0,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   221,
     222,   223,   224,   225,   226,   227,   615,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     221,   222,   223,   224,   225,   226,   227,     0,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,   220,     0,     0,   802,     0,
       0,     0,   221,   222,   223,   224,   225,   226,   227,   610,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,   717,   241,     0,     0,     0,   221,   222,   223,   224,
     225,   226,   227,   803,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   221,   222,
     223,   224,   225,   226,   227,   511,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     221,   222,   223,   224,   225,   226,   227,   626,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240
};

static const yytype_int16 yycheck[] =
{
      53,   324,   571,   579,   146,   695,   575,     3,   415,   257,
     147,     3,   433,   434,     3,     3,     3,   525,   439,    20,
     441,    20,   643,   697,    70,     3,     8,   476,    58,     3,
       3,     6,   790,     4,     5,     6,     7,    58,    91,    92,
      98,     6,   142,    18,    40,   318,   142,    99,    33,   102,
     103,   104,     3,   113,     3,   108,   505,   140,   167,   146,
     750,   178,   199,    10,    11,    12,    13,    14,    15,    16,
      18,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   796,    56,   139,    72,    98,   188,
     473,   143,   475,   147,    79,    68,   112,     4,    78,    78,
     669,   791,   792,   190,    89,   188,   827,   137,   185,   168,
     159,   680,   164,    61,   223,   684,   137,     3,   178,   392,
      69,   151,   698,   200,     0,   225,   225,   178,   182,   225,
     151,   404,   221,    84,   193,   184,    84,   167,   154,   192,
       3,   114,    61,   196,    40,   191,   167,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   410,   138,     3,   150,   924,   225,   221,   222,
     223,   224,   225,   138,   156,   624,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   325,   243,
     168,   244,   465,     3,   868,   174,     3,     4,     5,     6,
       7,     8,    37,   772,   184,   774,   191,   223,   777,   830,
      17,    18,    18,   925,   783,   225,   112,    18,    25,    26,
     603,   222,   605,   222,   131,   144,   222,    34,   114,    61,
     951,   223,   740,   370,   223,   223,   223,   211,   212,   213,
     214,   662,   379,   664,   665,   223,   217,   218,   219,    56,
       3,   114,   223,    60,   396,    55,    63,    64,   154,    98,
      84,    61,   315,   317,    70,    97,    61,   186,   112,    70,
      77,    84,   168,   112,    81,    96,   167,   224,   225,   195,
     528,   334,   335,   531,   123,   178,     3,   856,   864,   342,
     859,   112,   861,   700,   167,    55,    38,    97,   105,     8,
     100,   178,    97,    12,   114,   140,   145,    67,   998,   225,
     154,     3,   144,   113,   138,    68,    18,   114,   371,   372,
     120,   374,   157,    40,   130,   138,   379,    43,    44,   130,
    1027,   138,   223,    71,   140,    37,    92,    93,    40,   140,
      42,    83,    58,    45,   144,   188,    92,    93,   155,   144,
     919,     5,   225,    55,   186,   162,   163,   188,   165,    61,
      62,   114,     9,   288,  1061,  1062,    20,     3,   189,   294,
     108,   296,   509,    20,   113,   512,   513,   514,   222,   223,
     223,   120,    84,   224,   225,   188,   186,   195,    74,  1086,
    1063,   186,   223,   446,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,  1087,  1088,   223,   225,   120,   105,
     223,    74,   188,   197,    69,   478,   112,   480,    73,   188,
     116,   484,   485,   124,   487,   151,   138,   123,   188,   188,
     196,     3,   144,  1116,    38,   195,   172,   500,   501,   502,
     196,   225,   105,   178,   591,   222,   223,   223,   511,   112,
      13,    14,   153,    16,   223,   113,    19,   225,   113,   522,
     123,     3,   222,     3,   223,   225,   529,    59,   201,    73,
     224,   225,    65,    66,   186,   808,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   560,     3,   224,
     225,   156,    40,    32,   224,   225,    35,     3,     4,     5,
       6,     7,     8,   224,   225,   224,   225,   172,   173,   111,
     140,    17,    18,   222,   224,   225,     3,   119,    57,    25,
     593,   186,   124,   596,    26,    27,    28,    29,    30,   602,
     224,   225,     3,   135,   224,   225,   224,   225,   611,    78,
      79,   201,   615,   616,   224,   225,    52,   224,   225,     3,
      56,   153,   222,   626,    60,   224,   225,    63,    64,   222,
     223,   426,   427,   165,   429,   430,   431,   224,   225,   201,
     435,   436,   437,   646,     3,   440,   115,     3,   651,    10,
      11,    12,    13,    14,    15,    16,     9,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   148,
       8,   224,   225,   224,   225,   154,   223,   690,   223,   125,
      23,    24,    25,    26,    27,    28,    29,    30,   167,   168,
     224,   225,   138,     3,     4,     5,     6,     7,     8,   224,
     225,   225,   181,   224,   225,   184,   719,    17,    18,   722,
     189,    40,   224,   225,   223,    25,   729,    24,    25,    26,
      27,    28,    29,    30,   223,   738,   739,    98,   224,   225,
     224,   225,   745,   746,   180,   224,   225,   224,   225,   224,
     225,   225,   224,   225,   224,   225,    56,   224,   225,   223,
      60,   764,   223,    63,    64,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   224,   225,   223,    42,   224,
     225,   224,   225,   224,   225,     3,     4,     5,     6,     7,
       8,   224,   225,   806,   807,   223,   809,   223,   811,    17,
      18,   224,   225,   224,   225,   224,   225,    25,   224,   225,
     224,   225,   224,   225,   224,   225,    34,   223,    36,   224,
     225,   224,   225,   223,   275,   276,   277,   278,   138,   280,
      46,    47,   283,   284,   285,   224,   225,   223,    56,   290,
     291,   292,    60,   223,   295,    63,    64,   222,   223,    42,
     224,   225,   865,   223,   225,   223,    10,    11,    12,    13,
      14,    15,    16,   223,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   890,    46,    47,
     224,   225,   223,   896,   224,   225,   196,   224,   225,   223,
     903,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   224,   225,   223,     3,     4,     5,     6,     7,     8,
     138,   520,   521,   406,   407,   743,   744,   223,    17,    18,
     223,   223,    55,    55,    55,    55,    25,    26,    55,     3,
       3,   140,   201,   161,     3,   140,   201,     3,    26,     3,
       3,     3,     4,     5,     6,     7,     8,     3,   168,   224,
       3,   224,   224,   224,   977,    17,    18,    56,   981,   223,
       3,    60,     3,    25,    63,    64,   224,     3,   991,   119,
     139,     3,     3,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,     3,    56,   223,     3,     3,    60,     3,
       3,    63,    64,     3,     4,     5,     6,     7,     8,     3,
     223,   223,  1035,  1036,    51,   223,   223,    17,    18,   223,
       3,     3,   140,     3,   140,    25,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    98,     3,   201,   138,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   141,     3,     3,   193,    56,   224,   224,   224,
      60,   225,   223,    63,    64,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   138,   223,    10,    11,
      12,    13,    14,    15,    16,    30,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   223,
     223,   120,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   225,   120,   223,   140,   171,   120,   119,   119,
       5,     4,   223,     5,     5,   190,   138,     3,   138,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   140,
       3,   223,     3,   140,     3,    50,   126,    20,   168,     3,
       4,     5,     6,     7,     8,   223,   118,   142,   224,   102,
     224,     3,   101,    17,    18,     3,     3,   120,   223,   120,
     223,    25,     3,    61,   224,   224,   128,   223,   223,   223,
     223,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   190,    56,   223,   223,     3,    60,   190,   140,    63,
      64,     3,     4,     5,     6,     7,     8,     3,     3,   223,
     120,   120,     3,     3,   120,    17,    18,   223,   223,   223,
      84,     3,     3,    25,   224,    50,     3,     4,     5,     6,
       7,     8,   224,   224,   119,   224,   224,   224,   224,   107,
      17,    18,   223,     3,    20,   223,   223,   223,    25,   223,
     223,     5,     4,   167,    56,     4,   223,     3,    60,     3,
       3,    63,    64,   225,     3,     3,   223,   223,   190,   223,
     190,     3,   223,   223,   138,   223,     3,   223,   225,    56,
     184,   224,    84,    60,    20,     3,    63,    64,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    84,     3,     3,
       4,     5,     6,     7,     8,     3,   224,     4,   225,   120,
     190,   120,    20,    17,    18,   224,    18,   224,     3,   224,
     223,    25,   223,   223,   223,   223,   138,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   223,     3,   223,
     223,   138,    56,   223,   223,     3,    60,     3,    50,    63,
      64,    13,    14,    15,    16,   225,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   152,
      84,     3,   101,   191,   149,     3,     3,   224,   149,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,     5,
     223,   223,   138,   223,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   138,   223,   223,    10,    11,    12,
      13,    14,    15,    16,    41,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,   120,
     223,     4,   120,   116,     3,     4,     5,     6,     7,     8,
       3,     3,     3,     3,    40,   149,   223,     5,    17,    18,
     223,     5,   223,   223,   223,   160,    25,   160,   223,     3,
       3,   223,   223,   120,   224,   224,   127,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,    56,   224,   223,
     127,    60,   225,     3,    63,    64,    10,    11,    12,    13,
      14,    15,    16,     3,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   224,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   224,
       5,     5,    10,    11,    12,    13,    14,    15,    16,   138,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     223,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    13,    14,    15,    16,   223,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   225,   158,   224,   224,     3,     3,   157,   223,
       5,     3,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   109,    70,   223,   193,   121,   176,   140,   140,
     136,   136,    60,     5,     5,   490,   197,    10,    11,    12,
      13,    14,    15,    16,   101,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   805,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   251,
     244,   225,   518,   461,    75,   319,   650,    48,   186,   474,
     890,  1092,   864,   687,   699,    10,    11,    12,    13,    14,
      15,    16,   225,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   225,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   438,    95,    -1,
      10,    11,    12,    13,    14,    15,    16,   225,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,   224,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   224,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   224,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     224,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   224,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   224,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   224,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   224,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   224,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   224,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     224,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,   224,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,   224,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    11,    12,    13,    14,    15,    16,   224,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     224,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   224,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   224,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   224,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   224,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,   224,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,
      -1,    -1,   103,   104,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   224,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   224,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    48,    49,    -1,    51,
      -1,    53,    54,   224,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   224,    -1,    -1,   198,   199,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,
     132,   133,   134,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   147,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
     179,    -1,    -1,    -1,   166,   167,    -1,   169,   170,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,
     182,   183,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
     192,    -1,   194,    -1,   179,    -1,   198,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    10,
      11,    12,    13,    14,    15,    16,    98,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,     3,    -1,    -1,    38,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    92,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    40,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    83,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    10,    11,
      12,    13,    14,    15,    16,    39,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      10,    11,    12,    13,    14,    15,    16,    39,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    35,    57,    78,    79,   115,   148,   154,   167,
     168,   181,   184,   189,   227,   236,   237,   270,   274,   275,
     278,   279,   282,   283,   284,   285,   295,   296,   299,   301,
     302,   303,   325,   178,   178,    69,    73,   113,   156,   172,
     173,   186,   307,   271,   113,   178,   287,   178,   287,     8,
     156,   326,   327,   251,   178,   287,   297,     3,    69,     0,
     221,   281,     3,     3,   114,   300,     3,     3,    68,   114,
     300,   172,   113,   178,     3,    98,   112,   123,   145,   272,
       3,     3,   114,    74,   105,   112,   116,   123,   288,     3,
     288,     9,    20,     3,    84,   225,     3,     4,     5,     6,
       7,     8,    17,    18,    25,    26,    34,    56,    60,    63,
      64,    77,    81,   105,   138,   155,   162,   163,   165,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   223,
     228,   252,   253,     3,   112,   123,     3,   223,   255,   256,
     257,   259,   269,     3,   227,    43,    44,    58,   151,    33,
      72,    79,    89,   150,   191,   222,   201,     3,    40,   140,
       3,   114,   201,     3,     3,    68,   114,   300,   222,   273,
       3,   272,    98,   225,   201,     3,     3,   228,   228,   327,
     222,   223,     9,   228,   228,   228,   196,   228,   235,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   228,
       3,    10,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    40,   254,    98,   225,   225,   222,   254,   237,   255,
     167,   225,    59,   111,   124,   135,   153,   165,   260,   262,
      40,   258,    42,    42,    55,    67,    55,    55,    55,    55,
      55,     3,    48,    49,    51,    53,    54,    65,    85,    86,
      87,    88,    91,    95,   110,   117,   122,   129,   132,   133,
     134,   147,   166,   167,   169,   170,   175,   177,   182,   183,
     187,   192,   194,   198,   321,     3,   140,   201,     3,   140,
       3,   114,   201,     3,    26,   195,   238,   188,   255,     3,
       3,   167,   223,   289,   167,   289,     3,   228,   229,   230,
     228,   228,   235,    92,    93,   196,   237,   228,    52,   125,
     180,   228,   233,   228,   228,    26,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   224,   224,   224,
     224,   224,   228,   228,   228,   228,   228,     6,    18,   138,
     223,    13,    14,    16,    19,   228,    34,    36,   161,   223,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,     3,   255,   253,     3,   280,     3,    96,   112,   189,
     266,   224,   224,     3,   298,   256,   124,   153,   263,   257,
     119,   139,   261,     3,     3,     3,     3,     3,     3,     3,
       3,   223,   317,   317,   317,   317,   317,   317,   223,   317,
     317,   317,    51,   318,   318,   317,   317,   317,   223,   318,
     317,   318,   223,   223,    18,    61,    84,   188,   223,     3,
       3,   140,     3,   140,   201,     3,   112,   154,   222,   223,
     323,   324,   228,   141,   244,   255,   238,   273,     3,   294,
       3,   290,   193,   294,   193,   237,   225,   224,   179,    92,
      93,   228,   228,   224,    98,   225,   224,    98,   228,   225,
     225,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     225,   225,   225,     6,   138,   231,   237,   228,   228,   223,
     228,    39,   223,   223,   223,   237,   238,   225,   254,   120,
     120,   120,    20,   222,   225,   238,   261,   261,   119,   140,
     257,   119,    61,    97,   144,   186,   321,   171,     5,   319,
     320,   319,   319,     4,   322,   319,   319,   319,   320,   320,
     319,   319,   319,   322,   320,   319,   320,     5,     5,   138,
     223,   228,   190,     3,   211,   212,   213,   214,   276,   277,
     188,   223,   140,     3,   188,   223,     3,     3,   140,     3,
      55,    61,    97,   100,   113,   120,   144,   186,   308,   309,
     315,   258,    50,   126,   247,   238,    20,   142,   225,   286,
     224,   225,   223,   291,   286,   291,   286,   229,   228,   228,
      92,   179,   228,   228,   228,    98,   118,   234,   234,   228,
     228,   228,   229,   224,   232,   237,    39,   228,   237,   237,
     237,   224,   102,   239,     3,   266,   101,   267,   267,   267,
     228,     3,     3,   244,   257,   228,   140,   188,   264,   265,
     257,   223,   120,   120,   223,     3,   224,   225,   185,   200,
      65,    66,   224,   225,   224,   224,   224,    61,   228,   223,
     223,   223,   223,   223,   224,   225,   190,   276,     3,   188,
     223,   190,   276,   188,   223,   140,     3,   223,   323,     3,
     223,   120,   113,   120,   223,   223,   120,   223,   224,   225,
       3,   237,     3,   245,   246,   228,    84,   228,   120,     3,
       3,    84,   228,   293,   225,   286,   286,    92,   228,   101,
     224,   224,   225,   224,   228,   228,   224,   224,   224,   225,
     224,   224,   229,   224,   228,   224,   224,   224,    50,   107,
     243,   119,   223,   223,   223,    20,    20,   222,   247,   228,
     223,   265,   228,   223,   223,     3,   314,     5,   167,     4,
     320,     4,   320,   320,   223,   224,   276,     3,     3,     3,
       3,     3,   223,   224,   223,   190,   276,   223,   224,   190,
     276,     3,   188,   223,   308,    61,    97,   144,   186,   228,
     223,   223,   223,     3,   250,   250,   223,   314,   304,   323,
     309,   321,    38,    83,   241,   225,   128,   225,   184,    20,
     224,   225,   292,   228,   228,   224,    75,    76,    80,    82,
     103,   104,   106,   198,   199,   228,   224,   228,   240,   228,
     244,     3,   268,   268,   268,   228,   228,     3,   250,   224,
       3,   311,     3,   310,   224,   225,   224,     4,   228,   224,
     224,   224,   224,   225,   276,   276,   223,   224,   276,   223,
     224,   223,   190,   276,   224,   223,   120,   120,   223,   224,
     311,   250,   250,   224,   225,   224,   310,   224,    37,   140,
     157,   316,   246,   228,   228,   294,    84,   228,    84,   228,
     223,   224,   224,   224,   241,   197,   225,   242,   247,   224,
     225,   224,   224,    20,   224,    18,   224,   225,   224,   225,
       3,   224,     3,   224,   224,   276,   224,   276,   276,   223,
     224,   304,   323,   228,   223,   223,   314,   224,   224,   224,
       3,   224,     5,    20,     3,    50,    18,    37,    40,    42,
      45,    55,    61,    62,    84,   120,   138,   144,   186,   293,
     152,   228,   101,   248,     3,   228,   191,   149,     3,     3,
     224,   224,   224,   224,   276,   224,   311,   310,   224,   149,
       5,    78,   174,   146,   190,   138,   223,   223,   223,    41,
       3,   223,     4,     4,     5,     6,     7,    56,   217,   218,
     219,   223,   120,   120,   224,   241,   159,   184,   116,   249,
       3,   224,   224,   224,     3,     3,     3,   223,   223,     5,
     228,     5,    40,    61,   144,   186,   228,   223,   223,   223,
     228,   160,   160,   250,   223,   149,   222,   223,     3,     3,
     224,   225,   224,   224,   225,   223,   223,   120,   224,   224,
     224,   224,   224,   127,   127,     3,   312,     3,     3,   312,
     224,   224,     5,    46,    47,     5,   228,   228,   224,   225,
     222,   223,   223,   224,   223,   158,   224,   224,   224,   224,
     313,     3,     3,   312,   312,   313,   157,   305,   306,     5,
      46,    47,    18,    70,   130,   140,   223,   224,   224,    18,
       3,   224,   225,    70,   191,   109,    99,   143,   164,    78,
     184,   312,   313,   313,   193,   306,    71,   108,    58,   137,
     151,   167,    58,   137,   151,   167,   224,   121,    84,   138,
      84,   138,   313,   176,     4,   131,   140,   140,   136,   136,
       5,     5
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
#line 329 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 335 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 336 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 338 "parser/evoparser.y"
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
#line 356 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 364 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 372 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 378 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 385 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 386 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 387 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 388 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 389 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 390 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 391 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 392 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 393 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 394 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 395 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 396 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 397 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 398 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 399 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 400 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 401 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 403 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 408 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 409 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 410 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 411 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 414 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 415 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 416 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 417 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 418 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 421 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 422 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 425 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 426 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 43:
#line 429 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 433 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 46:
#line 433 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 47:
#line 434 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 48:
#line 434 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 49:
#line 435 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 436 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 437 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 441 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 445 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 446 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 447 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 448 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 449 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 450 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 452 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 453 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 454 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 455 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 456 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 457 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 458 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 459 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 460 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 461 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 462 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 463 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 464 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 465 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 472 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 479 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 486 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 492 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 77:
#line 493 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 78:
#line 494 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 79:
#line 497 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 80:
#line 498 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 81:
#line 501 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 82:
#line 502 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 83:
#line 503 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 84:
#line 504 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 85:
#line 505 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 86:
#line 506 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 87:
#line 507 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 88:
#line 508 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 89:
#line 509 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 90:
#line 513 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 91:
#line 515 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 92:
#line 517 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 93:
#line 519 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 94:
#line 523 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 95:
#line 531 "parser/evoparser.y"
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
#line 541 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 97:
#line 542 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 98:
#line 545 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 99:
#line 546 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 100:
#line 550 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 101:
#line 558 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 102:
#line 566 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 577 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 104:
#line 586 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 105:
#line 591 "parser/evoparser.y"
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
#line 602 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 109:
#line 604 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 110:
#line 607 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 111:
#line 614 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 112:
#line 622 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 113:
#line 623 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 114:
#line 624 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 115:
#line 627 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 628 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 118:
#line 632 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 123:
#line 644 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 124:
#line 651 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 125:
#line 652 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 126:
#line 653 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 127:
#line 654 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 128:
#line 657 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 129:
#line 658 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 130:
#line 659 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 131:
#line 660 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 132:
#line 661 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 134:
#line 665 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 135:
#line 668 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 136:
#line 669 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 137:
#line 672 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 138:
#line 673 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 139:
#line 674 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 140:
#line 675 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 141:
#line 676 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 142:
#line 677 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 143:
#line 678 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 144:
#line 679 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 145:
#line 680 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 146:
#line 683 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 147:
#line 684 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 148:
#line 686 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 149:
#line 694 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 150:
#line 699 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 151:
#line 700 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 152:
#line 701 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 153:
#line 704 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 154:
#line 705 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 157:
#line 714 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 158:
#line 720 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 159:
#line 721 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 160:
#line 722 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 163:
#line 731 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 164:
#line 733 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 165:
#line 735 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 166:
#line 737 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 167:
#line 739 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 168:
#line 742 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 169:
#line 743 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 170:
#line 744 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 171:
#line 747 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 172:
#line 748 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 173:
#line 751 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 174:
#line 752 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 175:
#line 755 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 176:
#line 756 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 177:
#line 757 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 180:
#line 764 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 181:
#line 765 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 182:
#line 770 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 183:
#line 772 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 184:
#line 774 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 186:
#line 778 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 187:
#line 779 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 188:
#line 782 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 189:
#line 783 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 190:
#line 786 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 191:
#line 791 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 192:
#line 799 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 193:
#line 806 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 194:
#line 807 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 195:
#line 808 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 196:
#line 809 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 197:
#line 813 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 198:
#line 816 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 199:
#line 817 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 202:
#line 822 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 203:
#line 827 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 204:
#line 834 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 205:
#line 841 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 206:
#line 851 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 207:
#line 858 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 208:
#line 865 "parser/evoparser.y"
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
#line 875 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 210:
#line 883 "parser/evoparser.y"
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
#line 893 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 212:
#line 901 "parser/evoparser.y"
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
#line 910 "parser/evoparser.y"
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
#line 919 "parser/evoparser.y"
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
#line 929 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 216:
#line 937 "parser/evoparser.y"
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
#line 946 "parser/evoparser.y"
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
#line 955 "parser/evoparser.y"
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
#line 965 "parser/evoparser.y"
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
#line 974 "parser/evoparser.y"
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
#line 986 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 222:
#line 991 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 223:
#line 996 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 224:
#line 1002 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 225:
#line 1009 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 226:
#line 1016 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 227:
#line 1023 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 228:
#line 1033 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 229:
#line 1040 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 230:
#line 1049 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 231:
#line 1056 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 232:
#line 1062 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 233:
#line 1070 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 234:
#line 1076 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 236:
#line 1084 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 237:
#line 1085 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 238:
#line 1086 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 239:
#line 1087 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 240:
#line 1092 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 241:
#line 1099 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 242:
#line 1108 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 243:
#line 1115 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 244:
#line 1121 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 245:
#line 1131 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 246:
#line 1135 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 247:
#line 1141 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 248:
#line 1147 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 249:
#line 1154 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 250:
#line 1160 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 251:
#line 1167 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 252:
#line 1173 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 253:
#line 1179 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 254:
#line 1185 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 255:
#line 1191 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 256:
#line 1197 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 257:
#line 1203 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        AlterTableAddColumn((yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(6) - (7)].strval));
    ;}
    break;

  case 258:
#line 1211 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 259:
#line 1218 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 261:
#line 1226 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 262:
#line 1229 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 263:
#line 1230 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 264:
#line 1231 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 265:
#line 1232 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 266:
#line 1233 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 270:
#line 1240 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 271:
#line 1244 "parser/evoparser.y"
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

  case 272:
#line 1254 "parser/evoparser.y"
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

  case 273:
#line 1266 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 274:
#line 1267 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 275:
#line 1267 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 276:
#line 1270 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 277:
#line 1271 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 278:
#line 1272 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 279:
#line 1273 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 280:
#line 1277 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 281:
#line 1280 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 282:
#line 1281 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 283:
#line 1282 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 284:
#line 1283 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 285:
#line 1289 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 286:
#line 1295 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 287:
#line 1300 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 288:
#line 1305 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 289:
#line 1310 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 290:
#line 1317 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 291:
#line 1322 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 292:
#line 1323 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 293:
#line 1324 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 294:
#line 1329 "parser/evoparser.y"
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

  case 295:
#line 1340 "parser/evoparser.y"
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

  case 296:
#line 1351 "parser/evoparser.y"
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

  case 297:
#line 1362 "parser/evoparser.y"
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

  case 298:
#line 1375 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 299:
#line 1379 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 300:
#line 1380 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 301:
#line 1383 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 302:
#line 1384 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 303:
#line 1388 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 304:
#line 1393 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 305:
#line 1395 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 306:
#line 1397 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 307:
#line 1399 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 308:
#line 1401 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 309:
#line 1405 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 310:
#line 1409 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 311:
#line 1410 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 312:
#line 1415 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 313:
#line 1425 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 314:
#line 1434 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 316:
#line 1438 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 317:
#line 1439 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 318:
#line 1440 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 319:
#line 1441 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 320:
#line 1443 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 321:
#line 1445 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 324:
#line 1453 "parser/evoparser.y"
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

  case 325:
#line 1468 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 326:
#line 1476 "parser/evoparser.y"
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

  case 327:
#line 1490 "parser/evoparser.y"
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

  case 328:
#line 1504 "parser/evoparser.y"
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

  case 329:
#line 1518 "parser/evoparser.y"
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

  case 330:
#line 1530 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 331:
#line 1531 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 332:
#line 1532 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 333:
#line 1535 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 334:
#line 1536 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 335:
#line 1539 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 336:
#line 1540 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 337:
#line 1541 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 338:
#line 1542 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 339:
#line 1543 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 340:
#line 1544 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 341:
#line 1545 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 342:
#line 1546 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 343:
#line 1548 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 344:
#line 1550 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 345:
#line 1552 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 346:
#line 1554 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 347:
#line 1556 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 348:
#line 1558 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 349:
#line 1561 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 350:
#line 1562 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 351:
#line 1565 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 352:
#line 1566 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 353:
#line 1569 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 354:
#line 1570 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 356:
#line 1574 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 357:
#line 1575 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 358:
#line 1576 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 359:
#line 1577 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 360:
#line 1578 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 361:
#line 1579 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 362:
#line 1580 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 363:
#line 1581 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 364:
#line 1582 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 365:
#line 1583 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 366:
#line 1584 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 367:
#line 1585 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 368:
#line 1586 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 369:
#line 1587 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 370:
#line 1588 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 371:
#line 1589 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 372:
#line 1590 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 373:
#line 1593 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 374:
#line 1594 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 375:
#line 1597 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 376:
#line 1599 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 377:
#line 1607 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 378:
#line 1608 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 380:
#line 1610 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 381:
#line 1611 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 382:
#line 1612 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 383:
#line 1613 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 384:
#line 1614 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 385:
#line 1615 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 386:
#line 1616 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 387:
#line 1617 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 388:
#line 1618 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 389:
#line 1625 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 390:
#line 1626 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 391:
#line 1627 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 392:
#line 1628 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 393:
#line 1629 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 394:
#line 1630 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 395:
#line 1631 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 396:
#line 1632 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 397:
#line 1633 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 398:
#line 1634 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 399:
#line 1635 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 400:
#line 1636 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 401:
#line 1637 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 402:
#line 1638 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 403:
#line 1639 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 404:
#line 1640 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 405:
#line 1641 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 406:
#line 1642 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 407:
#line 1643 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 408:
#line 1644 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 409:
#line 1645 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 410:
#line 1648 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 411:
#line 1649 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 412:
#line 1650 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 413:
#line 1653 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 414:
#line 1654 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 415:
#line 1657 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 416:
#line 1658 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 417:
#line 1659 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 419:
#line 1663 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 420:
#line 1664 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 421:
#line 1668 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 422:
#line 1669 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 423:
#line 1670 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 424:
#line 1671 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 425:
#line 1672 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 426:
#line 1673 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 427:
#line 1674 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 428:
#line 1675 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 429:
#line 1676 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 430:
#line 1677 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 431:
#line 1678 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 432:
#line 1679 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 433:
#line 1680 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 434:
#line 1681 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 435:
#line 1682 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 436:
#line 1683 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 437:
#line 1684 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 438:
#line 1685 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 439:
#line 1686 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 440:
#line 1687 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 441:
#line 1688 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 442:
#line 1689 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 443:
#line 1690 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 444:
#line 1691 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 445:
#line 1692 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 446:
#line 1693 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 447:
#line 1694 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 448:
#line 1695 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 449:
#line 1696 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 450:
#line 1697 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 451:
#line 1698 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 452:
#line 1699 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 453:
#line 1702 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 454:
#line 1703 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 455:
#line 1707 "parser/evoparser.y"
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

  case 456:
#line 1719 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 457:
#line 1720 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 458:
#line 1721 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 459:
#line 1725 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 460:
#line 1728 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 461:
#line 1729 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 465:
#line 1733 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 466:
#line 1734 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5865 "parser/evoparser.tab.c"
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


#line 1737 "parser/evoparser.y"

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
