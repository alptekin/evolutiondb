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
     AFTER = 280,
     ALL = 281,
     ANALYZE = 282,
     ANY = 283,
     AUTO_INCREMENT = 284,
     ASC = 285,
     AND = 286,
     AS = 287,
     ALWAYS = 288,
     IDENTITY = 289,
     CONTINUE = 290,
     RESTART = 291,
     GENERATED = 292,
     STORED = 293,
     VIRTUAL = 294,
     BLOB = 295,
     BOOLEAN = 296,
     BY = 297,
     BINARY = 298,
     BOTH = 299,
     BIGINT = 300,
     BIT = 301,
     CONSTRAINT = 302,
     CURRENT_TIMESTAMP = 303,
     CREATE = 304,
     CASCADE = 305,
     CHANGE = 306,
     CROSS = 307,
     CASE = 308,
     CHECK = 309,
     COMMENT = 310,
     CURRENT_DATE = 311,
     CURRENT_TIME = 312,
     CHAR = 313,
     COLLATE = 314,
     COLUMN = 315,
     CONCURRENTLY = 316,
     DATABASE = 317,
     DEFERRABLE = 318,
     DEFERRED = 319,
     DISABLE = 320,
     DOMAIN = 321,
     DELAYED = 322,
     DAY_HOUR = 323,
     DAY_MICROSECOND = 324,
     DISTINCT = 325,
     DELETE = 326,
     DROP = 327,
     DAY_MINUTE = 328,
     DISTINCTROW = 329,
     DAY_SECOND = 330,
     DESC = 331,
     DEFAULT = 332,
     DOUBLE = 333,
     DATETIME = 334,
     DECIMAL = 335,
     DATE = 336,
     ENABLE = 337,
     ESCAPED = 338,
     ENUM = 339,
     END = 340,
     ELSE = 341,
     EXPLAIN = 342,
     FIRST = 343,
     FLOAT = 344,
     FORCE = 345,
     FOREIGN = 346,
     FROM = 347,
     FULL = 348,
     FULLTEXT = 349,
     FOR = 350,
     GROUP = 351,
     HOUR_MINUTE = 352,
     HOUR_MICROSECOND = 353,
     HIGH_PRIORITY = 354,
     HOUR_SECOND = 355,
     HAVING = 356,
     IMMEDIATE = 357,
     INITIALLY = 358,
     INTEGER = 359,
     INNER = 360,
     IGNORE = 361,
     INDEX = 362,
     IF = 363,
     INSERT = 364,
     INTO = 365,
     INT = 366,
     INTERVAL = 367,
     JOIN = 368,
     KEY = 369,
     LESS = 370,
     LONGTEXT = 371,
     LOW_PRIORITY = 372,
     LEFT = 373,
     LEADING = 374,
     LIMIT = 375,
     LOCKED = 376,
     OFFSET = 377,
     LONGBLOB = 378,
     MATCH = 379,
     MAXVALUE = 380,
     MEDIUMTEXT = 381,
     MODIFY = 382,
     MEDIUMBLOB = 383,
     MEDIUMINT = 384,
     NATURAL = 385,
     NODE = 386,
     NO_ACTION = 387,
     NULLX = 388,
     OUTER = 389,
     ON = 390,
     ORDER = 391,
     ONDUPLICATE = 392,
     PARTIAL = 393,
     PRIMARY = 394,
     QUICK = 395,
     RANGE = 396,
     REAL = 397,
     RECLAIM = 398,
     REFERENCES = 399,
     RENAME = 400,
     RESTRICT = 401,
     ROLLUP = 402,
     RIGHT = 403,
     REPLACE = 404,
     SQL_SMALL_RESULT = 405,
     SCHEMA = 406,
     SHARD = 407,
     SHARDS = 408,
     SHARE = 409,
     SKIP = 410,
     SOME = 411,
     SQL_CALC_FOUND_ROWS = 412,
     SQL_BIG_RESULT = 413,
     SIMPLE = 414,
     STRAIGHT_JOIN = 415,
     SMALLINT = 416,
     SET = 417,
     SELECT = 418,
     TINYTEXT = 419,
     TINYINT = 420,
     TO = 421,
     TEMPORARY = 422,
     GLOBAL = 423,
     PRESERVE = 424,
     TEXT = 425,
     THAN = 426,
     TIMESTAMP = 427,
     TABLE = 428,
     THEN = 429,
     TRAILING = 430,
     TRUNCATE = 431,
     TINYBLOB = 432,
     TIME = 433,
     UPDATE = 434,
     UNSIGNED = 435,
     UNIQUE = 436,
     UUID = 437,
     USING = 438,
     USE = 439,
     HASH = 440,
     VALIDATE = 441,
     VARCHAR = 442,
     VALUES = 443,
     VARBINARY = 444,
     WHERE = 445,
     WHEN = 446,
     WITH = 447,
     YEAR = 448,
     YEAR_MONTH = 449,
     ZEROFILL = 450,
     EXISTS = 451,
     FSUBSTRING = 452,
     FTRIM = 453,
     FDATE_ADD = 454,
     FDATE_SUB = 455,
     FCOUNT = 456,
     FSUM = 457,
     FAVG = 458,
     FMIN = 459,
     FMAX = 460,
     FUPPER = 461,
     FLOWER = 462,
     FLENGTH = 463,
     FCONCAT = 464,
     FREPLACE = 465,
     FCOALESCE = 466,
     FGEN_RANDOM_UUID = 467,
     FGEN_RANDOM_UUID_V7 = 468,
     FSNOWFLAKE_ID = 469,
     FLAST_INSERT_ID = 470,
     FEVO_SLEEP = 471,
     FEVO_JITTER = 472
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
#define AFTER 280
#define ALL 281
#define ANALYZE 282
#define ANY 283
#define AUTO_INCREMENT 284
#define ASC 285
#define AND 286
#define AS 287
#define ALWAYS 288
#define IDENTITY 289
#define CONTINUE 290
#define RESTART 291
#define GENERATED 292
#define STORED 293
#define VIRTUAL 294
#define BLOB 295
#define BOOLEAN 296
#define BY 297
#define BINARY 298
#define BOTH 299
#define BIGINT 300
#define BIT 301
#define CONSTRAINT 302
#define CURRENT_TIMESTAMP 303
#define CREATE 304
#define CASCADE 305
#define CHANGE 306
#define CROSS 307
#define CASE 308
#define CHECK 309
#define COMMENT 310
#define CURRENT_DATE 311
#define CURRENT_TIME 312
#define CHAR 313
#define COLLATE 314
#define COLUMN 315
#define CONCURRENTLY 316
#define DATABASE 317
#define DEFERRABLE 318
#define DEFERRED 319
#define DISABLE 320
#define DOMAIN 321
#define DELAYED 322
#define DAY_HOUR 323
#define DAY_MICROSECOND 324
#define DISTINCT 325
#define DELETE 326
#define DROP 327
#define DAY_MINUTE 328
#define DISTINCTROW 329
#define DAY_SECOND 330
#define DESC 331
#define DEFAULT 332
#define DOUBLE 333
#define DATETIME 334
#define DECIMAL 335
#define DATE 336
#define ENABLE 337
#define ESCAPED 338
#define ENUM 339
#define END 340
#define ELSE 341
#define EXPLAIN 342
#define FIRST 343
#define FLOAT 344
#define FORCE 345
#define FOREIGN 346
#define FROM 347
#define FULL 348
#define FULLTEXT 349
#define FOR 350
#define GROUP 351
#define HOUR_MINUTE 352
#define HOUR_MICROSECOND 353
#define HIGH_PRIORITY 354
#define HOUR_SECOND 355
#define HAVING 356
#define IMMEDIATE 357
#define INITIALLY 358
#define INTEGER 359
#define INNER 360
#define IGNORE 361
#define INDEX 362
#define IF 363
#define INSERT 364
#define INTO 365
#define INT 366
#define INTERVAL 367
#define JOIN 368
#define KEY 369
#define LESS 370
#define LONGTEXT 371
#define LOW_PRIORITY 372
#define LEFT 373
#define LEADING 374
#define LIMIT 375
#define LOCKED 376
#define OFFSET 377
#define LONGBLOB 378
#define MATCH 379
#define MAXVALUE 380
#define MEDIUMTEXT 381
#define MODIFY 382
#define MEDIUMBLOB 383
#define MEDIUMINT 384
#define NATURAL 385
#define NODE 386
#define NO_ACTION 387
#define NULLX 388
#define OUTER 389
#define ON 390
#define ORDER 391
#define ONDUPLICATE 392
#define PARTIAL 393
#define PRIMARY 394
#define QUICK 395
#define RANGE 396
#define REAL 397
#define RECLAIM 398
#define REFERENCES 399
#define RENAME 400
#define RESTRICT 401
#define ROLLUP 402
#define RIGHT 403
#define REPLACE 404
#define SQL_SMALL_RESULT 405
#define SCHEMA 406
#define SHARD 407
#define SHARDS 408
#define SHARE 409
#define SKIP 410
#define SOME 411
#define SQL_CALC_FOUND_ROWS 412
#define SQL_BIG_RESULT 413
#define SIMPLE 414
#define STRAIGHT_JOIN 415
#define SMALLINT 416
#define SET 417
#define SELECT 418
#define TINYTEXT 419
#define TINYINT 420
#define TO 421
#define TEMPORARY 422
#define GLOBAL 423
#define PRESERVE 424
#define TEXT 425
#define THAN 426
#define TIMESTAMP 427
#define TABLE 428
#define THEN 429
#define TRAILING 430
#define TRUNCATE 431
#define TINYBLOB 432
#define TIME 433
#define UPDATE 434
#define UNSIGNED 435
#define UNIQUE 436
#define UUID 437
#define USING 438
#define USE 439
#define HASH 440
#define VALIDATE 441
#define VARCHAR 442
#define VALUES 443
#define VARBINARY 444
#define WHERE 445
#define WHEN 446
#define WITH 447
#define YEAR 448
#define YEAR_MONTH 449
#define ZEROFILL 450
#define EXISTS 451
#define FSUBSTRING 452
#define FTRIM 453
#define FDATE_ADD 454
#define FDATE_SUB 455
#define FCOUNT 456
#define FSUM 457
#define FAVG 458
#define FMIN 459
#define FMAX 460
#define FUPPER 461
#define FLOWER 462
#define FLENGTH 463
#define FCONCAT 464
#define FREPLACE 465
#define FCOALESCE 466
#define FGEN_RANDOM_UUID 467
#define FGEN_RANDOM_UUID_V7 468
#define FSNOWFLAKE_ID 469
#define FLAST_INSERT_ID 470
#define FEVO_SLEEP 471
#define FEVO_JITTER 472




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
#line 560 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 573 "parser/evoparser.tab.c"

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
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3085

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  232
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  485
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   472

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     229,   230,    26,    24,   231,    25,   228,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   227,
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
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226
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
    1188,  1195,  1201,  1210,  1218,  1228,  1237,  1248,  1258,  1259,
    1261,  1264,  1266,  1275,  1282,  1283,  1288,  1289,  1292,  1295,
    1298,  1301,  1303,  1304,  1305,  1309,  1311,  1315,  1319,  1320,
    1327,  1329,  1331,  1335,  1339,  1347,  1351,  1355,  1361,  1367,
    1369,  1378,  1386,  1394,  1396,  1405,  1406,  1409,  1412,  1416,
    1422,  1428,  1436,  1442,  1444,  1449,  1454,  1458,  1464,  1468,
    1474,  1475,  1478,  1480,  1486,  1494,  1502,  1512,  1524,  1526,
    1529,  1533,  1535,  1545,  1557,  1558,  1563,  1567,  1573,  1579,
    1589,  1600,  1602,  1606,  1616,  1626,  1636,  1643,  1655,  1664,
    1665,  1667,  1670,  1672,  1676,  1682,  1690,  1695,  1700,  1706,
    1712,  1717,  1724,  1736,  1750,  1764,  1780,  1785,  1792,  1794,
    1798,  1800,  1804,  1806,  1810,  1811,  1816,  1822,  1827,  1833,
    1838,  1844,  1849,  1855,  1860,  1865,  1869,  1873,  1877,  1880,
    1884,  1889,  1894,  1896,  1900,  1901,  1906,  1907,  1911,  1914,
    1918,  1922,  1926,  1930,  1936,  1942,  1948,  1952,  1958,  1961,
    1969,  1975,  1983,  1989,  1992,  1996,  1999,  2003,  2006,  2010,
    2016,  2021,  2027,  2035,  2044,  2053,  2061,  2068,  2075,  2081,
    2082,  2086,  2092,  2093,  2095,  2096,  2099,  2102,  2103,  2108,
    2112,  2115,  2119,  2123,  2127,  2131,  2135,  2139,  2143,  2147,
    2151,  2155,  2157,  2159,  2161,  2163,  2165,  2169,  2175,  2178,
    2183,  2185,  2187,  2189,  2191,  2195,  2199,  2203,  2207,  2213,
    2219,  2221,  2223,  2225,  2229,  2233,  2234,  2236,  2238,  2240,
    2244,  2248,  2251,  2253,  2257,  2261
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     233,     0,    -1,   242,   227,    -1,   242,   227,   233,    -1,
       3,    -1,     3,   228,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   142,    -1,   234,    24,
     234,    -1,   234,    25,   234,    -1,   234,    26,   234,    -1,
     234,    27,   234,    -1,   234,    28,   234,    -1,   234,    29,
     234,    -1,    25,   234,    -1,   229,   234,   230,    -1,   234,
      12,   234,    -1,   234,    10,   234,    -1,   234,    11,   234,
      -1,   234,    21,   234,    -1,   234,    22,   234,    -1,   234,
      30,   234,    -1,   234,    23,   234,    -1,    18,   234,    -1,
      17,   234,    -1,   234,    20,   234,    -1,   234,    20,   229,
     243,   230,    -1,   234,    20,    37,   229,   243,   230,    -1,
     234,    20,   165,   229,   243,   230,    -1,   234,    20,    35,
     229,   243,   230,    -1,   234,    15,   142,    -1,   234,    15,
      18,   142,    -1,   234,    15,     6,    -1,   234,    15,    18,
       6,    -1,     8,     9,   234,    -1,   234,    19,   234,    40,
     234,    -1,   234,    18,    19,   234,    40,   234,    -1,   234,
      -1,   234,   231,   235,    -1,    -1,   235,    -1,    -1,   234,
      16,   229,   237,   235,   230,    -1,    -1,   234,    18,    16,
     229,   238,   235,   230,    -1,   234,    16,   229,   243,   230,
      -1,   234,    18,    16,   229,   243,   230,    -1,   205,   229,
     243,   230,    -1,     3,   229,   236,   230,    -1,   210,   229,
      26,   230,    -1,   210,   229,   234,   230,    -1,   211,   229,
     234,   230,    -1,   212,   229,   234,   230,    -1,   213,   229,
     234,   230,    -1,   214,   229,   234,   230,    -1,   206,   229,
     234,   231,   234,   231,   234,   230,    -1,   206,   229,   234,
     231,   234,   230,    -1,   206,   229,   234,   101,   234,   230,
      -1,   206,   229,   234,   101,   234,   104,   234,   230,    -1,
     207,   229,   234,   230,    -1,   207,   229,   239,   234,   101,
     234,   230,    -1,   207,   229,   239,   101,   234,   230,    -1,
     215,   229,   234,   230,    -1,   216,   229,   234,   230,    -1,
     217,   229,   234,   230,    -1,   218,   229,   234,   231,   234,
     230,    -1,   219,   229,   234,   231,   234,   231,   234,   230,
      -1,   220,   229,   234,   231,   234,   230,    -1,   221,   229,
     230,    -1,   222,   229,   230,    -1,   223,   229,   230,    -1,
     224,   229,   230,    -1,   225,   229,   234,   230,    -1,   226,
     229,   234,   231,   234,   230,    -1,   128,    -1,   184,    -1,
      53,    -1,   208,   229,   234,   231,   240,   230,    -1,   209,
     229,   234,   231,   240,   230,    -1,   121,   234,    77,    -1,
     121,   234,    78,    -1,   121,   234,    82,    -1,   121,   234,
      84,    -1,   121,   234,   203,    -1,   121,   234,   202,    -1,
     121,   234,   107,    -1,   121,   234,   106,    -1,   121,   234,
     109,    -1,    62,   234,   241,    94,    -1,    62,   234,   241,
      95,   234,    94,    -1,    62,   241,    94,    -1,    62,   241,
      95,   234,    94,    -1,   200,   234,   183,   234,    -1,   241,
     200,   234,   183,   234,    -1,   234,    14,   234,    -1,   234,
      18,    14,   234,    -1,   234,    13,   234,    -1,   234,    18,
      13,   234,    -1,    57,    -1,    65,    -1,    66,    -1,   243,
      -1,   172,   257,   258,    -1,   172,   257,   258,   101,   261,
     244,   245,   249,   250,   253,   254,   255,    -1,    -1,   199,
     234,    -1,    -1,   105,    51,   246,   248,    -1,   234,   247,
      -1,   246,   231,   234,   247,    -1,    -1,    39,    -1,    85,
      -1,    -1,   201,   156,    -1,    -1,   110,   234,    -1,    -1,
     145,    51,   251,    -1,   252,    -1,   251,   231,   252,    -1,
       3,   247,    -1,    -1,   129,   234,    -1,   129,   234,   231,
     234,    -1,   129,   234,   131,   234,    -1,    -1,   104,   188,
      -1,   104,   163,    -1,   104,   188,   164,   130,    -1,   104,
     163,   164,   130,    -1,    -1,   119,   256,    -1,     3,    -1,
     256,   231,     3,    -1,    -1,   257,    35,    -1,   257,    79,
      -1,   257,    83,    -1,   257,   108,    -1,   257,   169,    -1,
     257,   159,    -1,   257,   167,    -1,   257,   166,    -1,   259,
      -1,   258,   231,   259,    -1,    26,    -1,   234,   260,    -1,
      41,     3,    -1,     3,    -1,    -1,   262,    -1,   261,   231,
     262,    -1,   263,    -1,   265,    -1,     3,   260,   272,    -1,
       3,   228,     3,   260,   272,    -1,   275,   264,     3,    -1,
     229,   261,   230,    -1,    41,    -1,    -1,   262,   266,   122,
     263,   270,    -1,   262,   169,   263,    -1,   262,   169,   263,
     144,   234,    -1,   262,   268,   267,   122,   263,   271,    -1,
     262,   139,   269,   122,   263,    -1,    -1,   114,    -1,    61,
      -1,    -1,   143,    -1,   127,    -1,   157,    -1,   127,   267,
      -1,   157,   267,    -1,    -1,    -1,   271,    -1,   144,   234,
      -1,   192,   229,   256,   230,    -1,   193,   123,   273,   229,
     274,   230,    -1,   115,   123,   273,   229,   274,   230,    -1,
      99,   123,   273,   229,   274,   230,    -1,    -1,   104,   122,
      -1,    -1,     3,    -1,   274,   231,     3,    -1,   229,   243,
     230,    -1,   276,    -1,    80,   277,   101,     3,   244,   250,
     253,    -1,   277,   126,    -1,   277,   149,    -1,   277,   115,
      -1,    -1,    80,   277,   278,   101,   261,   244,    -1,     3,
     279,    -1,   278,   231,     3,   279,    -1,    -1,   228,    26,
      -1,    80,   277,   101,   278,   192,   261,   244,    -1,   280,
      -1,    81,   182,     3,    -1,    81,   182,   117,   205,     3,
      -1,   281,    -1,    58,   116,     3,   144,     3,   229,   282,
     230,    -1,    58,   116,   117,   205,     3,   144,     3,   229,
     282,   230,    -1,    58,   190,   116,     3,   144,     3,   229,
     282,   230,    -1,    58,   190,   116,   117,   205,     3,   144,
       3,   229,   282,   230,    -1,    58,   116,     3,   144,     3,
     192,   194,   229,   282,   230,    -1,    58,   116,   117,   205,
       3,   144,     3,   192,   194,   229,   282,   230,    -1,    58,
     190,   116,     3,   144,     3,   192,   194,   229,   282,   230,
      -1,    58,   190,   116,   117,   205,     3,   144,     3,   192,
     194,   229,   282,   230,    -1,    58,   116,    70,     3,   144,
       3,   229,   282,   230,    -1,    58,   116,    70,   117,   205,
       3,   144,     3,   229,   282,   230,    -1,    58,   190,   116,
      70,     3,   144,     3,   229,   282,   230,    -1,    58,   190,
     116,    70,   117,   205,     3,   144,     3,   229,   282,   230,
      -1,    58,   116,    70,     3,   144,     3,   192,   194,   229,
     282,   230,    -1,    58,   190,   116,    70,     3,   144,     3,
     192,   194,   229,   282,   230,    -1,     3,    -1,   282,   231,
       3,    -1,   283,    -1,   215,   229,     3,   230,    -1,   216,
     229,     3,   230,    -1,   217,   229,     3,   230,    -1,   218,
     229,     3,   231,     3,   230,    -1,   284,    -1,    81,   116,
       3,    -1,   285,   287,    -1,   185,   182,     3,    -1,   185,
     182,     3,   231,   286,    -1,     3,    -1,   286,   231,     3,
      -1,    -1,   287,    59,    -1,   287,   155,    -1,   287,    45,
      43,    -1,   287,    44,    43,    -1,   288,    -1,   152,   182,
       3,    -1,   289,    -1,    36,   182,     3,    -1,    36,   182,
       3,   228,     3,    -1,   290,    -1,    32,   182,     3,    33,
      56,     3,    63,   229,   234,   230,    -1,    32,   182,     3,
      33,    56,     3,   190,   229,   321,   230,    -1,    32,   182,
       3,    33,    56,     3,   100,   123,   229,   318,   230,   153,
       3,   229,   319,   230,   320,    -1,    32,   182,     3,    33,
      56,     3,    63,   229,   234,   230,    18,   195,    -1,    32,
     182,     3,    33,    56,     3,   100,   123,   229,   318,   230,
     153,     3,   229,   319,   230,   320,    18,   195,    -1,    32,
     182,     3,    33,    56,     3,   148,   123,   229,   317,   230,
      -1,    32,   182,     3,    81,    56,     3,    -1,    32,   182,
       3,   154,    56,     3,   175,     3,    -1,    32,   182,     3,
      91,    56,     3,    -1,    32,   182,     3,    74,    56,     3,
      -1,    32,   182,     3,   195,    56,     3,    -1,    32,   182,
       3,    33,    69,     3,   328,   323,   291,    -1,    32,   182,
       3,    81,    69,     3,    -1,    32,   182,     3,    81,     3,
      -1,    32,   182,     3,   154,    69,     3,   175,     3,    -1,
      32,   182,     3,   154,     3,   175,     3,    -1,    32,   182,
       3,   136,    69,     3,   328,   323,   291,    -1,    32,   182,
       3,   136,     3,   328,   323,   291,    -1,    32,   182,     3,
      60,    69,     3,     3,   328,   323,   291,    -1,    32,   182,
       3,    60,     3,     3,   328,   323,   291,    -1,    -1,    97,
      -1,    34,     3,    -1,   292,    -1,   118,   294,   295,     3,
     296,   197,   298,   293,    -1,   118,   294,   295,     3,   296,
     243,    -1,    -1,   146,   123,   188,   301,    -1,    -1,   294,
     126,    -1,   294,    76,    -1,   294,   108,    -1,   294,   115,
      -1,   119,    -1,    -1,    -1,   229,   297,   230,    -1,     3,
      -1,   297,   231,     3,    -1,   229,   300,   230,    -1,    -1,
     298,   231,   299,   229,   300,   230,    -1,   234,    -1,    86,
      -1,   300,   231,   234,    -1,   300,   231,    86,    -1,   118,
     294,   295,     3,   171,   301,   293,    -1,     3,    20,   234,
      -1,     3,    20,    86,    -1,   301,   231,     3,    20,   234,
      -1,   301,   231,     3,    20,    86,    -1,   302,    -1,   158,
     294,   295,     3,   296,   197,   298,   293,    -1,   158,   294,
     295,     3,   171,   301,   293,    -1,   158,   294,   295,     3,
     296,   243,   293,    -1,   303,    -1,   188,   304,   261,   171,
     305,   244,   250,   253,    -1,    -1,   294,   126,    -1,   294,
     115,    -1,     3,    20,   234,    -1,     3,   228,     3,    20,
     234,    -1,   305,   231,     3,    20,   234,    -1,   305,   231,
       3,   228,     3,    20,   234,    -1,   154,   182,     3,   175,
       3,    -1,   306,    -1,    58,    71,   307,     3,    -1,    58,
     160,   307,     3,    -1,    81,    71,     3,    -1,    81,    71,
     117,   205,     3,    -1,    81,   160,     3,    -1,    81,   160,
     117,   205,     3,    -1,    -1,   117,   205,    -1,   308,    -1,
      58,    75,     3,    41,   328,    -1,    58,    75,     3,    41,
     328,    86,   234,    -1,    58,    75,     3,    41,   328,    18,
     142,    -1,    58,    75,     3,    41,   328,    63,   229,   234,
     230,    -1,    58,    75,     3,    41,   328,    18,   142,    63,
     229,   234,   230,    -1,   309,    -1,   193,     3,    -1,   193,
      71,     3,    -1,   310,    -1,    58,   314,   182,   307,     3,
     229,   315,   230,   311,    -1,    58,   314,   182,   307,     3,
     228,     3,   229,   315,   230,   311,    -1,    -1,   311,    38,
      20,     5,    -1,   311,    38,     5,    -1,   311,   144,     3,
      80,     3,    -1,   311,   144,     3,   178,     3,    -1,   311,
     161,    51,   194,   229,     3,   230,   162,     5,    -1,   311,
     161,    51,   150,   229,     3,   230,   229,   312,   230,    -1,
     313,    -1,   312,   231,   313,    -1,   161,     3,   197,   124,
     180,     4,   144,   140,     5,    -1,   161,     3,   197,   124,
     180,   134,   144,   140,     5,    -1,    58,   314,   182,   307,
       3,   229,   315,   230,   330,    -1,    58,   314,   182,   307,
       3,   330,    -1,    58,   314,   182,   307,     3,   228,     3,
     229,   315,   230,   330,    -1,    58,   314,   182,   307,     3,
     228,     3,   330,    -1,    -1,   176,    -1,   177,   176,    -1,
     316,    -1,   315,   231,   316,    -1,   148,   123,   229,   317,
     230,    -1,    56,     3,   148,   123,   229,   317,   230,    -1,
     123,   229,   256,   230,    -1,   116,   229,   256,   230,    -1,
     103,   116,   229,   256,   230,    -1,   103,   123,   229,   256,
     230,    -1,    63,   229,   234,   230,    -1,    56,     3,    63,
     229,   234,   230,    -1,   100,   123,   229,   318,   230,   153,
       3,   229,   319,   230,   320,    -1,   100,   123,   229,   318,
     230,   153,     3,   228,     3,   229,   319,   230,   320,    -1,
      56,     3,   100,   123,   229,   318,   230,   153,     3,   229,
     319,   230,   320,    -1,    56,     3,   100,   123,   229,   318,
     230,   153,     3,   228,     3,   229,   319,   230,   320,    -1,
     190,   229,   321,   230,    -1,    56,     3,   190,   229,   321,
     230,    -1,     3,    -1,   317,   231,     3,    -1,     3,    -1,
     318,   231,     3,    -1,     3,    -1,   319,   231,     3,    -1,
      -1,   320,   144,    80,    59,    -1,   320,   144,    80,   171,
     142,    -1,   320,   144,    80,   155,    -1,   320,   144,    80,
     171,    86,    -1,   320,   144,   188,    59,    -1,   320,   144,
     188,   171,   142,    -1,   320,   144,   188,   155,    -1,   320,
     144,   188,   171,    86,    -1,   320,   144,    80,   141,    -1,
     320,   144,   188,   141,    -1,   320,   133,   102,    -1,   320,
     133,   168,    -1,   320,   133,   147,    -1,   320,    72,    -1,
     320,    18,    72,    -1,   320,    72,   112,    73,    -1,   320,
      72,   112,   111,    -1,     3,    -1,   321,   231,     3,    -1,
      -1,   322,     3,   328,   323,    -1,    -1,   323,    18,   142,
      -1,   323,   142,    -1,   323,    86,     4,    -1,   323,    86,
       5,    -1,   323,    86,     7,    -1,   323,    86,     6,    -1,
     323,    86,   221,   229,   230,    -1,   323,    86,   222,   229,
     230,    -1,   323,    86,   223,   229,   230,    -1,   323,    86,
      57,    -1,   323,    86,   229,   234,   230,    -1,   323,    38,
      -1,   323,    38,   229,     5,   231,     5,   230,    -1,   323,
      38,   229,     5,   230,    -1,   323,    43,   229,     5,   231,
       5,   230,    -1,   323,    43,   229,     5,   230,    -1,   323,
      43,    -1,   323,   190,   123,    -1,   323,   190,    -1,   323,
     148,   123,    -1,   323,   123,    -1,   323,    64,     4,    -1,
     323,    63,   229,   234,   230,    -1,   323,    56,     3,   190,
      -1,   323,    56,     3,   148,   123,    -1,   323,    56,     3,
      63,   229,   234,   230,    -1,   323,    46,    42,    41,   229,
     234,   230,    47,    -1,   323,    46,    42,    41,   229,   234,
     230,    48,    -1,   323,    46,    42,    41,   229,   234,   230,
      -1,   323,    41,   229,   234,   230,    47,    -1,   323,    41,
     229,   234,   230,    48,    -1,   323,    41,   229,   234,   230,
      -1,    -1,   229,     5,   230,    -1,   229,     5,   231,     5,
     230,    -1,    -1,    52,    -1,    -1,   326,   189,    -1,   326,
     204,    -1,    -1,   327,    67,   171,     4,    -1,   327,    68,
       4,    -1,    55,   324,    -1,   174,   324,   326,    -1,   170,
     324,   326,    -1,   138,   324,   326,    -1,   120,   324,   326,
      -1,   113,   324,   326,    -1,    54,   324,   326,    -1,   151,
     324,   326,    -1,    87,   324,   326,    -1,    98,   324,   326,
      -1,    89,   324,   326,    -1,    90,    -1,   187,    -1,   181,
      -1,    88,    -1,   202,    -1,    67,   324,   327,    -1,   196,
     229,     5,   230,   327,    -1,    52,   324,    -1,   198,   229,
       5,   230,    -1,   186,    -1,    49,    -1,   137,    -1,   132,
      -1,   173,   325,   327,    -1,   179,   325,   327,    -1,   135,
     325,   327,    -1,   125,   325,   327,    -1,    93,   229,   329,
     230,   327,    -1,   171,   229,   329,   230,   327,    -1,    50,
      -1,   191,    -1,     4,    -1,   329,   231,     4,    -1,   331,
     264,   243,    -1,    -1,   115,    -1,   158,    -1,   332,    -1,
     171,   160,     3,    -1,   171,   160,    86,    -1,   171,   333,
      -1,   334,    -1,   333,   231,   334,    -1,     8,    20,   234,
      -1,     8,     9,   234,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   328,   328,   329,   334,   341,   342,   343,   361,   369,
     377,   383,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     414,   415,   416,   417,   420,   421,   422,   423,   424,   427,
     428,   431,   432,   435,   436,   439,   439,   440,   440,   441,
     442,   443,   447,   451,   452,   453,   454,   455,   456,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   478,   485,   492,   496,   500,   506,   507,
     508,   511,   512,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   526,   528,   530,   532,   536,   544,   555,   556,
     559,   560,   563,   571,   579,   590,   600,   601,   615,   616,
     617,   618,   621,   628,   636,   637,   638,   641,   642,   645,
     646,   649,   650,   653,   654,   657,   665,   666,   667,   668,
     671,   672,   673,   674,   675,   678,   679,   682,   683,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   697,   698,
     699,   707,   713,   714,   715,   718,   719,   722,   723,   727,
     734,   735,   736,   739,   740,   744,   746,   748,   750,   752,
     756,   757,   758,   761,   762,   765,   766,   769,   770,   771,
     774,   775,   778,   779,   783,   785,   787,   789,   792,   793,
     796,   797,   800,   804,   814,   822,   823,   824,   825,   829,
     833,   835,   839,   839,   841,   846,   853,   860,   870,   877,
     884,   894,   902,   912,   920,   929,   938,   948,   956,   965,
     974,   984,   993,  1005,  1010,  1015,  1021,  1028,  1035,  1042,
    1052,  1059,  1068,  1075,  1081,  1089,  1095,  1103,  1104,  1105,
    1106,  1107,  1111,  1118,  1127,  1134,  1140,  1151,  1154,  1160,
    1166,  1173,  1179,  1186,  1192,  1198,  1204,  1210,  1216,  1222,
    1228,  1234,  1240,  1246,  1252,  1258,  1264,  1270,  1278,  1279,
    1280,  1283,  1291,  1297,  1310,  1311,  1314,  1315,  1316,  1317,
    1318,  1321,  1321,  1324,  1325,  1328,  1338,  1351,  1352,  1352,
    1355,  1356,  1357,  1358,  1361,  1365,  1366,  1367,  1368,  1374,
    1377,  1383,  1388,  1394,  1402,  1411,  1412,  1413,  1417,  1428,
    1440,  1451,  1466,  1471,  1475,  1476,  1480,  1482,  1484,  1486,
    1490,  1491,  1495,  1499,  1501,  1503,  1505,  1507,  1512,  1516,
    1517,  1521,  1530,  1540,  1544,  1545,  1546,  1547,  1548,  1549,
    1551,  1555,  1556,  1559,  1574,  1581,  1596,  1609,  1624,  1637,
    1638,  1639,  1642,  1643,  1646,  1647,  1648,  1649,  1650,  1651,
    1652,  1653,  1654,  1656,  1658,  1660,  1662,  1664,  1668,  1669,
    1672,  1673,  1676,  1677,  1680,  1681,  1682,  1683,  1684,  1685,
    1686,  1687,  1688,  1689,  1690,  1691,  1692,  1693,  1694,  1695,
    1696,  1697,  1700,  1701,  1704,  1704,  1714,  1715,  1716,  1717,
    1718,  1719,  1720,  1721,  1722,  1723,  1724,  1725,  1732,  1733,
    1734,  1735,  1736,  1737,  1738,  1739,  1740,  1741,  1742,  1743,
    1744,  1745,  1746,  1747,  1748,  1749,  1750,  1751,  1752,  1755,
    1756,  1757,  1760,  1761,  1764,  1765,  1766,  1769,  1770,  1771,
    1775,  1776,  1777,  1778,  1779,  1780,  1781,  1782,  1783,  1784,
    1785,  1786,  1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,
    1795,  1796,  1797,  1798,  1799,  1800,  1801,  1802,  1803,  1804,
    1805,  1806,  1809,  1810,  1813,  1826,  1827,  1828,  1832,  1835,
    1836,  1837,  1838,  1838,  1840,  1841
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
  "ADD", "AFTER", "ALL", "ANALYZE", "ANY", "AUTO_INCREMENT", "ASC", "AND",
  "AS", "ALWAYS", "IDENTITY", "CONTINUE", "RESTART", "GENERATED", "STORED",
  "VIRTUAL", "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT",
  "CONSTRAINT", "CURRENT_TIMESTAMP", "CREATE", "CASCADE", "CHANGE",
  "CROSS", "CASE", "CHECK", "COMMENT", "CURRENT_DATE", "CURRENT_TIME",
  "CHAR", "COLLATE", "COLUMN", "CONCURRENTLY", "DATABASE", "DEFERRABLE",
  "DEFERRED", "DISABLE", "DOMAIN", "DELAYED", "DAY_HOUR",
  "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP", "DAY_MINUTE",
  "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE", "DATETIME",
  "DECIMAL", "DATE", "ENABLE", "ESCAPED", "ENUM", "END", "ELSE", "EXPLAIN",
  "FIRST", "FLOAT", "FORCE", "FOREIGN", "FROM", "FULL", "FULLTEXT", "FOR",
  "GROUP", "HOUR_MINUTE", "HOUR_MICROSECOND", "HIGH_PRIORITY",
  "HOUR_SECOND", "HAVING", "IMMEDIATE", "INITIALLY", "INTEGER", "INNER",
  "IGNORE", "INDEX", "IF", "INSERT", "INTO", "INT", "INTERVAL", "JOIN",
  "KEY", "LESS", "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT",
  "LOCKED", "OFFSET", "LONGBLOB", "MATCH", "MAXVALUE", "MEDIUMTEXT",
  "MODIFY", "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NODE", "NO_ACTION",
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
  "FLAST_INSERT_ID", "FEVO_SLEEP", "FEVO_JITTER", "';'", "'.'", "'('",
  "')'", "','", "$accept", "stmt_list", "expr", "val_list", "opt_val_list",
  "@1", "@2", "trim_ltb", "interval_exp", "case_list", "stmt",
  "select_stmt", "opt_where", "opt_groupby", "groupby_list",
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
  "analyze_table_stmt", "alter_table_stmt", "opt_col_position",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_col_list", "insert_vals_list", "@3",
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
     466,   467,   468,   469,   470,   471,   472,    59,    46,    40,
      41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   232,   233,   233,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   235,   235,   236,   236,   237,   234,   238,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   239,   239,
     239,   234,   234,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   234,   234,   234,   234,   241,   241,   234,   234,
     234,   234,   234,   234,   234,   242,   243,   243,   244,   244,
     245,   245,   246,   246,   247,   247,   247,   248,   248,   249,
     249,   250,   250,   251,   251,   252,   253,   253,   253,   253,
     254,   254,   254,   254,   254,   255,   255,   256,   256,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   258,   258,
     258,   259,   260,   260,   260,   261,   261,   262,   262,   263,
     263,   263,   263,   264,   264,   265,   265,   265,   265,   265,
     266,   266,   266,   267,   267,   268,   268,   269,   269,   269,
     270,   270,   271,   271,   272,   272,   272,   272,   273,   273,
     274,   274,   275,   242,   276,   277,   277,   277,   277,   276,
     278,   278,   279,   279,   276,   242,   280,   280,   242,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   282,   282,   282,   283,   283,   283,   283,
     242,   284,   242,   285,   285,   286,   286,   287,   287,   287,
     287,   287,   242,   288,   242,   289,   289,   242,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   291,   291,
     291,   242,   292,   292,   293,   293,   294,   294,   294,   294,
     294,   295,   295,   296,   296,   297,   297,   298,   299,   298,
     300,   300,   300,   300,   292,   301,   301,   301,   301,   242,
     302,   302,   302,   242,   303,   304,   304,   304,   305,   305,
     305,   305,   242,   242,   306,   306,   242,   242,   242,   242,
     307,   307,   242,   308,   308,   308,   308,   308,   242,   309,
     309,   242,   310,   310,   311,   311,   311,   311,   311,   311,
     311,   312,   312,   313,   313,   310,   310,   310,   310,   314,
     314,   314,   315,   315,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   317,   317,
     318,   318,   319,   319,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   321,   321,   322,   316,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   324,
     324,   324,   325,   325,   326,   326,   326,   327,   327,   327,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   329,   329,   330,   331,   331,   331,   242,   332,
     332,   332,   333,   333,   334,   334
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
      17,    12,    19,    11,     6,     8,     6,     6,     6,     9,
       6,     5,     8,     7,     9,     8,    10,     9,     0,     1,
       2,     1,     8,     6,     0,     4,     0,     2,     2,     2,
       2,     1,     0,     0,     3,     1,     3,     3,     0,     6,
       1,     1,     3,     3,     7,     3,     3,     5,     5,     1,
       8,     7,     7,     1,     8,     0,     2,     2,     3,     5,
       5,     7,     5,     1,     4,     4,     3,     5,     3,     5,
       0,     2,     1,     5,     7,     7,     9,    11,     1,     2,
       3,     1,     9,    11,     0,     4,     3,     5,     5,     9,
      10,     1,     3,     9,     9,     9,     6,    11,     8,     0,
       1,     2,     1,     3,     5,     7,     4,     4,     5,     5,
       4,     6,    11,    13,    13,    15,     4,     6,     1,     3,
       1,     3,     1,     3,     0,     4,     5,     4,     5,     4,
       5,     4,     5,     4,     4,     3,     3,     3,     2,     3,
       4,     4,     1,     3,     0,     4,     0,     3,     2,     3,
       3,     3,     3,     5,     5,     5,     3,     5,     2,     7,
       5,     7,     5,     2,     3,     2,     3,     2,     3,     5,
       4,     5,     7,     8,     8,     7,     6,     6,     5,     0,
       3,     5,     0,     1,     0,     2,     2,     0,     4,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     3,     5,     2,     4,
       1,     1,     1,     1,     3,     3,     3,     3,     5,     5,
       1,     1,     1,     3,     3,     0,     1,     1,     1,     3,
       3,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   349,   198,     0,   276,     0,     0,   276,
       0,   139,     0,   276,     0,     0,     0,   105,   193,   205,
     208,   230,   237,   242,   244,   247,   271,   299,   303,   313,
     322,   328,   331,   478,     0,     0,   320,     0,     0,   320,
     350,     0,     0,     0,     0,     0,     0,     0,     0,   282,
       0,     0,   282,     0,     0,   481,   482,     0,     0,     0,
       0,   329,     0,     1,     2,   232,     0,   245,     0,     0,
       0,     0,     0,     0,     0,   351,     0,   320,   202,     0,
     197,   195,   196,     0,   316,     0,   231,   318,     0,   206,
       0,   278,   279,   280,   281,   277,     0,   243,     0,     0,
       0,     0,   479,   480,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   150,   140,   102,     0,   103,   104,
     141,   142,   143,    11,   145,   147,   146,   144,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   154,   106,   148,   233,   280,   277,   154,     0,     0,
     155,   157,   158,   164,   330,     3,     0,     0,   238,   239,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   321,
     314,     0,     0,     0,     0,     0,   315,     0,     0,     0,
       0,     0,   200,   108,     0,     0,     0,     0,     0,     0,
     283,     0,   283,   485,   484,   483,     0,    43,     0,    28,
      27,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     151,     0,     0,     0,     0,   187,     0,     0,     0,     0,
     172,   171,   175,   179,   176,     0,     0,   173,   163,     0,
     241,   240,     0,     0,     0,     0,     0,   261,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   246,   461,   470,
     429,   429,   429,   429,   429,   454,   429,   451,     0,   429,
     429,   429,   432,   463,   432,   462,   429,   429,   429,     0,
     432,   429,   432,   453,   460,   452,   471,     0,     0,   455,
     323,     0,     0,     0,     0,     0,     0,     0,     0,   475,
     203,     0,   121,     0,   108,   202,   317,   319,   207,     0,
       0,     0,   312,     0,     0,     5,    41,    44,     0,    38,
       0,     0,    94,     0,     0,     0,     0,    80,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
       0,     0,    19,    21,    22,    20,   100,    98,    36,     0,
      34,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    23,    24,    26,    12,    13,    14,    15,    16,
      17,    25,   152,   108,   149,   235,   234,   154,     0,     0,
       0,   159,   192,   162,     0,   108,   156,   173,   173,     0,
     166,     0,   174,     0,   161,     0,     0,     0,     0,   257,
     254,   260,   256,   396,     0,     0,     0,     0,   258,     0,
     458,   434,   440,   437,   434,   434,     0,   434,   434,   434,
     433,   437,   437,   434,   434,   434,     0,   437,   434,   437,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   476,   477,     0,   394,   346,   164,
     109,     0,   126,   108,   199,   201,     0,   274,   285,     0,
       0,   273,   274,     0,   274,     0,    52,     0,    92,     0,
       0,     0,    51,     0,     0,    63,     0,     0,     0,     0,
      53,    54,    55,    56,    57,    58,    66,    67,    68,     0,
       0,     0,    76,     0,    37,    35,     0,     0,   101,    99,
      47,     0,     0,     0,     0,     0,     0,   110,     0,   187,
     189,   189,   189,     0,     0,     0,   121,   177,   178,     0,
       0,   180,     0,     0,     0,     0,     0,   396,   396,     0,
     268,   396,   263,     0,     0,     0,   446,   456,   448,   450,
     472,     0,   449,   445,   444,   467,   466,   443,   447,   442,
       0,   464,   441,   465,     0,     0,   325,     0,   324,     0,
     223,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,     0,     0,     0,
       0,   194,   204,     0,     0,     0,   294,   284,     0,     0,
     274,   301,   274,   302,    42,    96,     0,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,     0,    39,     0,     0,     0,    30,
       0,   119,   236,   160,     0,     0,     0,     0,   308,     0,
       0,   126,   169,   167,     0,     0,   165,   181,     0,     0,
       0,     0,     0,   268,   268,   396,     0,     0,   408,     0,
     413,     0,     0,     0,     0,     0,   269,   417,   398,     0,
     415,   265,   268,   255,   262,   430,     0,   435,   436,     0,
       0,   437,     0,   437,   437,   459,     0,     0,     0,     0,
       0,     0,     0,   209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   394,   348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   334,   394,     0,
     474,   114,   122,   123,   127,   296,   295,     0,     0,   286,
     291,   290,     0,   288,   272,   300,    93,    97,     0,    61,
      60,     0,    65,     0,     0,    81,    82,    69,     0,    71,
      77,    46,     0,    50,    40,    33,    31,    32,     0,     0,
     121,   188,     0,     0,     0,     0,     0,     0,   304,   182,
       0,   168,     0,     0,     0,   392,     0,   259,   267,   268,
     397,   270,     0,     0,     0,     0,     0,     0,   418,   399,
     400,   402,   401,   406,     0,     0,     0,     0,   416,   414,
     264,     0,     0,   439,   468,   473,   469,   457,     0,   326,
       0,     0,     0,     0,     0,   224,     0,   217,     0,     0,
       0,     0,   211,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,     0,     0,
       0,     0,   332,   345,   353,   396,   115,   116,   125,     0,
       0,     0,     0,     0,   287,     0,     0,     0,     0,    64,
      83,    84,    85,    86,    90,    89,    91,    88,    87,     0,
      48,   114,   117,   120,   126,   190,     0,     0,     0,   309,
     310,     0,     0,   248,   370,     0,   368,     0,   249,     0,
     266,     0,     0,     0,     0,     0,     0,   420,     0,     0,
       0,     0,     0,   431,   438,     0,   213,   226,   227,   228,
       0,     0,     0,     0,   210,     0,     0,   219,     0,     0,
       0,   334,     0,     0,     0,     0,   360,     0,     0,     0,
     357,     0,   356,     0,   366,     0,     0,     0,   395,   124,
     129,   128,   275,   298,   297,   293,   292,     0,    62,    59,
      70,   112,     0,     0,   111,   130,   186,     0,   185,   184,
       0,   183,     0,     0,     0,   253,     0,   393,   410,     0,
     428,   412,     0,     0,     0,   421,   419,   403,   404,   405,
     407,   327,     0,   221,   218,     0,   215,     0,     0,     0,
     212,   333,   347,     0,     0,     0,     0,     0,   358,   359,
     138,   354,   336,     0,     0,     0,     0,   118,   114,     0,
     135,   191,   311,   251,     0,   371,   369,     0,   426,   427,
       0,     0,     0,   229,   214,   222,   220,     0,   361,     0,
       0,   367,     0,   335,     0,     0,     0,     0,   289,   113,
     132,   131,     0,   107,     0,   409,   411,   425,   422,   216,
       0,   355,     0,   337,   338,     0,     0,     0,     0,   136,
       0,   423,   424,     0,     0,     0,     0,     0,   134,   133,
     372,     0,     0,     0,     0,     0,     0,   374,     0,     0,
       0,     0,   374,     0,     0,   250,   373,     0,     0,     0,
     362,     0,     0,   341,   339,     0,   388,     0,     0,     0,
     374,   374,     0,     0,   340,     0,   389,   252,     0,   385,
     387,   386,     0,     0,     0,   364,   363,     0,   342,   390,
     391,   375,   383,   377,     0,   379,   384,   381,     0,   374,
       0,   378,   376,   382,   380,   365,     0,     0,     0,     0,
       0,     0,     0,   343,   344
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,   356,   357,   358,   546,   672,   371,   664,   214,
      16,    17,   342,   681,   922,   898,  1004,   810,   502,   772,
     773,   641,  1060,  1093,   888,    57,   152,   153,   260,   159,
     160,   161,   279,   162,   276,   443,   277,   439,   696,   697,
     431,   685,   926,   163,    18,    44,    83,   192,    19,    20,
     615,   616,    21,    22,   426,    65,    23,    24,    25,   721,
      26,   646,    49,    96,   351,   509,   650,   906,   782,   507,
      27,    28,    60,   435,    29,    69,    30,    31,    32,   892,
    1142,  1143,    43,   635,   636,   937,   935,  1121,  1135,   826,
     637,   580,   460,   471,   586,   587,   330,   591,   498,   499,
      33,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -885
static const yytype_int16 yypact[] =
{
    2619,  -136,  -107,   472,  -885,   209,  -885,    49,    67,  -885,
      82,  -885,   154,     6,    56,   364,   140,  -885,  -885,  -885,
    -885,  -885,  -885,  -885,  -885,  -885,  -885,  -885,  -885,  -885,
    -885,  -885,  -885,  -885,   380,   427,   206,   478,    25,   206,
    -885,   240,   316,   289,   155,    30,   501,    35,   230,   392,
     529,   539,   392,    44,    55,   321,  -885,   355,   556,   394,
      14,  -885,   579,  -885,  2619,   274,   201,   357,   389,   593,
     561,   476,   265,   440,   630,  -885,   226,   206,   419,   730,
    -885,  -885,  -885,   -75,  -885,   458,  -885,  -885,   496,  -885,
     535,  -885,  -885,  -885,  -885,  -885,   754,  -885,   453,   757,
    1597,  1597,  -885,  -885,   740,   270,  -885,  -885,  -885,  -885,
     741,  1597,  1597,  1597,  -885,  -885,  -885,   471,  -885,  -885,
    -885,  -885,  -885,  -885,  -885,  -885,  -885,  -885,   544,   550,
     560,   605,   616,   618,   624,   634,   649,   685,   687,   710,
     716,   736,   752,   759,   760,   769,   783,   784,   785,   786,
    1597,  2706,   -74,  -885,   532,    16,    18,    20,    15,   -82,
     477,  -885,  -885,   746,  -885,  -885,   765,   899,  -885,  -885,
     275,    59,   960,   323,   961,    60,   461,   962,   955,  -885,
    -885,  2707,  1016,   876,   816,  1020,  -885,   880,   284,   820,
    1023,  1002,  -885,   313,   -93,    14,  1026,  1029,  1030,  1031,
     -79,  1032,   141,  3037,  3037,  -885,  1033,  1597,  1597,   684,
     684,  -885,  1597,  2507,   199,   887,  1597,   604,  1597,  1597,
     832,  1597,  1597,  1597,  1597,  1597,  1597,  1597,  1597,  1597,
    1597,   830,   833,   834,   835,  1597,  1597,  1705,  -885,  1597,
    1597,  1597,  1597,  1597,    90,   844,   584,  1597,   712,  1597,
    1597,  1597,  1597,  1597,  1597,  1597,  1597,  1597,  1597,  1059,
    -885,    14,  1597,  1071,  1073,   202,   845,   315,  1074,    14,
    -885,  -885,  -885,   358,  -885,    14,   956,   936,  -885,  1077,
    -885,  -885,  1100,  1101,  1102,  1103,  1105,  -885,  1106,  1107,
    1108,  2707,  1110,   939,  1112,  1113,  1114,  -885,  -885,  -885,
     889,   889,   889,   889,   889,  -885,   889,  -885,   890,   889,
     889,   889,  1068,  -885,  1068,  -885,   889,   889,   889,   893,
    1068,   889,  1068,  -885,  -885,  -885,  -885,   894,   895,  -885,
     360,   111,  1122,  1124,   984,  1128,   988,   935,  1151,   180,
    -885,  1597,  1010,    14,   125,   419,  -885,  -885,  -885,  1153,
    1154,  -132,  -885,  1153,   319,  -885,    91,  -885,   928,  3037,
    2582,   215,  -885,  1597,  1597,   929,   197,  -885,  -885,  -885,
    1817,   965,   429,  1123,   930,  1838,  1868,  1890,  1918,  1943,
    1964,  1985,  2006,  1203,  1454,  1478,  -885,  -885,  -885,  -885,
    2030,  1654,  -885,  1072,  1289,  1399,  3055,  3055,  -885,    33,
    -885,   887,  1597,  1597,   932,  1597,  2977,   933,   934,   937,
    1064,   770,   858,   698,   626,   597,   597,  1134,  1134,  1134,
    1134,  -885,  -885,   125,  -885,  -885,   938,   383,  1042,  1044,
    1045,  -885,  -885,  -885,    31,   234,   477,   936,   936,  1070,
    1049,    14,  -885,  1075,  -885,   220,  2707,  2707,  1192,  -885,
    -885,  -885,  -885,  -885,  2707,  1193,  1024,  1025,  -885,  1196,
    -885,  -885,  -885,  -885,  -885,  -885,  1194,  -885,  -885,  -885,
    -885,  -885,  -885,  -885,  -885,  -885,  1194,  -885,  -885,  -885,
    1197,  1198,  1062,   976,  1597,  1013,    21,   159,  1065,  1205,
     174,  1207,  1208,  1076,  -885,  -885,  1231,   271,  -885,   746,
    3037,  1184,  1115,   125,  -885,  -885,  1223,  -105,  -885,   318,
    1017,  -885,  -105,  1017,  1099,  1597,  -885,  1597,  -885,  1597,
    2900,  2603,  -885,  1597,  1597,  -885,  1597,  2841,  1126,  1126,
    -885,  -885,  -885,  -885,  -885,  -885,  -885,  -885,  -885,  1597,
    1597,  1597,  -885,  1597,  -885,  -885,  1597,  1018,  3055,  3055,
     887,  3014,  1597,   887,   887,   887,  1019,  1145,  1250,   202,
    1150,  1150,  1150,  1597,  1252,  1253,  1010,  -885,  -885,    14,
    1597,   -47,    14,  1028,  1135,  1137,  1034,  -885,  -885,  2707,
    2618,  -885,  -885,  1258,  1259,   327,   336,   522,   336,   336,
    -885,   384,   336,   336,   336,   522,   522,   336,   336,   336,
     388,   522,   336,   522,  1035,  1036,  1201,  1597,  3037,  1038,
    -885,  1039,  1063,  1066,  1069,   400,  -885,  1127,    21,  1291,
     193,  1136,    21,   244,  1162,  1294,   184,  1319,  1104,  1206,
     371,  1111,  1117,  1209,  1118,   405,  -885,  1328,   887,  1331,
    1597,  -885,  -885,  1234,  1212,  1333,  -885,  -885,  1336,  1320,
    -101,  -885,  -101,  -885,  -885,  3037,  2925,  -885,  1597,  1730,
      58,  2051,  1597,  1597,  1125,  1129,  2081,  1676,  2103,  2131,
    1130,  -885,  1597,  1131,  1597,   879,  1138,  1139,  1141,  -885,
    1290,  1232,  -885,  -885,  1221,  1143,  1144,  1146,  3037,  1324,
      32,  1115,  -885,  3037,  1597,  1149,  -885,  -885,   -47,  1597,
    1152,  1155,  1353,  2618,  2618,  -885,  1215,  1355,  1158,  1159,
    1160,  1322,  1362,  1161,  1363,    43,  -885,  -885,  -885,  1243,
    1251,  -885,  2618,  -885,  -885,  -885,  1374,  -885,  -885,  1220,
    1376,  -885,  1379,  -885,  -885,  -885,  1163,  2156,    21,  1390,
    1391,  1392,  1393,  -885,  1394,  1169,   408,  1170,  1210,    21,
    1171,   410,  1211,    21,  1398,   300,   271,  -885,   228,  1597,
    1174,  1179,  1180,  1413,  1413,  1204,  1353,   217,   271,  2707,
    -885,    52,  1199,  -885,   981,  -885,  3037,  1244,  1415,  -885,
    -885,  3037,   413,  -885,  -885,  -885,  -885,  3037,  1597,  -885,
    -885,  1597,  -885,  2177,  2477,  -885,  -885,  -885,  1597,  -885,
    -885,  -885,  1241,  -885,   879,  -885,  -885,  -885,  1597,  1597,
    1010,  -885,  1433,  1433,  1433,  1597,  1597,  1434,  -885,  3037,
    1413,  -885,  2198,  1435,  1458,  -885,   428,  -885,  -885,  2618,
    -885,  -885,  1480,  1597,  1481,  1468,   167,  1597,  -885,  -885,
    -885,  -885,  -885,  -885,  1266,  1281,  1282,  1597,  -885,  -885,
    -885,  1283,  1508,  -885,   522,  -885,   522,   522,  1597,  -885,
     434,  1284,  1285,  1286,  1287,  -885,    21,  -885,    21,  1288,
     437,    21,  -885,  1292,   442,  1293,  1325,    21,   444,  1295,
    1397,  1400,  1318,  2219,  1435,  1413,  1413,  -885,   468,   505,
    1458,   508,    -8,  -885,  -885,  -885,  -885,  -885,  -885,  1331,
    1597,  1597,  1153,  1345,  -885,  1572,  1343,  2243,  2264,  -885,
    -885,  -885,  -885,  -885,  -885,  -885,  -885,  -885,  -885,  2294,
    -885,  2946,   292,  3037,  1115,  -885,   512,   514,   523,  3037,
    3037,  1528,   525,  1555,  -885,   537,  -885,   551,  -885,  1578,
    -885,   553,  2316,   555,  1354,  1356,  1459,  -885,  2344,  1357,
    1358,  1361,  2369,  -885,  -885,  2390,  -885,  -885,  -885,  -885,
    1581,   572,   574,    21,  -885,   576,    21,  -885,    21,  1364,
     601,   217,  1597,  1365,  1366,  1353,  -885,   611,   621,   625,
    -885,  1583,  -885,   635,  -885,   534,  1589,  1545,  2627,  -885,
    3037,  3037,  1367,  -885,  3037,  -885,  3037,  1320,  -885,  -885,
    -885,  -885,  1443,  1597,  -885,  1502,  -885,  1604,  -885,  -885,
    1597,  -885,  1414,  1455,  1607,  -885,  1608,  -885,  -885,  1611,
     823,  -885,  1612,  1597,  1597,  -885,  -885,  -885,  -885,  -885,
    -885,  -885,  1382,  -885,  -885,   642,  -885,   660,   662,    21,
    -885,    -8,  -885,  2411,  1435,  1458,   665,  1460,  -885,  -885,
    -885,  -885,  -885,  1613,   -44,    96,   680,  -885,  2946,   368,
    1500,  -885,  3037,  -885,  1617,  -885,  -885,  1395,  -885,  -885,
    1396,  2432,  2456,  -885,  -885,  -885,  -885,   682,  -885,   713,
     717,  -885,  1618,  -885,  1620,  1621,  1401,  1402,  -885,  -885,
    1463,  1464,  1413,  -885,  1403,  -885,  -885,   902,  -885,  -885,
    1482,  -885,   723,  -885,  -885,  1630,  1633,  1509,  1510,  1410,
    1639,  -885,  -885,  1640,  1641,  1639,  1416,  1417,  -885,  -885,
    -885,   724,   728,  1419,   729,  1420,  1483,  -885,  1647,  1648,
    1639,  1639,  -885,  1491,  1650,   267,  -885,  1424,   731,   733,
     293,  1653,   745,  -885,  -885,   -41,  1548,   333,   -45,  1639,
    -885,  -885,  1585,  1474,  -885,  1491,  -885,  -885,   320,  -885,
    -885,  -885,   145,   243,   747,   293,   293,  1537,  -885,  -885,
    -885,  -885,  -885,  -885,   235,  -885,  -885,  -885,   255,  -885,
    1513,  -885,  -885,  -885,  -885,   293,    94,  1563,  1564,  1570,
    1571,  1707,  1708,  -885,  -885
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -885,  1658,   -57,  -421,  -885,  -885,  -885,  -885,  1218,  1523,
    -885,  -148,  -168,  -885,  -885,  -884,  -885,  -885,  -560,  -885,
     838,  -684,  -885,  -885,  -763,  -885,  -885,  1476,  -154,  -129,
    1492,  -264,  1263,  -885,  -885,   542,  -885,  -885,  -885,  1067,
    1213,   423,   173,  -885,  -885,  -885,  1684,  1421,  -885,  -885,
    -614,  -885,  -885,  -885,  -885,  -885,  -885,  -885,  -885,  -425,
    -885,  -381,   135,  1712,  1565,  -885,  1255,  -885,   772,  -351,
    -885,  -885,  -885,  -885,  -885,   433,  -885,  -885,  -885,   799,
    -885,   619,  -885,  1015,  1005,  -856,  -842,  -596,  -624,  -734,
    -885,  -565,   558,   273,   297,  -457,  -266,  1299,  -621,  -885,
    -885,  -885,  1672
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -476
static const yytype_int16 yytable[] =
{
     151,   889,   512,   265,   746,   757,   691,   818,   751,  -305,
     266,   440,   703,   704,   595,   596,   722,   157,   157,  -307,
     601,  -306,   603,   238,   610,   453,   195,   261,    71,   267,
     985,  1156,   891,    84,   983,  1162,  1084,  1001,    87,   544,
      11,   644,   977,   203,   204,   644,    34,   839,   840,   841,
     842,   563,   816,   100,   209,   210,   211,   932,   102,    61,
     213,   259,   284,   291,   101,   510,   344,   365,   239,   240,
     241,   242,   243,   244,   245,    35,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   268,
      53,   896,   349,   237,   654,    72,   398,   694,  1187,   343,
     843,   239,   240,   241,   242,   243,   244,   245,   399,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   978,   979,   860,   670,   645,    62,   285,   292,
     783,   651,   423,   653,  1085,   870,   986,   897,   196,   874,
     829,   103,    73,  1163,    52,   695,   893,    85,    59,   269,
     350,   359,    88,   987,  1157,   360,   196,   262,    78,   366,
     370,   372,   373,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,  1089,   545,   504,   571,   390,   391,
     577,   578,   393,   394,   395,   396,   397,    11,   581,  1080,
     406,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,  1079,   511,  1171,   151,   514,   239,   240,   241,
     242,   243,   244,   245,   503,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,  1188,   187,
     945,    50,   400,    89,   170,  -305,   611,   612,   613,   614,
    1005,  1046,    54,   158,   158,  -307,  1086,  -306,   264,    51,
     924,   802,   961,   547,   962,   557,    79,   965,  -475,   564,
     817,   171,   556,   970,   844,   845,   846,   566,   183,   784,
      80,   785,   847,   559,   854,   172,   856,   857,   827,   828,
      45,    81,   173,   573,   500,  1145,  1172,   336,   790,   791,
    1087,   879,   174,   362,   363,   494,   188,   850,   523,   494,
    1173,   428,  1175,   485,    82,   692,   520,   521,   698,   518,
     519,  1152,   353,   705,   527,   946,  1174,   429,   166,   167,
     574,  1181,   515,    68,   341,    46,   287,   627,   880,  1109,
     988,   282,   494,   168,   628,   642,    58,   175,   495,  1146,
     486,  1183,   495,   189,   283,   548,   549,    90,   551,  1035,
    1042,   617,  1037,   237,  1038,   176,   269,   947,   105,   106,
     107,   108,   109,   110,    63,  1146,   621,    64,   575,    47,
     350,   629,   111,   112,   630,   495,   881,  1182,   482,   288,
     113,   114,   184,    66,  1176,   748,   238,   631,   618,  -475,
     115,    48,   289,  1169,   632,   430,   177,  1184,  1177,   364,
    1147,   337,   673,   622,   940,   676,   677,   678,   496,   497,
     576,  1148,   116,   756,  1178,   364,    75,   117,   882,   633,
     118,   119,   749,   483,   259,  1077,  1147,   608,   524,   169,
      67,  1170,    76,   341,   120,  1159,   752,  1148,   121,   239,
     240,   241,   242,   243,   244,   245,   484,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     655,   634,   656,   122,   293,   565,   659,   660,    91,   661,
      91,    77,    74,   753,   105,   106,   107,   108,   109,   110,
    1160,    70,   666,   667,   668,   437,   669,   761,   111,   112,
     770,    11,   876,  1002,   762,   675,   113,   123,   206,   207,
      92,  1161,    92,   895,    86,  -202,   688,    93,  1140,   155,
     190,    94,   341,   693,   124,   438,   513,   294,    95,  1124,
     156,   125,   126,  1003,   127,   727,  1165,  1166,   116,   877,
     295,  1090,    97,   117,  1138,  1139,   118,   119,   270,  1052,
     728,   191,    98,    36,  -202,   433,   269,    37,   647,   648,
     737,   992,   104,  1164,  1053,  1185,  1091,   725,   726,   154,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   164,   774,   150,   178,   776,   472,    38,   729,
     730,   271,   781,   477,   179,   479,   180,   402,   403,  -170,
     404,   787,   181,   405,   272,   793,   794,   105,   106,   107,
     108,   109,   110,   123,   731,   732,   273,   804,   733,   732,
     182,   111,   112,   254,   255,   256,   257,   258,   201,   113,
     743,   744,    39,   186,   274,   767,   768,   819,   867,   744,
     872,   744,   822,   904,   905,   185,   275,   191,    40,    41,
     252,   253,   254,   255,   256,   257,   258,   367,   938,   939,
     528,   116,    42,   197,   956,   744,   117,   964,   744,   118,
     119,   212,   967,   744,   971,   768,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   980,   981,
     150,   198,   883,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   105,   106,   107,   108,   109,
     110,   251,   252,   253,   254,   255,   256,   257,   258,   111,
     112,   907,   368,   193,   908,   982,   981,   113,   984,   939,
     199,   919,  1006,  1007,  1008,  1007,   123,   407,    53,   408,
     208,   921,   923,  1009,  1007,  1011,   981,   200,   929,   930,
     202,   588,   589,   263,   592,   593,   594,  1013,  1014,   116,
     597,   598,   599,   215,   117,   602,   942,   118,   119,   216,
     948,  1015,  1016,  1018,  1019,  1021,  1022,   278,   369,   217,
     952,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   955,  1033,   744,  1034,   744,  1036,   744,   280,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,  1040,   744,   150,   218,   105,   106,   107,   108,   109,
     110,  1047,  1014,   990,   991,   219,   994,   220,   996,   111,
     112,  1048,   981,   221,   123,  1049,   981,   113,   374,   461,
     462,   463,   464,   222,   465,  1051,  1016,   467,   468,   469,
    1068,  1069,  1074,   744,   473,   474,   475,   409,   223,   478,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   116,
    1075,   744,  1076,   744,   117,  1081,   939,   118,   119,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
    1088,   905,  1099,   744,   224,  1043,   225,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   226,
     781,   410,   281,  1100,  1014,   227,  1058,  1101,  1016,  1111,
    1112,  1114,  1115,  1062,  1127,  1128,  1129,  1130,   297,  1132,
    1128,  1150,  1128,  1151,  1128,   228,  1071,  1072,   105,   106,
     107,   108,   109,   110,   123,  1154,  1155,  1179,  1128,   567,
     568,   229,   111,   112,   686,   687,   927,   928,   230,   231,
     113,   239,   240,   241,   242,   243,   244,   245,   232,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   233,   234,   235,   236,   286,   290,   296,   331,
     332,   333,   116,   334,   335,   338,   339,   117,   340,   345,
     118,   119,   346,   347,   348,   352,   355,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    11,
     386,   150,   422,   387,   388,   389,   526,   105,   106,   107,
     108,   109,   110,   401,   425,   432,   427,   434,   441,   442,
     444,   111,   112,   240,   241,   242,   243,   244,   245,   113,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   445,   446,   447,   448,   123,   449,   450,
     451,   452,   900,   454,   455,   456,   457,   458,   459,   466,
     470,   116,   476,   480,   481,   487,   117,   488,   489,   118,
     119,   490,   491,   239,   240,   241,   242,   243,   244,   245,
     492,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   493,   501,   506,   508,   516,   522,
     530,   550,   553,   554,   258,   560,   555,   561,   562,   558,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   569,   570,   150,   579,   582,   572,   590,   583,
     584,   585,   604,   605,   606,   607,   123,   609,   620,   619,
     623,   624,   901,   239,   240,   241,   242,   243,   244,   245,
     625,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   626,   639,    11,   105,   106,   107,
     108,   109,   110,   643,   640,   644,   649,   663,   671,   679,
     680,   111,   112,   682,   684,   689,   690,   699,   700,   113,
     701,   723,   724,   702,   736,   734,   735,   738,   739,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   116,   740,   150,   747,   741,   117,   755,   742,   118,
     119,   241,   242,   243,   244,   245,   754,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     775,   745,   758,   105,   106,   107,   108,   109,   110,   760,
     750,   769,   765,   759,   771,   777,   778,   111,   112,   779,
     763,   808,   809,   811,   815,   113,   764,   766,   105,   106,
     107,   108,   109,   110,   529,   795,   825,   830,   831,   796,
     801,   803,   111,   112,   835,   836,   848,   838,   805,   806,
     113,   807,   812,   813,   849,   814,   123,   116,   820,   851,
     853,   823,   117,   855,   824,   118,   119,   832,   833,   834,
     837,   852,   858,   861,   862,   863,   864,   865,   866,   868,
     871,   875,   116,   884,   869,   873,   780,   117,   885,   886,
     118,   119,   242,   243,   244,   245,   887,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     899,   993,   902,   890,   539,   903,   925,   931,   934,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   936,   123,   150,   239,   240,   241,   242,   243,   244,
     245,   920,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   941,   943,   123,   239,   240,
     241,   242,   243,   244,   245,   949,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   944,
     950,   951,   954,   953,   957,   958,   959,   963,   960,   969,
     973,   966,   968,   974,   972,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   975,  1010,   150,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   997,  1012,   150,   105,   106,   107,   108,   109,
     110,  1017,  1025,  1023,  1032,  1024,  1050,  1027,  1028,   111,
     112,  1029,  1054,  1039,  1044,  1045,  1055,   113,   645,  1057,
     105,   106,   107,   108,   109,   110,  1059,  1061,  1064,  1063,
    1065,  1066,  1073,  1082,   111,   112,  1067,  1070,  1083,  1092,
    1094,  1102,   113,  1103,  1104,  1095,  1096,  1107,  1108,   116,
    1105,  1106,  1110,  1116,   117,  1113,  1117,   118,   119,  1118,
    1119,   981,  1120,  1122,  1123,  1134,  1125,  1126,  1131,  1133,
    1136,  1137,  1141,  1149,   116,  1144,  1153,  1156,   995,   117,
    1158,  1180,   118,   119,   239,   240,   241,   242,   243,   244,
     245,  1167,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   540,   239,   240,   241,   242,
     243,   244,   245,  1186,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,  1189,  1190,   541,
    1191,  1192,  1193,  1194,   123,   239,   240,   241,   242,   243,
     244,   245,   165,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   361,   989,   424,   123,
     239,   240,   241,   242,   243,   244,   245,   665,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   436,   638,   194,    99,   821,   505,   354,   652,  1056,
    1041,   878,   683,   894,  1168,   600,   205,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     0,
       0,   150,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     0,     0,   150,   239,   240,   241,
     242,   243,   244,   245,   788,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   239,   240,
     241,   242,   243,   244,   245,   543,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     239,   240,   241,   242,   243,   244,   245,   798,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,     0,     0,     0,     0,     0,     0,   239,   240,
     241,   242,   243,   244,   245,   392,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
       0,     0,     0,   239,   240,   241,   242,   243,   244,   245,
     789,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,     0,     0,
     239,   240,   241,   242,   243,   244,   245,   525,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   239,   240,   241,   242,   243,   244,   245,   531,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   239,   240,   241,   242,   243,   244,   245,   532,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   239,   240,   241,   242,   243,   244,   245,
     533,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,     0,     0,     0,     0,     0,
       0,   239,   240,   241,   242,   243,   244,   245,   534,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,     0,     0,     0,   239,   240,   241,   242,
     243,   244,   245,   535,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   239,   240,   241,
     242,   243,   244,   245,   536,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   239,   240,
     241,   242,   243,   244,   245,   537,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   239,
     240,   241,   242,   243,   244,   245,   538,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,     0,   239,   240,   241,   242,   243,   244,   245,
     542,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   239,   240,   241,   242,   243,   244,
     245,   792,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239,   240,   241,   242,   243,   244,
     245,   797,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   239,   240,   241,   242,
     243,   244,   245,   799,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,     0,     0,
       0,     0,     0,     0,   239,   240,   241,   242,   243,   244,
     245,   800,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,     0,     0,     0,   239,
     240,   241,   242,   243,   244,   245,   859,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     239,   240,   241,   242,   243,   244,   245,   909,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   239,   240,   241,   242,   243,   244,   245,   933,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   239,   240,   241,   242,   243,   244,   245,   976,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,     0,     0,   239,   240,   241,   242,
     243,   244,   245,   998,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   239,   240,   241,
     242,   243,   244,   245,   999,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   239,   240,   241,
     242,   243,   244,   245,  1000,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
       0,     0,     0,     0,     0,     0,  1020,     0,     0,     0,
       0,     0,     0,     0,   910,   911,     0,     0,     0,   912,
       0,   913,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1026,     0,     0,     0,     0,     0,
       0,     0,     0,   914,   915,     0,   916,     0,     0,     0,
       0,     0,   239,   240,   241,   242,   243,   244,   245,  1030,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   239,   240,   241,   242,   243,   244,   245,
    1031,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,     0,   706,     0,     0,     0,
       0,  1078,     0,     0,     0,   706,     0,     0,     0,     0,
       0,     1,   707,     0,     0,     2,   708,     0,     0,   709,
       0,   710,  1097,     0,   711,   708,     0,     0,   709,     0,
     710,     0,     0,   711,   712,     0,     0,     3,     0,   917,
     918,   713,   714,   712,     0,     0,  1098,     0,     0,     0,
     713,   714,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     0,   715,     0,     0,   212,     0,   238,
       0,     0,     0,   715,     0,   716,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     6,     0,     0,
       0,   717,     0,     0,     0,     0,     0,   259,     0,     0,
     717,     0,     0,     0,     0,     0,   298,   299,     0,   300,
     718,   301,   302,     0,     0,   517,   719,     0,     0,   718,
       0,     7,     0,     8,   303,   719,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,   658,     0,     0,     0,
      10,    11,     0,     0,   304,   305,   306,   307,     0,     0,
     308,     0,     0,     0,    12,   309,     0,    13,   720,     0,
       0,     0,    14,     0,     0,     0,     0,   720,     0,     0,
     310,     0,     0,     0,     0,     0,     0,   311,     0,     0,
       0,     0,   312,     0,     0,     0,     0,     0,     0,   313,
       0,     0,   314,     0,   315,   316,     0,     0,     0,     0,
       0,   239,   240,   241,   242,   243,   244,   245,   317,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,     0,     0,     0,     0,   318,   319,     0,
     320,   321,     0,     0,     0,     0,   322,     0,   323,     0,
       0,     0,     0,   324,   325,     0,     0,     0,   326,     0,
       0,     0,     0,   327,     0,   328,     0,     0,     0,   329,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,     0,     0,     0,   239,   240,   241,   242,   243,
     244,   245,   662,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,     0,     0,
       0,     0,     0,     0,     0,   896,     0,   239,   240,   241,
     242,   243,   244,   245,   657,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   552,     0,   786,
       0,     0,     0,     0,   239,   240,   241,   242,   243,   244,
     245,   897,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,     0,   239,   240,   241,
     242,   243,   244,   245,   674,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,  -476,  -476,
    -476,  -476,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258
};

static const yytype_int16 yycheck[] =
{
      57,   764,   353,   157,   618,   626,   566,   691,   622,     3,
     158,   275,   577,   578,   471,   472,   581,     3,     3,     3,
     477,     3,   479,     3,     3,   291,   101,   101,     3,   158,
      38,    72,   766,     3,   890,    80,    80,   921,     3,     6,
     172,   146,   884,   100,   101,   146,   182,     4,     5,     6,
       7,    20,    20,     9,   111,   112,   113,   820,     3,     3,
     117,    41,     3,     3,    20,   197,   195,   215,    10,    11,
      12,    13,    14,    15,    16,   182,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   171,
       8,    39,   171,   150,   515,    70,     6,   144,     4,   192,
      57,    10,    11,    12,    13,    14,    15,    16,    18,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   885,   886,   738,   546,   231,    71,    69,    69,
     231,   512,   261,   514,   178,   749,   144,    85,   231,   753,
     705,    86,   117,   188,     9,   192,   767,   117,    13,   231,
     229,   208,   117,   161,   195,   212,   231,   231,     3,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,  1058,   142,   344,   441,   235,   236,
     446,   447,   239,   240,   241,   242,   243,   172,   454,  1045,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,  1044,   351,    59,   262,   354,    10,    11,    12,
      13,    14,    15,    16,   343,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   134,     3,
      63,   182,   142,     3,    33,   229,   215,   216,   217,   218,
     924,   975,   160,   229,   229,   229,   150,   229,   228,   182,
     810,   672,   866,   401,   868,   423,   101,   871,    41,   228,
     228,    60,   410,   877,   221,   222,   223,   435,     3,   650,
     115,   652,   229,   427,   731,    74,   733,   734,   703,   704,
      71,   126,    81,    63,   341,    18,   141,     3,   230,   231,
     194,    63,    91,    94,    95,   115,    70,   722,   101,   115,
     155,    99,    59,   192,   149,   569,   363,   364,   572,    94,
      95,    18,   171,   579,   371,   148,   171,   115,    44,    45,
     100,    86,   231,   117,   199,   116,     3,    56,   100,  1092,
     895,    56,   115,    59,    63,   503,   182,   136,   158,    72,
     229,    86,   158,   117,    69,   402,   403,   117,   405,   963,
     971,   192,   966,   410,   968,   154,   231,   190,     3,     4,
       5,     6,     7,     8,     0,    72,   192,   227,   148,   160,
     229,   100,    17,    18,   103,   158,   148,   142,    18,    56,
      25,    26,   117,     3,   141,   192,     3,   116,   229,   172,
      35,   182,    69,    73,   123,   193,   195,   142,   155,   200,
     133,   117,   550,   229,   829,   553,   554,   555,   228,   229,
     190,   144,    57,   229,   171,   200,   176,    62,   190,   148,
      65,    66,   229,    63,    41,  1039,   133,   484,   231,   155,
       3,   111,   116,   199,    79,   102,   192,   144,    83,    10,
      11,    12,    13,    14,    15,    16,    86,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     517,   190,   519,   108,     3,   231,   523,   524,    76,   526,
      76,   182,    39,   229,     3,     4,     5,     6,     7,     8,
     147,     3,   539,   540,   541,   127,   543,   116,    17,    18,
     638,   172,   192,   201,   123,   552,    25,   142,   228,   229,
     108,   168,   108,   769,     3,   192,   563,   115,  1132,   115,
      77,   119,   199,   570,   159,   157,   197,    56,   126,  1115,
     126,   166,   167,   231,   169,   189,  1150,  1151,    57,   229,
      69,   163,     3,    62,  1130,  1131,    65,    66,    61,     5,
     204,   228,     3,    71,   231,   230,   231,    75,   230,   231,
     607,   902,   231,  1149,    20,  1179,   188,   230,   231,     3,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,     3,   640,   229,   228,   643,   314,   116,    67,
      68,   114,   649,   320,   205,   322,     3,    13,    14,   122,
      16,   658,    41,    19,   127,   662,   663,     3,     4,     5,
       6,     7,     8,   142,   230,   231,   139,   674,   230,   231,
     144,    17,    18,    26,    27,    28,    29,    30,   175,    25,
     230,   231,   160,     3,   157,   230,   231,   694,   230,   231,
     230,   231,   699,   230,   231,   205,   169,   228,   176,   177,
      24,    25,    26,    27,    28,    29,    30,    53,   230,   231,
     231,    57,   190,   205,   230,   231,    62,   230,   231,    65,
      66,   200,   230,   231,   230,   231,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   230,   231,
     229,   205,   759,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     3,     4,     5,     6,     7,
       8,    23,    24,    25,    26,    27,    28,    29,    30,    17,
      18,   788,   128,     3,   791,   230,   231,    25,   230,   231,
     205,   798,   230,   231,   230,   231,   142,    35,     8,    37,
       9,   808,   809,   230,   231,   230,   231,     3,   815,   816,
       3,   464,   465,   231,   467,   468,   469,   230,   231,    57,
     473,   474,   475,   229,    62,   478,   833,    65,    66,   229,
     837,   230,   231,   230,   231,   230,   231,    41,   184,   229,
     847,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   858,   230,   231,   230,   231,   230,   231,    43,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   230,   231,   229,   229,     3,     4,     5,     6,     7,
       8,   230,   231,   900,   901,   229,   903,   229,   905,    17,
      18,   230,   231,   229,   142,   230,   231,    25,    26,   301,
     302,   303,   304,   229,   306,   230,   231,   309,   310,   311,
      47,    48,   230,   231,   316,   317,   318,   165,   229,   321,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    57,
     230,   231,   230,   231,    62,   230,   231,    65,    66,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     230,   231,   230,   231,   229,   972,   229,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   229,
     997,   229,    43,   230,   231,   229,  1003,   230,   231,    47,
      48,   228,   229,  1010,   230,   231,   228,   229,     3,   230,
     231,   230,   231,   230,   231,   229,  1023,  1024,     3,     4,
       5,     6,     7,     8,   142,   230,   231,   230,   231,   437,
     438,   229,    17,    18,   561,   562,   813,   814,   229,   229,
      25,    10,    11,    12,    13,    14,    15,    16,   229,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   229,   229,   229,   229,    56,    56,    56,     3,
     144,   205,    57,     3,   144,   205,     3,    62,    26,     3,
      65,    66,     3,     3,     3,     3,     3,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   172,
     230,   229,     3,   230,   230,   230,   101,     3,     4,     5,
       6,     7,     8,   229,     3,   230,     3,     3,   122,   143,
       3,    17,    18,    11,    12,    13,    14,    15,    16,    25,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     3,     3,     3,     3,   142,     3,     3,
       3,     3,   131,     3,   175,     3,     3,     3,   229,   229,
      52,    57,   229,   229,   229,     3,    62,     3,   144,    65,
      66,     3,   144,    10,    11,    12,    13,    14,    15,    16,
     205,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     3,   145,     3,     3,   230,   230,
     230,   229,   229,   229,    30,   123,   229,   123,   123,   231,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   122,   144,   229,     3,     3,   122,     4,   175,
     175,     5,     5,     5,   142,   229,   142,   194,     3,   144,
       3,     3,   231,    10,    11,    12,    13,    14,    15,    16,
     144,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     3,    51,   172,     3,     4,     5,
       6,     7,     8,    20,   129,   146,   229,   121,   230,   230,
     105,    17,    18,     3,   104,     3,     3,   229,   123,    25,
     123,     3,     3,   229,    63,   230,   230,   229,   229,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,    57,   229,   229,     3,   229,    62,     3,   229,    65,
      66,    12,    13,    14,    15,    16,   144,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      86,   194,     3,     3,     4,     5,     6,     7,     8,   123,
     194,     3,   123,   229,     3,   123,     3,    17,    18,     3,
     229,    51,   110,   122,    20,    25,   229,   229,     3,     4,
       5,     6,     7,     8,   231,   230,     3,   142,     3,   230,
     230,   230,    17,    18,    42,     3,   123,     4,   230,   230,
      25,   230,   229,   229,   123,   229,   142,    57,   229,     5,
       4,   229,    62,     4,   229,    65,    66,   229,   229,   229,
     229,   171,   229,     3,     3,     3,     3,     3,   229,   229,
     229,     3,    57,   229,   194,   194,    86,    62,   229,   229,
      65,    66,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     231,    86,   188,   229,   231,    20,     3,     3,     3,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,     3,   142,   229,    10,    11,    12,    13,    14,    15,
      16,   230,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     5,     5,   142,    10,    11,
      12,    13,    14,    15,    16,   229,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    41,
     229,   229,     4,   230,   230,   230,   230,   229,   231,   194,
     123,   229,   229,   123,   229,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   229,    20,   229,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   229,    18,   229,     3,     4,     5,     6,     7,
       8,     3,   123,   229,     3,   229,     3,   230,   230,    17,
      18,   230,     3,   229,   229,   229,    51,    25,   231,   156,
       3,     4,     5,     6,     7,     8,   104,     3,   153,   195,
       3,     3,   230,   153,    17,    18,     5,     5,     5,   119,
       3,     3,    25,     3,     3,   230,   230,   164,   164,    57,
     229,   229,   229,     3,    62,   153,     3,    65,    66,   130,
     130,   231,     3,     3,     3,   162,   230,   230,   229,   229,
       3,     3,   161,   229,    57,     5,     3,    72,    86,    62,
     112,   124,    65,    66,    10,    11,    12,    13,    14,    15,
      16,   197,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   231,    10,    11,    12,    13,
      14,    15,    16,   180,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   144,   144,   231,
     140,   140,     5,     5,   142,    10,    11,    12,    13,    14,
      15,    16,    64,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   213,   899,   262,   142,
      10,    11,    12,    13,    14,    15,    16,   529,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   269,   499,    79,    52,   698,   345,   202,   513,   997,
     971,   756,   559,   768,  1155,   476,   104,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,    -1,
      -1,   229,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,    -1,    -1,   229,    10,    11,    12,
      13,    14,    15,    16,   104,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   231,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      10,    11,    12,    13,    14,    15,    16,   231,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,   230,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     230,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   230,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   230,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   230,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
     230,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   230,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   230,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   230,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   230,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   230,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     230,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   230,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   230,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,   230,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   230,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   230,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   230,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   230,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   230,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   230,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   230,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   230,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    82,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,   107,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   230,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     230,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    18,    -1,    -1,    -1,
      -1,   230,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    32,    34,    -1,    -1,    36,    38,    -1,    -1,    41,
      -1,    43,   230,    -1,    46,    38,    -1,    -1,    41,    -1,
      43,    -1,    -1,    46,    56,    -1,    -1,    58,    -1,   202,
     203,    63,    64,    56,    -1,    -1,   230,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    -1,    -1,    86,    -1,    -1,   200,    -1,     3,
      -1,    -1,    -1,    86,    -1,    97,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   118,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,
     142,    54,    55,    -1,    -1,   183,   148,    -1,    -1,   142,
      -1,   152,    -1,   154,    67,   148,    -1,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,
     171,   172,    -1,    -1,    87,    88,    89,    90,    -1,    -1,
      93,    -1,    -1,    -1,   185,    98,    -1,   188,   190,    -1,
      -1,    -1,   193,    -1,    -1,    -1,    -1,   190,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,   135,    -1,   137,   138,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   151,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,   170,   171,    -1,
     173,   174,    -1,    -1,    -1,    -1,   179,    -1,   181,    -1,
      -1,    -1,    -1,   186,   187,    -1,    -1,    -1,   191,    -1,
      -1,    -1,    -1,   196,    -1,   198,    -1,    -1,    -1,   202,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   101,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    10,    11,    12,
      13,    14,    15,    16,    94,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    94,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    85,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    40,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    80,    81,   118,   152,   154,   158,
     171,   172,   185,   188,   193,   233,   242,   243,   276,   280,
     281,   284,   285,   288,   289,   290,   292,   302,   303,   306,
     308,   309,   310,   332,   182,   182,    71,    75,   116,   160,
     176,   177,   190,   314,   277,    71,   116,   160,   182,   294,
     182,   182,   294,     8,   160,   333,   334,   257,   182,   294,
     304,     3,    71,     0,   227,   287,     3,     3,   117,   307,
       3,     3,    70,   117,   307,   176,   116,   182,     3,   101,
     115,   126,   149,   278,     3,   117,     3,     3,   117,     3,
     117,    76,   108,   115,   119,   126,   295,     3,     3,   295,
       9,    20,     3,    86,   231,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    35,    57,    62,    65,    66,
      79,    83,   108,   142,   159,   166,   167,   169,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     229,   234,   258,   259,     3,   115,   126,     3,   229,   261,
     262,   263,   265,   275,     3,   233,    44,    45,    59,   155,
      33,    60,    74,    81,    91,   136,   154,   195,   228,   205,
       3,    41,   144,     3,   117,   205,     3,     3,    70,   117,
     307,   228,   279,     3,   278,   101,   231,   205,   205,   205,
       3,   175,     3,   234,   234,   334,   228,   229,     9,   234,
     234,   234,   200,   234,   241,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   234,     3,    10,
      11,    12,    13,    14,    15,    16,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    41,
     260,   101,   231,   231,   228,   260,   243,   261,   171,   231,
      61,   114,   127,   139,   157,   169,   266,   268,    41,   264,
      43,    43,    56,    69,     3,    69,    56,     3,    56,    69,
      56,     3,    69,     3,    56,    69,    56,     3,    49,    50,
      52,    54,    55,    67,    87,    88,    89,    90,    93,    98,
     113,   120,   125,   132,   135,   137,   138,   151,   170,   171,
     173,   174,   179,   181,   186,   187,   191,   196,   198,   202,
     328,     3,   144,   205,     3,   144,     3,   117,   205,     3,
      26,   199,   244,   192,   261,     3,     3,     3,     3,   171,
     229,   296,     3,   171,   296,     3,   234,   235,   236,   234,
     234,   241,    94,    95,   200,   243,   234,    53,   128,   184,
     234,   239,   234,   234,    26,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   230,   230,   230,   230,
     234,   234,   230,   234,   234,   234,   234,   234,     6,    18,
     142,   229,    13,    14,    16,    19,   234,    35,    37,   165,
     229,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,     3,   261,   259,     3,   286,     3,    99,   115,
     193,   272,   230,   230,     3,   305,   262,   127,   157,   269,
     263,   122,   143,   267,     3,     3,     3,     3,     3,     3,
       3,     3,     3,   328,     3,   175,     3,     3,     3,   229,
     324,   324,   324,   324,   324,   324,   229,   324,   324,   324,
      52,   325,   325,   324,   324,   324,   229,   325,   324,   325,
     229,   229,    18,    63,    86,   192,   229,     3,     3,   144,
       3,   144,   205,     3,   115,   158,   228,   229,   330,   331,
     234,   145,   250,   261,   244,   279,     3,   301,     3,   297,
     197,   243,   301,   197,   243,   231,   230,   183,    94,    95,
     234,   234,   230,   101,   231,   230,   101,   234,   231,   231,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   231,
     231,   231,   230,   231,     6,   142,   237,   243,   234,   234,
     229,   234,    40,   229,   229,   229,   243,   244,   231,   260,
     123,   123,   123,    20,   228,   231,   244,   267,   267,   122,
     144,   263,   122,    63,   100,   148,   190,   328,   328,     3,
     323,   328,     3,   175,   175,     5,   326,   327,   326,   326,
       4,   329,   326,   326,   326,   327,   327,   326,   326,   326,
     329,   327,   326,   327,     5,     5,   142,   229,   234,   194,
       3,   215,   216,   217,   218,   282,   283,   192,   229,   144,
       3,   192,   229,     3,     3,   144,     3,    56,    63,   100,
     103,   116,   123,   148,   190,   315,   316,   322,   264,    51,
     129,   253,   244,    20,   146,   231,   293,   230,   231,   229,
     298,   293,   298,   293,   235,   234,   234,    94,   183,   234,
     234,   234,   101,   121,   240,   240,   234,   234,   234,   234,
     235,   230,   238,   243,    40,   234,   243,   243,   243,   230,
     105,   245,     3,   272,   104,   273,   273,   273,   234,     3,
       3,   250,   263,   234,   144,   192,   270,   271,   263,   229,
     123,   123,   229,   323,   323,   328,    18,    34,    38,    41,
      43,    46,    56,    63,    64,    86,    97,   123,   142,   148,
     190,   291,   323,     3,     3,   230,   231,   189,   204,    67,
      68,   230,   231,   230,   230,   230,    63,   234,   229,   229,
     229,   229,   229,   230,   231,   194,   282,     3,   192,   229,
     194,   282,   192,   229,   144,     3,   229,   330,     3,   229,
     123,   116,   123,   229,   229,   123,   229,   230,   231,     3,
     243,     3,   251,   252,   234,    86,   234,   123,     3,     3,
      86,   234,   300,   231,   293,   293,    94,   234,   104,   230,
     230,   231,   230,   234,   234,   230,   230,   230,   231,   230,
     230,   230,   235,   230,   234,   230,   230,   230,    51,   110,
     249,   122,   229,   229,   229,    20,    20,   228,   253,   234,
     229,   271,   234,   229,   229,     3,   321,   291,   291,   323,
     142,     3,   229,   229,   229,    42,     3,   229,     4,     4,
       5,     6,     7,    57,   221,   222,   223,   229,   123,   123,
     291,     5,   171,     4,   327,     4,   327,   327,   229,   230,
     282,     3,     3,     3,     3,     3,   229,   230,   229,   194,
     282,   229,   230,   194,   282,     3,   192,   229,   315,    63,
     100,   148,   190,   234,   229,   229,   229,     3,   256,   256,
     229,   321,   311,   330,   316,   328,    39,    85,   247,   231,
     131,   231,   188,    20,   230,   231,   299,   234,   234,   230,
      77,    78,    82,    84,   106,   107,   109,   202,   203,   234,
     230,   234,   246,   234,   250,     3,   274,   274,   274,   234,
     234,     3,   256,   230,     3,   318,     3,   317,   230,   231,
     291,     5,   234,     5,    41,    63,   148,   190,   234,   229,
     229,   229,   234,   230,     4,   234,   230,   230,   230,   230,
     231,   282,   282,   229,   230,   282,   229,   230,   229,   194,
     282,   230,   229,   123,   123,   229,   230,   318,   256,   256,
     230,   231,   230,   317,   230,    38,   144,   161,   323,   252,
     234,   234,   301,    86,   234,    86,   234,   229,   230,   230,
     230,   247,   201,   231,   248,   253,   230,   231,   230,   230,
      20,   230,    18,   230,   231,   230,   231,     3,   230,   231,
     230,   230,   231,   229,   229,   123,   230,   230,   230,   230,
     230,   230,     3,   230,   230,   282,   230,   282,   282,   229,
     230,   311,   330,   234,   229,   229,   321,   230,   230,   230,
       3,   230,     5,    20,     3,    51,   300,   156,   234,   104,
     254,     3,   234,   195,   153,     3,     3,     5,    47,    48,
       5,   234,   234,   230,   230,   230,   230,   282,   230,   318,
     317,   230,   153,     5,    80,   178,   150,   194,   230,   247,
     163,   188,   119,   255,     3,   230,   230,   230,   230,   230,
     230,   230,     3,     3,     3,   229,   229,   164,   164,   256,
     229,    47,    48,   153,   228,   229,     3,     3,   130,   130,
       3,   319,     3,     3,   319,   230,   230,   230,   231,   228,
     229,   229,   230,   229,   162,   320,     3,     3,   319,   319,
     320,   161,   312,   313,     5,    18,    72,   133,   144,   229,
     230,   230,    18,     3,   230,   231,    72,   195,   112,   102,
     147,   168,    80,   188,   319,   320,   320,   197,   313,    73,
     111,    59,   141,   155,   171,    59,   141,   155,   171,   230,
     124,    86,   142,    86,   142,   320,   180,     4,   134,   144,
     144,   140,   140,     5,     5
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
#line 335 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 341 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 342 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 344 "parser/evoparser.y"
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
#line 362 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 370 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 378 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 384 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 391 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 392 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 393 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 394 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 395 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 396 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 397 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 398 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 399 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 400 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 401 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 402 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 403 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 404 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 405 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 406 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 407 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 409 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 414 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 415 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 416 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 417 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 420 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 421 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 422 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 423 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 424 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 427 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 428 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 431 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 432 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 43:
#line 435 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 439 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 46:
#line 439 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 47:
#line 440 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 48:
#line 440 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 49:
#line 441 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 442 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 443 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 447 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 451 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 452 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 453 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 454 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 455 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 456 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 458 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 459 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 460 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 461 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 462 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 463 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 464 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 465 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 466 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 467 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 468 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 469 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 470 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 471 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 478 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 485 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 492 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 496 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 77:
#line 500 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 78:
#line 506 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 79:
#line 507 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 80:
#line 508 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 81:
#line 511 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 82:
#line 512 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 83:
#line 515 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 84:
#line 516 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 85:
#line 517 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 86:
#line 518 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 87:
#line 519 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 88:
#line 520 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 89:
#line 521 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 90:
#line 522 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 91:
#line 523 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 92:
#line 527 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 93:
#line 529 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 94:
#line 531 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 95:
#line 533 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 96:
#line 537 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 97:
#line 545 "parser/evoparser.y"
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
#line 555 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 99:
#line 556 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 100:
#line 559 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 101:
#line 560 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 102:
#line 564 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 572 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 104:
#line 580 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 105:
#line 591 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 106:
#line 600 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 107:
#line 605 "parser/evoparser.y"
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
#line 616 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 111:
#line 618 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 112:
#line 621 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 113:
#line 628 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 114:
#line 636 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 115:
#line 637 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 638 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 117:
#line 641 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 118:
#line 642 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 120:
#line 646 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 125:
#line 658 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 126:
#line 665 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 127:
#line 666 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 128:
#line 667 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 129:
#line 668 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 130:
#line 671 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 131:
#line 672 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 132:
#line 673 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 133:
#line 674 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 134:
#line 675 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 136:
#line 679 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 137:
#line 682 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 138:
#line 683 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 139:
#line 686 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 140:
#line 687 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 141:
#line 688 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 142:
#line 689 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 143:
#line 690 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 144:
#line 691 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 145:
#line 692 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 146:
#line 693 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 147:
#line 694 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 148:
#line 697 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 149:
#line 698 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 150:
#line 700 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 151:
#line 708 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 152:
#line 713 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 153:
#line 714 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 154:
#line 715 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 155:
#line 718 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 156:
#line 719 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 159:
#line 728 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 160:
#line 734 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 161:
#line 735 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 162:
#line 736 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 165:
#line 745 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 166:
#line 747 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 167:
#line 749 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 168:
#line 751 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 169:
#line 753 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 170:
#line 756 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 171:
#line 757 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 172:
#line 758 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 173:
#line 761 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 174:
#line 762 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 175:
#line 765 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 176:
#line 766 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 177:
#line 769 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 178:
#line 770 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 179:
#line 771 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 182:
#line 778 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 183:
#line 779 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 184:
#line 784 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 185:
#line 786 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 186:
#line 788 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 188:
#line 792 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 189:
#line 793 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 190:
#line 796 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 191:
#line 797 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 192:
#line 800 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 193:
#line 805 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 194:
#line 815 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 195:
#line 822 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 196:
#line 823 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 197:
#line 824 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 198:
#line 825 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 199:
#line 830 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 200:
#line 834 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 201:
#line 836 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 204:
#line 842 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 205:
#line 847 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 206:
#line 854 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 207:
#line 861 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 208:
#line 871 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 209:
#line 878 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 210:
#line 885 "parser/evoparser.y"
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
#line 895 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 212:
#line 903 "parser/evoparser.y"
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
#line 913 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 214:
#line 921 "parser/evoparser.y"
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
#line 930 "parser/evoparser.y"
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
#line 939 "parser/evoparser.y"
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
#line 949 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 218:
#line 957 "parser/evoparser.y"
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
#line 966 "parser/evoparser.y"
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
#line 975 "parser/evoparser.y"
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
#line 985 "parser/evoparser.y"
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
#line 994 "parser/evoparser.y"
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
#line 1006 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 224:
#line 1011 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 225:
#line 1016 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 226:
#line 1022 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 227:
#line 1029 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 228:
#line 1036 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 229:
#line 1043 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 230:
#line 1053 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 231:
#line 1060 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 232:
#line 1069 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 233:
#line 1076 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 234:
#line 1082 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 235:
#line 1090 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 236:
#line 1096 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 238:
#line 1104 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 239:
#line 1105 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 240:
#line 1106 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 241:
#line 1107 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 242:
#line 1112 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 243:
#line 1119 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 244:
#line 1128 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 245:
#line 1135 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 246:
#line 1141 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 247:
#line 1151 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 248:
#line 1155 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 249:
#line 1161 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 250:
#line 1167 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 251:
#line 1174 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 252:
#line 1180 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 253:
#line 1187 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 254:
#line 1193 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 255:
#line 1199 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 256:
#line 1205 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 257:
#line 1211 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 258:
#line 1217 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 259:
#line 1223 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 260:
#line 1229 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 261:
#line 1235 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 262:
#line 1241 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 263:
#line 1247 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 264:
#line 1253 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 265:
#line 1259 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 266:
#line 1265 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 267:
#line 1271 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 268:
#line 1278 "parser/evoparser.y"
    { ;}
    break;

  case 269:
#line 1279 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 270:
#line 1280 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 271:
#line 1284 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 272:
#line 1292 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 273:
#line 1298 "parser/evoparser.y"
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

  case 275:
#line 1311 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 276:
#line 1314 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 277:
#line 1315 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 278:
#line 1316 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 279:
#line 1317 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 280:
#line 1318 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 284:
#line 1325 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 285:
#line 1329 "parser/evoparser.y"
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

  case 286:
#line 1339 "parser/evoparser.y"
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

  case 287:
#line 1351 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 288:
#line 1352 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 289:
#line 1352 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 290:
#line 1355 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 291:
#line 1356 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 292:
#line 1357 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 293:
#line 1358 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 294:
#line 1362 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 295:
#line 1365 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 296:
#line 1366 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 297:
#line 1367 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 298:
#line 1368 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 299:
#line 1374 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 300:
#line 1380 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 301:
#line 1385 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 302:
#line 1390 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 303:
#line 1395 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 304:
#line 1404 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 305:
#line 1411 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 306:
#line 1412 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 307:
#line 1413 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 308:
#line 1418 "parser/evoparser.y"
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

  case 309:
#line 1429 "parser/evoparser.y"
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

  case 310:
#line 1441 "parser/evoparser.y"
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

  case 311:
#line 1452 "parser/evoparser.y"
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

  case 312:
#line 1467 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 313:
#line 1471 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 314:
#line 1475 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 315:
#line 1476 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 316:
#line 1481 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 317:
#line 1483 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 318:
#line 1485 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 319:
#line 1487 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 320:
#line 1490 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 321:
#line 1491 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 322:
#line 1495 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 323:
#line 1500 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 324:
#line 1502 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 325:
#line 1504 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 326:
#line 1506 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 327:
#line 1508 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 328:
#line 1512 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 329:
#line 1516 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 330:
#line 1517 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 331:
#line 1522 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 332:
#line 1532 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 333:
#line 1541 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 335:
#line 1545 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 336:
#line 1546 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 337:
#line 1547 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 338:
#line 1548 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 339:
#line 1550 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 340:
#line 1552 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 343:
#line 1560 "parser/evoparser.y"
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

  case 344:
#line 1575 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 345:
#line 1583 "parser/evoparser.y"
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

  case 346:
#line 1597 "parser/evoparser.y"
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

  case 347:
#line 1611 "parser/evoparser.y"
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

  case 348:
#line 1625 "parser/evoparser.y"
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

  case 349:
#line 1637 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 350:
#line 1638 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 351:
#line 1639 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 352:
#line 1642 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 353:
#line 1643 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 354:
#line 1646 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 355:
#line 1647 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 356:
#line 1648 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 357:
#line 1649 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 358:
#line 1650 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 359:
#line 1651 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 360:
#line 1652 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 361:
#line 1653 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 362:
#line 1655 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 363:
#line 1657 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 364:
#line 1659 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 365:
#line 1661 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 366:
#line 1663 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 367:
#line 1665 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 368:
#line 1668 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 369:
#line 1669 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 370:
#line 1672 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 371:
#line 1673 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 372:
#line 1676 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 373:
#line 1677 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 375:
#line 1681 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 376:
#line 1682 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 377:
#line 1683 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 378:
#line 1684 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 379:
#line 1685 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 380:
#line 1686 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 381:
#line 1687 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 382:
#line 1688 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 383:
#line 1689 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 384:
#line 1690 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 385:
#line 1691 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 386:
#line 1692 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 387:
#line 1693 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 388:
#line 1694 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 389:
#line 1695 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 390:
#line 1696 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 391:
#line 1697 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 392:
#line 1700 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 393:
#line 1701 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 394:
#line 1704 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 395:
#line 1706 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 396:
#line 1714 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 397:
#line 1715 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 399:
#line 1717 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 400:
#line 1718 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 401:
#line 1719 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 402:
#line 1720 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 403:
#line 1721 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 404:
#line 1722 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 405:
#line 1723 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 406:
#line 1724 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 407:
#line 1725 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 408:
#line 1732 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 409:
#line 1733 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 410:
#line 1734 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 411:
#line 1735 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 412:
#line 1736 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 413:
#line 1737 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 414:
#line 1738 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 415:
#line 1739 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 416:
#line 1740 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 417:
#line 1741 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 418:
#line 1742 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 419:
#line 1743 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 420:
#line 1744 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 421:
#line 1745 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 422:
#line 1746 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 423:
#line 1747 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 424:
#line 1748 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 425:
#line 1749 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 426:
#line 1750 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 427:
#line 1751 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 428:
#line 1752 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 429:
#line 1755 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 430:
#line 1756 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 431:
#line 1757 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 432:
#line 1760 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 433:
#line 1761 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 434:
#line 1764 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 435:
#line 1765 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 436:
#line 1766 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 438:
#line 1770 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 439:
#line 1771 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 440:
#line 1775 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 441:
#line 1776 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 442:
#line 1777 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 443:
#line 1778 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 444:
#line 1779 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 445:
#line 1780 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 446:
#line 1781 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 447:
#line 1782 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 448:
#line 1783 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 449:
#line 1784 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 450:
#line 1785 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 451:
#line 1786 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 452:
#line 1787 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 453:
#line 1788 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 454:
#line 1789 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 455:
#line 1790 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 456:
#line 1791 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 457:
#line 1792 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 458:
#line 1793 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 459:
#line 1794 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 460:
#line 1795 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 461:
#line 1796 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 462:
#line 1797 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 463:
#line 1798 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 464:
#line 1799 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 465:
#line 1800 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 466:
#line 1801 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 467:
#line 1802 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 468:
#line 1803 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 469:
#line 1804 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 470:
#line 1805 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 471:
#line 1806 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 472:
#line 1809 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 473:
#line 1810 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 474:
#line 1814 "parser/evoparser.y"
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

  case 475:
#line 1826 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 476:
#line 1827 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 477:
#line 1828 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 478:
#line 1832 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 479:
#line 1835 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 480:
#line 1836 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 484:
#line 1840 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 485:
#line 1841 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 6110 "parser/evoparser.tab.c"
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


#line 1844 "parser/evoparser.y"

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
