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
     FLAST_INSERT_ID = 466,
     FEVO_SLEEP = 467,
     FEVO_JITTER = 468
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
#define FEVO_SLEEP 467
#define FEVO_JITTER 468




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
#line 552 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 565 "parser/evoparser.tab.c"

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
#define YYLAST   2897

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  228
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  469
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1143

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   468

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     225,   226,    26,    24,   227,    25,   224,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   223,
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
     214,   215,   216,   217,   218,   219,   220,   221,   222
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
     312,   321,   328,   332,   336,   340,   344,   349,   356,   358,
     360,   362,   369,   376,   380,   384,   388,   392,   396,   400,
     404,   408,   412,   417,   424,   428,   434,   439,   445,   449,
     454,   458,   463,   465,   467,   469,   471,   475,   488,   489,
     492,   493,   498,   501,   506,   507,   509,   511,   512,   515,
     516,   519,   520,   524,   526,   530,   533,   534,   537,   542,
     547,   548,   551,   554,   559,   564,   565,   568,   570,   574,
     575,   578,   581,   584,   587,   590,   593,   596,   599,   601,
     605,   607,   610,   613,   615,   616,   618,   622,   624,   626,
     630,   636,   640,   644,   646,   647,   653,   657,   663,   670,
     676,   677,   679,   681,   682,   684,   686,   688,   691,   694,
     695,   696,   698,   701,   706,   713,   720,   727,   728,   731,
     732,   734,   738,   742,   744,   752,   755,   758,   761,   762,
     769,   772,   777,   778,   781,   789,   791,   795,   801,   803,
     812,   823,   833,   845,   856,   869,   881,   895,   905,   917,
     928,   941,   953,   966,   968,   972,   974,   979,   984,   989,
     996,   998,  1002,  1005,  1009,  1015,  1017,  1021,  1022,  1025,
    1028,  1032,  1036,  1038,  1042,  1044,  1048,  1054,  1056,  1067,
    1078,  1096,  1109,  1129,  1141,  1148,  1157,  1164,  1171,  1178,
    1186,  1188,  1197,  1204,  1205,  1210,  1211,  1214,  1217,  1220,
    1223,  1225,  1226,  1227,  1231,  1233,  1237,  1241,  1242,  1249,
    1251,  1253,  1257,  1261,  1269,  1273,  1277,  1283,  1289,  1291,
    1300,  1308,  1316,  1318,  1327,  1328,  1331,  1334,  1338,  1344,
    1350,  1358,  1360,  1365,  1370,  1371,  1374,  1376,  1382,  1390,
    1398,  1408,  1420,  1422,  1425,  1429,  1431,  1441,  1453,  1454,
    1459,  1463,  1469,  1475,  1485,  1496,  1498,  1502,  1512,  1522,
    1532,  1539,  1551,  1560,  1561,  1563,  1566,  1568,  1572,  1578,
    1586,  1591,  1596,  1602,  1608,  1613,  1620,  1632,  1646,  1660,
    1676,  1681,  1688,  1690,  1694,  1696,  1700,  1702,  1706,  1707,
    1712,  1718,  1723,  1729,  1734,  1740,  1745,  1751,  1756,  1761,
    1765,  1769,  1773,  1776,  1780,  1785,  1790,  1792,  1796,  1797,
    1802,  1803,  1807,  1810,  1814,  1818,  1822,  1826,  1832,  1838,
    1844,  1848,  1854,  1857,  1865,  1871,  1879,  1885,  1888,  1892,
    1895,  1899,  1902,  1906,  1912,  1917,  1923,  1931,  1940,  1949,
    1957,  1964,  1971,  1977,  1978,  1982,  1988,  1989,  1991,  1992,
    1995,  1998,  1999,  2004,  2008,  2011,  2015,  2019,  2023,  2027,
    2031,  2035,  2039,  2043,  2047,  2051,  2053,  2055,  2057,  2059,
    2061,  2065,  2071,  2074,  2079,  2081,  2083,  2085,  2087,  2091,
    2095,  2099,  2103,  2109,  2115,  2117,  2119,  2121,  2125,  2129,
    2130,  2132,  2134,  2136,  2140,  2144,  2147,  2149,  2153,  2157
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     229,     0,    -1,   238,   223,    -1,   238,   223,   229,    -1,
       3,    -1,     3,   224,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   138,    -1,   230,    24,
     230,    -1,   230,    25,   230,    -1,   230,    26,   230,    -1,
     230,    27,   230,    -1,   230,    28,   230,    -1,   230,    29,
     230,    -1,    25,   230,    -1,   225,   230,   226,    -1,   230,
      12,   230,    -1,   230,    10,   230,    -1,   230,    11,   230,
      -1,   230,    21,   230,    -1,   230,    22,   230,    -1,   230,
      30,   230,    -1,   230,    23,   230,    -1,    18,   230,    -1,
      17,   230,    -1,   230,    20,   230,    -1,   230,    20,   225,
     239,   226,    -1,   230,    20,    36,   225,   239,   226,    -1,
     230,    20,   161,   225,   239,   226,    -1,   230,    20,    34,
     225,   239,   226,    -1,   230,    15,   138,    -1,   230,    15,
      18,   138,    -1,   230,    15,     6,    -1,   230,    15,    18,
       6,    -1,     8,     9,   230,    -1,   230,    19,   230,    39,
     230,    -1,   230,    18,    19,   230,    39,   230,    -1,   230,
      -1,   230,   227,   231,    -1,    -1,   231,    -1,    -1,   230,
      16,   225,   233,   231,   226,    -1,    -1,   230,    18,    16,
     225,   234,   231,   226,    -1,   230,    16,   225,   239,   226,
      -1,   230,    18,    16,   225,   239,   226,    -1,   201,   225,
     239,   226,    -1,     3,   225,   232,   226,    -1,   206,   225,
      26,   226,    -1,   206,   225,   230,   226,    -1,   207,   225,
     230,   226,    -1,   208,   225,   230,   226,    -1,   209,   225,
     230,   226,    -1,   210,   225,   230,   226,    -1,   202,   225,
     230,   227,   230,   227,   230,   226,    -1,   202,   225,   230,
     227,   230,   226,    -1,   202,   225,   230,    98,   230,   226,
      -1,   202,   225,   230,    98,   230,   101,   230,   226,    -1,
     203,   225,   230,   226,    -1,   203,   225,   235,   230,    98,
     230,   226,    -1,   203,   225,   235,    98,   230,   226,    -1,
     211,   225,   230,   226,    -1,   212,   225,   230,   226,    -1,
     213,   225,   230,   226,    -1,   214,   225,   230,   227,   230,
     226,    -1,   215,   225,   230,   227,   230,   227,   230,   226,
      -1,   216,   225,   230,   227,   230,   226,    -1,   217,   225,
     226,    -1,   218,   225,   226,    -1,   219,   225,   226,    -1,
     220,   225,   226,    -1,   221,   225,   230,   226,    -1,   222,
     225,   230,   227,   230,   226,    -1,   125,    -1,   180,    -1,
      52,    -1,   204,   225,   230,   227,   236,   226,    -1,   205,
     225,   230,   227,   236,   226,    -1,   118,   230,    75,    -1,
     118,   230,    76,    -1,   118,   230,    80,    -1,   118,   230,
      82,    -1,   118,   230,   199,    -1,   118,   230,   198,    -1,
     118,   230,   104,    -1,   118,   230,   103,    -1,   118,   230,
     106,    -1,    60,   230,   237,    92,    -1,    60,   230,   237,
      93,   230,    92,    -1,    60,   237,    92,    -1,    60,   237,
      93,   230,    92,    -1,   196,   230,   179,   230,    -1,   237,
     196,   230,   179,   230,    -1,   230,    14,   230,    -1,   230,
      18,    14,   230,    -1,   230,    13,   230,    -1,   230,    18,
      13,   230,    -1,    56,    -1,    63,    -1,    64,    -1,   239,
      -1,   168,   253,   254,    -1,   168,   253,   254,    98,   257,
     240,   241,   245,   246,   249,   250,   251,    -1,    -1,   195,
     230,    -1,    -1,   102,    50,   242,   244,    -1,   230,   243,
      -1,   242,   227,   230,   243,    -1,    -1,    38,    -1,    83,
      -1,    -1,   197,   152,    -1,    -1,   107,   230,    -1,    -1,
     141,    50,   247,    -1,   248,    -1,   247,   227,   248,    -1,
       3,   243,    -1,    -1,   126,   230,    -1,   126,   230,   227,
     230,    -1,   126,   230,   128,   230,    -1,    -1,   101,   184,
      -1,   101,   159,    -1,   101,   184,   160,   127,    -1,   101,
     159,   160,   127,    -1,    -1,   116,   252,    -1,     3,    -1,
     252,   227,     3,    -1,    -1,   253,    34,    -1,   253,    77,
      -1,   253,    81,    -1,   253,   105,    -1,   253,   165,    -1,
     253,   155,    -1,   253,   163,    -1,   253,   162,    -1,   255,
      -1,   254,   227,   255,    -1,    26,    -1,   230,   256,    -1,
      40,     3,    -1,     3,    -1,    -1,   258,    -1,   257,   227,
     258,    -1,   259,    -1,   261,    -1,     3,   256,   268,    -1,
       3,   224,     3,   256,   268,    -1,   271,   260,     3,    -1,
     225,   257,   226,    -1,    40,    -1,    -1,   258,   262,   119,
     259,   266,    -1,   258,   165,   259,    -1,   258,   165,   259,
     140,   230,    -1,   258,   264,   263,   119,   259,   267,    -1,
     258,   135,   265,   119,   259,    -1,    -1,   111,    -1,    59,
      -1,    -1,   139,    -1,   124,    -1,   153,    -1,   124,   263,
      -1,   153,   263,    -1,    -1,    -1,   267,    -1,   140,   230,
      -1,   188,   225,   252,   226,    -1,   189,   120,   269,   225,
     270,   226,    -1,   112,   120,   269,   225,   270,   226,    -1,
      96,   120,   269,   225,   270,   226,    -1,    -1,   101,   119,
      -1,    -1,     3,    -1,   270,   227,     3,    -1,   225,   239,
     226,    -1,   272,    -1,    78,   273,    98,     3,   240,   246,
     249,    -1,   273,   123,    -1,   273,   145,    -1,   273,   112,
      -1,    -1,    78,   273,   274,    98,   257,   240,    -1,     3,
     275,    -1,   274,   227,     3,   275,    -1,    -1,   224,    26,
      -1,    78,   273,    98,   274,   188,   257,   240,    -1,   276,
      -1,    79,   178,     3,    -1,    79,   178,   114,   201,     3,
      -1,   277,    -1,    57,   113,     3,   140,     3,   225,   278,
     226,    -1,    57,   113,   114,   201,     3,   140,     3,   225,
     278,   226,    -1,    57,   186,   113,     3,   140,     3,   225,
     278,   226,    -1,    57,   186,   113,   114,   201,     3,   140,
       3,   225,   278,   226,    -1,    57,   113,     3,   140,     3,
     188,   190,   225,   278,   226,    -1,    57,   113,   114,   201,
       3,   140,     3,   188,   190,   225,   278,   226,    -1,    57,
     186,   113,     3,   140,     3,   188,   190,   225,   278,   226,
      -1,    57,   186,   113,   114,   201,     3,   140,     3,   188,
     190,   225,   278,   226,    -1,    57,   113,    68,     3,   140,
       3,   225,   278,   226,    -1,    57,   113,    68,   114,   201,
       3,   140,     3,   225,   278,   226,    -1,    57,   186,   113,
      68,     3,   140,     3,   225,   278,   226,    -1,    57,   186,
     113,    68,   114,   201,     3,   140,     3,   225,   278,   226,
      -1,    57,   113,    68,     3,   140,     3,   188,   190,   225,
     278,   226,    -1,    57,   186,   113,    68,     3,   140,     3,
     188,   190,   225,   278,   226,    -1,     3,    -1,   278,   227,
       3,    -1,   279,    -1,   211,   225,     3,   226,    -1,   212,
     225,     3,   226,    -1,   213,   225,     3,   226,    -1,   214,
     225,     3,   227,     3,   226,    -1,   280,    -1,    79,   113,
       3,    -1,   281,   283,    -1,   181,   178,     3,    -1,   181,
     178,     3,   227,   282,    -1,     3,    -1,   282,   227,     3,
      -1,    -1,   283,    58,    -1,   283,   151,    -1,   283,    44,
      42,    -1,   283,    43,    42,    -1,   284,    -1,   148,   178,
       3,    -1,   285,    -1,    35,   178,     3,    -1,    35,   178,
       3,   224,     3,    -1,   286,    -1,    32,   178,     3,    33,
      55,     3,    61,   225,   230,   226,    -1,    32,   178,     3,
      33,    55,     3,   186,   225,   316,   226,    -1,    32,   178,
       3,    33,    55,     3,    97,   120,   225,   313,   226,   149,
       3,   225,   314,   226,   315,    -1,    32,   178,     3,    33,
      55,     3,    61,   225,   230,   226,    18,   191,    -1,    32,
     178,     3,    33,    55,     3,    97,   120,   225,   313,   226,
     149,     3,   225,   314,   226,   315,    18,   191,    -1,    32,
     178,     3,    33,    55,     3,   144,   120,   225,   312,   226,
      -1,    32,   178,     3,    79,    55,     3,    -1,    32,   178,
       3,   150,    55,     3,   171,     3,    -1,    32,   178,     3,
      89,    55,     3,    -1,    32,   178,     3,    72,    55,     3,
      -1,    32,   178,     3,   191,    55,     3,    -1,    32,   178,
       3,    33,    67,     3,   323,    -1,   287,    -1,   115,   289,
     290,     3,   291,   193,   293,   288,    -1,   115,   289,   290,
       3,   291,   239,    -1,    -1,   142,   120,   184,   296,    -1,
      -1,   289,   123,    -1,   289,    74,    -1,   289,   105,    -1,
     289,   112,    -1,   116,    -1,    -1,    -1,   225,   292,   226,
      -1,     3,    -1,   292,   227,     3,    -1,   225,   295,   226,
      -1,    -1,   293,   227,   294,   225,   295,   226,    -1,   230,
      -1,    84,    -1,   295,   227,   230,    -1,   295,   227,    84,
      -1,   115,   289,   290,     3,   167,   296,   288,    -1,     3,
      20,   230,    -1,     3,    20,    84,    -1,   296,   227,     3,
      20,   230,    -1,   296,   227,     3,    20,    84,    -1,   297,
      -1,   154,   289,   290,     3,   291,   193,   293,   288,    -1,
     154,   289,   290,     3,   167,   296,   288,    -1,   154,   289,
     290,     3,   291,   239,   288,    -1,   298,    -1,   184,   299,
     257,   167,   300,   240,   246,   249,    -1,    -1,   289,   123,
      -1,   289,   112,    -1,     3,    20,   230,    -1,     3,   224,
       3,    20,   230,    -1,   300,   227,     3,    20,   230,    -1,
     300,   227,     3,   224,     3,    20,   230,    -1,   301,    -1,
      57,    69,   302,     3,    -1,    57,   156,   302,     3,    -1,
      -1,   114,   201,    -1,   303,    -1,    57,    73,     3,    40,
     323,    -1,    57,    73,     3,    40,   323,    84,   230,    -1,
      57,    73,     3,    40,   323,    18,   138,    -1,    57,    73,
       3,    40,   323,    61,   225,   230,   226,    -1,    57,    73,
       3,    40,   323,    18,   138,    61,   225,   230,   226,    -1,
     304,    -1,   189,     3,    -1,   189,    69,     3,    -1,   305,
      -1,    57,   309,   178,   302,     3,   225,   310,   226,   306,
      -1,    57,   309,   178,   302,     3,   224,     3,   225,   310,
     226,   306,    -1,    -1,   306,    37,    20,     5,    -1,   306,
      37,     5,    -1,   306,   140,     3,    78,     3,    -1,   306,
     140,     3,   174,     3,    -1,   306,   157,    50,   190,   225,
       3,   226,   158,     5,    -1,   306,   157,    50,   146,   225,
       3,   226,   225,   307,   226,    -1,   308,    -1,   307,   227,
     308,    -1,   157,     3,   193,   121,   176,     4,   140,   136,
       5,    -1,   157,     3,   193,   121,   176,   131,   140,   136,
       5,    -1,    57,   309,   178,   302,     3,   225,   310,   226,
     325,    -1,    57,   309,   178,   302,     3,   325,    -1,    57,
     309,   178,   302,     3,   224,     3,   225,   310,   226,   325,
      -1,    57,   309,   178,   302,     3,   224,     3,   325,    -1,
      -1,   172,    -1,   173,   172,    -1,   311,    -1,   310,   227,
     311,    -1,   144,   120,   225,   312,   226,    -1,    55,     3,
     144,   120,   225,   312,   226,    -1,   120,   225,   252,   226,
      -1,   113,   225,   252,   226,    -1,   100,   113,   225,   252,
     226,    -1,   100,   120,   225,   252,   226,    -1,    61,   225,
     230,   226,    -1,    55,     3,    61,   225,   230,   226,    -1,
      97,   120,   225,   313,   226,   149,     3,   225,   314,   226,
     315,    -1,    97,   120,   225,   313,   226,   149,     3,   224,
       3,   225,   314,   226,   315,    -1,    55,     3,    97,   120,
     225,   313,   226,   149,     3,   225,   314,   226,   315,    -1,
      55,     3,    97,   120,   225,   313,   226,   149,     3,   224,
       3,   225,   314,   226,   315,    -1,   186,   225,   316,   226,
      -1,    55,     3,   186,   225,   316,   226,    -1,     3,    -1,
     312,   227,     3,    -1,     3,    -1,   313,   227,     3,    -1,
       3,    -1,   314,   227,     3,    -1,    -1,   315,   140,    78,
      58,    -1,   315,   140,    78,   167,   138,    -1,   315,   140,
      78,   151,    -1,   315,   140,    78,   167,    84,    -1,   315,
     140,   184,    58,    -1,   315,   140,   184,   167,   138,    -1,
     315,   140,   184,   151,    -1,   315,   140,   184,   167,    84,
      -1,   315,   140,    78,   137,    -1,   315,   140,   184,   137,
      -1,   315,   130,    99,    -1,   315,   130,   164,    -1,   315,
     130,   143,    -1,   315,    70,    -1,   315,    18,    70,    -1,
     315,    70,   109,    71,    -1,   315,    70,   109,   108,    -1,
       3,    -1,   316,   227,     3,    -1,    -1,   317,     3,   323,
     318,    -1,    -1,   318,    18,   138,    -1,   318,   138,    -1,
     318,    84,     4,    -1,   318,    84,     5,    -1,   318,    84,
       7,    -1,   318,    84,     6,    -1,   318,    84,   217,   225,
     226,    -1,   318,    84,   218,   225,   226,    -1,   318,    84,
     219,   225,   226,    -1,   318,    84,    56,    -1,   318,    84,
     225,   230,   226,    -1,   318,    37,    -1,   318,    37,   225,
       5,   227,     5,   226,    -1,   318,    37,   225,     5,   226,
      -1,   318,    42,   225,     5,   227,     5,   226,    -1,   318,
      42,   225,     5,   226,    -1,   318,    42,    -1,   318,   186,
     120,    -1,   318,   186,    -1,   318,   144,   120,    -1,   318,
     120,    -1,   318,    62,     4,    -1,   318,    61,   225,   230,
     226,    -1,   318,    55,     3,   186,    -1,   318,    55,     3,
     144,   120,    -1,   318,    55,     3,    61,   225,   230,   226,
      -1,   318,    45,    41,    40,   225,   230,   226,    46,    -1,
     318,    45,    41,    40,   225,   230,   226,    47,    -1,   318,
      45,    41,    40,   225,   230,   226,    -1,   318,    40,   225,
     230,   226,    46,    -1,   318,    40,   225,   230,   226,    47,
      -1,   318,    40,   225,   230,   226,    -1,    -1,   225,     5,
     226,    -1,   225,     5,   227,     5,   226,    -1,    -1,    51,
      -1,    -1,   321,   185,    -1,   321,   200,    -1,    -1,   322,
      65,   167,     4,    -1,   322,    66,     4,    -1,    54,   319,
      -1,   170,   319,   321,    -1,   166,   319,   321,    -1,   134,
     319,   321,    -1,   117,   319,   321,    -1,   110,   319,   321,
      -1,    53,   319,   321,    -1,   147,   319,   321,    -1,    85,
     319,   321,    -1,    95,   319,   321,    -1,    87,   319,   321,
      -1,    88,    -1,   183,    -1,   177,    -1,    86,    -1,   198,
      -1,    65,   319,   322,    -1,   192,   225,     5,   226,   322,
      -1,    51,   319,    -1,   194,   225,     5,   226,    -1,   182,
      -1,    48,    -1,   133,    -1,   129,    -1,   169,   320,   322,
      -1,   175,   320,   322,    -1,   132,   320,   322,    -1,   122,
     320,   322,    -1,    91,   225,   324,   226,   322,    -1,   167,
     225,   324,   226,   322,    -1,    49,    -1,   187,    -1,     4,
      -1,   324,   227,     4,    -1,   326,   260,   239,    -1,    -1,
     112,    -1,   154,    -1,   327,    -1,   167,   156,     3,    -1,
     167,   156,    84,    -1,   167,   328,    -1,   329,    -1,   328,
     227,   329,    -1,     8,    20,   230,    -1,     8,     9,   230,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   324,   324,   325,   330,   337,   338,   339,   357,   365,
     373,   379,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     410,   411,   412,   413,   416,   417,   418,   419,   420,   423,
     424,   427,   428,   431,   432,   435,   435,   436,   436,   437,
     438,   439,   443,   447,   448,   449,   450,   451,   452,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   474,   481,   488,   492,   496,   502,   503,
     504,   507,   508,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   522,   524,   526,   528,   532,   540,   551,   552,
     555,   556,   559,   567,   575,   586,   596,   597,   611,   612,
     613,   614,   617,   624,   632,   633,   634,   637,   638,   641,
     642,   645,   646,   649,   650,   653,   661,   662,   663,   664,
     667,   668,   669,   670,   671,   674,   675,   678,   679,   682,
     683,   684,   685,   686,   687,   688,   689,   690,   693,   694,
     695,   703,   709,   710,   711,   714,   715,   718,   719,   723,
     730,   731,   732,   735,   736,   740,   742,   744,   746,   748,
     752,   753,   754,   757,   758,   761,   762,   765,   766,   767,
     770,   771,   774,   775,   779,   781,   783,   785,   788,   789,
     792,   793,   796,   800,   808,   816,   817,   818,   819,   823,
     826,   827,   830,   830,   832,   836,   843,   850,   860,   867,
     874,   884,   892,   902,   910,   919,   928,   938,   946,   955,
     964,   974,   983,   995,  1000,  1005,  1011,  1018,  1025,  1032,
    1042,  1049,  1058,  1065,  1071,  1079,  1085,  1093,  1094,  1095,
    1096,  1097,  1101,  1108,  1117,  1124,  1130,  1141,  1144,  1150,
    1156,  1163,  1169,  1176,  1182,  1188,  1194,  1200,  1206,  1212,
    1220,  1228,  1234,  1247,  1248,  1251,  1252,  1253,  1254,  1255,
    1258,  1258,  1261,  1262,  1265,  1275,  1288,  1289,  1289,  1292,
    1293,  1294,  1295,  1298,  1302,  1303,  1304,  1305,  1311,  1314,
    1320,  1325,  1331,  1337,  1344,  1345,  1346,  1350,  1361,  1372,
    1383,  1397,  1401,  1402,  1405,  1406,  1410,  1414,  1416,  1418,
    1420,  1422,  1427,  1431,  1432,  1436,  1445,  1455,  1459,  1460,
    1461,  1462,  1463,  1464,  1466,  1470,  1471,  1474,  1489,  1496,
    1511,  1524,  1539,  1552,  1553,  1554,  1557,  1558,  1561,  1562,
    1563,  1564,  1565,  1566,  1567,  1568,  1569,  1571,  1573,  1575,
    1577,  1579,  1583,  1584,  1587,  1588,  1591,  1592,  1595,  1596,
    1597,  1598,  1599,  1600,  1601,  1602,  1603,  1604,  1605,  1606,
    1607,  1608,  1609,  1610,  1611,  1612,  1615,  1616,  1619,  1619,
    1629,  1630,  1631,  1632,  1633,  1634,  1635,  1636,  1637,  1638,
    1639,  1640,  1647,  1648,  1649,  1650,  1651,  1652,  1653,  1654,
    1655,  1656,  1657,  1658,  1659,  1660,  1661,  1662,  1663,  1664,
    1665,  1666,  1667,  1670,  1671,  1672,  1675,  1676,  1679,  1680,
    1681,  1684,  1685,  1686,  1690,  1691,  1692,  1693,  1694,  1695,
    1696,  1697,  1698,  1699,  1700,  1701,  1702,  1703,  1704,  1705,
    1706,  1707,  1708,  1709,  1710,  1711,  1712,  1713,  1714,  1715,
    1716,  1717,  1718,  1719,  1720,  1721,  1724,  1725,  1728,  1741,
    1742,  1743,  1747,  1750,  1751,  1752,  1753,  1753,  1755,  1756
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
  "FGEN_RANDOM_UUID_V7", "FSNOWFLAKE_ID", "FLAST_INSERT_ID", "FEVO_SLEEP",
  "FEVO_JITTER", "';'", "'.'", "'('", "')'", "','", "$accept", "stmt_list",
  "expr", "val_list", "opt_val_list", "@1", "@2", "trim_ltb",
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
  "drop_index_stmt", "truncate_table_stmt", "truncate_extra_tables",
  "opt_truncate_options", "reclaim_table_stmt", "analyze_table_stmt",
  "alter_table_stmt", "insert_stmt", "opt_ondupupdate", "insert_opts",
  "opt_into", "opt_col_names", "insert_col_list", "insert_vals_list", "@3",
  "insert_vals", "insert_asgn_list", "replace_stmt", "update_stmt",
  "update_opts", "update_asgn_list", "create_database_stmt",
  "opt_if_not_exists", "create_domain_stmt", "use_database_stmt",
  "create_table_stmt", "opt_table_options", "shard_range_list",
  "shard_range_def", "opt_temporary", "create_col_list",
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
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   228,   229,   229,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   231,   231,   232,   232,   233,   230,   234,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   235,   235,
     235,   230,   230,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   230,   230,   230,   230,   237,   237,   230,   230,
     230,   230,   230,   230,   230,   238,   239,   239,   240,   240,
     241,   241,   242,   242,   243,   243,   243,   244,   244,   245,
     245,   246,   246,   247,   247,   248,   249,   249,   249,   249,
     250,   250,   250,   250,   250,   251,   251,   252,   252,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   254,   254,
     254,   255,   256,   256,   256,   257,   257,   258,   258,   259,
     259,   259,   259,   260,   260,   261,   261,   261,   261,   261,
     262,   262,   262,   263,   263,   264,   264,   265,   265,   265,
     266,   266,   267,   267,   268,   268,   268,   268,   269,   269,
     270,   270,   271,   238,   272,   273,   273,   273,   273,   272,
     274,   274,   275,   275,   272,   238,   276,   276,   238,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   278,   278,   278,   279,   279,   279,   279,
     238,   280,   238,   281,   281,   282,   282,   283,   283,   283,
     283,   283,   238,   284,   238,   285,   285,   238,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     238,   287,   287,   288,   288,   289,   289,   289,   289,   289,
     290,   290,   291,   291,   292,   292,   293,   294,   293,   295,
     295,   295,   295,   287,   296,   296,   296,   296,   238,   297,
     297,   297,   238,   298,   299,   299,   299,   300,   300,   300,
     300,   238,   301,   301,   302,   302,   238,   303,   303,   303,
     303,   303,   238,   304,   304,   238,   305,   305,   306,   306,
     306,   306,   306,   306,   306,   307,   307,   308,   308,   305,
     305,   305,   305,   309,   309,   309,   310,   310,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   312,   312,   313,   313,   314,   314,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   316,   316,   317,   311,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   319,   319,   319,   320,   320,   321,   321,
     321,   322,   322,   322,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   324,   324,   325,   326,
     326,   326,   238,   327,   327,   327,   328,   328,   329,   329
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
       8,     6,     3,     3,     3,     3,     4,     6,     1,     1,
       1,     6,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     6,     3,     5,     4,     5,     3,     4,
       3,     4,     1,     1,     1,     1,     3,    12,     0,     2,
       0,     4,     2,     4,     0,     1,     1,     0,     2,     0,
       2,     0,     3,     1,     3,     2,     0,     2,     4,     4,
       0,     2,     2,     4,     4,     0,     2,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     3,
       1,     2,     2,     1,     0,     1,     3,     1,     1,     3,
       5,     3,     3,     1,     0,     5,     3,     5,     6,     5,
       0,     1,     1,     0,     1,     1,     1,     2,     2,     0,
       0,     1,     2,     4,     6,     6,     6,     0,     2,     0,
       1,     3,     3,     1,     7,     2,     2,     2,     0,     6,
       2,     4,     0,     2,     7,     1,     3,     5,     1,     8,
      10,     9,    11,    10,    12,    11,    13,     9,    11,    10,
      12,    11,    12,     1,     3,     1,     4,     4,     4,     6,
       1,     3,     2,     3,     5,     1,     3,     0,     2,     2,
       3,     3,     1,     3,     1,     3,     5,     1,    10,    10,
      17,    12,    19,    11,     6,     8,     6,     6,     6,     7,
       1,     8,     6,     0,     4,     0,     2,     2,     2,     2,
       1,     0,     0,     3,     1,     3,     3,     0,     6,     1,
       1,     3,     3,     7,     3,     3,     5,     5,     1,     8,
       7,     7,     1,     8,     0,     2,     2,     3,     5,     5,
       7,     1,     4,     4,     0,     2,     1,     5,     7,     7,
       9,    11,     1,     2,     3,     1,     9,    11,     0,     4,
       3,     5,     5,     9,    10,     1,     3,     9,     9,     9,
       6,    11,     8,     0,     1,     2,     1,     3,     5,     7,
       4,     4,     5,     5,     4,     6,    11,    13,    13,    15,
       4,     6,     1,     3,     1,     3,     1,     3,     0,     4,
       5,     4,     5,     4,     5,     4,     5,     4,     4,     3,
       3,     3,     2,     3,     4,     4,     1,     3,     0,     4,
       0,     3,     2,     3,     3,     3,     3,     5,     5,     5,
       3,     5,     2,     7,     5,     7,     5,     2,     3,     2,
       3,     2,     3,     5,     4,     5,     7,     8,     8,     7,
       6,     6,     5,     0,     3,     5,     0,     1,     0,     2,
       2,     0,     4,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       3,     5,     2,     4,     1,     1,     1,     1,     3,     3,
       3,     3,     5,     5,     1,     1,     1,     3,     3,     0,
       1,     1,     1,     3,     3,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   333,   198,     0,   265,     0,   265,     0,
     139,     0,   265,     0,     0,     0,   105,   193,   205,   208,
     230,   237,   242,   244,   247,   260,   288,   292,   301,   306,
     312,   315,   462,     0,     0,   304,     0,     0,   304,   334,
       0,     0,     0,     0,     0,     0,   271,     0,   271,     0,
       0,   465,   466,     0,     0,     0,     0,   313,     0,     1,
       2,   232,     0,   245,     0,     0,     0,     0,     0,     0,
       0,   335,     0,   304,   202,     0,   197,   195,   196,     0,
     231,   206,     0,   267,   268,   269,   270,   266,     0,   243,
       0,     0,     0,   463,   464,     0,     4,     7,     8,    10,
       9,     6,     0,     0,     0,   150,   140,   102,     0,   103,
     104,   141,   142,   143,    11,   145,   147,   146,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   154,   106,   148,   233,   269,   266,   154,     0,
       0,   155,   157,   158,   164,   314,     3,     0,     0,   238,
     239,     0,     0,     0,     0,     0,     0,     0,   305,   302,
       0,     0,     0,     0,     0,   303,     0,     0,     0,     0,
       0,   200,   108,     0,     0,     0,     0,   272,   272,   469,
     468,   467,     0,    43,     0,    28,    27,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   151,     0,     0,     0,
       0,   187,     0,     0,     0,     0,   172,   171,   175,   179,
     176,     0,     0,   173,   163,     0,   241,   240,     0,     0,
       0,     0,     0,     0,     0,   246,   445,   454,   413,   413,
     413,   413,   413,   438,   413,   435,     0,   413,   413,   413,
     416,   447,   416,   446,   413,   413,   413,     0,   416,   413,
     416,   437,   444,   436,   455,     0,     0,   439,   307,     0,
       0,     0,     0,     0,     0,     0,     0,   459,   203,     0,
     121,     0,   108,   202,   207,     0,     0,     0,     0,     0,
       5,    41,    44,     0,    38,     0,     0,    94,     0,     0,
       0,     0,    80,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,     0,     0,    19,    21,    22,
      20,   100,    98,    36,     0,    34,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,    23,    24,    26,
      12,    13,    14,    15,    16,    17,    25,   152,   108,   149,
     235,   234,   154,     0,     0,     0,   159,   192,   162,     0,
     108,   156,   173,   173,     0,   166,     0,   174,     0,   161,
       0,     0,   257,   254,   256,     0,   258,     0,   442,   418,
     424,   421,   418,   418,     0,   418,   418,   418,   417,   421,
     421,   418,   418,   418,     0,   421,   418,   421,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   460,   461,     0,   378,   330,   164,   109,     0,
     126,   108,   199,   201,     0,   263,   274,     0,     0,   262,
     263,     0,   263,     0,    52,     0,    92,     0,     0,     0,
      51,     0,     0,    63,     0,     0,     0,     0,    53,    54,
      55,    56,    57,    58,    66,    67,    68,     0,     0,     0,
      76,     0,    37,    35,     0,     0,   101,    99,    47,     0,
       0,     0,     0,     0,     0,   110,     0,   187,   189,   189,
     189,     0,     0,     0,   121,   177,   178,     0,     0,   180,
       0,     0,     0,     0,     0,   259,     0,     0,   430,   440,
     432,   434,   456,     0,   433,   429,   428,   451,   450,   427,
     431,   426,     0,   448,   425,   449,     0,     0,   309,     0,
     308,     0,   223,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   336,     0,
       0,     0,     0,   194,   204,     0,     0,     0,   283,   273,
       0,     0,   263,   290,   263,   291,    42,    96,     0,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,    39,     0,     0,
       0,    30,     0,   119,   236,   160,     0,     0,     0,     0,
     297,     0,     0,   126,   169,   167,     0,     0,   165,   181,
       0,     0,     0,     0,     0,   255,   414,     0,   419,   420,
       0,     0,   421,     0,   421,   421,   443,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   378,   332,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   318,   378,
       0,   458,   114,   122,   123,   127,   285,   284,     0,     0,
     275,   280,   279,     0,   277,   261,   289,    93,    97,     0,
      61,    60,     0,    65,     0,     0,    81,    82,    69,     0,
      71,    77,    46,     0,    50,    40,    33,    31,    32,     0,
       0,   121,   188,     0,     0,     0,     0,     0,     0,   293,
     182,     0,   168,     0,     0,     0,   376,     0,     0,     0,
     423,   452,   457,   453,   441,     0,   310,     0,     0,     0,
       0,     0,   224,     0,   217,     0,     0,     0,     0,   211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,     0,     0,     0,     0,   316,
     329,   337,   380,   115,   116,   125,     0,     0,     0,     0,
       0,   276,     0,     0,     0,     0,    64,    83,    84,    85,
      86,    90,    89,    91,    88,    87,     0,    48,   114,   117,
     120,   126,   190,     0,     0,     0,   298,   299,     0,     0,
     248,   354,     0,   352,     0,   249,     0,   415,   422,     0,
     213,   226,   227,   228,     0,     0,     0,     0,   210,     0,
       0,   219,     0,     0,     0,   318,     0,     0,     0,     0,
     344,     0,     0,     0,   341,     0,   340,     0,   350,     0,
       0,     0,   379,   124,   129,   128,   264,   287,   286,   282,
     281,     0,    62,    59,    70,   112,     0,     0,   111,   130,
     186,     0,   185,   184,     0,   183,     0,     0,     0,   253,
       0,   377,   311,     0,   221,   218,     0,   215,     0,     0,
       0,   212,   317,   331,     0,     0,     0,     0,     0,   342,
     343,   138,   338,   320,     0,     0,     0,     0,   392,     0,
     397,     0,     0,     0,     0,     0,   401,   382,     0,   399,
       0,   118,   114,     0,   135,   191,   300,   251,     0,   355,
     353,   229,   214,   222,   220,     0,   345,     0,     0,   351,
       0,   319,     0,     0,     0,     0,   381,     0,     0,     0,
       0,     0,     0,   402,   383,   384,   386,   385,   390,     0,
       0,     0,     0,   400,   398,   278,   113,   132,   131,     0,
     107,     0,   216,     0,   339,     0,   321,   322,     0,     0,
       0,     0,     0,     0,     0,     0,   404,     0,     0,     0,
       0,     0,     0,     0,   136,     0,     0,     0,     0,     0,
       0,   394,     0,   412,   396,     0,     0,     0,   405,   403,
     387,   388,   389,   391,   134,   133,   356,     0,     0,     0,
       0,     0,     0,     0,   410,   411,     0,     0,     0,   358,
       0,     0,     0,     0,   358,     0,     0,   393,   395,   409,
     406,   250,   357,     0,     0,     0,   346,     0,     0,   325,
     323,   407,   408,     0,   372,     0,     0,     0,   358,   358,
       0,     0,   324,     0,   373,   252,     0,   369,   371,   370,
       0,     0,     0,   348,   347,     0,   326,   374,   375,   359,
     367,   361,     0,   363,   368,   365,     0,   358,     0,   362,
     360,   366,   364,   349,     0,     0,     0,     0,     0,     0,
       0,   327,   328
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   331,   332,   333,   514,   634,   346,   626,   200,
      15,    16,   320,   643,   839,   815,   908,   751,   470,   713,
     714,   603,   964,  1010,   805,    53,   143,   144,   246,   150,
     151,   152,   265,   153,   262,   418,   263,   414,   658,   659,
     406,   647,   843,   154,    17,    43,    79,   181,    18,    19,
     577,   578,    20,    21,   401,    61,    22,    23,    24,    25,
     608,    46,    88,   327,   477,   612,   823,   723,   475,    26,
      27,    56,   410,    28,    65,    29,    30,    31,   809,  1088,
    1089,    42,   597,   598,   854,   852,  1057,  1081,   767,   599,
     892,   428,   439,   548,   549,   308,   553,   466,   467,    32,
      51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -983
static const yytype_int16 yypact[] =
{
    2465,  -103,   -97,   308,  -983,   -67,  -983,   -86,  -983,    37,
    -983,   -74,     5,    57,    84,   -80,  -983,  -983,  -983,  -983,
    -983,  -983,  -983,  -983,  -983,  -983,  -983,  -983,  -983,  -983,
    -983,  -983,  -983,   218,   236,   138,   294,   231,   138,  -983,
     123,   220,   163,   106,   341,    25,   386,   346,   386,    62,
      40,   216,  -983,   419,   387,   392,     8,  -983,   427,  -983,
    2465,   371,    21,   227,   261,   487,   429,   355,    34,   304,
     504,  -983,   345,   138,   286,   509,  -983,  -983,  -983,   -57,
    -983,  -983,   313,  -983,  -983,  -983,  -983,  -983,   517,  -983,
     520,  1427,  1427,  -983,  -983,   557,   301,  -983,  -983,  -983,
    -983,   560,  1427,  1427,  1427,  -983,  -983,  -983,   770,  -983,
    -983,  -983,  -983,  -983,  -983,  -983,  -983,  -983,  -983,   348,
     360,   362,   366,   426,   428,   437,   441,   448,   450,   455,
     460,   470,   474,   494,   496,   498,   541,   543,   547,   569,
     584,  1427,  2790,   -29,  -983,   465,    13,    15,    19,    10,
    -114,   440,  -983,  -983,   745,  -983,  -983,   787,   811,  -983,
    -983,   283,   769,   809,   879,   883,   910,   884,  -983,  -983,
    2505,   966,   856,   800,  1015,  -983,   916,   105,   822,  1055,
    1054,  -983,   151,  -130,     8,  1078,  1079,   -91,   -81,  2867,
    2867,  -983,  1080,  1427,  1427,   903,   903,  -983,  1427,  2403,
      35,   917,  1427,   536,  1427,  1427,   832,  1427,  1427,  1427,
    1427,  1427,  1427,  1427,  1427,  1427,  1427,   858,   861,   862,
     863,  1427,  1427,  1713,  -983,  1427,  1427,  1427,  1427,  1427,
      26,   871,   644,  1427,   664,  1427,  1427,  1427,  1427,  1427,
    1427,  1427,  1427,  1427,  1427,  1095,  -983,     8,  1427,  1096,
    1097,   -49,   875,   319,  1099,     8,  -983,  -983,  -983,   265,
    -983,     8,   984,   967,  -983,  1104,  -983,  -983,  1105,  1106,
    1107,  1108,  1110,  1111,  1112,  -983,  -983,  -983,   894,   894,
     894,   894,   894,  -983,   894,  -983,   895,   894,   894,   894,
    1065,  -983,  1065,  -983,   894,   894,   894,   897,  1065,   894,
    1065,  -983,  -983,  -983,  -983,   898,   901,  -983,    46,  -108,
    1124,  1125,   989,  1127,   991,   931,  1130,   222,  -983,  1427,
     993,     8,    28,   286,  -983,  1132,  1133,   -73,  1132,   293,
    -983,   382,  -983,   912,  2867,  2424,   135,  -983,  1427,  1427,
     913,   249,  -983,  -983,  -983,  1734,   999,   891,   932,   914,
    1776,  1797,  1818,  1839,  1874,  1901,  1922,  1943,  1303,  1482,
    1556,  -983,  -983,  -983,  -983,  1964,  1643,  -983,   792,  1225,
    1752,  2110,  2110,  -983,    59,  -983,   917,  1427,  1427,   919,
    1427,  2823,   920,   921,   923,  1061,   508,   589,   706,   817,
     550,   550,  1119,  1119,  1119,  1119,  -983,  -983,    28,  -983,
    -983,   915,   295,  1021,  1032,  1033,  -983,  -983,  -983,     0,
     190,   440,   967,   967,  1035,  1016,     8,  -983,  1036,  -983,
     140,  2505,  -983,  -983,  -983,   986,  -983,  1153,  -983,  -983,
    -983,  -983,  -983,  -983,  1156,  -983,  -983,  -983,  -983,  -983,
    -983,  -983,  -983,  -983,  1156,  -983,  -983,  -983,  1157,  1158,
    1023,   939,  1427,   975,    69,   149,  1026,  1164,   191,  1165,
    1166,  1030,  -983,  -983,  1169,    22,  -983,   745,  2867,  1123,
    1048,    28,  -983,  -983,  1161,   -94,  -983,   321,   957,  -983,
     -94,   957,  1041,  1427,  -983,  1427,  -983,  1427,  2715,  2466,
    -983,  1427,  1427,  -983,  1427,  2694,  1066,  1066,  -983,  -983,
    -983,  -983,  -983,  -983,  -983,  -983,  -983,  1427,  1427,  1427,
    -983,  1427,  -983,  -983,  1427,   959,  2110,  2110,   917,  2845,
    1427,   917,   917,   917,   960,  1085,  1185,   -49,  1090,  1090,
    1090,  1427,  1189,  1190,   993,  -983,  -983,     8,  1427,   -41,
       8,   969,  1075,  1076,   973,  -983,  1219,   336,   289,   490,
     289,   289,  -983,   363,   289,   289,   289,   490,   490,   289,
     289,   289,   368,   490,   289,   490,   997,  1000,  1170,  1427,
    2867,  1002,  -983,  1005,  1008,  1009,  1017,   375,  -983,  1067,
      69,  1255,   203,  1069,    69,   232,  1120,  1258,   -16,  1281,
    1060,  1167,   -15,  1086,  1109,  1200,  1113,   380,  -983,  1332,
     917,  1333,  1427,  -983,  -983,  1087,  1217,  1336,  -983,  -983,
    1337,  1172,   -90,  -983,   -90,  -983,  -983,  2867,  2736,  -983,
    1427,  1692,   292,  1985,  1427,  1427,  1115,  1122,  2006,  1664,
    2027,  2048,  1126,  -983,  1427,  1128,  1427,   685,  1129,  1134,
    1135,  -983,  1299,  1243,  -983,  -983,  1232,  1137,  1138,  1140,
    2867,  1338,     1,  1048,  -983,  2867,  1427,  1141,  -983,  -983,
     -41,  1427,  1142,  1143,  1350,  -983,  -983,  1354,  -983,  -983,
    1202,  1366,  -983,  1367,  -983,  -983,  -983,  1147,  2069,    69,
    1393,  1395,  1397,  1398,  -983,  1407,  1186,   416,  1187,  1223,
      69,  1191,   438,  1224,    69,  1412,   243,    22,  -983,   156,
    1427,  1192,  1195,  1196,  1419,  1419,  1199,  1350,   175,    22,
    2505,  -983,     4,  1198,  -983,   343,  -983,  2867,  1244,  1409,
    -983,  -983,  2867,   451,  -983,  -983,  -983,  -983,  2867,  1427,
    -983,  -983,  1427,  -983,  2091,  2445,  -983,  -983,  -983,  1427,
    -983,  -983,  -983,  1201,  -983,   685,  -983,  -983,  -983,  1427,
    1427,   993,  -983,  1433,  1433,  1433,  1427,  1427,  1434,  -983,
    2867,  1419,  -983,  2131,  1435,  1436,  -983,   457,  1214,  1437,
    -983,   490,  -983,   490,   490,  1427,  -983,   461,  1216,  1220,
    1221,  1222,  -983,    69,  -983,    69,  1218,   464,    69,  -983,
    1226,   467,  1228,  1260,    69,   475,  1229,  1328,  1335,  1231,
    2152,  1435,  1419,  1419,  -983,   491,   499,  1436,   533,    92,
    -983,  -983,  -983,  -983,  -983,  -983,  1333,  1427,  1427,  1132,
    1339,  -983,  1401,  1233,  2173,  2194,  -983,  -983,  -983,  -983,
    -983,  -983,  -983,  -983,  -983,  -983,  2215,  -983,  2757,   290,
    2867,  1048,  -983,   544,   553,   566,  2867,  2867,  1439,   573,
    1442,  -983,   601,  -983,   605,  -983,  1459,  -983,  -983,  2236,
    -983,  -983,  -983,  -983,  1460,   625,   629,    69,  -983,   633,
      69,  -983,    69,  1241,   636,   175,  1427,  1242,  1245,  1350,
    -983,   667,   671,   673,  -983,  1465,  -983,   710,  -983,   331,
    1466,  1421,   466,  -983,  2867,  2867,  1246,  -983,  2867,  -983,
    2867,  1172,  -983,  -983,  -983,  -983,  1320,  1427,  -983,  1373,
    -983,  1472,  -983,  -983,  1427,  -983,  1285,  1329,  1476,  -983,
    1477,  -983,  -983,  1256,  -983,  -983,   714,  -983,   737,   741,
      69,  -983,    92,  -983,  2257,  1435,  1436,   771,  1340,  -983,
    -983,  -983,  -983,  -983,  1479,   -38,   111,  1343,  1261,  1263,
    1274,  1473,  1510,  1290,  1512,    29,  -983,  -983,  1399,  1400,
     773,  -983,  2757,   329,  1402,  -983,  2867,  -983,  1514,  -983,
    -983,  -983,  -983,  -983,  -983,   782,  -983,   784,   786,  -983,
    1518,  -983,  1519,  1520,  1300,  1301,  -983,  1522,  1427,  1523,
    1484,    70,  1427,  -983,  -983,  -983,  -983,  -983,  -983,  1304,
    1306,  1307,  1427,  -983,  -983,  -983,  -983,  1374,  1375,  1419,
    -983,  1308,  -983,  1387,  -983,   373,  -983,  -983,  1534,  1535,
     788,  2278,   793,  1348,  1362,  1443,  -983,  2300,  1363,  1364,
    1365,  2321,  1461,  1467,  1368,  1559,  1589,  1590,  1559,  1370,
    1371,  -983,  1593,   716,  -983,  1594,  1427,  1427,  -983,  -983,
    -983,  -983,  -983,  -983,  -983,  -983,  -983,   795,   666,  1376,
     799,  1425,  1469,  1455,  -983,  -983,  1470,  2361,  2382,  -983,
    1597,  1621,  1559,  1559,  -983,  1468,  1646,  -983,  -983,   981,
    -983,   310,  -983,  1474,   803,   805,   312,  1657,   834,  -983,
    -983,  -983,  -983,   -45,  1586,   -70,    36,  1559,  -983,  -983,
    1627,  1505,  -983,  1468,  -983,  -983,   252,  -983,  -983,  -983,
     282,   326,   844,   312,   312,  1579,  -983,  -983,  -983,  -983,
    -983,  -983,   -17,  -983,  -983,  -983,    -6,  -983,  1525,  -983,
    -983,  -983,  -983,   312,    75,  1611,  1629,  1648,  1649,  1725,
    1809,  -983,  -983
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -983,  1775,   -53,  -457,  -983,  -983,  -983,  -983,  1359,  1672,
    -983,  -135,  -292,  -983,  -983,  -749,  -983,  -983,  -515,  -983,
    1056,  -630,  -983,  -983,  -700,  -983,  -983,  1625,  -144,  -122,
    1619,  -249,  1408,  -983,  -983,   660,  -983,  -983,  -983,  1247,
    1349,   545,   322,  -983,  -983,  -983,  1802,  1555,  -983,  -983,
    -578,  -983,  -983,  -983,  -983,  -983,  -983,  -983,  -983,  -983,
    -412,   214,  1831,  1693,  -983,  1424,  -983,   979,  -327,  -983,
    -983,  -983,  -983,  -983,   397,  -983,  -983,  -983,  1007,  -983,
     780,  -983,  1209,  1272,  -733,  -770,  -982,  -626,  -683,  -983,
    -983,   502,   268,   213,  -430,  -414,  1464,  -585,  -983,  -983,
    -983,  1814
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -460
static const yytype_int16 yytable[] =
{
     142,   480,   687,   698,   251,   806,   692,   545,  -294,   557,
     558,   148,   415,   148,   252,   563,  -296,   565,  -295,   653,
     531,   757,   224,   759,   808,  1104,   616,   253,    81,  1107,
     472,   881,   373,   994,   995,   996,   997,   172,   189,   190,
     982,   184,   813,    93,   374,    49,    44,   403,   606,   195,
     196,   197,   606,   254,   161,   199,  1060,   632,   321,   245,
      57,   849,   322,   404,   450,   512,   340,  1129,   613,   247,
     615,    91,   572,  1108,   887,    33,   325,   589,  1131,  1135,
     453,    34,    92,   590,    59,   998,   328,   814,   223,   905,
    1084,  1085,    47,   162,  1109,    10,   462,   185,   702,   656,
     163,   777,   882,   883,    54,   703,   525,   451,   314,    74,
     164,    45,   787,   255,  1110,  1112,   791,   454,   534,   591,
     478,  1130,   592,   810,    94,   398,    58,   337,   338,   889,
     452,  1024,  1132,   607,   326,   593,   983,   724,   463,    82,
     405,   334,   594,    60,   326,   335,  1105,   657,   173,   341,
     345,   347,   348,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   375,   977,   595,   539,   365,   366,
     185,   165,   368,   369,   370,   371,   372,   743,    10,   604,
     381,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   479,    50,   482,   142,   937,   513,   248,   471,
     725,   541,   726,   978,    75,   865,  1136,   866,   596,   697,
     869,   909,   166,  1006,  1025,  -459,   874,   796,    76,   315,
    1111,    62,    48,   319,   532,   758,    55,   486,   487,    77,
    -294,   339,   890,   149,    67,   149,   841,   542,  -296,    63,
    -295,   515,   771,   250,   773,   774,   999,  1000,  1001,   891,
     524,    78,    64,   797,  1002,   255,  1026,   984,   527,   225,
     226,   227,   228,   229,   230,   231,   468,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     573,   574,   575,   576,   543,   488,   489,   462,   654,   926,
     933,   660,   928,   495,   929,    71,   812,    66,   224,    68,
     798,   985,   225,   226,   227,   228,   229,   230,   231,  1034,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,  1117,   516,   517,   544,   519,  1093,   463,
    1100,   339,   223,    72,   462,   245,   943,   579,   268,  -202,
    1119,    73,   799,  -459,    80,    69,   319,   491,   176,    89,
     269,   944,   975,   225,   226,   227,   228,   229,   230,   231,
    1118,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   580,   180,   463,    35,  -202,   583,
    1094,    36,  1094,   635,  1123,   319,   638,   639,   640,   412,
     145,   689,   225,   226,   227,   228,   229,   230,   231,   570,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   177,   157,   158,   584,   533,   413,  1120,
     693,    37,    96,    97,    98,    99,   100,   101,   690,   159,
     155,   793,   617,  1121,   618,    70,   102,   103,   621,   622,
    1095,   623,  1095,    95,   104,   105,   464,   465,  1086,  1122,
    1096,   167,  1096,   106,   628,   629,   630,   694,   631,   178,
      83,    10,   168,  1124,    38,   711,    83,   637,   794,   170,
     179,   817,  1113,  1114,   668,   107,   492,  1125,   650,   108,
      39,    40,   109,   110,   947,   655,   481,   906,  1007,   669,
     169,    84,   896,  1126,    41,   171,   111,    84,    85,   256,
     112,  1133,    86,   948,   146,   174,   949,   175,   950,    87,
     180,   951,   182,  1008,   186,   147,   678,   907,   731,   732,
     187,   952,   160,   188,   113,   192,   193,   953,   954,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,    96,
      97,    98,    99,   100,   101,   408,   255,   609,   610,   715,
     955,   257,   717,   102,   103,   670,   671,   114,   722,  -170,
     440,   104,   666,   667,   258,    49,   445,   728,   447,   194,
     818,   734,   735,   201,   115,   259,   240,   241,   242,   243,
     244,   116,   117,   745,   118,   202,   956,   203,   342,   672,
     673,   204,   107,   260,   674,   673,   108,  1037,  1038,   109,
     110,   684,   685,   760,   957,   261,   708,   709,   763,   483,
     958,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   784,   685,   141,   550,   551,   800,   554,   555,
     556,   205,   959,   206,   559,   560,   561,   377,   378,   564,
     379,   343,   207,   380,   789,   685,   208,    96,    97,    98,
      99,   100,   101,   209,   114,   210,   824,   821,   822,   825,
     211,   102,   103,   855,   856,   212,   836,   860,   685,   104,
     868,   685,   249,   871,   685,   213,   838,   840,   382,   214,
     383,   875,   709,   846,   847,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   344,   884,   885,   215,
     107,   216,   859,   217,   108,   886,   885,   109,   110,   237,
     238,   239,   240,   241,   242,   243,   244,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   888,
     856,   141,  1064,  1065,   894,   895,   218,   898,   219,   900,
     910,   911,   220,    96,    97,    98,    99,   100,   101,   912,
     911,   429,   430,   431,   432,   264,   433,   102,   103,   435,
     436,   437,   913,   911,   221,   104,   441,   442,   443,   915,
     885,   446,   114,   226,   227,   228,   229,   230,   231,   222,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   934,   270,   384,   107,   917,   918,   266,
     108,   919,   920,   109,   110,    96,    97,    98,    99,   100,
     101,   238,   239,   240,   241,   242,   243,   244,   722,   102,
     103,   924,   685,   267,   962,   925,   685,   104,   349,   927,
     685,   966,   931,   685,   271,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   275,   107,   385,
    1071,  1072,   108,   938,   918,   109,   110,   939,   885,   940,
     885,   225,   226,   227,   228,   229,   230,   231,   114,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   272,  1021,   942,   920,   273,  1027,
     972,   685,   225,   226,   227,   228,   229,   230,   231,  1031,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   973,   685,   274,   198,   974,   685,   309,
     114,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,  1067,  1068,   141,   310,   979,   856,  1005,
     822,   311,    96,    97,    98,    99,   100,   101,  1012,   685,
    1013,   918,  1014,   920,  1041,  1042,   102,   103,   312,  1044,
    1045,  1069,  1070,   316,   104,  1074,  1070,  1091,  1092,  1098,
    1070,  1099,  1070,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   107,   313,   141,   317,   108,
    1102,  1103,   109,   110,    96,    97,    98,    99,   100,   101,
    1127,  1070,   535,   536,   648,   649,   844,   845,   102,   103,
     318,   323,   324,   330,   361,    10,   104,   362,   363,   364,
      96,    97,    98,    99,   100,   101,   376,   494,   397,   400,
     402,   407,   409,   416,   102,   103,   417,   419,   420,   421,
     422,   423,   104,   424,   425,   426,   438,   107,   496,   427,
     434,   108,   444,   448,   109,   110,   449,   455,   456,   457,
     458,   459,   460,   461,   469,   474,   476,   114,   484,   490,
     498,   528,   526,   107,   518,   521,   522,   108,   523,   244,
     109,   110,   529,   530,   537,   540,   538,   546,   547,   497,
     552,   568,   566,   567,   569,   571,   581,   582,   585,   586,
     587,   716,   588,   601,   602,    96,    97,    98,    99,   100,
     101,   605,   611,   606,   625,   633,   641,   642,   644,   102,
     103,   646,   651,   652,   661,   662,   663,   104,   664,   114,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   665,   675,   141,   114,   676,   679,   107,    10,
     680,   677,   108,   681,   682,   109,   110,   227,   228,   229,
     230,   231,   683,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   721,   686,   688,   691,
     695,   696,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   699,   700,   141,   701,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     114,   704,   141,   225,   226,   227,   228,   229,   230,   231,
     706,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   705,   710,   712,   718,   707,   719,
     720,   736,    96,    97,    98,    99,   100,   101,   737,   749,
     750,   752,   742,   766,   744,   746,   102,   103,   756,   768,
     747,   748,   753,   754,   104,   755,   761,   764,   765,   769,
     770,   772,   775,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   107,   778,   141,   779,   108,
     780,   781,   109,   110,    96,    97,    98,    99,   100,   101,
     782,   783,   785,   786,   790,   792,   788,   801,   102,   103,
     802,   803,   804,   897,   807,   816,   104,   837,   819,   820,
      96,    97,    98,    99,   100,   101,   842,   848,   851,   853,
     857,   858,   861,   867,   102,   103,   862,   863,   877,   864,
     873,   870,   104,   872,   876,   878,   879,   107,   901,   914,
     916,   108,   921,   923,   109,   110,   930,   935,   941,   945,
     936,   946,   961,   607,   963,   965,   967,   114,   968,   969,
     970,   986,   971,   107,   981,   899,   987,   108,   988,   980,
     109,   110,   225,   226,   227,   228,   229,   230,   231,   989,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   991,   990,   992,   993,  1011,  1009,  1003,
    1004,  1015,  1016,  1017,  1023,  1018,  1019,  1020,  1022,  1028,
     507,  1029,  1030,  1035,  1032,  1033,  1036,  1039,  1040,   114,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,  1056,  1048,   141,   114,   225,   226,   227,   228,
     229,   230,   231,  1046,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,  1047,  1054,  1050,
    1051,  1052,  1058,  1059,  1055,   885,  1061,  1062,  1063,  1066,
    1082,  1073,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,  1083,  1087,   141,  1076,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
    1075,  1090,   141,   225,   226,   227,   228,   229,   230,   231,
    1101,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   225,   226,   227,   228,   229,   230,
     231,  1077,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,  1106,  1078,  1104,  1115,  1097,
    1128,  1134,   225,   226,   227,   228,   229,   230,   231,   508,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   225,   226,   227,   228,   229,   230,   231,
    1141,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   225,   226,   227,   228,   229,   230,
     231,  1137,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   228,   229,   230,   231,  1138,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   509,  1139,  1140,   225,   226,   227,   228,
     229,   230,   231,   729,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   225,   226,   227,
     228,   229,   230,   231,  1142,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   225,   226,
     227,   228,   229,   230,   231,   156,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   225,
     226,   227,   228,   229,   230,   231,   627,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     511,   336,   893,   399,   411,   600,   645,   183,   473,    90,
     960,   329,   932,  1116,   225,   226,   227,   228,   229,   230,
     231,   739,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   614,   795,   762,   562,   191,
       0,   225,   226,   227,   228,   229,   230,   231,   730,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   225,   226,   227,   228,   229,   230,   231,   367,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   225,   226,   227,   228,   229,   230,   231,
     493,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   225,   226,   227,   228,   229,   230,
     231,   811,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   225,   226,   227,   228,   229,
     230,   231,   499,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   225,   226,   227,   228,
     229,   230,   231,   500,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   225,   226,   227,
     228,   229,   230,   231,   501,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   225,   226,
     227,   228,   229,   230,   231,   502,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   225,
     226,   227,   228,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     503,   225,   226,   227,   228,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,     0,  -460,  -460,  -460,  -460,   504,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   225,   226,   227,   228,   229,   230,   231,   505,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   225,   226,   227,   228,   229,   230,   231,   506,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   225,   226,   227,   228,   229,   230,   231,
     510,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   225,   226,   227,   228,   229,   230,
     231,   733,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   225,   226,   227,   228,   229,
     230,   231,   738,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   225,   226,   227,   228,
     229,   230,   231,   740,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   225,   226,   227,
     228,   229,   230,   231,   741,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   225,   226,
     227,   228,   229,   230,   231,   776,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,     0,
     225,   226,   227,   228,   229,   230,   231,   826,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   225,   226,   227,   228,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,     0,     0,     0,     0,     0,   850,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   226,   227,   228,   229,   230,   231,   880,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   225,   226,   227,   228,   229,   230,   231,   902,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   225,   226,   227,   228,   229,   230,   231,
     903,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   225,   226,   227,   228,   229,   230,
     231,   904,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   225,   226,   227,   228,   229,
     230,   231,   922,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   225,   226,   227,   228,
     229,   230,   231,   976,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,     1,     0,     0,
       2,     0,     0,     0,  1043,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     827,   828,     3,     0,     0,   829,  1049,   830,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     5,     0,     0,  1053,   831,   832,
       0,   833,     0,   276,   277,     0,   278,     0,   279,   280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,  1079,     0,     0,
     282,   283,   284,   285,     0,     0,   286,     0,     0,   198,
     287,     0,     0,   485,     0,     0,     0,     0,  1080,     0,
       0,     0,     0,     7,     0,   288,     0,     0,     0,     8,
       0,     0,   289,     0,     0,     0,     0,   290,     0,     0,
       0,     0,     9,    10,   291,     0,     0,   292,   293,   294,
       0,     0,     0,   834,   835,   620,    11,     0,     0,    12,
       0,     0,   295,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   296,   297,     0,   298,   299,     0,     0,     0,     0,
     300,     0,   301,     0,     0,     0,     0,   302,   303,     0,
       0,     0,   304,     0,     0,     0,     0,   305,     0,   306,
       0,     0,     0,   307,   225,   226,   227,   228,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   225,   226,   227,   228,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   225,   226,   227,   228,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   225,   226,   227,
     228,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,     0,     0,
       0,     0,   624,   224,     0,   813,     0,     0,     0,     0,
     225,   226,   227,   228,   229,   230,   231,   619,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,     0,     0,     0,     0,     0,     0,     0,   727,     0,
     245,     0,     0,   225,   226,   227,   228,   229,   230,   231,
     814,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,     0,   225,   226,   227,   228,   229,
     230,   231,   520,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,     0,   225,   226,   227,
     228,   229,   230,   231,   636,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244
};

static const yytype_int16 yycheck[] =
{
      53,   328,   580,   588,   148,   705,   584,   421,     3,   439,
     440,     3,   261,     3,   149,   445,     3,   447,     3,   534,
      20,    20,     3,   653,   707,    70,   483,   149,     3,    99,
     322,   801,     6,     4,     5,     6,     7,     3,    91,    92,
      78,    98,    38,     3,    18,     8,   113,    96,   142,   102,
     103,   104,   142,   167,    33,   108,  1038,   514,   188,    40,
       3,   761,   184,   112,    18,     6,   201,    84,   480,    98,
     482,     9,     3,   143,   807,   178,   167,    55,    84,     4,
     188,   178,    20,    61,     0,    56,   167,    83,   141,   838,
    1072,  1073,   178,    72,   164,   168,   112,   227,   113,   140,
      79,   679,   802,   803,   178,   120,   398,    61,     3,     3,
      89,   178,   690,   227,    78,  1097,   694,   225,   410,    97,
     193,   138,   100,   708,    84,   247,    69,    92,    93,    37,
      84,    61,   138,   227,   225,   113,   174,   227,   154,   114,
     189,   194,   120,   223,   225,   198,   191,   188,   114,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   138,   935,   144,   416,   221,   222,
     227,   150,   225,   226,   227,   228,   229,   634,   168,   471,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   327,   156,   329,   248,   879,   138,   227,   321,
     612,    61,   614,   936,    98,   783,   131,   785,   186,   225,
     788,   841,   191,   962,   144,    40,   794,    61,   112,   114,
     184,     3,     8,   195,   224,   224,    12,    92,    93,   123,
     225,   196,   140,   225,     3,   225,   751,    97,   225,     3,
     225,   376,   672,   224,   674,   675,   217,   218,   219,   157,
     385,   145,   114,    97,   225,   227,   186,   146,   402,    10,
      11,    12,    13,    14,    15,    16,   319,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     211,   212,   213,   214,   144,   338,   339,   112,   537,   867,
     875,   540,   870,   346,   872,   172,   710,     3,     3,    68,
     144,   190,    10,    11,    12,    13,    14,    15,    16,  1009,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    71,   377,   378,   186,   380,    18,   154,
      18,   196,   385,   113,   112,    40,     5,   188,    55,   188,
      58,   178,   186,   168,     3,   114,   195,    98,     3,     3,
      67,    20,   930,    10,    11,    12,    13,    14,    15,    16,
     108,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   225,   224,   154,    69,   227,   188,
      70,    73,    70,   518,    58,   195,   521,   522,   523,   124,
       3,   188,    10,    11,    12,    13,    14,    15,    16,   452,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    68,    43,    44,   225,   227,   153,   137,
     188,   113,     3,     4,     5,     6,     7,     8,   225,    58,
       3,   188,   485,   151,   487,    38,    17,    18,   491,   492,
     130,   494,   130,   227,    25,    26,   224,   225,  1074,   167,
     140,   224,   140,    34,   507,   508,   509,   225,   511,   114,
      74,   168,   201,   137,   156,   600,    74,   520,   225,    40,
      73,   128,  1098,  1099,   185,    56,   227,   151,   531,    60,
     172,   173,    63,    64,    18,   538,   193,   197,   159,   200,
       3,   105,   819,   167,   186,   140,    77,   105,   112,    59,
      81,  1127,   116,    37,   112,   201,    40,     3,    42,   123,
     224,    45,     3,   184,   201,   123,   569,   227,   226,   227,
       3,    55,   151,     3,   105,   224,   225,    61,    62,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
       4,     5,     6,     7,     8,   226,   227,   226,   227,   602,
      84,   111,   605,    17,    18,    65,    66,   138,   611,   119,
     292,    25,   226,   227,   124,     8,   298,   620,   300,     9,
     227,   624,   625,   225,   155,   135,    26,    27,    28,    29,
      30,   162,   163,   636,   165,   225,   120,   225,    52,   226,
     227,   225,    56,   153,   226,   227,    60,   224,   225,    63,
      64,   226,   227,   656,   138,   165,   226,   227,   661,   227,
     144,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   226,   227,   225,   432,   433,   700,   435,   436,
     437,   225,   186,   225,   441,   442,   443,    13,    14,   446,
      16,   125,   225,    19,   226,   227,   225,     3,     4,     5,
       6,     7,     8,   225,   138,   225,   729,   226,   227,   732,
     225,    17,    18,   226,   227,   225,   739,   226,   227,    25,
     226,   227,   227,   226,   227,   225,   749,   750,    34,   225,
      36,   226,   227,   756,   757,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   180,   226,   227,   225,
      56,   225,   775,   225,    60,   226,   227,    63,    64,    23,
      24,    25,    26,    27,    28,    29,    30,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   226,
     227,   225,    46,    47,   817,   818,   225,   820,   225,   822,
     226,   227,   225,     3,     4,     5,     6,     7,     8,   226,
     227,   279,   280,   281,   282,    40,   284,    17,    18,   287,
     288,   289,   226,   227,   225,    25,   294,   295,   296,   226,
     227,   299,   138,    11,    12,    13,    14,    15,    16,   225,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   876,    55,   161,    56,   226,   227,    42,
      60,   226,   227,    63,    64,     3,     4,     5,     6,     7,
       8,    24,    25,    26,    27,    28,    29,    30,   901,    17,
      18,   226,   227,    42,   907,   226,   227,    25,    26,   226,
     227,   914,   226,   227,    55,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     3,    56,   225,
     224,   225,    60,   226,   227,    63,    64,   226,   227,   226,
     227,    10,    11,    12,    13,    14,    15,    16,   138,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    55,   988,   226,   227,    55,   992,
     226,   227,    10,    11,    12,    13,    14,    15,    16,  1002,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   226,   227,    55,   196,   226,   227,     3,
     138,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,  1046,  1047,   225,   140,   226,   227,   226,
     227,   201,     3,     4,     5,     6,     7,     8,   226,   227,
     226,   227,   226,   227,   226,   227,    17,    18,     3,   226,
     227,   226,   227,   201,    25,   226,   227,    46,    47,   226,
     227,   226,   227,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,    56,   140,   225,     3,    60,
     226,   227,    63,    64,     3,     4,     5,     6,     7,     8,
     226,   227,   412,   413,   529,   530,   754,   755,    17,    18,
      26,     3,     3,     3,   226,   168,    25,   226,   226,   226,
       3,     4,     5,     6,     7,     8,   225,    98,     3,     3,
       3,   226,     3,   119,    17,    18,   139,     3,     3,     3,
       3,     3,    25,     3,     3,     3,    51,    56,   227,   225,
     225,    60,   225,   225,    63,    64,   225,     3,     3,   140,
       3,   140,   201,     3,   141,     3,     3,   138,   226,   226,
     226,   120,   227,    56,   225,   225,   225,    60,   225,    30,
      63,    64,   120,   120,   119,   119,   140,   171,     5,   227,
       4,   138,     5,     5,   225,   190,   140,     3,     3,     3,
     140,    84,     3,    50,   126,     3,     4,     5,     6,     7,
       8,    20,   225,   142,   118,   226,   226,   102,     3,    17,
      18,   101,     3,     3,   225,   120,   120,    25,   225,   138,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     3,   226,   225,   138,   226,   225,    56,   168,
     225,    61,    60,   225,   225,    63,    64,    12,    13,    14,
      15,    16,   225,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    84,   190,     3,   190,
     140,     3,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     3,   225,   225,   120,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     138,   225,   225,    10,    11,    12,    13,    14,    15,    16,
     120,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   225,     3,     3,   120,   225,     3,
       3,   226,     3,     4,     5,     6,     7,     8,   226,    50,
     107,   119,   226,     3,   226,   226,    17,    18,    20,     5,
     226,   226,   225,   225,    25,   225,   225,   225,   225,   167,
       4,     4,   225,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,    56,     3,   225,     3,    60,
       3,     3,    63,    64,     3,     4,     5,     6,     7,     8,
       3,   225,   225,   190,   190,     3,   225,   225,    17,    18,
     225,   225,     3,    84,   225,   227,    25,   226,   184,    20,
       3,     4,     5,     6,     7,     8,     3,     3,     3,     3,
     226,     4,   226,   225,    17,    18,   226,   226,   120,   227,
     190,   225,    25,   225,   225,   120,   225,    56,   225,    20,
      18,    60,     3,     3,    63,    64,   225,   225,     3,     3,
     225,    50,   152,   227,   101,     3,   191,   138,   149,     3,
       3,   138,   226,    56,     5,    84,   225,    60,   225,   149,
      63,    64,    10,    11,    12,    13,    14,    15,    16,   225,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     3,    41,   225,     4,     3,   116,   120,
     120,     3,     3,     3,    40,   225,   225,     5,     5,   225,
     227,   225,   225,   225,   160,   160,   149,     3,     3,   138,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     3,   120,   225,   138,    10,    11,    12,    13,
      14,    15,    16,   225,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   225,   127,   226,
     226,   226,     3,     3,   127,   227,   226,   226,     5,     5,
       3,   225,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     3,   157,   225,   158,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     225,     5,   225,    10,    11,    12,    13,    14,    15,    16,
       3,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   226,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   109,   226,    70,   193,   225,
     121,   176,    10,    11,    12,    13,    14,    15,    16,   227,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
       5,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   140,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    13,    14,    15,    16,   140,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   227,   136,   136,    10,    11,    12,    13,
      14,    15,    16,   101,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,     5,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    60,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   497,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     227,   199,   816,   248,   255,   467,   527,    75,   323,    48,
     901,   188,   875,  1103,    10,    11,    12,    13,    14,    15,
      16,   227,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   481,   697,   660,   444,    95,
      -1,    10,    11,    12,    13,    14,    15,    16,   226,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   226,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     226,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   709,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   226,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   226,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   226,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   226,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     226,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    13,    14,    15,    16,   226,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   226,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   226,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     226,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   226,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   226,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   226,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   226,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   226,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      10,    11,    12,    13,    14,    15,    16,   226,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   226,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   226,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     226,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   226,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   226,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   226,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    -1,    -1,
      35,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    57,    -1,    -1,    80,   226,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    -1,    -1,   226,   103,   104,
      -1,   106,    -1,    48,    49,    -1,    51,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,   196,
      95,    -1,    -1,   179,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,   148,    -1,   110,    -1,    -1,    -1,   154,
      -1,    -1,   117,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,   167,   168,   129,    -1,    -1,   132,   133,   134,
      -1,    -1,    -1,   198,   199,   179,   181,    -1,    -1,   184,
      -1,    -1,   147,    -1,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   166,   167,    -1,   169,   170,    -1,    -1,    -1,    -1,
     175,    -1,   177,    -1,    -1,    -1,    -1,   182,   183,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,   192,    -1,   194,
      -1,    -1,    -1,   198,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    98,     3,    -1,    38,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    92,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      40,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      83,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,    39,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    10,    11,    12,
      13,    14,    15,    16,    39,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    35,    57,    78,    79,   115,   148,   154,   167,
     168,   181,   184,   189,   229,   238,   239,   272,   276,   277,
     280,   281,   284,   285,   286,   287,   297,   298,   301,   303,
     304,   305,   327,   178,   178,    69,    73,   113,   156,   172,
     173,   186,   309,   273,   113,   178,   289,   178,   289,     8,
     156,   328,   329,   253,   178,   289,   299,     3,    69,     0,
     223,   283,     3,     3,   114,   302,     3,     3,    68,   114,
     302,   172,   113,   178,     3,    98,   112,   123,   145,   274,
       3,     3,   114,    74,   105,   112,   116,   123,   290,     3,
     290,     9,    20,     3,    84,   227,     3,     4,     5,     6,
       7,     8,    17,    18,    25,    26,    34,    56,    60,    63,
      64,    77,    81,   105,   138,   155,   162,   163,   165,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   225,   230,   254,   255,     3,   112,   123,     3,   225,
     257,   258,   259,   261,   271,     3,   229,    43,    44,    58,
     151,    33,    72,    79,    89,   150,   191,   224,   201,     3,
      40,   140,     3,   114,   201,     3,     3,    68,   114,   302,
     224,   275,     3,   274,    98,   227,   201,     3,     3,   230,
     230,   329,   224,   225,     9,   230,   230,   230,   196,   230,
     237,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   230,     3,    10,    11,    12,    13,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    40,   256,    98,   227,   227,
     224,   256,   239,   257,   167,   227,    59,   111,   124,   135,
     153,   165,   262,   264,    40,   260,    42,    42,    55,    67,
      55,    55,    55,    55,    55,     3,    48,    49,    51,    53,
      54,    65,    85,    86,    87,    88,    91,    95,   110,   117,
     122,   129,   132,   133,   134,   147,   166,   167,   169,   170,
     175,   177,   182,   183,   187,   192,   194,   198,   323,     3,
     140,   201,     3,   140,     3,   114,   201,     3,    26,   195,
     240,   188,   257,     3,     3,   167,   225,   291,   167,   291,
       3,   230,   231,   232,   230,   230,   237,    92,    93,   196,
     239,   230,    52,   125,   180,   230,   235,   230,   230,    26,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   226,   226,   226,   226,   230,   230,   226,   230,   230,
     230,   230,   230,     6,    18,   138,   225,    13,    14,    16,
      19,   230,    34,    36,   161,   225,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,     3,   257,   255,
       3,   282,     3,    96,   112,   189,   268,   226,   226,     3,
     300,   258,   124,   153,   265,   259,   119,   139,   263,     3,
       3,     3,     3,     3,     3,     3,     3,   225,   319,   319,
     319,   319,   319,   319,   225,   319,   319,   319,    51,   320,
     320,   319,   319,   319,   225,   320,   319,   320,   225,   225,
      18,    61,    84,   188,   225,     3,     3,   140,     3,   140,
     201,     3,   112,   154,   224,   225,   325,   326,   230,   141,
     246,   257,   240,   275,     3,   296,     3,   292,   193,   239,
     296,   193,   239,   227,   226,   179,    92,    93,   230,   230,
     226,    98,   227,   226,    98,   230,   227,   227,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   227,   227,   227,
     226,   227,     6,   138,   233,   239,   230,   230,   225,   230,
      39,   225,   225,   225,   239,   240,   227,   256,   120,   120,
     120,    20,   224,   227,   240,   263,   263,   119,   140,   259,
     119,    61,    97,   144,   186,   323,   171,     5,   321,   322,
     321,   321,     4,   324,   321,   321,   321,   322,   322,   321,
     321,   321,   324,   322,   321,   322,     5,     5,   138,   225,
     230,   190,     3,   211,   212,   213,   214,   278,   279,   188,
     225,   140,     3,   188,   225,     3,     3,   140,     3,    55,
      61,    97,   100,   113,   120,   144,   186,   310,   311,   317,
     260,    50,   126,   249,   240,    20,   142,   227,   288,   226,
     227,   225,   293,   288,   293,   288,   231,   230,   230,    92,
     179,   230,   230,   230,    98,   118,   236,   236,   230,   230,
     230,   230,   231,   226,   234,   239,    39,   230,   239,   239,
     239,   226,   102,   241,     3,   268,   101,   269,   269,   269,
     230,     3,     3,   246,   259,   230,   140,   188,   266,   267,
     259,   225,   120,   120,   225,     3,   226,   227,   185,   200,
      65,    66,   226,   227,   226,   226,   226,    61,   230,   225,
     225,   225,   225,   225,   226,   227,   190,   278,     3,   188,
     225,   190,   278,   188,   225,   140,     3,   225,   325,     3,
     225,   120,   113,   120,   225,   225,   120,   225,   226,   227,
       3,   239,     3,   247,   248,   230,    84,   230,   120,     3,
       3,    84,   230,   295,   227,   288,   288,    92,   230,   101,
     226,   226,   227,   226,   230,   230,   226,   226,   226,   227,
     226,   226,   226,   231,   226,   230,   226,   226,   226,    50,
     107,   245,   119,   225,   225,   225,    20,    20,   224,   249,
     230,   225,   267,   230,   225,   225,     3,   316,     5,   167,
       4,   322,     4,   322,   322,   225,   226,   278,     3,     3,
       3,     3,     3,   225,   226,   225,   190,   278,   225,   226,
     190,   278,     3,   188,   225,   310,    61,    97,   144,   186,
     230,   225,   225,   225,     3,   252,   252,   225,   316,   306,
     325,   311,   323,    38,    83,   243,   227,   128,   227,   184,
      20,   226,   227,   294,   230,   230,   226,    75,    76,    80,
      82,   103,   104,   106,   198,   199,   230,   226,   230,   242,
     230,   246,     3,   270,   270,   270,   230,   230,     3,   252,
     226,     3,   313,     3,   312,   226,   227,   226,     4,   230,
     226,   226,   226,   226,   227,   278,   278,   225,   226,   278,
     225,   226,   225,   190,   278,   226,   225,   120,   120,   225,
     226,   313,   252,   252,   226,   227,   226,   312,   226,    37,
     140,   157,   318,   248,   230,   230,   296,    84,   230,    84,
     230,   225,   226,   226,   226,   243,   197,   227,   244,   249,
     226,   227,   226,   226,    20,   226,    18,   226,   227,   226,
     227,     3,   226,     3,   226,   226,   278,   226,   278,   278,
     225,   226,   306,   325,   230,   225,   225,   316,   226,   226,
     226,     3,   226,     5,    20,     3,    50,    18,    37,    40,
      42,    45,    55,    61,    62,    84,   120,   138,   144,   186,
     295,   152,   230,   101,   250,     3,   230,   191,   149,     3,
       3,   226,   226,   226,   226,   278,   226,   313,   312,   226,
     149,     5,    78,   174,   146,   190,   138,   225,   225,   225,
      41,     3,   225,     4,     4,     5,     6,     7,    56,   217,
     218,   219,   225,   120,   120,   226,   243,   159,   184,   116,
     251,     3,   226,   226,   226,     3,     3,     3,   225,   225,
       5,   230,     5,    40,    61,   144,   186,   230,   225,   225,
     225,   230,   160,   160,   252,   225,   149,   224,   225,     3,
       3,   226,   227,   226,   226,   227,   225,   225,   120,   226,
     226,   226,   226,   226,   127,   127,     3,   314,     3,     3,
     314,   226,   226,     5,    46,    47,     5,   230,   230,   226,
     227,   224,   225,   225,   226,   225,   158,   226,   226,   226,
     226,   315,     3,     3,   314,   314,   315,   157,   307,   308,
       5,    46,    47,    18,    70,   130,   140,   225,   226,   226,
      18,     3,   226,   227,    70,   191,   109,    99,   143,   164,
      78,   184,   314,   315,   315,   193,   308,    71,   108,    58,
     137,   151,   167,    58,   137,   151,   167,   226,   121,    84,
     138,    84,   138,   315,   176,     4,   131,   140,   140,   136,
     136,     5,     5
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
#line 331 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 337 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 338 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 340 "parser/evoparser.y"
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
#line 358 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 366 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 374 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 380 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 387 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 388 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 389 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 390 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 391 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 392 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 393 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 394 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 395 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 396 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 397 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 398 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 399 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 400 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 401 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 402 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 403 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 405 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 410 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 411 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 412 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 413 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 416 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 417 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 418 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 419 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 420 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 423 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 424 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 427 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 428 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 43:
#line 431 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 435 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 46:
#line 435 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 47:
#line 436 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 48:
#line 436 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 49:
#line 437 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 438 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 439 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 443 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 447 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 448 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 449 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 450 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 451 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 452 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 454 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 455 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 456 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 457 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 458 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 459 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 460 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 461 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 462 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 463 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 464 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 465 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 466 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 467 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 474 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 481 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 488 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 492 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 77:
#line 496 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 78:
#line 502 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 79:
#line 503 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 80:
#line 504 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 81:
#line 507 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 82:
#line 508 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 83:
#line 511 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 84:
#line 512 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 85:
#line 513 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 86:
#line 514 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 87:
#line 515 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 88:
#line 516 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 89:
#line 517 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 90:
#line 518 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 91:
#line 519 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 92:
#line 523 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 93:
#line 525 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 94:
#line 527 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 95:
#line 529 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 96:
#line 533 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 97:
#line 541 "parser/evoparser.y"
    {
        if (g_expr.caseWhenCount < MAX_CASE_WHENS) {
            g_expr.caseWhenExprs[g_expr.caseWhenCount] = (yyvsp[(3) - (5)].exprval);
            g_expr.caseThenExprs[g_expr.caseWhenCount] = (yyvsp[(5) - (5)].exprval);
            g_expr.caseWhenCount++;
        }
        (yyval.intval) = (yyvsp[(1) - (5)].intval)+1;
    ;}
    break;

  case 98:
#line 551 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 99:
#line 552 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 100:
#line 555 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 101:
#line 556 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 102:
#line 560 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 568 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 104:
#line 576 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 105:
#line 587 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 106:
#line 596 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 107:
#line 601 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (12)].intval), (yyvsp[(3) - (12)].intval), (yyvsp[(5) - (12)].intval));
        g_sel.distinct = ((yyvsp[(2) - (12)].intval) & 02) ? 1 : 0;
        if ((yyvsp[(3) - (12)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 109:
#line 612 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 111:
#line 614 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 112:
#line 617 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 113:
#line 624 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 114:
#line 632 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 115:
#line 633 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 634 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 117:
#line 637 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 118:
#line 638 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 120:
#line 642 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 125:
#line 654 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 126:
#line 661 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 127:
#line 662 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 128:
#line 663 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 129:
#line 664 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 130:
#line 667 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 131:
#line 668 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 132:
#line 669 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 133:
#line 670 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 134:
#line 671 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 136:
#line 675 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 137:
#line 678 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 138:
#line 679 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 139:
#line 682 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 140:
#line 683 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 141:
#line 684 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 142:
#line 685 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 143:
#line 686 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 144:
#line 687 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 145:
#line 688 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 146:
#line 689 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 147:
#line 690 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 148:
#line 693 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 149:
#line 694 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 150:
#line 696 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 151:
#line 704 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 152:
#line 709 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 153:
#line 710 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 154:
#line 711 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 155:
#line 714 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 156:
#line 715 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 159:
#line 724 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 160:
#line 730 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 161:
#line 731 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 162:
#line 732 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 165:
#line 741 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 166:
#line 743 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 167:
#line 745 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 168:
#line 747 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 169:
#line 749 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 170:
#line 752 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 171:
#line 753 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 172:
#line 754 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 173:
#line 757 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 174:
#line 758 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 175:
#line 761 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 176:
#line 762 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 177:
#line 765 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 178:
#line 766 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 179:
#line 767 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 182:
#line 774 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 183:
#line 775 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 184:
#line 780 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 185:
#line 782 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 186:
#line 784 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 188:
#line 788 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 189:
#line 789 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 190:
#line 792 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 191:
#line 793 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 192:
#line 796 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 193:
#line 801 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 194:
#line 809 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 195:
#line 816 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 196:
#line 817 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 197:
#line 818 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 198:
#line 819 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 199:
#line 823 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 200:
#line 826 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 201:
#line 827 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 204:
#line 832 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 205:
#line 837 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 206:
#line 844 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 207:
#line 851 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 208:
#line 861 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 209:
#line 868 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 210:
#line 875 "parser/evoparser.y"
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

  case 211:
#line 885 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 212:
#line 893 "parser/evoparser.y"
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

  case 213:
#line 903 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 214:
#line 911 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 215:
#line 920 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 216:
#line 929 "parser/evoparser.y"
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

  case 217:
#line 939 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 218:
#line 947 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 219:
#line 956 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 220:
#line 965 "parser/evoparser.y"
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

  case 221:
#line 975 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 222:
#line 984 "parser/evoparser.y"
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

  case 223:
#line 996 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 224:
#line 1001 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 225:
#line 1006 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 226:
#line 1012 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 227:
#line 1019 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 228:
#line 1026 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 229:
#line 1033 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 230:
#line 1043 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 231:
#line 1050 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 232:
#line 1059 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 233:
#line 1066 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 234:
#line 1072 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 235:
#line 1080 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 236:
#line 1086 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 238:
#line 1094 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 239:
#line 1095 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 240:
#line 1096 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 241:
#line 1097 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 242:
#line 1102 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 243:
#line 1109 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 244:
#line 1118 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 245:
#line 1125 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 246:
#line 1131 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 247:
#line 1141 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 248:
#line 1145 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 249:
#line 1151 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 250:
#line 1157 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 251:
#line 1164 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 252:
#line 1170 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 253:
#line 1177 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 254:
#line 1183 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 255:
#line 1189 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 256:
#line 1195 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 257:
#line 1201 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 258:
#line 1207 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 259:
#line 1213 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        AlterTableAddColumn((yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(6) - (7)].strval));
    ;}
    break;

  case 260:
#line 1221 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 261:
#line 1229 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 262:
#line 1235 "parser/evoparser.y"
    {
        emit("INSERTSELECT %d %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].strval));
        GetInsertionTableName((yyvsp[(4) - (6)].strval));
        g_ins.insertFromSelect = 1;
        if ((yyvsp[(6) - (6)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
        free((yyvsp[(4) - (6)].strval));
    ;}
    break;

  case 264:
#line 1248 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 265:
#line 1251 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 266:
#line 1252 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 267:
#line 1253 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 268:
#line 1254 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 269:
#line 1255 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 273:
#line 1262 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 274:
#line 1266 "parser/evoparser.y"
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

  case 275:
#line 1276 "parser/evoparser.y"
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

  case 276:
#line 1288 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 277:
#line 1289 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 278:
#line 1289 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 279:
#line 1292 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 280:
#line 1293 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 281:
#line 1294 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 282:
#line 1295 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 283:
#line 1299 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 284:
#line 1302 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 285:
#line 1303 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 286:
#line 1304 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 287:
#line 1305 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 288:
#line 1311 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 289:
#line 1317 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 290:
#line 1322 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 291:
#line 1327 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 292:
#line 1332 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 293:
#line 1339 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 294:
#line 1344 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 295:
#line 1345 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 296:
#line 1346 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 297:
#line 1351 "parser/evoparser.y"
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

  case 298:
#line 1362 "parser/evoparser.y"
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

  case 299:
#line 1373 "parser/evoparser.y"
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

  case 300:
#line 1384 "parser/evoparser.y"
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

  case 301:
#line 1397 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 302:
#line 1401 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 303:
#line 1402 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 304:
#line 1405 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 305:
#line 1406 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 306:
#line 1410 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 307:
#line 1415 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 308:
#line 1417 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 309:
#line 1419 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 310:
#line 1421 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 311:
#line 1423 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 312:
#line 1427 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 313:
#line 1431 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 314:
#line 1432 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 315:
#line 1437 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 316:
#line 1447 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 317:
#line 1456 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 319:
#line 1460 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 320:
#line 1461 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 321:
#line 1462 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 322:
#line 1463 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 323:
#line 1465 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 324:
#line 1467 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 327:
#line 1475 "parser/evoparser.y"
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

  case 328:
#line 1490 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 329:
#line 1498 "parser/evoparser.y"
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

  case 330:
#line 1512 "parser/evoparser.y"
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

  case 331:
#line 1526 "parser/evoparser.y"
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

  case 332:
#line 1540 "parser/evoparser.y"
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

  case 333:
#line 1552 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 334:
#line 1553 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 335:
#line 1554 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 336:
#line 1557 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 337:
#line 1558 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 338:
#line 1561 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 339:
#line 1562 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 340:
#line 1563 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 341:
#line 1564 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 342:
#line 1565 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 343:
#line 1566 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 344:
#line 1567 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 345:
#line 1568 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 346:
#line 1570 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 347:
#line 1572 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 348:
#line 1574 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 349:
#line 1576 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 350:
#line 1578 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 351:
#line 1580 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 352:
#line 1583 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 353:
#line 1584 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 354:
#line 1587 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 355:
#line 1588 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 356:
#line 1591 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 357:
#line 1592 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 359:
#line 1596 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 360:
#line 1597 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 361:
#line 1598 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 362:
#line 1599 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 363:
#line 1600 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 364:
#line 1601 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 365:
#line 1602 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 366:
#line 1603 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 367:
#line 1604 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 368:
#line 1605 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 369:
#line 1606 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 370:
#line 1607 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 371:
#line 1608 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 372:
#line 1609 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 373:
#line 1610 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 374:
#line 1611 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 375:
#line 1612 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 376:
#line 1615 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 377:
#line 1616 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 378:
#line 1619 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 379:
#line 1621 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 380:
#line 1629 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 381:
#line 1630 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 383:
#line 1632 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 384:
#line 1633 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 385:
#line 1634 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 386:
#line 1635 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 387:
#line 1636 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 388:
#line 1637 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 389:
#line 1638 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 390:
#line 1639 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 391:
#line 1640 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 392:
#line 1647 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 393:
#line 1648 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 394:
#line 1649 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 395:
#line 1650 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 396:
#line 1651 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 397:
#line 1652 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 398:
#line 1653 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 399:
#line 1654 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 400:
#line 1655 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 401:
#line 1656 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 402:
#line 1657 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 403:
#line 1658 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 404:
#line 1659 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 405:
#line 1660 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 406:
#line 1661 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 407:
#line 1662 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 408:
#line 1663 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 409:
#line 1664 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 410:
#line 1665 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 411:
#line 1666 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 412:
#line 1667 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 413:
#line 1670 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 414:
#line 1671 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 415:
#line 1672 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 416:
#line 1675 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 417:
#line 1676 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 418:
#line 1679 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 419:
#line 1680 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 420:
#line 1681 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 422:
#line 1685 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 423:
#line 1686 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 424:
#line 1690 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 425:
#line 1691 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 426:
#line 1692 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 427:
#line 1693 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 428:
#line 1694 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 429:
#line 1695 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 430:
#line 1696 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 431:
#line 1697 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 432:
#line 1698 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 433:
#line 1699 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 434:
#line 1700 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 435:
#line 1701 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 436:
#line 1702 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 437:
#line 1703 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 438:
#line 1704 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 439:
#line 1705 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 440:
#line 1706 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 441:
#line 1707 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 442:
#line 1708 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 443:
#line 1709 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 444:
#line 1710 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 445:
#line 1711 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 446:
#line 1712 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 447:
#line 1713 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 448:
#line 1714 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 449:
#line 1715 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 450:
#line 1716 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 451:
#line 1717 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 452:
#line 1718 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 453:
#line 1719 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 454:
#line 1720 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 455:
#line 1721 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 456:
#line 1724 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 457:
#line 1725 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 458:
#line 1729 "parser/evoparser.y"
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

  case 459:
#line 1741 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 460:
#line 1742 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 461:
#line 1743 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 462:
#line 1747 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 463:
#line 1750 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 464:
#line 1751 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 468:
#line 1755 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 469:
#line 1756 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5908 "parser/evoparser.tab.c"
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


#line 1759 "parser/evoparser.y"

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
