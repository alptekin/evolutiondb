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
#define YYLAST   2985

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  228
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  471
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1146

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
    1186,  1193,  1199,  1201,  1210,  1217,  1218,  1223,  1224,  1227,
    1230,  1233,  1236,  1238,  1239,  1240,  1244,  1246,  1250,  1254,
    1255,  1262,  1264,  1266,  1270,  1274,  1282,  1286,  1290,  1296,
    1302,  1304,  1313,  1321,  1329,  1331,  1340,  1341,  1344,  1347,
    1351,  1357,  1363,  1371,  1373,  1378,  1383,  1384,  1387,  1389,
    1395,  1403,  1411,  1421,  1433,  1435,  1438,  1442,  1444,  1454,
    1466,  1467,  1472,  1476,  1482,  1488,  1498,  1509,  1511,  1515,
    1525,  1535,  1545,  1552,  1564,  1573,  1574,  1576,  1579,  1581,
    1585,  1591,  1599,  1604,  1609,  1615,  1621,  1626,  1633,  1645,
    1659,  1673,  1689,  1694,  1701,  1703,  1707,  1709,  1713,  1715,
    1719,  1720,  1725,  1731,  1736,  1742,  1747,  1753,  1758,  1764,
    1769,  1774,  1778,  1782,  1786,  1789,  1793,  1798,  1803,  1805,
    1809,  1810,  1815,  1816,  1820,  1823,  1827,  1831,  1835,  1839,
    1845,  1851,  1857,  1861,  1867,  1870,  1878,  1884,  1892,  1898,
    1901,  1905,  1908,  1912,  1915,  1919,  1925,  1930,  1936,  1944,
    1953,  1962,  1970,  1977,  1984,  1990,  1991,  1995,  2001,  2002,
    2004,  2005,  2008,  2011,  2012,  2017,  2021,  2024,  2028,  2032,
    2036,  2040,  2044,  2048,  2052,  2056,  2060,  2064,  2066,  2068,
    2070,  2072,  2074,  2078,  2084,  2087,  2092,  2094,  2096,  2098,
    2100,  2104,  2108,  2112,  2116,  2122,  2128,  2130,  2132,  2134,
    2138,  2142,  2143,  2145,  2147,  2149,  2153,  2157,  2160,  2162,
    2166,  2170
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
       3,    33,    67,     3,   323,    -1,    32,   178,     3,    79,
      67,     3,    -1,    32,   178,     3,    79,     3,    -1,   287,
      -1,   115,   289,   290,     3,   291,   193,   293,   288,    -1,
     115,   289,   290,     3,   291,   239,    -1,    -1,   142,   120,
     184,   296,    -1,    -1,   289,   123,    -1,   289,    74,    -1,
     289,   105,    -1,   289,   112,    -1,   116,    -1,    -1,    -1,
     225,   292,   226,    -1,     3,    -1,   292,   227,     3,    -1,
     225,   295,   226,    -1,    -1,   293,   227,   294,   225,   295,
     226,    -1,   230,    -1,    84,    -1,   295,   227,   230,    -1,
     295,   227,    84,    -1,   115,   289,   290,     3,   167,   296,
     288,    -1,     3,    20,   230,    -1,     3,    20,    84,    -1,
     296,   227,     3,    20,   230,    -1,   296,   227,     3,    20,
      84,    -1,   297,    -1,   154,   289,   290,     3,   291,   193,
     293,   288,    -1,   154,   289,   290,     3,   167,   296,   288,
      -1,   154,   289,   290,     3,   291,   239,   288,    -1,   298,
      -1,   184,   299,   257,   167,   300,   240,   246,   249,    -1,
      -1,   289,   123,    -1,   289,   112,    -1,     3,    20,   230,
      -1,     3,   224,     3,    20,   230,    -1,   300,   227,     3,
      20,   230,    -1,   300,   227,     3,   224,     3,    20,   230,
      -1,   301,    -1,    57,    69,   302,     3,    -1,    57,   156,
     302,     3,    -1,    -1,   114,   201,    -1,   303,    -1,    57,
      73,     3,    40,   323,    -1,    57,    73,     3,    40,   323,
      84,   230,    -1,    57,    73,     3,    40,   323,    18,   138,
      -1,    57,    73,     3,    40,   323,    61,   225,   230,   226,
      -1,    57,    73,     3,    40,   323,    18,   138,    61,   225,
     230,   226,    -1,   304,    -1,   189,     3,    -1,   189,    69,
       3,    -1,   305,    -1,    57,   309,   178,   302,     3,   225,
     310,   226,   306,    -1,    57,   309,   178,   302,     3,   224,
       3,   225,   310,   226,   306,    -1,    -1,   306,    37,    20,
       5,    -1,   306,    37,     5,    -1,   306,   140,     3,    78,
       3,    -1,   306,   140,     3,   174,     3,    -1,   306,   157,
      50,   190,   225,     3,   226,   158,     5,    -1,   306,   157,
      50,   146,   225,     3,   226,   225,   307,   226,    -1,   308,
      -1,   307,   227,   308,    -1,   157,     3,   193,   121,   176,
       4,   140,   136,     5,    -1,   157,     3,   193,   121,   176,
     131,   140,   136,     5,    -1,    57,   309,   178,   302,     3,
     225,   310,   226,   325,    -1,    57,   309,   178,   302,     3,
     325,    -1,    57,   309,   178,   302,     3,   224,     3,   225,
     310,   226,   325,    -1,    57,   309,   178,   302,     3,   224,
       3,   325,    -1,    -1,   172,    -1,   173,   172,    -1,   311,
      -1,   310,   227,   311,    -1,   144,   120,   225,   312,   226,
      -1,    55,     3,   144,   120,   225,   312,   226,    -1,   120,
     225,   252,   226,    -1,   113,   225,   252,   226,    -1,   100,
     113,   225,   252,   226,    -1,   100,   120,   225,   252,   226,
      -1,    61,   225,   230,   226,    -1,    55,     3,    61,   225,
     230,   226,    -1,    97,   120,   225,   313,   226,   149,     3,
     225,   314,   226,   315,    -1,    97,   120,   225,   313,   226,
     149,     3,   224,     3,   225,   314,   226,   315,    -1,    55,
       3,    97,   120,   225,   313,   226,   149,     3,   225,   314,
     226,   315,    -1,    55,     3,    97,   120,   225,   313,   226,
     149,     3,   224,     3,   225,   314,   226,   315,    -1,   186,
     225,   316,   226,    -1,    55,     3,   186,   225,   316,   226,
      -1,     3,    -1,   312,   227,     3,    -1,     3,    -1,   313,
     227,     3,    -1,     3,    -1,   314,   227,     3,    -1,    -1,
     315,   140,    78,    58,    -1,   315,   140,    78,   167,   138,
      -1,   315,   140,    78,   151,    -1,   315,   140,    78,   167,
      84,    -1,   315,   140,   184,    58,    -1,   315,   140,   184,
     167,   138,    -1,   315,   140,   184,   151,    -1,   315,   140,
     184,   167,    84,    -1,   315,   140,    78,   137,    -1,   315,
     140,   184,   137,    -1,   315,   130,    99,    -1,   315,   130,
     164,    -1,   315,   130,   143,    -1,   315,    70,    -1,   315,
      18,    70,    -1,   315,    70,   109,    71,    -1,   315,    70,
     109,   108,    -1,     3,    -1,   316,   227,     3,    -1,    -1,
     317,     3,   323,   318,    -1,    -1,   318,    18,   138,    -1,
     318,   138,    -1,   318,    84,     4,    -1,   318,    84,     5,
      -1,   318,    84,     7,    -1,   318,    84,     6,    -1,   318,
      84,   217,   225,   226,    -1,   318,    84,   218,   225,   226,
      -1,   318,    84,   219,   225,   226,    -1,   318,    84,    56,
      -1,   318,    84,   225,   230,   226,    -1,   318,    37,    -1,
     318,    37,   225,     5,   227,     5,   226,    -1,   318,    37,
     225,     5,   226,    -1,   318,    42,   225,     5,   227,     5,
     226,    -1,   318,    42,   225,     5,   226,    -1,   318,    42,
      -1,   318,   186,   120,    -1,   318,   186,    -1,   318,   144,
     120,    -1,   318,   120,    -1,   318,    62,     4,    -1,   318,
      61,   225,   230,   226,    -1,   318,    55,     3,   186,    -1,
     318,    55,     3,   144,   120,    -1,   318,    55,     3,    61,
     225,   230,   226,    -1,   318,    45,    41,    40,   225,   230,
     226,    46,    -1,   318,    45,    41,    40,   225,   230,   226,
      47,    -1,   318,    45,    41,    40,   225,   230,   226,    -1,
     318,    40,   225,   230,   226,    46,    -1,   318,    40,   225,
     230,   226,    47,    -1,   318,    40,   225,   230,   226,    -1,
      -1,   225,     5,   226,    -1,   225,     5,   227,     5,   226,
      -1,    -1,    51,    -1,    -1,   321,   185,    -1,   321,   200,
      -1,    -1,   322,    65,   167,     4,    -1,   322,    66,     4,
      -1,    54,   319,    -1,   170,   319,   321,    -1,   166,   319,
     321,    -1,   134,   319,   321,    -1,   117,   319,   321,    -1,
     110,   319,   321,    -1,    53,   319,   321,    -1,   147,   319,
     321,    -1,    85,   319,   321,    -1,    95,   319,   321,    -1,
      87,   319,   321,    -1,    88,    -1,   183,    -1,   177,    -1,
      86,    -1,   198,    -1,    65,   319,   322,    -1,   192,   225,
       5,   226,   322,    -1,    51,   319,    -1,   194,   225,     5,
     226,    -1,   182,    -1,    48,    -1,   133,    -1,   129,    -1,
     169,   320,   322,    -1,   175,   320,   322,    -1,   132,   320,
     322,    -1,   122,   320,   322,    -1,    91,   225,   324,   226,
     322,    -1,   167,   225,   324,   226,   322,    -1,    49,    -1,
     187,    -1,     4,    -1,   324,   227,     4,    -1,   326,   260,
     239,    -1,    -1,   112,    -1,   154,    -1,   327,    -1,   167,
     156,     3,    -1,   167,   156,    84,    -1,   167,   328,    -1,
     329,    -1,   328,   227,   329,    -1,     8,    20,   230,    -1,
       8,     9,   230,    -1
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
     792,   793,   796,   800,   810,   818,   819,   820,   821,   825,
     829,   831,   835,   835,   837,   842,   849,   856,   866,   873,
     880,   890,   898,   908,   916,   925,   934,   944,   952,   961,
     970,   980,   989,  1001,  1006,  1011,  1017,  1024,  1031,  1038,
    1048,  1055,  1064,  1071,  1077,  1085,  1091,  1099,  1100,  1101,
    1102,  1103,  1107,  1114,  1123,  1130,  1136,  1147,  1150,  1156,
    1162,  1169,  1175,  1182,  1188,  1194,  1200,  1206,  1212,  1218,
    1224,  1230,  1238,  1246,  1252,  1265,  1266,  1269,  1270,  1271,
    1272,  1273,  1276,  1276,  1279,  1280,  1283,  1293,  1306,  1307,
    1307,  1310,  1311,  1312,  1313,  1316,  1320,  1321,  1322,  1323,
    1329,  1332,  1338,  1343,  1349,  1357,  1366,  1367,  1368,  1372,
    1383,  1395,  1406,  1421,  1425,  1426,  1429,  1430,  1434,  1438,
    1440,  1442,  1444,  1446,  1451,  1455,  1456,  1460,  1469,  1479,
    1483,  1484,  1485,  1486,  1487,  1488,  1490,  1494,  1495,  1498,
    1513,  1520,  1535,  1548,  1563,  1576,  1577,  1578,  1581,  1582,
    1585,  1586,  1587,  1588,  1589,  1590,  1591,  1592,  1593,  1595,
    1597,  1599,  1601,  1603,  1607,  1608,  1611,  1612,  1615,  1616,
    1619,  1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,  1628,
    1629,  1630,  1631,  1632,  1633,  1634,  1635,  1636,  1639,  1640,
    1643,  1643,  1653,  1654,  1655,  1656,  1657,  1658,  1659,  1660,
    1661,  1662,  1663,  1664,  1671,  1672,  1673,  1674,  1675,  1676,
    1677,  1678,  1679,  1680,  1681,  1682,  1683,  1684,  1685,  1686,
    1687,  1688,  1689,  1690,  1691,  1694,  1695,  1696,  1699,  1700,
    1703,  1704,  1705,  1708,  1709,  1710,  1714,  1715,  1716,  1717,
    1718,  1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,  1727,
    1728,  1729,  1730,  1731,  1732,  1733,  1734,  1735,  1736,  1737,
    1738,  1739,  1740,  1741,  1742,  1743,  1744,  1745,  1748,  1749,
    1752,  1765,  1766,  1767,  1771,  1774,  1775,  1776,  1777,  1777,
    1779,  1780
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
     286,   286,   238,   287,   287,   288,   288,   289,   289,   289,
     289,   289,   290,   290,   291,   291,   292,   292,   293,   294,
     293,   295,   295,   295,   295,   287,   296,   296,   296,   296,
     238,   297,   297,   297,   238,   298,   299,   299,   299,   300,
     300,   300,   300,   238,   301,   301,   302,   302,   238,   303,
     303,   303,   303,   303,   238,   304,   304,   238,   305,   305,
     306,   306,   306,   306,   306,   306,   306,   307,   307,   308,
     308,   305,   305,   305,   305,   309,   309,   309,   310,   310,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   312,   312,   313,   313,   314,   314,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   316,   316,
     317,   311,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   319,   319,   319,   320,   320,
     321,   321,   321,   322,   322,   322,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   324,   324,
     325,   326,   326,   326,   238,   327,   327,   327,   328,   328,
     329,   329
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
       6,     5,     1,     8,     6,     0,     4,     0,     2,     2,
       2,     2,     1,     0,     0,     3,     1,     3,     3,     0,
       6,     1,     1,     3,     3,     7,     3,     3,     5,     5,
       1,     8,     7,     7,     1,     8,     0,     2,     2,     3,
       5,     5,     7,     1,     4,     4,     0,     2,     1,     5,
       7,     7,     9,    11,     1,     2,     3,     1,     9,    11,
       0,     4,     3,     5,     5,     9,    10,     1,     3,     9,
       9,     9,     6,    11,     8,     0,     1,     2,     1,     3,
       5,     7,     4,     4,     5,     5,     4,     6,    11,    13,
      13,    15,     4,     6,     1,     3,     1,     3,     1,     3,
       0,     4,     5,     4,     5,     4,     5,     4,     5,     4,
       4,     3,     3,     3,     2,     3,     4,     4,     1,     3,
       0,     4,     0,     3,     2,     3,     3,     3,     3,     5,
       5,     5,     3,     5,     2,     7,     5,     7,     5,     2,
       3,     2,     3,     2,     3,     5,     4,     5,     7,     8,
       8,     7,     6,     6,     5,     0,     3,     5,     0,     1,
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
       0,     0,     0,   335,   198,     0,   267,     0,   267,     0,
     139,     0,   267,     0,     0,     0,   105,   193,   205,   208,
     230,   237,   242,   244,   247,   262,   290,   294,   303,   308,
     314,   317,   464,     0,     0,   306,     0,     0,   306,   336,
       0,     0,     0,     0,     0,     0,   273,     0,   273,     0,
       0,   467,   468,     0,     0,     0,     0,   315,     0,     1,
       2,   232,     0,   245,     0,     0,     0,     0,     0,     0,
       0,   337,     0,   306,   202,     0,   197,   195,   196,     0,
     231,   206,     0,   269,   270,   271,   272,   268,     0,   243,
       0,     0,     0,   465,   466,     0,     4,     7,     8,    10,
       9,     6,     0,     0,     0,   150,   140,   102,     0,   103,
     104,   141,   142,   143,    11,   145,   147,   146,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   154,   106,   148,   233,   271,   268,   154,     0,
       0,   155,   157,   158,   164,   316,     3,     0,     0,   238,
     239,     0,     0,     0,     0,     0,     0,     0,   307,   304,
       0,     0,     0,     0,     0,   305,     0,     0,     0,     0,
       0,   200,   108,     0,     0,     0,     0,   274,   274,   471,
     470,   469,     0,    43,     0,    28,    27,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   151,     0,     0,     0,
       0,   187,     0,     0,     0,     0,   172,   171,   175,   179,
     176,     0,     0,   173,   163,     0,   241,   240,     0,     0,
       0,   261,     0,     0,     0,     0,     0,   246,   447,   456,
     415,   415,   415,   415,   415,   440,   415,   437,     0,   415,
     415,   415,   418,   449,   418,   448,   415,   415,   415,     0,
     418,   415,   418,   439,   446,   438,   457,     0,     0,   441,
     309,     0,     0,     0,     0,     0,     0,     0,     0,   461,
     203,     0,   121,     0,   108,   202,   207,     0,     0,     0,
       0,     0,     5,    41,    44,     0,    38,     0,     0,    94,
       0,     0,     0,     0,    80,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,     0,     0,    19,
      21,    22,    20,   100,    98,    36,     0,    34,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    23,
      24,    26,    12,    13,    14,    15,    16,    17,    25,   152,
     108,   149,   235,   234,   154,     0,     0,     0,   159,   192,
     162,     0,   108,   156,   173,   173,     0,   166,     0,   174,
       0,   161,     0,     0,   257,   254,   260,   256,     0,   258,
       0,   444,   420,   426,   423,   420,   420,     0,   420,   420,
     420,   419,   423,   423,   420,   420,   420,     0,   423,   420,
     423,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   462,   463,     0,   380,   332,
     164,   109,     0,   126,   108,   199,   201,     0,   265,   276,
       0,     0,   264,   265,     0,   265,     0,    52,     0,    92,
       0,     0,     0,    51,     0,     0,    63,     0,     0,     0,
       0,    53,    54,    55,    56,    57,    58,    66,    67,    68,
       0,     0,     0,    76,     0,    37,    35,     0,     0,   101,
      99,    47,     0,     0,     0,     0,     0,     0,   110,     0,
     187,   189,   189,   189,     0,     0,     0,   121,   177,   178,
       0,     0,   180,     0,     0,     0,     0,     0,   259,     0,
       0,   432,   442,   434,   436,   458,     0,   435,   431,   430,
     453,   452,   429,   433,   428,     0,   450,   427,   451,     0,
       0,   311,     0,   310,     0,   223,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   461,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,     0,     0,     0,     0,   194,   204,     0,     0,
       0,   285,   275,     0,     0,   265,   292,   265,   293,    42,
      96,     0,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
      39,     0,     0,     0,    30,     0,   119,   236,   160,     0,
       0,     0,     0,   299,     0,     0,   126,   169,   167,     0,
       0,   165,   181,     0,     0,     0,     0,     0,   255,   416,
       0,   421,   422,     0,     0,   423,     0,   423,   423,   445,
       0,     0,     0,     0,     0,     0,     0,   209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     380,   334,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   320,   380,     0,   460,   114,   122,   123,   127,   287,
     286,     0,     0,   277,   282,   281,     0,   279,   263,   291,
      93,    97,     0,    61,    60,     0,    65,     0,     0,    81,
      82,    69,     0,    71,    77,    46,     0,    50,    40,    33,
      31,    32,     0,     0,   121,   188,     0,     0,     0,     0,
       0,     0,   295,   182,     0,   168,     0,     0,     0,   378,
       0,     0,     0,   425,   454,   459,   455,   443,     0,   312,
       0,     0,     0,     0,     0,   224,     0,   217,     0,     0,
       0,     0,   211,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,     0,     0,
       0,     0,   318,   331,   339,   382,   115,   116,   125,     0,
       0,     0,     0,     0,   278,     0,     0,     0,     0,    64,
      83,    84,    85,    86,    90,    89,    91,    88,    87,     0,
      48,   114,   117,   120,   126,   190,     0,     0,     0,   300,
     301,     0,     0,   248,   356,     0,   354,     0,   249,     0,
     417,   424,     0,   213,   226,   227,   228,     0,     0,     0,
       0,   210,     0,     0,   219,     0,     0,     0,   320,     0,
       0,     0,     0,   346,     0,     0,     0,   343,     0,   342,
       0,   352,     0,     0,     0,   381,   124,   129,   128,   266,
     289,   288,   284,   283,     0,    62,    59,    70,   112,     0,
       0,   111,   130,   186,     0,   185,   184,     0,   183,     0,
       0,     0,   253,     0,   379,   313,     0,   221,   218,     0,
     215,     0,     0,     0,   212,   319,   333,     0,     0,     0,
       0,     0,   344,   345,   138,   340,   322,     0,     0,     0,
       0,   394,     0,   399,     0,     0,     0,     0,     0,   403,
     384,     0,   401,     0,   118,   114,     0,   135,   191,   302,
     251,     0,   357,   355,   229,   214,   222,   220,     0,   347,
       0,     0,   353,     0,   321,     0,     0,     0,     0,   383,
       0,     0,     0,     0,     0,     0,   404,   385,   386,   388,
     387,   392,     0,     0,     0,     0,   402,   400,   280,   113,
     132,   131,     0,   107,     0,   216,     0,   341,     0,   323,
     324,     0,     0,     0,     0,     0,     0,     0,     0,   406,
       0,     0,     0,     0,     0,     0,     0,   136,     0,     0,
       0,     0,     0,     0,   396,     0,   414,   398,     0,     0,
       0,   407,   405,   389,   390,   391,   393,   134,   133,   358,
       0,     0,     0,     0,     0,     0,     0,   412,   413,     0,
       0,     0,   360,     0,     0,     0,     0,   360,     0,     0,
     395,   397,   411,   408,   250,   359,     0,     0,     0,   348,
       0,     0,   327,   325,   409,   410,     0,   374,     0,     0,
       0,   360,   360,     0,     0,   326,     0,   375,   252,     0,
     371,   373,   372,     0,     0,     0,   350,   349,     0,   328,
     376,   377,   361,   369,   363,     0,   365,   370,   367,     0,
     360,     0,   364,   362,   368,   366,   351,     0,     0,     0,
       0,     0,     0,     0,   329,   330
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   333,   334,   335,   517,   637,   348,   629,   200,
      15,    16,   322,   646,   842,   818,   911,   754,   473,   716,
     717,   606,   967,  1013,   808,    53,   143,   144,   246,   150,
     151,   152,   265,   153,   262,   420,   263,   416,   661,   662,
     408,   650,   846,   154,    17,    43,    79,   181,    18,    19,
     580,   581,    20,    21,   403,    61,    22,    23,    24,    25,
     611,    46,    88,   329,   480,   615,   826,   726,   478,    26,
      27,    56,   412,    28,    65,    29,    30,    31,   812,  1091,
    1092,    42,   600,   601,   857,   855,  1060,  1084,   770,   602,
     895,   431,   442,   551,   552,   310,   556,   469,   470,    32,
      51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -775
static const yytype_int16 yypact[] =
{
    2472,  -107,  -101,   210,  -775,   -67,  -775,   -96,  -775,    37,
    -775,   -73,     5,    44,   280,    81,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,   311,   319,   254,   369,   214,   254,  -775,
     213,   318,   273,   139,   468,    88,   -26,   477,   -26,    61,
      22,   260,  -775,   422,   492,   350,     8,  -775,   499,  -775,
    2472,   333,    21,   317,   372,   560,   527,   443,   104,   375,
     587,  -775,   253,   254,   386,   591,  -775,  -775,  -775,   -61,
    -775,  -775,   397,  -775,  -775,  -775,  -775,  -775,   609,  -775,
     666,  1430,  1430,  -775,  -775,   668,    28,  -775,  -775,  -775,
    -775,   679,  1430,  1430,  1430,  -775,  -775,  -775,   773,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   453,
     458,   493,   497,   501,   511,   544,   546,   550,   563,   572,
     602,   607,   642,   665,   716,   741,   747,   776,   777,   778,
     779,  1430,  2876,   -57,  -775,   475,    11,    13,    16,    10,
    -135,   341,  -775,  -775,   684,  -775,  -775,   770,   814,  -775,
    -775,   314,   966,    41,   968,   969,   970,  1023,  -775,  -775,
    2606,  1025,   889,   829,  1028,  -775,   892,   106,   832,  1031,
    1009,  -775,   250,    90,     8,  1056,  1058,  -110,    39,  2955,
    2955,  -775,  1060,  1430,  1430,   488,   488,  -775,  1430,  2417,
     177,   896,  1430,   539,  1430,  1430,   835,  1430,  1430,  1430,
    1430,  1430,  1430,  1430,  1430,  1430,  1430,   847,   848,   849,
     850,  1430,  1430,  1716,  -775,  1430,  1430,  1430,  1430,  1430,
      60,   852,   379,  1430,   667,  1430,  1430,  1430,  1430,  1430,
    1430,  1430,  1430,  1430,  1430,  1075,  -775,     8,  1430,  1076,
    1077,   212,   857,   227,  1081,     8,  -775,  -775,  -775,   -66,
    -775,     8,   967,   946,  -775,  1084,  -775,  -775,  1085,  1087,
    1088,  -775,  1089,  1096,  1098,  1099,  1100,  -775,  -775,  -775,
     879,   879,   879,   879,   879,  -775,   879,  -775,   880,   879,
     879,   879,  1055,  -775,  1055,  -775,   879,   879,   879,   884,
    1055,   879,  1055,  -775,  -775,  -775,  -775,   885,   886,  -775,
     206,  -126,  1109,  1110,   974,  1113,   977,   917,  1116,   -81,
    -775,  1430,   981,     8,   144,   386,  -775,  1120,  1122,   282,
    1120,   296,  -775,   510,  -775,   900,  2955,  2459,   182,  -775,
    1430,  1430,   904,   335,  -775,  -775,  -775,  1737,  1002,   935,
    1306,   905,  1769,  1790,  1811,  1832,  1856,  1877,  1905,  1946,
    1485,  1559,  1646,  -775,  -775,  -775,  -775,  1978,  1667,  -775,
     795,  1228,  1925,  2741,  2741,  -775,    62,  -775,   896,  1430,
    1430,   907,  1430,  2911,   908,   909,   910,  1064,   687,   903,
     988,   820,   552,   552,  1106,  1106,  1106,  1106,  -775,  -775,
     144,  -775,  -775,   902,   270,  1017,  1018,  1019,  -775,  -775,
    -775,     1,   274,   341,   946,   946,  1022,  1003,     8,  -775,
    1026,  -775,   188,  2606,  -775,  -775,  -775,  -775,   971,  -775,
    1139,  -775,  -775,  -775,  -775,  -775,  -775,  1143,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  1143,  -775,  -775,
    -775,  1144,  1146,  1010,   927,  1430,   965,    15,    93,  1016,
    1154,   150,  1155,  1156,  1020,  -775,  -775,  1158,   200,  -775,
     684,  2955,  1114,  1037,   144,  -775,  -775,  1145,  -113,  -775,
     264,   941,  -775,  -113,   941,  1027,  1430,  -775,  1430,  -775,
    1430,  2654,  2553,  -775,  1430,  1430,  -775,  1430,  2795,  1049,
    1049,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    1430,  1430,  1430,  -775,  1430,  -775,  -775,  1430,   942,  2741,
    2741,   896,  2933,  1430,   896,   896,   896,   944,  1069,  1169,
     212,  1072,  1072,  1072,  1430,  1172,  1173,   981,  -775,  -775,
       8,  1430,   117,     8,   952,  1065,  1066,   959,  -775,  1184,
     278,  -116,   483,  -116,  -116,  -775,   324,  -116,  -116,  -116,
     483,   483,  -116,  -116,  -116,   327,   483,  -116,   483,   962,
     963,  1129,  1430,  2955,   972,  -775,   973,   976,  1000,  1001,
     332,  -775,  1004,    15,  1188,   209,  1005,    15,   211,  1059,
    1193,   -60,  1226,  1008,  1117,   146,  1011,  1035,  1125,  1036,
     339,  -775,  1227,   896,  1231,  1430,  -775,  -775,  1090,  1142,
    1260,  -775,  -775,  1261,  1175,    79,  -775,    79,  -775,  -775,
    2955,  2816,  -775,  1430,   107,   393,  1999,  1430,  1430,  1061,
    1062,  2020,  1695,  2041,  2065,  1097,  -775,  1430,  1111,  1430,
     631,  1112,  1115,  1118,  -775,  1240,  1207,  -775,  -775,  1220,
    1126,  1127,  1128,  2955,  1320,     7,  1037,  -775,  2955,  1430,
    1130,  -775,  -775,   117,  1430,  1131,  1132,  1339,  -775,  -775,
    1338,  -775,  -775,  1187,  1354,  -775,  1357,  -775,  -775,  -775,
    1137,  2086,    15,  1360,  1361,  1362,  1363,  -775,  1365,  1147,
     342,  1148,  1179,    15,  1149,   345,  1180,    15,  1368,   258,
     200,  -775,   246,  1430,  1150,  1174,  1176,  1400,  1400,  1189,
    1339,    55,   200,  2606,  -775,   220,  1177,  -775,   894,  -775,
    2955,  1229,  1395,  -775,  -775,  2955,   362,  -775,  -775,  -775,
    -775,  2955,  1430,  -775,  -775,  1430,  -775,  2114,  2438,  -775,
    -775,  -775,  1430,  -775,  -775,  -775,  1190,  -775,   631,  -775,
    -775,  -775,  1430,  1430,   981,  -775,  1414,  1414,  1414,  1430,
    1430,  1415,  -775,  2955,  1400,  -775,  2135,  1416,  1417,  -775,
     366,  1197,  1420,  -775,   483,  -775,   483,   483,  1430,  -775,
     370,  1199,  1201,  1202,  1203,  -775,    15,  -775,    15,  1206,
     374,    15,  -775,  1214,   390,  1215,  1242,    15,   395,  1216,
    1322,  1323,  1219,  2163,  1416,  1400,  1400,  -775,   419,   436,
    1417,   439,   103,  -775,  -775,  -775,  -775,  -775,  -775,  1231,
    1430,  1430,  1120,  1342,  -775,  1404,  1221,  2187,  2208,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  2229,
    -775,  2837,  -144,  2955,  1037,  -775,   441,   454,   460,  2955,
    2955,  1425,   464,  1431,  -775,   467,  -775,   469,  -775,  1447,
    -775,  -775,  2250,  -775,  -775,  -775,  -775,  1448,   471,   478,
      15,  -775,   494,    15,  -775,    15,  1232,   502,    55,  1430,
    1233,  1234,  1339,  -775,   506,   508,   512,  -775,  1449,  -775,
     536,  -775,    69,  1450,  1406,  2566,  -775,  2955,  2955,  1235,
    -775,  2955,  -775,  2955,  1175,  -775,  -775,  -775,  -775,  1302,
    1430,  -775,  1364,  -775,  1458,  -775,  -775,  1430,  -775,  1272,
    1317,  1466,  -775,  1467,  -775,  -775,  1245,  -775,  -775,   547,
    -775,   556,   569,    15,  -775,   103,  -775,  2274,  1416,  1417,
     576,  1324,  -775,  -775,  -775,  -775,  -775,  1469,   -35,   -86,
    1334,  1250,  1251,  1252,  1437,  1476,  1256,  1478,    29,  -775,
    -775,  1367,  1369,   604,  -775,  2837,   313,  1375,  -775,  2955,
    -775,  1480,  -775,  -775,  -775,  -775,  -775,  -775,   608,  -775,
     628,   632,  -775,  1481,  -775,  1482,  1489,  1277,  1291,  -775,
    1512,  1430,  1513,  1479,   154,  1430,  -775,  -775,  -775,  -775,
    -775,  -775,  1295,  1296,  1297,  1430,  -775,  -775,  -775,  -775,
    1366,  1370,  1400,  -775,  1298,  -775,  1376,  -775,   424,  -775,
    -775,  1521,  1524,   636,  2295,   639,  1303,  1304,  1411,  -775,
    2323,  1308,  1309,  1310,  2344,  1405,  1410,  1311,  1536,  1537,
    1538,  1536,  1340,  1350,  -775,  1560,   719,  -775,  1585,  1430,
    1430,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
     670,   669,  1371,   674,  1372,  1433,  1373,  -775,  -775,  1374,
    2372,  2396,  -775,  1589,  1590,  1536,  1536,  -775,  1438,  1593,
    -775,  -775,   856,  -775,   195,  -775,  1377,   708,   710,   201,
    1591,   713,  -775,  -775,  -775,  -775,   -44,  1492,   173,   -36,
    1536,  -775,  -775,  1533,  1434,  -775,  1438,  -775,  -775,   271,
    -775,  -775,  -775,   243,   312,   717,   201,   201,  1483,  -775,
    -775,  -775,  -775,  -775,  -775,   148,  -775,  -775,  -775,   192,
    -775,  1452,  -775,  -775,  -775,  -775,   201,    72,  1490,  1514,
    1517,  1527,  1679,  1693,  -775,  -775
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -775,  1639,   -53,  -458,  -775,  -775,  -775,  -775,  1200,  1502,
    -775,  -137,  -178,  -775,  -775,  -761,  -775,  -775,  -515,  -775,
     883,  -633,  -775,  -775,  -703,  -775,  -775,  1455,  -141,  -109,
    1499,  -241,  1263,  -775,  -775,   553,  -775,  -775,  -775,  1041,
    1238,   438,   242,  -775,  -775,  -775,  1694,  1445,  -775,  -775,
    -581,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -418,   307,  1723,  1584,  -775,  1289,  -775,   870,  -329,  -775,
    -775,  -775,  -775,  -775,    25,  -775,  -775,  -775,   897,  -775,
     671,  -775,  1078,  1095,  -738,  -774,  -764,  -634,  -686,  -775,
    -775,   503,   198,   169,  -433,  -420,  1329,  -587,  -775,  -775,
    -775,  1733
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -462
static const yytype_int16 yytable[] =
{
     142,   483,   690,   548,   701,   809,   695,   251,  -296,   560,
     561,   148,   252,   148,  -298,   566,  -297,   568,   575,   224,
     417,   534,   656,   762,   811,    93,  1107,   760,   619,   609,
     884,   465,   254,   997,   998,   999,  1000,   184,   189,   190,
     253,   247,  1113,   985,   271,    49,    44,    57,    83,   195,
     196,   197,   465,   909,   161,   199,   245,   327,   414,   635,
     987,   852,   456,    70,   342,   616,   375,   618,   515,   671,
      91,    33,   890,   466,   946,   324,  1138,    34,   376,    84,
     908,    92,    47,   910,   672,  1001,    85,   415,   223,   947,
      86,    81,   255,   162,   466,  -461,   272,    87,   179,   457,
     163,   780,   885,   886,   988,    54,    94,   172,   273,   316,
     164,    45,   790,    58,   610,   328,   794,   225,   226,   227,
     228,   229,   230,   231,   813,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   400,   986,
     892,   336,    74,   467,   468,   337,   475,  1108,  1114,   343,
     347,   349,   350,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   980,   700,   185,   465,   367,   368,
     248,   165,   370,   371,   372,   373,   374,   542,    10,   746,
     383,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   482,    50,   485,   142,   940,   728,   377,   729,
     516,   981,    82,  1139,  1009,   868,   330,   869,   732,   466,
     872,   912,   166,  1096,   474,  1027,   877,    67,   173,  1103,
     317,   609,   528,  -461,   453,   535,   576,   577,   578,   579,
    -296,   761,  1132,   149,   537,   149,  -298,    75,  -297,   844,
     250,   518,   774,   893,   776,   777,  1002,  1003,  1004,   544,
     527,    76,   192,   193,  1005,   592,   176,   659,   816,   705,
     894,   593,    77,   530,   328,  1097,   706,   454,   471,   339,
     340,  1097,  1110,   224,   489,   490,  1134,  1063,   323,    35,
      59,   582,    68,    36,    78,   545,  1133,   491,   492,   929,
     455,   936,   931,   815,   932,   498,   607,   594,  1028,   657,
     595,  1122,   663,   817,    60,   660,   727,   799,   405,  1037,
     245,  1087,  1088,   596,    62,    48,  1111,   185,   583,    55,
     597,   177,    63,    37,   406,  1098,   519,   520,    69,   522,
    1135,  1098,   546,   733,   223,  1099,  1115,  1112,   586,   321,
    1029,  1099,  1120,   800,   598,   225,   226,   227,   228,   229,
     230,   231,   978,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,    38,   178,    64,   268,
    1126,   255,    66,   341,   547,   587,   157,   158,   341,  1121,
    1123,   269,    39,    40,   638,    71,   599,   641,   642,   643,
     801,   159,   379,   380,  1124,   381,    41,   692,   382,   696,
     256,   407,   573,   225,   226,   227,   228,   229,   230,   231,
    1125,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,    83,    96,    97,    98,    99,   100,
     101,    72,   802,   494,   693,   620,   697,   621,  -202,   102,
     103,   624,   625,  1089,   626,   321,   796,   104,   105,  1127,
      10,    73,   257,   410,   255,    84,   106,   631,   632,   633,
    -170,   634,   146,  1128,    10,   258,   714,  1116,  1117,   321,
     640,    80,  1010,   147,   180,   481,   259,  -202,   107,  1129,
      89,   653,   108,   797,   160,   109,   110,    95,   658,   484,
     612,   613,   443,   899,   260,   145,  1136,  1011,   448,   111,
     450,   536,   155,   112,   669,   670,   261,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   681,
     225,   226,   227,   228,   229,   230,   231,   113,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   167,    96,    97,    98,    99,   100,   101,   673,   674,
     675,   676,   718,   677,   676,   720,   102,   103,   687,   688,
     114,   725,   495,   169,   104,   711,   712,   170,   787,   688,
     731,   792,   688,   168,   737,   738,   174,   115,   240,   241,
     242,   243,   244,   171,   116,   117,   748,   118,   824,   825,
     175,   344,   858,   859,   182,   107,   863,   688,   186,   108,
     871,   688,   109,   110,   553,   554,   763,   557,   558,   559,
     180,   766,   187,   562,   563,   564,   874,   688,   567,   734,
     735,   878,   712,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   887,   888,   141,  1040,  1041,
     803,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   889,   888,   345,   891,   859,   913,   914,   188,
      96,    97,    98,    99,   100,   101,    49,   114,   201,   827,
     915,   914,   828,   202,   102,   103,   916,   914,   194,   839,
     918,   888,   104,   920,   921,   922,   923,   927,   688,   841,
     843,   384,   249,   385,   928,   688,   849,   850,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   203,   346,
     930,   688,   204,   107,   264,   862,   205,   108,   934,   688,
     109,   110,   941,   921,   942,   888,   206,   486,   943,   888,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   945,   923,   141,  1067,  1068,   897,   898,   207,
     901,   208,   903,   975,   688,   209,    96,    97,    98,    99,
     100,   101,   976,   688,   432,   433,   434,   435,   210,   436,
     102,   103,   438,   439,   440,   977,   688,   211,   104,   444,
     445,   446,   982,   859,   449,   114,   226,   227,   228,   229,
     230,   231,   266,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   937,   212,   386,   107,
    1008,   825,   213,   108,  1015,   688,   109,   110,    96,    97,
      98,    99,   100,   101,   238,   239,   240,   241,   242,   243,
     244,   725,   102,   103,  1016,   921,   267,   965,  1017,   923,
     104,   351,  1044,  1045,   969,  1047,  1048,   214,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     215,   107,   387,  1074,  1075,   108,  1072,  1073,   109,   110,
    1077,  1073,  1094,  1095,   225,   226,   227,   228,   229,   230,
     231,   114,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   236,   237,   238,   239,   240,
     241,   242,   243,   244,  1101,  1073,  1102,  1073,  1024,  1105,
    1106,   216,  1030,  1130,  1073,   225,   226,   227,   228,   229,
     230,   231,  1034,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   217,   538,   539,   198,
     651,   652,   218,   114,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,  1070,  1071,   141,   847,
     848,   219,   220,   221,   222,    96,    97,    98,    99,   100,
     101,   237,   238,   239,   240,   241,   242,   243,   244,   102,
     103,   270,   820,   274,   275,   276,   277,   104,   311,   312,
     313,   314,   315,   318,   319,   320,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   107,   325,
     141,   326,   108,   332,    10,   109,   110,    96,    97,    98,
      99,   100,   101,   363,   364,   365,   366,   378,   399,   402,
     404,   102,   103,   409,   411,   419,   418,   421,   422,   104,
     423,   424,   425,    96,    97,    98,    99,   100,   101,   426,
     497,   427,   428,   429,   430,   437,   441,   102,   103,   447,
     451,   452,   458,   459,   460,   104,   461,   462,   463,   464,
     107,   821,   472,   477,   108,   479,   487,   109,   110,   529,
     493,   501,   521,   524,   525,   526,   244,   531,   532,   533,
     114,   540,   549,   541,   550,   543,   107,   555,   571,   569,
     108,   570,   572,   109,   110,   574,   584,   585,   588,   589,
     590,   591,   499,   605,   604,   608,   614,   628,   636,   609,
     644,   645,   647,   649,   719,   654,   655,   664,    96,    97,
      98,    99,   100,   101,   667,   665,   666,   668,   678,   679,
     680,   691,   102,   103,   689,   694,   699,   682,   683,   698,
     104,   684,   114,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   685,   686,   141,   114,   702,
     713,   107,    10,   703,   715,   108,   707,   704,   109,   110,
     227,   228,   229,   230,   231,   709,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   724,
     708,   710,   721,   722,   723,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   739,   740,   141,
     752,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   114,   753,   141,   225,   226,   227,   228,
     229,   230,   231,   745,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   747,   749,   755,
     759,   750,   769,   771,   751,    96,    97,    98,    99,   100,
     101,   756,   757,   758,   772,   764,   767,   768,   773,   102,
     103,   775,   778,   781,   782,   783,   784,   104,   785,   789,
     793,   795,   786,   788,   791,   804,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   107,   805,
     141,   806,   108,   807,   819,   109,   110,    96,    97,    98,
      99,   100,   101,   822,   810,   823,   840,   845,   851,   854,
     856,   102,   103,   860,   861,   864,   900,   865,   866,   104,
     867,   870,   876,    96,    97,    98,    99,   100,   101,   873,
     875,   879,   880,   881,   882,   917,   904,   102,   103,   919,
     924,   926,   944,   948,   964,   104,   949,   933,   938,   939,
     107,   968,   610,   970,   108,   966,   971,   109,   110,   972,
     973,   974,   989,   983,   984,   990,   991,   992,   993,   994,
     114,   995,   996,  1014,  1018,  1019,   107,  1006,   902,  1007,
     108,  1012,  1020,   109,   110,   225,   226,   227,   228,   229,
     230,   231,  1021,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,  1022,  1023,  1025,  1026,
    1031,  1032,  1033,  1038,  1042,  1039,  1035,  1043,  1049,  1050,
    1036,  1051,  1057,   500,  1053,  1054,  1055,  1058,   888,  1059,
    1061,  1062,   114,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,  1066,  1064,   141,   114,   225,
     226,   227,   228,   229,   230,   231,  1065,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
    1069,  1079,  1085,  1086,  1104,  1090,  1076,  1078,  1093,  1080,
    1081,  1109,  1100,  1107,  1131,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,  1118,  1137,   141,
    1140,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,  1142,  1141,   141,   225,   226,   227,   228,
     229,   230,   231,  1143,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   225,   226,   227,
     228,   229,   230,   231,  1144,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,  1145,   156,
     630,   338,   896,   401,   765,   225,   226,   227,   228,   229,
     230,   231,   510,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   225,   226,   227,   228,
     229,   230,   231,   603,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   225,   226,   227,
     228,   229,   230,   231,   413,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   648,   183,
     476,    90,   331,   617,   963,   935,   565,  1119,   798,   225,
     226,   227,   228,   229,   230,   231,   511,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     225,   226,   227,   228,   229,   230,   231,   814,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   225,   226,   227,   228,   229,   230,   231,   191,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   225,   226,   227,   228,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,     0,     0,     0,   225,   226,   227,   228,
     229,   230,   231,   512,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   225,   226,   227,
     228,   229,   230,   231,   514,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,     0,     0,
       0,     0,     0,     0,     0,   225,   226,   227,   228,   229,
     230,   231,   742,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,     0,     0,   228,   229,
     230,   231,   369,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   225,   226,   227,   228,
     229,   230,   231,   496,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,   226,
     227,   228,   229,   230,   231,   502,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   225,
     226,   227,   228,   229,   230,   231,   503,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     225,   226,   227,   228,   229,   230,   231,   504,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   225,   226,   227,   228,   229,   230,   231,   505,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,     0,     0,     0,   225,   226,   227,   228,   229,
     230,   231,   506,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   225,   226,   227,   228,
     229,   230,   231,   507,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,   225,   226,   227,   228,   229,   230,
     231,   508,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   225,   226,   227,   228,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,     0,     0,     0,     0,
       0,     0,   509,   225,   226,   227,   228,   229,   230,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,     0,     0,     0,   225,   226,   227,
     228,   229,   230,   231,   513,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   225,   226,
     227,   228,   229,   230,   231,   736,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   225,
     226,   227,   228,   229,   230,   231,   741,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     225,   226,   227,   228,   229,   230,   231,   743,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,     0,     0,     0,   225,   226,   227,   228,   229,   230,
     231,   744,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   225,   226,   227,   228,   229,
     230,   231,   779,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,   225,   226,   227,   228,   229,   230,   231,
     829,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   225,   226,   227,   228,   229,   230,
     231,   853,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,     0,     0,     0,     0,     0,
       0,     0,   225,   226,   227,   228,   229,   230,   231,   883,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,     0,     0,     0,   225,   226,   227,   228,
     229,   230,   231,   905,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   225,   226,   227,
     228,   229,   230,   231,   906,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   225,   226,
     227,   228,   229,   230,   231,   907,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   225,
     226,   227,   228,   229,   230,   231,   925,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     979,     0,     0,     0,     1,     0,     0,     2,     0,     0,
       0,     0,     0,   830,   831,     0,     0,     0,   832,     0,
     833,  1046,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   834,   835,     0,   836,     0,     0,     0,     0,  1052,
       4,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,   226,   227,   228,   229,   230,   231,
    1056,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   950,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1082,     0,
       0,     0,     0,   951,     0,     0,   952,     0,   953,     0,
       0,   954,     0,   198,     0,     0,     0,     0,     0,     0,
       7,   955,  1083,     0,     0,     0,     8,   956,   957,     0,
       0,     0,     0,     0,     0,     0,   837,   838,   488,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     958,     0,     0,    11,   278,   279,    12,   280,     0,   281,
     282,    13,     0,     0,   225,   226,   227,   228,   229,   230,
     231,   283,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,     0,   959,     0,     0,     0,
       0,   284,   285,   286,   287,     0,     0,   288,     0,     0,
       0,   289,     0,     0,   960,     0,     0,     0,     0,     0,
     961,     0,     0,     0,     0,     0,   290,     0,     0,     0,
       0,     0,     0,   291,     0,     0,     0,     0,   292,     0,
       0,     0,   623,     0,     0,   293,     0,     0,   294,   295,
     296,     0,     0,     0,     0,     0,   622,     0,     0,     0,
       0,     0,   962,   297,  -462,  -462,  -462,  -462,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   298,   299,     0,   300,   301,     0,     0,     0,
       0,   302,     0,   303,     0,     0,     0,     0,   304,   305,
       0,     0,     0,   306,     0,     0,     0,     0,   307,     0,
     308,     0,     0,     0,   309,   225,   226,   227,   228,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   225,   226,   227,   228,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   225,   226,   227,
     228,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,     0,     0,
       0,     0,     0,     0,     0,   816,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,   225,   226,   227,   228,
     229,   230,   231,   627,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,     0,   730,     0,
       0,     0,     0,     0,     0,     0,   245,     0,     0,     0,
     817,   225,   226,   227,   228,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,     0,   225,   226,   227,   228,   229,   230,   231,
     523,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,     0,   225,   226,   227,   228,   229,
     230,   231,   639,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244
};

static const yytype_int16 yycheck[] =
{
      53,   330,   583,   423,   591,   708,   587,   148,     3,   442,
     443,     3,   149,     3,     3,   448,     3,   450,     3,     3,
     261,    20,   537,   656,   710,     3,    70,    20,   486,   142,
     804,   112,   167,     4,     5,     6,     7,    98,    91,    92,
     149,    98,    78,    78,     3,     8,   113,     3,    74,   102,
     103,   104,   112,   197,    33,   108,    40,   167,   124,   517,
     146,   764,   188,    38,   201,   483,     6,   485,     6,   185,
       9,   178,   810,   154,     5,   184,     4,   178,    18,   105,
     841,    20,   178,   227,   200,    56,   112,   153,   141,    20,
     116,     3,   227,    72,   154,    40,    55,   123,    73,   225,
      79,   682,   805,   806,   190,   178,    84,     3,    67,     3,
      89,   178,   693,    69,   227,   225,   697,    10,    11,    12,
      13,    14,    15,    16,   711,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   247,   174,
      37,   194,     3,   224,   225,   198,   324,   191,   184,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   938,   225,   227,   112,   221,   222,
     227,   150,   225,   226,   227,   228,   229,   418,   168,   637,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   329,   156,   331,   248,   882,   615,   138,   617,
     138,   939,   114,   131,   965,   786,   167,   788,   101,   154,
     791,   844,   191,    18,   323,    61,   797,     3,   114,    18,
     114,   142,   400,   168,    18,   224,   211,   212,   213,   214,
     225,   224,    84,   225,   412,   225,   225,    98,   225,   754,
     224,   378,   675,   140,   677,   678,   217,   218,   219,    61,
     387,   112,   224,   225,   225,    55,     3,   140,    38,   113,
     157,    61,   123,   404,   225,    70,   120,    61,   321,    92,
      93,    70,    99,     3,    92,    93,    84,  1041,   188,    69,
       0,   188,    68,    73,   145,    97,   138,   340,   341,   870,
      84,   878,   873,   713,   875,   348,   474,    97,   144,   540,
     100,    58,   543,    83,   223,   188,   227,    61,    96,  1012,
      40,  1075,  1076,   113,     3,     8,   143,   227,   225,    12,
     120,    68,     3,   113,   112,   130,   379,   380,   114,   382,
     138,   130,   144,   226,   387,   140,  1100,   164,   188,   195,
     186,   140,    71,    97,   144,    10,    11,    12,    13,    14,
      15,    16,   933,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   156,   114,   114,    55,
      58,   227,     3,   196,   186,   225,    43,    44,   196,   108,
     137,    67,   172,   173,   521,   172,   186,   524,   525,   526,
     144,    58,    13,    14,   151,    16,   186,   188,    19,   188,
      59,   189,   455,    10,    11,    12,    13,    14,    15,    16,
     167,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    74,     3,     4,     5,     6,     7,
       8,   113,   186,    98,   225,   488,   225,   490,   188,    17,
      18,   494,   495,  1077,   497,   195,   188,    25,    26,   137,
     168,   178,   111,   226,   227,   105,    34,   510,   511,   512,
     119,   514,   112,   151,   168,   124,   603,  1101,  1102,   195,
     523,     3,   159,   123,   224,   193,   135,   227,    56,   167,
       3,   534,    60,   225,   151,    63,    64,   227,   541,   193,
     226,   227,   294,   822,   153,     3,  1130,   184,   300,    77,
     302,   227,     3,    81,   226,   227,   165,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   572,
      10,    11,    12,    13,    14,    15,    16,   105,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   224,     3,     4,     5,     6,     7,     8,    65,    66,
     226,   227,   605,   226,   227,   608,    17,    18,   226,   227,
     138,   614,   227,     3,    25,   226,   227,    40,   226,   227,
     623,   226,   227,   201,   627,   628,   201,   155,    26,    27,
      28,    29,    30,   140,   162,   163,   639,   165,   226,   227,
       3,    52,   226,   227,     3,    56,   226,   227,   201,    60,
     226,   227,    63,    64,   435,   436,   659,   438,   439,   440,
     224,   664,     3,   444,   445,   446,   226,   227,   449,   226,
     227,   226,   227,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   226,   227,   225,   224,   225,
     703,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   226,   227,   125,   226,   227,   226,   227,     3,
       3,     4,     5,     6,     7,     8,     8,   138,   225,   732,
     226,   227,   735,   225,    17,    18,   226,   227,     9,   742,
     226,   227,    25,   226,   227,   226,   227,   226,   227,   752,
     753,    34,   227,    36,   226,   227,   759,   760,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   225,   180,
     226,   227,   225,    56,    40,   778,   225,    60,   226,   227,
      63,    64,   226,   227,   226,   227,   225,   227,   226,   227,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   226,   227,   225,    46,    47,   820,   821,   225,
     823,   225,   825,   226,   227,   225,     3,     4,     5,     6,
       7,     8,   226,   227,   281,   282,   283,   284,   225,   286,
      17,    18,   289,   290,   291,   226,   227,   225,    25,   296,
     297,   298,   226,   227,   301,   138,    11,    12,    13,    14,
      15,    16,    42,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   879,   225,   161,    56,
     226,   227,   225,    60,   226,   227,    63,    64,     3,     4,
       5,     6,     7,     8,    24,    25,    26,    27,    28,    29,
      30,   904,    17,    18,   226,   227,    42,   910,   226,   227,
      25,    26,   226,   227,   917,   226,   227,   225,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     225,    56,   225,   224,   225,    60,   226,   227,    63,    64,
     226,   227,    46,    47,    10,    11,    12,    13,    14,    15,
      16,   138,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   226,   227,   226,   227,   991,   226,
     227,   225,   995,   226,   227,    10,    11,    12,    13,    14,
      15,    16,  1005,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   225,   414,   415,   196,
     532,   533,   225,   138,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,  1049,  1050,   225,   757,
     758,   225,   225,   225,   225,     3,     4,     5,     6,     7,
       8,    23,    24,    25,    26,    27,    28,    29,    30,    17,
      18,    55,   128,    55,    55,    55,     3,    25,     3,   140,
     201,     3,   140,   201,     3,    26,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,    56,     3,
     225,     3,    60,     3,   168,    63,    64,     3,     4,     5,
       6,     7,     8,   226,   226,   226,   226,   225,     3,     3,
       3,    17,    18,   226,     3,   139,   119,     3,     3,    25,
       3,     3,     3,     3,     4,     5,     6,     7,     8,     3,
      98,     3,     3,     3,   225,   225,    51,    17,    18,   225,
     225,   225,     3,     3,   140,    25,     3,   140,   201,     3,
      56,   227,   141,     3,    60,     3,   226,    63,    64,   227,
     226,   226,   225,   225,   225,   225,    30,   120,   120,   120,
     138,   119,   171,   140,     5,   119,    56,     4,   138,     5,
      60,     5,   225,    63,    64,   190,   140,     3,     3,     3,
     140,     3,   227,   126,    50,    20,   225,   118,   226,   142,
     226,   102,     3,   101,    84,     3,     3,   225,     3,     4,
       5,     6,     7,     8,   225,   120,   120,     3,   226,   226,
      61,     3,    17,    18,   190,   190,     3,   225,   225,   140,
      25,   225,   138,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   225,   225,   225,   138,     3,
       3,    56,   168,   225,     3,    60,   225,   120,    63,    64,
      12,    13,    14,    15,    16,   120,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    84,
     225,   225,   120,     3,     3,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   226,   226,   225,
      50,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   138,   107,   225,    10,    11,    12,    13,
      14,    15,    16,   226,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   226,   226,   119,
      20,   226,     3,     5,   226,     3,     4,     5,     6,     7,
       8,   225,   225,   225,   167,   225,   225,   225,     4,    17,
      18,     4,   225,     3,     3,     3,     3,    25,     3,   190,
     190,     3,   225,   225,   225,   225,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,    56,   225,
     225,   225,    60,     3,   227,    63,    64,     3,     4,     5,
       6,     7,     8,   184,   225,    20,   226,     3,     3,     3,
       3,    17,    18,   226,     4,   226,    84,   226,   226,    25,
     227,   225,   190,     3,     4,     5,     6,     7,     8,   225,
     225,   225,   120,   120,   225,    20,   225,    17,    18,    18,
       3,     3,     3,     3,   152,    25,    50,   225,   225,   225,
      56,     3,   227,   191,    60,   101,   149,    63,    64,     3,
       3,   226,   138,   149,     5,   225,   225,   225,    41,     3,
     138,   225,     4,     3,     3,     3,    56,   120,    84,   120,
      60,   116,     3,    63,    64,    10,    11,    12,    13,    14,
      15,    16,   225,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   225,     5,     5,    40,
     225,   225,   225,   225,     3,   149,   160,     3,   225,   225,
     160,   120,   127,   227,   226,   226,   226,   127,   227,     3,
       3,     3,   138,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     5,   226,   225,   138,    10,
      11,    12,    13,    14,    15,    16,   226,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       5,   158,     3,     3,     3,   157,   225,   225,     5,   226,
     226,   109,   225,    70,   121,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   193,   176,   225,
     140,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   136,   140,   225,    10,    11,    12,    13,
      14,    15,    16,   136,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,     5,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     5,    60,
     500,   199,   819,   248,   663,    10,    11,    12,    13,    14,
      15,    16,   227,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   470,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   255,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   530,    75,
     325,    48,   188,   484,   904,   878,   447,  1106,   700,    10,
      11,    12,    13,    14,    15,    16,   227,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   712,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    95,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   227,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   227,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   227,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    13,    14,
      15,    16,   226,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   226,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   226,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   226,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   226,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   226,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   226,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   226,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   226,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,   226,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   226,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   226,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   226,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   226,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   226,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   226,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     226,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   226,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   226,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   226,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   226,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   226,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   226,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    80,    -1,
      82,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,   104,    -1,   106,    -1,    -1,    -1,    -1,   226,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     226,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    18,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,    -1,
      -1,    45,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    55,   226,    -1,    -1,    -1,   154,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   198,   199,   179,   167,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,   181,    48,    49,   184,    51,    -1,    53,
      54,   189,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    65,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,   120,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    -1,   179,    -1,    -1,   129,    -1,    -1,   132,   133,
     134,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,   186,   147,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   166,   167,    -1,   169,   170,    -1,    -1,    -1,
      -1,   175,    -1,   177,    -1,    -1,    -1,    -1,   182,   183,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,   192,    -1,
     194,    -1,    -1,    -1,   198,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    98,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      83,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
      39,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,    39,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
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
      55,     3,    55,    67,    55,    55,    55,     3,    48,    49,
      51,    53,    54,    65,    85,    86,    87,    88,    91,    95,
     110,   117,   122,   129,   132,   133,   134,   147,   166,   167,
     169,   170,   175,   177,   182,   183,   187,   192,   194,   198,
     323,     3,   140,   201,     3,   140,     3,   114,   201,     3,
      26,   195,   240,   188,   257,     3,     3,   167,   225,   291,
     167,   291,     3,   230,   231,   232,   230,   230,   237,    92,
      93,   196,   239,   230,    52,   125,   180,   230,   235,   230,
     230,    26,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   226,   226,   226,   226,   230,   230,   226,
     230,   230,   230,   230,   230,     6,    18,   138,   225,    13,
      14,    16,    19,   230,    34,    36,   161,   225,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,     3,
     257,   255,     3,   282,     3,    96,   112,   189,   268,   226,
     226,     3,   300,   258,   124,   153,   265,   259,   119,   139,
     263,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     225,   319,   319,   319,   319,   319,   319,   225,   319,   319,
     319,    51,   320,   320,   319,   319,   319,   225,   320,   319,
     320,   225,   225,    18,    61,    84,   188,   225,     3,     3,
     140,     3,   140,   201,     3,   112,   154,   224,   225,   325,
     326,   230,   141,   246,   257,   240,   275,     3,   296,     3,
     292,   193,   239,   296,   193,   239,   227,   226,   179,    92,
      93,   230,   230,   226,    98,   227,   226,    98,   230,   227,
     227,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     227,   227,   227,   226,   227,     6,   138,   233,   239,   230,
     230,   225,   230,    39,   225,   225,   225,   239,   240,   227,
     256,   120,   120,   120,    20,   224,   227,   240,   263,   263,
     119,   140,   259,   119,    61,    97,   144,   186,   323,   171,
       5,   321,   322,   321,   321,     4,   324,   321,   321,   321,
     322,   322,   321,   321,   321,   324,   322,   321,   322,     5,
       5,   138,   225,   230,   190,     3,   211,   212,   213,   214,
     278,   279,   188,   225,   140,     3,   188,   225,     3,     3,
     140,     3,    55,    61,    97,   100,   113,   120,   144,   186,
     310,   311,   317,   260,    50,   126,   249,   240,    20,   142,
     227,   288,   226,   227,   225,   293,   288,   293,   288,   231,
     230,   230,    92,   179,   230,   230,   230,    98,   118,   236,
     236,   230,   230,   230,   230,   231,   226,   234,   239,    39,
     230,   239,   239,   239,   226,   102,   241,     3,   268,   101,
     269,   269,   269,   230,     3,     3,   246,   259,   230,   140,
     188,   266,   267,   259,   225,   120,   120,   225,     3,   226,
     227,   185,   200,    65,    66,   226,   227,   226,   226,   226,
      61,   230,   225,   225,   225,   225,   225,   226,   227,   190,
     278,     3,   188,   225,   190,   278,   188,   225,   140,     3,
     225,   325,     3,   225,   120,   113,   120,   225,   225,   120,
     225,   226,   227,     3,   239,     3,   247,   248,   230,    84,
     230,   120,     3,     3,    84,   230,   295,   227,   288,   288,
      92,   230,   101,   226,   226,   227,   226,   230,   230,   226,
     226,   226,   227,   226,   226,   226,   231,   226,   230,   226,
     226,   226,    50,   107,   245,   119,   225,   225,   225,    20,
      20,   224,   249,   230,   225,   267,   230,   225,   225,     3,
     316,     5,   167,     4,   322,     4,   322,   322,   225,   226,
     278,     3,     3,     3,     3,     3,   225,   226,   225,   190,
     278,   225,   226,   190,   278,     3,   188,   225,   310,    61,
      97,   144,   186,   230,   225,   225,   225,     3,   252,   252,
     225,   316,   306,   325,   311,   323,    38,    83,   243,   227,
     128,   227,   184,    20,   226,   227,   294,   230,   230,   226,
      75,    76,    80,    82,   103,   104,   106,   198,   199,   230,
     226,   230,   242,   230,   246,     3,   270,   270,   270,   230,
     230,     3,   252,   226,     3,   313,     3,   312,   226,   227,
     226,     4,   230,   226,   226,   226,   226,   227,   278,   278,
     225,   226,   278,   225,   226,   225,   190,   278,   226,   225,
     120,   120,   225,   226,   313,   252,   252,   226,   227,   226,
     312,   226,    37,   140,   157,   318,   248,   230,   230,   296,
      84,   230,    84,   230,   225,   226,   226,   226,   243,   197,
     227,   244,   249,   226,   227,   226,   226,    20,   226,    18,
     226,   227,   226,   227,     3,   226,     3,   226,   226,   278,
     226,   278,   278,   225,   226,   306,   325,   230,   225,   225,
     316,   226,   226,   226,     3,   226,     5,    20,     3,    50,
      18,    37,    40,    42,    45,    55,    61,    62,    84,   120,
     138,   144,   186,   295,   152,   230,   101,   250,     3,   230,
     191,   149,     3,     3,   226,   226,   226,   226,   278,   226,
     313,   312,   226,   149,     5,    78,   174,   146,   190,   138,
     225,   225,   225,    41,     3,   225,     4,     4,     5,     6,
       7,    56,   217,   218,   219,   225,   120,   120,   226,   243,
     159,   184,   116,   251,     3,   226,   226,   226,     3,     3,
       3,   225,   225,     5,   230,     5,    40,    61,   144,   186,
     230,   225,   225,   225,   230,   160,   160,   252,   225,   149,
     224,   225,     3,     3,   226,   227,   226,   226,   227,   225,
     225,   120,   226,   226,   226,   226,   226,   127,   127,     3,
     314,     3,     3,   314,   226,   226,     5,    46,    47,     5,
     230,   230,   226,   227,   224,   225,   225,   226,   225,   158,
     226,   226,   226,   226,   315,     3,     3,   314,   314,   315,
     157,   307,   308,     5,    46,    47,    18,    70,   130,   140,
     225,   226,   226,    18,     3,   226,   227,    70,   191,   109,
      99,   143,   164,    78,   184,   314,   315,   315,   193,   308,
      71,   108,    58,   137,   151,   167,    58,   137,   151,   167,
     226,   121,    84,   138,    84,   138,   315,   176,     4,   131,
     140,   140,   136,   136,     5,     5
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
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 194:
#line 811 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 195:
#line 818 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 196:
#line 819 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 197:
#line 820 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 198:
#line 821 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 199:
#line 826 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 200:
#line 830 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 201:
#line 832 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 204:
#line 838 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 205:
#line 843 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 206:
#line 850 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 207:
#line 857 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 208:
#line 867 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 209:
#line 874 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 210:
#line 881 "parser/evoparser.y"
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
#line 891 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 212:
#line 899 "parser/evoparser.y"
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
#line 909 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 214:
#line 917 "parser/evoparser.y"
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
#line 926 "parser/evoparser.y"
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
#line 935 "parser/evoparser.y"
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
#line 945 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 218:
#line 953 "parser/evoparser.y"
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
#line 962 "parser/evoparser.y"
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
#line 971 "parser/evoparser.y"
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
#line 981 "parser/evoparser.y"
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
#line 990 "parser/evoparser.y"
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
#line 1002 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 224:
#line 1007 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 225:
#line 1012 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 226:
#line 1018 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 227:
#line 1025 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 228:
#line 1032 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 229:
#line 1039 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 230:
#line 1049 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 231:
#line 1056 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 232:
#line 1065 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 233:
#line 1072 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 234:
#line 1078 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 235:
#line 1086 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 236:
#line 1092 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 238:
#line 1100 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 239:
#line 1101 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 240:
#line 1102 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 241:
#line 1103 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 242:
#line 1108 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 243:
#line 1115 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 244:
#line 1124 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 245:
#line 1131 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 246:
#line 1137 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 247:
#line 1147 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 248:
#line 1151 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 249:
#line 1157 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 250:
#line 1163 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 251:
#line 1170 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 252:
#line 1176 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 253:
#line 1183 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 254:
#line 1189 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 255:
#line 1195 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 256:
#line 1201 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 257:
#line 1207 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 258:
#line 1213 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 259:
#line 1219 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        AlterTableAddColumn((yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(6) - (7)].strval));
    ;}
    break;

  case 260:
#line 1225 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 261:
#line 1231 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 262:
#line 1239 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 263:
#line 1247 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 264:
#line 1253 "parser/evoparser.y"
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

  case 266:
#line 1266 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 267:
#line 1269 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 268:
#line 1270 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 269:
#line 1271 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 270:
#line 1272 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 271:
#line 1273 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 275:
#line 1280 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 276:
#line 1284 "parser/evoparser.y"
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

  case 277:
#line 1294 "parser/evoparser.y"
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

  case 278:
#line 1306 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 279:
#line 1307 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 280:
#line 1307 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 281:
#line 1310 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 282:
#line 1311 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 283:
#line 1312 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 284:
#line 1313 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 285:
#line 1317 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 286:
#line 1320 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 287:
#line 1321 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 288:
#line 1322 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 289:
#line 1323 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 290:
#line 1329 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 291:
#line 1335 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 292:
#line 1340 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 293:
#line 1345 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 294:
#line 1350 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 295:
#line 1359 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 296:
#line 1366 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 297:
#line 1367 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 298:
#line 1368 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 299:
#line 1373 "parser/evoparser.y"
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

  case 300:
#line 1384 "parser/evoparser.y"
    {
        if ((yyvsp[(4) - (5)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s", (yyvsp[(1) - (5)].strval));
            YYERROR;
        }
        emit("ASSIGN2 %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval));
        if (g_qctx) { AddMultiUpdateSet((yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].exprval)); SetMultiUpdate(); }
        free((yyvsp[(1) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
        (yyval.intval) = 1;
    ;}
    break;

  case 301:
#line 1396 "parser/evoparser.y"
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

  case 302:
#line 1407 "parser/evoparser.y"
    {
        if ((yyvsp[(6) - (7)].subtok) != 4) {
            yyerror(scanner, "bad update assignment to %s.%s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval));
            YYERROR;
        }
        emit("ASSIGN4 %s.%s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval));
        if (g_qctx) { AddMultiUpdateSet((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].exprval)); SetMultiUpdate(); }
        free((yyvsp[(3) - (7)].strval));
        free((yyvsp[(5) - (7)].strval));
        (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1;
    ;}
    break;

  case 303:
#line 1421 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 304:
#line 1425 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 305:
#line 1426 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 306:
#line 1429 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 307:
#line 1430 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 308:
#line 1434 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 309:
#line 1439 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 310:
#line 1441 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 311:
#line 1443 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 312:
#line 1445 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 313:
#line 1447 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 314:
#line 1451 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 315:
#line 1455 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 316:
#line 1456 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 317:
#line 1461 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 318:
#line 1471 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 319:
#line 1480 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 321:
#line 1484 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 322:
#line 1485 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 323:
#line 1486 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 324:
#line 1487 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 325:
#line 1489 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 326:
#line 1491 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 329:
#line 1499 "parser/evoparser.y"
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

  case 330:
#line 1514 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 331:
#line 1522 "parser/evoparser.y"
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

  case 332:
#line 1536 "parser/evoparser.y"
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

  case 333:
#line 1550 "parser/evoparser.y"
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

  case 334:
#line 1564 "parser/evoparser.y"
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

  case 335:
#line 1576 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 336:
#line 1577 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 337:
#line 1578 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 338:
#line 1581 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 339:
#line 1582 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 340:
#line 1585 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 341:
#line 1586 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 342:
#line 1587 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 343:
#line 1588 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 344:
#line 1589 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 345:
#line 1590 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 346:
#line 1591 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 347:
#line 1592 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 348:
#line 1594 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 349:
#line 1596 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 350:
#line 1598 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 351:
#line 1600 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 352:
#line 1602 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 353:
#line 1604 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 354:
#line 1607 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 355:
#line 1608 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 356:
#line 1611 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 357:
#line 1612 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 358:
#line 1615 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 359:
#line 1616 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 361:
#line 1620 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 362:
#line 1621 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 363:
#line 1622 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 364:
#line 1623 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 365:
#line 1624 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 366:
#line 1625 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 367:
#line 1626 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 368:
#line 1627 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 369:
#line 1628 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 370:
#line 1629 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 371:
#line 1630 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 372:
#line 1631 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 373:
#line 1632 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 374:
#line 1633 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 375:
#line 1634 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 376:
#line 1635 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 377:
#line 1636 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 378:
#line 1639 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 379:
#line 1640 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 380:
#line 1643 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 381:
#line 1645 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 382:
#line 1653 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 383:
#line 1654 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 385:
#line 1656 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 386:
#line 1657 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 387:
#line 1658 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 388:
#line 1659 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 389:
#line 1660 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 390:
#line 1661 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 391:
#line 1662 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 392:
#line 1663 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 393:
#line 1664 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 394:
#line 1671 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 395:
#line 1672 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 396:
#line 1673 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 397:
#line 1674 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 398:
#line 1675 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 399:
#line 1676 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 400:
#line 1677 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 401:
#line 1678 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 402:
#line 1679 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 403:
#line 1680 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 404:
#line 1681 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 405:
#line 1682 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 406:
#line 1683 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 407:
#line 1684 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 408:
#line 1685 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 409:
#line 1686 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 410:
#line 1687 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 411:
#line 1688 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 412:
#line 1689 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 413:
#line 1690 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 414:
#line 1691 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 415:
#line 1694 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 416:
#line 1695 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 417:
#line 1696 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 418:
#line 1699 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 419:
#line 1700 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 420:
#line 1703 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 421:
#line 1704 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 422:
#line 1705 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 424:
#line 1709 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 425:
#line 1710 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 426:
#line 1714 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 427:
#line 1715 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 428:
#line 1716 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 429:
#line 1717 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 430:
#line 1718 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 431:
#line 1719 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 432:
#line 1720 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 433:
#line 1721 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 434:
#line 1722 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 435:
#line 1723 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 436:
#line 1724 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 437:
#line 1725 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 438:
#line 1726 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 439:
#line 1727 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 440:
#line 1728 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 441:
#line 1729 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 442:
#line 1730 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 443:
#line 1731 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 444:
#line 1732 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 445:
#line 1733 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 446:
#line 1734 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 447:
#line 1735 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 448:
#line 1736 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 449:
#line 1737 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 450:
#line 1738 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 451:
#line 1739 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 452:
#line 1740 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 453:
#line 1741 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 454:
#line 1742 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 455:
#line 1743 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 456:
#line 1744 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 457:
#line 1745 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 458:
#line 1748 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 459:
#line 1749 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 460:
#line 1753 "parser/evoparser.y"
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

  case 461:
#line 1765 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 462:
#line 1766 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 463:
#line 1767 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 464:
#line 1771 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 465:
#line 1774 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 466:
#line 1775 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 470:
#line 1779 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 471:
#line 1780 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5957 "parser/evoparser.tab.c"
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


#line 1783 "parser/evoparser.y"

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
