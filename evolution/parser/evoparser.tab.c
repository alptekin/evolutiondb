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
     MODIFY = 379,
     MEDIUMBLOB = 380,
     MEDIUMINT = 381,
     NATURAL = 382,
     NODE = 383,
     NO_ACTION = 384,
     NULLX = 385,
     OUTER = 386,
     ON = 387,
     ORDER = 388,
     ONDUPLICATE = 389,
     PARTIAL = 390,
     PRIMARY = 391,
     QUICK = 392,
     RANGE = 393,
     REAL = 394,
     RECLAIM = 395,
     REFERENCES = 396,
     RENAME = 397,
     RESTRICT = 398,
     ROLLUP = 399,
     RIGHT = 400,
     REPLACE = 401,
     SQL_SMALL_RESULT = 402,
     SCHEMA = 403,
     SHARD = 404,
     SHARDS = 405,
     SHARE = 406,
     SKIP = 407,
     SOME = 408,
     SQL_CALC_FOUND_ROWS = 409,
     SQL_BIG_RESULT = 410,
     SIMPLE = 411,
     STRAIGHT_JOIN = 412,
     SMALLINT = 413,
     SET = 414,
     SELECT = 415,
     TINYTEXT = 416,
     TINYINT = 417,
     TO = 418,
     TEMPORARY = 419,
     GLOBAL = 420,
     PRESERVE = 421,
     TEXT = 422,
     THAN = 423,
     TIMESTAMP = 424,
     TABLE = 425,
     THEN = 426,
     TRAILING = 427,
     TRUNCATE = 428,
     TINYBLOB = 429,
     TIME = 430,
     UPDATE = 431,
     UNSIGNED = 432,
     UNIQUE = 433,
     UUID = 434,
     USING = 435,
     USE = 436,
     HASH = 437,
     VALIDATE = 438,
     VARCHAR = 439,
     VALUES = 440,
     VARBINARY = 441,
     WHERE = 442,
     WHEN = 443,
     WITH = 444,
     YEAR = 445,
     YEAR_MONTH = 446,
     ZEROFILL = 447,
     EXISTS = 448,
     FSUBSTRING = 449,
     FTRIM = 450,
     FDATE_ADD = 451,
     FDATE_SUB = 452,
     FCOUNT = 453,
     FSUM = 454,
     FAVG = 455,
     FMIN = 456,
     FMAX = 457,
     FUPPER = 458,
     FLOWER = 459,
     FLENGTH = 460,
     FCONCAT = 461,
     FREPLACE = 462,
     FCOALESCE = 463,
     FGEN_RANDOM_UUID = 464,
     FGEN_RANDOM_UUID_V7 = 465,
     FSNOWFLAKE_ID = 466,
     FLAST_INSERT_ID = 467,
     FEVO_SLEEP = 468,
     FEVO_JITTER = 469
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
#define MODIFY 379
#define MEDIUMBLOB 380
#define MEDIUMINT 381
#define NATURAL 382
#define NODE 383
#define NO_ACTION 384
#define NULLX 385
#define OUTER 386
#define ON 387
#define ORDER 388
#define ONDUPLICATE 389
#define PARTIAL 390
#define PRIMARY 391
#define QUICK 392
#define RANGE 393
#define REAL 394
#define RECLAIM 395
#define REFERENCES 396
#define RENAME 397
#define RESTRICT 398
#define ROLLUP 399
#define RIGHT 400
#define REPLACE 401
#define SQL_SMALL_RESULT 402
#define SCHEMA 403
#define SHARD 404
#define SHARDS 405
#define SHARE 406
#define SKIP 407
#define SOME 408
#define SQL_CALC_FOUND_ROWS 409
#define SQL_BIG_RESULT 410
#define SIMPLE 411
#define STRAIGHT_JOIN 412
#define SMALLINT 413
#define SET 414
#define SELECT 415
#define TINYTEXT 416
#define TINYINT 417
#define TO 418
#define TEMPORARY 419
#define GLOBAL 420
#define PRESERVE 421
#define TEXT 422
#define THAN 423
#define TIMESTAMP 424
#define TABLE 425
#define THEN 426
#define TRAILING 427
#define TRUNCATE 428
#define TINYBLOB 429
#define TIME 430
#define UPDATE 431
#define UNSIGNED 432
#define UNIQUE 433
#define UUID 434
#define USING 435
#define USE 436
#define HASH 437
#define VALIDATE 438
#define VARCHAR 439
#define VALUES 440
#define VARBINARY 441
#define WHERE 442
#define WHEN 443
#define WITH 444
#define YEAR 445
#define YEAR_MONTH 446
#define ZEROFILL 447
#define EXISTS 448
#define FSUBSTRING 449
#define FTRIM 450
#define FDATE_ADD 451
#define FDATE_SUB 452
#define FCOUNT 453
#define FSUM 454
#define FAVG 455
#define FMIN 456
#define FMAX 457
#define FUPPER 458
#define FLOWER 459
#define FLENGTH 460
#define FCONCAT 461
#define FREPLACE 462
#define FCOALESCE 463
#define FGEN_RANDOM_UUID 464
#define FGEN_RANDOM_UUID_V7 465
#define FSNOWFLAKE_ID 466
#define FLAST_INSERT_ID 467
#define FEVO_SLEEP 468
#define FEVO_JITTER 469




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
#line 554 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 567 "parser/evoparser.tab.c"

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
#define YYLAST   2834

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  229
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  475
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1161

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   469

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     226,   227,    26,    24,   228,    25,   225,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   224,
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
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223
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
    1186,  1193,  1199,  1208,  1216,  1225,  1233,  1235,  1244,  1251,
    1252,  1257,  1258,  1261,  1264,  1267,  1270,  1272,  1273,  1274,
    1278,  1280,  1284,  1288,  1289,  1296,  1298,  1300,  1304,  1308,
    1316,  1320,  1324,  1330,  1336,  1338,  1347,  1355,  1363,  1365,
    1374,  1375,  1378,  1381,  1385,  1391,  1397,  1405,  1407,  1412,
    1417,  1418,  1421,  1423,  1429,  1437,  1445,  1455,  1467,  1469,
    1472,  1476,  1478,  1488,  1500,  1501,  1506,  1510,  1516,  1522,
    1532,  1543,  1545,  1549,  1559,  1569,  1579,  1586,  1598,  1607,
    1608,  1610,  1613,  1615,  1619,  1625,  1633,  1638,  1643,  1649,
    1655,  1660,  1667,  1679,  1693,  1707,  1723,  1728,  1735,  1737,
    1741,  1743,  1747,  1749,  1753,  1754,  1759,  1765,  1770,  1776,
    1781,  1787,  1792,  1798,  1803,  1808,  1812,  1816,  1820,  1823,
    1827,  1832,  1837,  1839,  1843,  1844,  1849,  1850,  1854,  1857,
    1861,  1865,  1869,  1873,  1879,  1885,  1891,  1895,  1901,  1904,
    1912,  1918,  1926,  1932,  1935,  1939,  1942,  1946,  1949,  1953,
    1959,  1964,  1970,  1978,  1987,  1996,  2004,  2011,  2018,  2024,
    2025,  2029,  2035,  2036,  2038,  2039,  2042,  2045,  2046,  2051,
    2055,  2058,  2062,  2066,  2070,  2074,  2078,  2082,  2086,  2090,
    2094,  2098,  2100,  2102,  2104,  2106,  2108,  2112,  2118,  2121,
    2126,  2128,  2130,  2132,  2134,  2138,  2142,  2146,  2150,  2156,
    2162,  2164,  2166,  2168,  2172,  2176,  2177,  2179,  2181,  2183,
    2187,  2191,  2194,  2196,  2200,  2204
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     230,     0,    -1,   239,   224,    -1,   239,   224,   230,    -1,
       3,    -1,     3,   225,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   139,    -1,   231,    24,
     231,    -1,   231,    25,   231,    -1,   231,    26,   231,    -1,
     231,    27,   231,    -1,   231,    28,   231,    -1,   231,    29,
     231,    -1,    25,   231,    -1,   226,   231,   227,    -1,   231,
      12,   231,    -1,   231,    10,   231,    -1,   231,    11,   231,
      -1,   231,    21,   231,    -1,   231,    22,   231,    -1,   231,
      30,   231,    -1,   231,    23,   231,    -1,    18,   231,    -1,
      17,   231,    -1,   231,    20,   231,    -1,   231,    20,   226,
     240,   227,    -1,   231,    20,    36,   226,   240,   227,    -1,
     231,    20,   162,   226,   240,   227,    -1,   231,    20,    34,
     226,   240,   227,    -1,   231,    15,   139,    -1,   231,    15,
      18,   139,    -1,   231,    15,     6,    -1,   231,    15,    18,
       6,    -1,     8,     9,   231,    -1,   231,    19,   231,    39,
     231,    -1,   231,    18,    19,   231,    39,   231,    -1,   231,
      -1,   231,   228,   232,    -1,    -1,   232,    -1,    -1,   231,
      16,   226,   234,   232,   227,    -1,    -1,   231,    18,    16,
     226,   235,   232,   227,    -1,   231,    16,   226,   240,   227,
      -1,   231,    18,    16,   226,   240,   227,    -1,   202,   226,
     240,   227,    -1,     3,   226,   233,   227,    -1,   207,   226,
      26,   227,    -1,   207,   226,   231,   227,    -1,   208,   226,
     231,   227,    -1,   209,   226,   231,   227,    -1,   210,   226,
     231,   227,    -1,   211,   226,   231,   227,    -1,   203,   226,
     231,   228,   231,   228,   231,   227,    -1,   203,   226,   231,
     228,   231,   227,    -1,   203,   226,   231,    98,   231,   227,
      -1,   203,   226,   231,    98,   231,   101,   231,   227,    -1,
     204,   226,   231,   227,    -1,   204,   226,   236,   231,    98,
     231,   227,    -1,   204,   226,   236,    98,   231,   227,    -1,
     212,   226,   231,   227,    -1,   213,   226,   231,   227,    -1,
     214,   226,   231,   227,    -1,   215,   226,   231,   228,   231,
     227,    -1,   216,   226,   231,   228,   231,   228,   231,   227,
      -1,   217,   226,   231,   228,   231,   227,    -1,   218,   226,
     227,    -1,   219,   226,   227,    -1,   220,   226,   227,    -1,
     221,   226,   227,    -1,   222,   226,   231,   227,    -1,   223,
     226,   231,   228,   231,   227,    -1,   125,    -1,   181,    -1,
      52,    -1,   205,   226,   231,   228,   237,   227,    -1,   206,
     226,   231,   228,   237,   227,    -1,   118,   231,    75,    -1,
     118,   231,    76,    -1,   118,   231,    80,    -1,   118,   231,
      82,    -1,   118,   231,   200,    -1,   118,   231,   199,    -1,
     118,   231,   104,    -1,   118,   231,   103,    -1,   118,   231,
     106,    -1,    60,   231,   238,    92,    -1,    60,   231,   238,
      93,   231,    92,    -1,    60,   238,    92,    -1,    60,   238,
      93,   231,    92,    -1,   197,   231,   180,   231,    -1,   238,
     197,   231,   180,   231,    -1,   231,    14,   231,    -1,   231,
      18,    14,   231,    -1,   231,    13,   231,    -1,   231,    18,
      13,   231,    -1,    56,    -1,    63,    -1,    64,    -1,   240,
      -1,   169,   254,   255,    -1,   169,   254,   255,    98,   258,
     241,   242,   246,   247,   250,   251,   252,    -1,    -1,   196,
     231,    -1,    -1,   102,    50,   243,   245,    -1,   231,   244,
      -1,   243,   228,   231,   244,    -1,    -1,    38,    -1,    83,
      -1,    -1,   198,   153,    -1,    -1,   107,   231,    -1,    -1,
     142,    50,   248,    -1,   249,    -1,   248,   228,   249,    -1,
       3,   244,    -1,    -1,   126,   231,    -1,   126,   231,   228,
     231,    -1,   126,   231,   128,   231,    -1,    -1,   101,   185,
      -1,   101,   160,    -1,   101,   185,   161,   127,    -1,   101,
     160,   161,   127,    -1,    -1,   116,   253,    -1,     3,    -1,
     253,   228,     3,    -1,    -1,   254,    34,    -1,   254,    77,
      -1,   254,    81,    -1,   254,   105,    -1,   254,   166,    -1,
     254,   156,    -1,   254,   164,    -1,   254,   163,    -1,   256,
      -1,   255,   228,   256,    -1,    26,    -1,   231,   257,    -1,
      40,     3,    -1,     3,    -1,    -1,   259,    -1,   258,   228,
     259,    -1,   260,    -1,   262,    -1,     3,   257,   269,    -1,
       3,   225,     3,   257,   269,    -1,   272,   261,     3,    -1,
     226,   258,   227,    -1,    40,    -1,    -1,   259,   263,   119,
     260,   267,    -1,   259,   166,   260,    -1,   259,   166,   260,
     141,   231,    -1,   259,   265,   264,   119,   260,   268,    -1,
     259,   136,   266,   119,   260,    -1,    -1,   111,    -1,    59,
      -1,    -1,   140,    -1,   124,    -1,   154,    -1,   124,   264,
      -1,   154,   264,    -1,    -1,    -1,   268,    -1,   141,   231,
      -1,   189,   226,   253,   227,    -1,   190,   120,   270,   226,
     271,   227,    -1,   112,   120,   270,   226,   271,   227,    -1,
      96,   120,   270,   226,   271,   227,    -1,    -1,   101,   119,
      -1,    -1,     3,    -1,   271,   228,     3,    -1,   226,   240,
     227,    -1,   273,    -1,    78,   274,    98,     3,   241,   247,
     250,    -1,   274,   123,    -1,   274,   146,    -1,   274,   112,
      -1,    -1,    78,   274,   275,    98,   258,   241,    -1,     3,
     276,    -1,   275,   228,     3,   276,    -1,    -1,   225,    26,
      -1,    78,   274,    98,   275,   189,   258,   241,    -1,   277,
      -1,    79,   179,     3,    -1,    79,   179,   114,   202,     3,
      -1,   278,    -1,    57,   113,     3,   141,     3,   226,   279,
     227,    -1,    57,   113,   114,   202,     3,   141,     3,   226,
     279,   227,    -1,    57,   187,   113,     3,   141,     3,   226,
     279,   227,    -1,    57,   187,   113,   114,   202,     3,   141,
       3,   226,   279,   227,    -1,    57,   113,     3,   141,     3,
     189,   191,   226,   279,   227,    -1,    57,   113,   114,   202,
       3,   141,     3,   189,   191,   226,   279,   227,    -1,    57,
     187,   113,     3,   141,     3,   189,   191,   226,   279,   227,
      -1,    57,   187,   113,   114,   202,     3,   141,     3,   189,
     191,   226,   279,   227,    -1,    57,   113,    68,     3,   141,
       3,   226,   279,   227,    -1,    57,   113,    68,   114,   202,
       3,   141,     3,   226,   279,   227,    -1,    57,   187,   113,
      68,     3,   141,     3,   226,   279,   227,    -1,    57,   187,
     113,    68,   114,   202,     3,   141,     3,   226,   279,   227,
      -1,    57,   113,    68,     3,   141,     3,   189,   191,   226,
     279,   227,    -1,    57,   187,   113,    68,     3,   141,     3,
     189,   191,   226,   279,   227,    -1,     3,    -1,   279,   228,
       3,    -1,   280,    -1,   212,   226,     3,   227,    -1,   213,
     226,     3,   227,    -1,   214,   226,     3,   227,    -1,   215,
     226,     3,   228,     3,   227,    -1,   281,    -1,    79,   113,
       3,    -1,   282,   284,    -1,   182,   179,     3,    -1,   182,
     179,     3,   228,   283,    -1,     3,    -1,   283,   228,     3,
      -1,    -1,   284,    58,    -1,   284,   152,    -1,   284,    44,
      42,    -1,   284,    43,    42,    -1,   285,    -1,   149,   179,
       3,    -1,   286,    -1,    35,   179,     3,    -1,    35,   179,
       3,   225,     3,    -1,   287,    -1,    32,   179,     3,    33,
      55,     3,    61,   226,   231,   227,    -1,    32,   179,     3,
      33,    55,     3,   187,   226,   317,   227,    -1,    32,   179,
       3,    33,    55,     3,    97,   120,   226,   314,   227,   150,
       3,   226,   315,   227,   316,    -1,    32,   179,     3,    33,
      55,     3,    61,   226,   231,   227,    18,   192,    -1,    32,
     179,     3,    33,    55,     3,    97,   120,   226,   314,   227,
     150,     3,   226,   315,   227,   316,    18,   192,    -1,    32,
     179,     3,    33,    55,     3,   145,   120,   226,   313,   227,
      -1,    32,   179,     3,    79,    55,     3,    -1,    32,   179,
       3,   151,    55,     3,   172,     3,    -1,    32,   179,     3,
      89,    55,     3,    -1,    32,   179,     3,    72,    55,     3,
      -1,    32,   179,     3,   192,    55,     3,    -1,    32,   179,
       3,    33,    67,     3,   324,    -1,    32,   179,     3,    79,
      67,     3,    -1,    32,   179,     3,    79,     3,    -1,    32,
     179,     3,   151,    67,     3,   172,     3,    -1,    32,   179,
       3,   151,     3,   172,     3,    -1,    32,   179,     3,   133,
      67,     3,   324,   319,    -1,    32,   179,     3,   133,     3,
     324,   319,    -1,   288,    -1,   115,   290,   291,     3,   292,
     194,   294,   289,    -1,   115,   290,   291,     3,   292,   240,
      -1,    -1,   143,   120,   185,   297,    -1,    -1,   290,   123,
      -1,   290,    74,    -1,   290,   105,    -1,   290,   112,    -1,
     116,    -1,    -1,    -1,   226,   293,   227,    -1,     3,    -1,
     293,   228,     3,    -1,   226,   296,   227,    -1,    -1,   294,
     228,   295,   226,   296,   227,    -1,   231,    -1,    84,    -1,
     296,   228,   231,    -1,   296,   228,    84,    -1,   115,   290,
     291,     3,   168,   297,   289,    -1,     3,    20,   231,    -1,
       3,    20,    84,    -1,   297,   228,     3,    20,   231,    -1,
     297,   228,     3,    20,    84,    -1,   298,    -1,   155,   290,
     291,     3,   292,   194,   294,   289,    -1,   155,   290,   291,
       3,   168,   297,   289,    -1,   155,   290,   291,     3,   292,
     240,   289,    -1,   299,    -1,   185,   300,   258,   168,   301,
     241,   247,   250,    -1,    -1,   290,   123,    -1,   290,   112,
      -1,     3,    20,   231,    -1,     3,   225,     3,    20,   231,
      -1,   301,   228,     3,    20,   231,    -1,   301,   228,     3,
     225,     3,    20,   231,    -1,   302,    -1,    57,    69,   303,
       3,    -1,    57,   157,   303,     3,    -1,    -1,   114,   202,
      -1,   304,    -1,    57,    73,     3,    40,   324,    -1,    57,
      73,     3,    40,   324,    84,   231,    -1,    57,    73,     3,
      40,   324,    18,   139,    -1,    57,    73,     3,    40,   324,
      61,   226,   231,   227,    -1,    57,    73,     3,    40,   324,
      18,   139,    61,   226,   231,   227,    -1,   305,    -1,   190,
       3,    -1,   190,    69,     3,    -1,   306,    -1,    57,   310,
     179,   303,     3,   226,   311,   227,   307,    -1,    57,   310,
     179,   303,     3,   225,     3,   226,   311,   227,   307,    -1,
      -1,   307,    37,    20,     5,    -1,   307,    37,     5,    -1,
     307,   141,     3,    78,     3,    -1,   307,   141,     3,   175,
       3,    -1,   307,   158,    50,   191,   226,     3,   227,   159,
       5,    -1,   307,   158,    50,   147,   226,     3,   227,   226,
     308,   227,    -1,   309,    -1,   308,   228,   309,    -1,   158,
       3,   194,   121,   177,     4,   141,   137,     5,    -1,   158,
       3,   194,   121,   177,   131,   141,   137,     5,    -1,    57,
     310,   179,   303,     3,   226,   311,   227,   326,    -1,    57,
     310,   179,   303,     3,   326,    -1,    57,   310,   179,   303,
       3,   225,     3,   226,   311,   227,   326,    -1,    57,   310,
     179,   303,     3,   225,     3,   326,    -1,    -1,   173,    -1,
     174,   173,    -1,   312,    -1,   311,   228,   312,    -1,   145,
     120,   226,   313,   227,    -1,    55,     3,   145,   120,   226,
     313,   227,    -1,   120,   226,   253,   227,    -1,   113,   226,
     253,   227,    -1,   100,   113,   226,   253,   227,    -1,   100,
     120,   226,   253,   227,    -1,    61,   226,   231,   227,    -1,
      55,     3,    61,   226,   231,   227,    -1,    97,   120,   226,
     314,   227,   150,     3,   226,   315,   227,   316,    -1,    97,
     120,   226,   314,   227,   150,     3,   225,     3,   226,   315,
     227,   316,    -1,    55,     3,    97,   120,   226,   314,   227,
     150,     3,   226,   315,   227,   316,    -1,    55,     3,    97,
     120,   226,   314,   227,   150,     3,   225,     3,   226,   315,
     227,   316,    -1,   187,   226,   317,   227,    -1,    55,     3,
     187,   226,   317,   227,    -1,     3,    -1,   313,   228,     3,
      -1,     3,    -1,   314,   228,     3,    -1,     3,    -1,   315,
     228,     3,    -1,    -1,   316,   141,    78,    58,    -1,   316,
     141,    78,   168,   139,    -1,   316,   141,    78,   152,    -1,
     316,   141,    78,   168,    84,    -1,   316,   141,   185,    58,
      -1,   316,   141,   185,   168,   139,    -1,   316,   141,   185,
     152,    -1,   316,   141,   185,   168,    84,    -1,   316,   141,
      78,   138,    -1,   316,   141,   185,   138,    -1,   316,   130,
      99,    -1,   316,   130,   165,    -1,   316,   130,   144,    -1,
     316,    70,    -1,   316,    18,    70,    -1,   316,    70,   109,
      71,    -1,   316,    70,   109,   108,    -1,     3,    -1,   317,
     228,     3,    -1,    -1,   318,     3,   324,   319,    -1,    -1,
     319,    18,   139,    -1,   319,   139,    -1,   319,    84,     4,
      -1,   319,    84,     5,    -1,   319,    84,     7,    -1,   319,
      84,     6,    -1,   319,    84,   218,   226,   227,    -1,   319,
      84,   219,   226,   227,    -1,   319,    84,   220,   226,   227,
      -1,   319,    84,    56,    -1,   319,    84,   226,   231,   227,
      -1,   319,    37,    -1,   319,    37,   226,     5,   228,     5,
     227,    -1,   319,    37,   226,     5,   227,    -1,   319,    42,
     226,     5,   228,     5,   227,    -1,   319,    42,   226,     5,
     227,    -1,   319,    42,    -1,   319,   187,   120,    -1,   319,
     187,    -1,   319,   145,   120,    -1,   319,   120,    -1,   319,
      62,     4,    -1,   319,    61,   226,   231,   227,    -1,   319,
      55,     3,   187,    -1,   319,    55,     3,   145,   120,    -1,
     319,    55,     3,    61,   226,   231,   227,    -1,   319,    45,
      41,    40,   226,   231,   227,    46,    -1,   319,    45,    41,
      40,   226,   231,   227,    47,    -1,   319,    45,    41,    40,
     226,   231,   227,    -1,   319,    40,   226,   231,   227,    46,
      -1,   319,    40,   226,   231,   227,    47,    -1,   319,    40,
     226,   231,   227,    -1,    -1,   226,     5,   227,    -1,   226,
       5,   228,     5,   227,    -1,    -1,    51,    -1,    -1,   322,
     186,    -1,   322,   201,    -1,    -1,   323,    65,   168,     4,
      -1,   323,    66,     4,    -1,    54,   320,    -1,   171,   320,
     322,    -1,   167,   320,   322,    -1,   135,   320,   322,    -1,
     117,   320,   322,    -1,   110,   320,   322,    -1,    53,   320,
     322,    -1,   148,   320,   322,    -1,    85,   320,   322,    -1,
      95,   320,   322,    -1,    87,   320,   322,    -1,    88,    -1,
     184,    -1,   178,    -1,    86,    -1,   199,    -1,    65,   320,
     323,    -1,   193,   226,     5,   227,   323,    -1,    51,   320,
      -1,   195,   226,     5,   227,    -1,   183,    -1,    48,    -1,
     134,    -1,   129,    -1,   170,   321,   323,    -1,   176,   321,
     323,    -1,   132,   321,   323,    -1,   122,   321,   323,    -1,
      91,   226,   325,   227,   323,    -1,   168,   226,   325,   227,
     323,    -1,    49,    -1,   188,    -1,     4,    -1,   325,   228,
       4,    -1,   327,   261,   240,    -1,    -1,   112,    -1,   155,
      -1,   328,    -1,   168,   157,     3,    -1,   168,   157,    84,
      -1,   168,   329,    -1,   330,    -1,   329,   228,   330,    -1,
       8,    20,   231,    -1,     8,     9,   231,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   325,   325,   326,   331,   338,   339,   340,   358,   366,
     374,   380,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     411,   412,   413,   414,   417,   418,   419,   420,   421,   424,
     425,   428,   429,   432,   433,   436,   436,   437,   437,   438,
     439,   440,   444,   448,   449,   450,   451,   452,   453,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   475,   482,   489,   493,   497,   503,   504,
     505,   508,   509,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   523,   525,   527,   529,   533,   541,   552,   553,
     556,   557,   560,   568,   576,   587,   597,   598,   612,   613,
     614,   615,   618,   625,   633,   634,   635,   638,   639,   642,
     643,   646,   647,   650,   651,   654,   662,   663,   664,   665,
     668,   669,   670,   671,   672,   675,   676,   679,   680,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   694,   695,
     696,   704,   710,   711,   712,   715,   716,   719,   720,   724,
     731,   732,   733,   736,   737,   741,   743,   745,   747,   749,
     753,   754,   755,   758,   759,   762,   763,   766,   767,   768,
     771,   772,   775,   776,   780,   782,   784,   786,   789,   790,
     793,   794,   797,   801,   811,   819,   820,   821,   822,   826,
     830,   832,   836,   836,   838,   843,   850,   857,   867,   874,
     881,   891,   899,   909,   917,   926,   935,   945,   953,   962,
     971,   981,   990,  1002,  1007,  1012,  1018,  1025,  1032,  1039,
    1049,  1056,  1065,  1072,  1078,  1086,  1092,  1100,  1101,  1102,
    1103,  1104,  1108,  1115,  1124,  1131,  1137,  1148,  1151,  1157,
    1163,  1170,  1176,  1183,  1189,  1195,  1201,  1207,  1213,  1219,
    1225,  1231,  1237,  1243,  1249,  1255,  1263,  1271,  1277,  1290,
    1291,  1294,  1295,  1296,  1297,  1298,  1301,  1301,  1304,  1305,
    1308,  1318,  1331,  1332,  1332,  1335,  1336,  1337,  1338,  1341,
    1345,  1346,  1347,  1348,  1354,  1357,  1363,  1368,  1374,  1382,
    1391,  1392,  1393,  1397,  1408,  1420,  1431,  1446,  1450,  1451,
    1454,  1455,  1459,  1463,  1465,  1467,  1469,  1471,  1476,  1480,
    1481,  1485,  1494,  1504,  1508,  1509,  1510,  1511,  1512,  1513,
    1515,  1519,  1520,  1523,  1538,  1545,  1560,  1573,  1588,  1601,
    1602,  1603,  1606,  1607,  1610,  1611,  1612,  1613,  1614,  1615,
    1616,  1617,  1618,  1620,  1622,  1624,  1626,  1628,  1632,  1633,
    1636,  1637,  1640,  1641,  1644,  1645,  1646,  1647,  1648,  1649,
    1650,  1651,  1652,  1653,  1654,  1655,  1656,  1657,  1658,  1659,
    1660,  1661,  1664,  1665,  1668,  1668,  1678,  1679,  1680,  1681,
    1682,  1683,  1684,  1685,  1686,  1687,  1688,  1689,  1696,  1697,
    1698,  1699,  1700,  1701,  1702,  1703,  1704,  1705,  1706,  1707,
    1708,  1709,  1710,  1711,  1712,  1713,  1714,  1715,  1716,  1719,
    1720,  1721,  1724,  1725,  1728,  1729,  1730,  1733,  1734,  1735,
    1739,  1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,
    1749,  1750,  1751,  1752,  1753,  1754,  1755,  1756,  1757,  1758,
    1759,  1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,
    1769,  1770,  1773,  1774,  1777,  1790,  1791,  1792,  1796,  1799,
    1800,  1801,  1802,  1802,  1804,  1805
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
  "LONGBLOB", "MATCH", "MAXVALUE", "MEDIUMTEXT", "MODIFY", "MEDIUMBLOB",
  "MEDIUMINT", "NATURAL", "NODE", "NO_ACTION", "NULLX", "OUTER", "ON",
  "ORDER", "ONDUPLICATE", "PARTIAL", "PRIMARY", "QUICK", "RANGE", "REAL",
  "RECLAIM", "REFERENCES", "RENAME", "RESTRICT", "ROLLUP", "RIGHT",
  "REPLACE", "SQL_SMALL_RESULT", "SCHEMA", "SHARD", "SHARDS", "SHARE",
  "SKIP", "SOME", "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT", "SIMPLE",
  "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT", "TINYTEXT", "TINYINT",
  "TO", "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT", "THAN", "TIMESTAMP",
  "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME", "UPDATE",
  "UNSIGNED", "UNIQUE", "UUID", "USING", "USE", "HASH", "VALIDATE",
  "VARCHAR", "VALUES", "VARBINARY", "WHERE", "WHEN", "WITH", "YEAR",
  "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD",
  "FDATE_SUB", "FCOUNT", "FSUM", "FAVG", "FMIN", "FMAX", "FUPPER",
  "FLOWER", "FLENGTH", "FCONCAT", "FREPLACE", "FCOALESCE",
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
     466,   467,   468,   469,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   229,   230,   230,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   232,   232,   233,   233,   234,   231,   235,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   236,   236,
     236,   231,   231,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   231,   231,   231,   231,   238,   238,   231,   231,
     231,   231,   231,   231,   231,   239,   240,   240,   241,   241,
     242,   242,   243,   243,   244,   244,   244,   245,   245,   246,
     246,   247,   247,   248,   248,   249,   250,   250,   250,   250,
     251,   251,   251,   251,   251,   252,   252,   253,   253,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   255,   255,
     255,   256,   257,   257,   257,   258,   258,   259,   259,   260,
     260,   260,   260,   261,   261,   262,   262,   262,   262,   262,
     263,   263,   263,   264,   264,   265,   265,   266,   266,   266,
     267,   267,   268,   268,   269,   269,   269,   269,   270,   270,
     271,   271,   272,   239,   273,   274,   274,   274,   274,   273,
     275,   275,   276,   276,   273,   239,   277,   277,   239,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   279,   279,   279,   280,   280,   280,   280,
     239,   281,   239,   282,   282,   283,   283,   284,   284,   284,
     284,   284,   239,   285,   239,   286,   286,   239,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   239,   288,   288,   289,
     289,   290,   290,   290,   290,   290,   291,   291,   292,   292,
     293,   293,   294,   295,   294,   296,   296,   296,   296,   288,
     297,   297,   297,   297,   239,   298,   298,   298,   239,   299,
     300,   300,   300,   301,   301,   301,   301,   239,   302,   302,
     303,   303,   239,   304,   304,   304,   304,   304,   239,   305,
     305,   239,   306,   306,   307,   307,   307,   307,   307,   307,
     307,   308,   308,   309,   309,   306,   306,   306,   306,   310,
     310,   310,   311,   311,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   313,   313,
     314,   314,   315,   315,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   317,   317,   318,   312,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   320,
     320,   320,   321,   321,   322,   322,   322,   323,   323,   323,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   325,   325,   326,   327,   327,   327,   239,   328,
     328,   328,   329,   329,   330,   330
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
       6,     5,     8,     7,     8,     7,     1,     8,     6,     0,
       4,     0,     2,     2,     2,     2,     1,     0,     0,     3,
       1,     3,     3,     0,     6,     1,     1,     3,     3,     7,
       3,     3,     5,     5,     1,     8,     7,     7,     1,     8,
       0,     2,     2,     3,     5,     5,     7,     1,     4,     4,
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
       0,     0,     0,   339,   198,     0,   271,     0,   271,     0,
     139,     0,   271,     0,     0,     0,   105,   193,   205,   208,
     230,   237,   242,   244,   247,   266,   294,   298,   307,   312,
     318,   321,   468,     0,     0,   310,     0,     0,   310,   340,
       0,     0,     0,     0,     0,     0,   277,     0,   277,     0,
       0,   471,   472,     0,     0,     0,     0,   319,     0,     1,
       2,   232,     0,   245,     0,     0,     0,     0,     0,     0,
       0,   341,     0,   310,   202,     0,   197,   195,   196,     0,
     231,   206,     0,   273,   274,   275,   276,   272,     0,   243,
       0,     0,     0,   469,   470,     0,     4,     7,     8,    10,
       9,     6,     0,     0,     0,   150,   140,   102,     0,   103,
     104,   141,   142,   143,    11,   145,   147,   146,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   154,   106,   148,   233,   275,   272,   154,     0,
       0,   155,   157,   158,   164,   320,     3,     0,     0,   238,
     239,     0,     0,     0,     0,     0,     0,     0,     0,   311,
     308,     0,     0,     0,     0,     0,   309,     0,     0,     0,
       0,     0,   200,   108,     0,     0,     0,     0,   278,   278,
     475,   474,   473,     0,    43,     0,    28,    27,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   151,     0,     0,
       0,     0,   187,     0,     0,     0,     0,   172,   171,   175,
     179,   176,     0,     0,   173,   163,     0,   241,   240,     0,
       0,     0,   261,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,   451,   460,   419,   419,   419,   419,   419,
     444,   419,   441,     0,   419,   419,   419,   422,   453,   422,
     452,   419,   419,   419,     0,   422,   419,   422,   443,   450,
     442,   461,     0,     0,   445,   313,     0,     0,     0,     0,
       0,     0,     0,     0,   465,   203,     0,   121,     0,   108,
     202,   207,     0,     0,     0,     0,     0,     5,    41,    44,
       0,    38,     0,     0,    94,     0,     0,     0,     0,    80,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,     0,     0,    19,    21,    22,    20,   100,    98,
      36,     0,    34,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    23,    24,    26,    12,    13,    14,
      15,    16,    17,    25,   152,   108,   149,   235,   234,   154,
       0,     0,     0,   159,   192,   162,     0,   108,   156,   173,
     173,     0,   166,     0,   174,     0,   161,     0,     0,   257,
     254,   260,   256,   386,     0,     0,     0,     0,   258,     0,
     448,   424,   430,   427,   424,   424,     0,   424,   424,   424,
     423,   427,   427,   424,   424,   424,     0,   427,   424,   427,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   466,   467,     0,   384,   336,   164,
     109,     0,   126,   108,   199,   201,     0,   269,   280,     0,
       0,   268,   269,     0,   269,     0,    52,     0,    92,     0,
       0,     0,    51,     0,     0,    63,     0,     0,     0,     0,
      53,    54,    55,    56,    57,    58,    66,    67,    68,     0,
       0,     0,    76,     0,    37,    35,     0,     0,   101,    99,
      47,     0,     0,     0,     0,     0,     0,   110,     0,   187,
     189,   189,   189,     0,     0,     0,   121,   177,   178,     0,
       0,   180,     0,     0,     0,     0,     0,   259,   265,   386,
     263,     0,     0,     0,   436,   446,   438,   440,   462,     0,
     439,   435,   434,   457,   456,   433,   437,   432,     0,   454,
     431,   455,     0,     0,   315,     0,   314,     0,   223,     0,
       0,     0,     0,     0,   225,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   465,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   342,     0,     0,     0,     0,   194,
     204,     0,     0,     0,   289,   279,     0,     0,   269,   296,
     269,   297,    42,    96,     0,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,     0,    39,     0,     0,     0,    30,     0,   119,
     236,   160,     0,     0,     0,     0,   303,     0,     0,   126,
     169,   167,     0,     0,   165,   181,     0,     0,     0,     0,
       0,     0,   398,     0,   403,     0,     0,     0,     0,     0,
     407,   388,     0,   405,   264,   255,   262,   420,     0,   425,
     426,     0,     0,   427,     0,   427,   427,   449,     0,     0,
       0,     0,     0,     0,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   384,   338,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   324,
     384,     0,   464,   114,   122,   123,   127,   291,   290,     0,
       0,   281,   286,   285,     0,   283,   267,   295,    93,    97,
       0,    61,    60,     0,    65,     0,     0,    81,    82,    69,
       0,    71,    77,    46,     0,    50,    40,    33,    31,    32,
       0,     0,   121,   188,     0,     0,     0,     0,     0,     0,
     299,   182,     0,   168,     0,     0,     0,   382,     0,   387,
       0,     0,     0,     0,     0,     0,   408,   389,   390,   392,
     391,   396,     0,     0,     0,     0,   406,   404,     0,     0,
     429,   458,   463,   459,   447,     0,   316,     0,     0,     0,
       0,     0,   224,     0,   217,     0,     0,     0,     0,   211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,     0,     0,     0,     0,   322,
     335,   343,   386,   115,   116,   125,     0,     0,     0,     0,
       0,   282,     0,     0,     0,     0,    64,    83,    84,    85,
      86,    90,    89,    91,    88,    87,     0,    48,   114,   117,
     120,   126,   190,     0,     0,     0,   304,   305,     0,     0,
     248,   360,     0,   358,     0,   249,     0,     0,     0,     0,
       0,     0,     0,   410,     0,     0,     0,     0,     0,   421,
     428,     0,   213,   226,   227,   228,     0,     0,     0,     0,
     210,     0,     0,   219,     0,     0,     0,   324,     0,     0,
       0,     0,   350,     0,     0,     0,   347,     0,   346,     0,
     356,     0,     0,     0,   385,   124,   129,   128,   270,   293,
     292,   288,   287,     0,    62,    59,    70,   112,     0,     0,
     111,   130,   186,     0,   185,   184,     0,   183,     0,     0,
       0,   253,     0,   383,   400,     0,   418,   402,     0,     0,
       0,   411,   409,   393,   394,   395,   397,   317,     0,   221,
     218,     0,   215,     0,     0,     0,   212,   323,   337,     0,
       0,     0,     0,     0,   348,   349,   138,   344,   326,     0,
       0,     0,     0,   118,   114,     0,   135,   191,   306,   251,
       0,   361,   359,     0,   416,   417,     0,     0,     0,   229,
     214,   222,   220,     0,   351,     0,     0,   357,     0,   325,
       0,     0,     0,     0,   284,   113,   132,   131,     0,   107,
       0,   399,   401,   415,   412,   216,     0,   345,     0,   327,
     328,     0,     0,     0,     0,   136,     0,   413,   414,     0,
       0,     0,     0,     0,   134,   133,   362,     0,     0,     0,
       0,     0,     0,   364,     0,     0,     0,     0,   364,     0,
       0,   250,   363,     0,     0,     0,   352,     0,     0,   331,
     329,     0,   378,     0,     0,     0,   364,   364,     0,     0,
     330,     0,   379,   252,     0,   375,   377,   376,     0,     0,
       0,   354,   353,     0,   332,   380,   381,   365,   373,   367,
       0,   369,   374,   371,     0,   364,     0,   368,   366,   372,
     370,   355,     0,     0,     0,     0,     0,     0,     0,   333,
     334
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,   338,   339,   340,   526,   650,   353,   642,   201,
      15,    16,   327,   659,   889,   865,   970,   782,   482,   744,
     745,   619,  1026,  1059,   855,    53,   143,   144,   247,   150,
     151,   152,   266,   153,   263,   425,   264,   421,   674,   675,
     413,   663,   893,   154,    17,    43,    79,   182,    18,    19,
     593,   594,    20,    21,   408,    61,    22,    23,    24,    25,
     624,    46,    88,   334,   489,   628,   873,   754,   487,    26,
      27,    56,   417,    28,    65,    29,    30,    31,   859,  1108,
    1109,    42,   613,   614,   904,   902,  1087,  1101,   798,   615,
     558,   440,   451,   564,   565,   315,   569,   478,   479,    32,
      51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -833
static const yytype_int16 yypact[] =
{
    2434,  -119,    59,   458,  -833,   -61,  -833,   148,  -833,    23,
    -833,   159,    11,   233,   299,   167,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,   383,   393,   295,   411,   288,   295,  -833,
     313,   378,   314,   350,   495,    30,   468,   497,   468,   289,
      44,   184,  -833,   477,   547,   549,    13,  -833,   553,  -833,
    2434,    83,   195,   335,   361,   563,   529,   431,    33,   379,
     622,  -833,   327,   295,   414,   641,  -833,  -833,  -833,    24,
    -833,  -833,   453,  -833,  -833,  -833,  -833,  -833,   666,  -833,
     668,  1358,  1358,  -833,  -833,   667,   -96,  -833,  -833,  -833,
    -833,   693,  1358,  1358,  1358,  -833,  -833,  -833,   645,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,   451,
     480,   488,   506,   525,   537,   548,   565,   568,   572,   587,
     590,   592,   608,   669,   676,   683,   687,   689,   698,   702,
     740,  1358,  2723,    26,  -833,   476,    17,    19,    22,     3,
    -139,   502,  -833,  -833,   671,  -833,  -833,   681,   713,  -833,
    -833,   402,   837,   471,   883,   259,   484,   960,   718,  -833,
    -833,  2483,  1039,   912,   852,  1053,  -833,   919,    34,   859,
    1061,  1041,  -833,   122,  -136,    13,  1063,  1065,   -77,   107,
    2804,  2804,  -833,  1066,  1358,  1358,  1207,  1207,  -833,  1358,
    2317,   -58,   901,  1358,   216,  1358,  1358,   775,  1358,  1358,
    1358,  1358,  1358,  1358,  1358,  1358,  1358,  1358,   866,   867,
     870,   871,  1358,  1358,  1121,  -833,  1358,  1358,  1358,  1358,
    1358,   117,   873,   717,  1358,   739,  1358,  1358,  1358,  1358,
    1358,  1358,  1358,  1358,  1358,  1358,  1098,  -833,    13,  1358,
    1099,  1118,   194,   895,   231,  1120,    13,  -833,  -833,  -833,
     -67,  -833,    13,  1006,   986,  -833,  1125,  -833,  -833,  1126,
    1127,  1149,  -833,  1150,  1151,  1152,  2483,  1153,   985,  1156,
    1157,  1158,  -833,  -833,  -833,   937,   937,   937,   937,   937,
    -833,   937,  -833,   938,   937,   937,   937,  1116,  -833,  1116,
    -833,   937,   937,   937,   954,  1116,   937,  1116,  -833,  -833,
    -833,  -833,   974,   997,  -833,   483,  -133,  1221,  1235,  1123,
    1236,  1124,  1038,  1264,   157,  -833,  1358,  1128,    13,  -142,
     414,  -833,  1265,  1266,   212,  1265,   376,  -833,    86,  -833,
    1044,  2804,  2338,   211,  -833,  1358,  1358,  1045,   187,  -833,
    -833,  -833,  1645,   869,   494,   582,  1052,  1666,  1708,  1729,
    1750,  1771,  1807,  1834,  1855,  1413,  1434,  1488,  -833,  -833,
    -833,  -833,  1876,  1575,  -833,  1007,  1169,  1684,  2044,  2044,
    -833,    65,  -833,   901,  1358,  1358,  1054,  1358,  2760,  1055,
    1056,  1057,   999,  1148,   946,  1088,   741,   711,   711,  1254,
    1254,  1254,  1254,  -833,  -833,  -142,  -833,  -833,  1058,   275,
    1165,  1170,  1171,  -833,  -833,  -833,     1,   124,   502,   986,
     986,  1173,  1155,    13,  -833,  1174,  -833,   260,  2483,  -833,
    -833,  -833,  -833,  -833,  2483,  1286,  1122,  1129,  -833,  1292,
    -833,  -833,  -833,  -833,  -833,  -833,  1294,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  1294,  -833,  -833,  -833,
    1295,  1297,  1160,  1077,  1358,  1136,    82,    98,  1188,  1328,
     162,  1329,  1338,  1201,  -833,  -833,  1340,   343,  -833,   671,
    2804,  1296,  1218,  -142,  -833,  -833,  1325,   -85,  -833,   237,
    1130,  -833,   -85,  1130,  1204,  1358,  -833,  1358,  -833,  1358,
    2401,  2359,  -833,  1358,  1358,  -833,  1358,  2380,  1233,  1233,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  1358,
    1358,  1358,  -833,  1358,  -833,  -833,  1358,  1131,  2044,  2044,
     901,  2782,  1358,   901,   901,   901,  1132,  1250,  1350,   194,
    1259,  1259,  1259,  1358,  1352,  1364,  1128,  -833,  -833,    13,
    1358,   -99,    13,  1142,  1249,  1251,  1144,  -833,  2445,  -833,
    -833,  1369,  1370,   351,   291,   524,   291,   291,  -833,   390,
     291,   291,   291,   524,   524,   291,   291,   291,   400,   524,
     291,   524,  1147,  1154,  1316,  1358,  2804,  1159,  -833,  1161,
    1163,  1164,  1167,   407,  -833,  1187,    82,  1376,   263,  1189,
      82,   310,  1241,  1381,   128,  1383,  1168,  1271,   297,  1172,
    1175,  1277,  1176,   409,  -833,  1396,   901,  1397,  1358,  -833,
    -833,  1040,  1283,  1401,  -833,  -833,  1402,  1102,    89,  -833,
      89,  -833,  -833,  2804,  2673,  -833,  1358,  1624,    54,  1897,
    1358,  1358,  1179,  1180,  1918,  1596,  1939,  1960,  1181,  -833,
    1358,  1183,  1358,   800,  1184,  1185,  1186,  -833,  1365,  1310,
    -833,  -833,  1300,  1194,  1225,  1239,  2804,  1410,     6,  1218,
    -833,  2804,  1358,  1240,  -833,  -833,   -99,  1358,  1242,  1243,
    1464,  1331,  1268,  1269,  1279,  1478,  1517,  1298,  1518,    39,
    -833,  -833,  1403,  1405,  2445,  -833,  -833,  -833,  1516,  -833,
    -833,  1359,  1522,  -833,  1524,  -833,  -833,  -833,  1303,  1981,
      82,  1527,  1528,  1529,  1530,  -833,  1553,  1333,   419,  1356,
    1366,    82,  1357,   432,  1422,    82,  1589,   336,   343,  -833,
     268,  1358,  1404,  1406,  1407,  1625,  1625,  1457,  1464,   230,
     343,  2483,  -833,   239,  1399,  -833,   348,  -833,  2804,  1444,
    1611,  -833,  -833,  2804,   437,  -833,  -833,  -833,  -833,  2804,
    1358,  -833,  -833,  1358,  -833,  2002,  2422,  -833,  -833,  -833,
    1358,  -833,  -833,  -833,  1474,  -833,   800,  -833,  -833,  -833,
    1358,  1358,  1128,  -833,  1712,  1712,  1712,  1358,  1358,  1714,
    -833,  2804,  1625,  -833,  2025,  1743,  1764,  -833,   439,  -833,
    1783,  1358,  1797,  1765,   258,  1358,  -833,  -833,  -833,  -833,
    -833,  -833,  1578,  1580,  1581,  1358,  -833,  -833,  1582,  1804,
    -833,   524,  -833,   524,   524,  1358,  -833,   446,  1583,  1584,
    1585,  1586,  -833,    82,  -833,    82,  1587,   485,    82,  -833,
    1590,   522,  1612,  1648,    82,   526,  1614,  1695,  1721,  1616,
    2065,  1743,  1625,  1625,  -833,   531,   533,  1764,   558,   249,
    -833,  -833,  -833,  -833,  -833,  -833,  1397,  1358,  1358,  1265,
    1270,  -833,  1332,  1617,  2086,  2107,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  2128,  -833,  2694,   357,
    2804,  1218,  -833,   560,   562,   569,  2804,  2804,  1894,   577,
    2001,  -833,   579,  -833,   581,  -833,  2030,   584,  2149,   605,
    1816,  1830,  2123,  -833,  2170,  2017,  2046,  2060,  2191,  -833,
    -833,  2212,  -833,  -833,  -833,  -833,  2285,   609,   613,    82,
    -833,   616,    82,  -833,    82,  2063,   618,   230,  1358,  2064,
    2067,  1464,  -833,   642,   652,   654,  -833,  2288,  -833,   656,
    -833,   120,  2291,  2245,  2445,  -833,  2804,  2804,  2068,  -833,
    2804,  -833,  2804,  1102,  -833,  -833,  -833,  -833,  2144,  1358,
    -833,  2197,  -833,  2297,  -833,  -833,  1358,  -833,  2109,  2152,
    2300,  -833,  2301,  -833,  -833,  2294,   583,  -833,  2448,  1358,
    1358,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  2078,  -833,
    -833,   672,  -833,   679,   684,    82,  -833,   249,  -833,  2235,
    1743,  1764,   690,  2304,  -833,  -833,  -833,  -833,  -833,  2450,
     -37,   189,   692,  -833,  2694,   392,  2340,  -833,  2804,  -833,
    2454,  -833,  -833,  2231,  -833,  -833,  2232,  2256,  2296,  -833,
    -833,  -833,  -833,   694,  -833,   699,   703,  -833,  2457,  -833,
    2458,  2461,  2239,  2241,  -833,  -833,  2307,  2309,  1625,  -833,
    2246,  -833,  -833,   730,  -833,  -833,  2321,  -833,   709,  -833,
    -833,  2470,  2471,  2348,  2349,  2249,  2476,  -833,  -833,  2477,
    2478,  2476,  2257,  2259,  -833,  -833,  -833,   712,   738,  2262,
     772,  2263,  2333,  -833,  2491,  2492,  2476,  2476,  -833,  2341,
    2496,   330,  -833,  2270,   782,   784,   331,  2500,   786,  -833,
    -833,   -47,  2396,   172,   -51,  2476,  -833,  -833,  2438,  2315,
    -833,  2341,  -833,  -833,   478,  -833,  -833,  -833,   391,   396,
     811,   331,   331,  2389,  -833,  -833,  -833,  -833,  -833,  -833,
     -36,  -833,  -833,  -833,   205,  -833,  2334,  -833,  -833,  -833,
    -833,   331,   129,  2374,  2375,  2382,  2383,  2512,  2516,  -833,
    -833
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -833,  2462,   -53,  -432,  -833,  -833,  -833,  -833,  2015,  2327,
    -833,  -141,  -104,  -833,  -833,  -771,  -833,  -833,  -534,  -833,
    1664,  -641,  -833,  -833,  -733,  -833,  -833,  2284,  -143,   -18,
    2279,  -244,  2059,  -833,  -833,   621,  -833,  -833,  -833,  1864,
    2003,   508,   266,  -833,  -833,  -833,  2466,  2213,  -833,  -833,
    -589,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -462,   545,  2497,  2355,  -833,  2053,  -833,  1588,  -334,  -833,
    -833,  -833,  -833,  -833,   250,  -833,  -833,  -833,  1610,  -833,
    1429,  -833,  1824,  1813,  -817,  -832,  -439,  -570,  -714,  -833,
    -555,   602,   315,   271,  -442,  -263,  2098,  -602,  -833,  -833,
    -833,  2460
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -466
static const yytype_int16 yytable[] =
{
     142,   492,   729,   856,   694,   252,   148,   718,   253,   573,
     574,   723,   669,   433,  -300,   579,   148,   581,   422,   943,
    -302,   543,  -301,  1122,   858,   225,   788,  1128,   790,   255,
     629,    49,   631,    81,   344,   345,   173,   321,   190,   191,
     949,  1050,   672,   807,   808,   809,   810,    93,  1147,   196,
     197,   198,    44,   328,   326,   200,   465,   419,   622,   899,
      33,   347,   246,   632,   226,   227,   228,   229,   230,   231,
     232,   524,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   588,   256,   420,   224,   256,
     673,   332,   186,   466,   648,   811,   226,   227,   228,   229,
     230,   231,   232,  1148,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   967,    45,   944,
     945,   827,   185,   380,   248,  1018,   157,   158,    94,   193,
     194,   254,   837,  1153,  1129,   381,   841,   860,  1051,   346,
    1019,   159,   341,   623,    82,  1123,   342,   174,   322,   333,
     348,   352,   354,   355,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   557,   756,   329,   757,   372,
     373,   559,    10,   375,   376,   377,   378,   379,  1045,   551,
      50,   388,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   491,  1046,   494,   142,   226,   227,   228,
     229,   230,   231,   232,   525,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   774,    96,
      97,    98,    99,   100,   101,   484,   544,  1012,   161,   149,
     405,   789,   622,   102,   103,   160,    57,  -300,    34,   149,
     474,   104,   527,  -302,   927,  -301,   928,   251,   891,   931,
     971,   536,   186,  1055,   249,   936,   382,   812,   813,   814,
    1154,   821,   276,   823,   824,   815,   539,   162,   349,   474,
    -465,  1125,   107,   480,   163,   335,   108,   863,   225,   109,
     110,   762,   763,   475,   164,   503,   951,   595,    70,  1149,
     410,    67,   500,   501,   589,   590,   591,   592,    91,    59,
     507,   537,    58,   498,   499,   670,   411,   954,   676,    92,
     483,  -202,   475,   546,   495,   246,  1126,   755,   326,   911,
     326,   553,   864,   180,   596,  1075,   277,    47,   165,   846,
     177,   528,   529,   333,   531,  1008,  1052,  1127,    54,   224,
    1001,   350,   474,  1003,  1150,  1004,   166,   181,  1111,  1118,
    -202,   599,   545,    74,   728,   114,    68,   554,   226,   227,
     228,   229,   230,   231,   232,   847,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   620,
    1053,    10,   476,   477,   412,   475,    62,   167,   600,   651,
     952,    60,   654,   655,   656,   178,    63,   351,   605,  -465,
    1112,  1112,    69,   912,   606,   555,   490,   953,   346,    64,
     733,   586,    95,   848,    66,   504,  1043,   734,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     607,   179,   141,   608,   633,   913,   634,   556,    75,  1137,
     637,   638,   720,   639,  1141,   849,   609,   269,   415,   256,
    1113,  1113,    76,   610,   625,   626,   644,   645,   646,   270,
     647,  1114,  1114,    77,   272,   742,   867,   699,   862,   653,
      96,    97,    98,    99,   100,   101,    71,   278,   611,   721,
     666,    72,   700,    73,   102,   103,    78,   671,    80,   724,
      89,   462,   104,   105,   226,   227,   228,   229,   230,   231,
     232,   106,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   843,   273,    35,  1106,  1138,
     612,    36,   709,   107,  1142,   958,   725,   108,   274,   279,
     109,   110,    83,  1139,   463,    10,  1131,  1132,  1143,  1135,
     145,   280,  1056,    48,   111,   968,   155,    55,   112,  1140,
     168,   257,   844,   169,  1144,   746,   170,   464,   748,   171,
     493,    37,   172,    84,   753,  1151,   868,  1057,   697,   698,
      85,   175,   113,   759,    86,   969,  1136,   765,   766,   701,
     702,    87,   226,   227,   228,   229,   230,   231,   232,   776,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   258,   452,    38,   114,   703,   704,   791,
     457,  -170,   459,    83,   794,   176,   259,   705,   704,  1034,
    1035,    39,    40,   115,   715,   716,   739,   740,   260,   181,
     116,   117,  1090,   118,   183,    41,   834,   716,    96,    97,
      98,    99,   100,   101,    84,   187,   261,  1104,  1105,   839,
     716,   146,   102,   103,   871,   872,   905,   906,   262,   188,
     104,   189,   147,   922,   716,    49,  1130,   202,   850,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   107,   195,   141,   250,   108,   203,   874,   109,   110,
     875,   265,   930,   716,   204,   566,   567,   886,   570,   571,
     572,   282,   508,   267,   575,   576,   577,   888,   890,   580,
     384,   385,   205,   386,   896,   897,   387,   241,   242,   243,
     244,   245,    96,    97,    98,    99,   100,   101,   908,   933,
     716,   206,   914,   937,   740,   268,   102,   103,   946,   947,
     948,   947,   918,   207,   104,   239,   240,   241,   242,   243,
     244,   245,   921,   389,   208,   390,  1077,  1078,    96,    97,
      98,    99,   100,   101,   114,   950,   906,   972,   973,   974,
     973,   209,   102,   103,   210,   107,   975,   973,   211,   108,
     104,   356,   109,   110,   977,   947,   979,   980,   981,   982,
     509,   984,   985,   212,   956,   957,   213,   960,   214,   962,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   107,   987,   988,   215,   108,   999,   716,   109,   110,
    1000,   716,   199,  1002,   716,  1006,   716,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,  1013,
     980,   141,    96,    97,    98,    99,   100,   101,   114,  1014,
     947,  1015,   947,  1017,   982,  1009,   102,   103,   441,   442,
     443,   444,   271,   445,   104,   216,   447,   448,   449,  1040,
     716,   391,   217,   453,   454,   455,  1041,   716,   458,   218,
     753,  1042,   716,   219,   114,   220,  1024,  1047,   906,  1054,
     872,  1065,   716,  1028,   221,   107,  1066,   980,   222,   108,
    1067,   982,   109,   110,  1080,  1081,  1037,  1038,   275,  1093,
    1094,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,  1095,  1096,   392,   223,   506,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,  1098,
    1094,   141,    96,    97,    98,    99,   100,   101,   114,  1116,
    1094,  1117,  1094,  1120,  1121,   281,   102,   103,   227,   228,
     229,   230,   231,   232,   104,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,  1145,  1094,
     547,   548,   316,    96,    97,    98,    99,   100,   101,   664,
     665,   894,   895,   317,   318,   107,   319,   102,   103,   108,
     320,   323,   109,   110,   324,   104,   330,   325,   331,   337,
      10,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   368,   369,   141,   107,   370,   371,   383,
     108,   404,   407,   109,   110,    96,    97,    98,    99,   100,
     101,   238,   239,   240,   241,   242,   243,   244,   245,   102,
     103,   409,   414,   416,   747,   423,   424,   104,   426,   427,
     428,   226,   227,   228,   229,   230,   231,   232,   114,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   429,   430,   431,   432,   434,   435,   107,   436,
     437,   438,   108,   439,   446,   109,   110,   450,    10,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   114,
     456,   228,   229,   230,   231,   232,   752,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     460,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   461,   467,   141,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   468,   470,
     472,   114,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   469,   471,   141,   473,   486,   488,
     481,   496,   502,    96,    97,    98,    99,   100,   101,   510,
     530,   533,   534,   535,   245,   540,   538,   102,   103,   560,
     541,   542,   549,   552,   561,   104,   550,   563,   568,   584,
     582,   562,   583,   585,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   107,   587,   141,   597,
     108,   598,   601,   109,   110,    96,    97,    98,    99,   100,
     101,   602,   603,   604,   618,   621,   617,   622,   374,   102,
     103,   641,   658,   660,   959,   667,   627,   104,   649,   657,
     662,    96,    97,    98,    99,   100,   101,   668,   677,   678,
     680,   679,   695,   696,   706,   102,   103,   708,   717,   719,
     722,   707,   726,   104,   727,   710,   730,   711,   107,   712,
     713,   732,   108,   714,   731,   109,   110,   737,   735,   741,
     743,   736,   738,   749,   750,   751,   767,   768,   773,   114,
     775,   777,   778,   779,   107,   780,   961,   781,   108,   783,
     784,   109,   110,   226,   227,   228,   229,   230,   231,   232,
     787,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   226,   227,   228,   229,   230,   231,
     232,   785,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   786,   792,   797,   795,   796,
     799,   114,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   800,   801,   141,   114,   226,   227,
     228,   229,   230,   231,   232,   802,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   803,
     804,   818,   806,   816,   805,   817,   820,   819,   822,   825,
     828,   829,   830,   831,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   832,   836,   141,   833,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   835,   838,   141,   226,   227,   228,   229,   230,
     231,   232,   842,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   226,   227,   228,   229,
     230,   231,   232,   840,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   866,   854,   869,
     851,   870,   852,   853,   226,   227,   228,   229,   230,   231,
     232,   519,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   226,   227,   228,   229,   230,
     231,   232,   520,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   226,   227,   228,   229,
     230,   231,   232,   857,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   229,   230,   231,
     232,   887,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   892,   521,   898,   226,   227,
     228,   229,   230,   231,   232,   760,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   226,
     227,   228,   229,   230,   231,   232,   901,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     226,   227,   228,   229,   230,   231,   232,   903,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   226,   227,   228,   229,   230,   231,   232,   907,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   909,   523,   915,   910,   916,   917,   920,   919,
     923,   924,   925,   929,   926,   939,   932,   226,   227,   228,
     229,   230,   231,   232,   770,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   934,   935,
     938,   940,   941,   963,   226,   227,   228,   229,   230,   231,
     232,   761,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   226,   227,   228,   229,   230,
     231,   232,   505,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   226,   227,   228,   229,
     230,   231,   232,   511,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   226,   227,   228,
     229,   230,   231,   232,   976,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   226,   227,
     228,   229,   230,   231,   232,   512,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   226,
     227,   228,   229,   230,   231,   232,   513,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     226,   227,   228,   229,   230,   231,   232,   514,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   226,   227,   228,   229,   230,   231,   232,   515,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   226,   227,   228,   229,   230,   231,   232,   978,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   983,   516,   226,   227,   228,   229,   230,
     231,   232,   989,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   990,  -466,  -466,  -466,
    -466,   517,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   226,   227,   228,   229,   230,
     231,   232,   518,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   226,   227,   228,   229,
     230,   231,   232,   522,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   226,   227,   228,
     229,   230,   231,   232,   764,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   226,   227,
     228,   229,   230,   231,   232,   769,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   226,
     227,   228,   229,   230,   231,   232,   771,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     226,   227,   228,   229,   230,   231,   232,   772,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   226,   227,   228,   229,   230,   231,   232,   826,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   226,   227,   228,   229,   230,   231,   232,   876,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   991,   993,   226,   227,   228,   229,   230,
     231,   232,   900,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   226,   227,   228,   229,
     230,   231,   232,   994,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   995,   998,  1005,
    1010,  1016,   942,  1011,  1020,  1021,   623,  1023,  1025,  1033,
    1027,  1029,  1030,  1031,  1032,  1039,   226,   227,   228,   229,
     230,   231,   232,   964,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   226,   227,   228,
     229,   230,   231,   232,   965,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   226,   227,
     228,   229,   230,   231,   232,   966,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   226,
     227,   228,   229,   230,   231,   232,   986,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     226,   227,   228,   229,   230,   231,   232,   992,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   226,   227,   228,   229,   230,   231,   232,   996,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   226,   227,   228,   229,   230,   231,   232,   997,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,  1036,  1048,  1049,  1058,  1060,  1061,  1062,
    1068,  1069,  1044,   681,  1070,  1071,     1,  1072,  1073,     2,
    1074,  1079,  1076,  1082,  1083,  1084,  1085,   947,   640,  1086,
    1088,  1089,   682,  1063,  1091,   683,  1092,   684,  1097,  1099,
     685,     3,  1100,   635,  1102,  1103,  1115,   877,   878,  1107,
     686,  1110,   879,  1119,   880,  1124,   687,   688,  1122,  1133,
    1146,  1152,     4,     5,   199,  1155,  1156,  1159,   497,  1157,
    1158,  1160,   156,  1064,   643,   881,   882,   343,   883,   689,
     955,   283,   284,   406,   285,   418,   286,   287,   616,   636,
     793,   184,   661,   485,   336,    90,   630,  1007,   288,     6,
    1134,  1022,   845,   861,   578,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   690,     0,     0,   289,   290,
     291,   292,     0,     0,   293,     0,     0,     0,   294,     0,
       0,     0,     0,     7,   691,     0,     0,     0,     0,     8,
     692,     0,     0,   295,     0,     0,     0,     0,     0,     0,
     296,     0,     9,    10,     0,   297,     0,     0,     0,     0,
       0,     0,   298,     0,     0,   299,    11,   300,   301,    12,
       0,   884,   885,     0,    13,     0,     0,     0,     0,     0,
       0,   302,   693,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,   304,     0,   305,   306,     0,     0,     0,     0,   307,
       0,   308,     0,     0,     0,     0,   309,   310,     0,     0,
       0,   311,     0,     0,     0,     0,   312,     0,   313,     0,
       0,     0,   314,   226,   227,   228,   229,   230,   231,   232,
       0,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   226,   227,   228,   229,   230,   231,
     232,     0,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   225,     0,     0,     0,
       0,     0,   863,   226,   227,   228,   229,   230,   231,   232,
       0,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   246,     0,   758,     0,     0,     0,     0,
     226,   227,   228,   229,   230,   231,   232,   864,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   226,   227,   228,   229,   230,   231,   232,   532,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   226,   227,   228,   229,   230,   231,
     232,   652,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245
};

static const yytype_int16 yycheck[] =
{
      53,   335,   604,   736,   559,   148,     3,   596,   149,   451,
     452,   600,   546,   276,     3,   457,     3,   459,   262,   851,
       3,    20,     3,    70,   738,     3,    20,    78,   669,   168,
     492,     8,   494,     3,    92,    93,     3,     3,    91,    92,
     857,    78,   141,     4,     5,     6,     7,     3,    84,   102,
     103,   104,   113,   189,   196,   108,   189,   124,   143,   792,
     179,   202,    40,   495,    10,    11,    12,    13,    14,    15,
      16,     6,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     3,   228,   154,   141,   228,
     189,   168,   228,   226,   526,    56,    10,    11,    12,    13,
      14,    15,    16,   139,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   888,   179,   852,
     853,   710,    98,     6,    98,     5,    43,    44,    84,   225,
     226,   149,   721,     4,   185,    18,   725,   739,   175,   197,
      20,    58,   195,   228,   114,   192,   199,   114,   114,   226,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   428,   628,   185,   630,   222,
     223,   434,   169,   226,   227,   228,   229,   230,  1010,   423,
     157,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   334,  1011,   336,   249,    10,    11,    12,
      13,    14,    15,    16,   139,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   650,     3,
       4,     5,     6,     7,     8,   329,   225,   941,    33,   226,
     248,   225,   143,    17,    18,   152,     3,   226,   179,   226,
     112,    25,   383,   226,   833,   226,   835,   225,   782,   838,
     891,   392,   228,  1024,   228,   844,   139,   218,   219,   220,
     131,   703,     3,   705,   706,   226,   409,    72,    52,   112,
      40,    99,    56,   326,    79,   168,    60,    38,     3,    63,
      64,   227,   228,   155,    89,    98,    37,   189,    38,    84,
      96,     3,   345,   346,   212,   213,   214,   215,     9,     0,
     353,   405,    69,    92,    93,   549,   112,   862,   552,    20,
     328,   189,   155,   417,   228,    40,   144,   228,   196,    61,
     196,    61,    83,    73,   226,  1058,    67,   179,   133,    61,
       3,   384,   385,   226,   387,   937,   147,   165,   179,   392,
     929,   125,   112,   932,   139,   934,   151,   225,    18,    18,
     228,   189,   228,     3,   226,   139,    68,    97,    10,    11,
      12,    13,    14,    15,    16,    97,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   483,
     191,   169,   225,   226,   190,   155,     3,   192,   226,   530,
     141,   224,   533,   534,   535,    68,     3,   181,    55,   169,
      70,    70,   114,   145,    61,   145,   194,   158,   197,   114,
     113,   464,   228,   145,     3,   228,  1005,   120,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      97,   114,   226,   100,   497,   187,   499,   187,    98,    58,
     503,   504,   189,   506,    58,   187,   113,    55,   227,   228,
     130,   130,   112,   120,   227,   228,   519,   520,   521,    67,
     523,   141,   141,   123,     3,   616,   128,   186,   741,   532,
       3,     4,     5,     6,     7,     8,   173,     3,   145,   226,
     543,   113,   201,   179,    17,    18,   146,   550,     3,   189,
       3,    18,    25,    26,    10,    11,    12,    13,    14,    15,
      16,    34,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   189,    55,    69,  1098,   138,
     187,    73,   585,    56,   138,   869,   226,    60,    67,    55,
      63,    64,    74,   152,    61,   169,  1116,  1117,   152,    71,
       3,    67,   160,     8,    77,   198,     3,    12,    81,   168,
     225,    59,   226,   202,   168,   618,     3,    84,   621,    40,
     194,   113,   141,   105,   627,  1145,   228,   185,   227,   228,
     112,   202,   105,   636,   116,   228,   108,   640,   641,    65,
      66,   123,    10,    11,    12,    13,    14,    15,    16,   652,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   111,   299,   157,   139,   227,   228,   672,
     305,   119,   307,    74,   677,     3,   124,   227,   228,    46,
      47,   173,   174,   156,   227,   228,   227,   228,   136,   225,
     163,   164,  1081,   166,     3,   187,   227,   228,     3,     4,
       5,     6,     7,     8,   105,   202,   154,  1096,  1097,   227,
     228,   112,    17,    18,   227,   228,   227,   228,   166,     3,
      25,     3,   123,   227,   228,     8,  1115,   226,   731,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    56,     9,   226,   228,    60,   226,   760,    63,    64,
     763,    40,   227,   228,   226,   444,   445,   770,   447,   448,
     449,     3,   228,    42,   453,   454,   455,   780,   781,   458,
      13,    14,   226,    16,   787,   788,    19,    26,    27,    28,
      29,    30,     3,     4,     5,     6,     7,     8,   801,   227,
     228,   226,   805,   227,   228,    42,    17,    18,   227,   228,
     227,   228,   815,   226,    25,    24,    25,    26,    27,    28,
      29,    30,   825,    34,   226,    36,    46,    47,     3,     4,
       5,     6,     7,     8,   139,   227,   228,   227,   228,   227,
     228,   226,    17,    18,   226,    56,   227,   228,   226,    60,
      25,    26,    63,    64,   227,   228,   227,   228,   227,   228,
     228,   227,   228,   226,   867,   868,   226,   870,   226,   872,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    56,   227,   228,   226,    60,   227,   228,    63,    64,
     227,   228,   197,   227,   228,   227,   228,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   227,
     228,   226,     3,     4,     5,     6,     7,     8,   139,   227,
     228,   227,   228,   227,   228,   938,    17,    18,   286,   287,
     288,   289,    55,   291,    25,   226,   294,   295,   296,   227,
     228,   162,   226,   301,   302,   303,   227,   228,   306,   226,
     963,   227,   228,   226,   139,   226,   969,   227,   228,   227,
     228,   227,   228,   976,   226,    56,   227,   228,   226,    60,
     227,   228,    63,    64,   225,   226,   989,   990,    55,   227,
     228,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   225,   226,   226,   226,    98,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   227,
     228,   226,     3,     4,     5,     6,     7,     8,   139,   227,
     228,   227,   228,   227,   228,    55,    17,    18,    11,    12,
      13,    14,    15,    16,    25,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   227,   228,
     419,   420,     3,     3,     4,     5,     6,     7,     8,   541,
     542,   785,   786,   141,   202,    56,     3,    17,    18,    60,
     141,   202,    63,    64,     3,    25,     3,    26,     3,     3,
     169,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   227,   227,   226,    56,   227,   227,   226,
      60,     3,     3,    63,    64,     3,     4,     5,     6,     7,
       8,    23,    24,    25,    26,    27,    28,    29,    30,    17,
      18,     3,   227,     3,    84,   119,   140,    25,     3,     3,
       3,    10,    11,    12,    13,    14,    15,    16,   139,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     3,     3,     3,     3,     3,   172,    56,     3,
       3,     3,    60,   226,   226,    63,    64,    51,   169,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   139,
     226,    12,    13,    14,    15,    16,    84,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     226,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   226,     3,   226,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,     3,
     202,   139,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   141,   141,   226,     3,     3,     3,
     142,   227,   227,     3,     4,     5,     6,     7,     8,   227,
     226,   226,   226,   226,    30,   120,   228,    17,    18,     3,
     120,   120,   119,   119,   172,    25,   141,     5,     4,   139,
       5,   172,     5,   226,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    56,   191,   226,   141,
      60,     3,     3,    63,    64,     3,     4,     5,     6,     7,
       8,     3,   141,     3,   126,    20,    50,   143,   227,    17,
      18,   118,   102,     3,    84,     3,   226,    25,   227,   227,
     101,     3,     4,     5,     6,     7,     8,     3,   226,   120,
     226,   120,     3,     3,   227,    17,    18,    61,   191,     3,
     191,   227,   141,    25,     3,   226,     3,   226,    56,   226,
     226,   120,    60,   226,   226,    63,    64,   120,   226,     3,
       3,   226,   226,   120,     3,     3,   227,   227,   227,   139,
     227,   227,   227,   227,    56,    50,    84,   107,    60,   119,
     226,    63,    64,    10,    11,    12,    13,    14,    15,    16,
      20,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   226,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   226,   226,     3,   226,   226,
     139,   139,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   226,   226,   226,   139,    10,    11,
      12,    13,    14,    15,    16,   226,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    41,
       3,     5,     4,   120,   226,   120,     4,   168,     4,   226,
       3,     3,     3,     3,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,     3,   191,   226,   226,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   226,   226,   226,    10,    11,    12,    13,    14,
      15,    16,     3,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   191,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   228,     3,   185,
     226,    20,   226,   226,    10,    11,    12,    13,    14,    15,
      16,   228,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   228,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   226,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    13,    14,    15,
      16,   227,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     3,   228,     3,    10,    11,
      12,    13,    14,    15,    16,   101,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,     5,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     5,   228,   226,    40,   226,   226,     4,   227,
     227,   227,   227,   226,   228,   120,   226,    10,    11,    12,
      13,    14,    15,    16,   228,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   226,   191,
     226,   120,   226,   226,    10,    11,    12,    13,    14,    15,
      16,   227,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   227,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   227,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    20,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   227,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   227,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   227,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   227,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    18,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     3,   227,    10,    11,    12,    13,    14,
      15,    16,   226,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   226,    13,    14,    15,
      16,   227,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   227,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   227,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   227,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   227,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   227,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   227,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   227,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   227,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   120,   227,    10,    11,    12,    13,    14,
      15,    16,   227,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   227,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   227,     3,   226,
     226,     3,   227,   226,     3,    50,   228,   153,   101,     5,
       3,   192,   150,     3,     3,   227,    10,    11,    12,    13,
      14,    15,    16,   227,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   227,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   227,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   227,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   227,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   227,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   227,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     5,   150,     5,   116,     3,   227,   227,
       3,     3,   227,    18,     3,   226,    32,   226,   161,    35,
     161,   150,   226,     3,     3,   127,   127,   228,    98,     3,
       3,     3,    37,   227,   227,    40,   227,    42,   226,   226,
      45,    57,   159,    92,     3,     3,   226,    75,    76,   158,
      55,     5,    80,     3,    82,   109,    61,    62,    70,   194,
     121,   177,    78,    79,   197,   141,   141,     5,   180,   137,
     137,     5,    60,   227,   509,   103,   104,   200,   106,    84,
     866,    48,    49,   249,    51,   256,    53,    54,   479,   180,
     676,    75,   539,   330,   189,    48,   493,   937,    65,   115,
    1121,   963,   728,   740,   456,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    85,    86,
      87,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,   149,   139,    -1,    -1,    -1,    -1,   155,
     145,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,   168,   169,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,   132,   182,   134,   135,   185,
      -1,   199,   200,    -1,   190,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167,   168,    -1,   170,   171,    -1,    -1,    -1,    -1,   176,
      -1,   178,    -1,    -1,    -1,    -1,   183,   184,    -1,    -1,
      -1,   188,    -1,    -1,    -1,    -1,   193,    -1,   195,    -1,
      -1,    -1,   199,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    38,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    92,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    83,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    10,    11,    12,    13,    14,    15,    16,    39,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    10,    11,    12,    13,    14,    15,
      16,    39,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    35,    57,    78,    79,   115,   149,   155,   168,
     169,   182,   185,   190,   230,   239,   240,   273,   277,   278,
     281,   282,   285,   286,   287,   288,   298,   299,   302,   304,
     305,   306,   328,   179,   179,    69,    73,   113,   157,   173,
     174,   187,   310,   274,   113,   179,   290,   179,   290,     8,
     157,   329,   330,   254,   179,   290,   300,     3,    69,     0,
     224,   284,     3,     3,   114,   303,     3,     3,    68,   114,
     303,   173,   113,   179,     3,    98,   112,   123,   146,   275,
       3,     3,   114,    74,   105,   112,   116,   123,   291,     3,
     291,     9,    20,     3,    84,   228,     3,     4,     5,     6,
       7,     8,    17,    18,    25,    26,    34,    56,    60,    63,
      64,    77,    81,   105,   139,   156,   163,   164,   166,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   226,   231,   255,   256,     3,   112,   123,     3,   226,
     258,   259,   260,   262,   272,     3,   230,    43,    44,    58,
     152,    33,    72,    79,    89,   133,   151,   192,   225,   202,
       3,    40,   141,     3,   114,   202,     3,     3,    68,   114,
     303,   225,   276,     3,   275,    98,   228,   202,     3,     3,
     231,   231,   330,   225,   226,     9,   231,   231,   231,   197,
     231,   238,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   231,     3,    10,    11,    12,    13,
      14,    15,    16,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    40,   257,    98,   228,
     228,   225,   257,   240,   258,   168,   228,    59,   111,   124,
     136,   154,   166,   263,   265,    40,   261,    42,    42,    55,
      67,    55,     3,    55,    67,    55,     3,    67,     3,    55,
      67,    55,     3,    48,    49,    51,    53,    54,    65,    85,
      86,    87,    88,    91,    95,   110,   117,   122,   129,   132,
     134,   135,   148,   167,   168,   170,   171,   176,   178,   183,
     184,   188,   193,   195,   199,   324,     3,   141,   202,     3,
     141,     3,   114,   202,     3,    26,   196,   241,   189,   258,
       3,     3,   168,   226,   292,   168,   292,     3,   231,   232,
     233,   231,   231,   238,    92,    93,   197,   240,   231,    52,
     125,   181,   231,   236,   231,   231,    26,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   227,   227,
     227,   227,   231,   231,   227,   231,   231,   231,   231,   231,
       6,    18,   139,   226,    13,    14,    16,    19,   231,    34,
      36,   162,   226,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,     3,   258,   256,     3,   283,     3,
      96,   112,   190,   269,   227,   227,     3,   301,   259,   124,
     154,   266,   260,   119,   140,   264,     3,     3,     3,     3,
       3,     3,     3,   324,     3,   172,     3,     3,     3,   226,
     320,   320,   320,   320,   320,   320,   226,   320,   320,   320,
      51,   321,   321,   320,   320,   320,   226,   321,   320,   321,
     226,   226,    18,    61,    84,   189,   226,     3,     3,   141,
       3,   141,   202,     3,   112,   155,   225,   226,   326,   327,
     231,   142,   247,   258,   241,   276,     3,   297,     3,   293,
     194,   240,   297,   194,   240,   228,   227,   180,    92,    93,
     231,   231,   227,    98,   228,   227,    98,   231,   228,   228,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   228,
     228,   228,   227,   228,     6,   139,   234,   240,   231,   231,
     226,   231,    39,   226,   226,   226,   240,   241,   228,   257,
     120,   120,   120,    20,   225,   228,   241,   264,   264,   119,
     141,   260,   119,    61,    97,   145,   187,   324,   319,   324,
       3,   172,   172,     5,   322,   323,   322,   322,     4,   325,
     322,   322,   322,   323,   323,   322,   322,   322,   325,   323,
     322,   323,     5,     5,   139,   226,   231,   191,     3,   212,
     213,   214,   215,   279,   280,   189,   226,   141,     3,   189,
     226,     3,     3,   141,     3,    55,    61,    97,   100,   113,
     120,   145,   187,   311,   312,   318,   261,    50,   126,   250,
     241,    20,   143,   228,   289,   227,   228,   226,   294,   289,
     294,   289,   232,   231,   231,    92,   180,   231,   231,   231,
      98,   118,   237,   237,   231,   231,   231,   231,   232,   227,
     235,   240,    39,   231,   240,   240,   240,   227,   102,   242,
       3,   269,   101,   270,   270,   270,   231,     3,     3,   247,
     260,   231,   141,   189,   267,   268,   260,   226,   120,   120,
     226,    18,    37,    40,    42,    45,    55,    61,    62,    84,
     120,   139,   145,   187,   319,     3,     3,   227,   228,   186,
     201,    65,    66,   227,   228,   227,   227,   227,    61,   231,
     226,   226,   226,   226,   226,   227,   228,   191,   279,     3,
     189,   226,   191,   279,   189,   226,   141,     3,   226,   326,
       3,   226,   120,   113,   120,   226,   226,   120,   226,   227,
     228,     3,   240,     3,   248,   249,   231,    84,   231,   120,
       3,     3,    84,   231,   296,   228,   289,   289,    92,   231,
     101,   227,   227,   228,   227,   231,   231,   227,   227,   227,
     228,   227,   227,   227,   232,   227,   231,   227,   227,   227,
      50,   107,   246,   119,   226,   226,   226,    20,    20,   225,
     250,   231,   226,   268,   231,   226,   226,     3,   317,   139,
     226,   226,   226,    41,     3,   226,     4,     4,     5,     6,
       7,    56,   218,   219,   220,   226,   120,   120,     5,   168,
       4,   323,     4,   323,   323,   226,   227,   279,     3,     3,
       3,     3,     3,   226,   227,   226,   191,   279,   226,   227,
     191,   279,     3,   189,   226,   311,    61,    97,   145,   187,
     231,   226,   226,   226,     3,   253,   253,   226,   317,   307,
     326,   312,   324,    38,    83,   244,   228,   128,   228,   185,
      20,   227,   228,   295,   231,   231,   227,    75,    76,    80,
      82,   103,   104,   106,   199,   200,   231,   227,   231,   243,
     231,   247,     3,   271,   271,   271,   231,   231,     3,   253,
     227,     3,   314,     3,   313,   227,   228,     5,   231,     5,
      40,    61,   145,   187,   231,   226,   226,   226,   231,   227,
       4,   231,   227,   227,   227,   227,   228,   279,   279,   226,
     227,   279,   226,   227,   226,   191,   279,   227,   226,   120,
     120,   226,   227,   314,   253,   253,   227,   228,   227,   313,
     227,    37,   141,   158,   319,   249,   231,   231,   297,    84,
     231,    84,   231,   226,   227,   227,   227,   244,   198,   228,
     245,   250,   227,   228,   227,   227,    20,   227,    18,   227,
     228,   227,   228,     3,   227,   228,   227,   227,   228,   226,
     226,   120,   227,   227,   227,   227,   227,   227,     3,   227,
     227,   279,   227,   279,   279,   226,   227,   307,   326,   231,
     226,   226,   317,   227,   227,   227,     3,   227,     5,    20,
       3,    50,   296,   153,   231,   101,   251,     3,   231,   192,
     150,     3,     3,     5,    46,    47,     5,   231,   231,   227,
     227,   227,   227,   279,   227,   314,   313,   227,   150,     5,
      78,   175,   147,   191,   227,   244,   160,   185,   116,   252,
       3,   227,   227,   227,   227,   227,   227,   227,     3,     3,
       3,   226,   226,   161,   161,   253,   226,    46,    47,   150,
     225,   226,     3,     3,   127,   127,     3,   315,     3,     3,
     315,   227,   227,   227,   228,   225,   226,   226,   227,   226,
     159,   316,     3,     3,   315,   315,   316,   158,   308,   309,
       5,    18,    70,   130,   141,   226,   227,   227,    18,     3,
     227,   228,    70,   192,   109,    99,   144,   165,    78,   185,
     315,   316,   316,   194,   309,    71,   108,    58,   138,   152,
     168,    58,   138,   152,   168,   227,   121,    84,   139,    84,
     139,   316,   177,     4,   131,   141,   141,   137,   137,     5,
       5
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
#line 332 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 338 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 339 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 341 "parser/evoparser.y"
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
#line 359 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 367 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 375 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 381 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 388 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 389 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 390 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 391 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 392 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 393 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 394 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 395 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 396 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 397 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 398 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 399 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 400 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 401 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 402 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 403 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 404 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 406 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 411 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 412 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 413 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 414 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 417 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 418 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 419 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 420 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 421 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 424 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 425 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 428 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 429 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 43:
#line 432 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 436 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 46:
#line 436 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 47:
#line 437 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 48:
#line 437 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 49:
#line 438 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 439 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 440 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 444 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 448 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 449 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 450 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 451 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 452 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 453 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 455 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 456 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 457 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 458 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 459 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 460 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 461 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 462 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 463 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 464 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 465 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 466 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 467 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 468 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 475 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 482 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 489 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 493 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 77:
#line 497 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 78:
#line 503 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 79:
#line 504 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 80:
#line 505 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 81:
#line 508 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 82:
#line 509 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 83:
#line 512 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 84:
#line 513 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 85:
#line 514 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 86:
#line 515 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 87:
#line 516 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 88:
#line 517 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 89:
#line 518 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 90:
#line 519 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 91:
#line 520 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 92:
#line 524 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 93:
#line 526 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 94:
#line 528 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 95:
#line 530 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 96:
#line 534 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 97:
#line 542 "parser/evoparser.y"
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
#line 552 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 99:
#line 553 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 100:
#line 556 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 101:
#line 557 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 102:
#line 561 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 569 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 104:
#line 577 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 105:
#line 588 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 106:
#line 597 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 107:
#line 602 "parser/evoparser.y"
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
#line 613 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 111:
#line 615 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 112:
#line 618 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 113:
#line 625 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 114:
#line 633 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 115:
#line 634 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 635 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 117:
#line 638 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 118:
#line 639 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 120:
#line 643 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 125:
#line 655 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 126:
#line 662 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 127:
#line 663 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 128:
#line 664 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 129:
#line 665 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 130:
#line 668 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 131:
#line 669 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 132:
#line 670 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 133:
#line 671 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 134:
#line 672 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 136:
#line 676 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 137:
#line 679 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 138:
#line 680 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 139:
#line 683 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 140:
#line 684 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 141:
#line 685 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 142:
#line 686 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 143:
#line 687 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 144:
#line 688 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 145:
#line 689 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 146:
#line 690 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 147:
#line 691 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 148:
#line 694 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 149:
#line 695 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 150:
#line 697 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 151:
#line 705 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 152:
#line 710 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 153:
#line 711 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 154:
#line 712 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 155:
#line 715 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 156:
#line 716 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 159:
#line 725 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 160:
#line 731 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 161:
#line 732 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 162:
#line 733 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 165:
#line 742 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 166:
#line 744 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 167:
#line 746 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 168:
#line 748 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 169:
#line 750 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 170:
#line 753 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 171:
#line 754 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 172:
#line 755 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 173:
#line 758 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 174:
#line 759 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 175:
#line 762 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 176:
#line 763 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 177:
#line 766 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 178:
#line 767 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 179:
#line 768 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 182:
#line 775 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 183:
#line 776 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 184:
#line 781 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 185:
#line 783 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 186:
#line 785 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 188:
#line 789 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 189:
#line 790 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 190:
#line 793 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 191:
#line 794 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 192:
#line 797 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 193:
#line 802 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 194:
#line 812 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 195:
#line 819 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 196:
#line 820 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 197:
#line 821 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 198:
#line 822 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 199:
#line 827 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 200:
#line 831 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 201:
#line 833 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 204:
#line 839 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 205:
#line 844 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 206:
#line 851 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 207:
#line 858 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 208:
#line 868 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 209:
#line 875 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 210:
#line 882 "parser/evoparser.y"
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
#line 892 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 212:
#line 900 "parser/evoparser.y"
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
#line 910 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 214:
#line 918 "parser/evoparser.y"
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
#line 927 "parser/evoparser.y"
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
#line 936 "parser/evoparser.y"
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
#line 946 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 218:
#line 954 "parser/evoparser.y"
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
#line 963 "parser/evoparser.y"
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
#line 972 "parser/evoparser.y"
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
#line 982 "parser/evoparser.y"
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
#line 991 "parser/evoparser.y"
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
#line 1003 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 224:
#line 1008 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 225:
#line 1013 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 226:
#line 1019 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 227:
#line 1026 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 228:
#line 1033 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 229:
#line 1040 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 230:
#line 1050 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 231:
#line 1057 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 232:
#line 1066 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 233:
#line 1073 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 234:
#line 1079 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 235:
#line 1087 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 236:
#line 1093 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 238:
#line 1101 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 239:
#line 1102 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 240:
#line 1103 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 241:
#line 1104 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 242:
#line 1109 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 243:
#line 1116 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 244:
#line 1125 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 245:
#line 1132 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 246:
#line 1138 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 247:
#line 1148 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 248:
#line 1152 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 249:
#line 1158 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 250:
#line 1164 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 251:
#line 1171 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 252:
#line 1177 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 253:
#line 1184 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 254:
#line 1190 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 255:
#line 1196 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 256:
#line 1202 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 257:
#line 1208 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 258:
#line 1214 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 259:
#line 1220 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        AlterTableAddColumn((yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].strval), (yyvsp[(7) - (7)].intval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(6) - (7)].strval));
    ;}
    break;

  case 260:
#line 1226 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 261:
#line 1232 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 262:
#line 1238 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 263:
#line 1244 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 264:
#line 1250 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(7) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(7) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval));
    ;}
    break;

  case 265:
#line 1256 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(6) - (7)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(6) - (7)].intval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval));
    ;}
    break;

  case 266:
#line 1264 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 267:
#line 1272 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 268:
#line 1278 "parser/evoparser.y"
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

  case 270:
#line 1291 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 271:
#line 1294 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 272:
#line 1295 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 273:
#line 1296 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 274:
#line 1297 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 275:
#line 1298 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 279:
#line 1305 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 280:
#line 1309 "parser/evoparser.y"
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

  case 281:
#line 1319 "parser/evoparser.y"
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

  case 282:
#line 1331 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 283:
#line 1332 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 284:
#line 1332 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 285:
#line 1335 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 286:
#line 1336 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 287:
#line 1337 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 288:
#line 1338 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 289:
#line 1342 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 290:
#line 1345 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 291:
#line 1346 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 292:
#line 1347 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 293:
#line 1348 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 294:
#line 1354 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 295:
#line 1360 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 296:
#line 1365 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 297:
#line 1370 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 298:
#line 1375 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 299:
#line 1384 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 300:
#line 1391 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 301:
#line 1392 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 302:
#line 1393 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 303:
#line 1398 "parser/evoparser.y"
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

  case 304:
#line 1409 "parser/evoparser.y"
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

  case 305:
#line 1421 "parser/evoparser.y"
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

  case 306:
#line 1432 "parser/evoparser.y"
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

  case 307:
#line 1446 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 308:
#line 1450 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 309:
#line 1451 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 310:
#line 1454 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 311:
#line 1455 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 312:
#line 1459 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 313:
#line 1464 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 314:
#line 1466 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 315:
#line 1468 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 316:
#line 1470 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 317:
#line 1472 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 318:
#line 1476 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 319:
#line 1480 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 320:
#line 1481 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 321:
#line 1486 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 322:
#line 1496 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 323:
#line 1505 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 325:
#line 1509 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 326:
#line 1510 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 327:
#line 1511 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 328:
#line 1512 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 329:
#line 1514 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 330:
#line 1516 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 333:
#line 1524 "parser/evoparser.y"
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

  case 334:
#line 1539 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 335:
#line 1547 "parser/evoparser.y"
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

  case 336:
#line 1561 "parser/evoparser.y"
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

  case 337:
#line 1575 "parser/evoparser.y"
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

  case 338:
#line 1589 "parser/evoparser.y"
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

  case 339:
#line 1601 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 340:
#line 1602 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 341:
#line 1603 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 342:
#line 1606 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 343:
#line 1607 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 344:
#line 1610 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 345:
#line 1611 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 346:
#line 1612 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 347:
#line 1613 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 348:
#line 1614 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 349:
#line 1615 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 350:
#line 1616 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 351:
#line 1617 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 352:
#line 1619 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 353:
#line 1621 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 354:
#line 1623 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 355:
#line 1625 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 356:
#line 1627 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 357:
#line 1629 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 358:
#line 1632 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 359:
#line 1633 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 360:
#line 1636 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 361:
#line 1637 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 362:
#line 1640 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 363:
#line 1641 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 365:
#line 1645 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 366:
#line 1646 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 367:
#line 1647 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 368:
#line 1648 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 369:
#line 1649 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 370:
#line 1650 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 371:
#line 1651 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 372:
#line 1652 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 373:
#line 1653 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 374:
#line 1654 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 375:
#line 1655 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 376:
#line 1656 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 377:
#line 1657 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 378:
#line 1658 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 379:
#line 1659 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 380:
#line 1660 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 381:
#line 1661 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 382:
#line 1664 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 383:
#line 1665 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 384:
#line 1668 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 385:
#line 1670 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 386:
#line 1678 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 387:
#line 1679 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 389:
#line 1681 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 390:
#line 1682 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 391:
#line 1683 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 392:
#line 1684 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 393:
#line 1685 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 394:
#line 1686 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 395:
#line 1687 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 396:
#line 1688 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 397:
#line 1689 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 398:
#line 1696 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 399:
#line 1697 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 400:
#line 1698 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 401:
#line 1699 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 402:
#line 1700 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 403:
#line 1701 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 404:
#line 1702 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 405:
#line 1703 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 406:
#line 1704 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 407:
#line 1705 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 408:
#line 1706 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 409:
#line 1707 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 410:
#line 1708 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 411:
#line 1709 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 412:
#line 1710 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 413:
#line 1711 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 414:
#line 1712 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 415:
#line 1713 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 416:
#line 1714 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 417:
#line 1715 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 418:
#line 1716 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 419:
#line 1719 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 420:
#line 1720 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 421:
#line 1721 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 422:
#line 1724 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 423:
#line 1725 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 424:
#line 1728 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 425:
#line 1729 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 426:
#line 1730 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 428:
#line 1734 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 429:
#line 1735 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 430:
#line 1739 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 431:
#line 1740 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 432:
#line 1741 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 433:
#line 1742 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 434:
#line 1743 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 435:
#line 1744 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 436:
#line 1745 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 437:
#line 1746 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 438:
#line 1747 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 439:
#line 1748 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 440:
#line 1749 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 441:
#line 1750 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 442:
#line 1751 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 443:
#line 1752 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 444:
#line 1753 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 445:
#line 1754 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 446:
#line 1755 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 447:
#line 1756 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 448:
#line 1757 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 449:
#line 1758 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 450:
#line 1759 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 451:
#line 1760 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 452:
#line 1761 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 453:
#line 1762 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 454:
#line 1763 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 455:
#line 1764 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 456:
#line 1765 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 457:
#line 1766 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 458:
#line 1767 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 459:
#line 1768 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 460:
#line 1769 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 461:
#line 1770 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 462:
#line 1773 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 463:
#line 1774 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 464:
#line 1778 "parser/evoparser.y"
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

  case 465:
#line 1790 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 466:
#line 1791 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 467:
#line 1792 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 468:
#line 1796 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 469:
#line 1799 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 470:
#line 1800 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 474:
#line 1804 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 475:
#line 1805 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5974 "parser/evoparser.tab.c"
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


#line 1808 "parser/evoparser.y"

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
