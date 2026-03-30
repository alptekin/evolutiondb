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
     EXCEPT = 339,
     ENUM = 340,
     END = 341,
     ELSE = 342,
     EXPLAIN = 343,
     FIRST = 344,
     FLOAT = 345,
     FORCE = 346,
     FOREIGN = 347,
     FROM = 348,
     FULL = 349,
     FULLTEXT = 350,
     FOR = 351,
     GROUP = 352,
     HOUR_MINUTE = 353,
     HOUR_MICROSECOND = 354,
     HIGH_PRIORITY = 355,
     HOUR_SECOND = 356,
     HAVING = 357,
     IMMEDIATE = 358,
     INITIALLY = 359,
     INTEGER = 360,
     INNER = 361,
     IGNORE = 362,
     INDEX = 363,
     IF = 364,
     INSERT = 365,
     INTERSECT = 366,
     INTO = 367,
     INT = 368,
     INTERVAL = 369,
     JOIN = 370,
     KEY = 371,
     LESS = 372,
     LONGTEXT = 373,
     LOW_PRIORITY = 374,
     LEFT = 375,
     LEADING = 376,
     LIMIT = 377,
     LOCKED = 378,
     OFFSET = 379,
     LONGBLOB = 380,
     MATCH = 381,
     MAXVALUE = 382,
     MEDIUMTEXT = 383,
     MINUS = 384,
     MODIFY = 385,
     MEDIUMBLOB = 386,
     MEDIUMINT = 387,
     NATURAL = 388,
     NODE = 389,
     NO_ACTION = 390,
     NULLX = 391,
     OUTER = 392,
     ON = 393,
     ORDER = 394,
     ONDUPLICATE = 395,
     PARTIAL = 396,
     PRIMARY = 397,
     QUICK = 398,
     RANGE = 399,
     REAL = 400,
     RECLAIM = 401,
     REFERENCES = 402,
     RENAME = 403,
     RESTRICT = 404,
     ROLLUP = 405,
     RIGHT = 406,
     REPLACE = 407,
     SQL_SMALL_RESULT = 408,
     SCHEMA = 409,
     SHARD = 410,
     SHARDS = 411,
     SHARE = 412,
     SKIP = 413,
     SOME = 414,
     SQL_CALC_FOUND_ROWS = 415,
     SQL_BIG_RESULT = 416,
     SIMPLE = 417,
     STRAIGHT_JOIN = 418,
     SMALLINT = 419,
     SET = 420,
     SELECT = 421,
     TINYTEXT = 422,
     TINYINT = 423,
     TO = 424,
     TEMPORARY = 425,
     GLOBAL = 426,
     PRESERVE = 427,
     TEXT = 428,
     THAN = 429,
     TIMESTAMP = 430,
     TABLE = 431,
     THEN = 432,
     TRAILING = 433,
     TRUNCATE = 434,
     TINYBLOB = 435,
     TIME = 436,
     UPDATE = 437,
     UNSIGNED = 438,
     UNION = 439,
     UNIQUE = 440,
     UUID = 441,
     USING = 442,
     USE = 443,
     HASH = 444,
     VALIDATE = 445,
     VARCHAR = 446,
     VALUES = 447,
     VARBINARY = 448,
     WHERE = 449,
     WHEN = 450,
     WITH = 451,
     YEAR = 452,
     YEAR_MONTH = 453,
     ZEROFILL = 454,
     EXISTS = 455,
     FSUBSTRING = 456,
     FTRIM = 457,
     FDATE_ADD = 458,
     FDATE_SUB = 459,
     FCOUNT = 460,
     FSUM = 461,
     FAVG = 462,
     FMIN = 463,
     FMAX = 464,
     FUPPER = 465,
     FLOWER = 466,
     FLENGTH = 467,
     FCONCAT = 468,
     FREPLACE = 469,
     FCOALESCE = 470,
     FGEN_RANDOM_UUID = 471,
     FGEN_RANDOM_UUID_V7 = 472,
     FSNOWFLAKE_ID = 473,
     FLAST_INSERT_ID = 474,
     FEVO_SLEEP = 475,
     FEVO_JITTER = 476
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
#define EXCEPT 339
#define ENUM 340
#define END 341
#define ELSE 342
#define EXPLAIN 343
#define FIRST 344
#define FLOAT 345
#define FORCE 346
#define FOREIGN 347
#define FROM 348
#define FULL 349
#define FULLTEXT 350
#define FOR 351
#define GROUP 352
#define HOUR_MINUTE 353
#define HOUR_MICROSECOND 354
#define HIGH_PRIORITY 355
#define HOUR_SECOND 356
#define HAVING 357
#define IMMEDIATE 358
#define INITIALLY 359
#define INTEGER 360
#define INNER 361
#define IGNORE 362
#define INDEX 363
#define IF 364
#define INSERT 365
#define INTERSECT 366
#define INTO 367
#define INT 368
#define INTERVAL 369
#define JOIN 370
#define KEY 371
#define LESS 372
#define LONGTEXT 373
#define LOW_PRIORITY 374
#define LEFT 375
#define LEADING 376
#define LIMIT 377
#define LOCKED 378
#define OFFSET 379
#define LONGBLOB 380
#define MATCH 381
#define MAXVALUE 382
#define MEDIUMTEXT 383
#define MINUS 384
#define MODIFY 385
#define MEDIUMBLOB 386
#define MEDIUMINT 387
#define NATURAL 388
#define NODE 389
#define NO_ACTION 390
#define NULLX 391
#define OUTER 392
#define ON 393
#define ORDER 394
#define ONDUPLICATE 395
#define PARTIAL 396
#define PRIMARY 397
#define QUICK 398
#define RANGE 399
#define REAL 400
#define RECLAIM 401
#define REFERENCES 402
#define RENAME 403
#define RESTRICT 404
#define ROLLUP 405
#define RIGHT 406
#define REPLACE 407
#define SQL_SMALL_RESULT 408
#define SCHEMA 409
#define SHARD 410
#define SHARDS 411
#define SHARE 412
#define SKIP 413
#define SOME 414
#define SQL_CALC_FOUND_ROWS 415
#define SQL_BIG_RESULT 416
#define SIMPLE 417
#define STRAIGHT_JOIN 418
#define SMALLINT 419
#define SET 420
#define SELECT 421
#define TINYTEXT 422
#define TINYINT 423
#define TO 424
#define TEMPORARY 425
#define GLOBAL 426
#define PRESERVE 427
#define TEXT 428
#define THAN 429
#define TIMESTAMP 430
#define TABLE 431
#define THEN 432
#define TRAILING 433
#define TRUNCATE 434
#define TINYBLOB 435
#define TIME 436
#define UPDATE 437
#define UNSIGNED 438
#define UNION 439
#define UNIQUE 440
#define UUID 441
#define USING 442
#define USE 443
#define HASH 444
#define VALIDATE 445
#define VARCHAR 446
#define VALUES 447
#define VARBINARY 448
#define WHERE 449
#define WHEN 450
#define WITH 451
#define YEAR 452
#define YEAR_MONTH 453
#define ZEROFILL 454
#define EXISTS 455
#define FSUBSTRING 456
#define FTRIM 457
#define FDATE_ADD 458
#define FDATE_SUB 459
#define FCOUNT 460
#define FSUM 461
#define FAVG 462
#define FMIN 463
#define FMAX 464
#define FUPPER 465
#define FLOWER 466
#define FLENGTH 467
#define FCONCAT 468
#define FREPLACE 469
#define FCOALESCE 470
#define FGEN_RANDOM_UUID 471
#define FGEN_RANDOM_UUID_V7 472
#define FSNOWFLAKE_ID 473
#define FLAST_INSERT_ID 474
#define FEVO_SLEEP 475
#define FEVO_JITTER 476




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
#line 568 "parser/evoparser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 581 "parser/evoparser.tab.c"

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
#define YYLAST   3043

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  236
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  485
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   476

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     233,   234,    26,    24,   235,    25,   232,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   231,
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
     224,   225,   226,   227,   228,   229,   230
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
     237,     0,    -1,   246,   231,    -1,   246,   231,   237,    -1,
       3,    -1,     3,   232,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   145,    -1,   238,    24,
     238,    -1,   238,    25,   238,    -1,   238,    26,   238,    -1,
     238,    27,   238,    -1,   238,    28,   238,    -1,   238,    29,
     238,    -1,    25,   238,    -1,   233,   238,   234,    -1,   238,
      12,   238,    -1,   238,    10,   238,    -1,   238,    11,   238,
      -1,   238,    21,   238,    -1,   238,    22,   238,    -1,   238,
      30,   238,    -1,   238,    23,   238,    -1,    18,   238,    -1,
      17,   238,    -1,   238,    20,   238,    -1,   238,    20,   233,
     247,   234,    -1,   238,    20,    37,   233,   247,   234,    -1,
     238,    20,   168,   233,   247,   234,    -1,   238,    20,    35,
     233,   247,   234,    -1,   238,    15,   145,    -1,   238,    15,
      18,   145,    -1,   238,    15,     6,    -1,   238,    15,    18,
       6,    -1,     8,     9,   238,    -1,   238,    19,   238,    40,
     238,    -1,   238,    18,    19,   238,    40,   238,    -1,   238,
      -1,   238,   235,   239,    -1,    -1,   239,    -1,    -1,   238,
      16,   233,   241,   239,   234,    -1,    -1,   238,    18,    16,
     233,   242,   239,   234,    -1,   238,    16,   233,   247,   234,
      -1,   238,    18,    16,   233,   247,   234,    -1,   209,   233,
     247,   234,    -1,     3,   233,   240,   234,    -1,   214,   233,
      26,   234,    -1,   214,   233,   238,   234,    -1,   215,   233,
     238,   234,    -1,   216,   233,   238,   234,    -1,   217,   233,
     238,   234,    -1,   218,   233,   238,   234,    -1,   210,   233,
     238,   235,   238,   235,   238,   234,    -1,   210,   233,   238,
     235,   238,   234,    -1,   210,   233,   238,   102,   238,   234,
      -1,   210,   233,   238,   102,   238,   105,   238,   234,    -1,
     211,   233,   238,   234,    -1,   211,   233,   243,   238,   102,
     238,   234,    -1,   211,   233,   243,   102,   238,   234,    -1,
     219,   233,   238,   234,    -1,   220,   233,   238,   234,    -1,
     221,   233,   238,   234,    -1,   222,   233,   238,   235,   238,
     234,    -1,   223,   233,   238,   235,   238,   235,   238,   234,
      -1,   224,   233,   238,   235,   238,   234,    -1,   225,   233,
     234,    -1,   226,   233,   234,    -1,   227,   233,   234,    -1,
     228,   233,   234,    -1,   229,   233,   238,   234,    -1,   230,
     233,   238,   235,   238,   234,    -1,   130,    -1,   187,    -1,
      53,    -1,   212,   233,   238,   235,   244,   234,    -1,   213,
     233,   238,   235,   244,   234,    -1,   123,   238,    77,    -1,
     123,   238,    78,    -1,   123,   238,    82,    -1,   123,   238,
      84,    -1,   123,   238,   207,    -1,   123,   238,   206,    -1,
     123,   238,   108,    -1,   123,   238,   107,    -1,   123,   238,
     110,    -1,    62,   238,   245,    95,    -1,    62,   238,   245,
      96,   238,    95,    -1,    62,   245,    95,    -1,    62,   245,
      96,   238,    95,    -1,   204,   238,   186,   238,    -1,   245,
     204,   238,   186,   238,    -1,   238,    14,   238,    -1,   238,
      18,    14,   238,    -1,   238,    13,   238,    -1,   238,    18,
      13,   238,    -1,    57,    -1,    65,    -1,    66,    -1,   247,
      -1,   175,   261,   262,    -1,   175,   261,   262,   102,   265,
     248,   249,   253,   254,   257,   258,   259,    -1,    -1,   203,
     238,    -1,    -1,   106,    51,   250,   252,    -1,   238,   251,
      -1,   250,   235,   238,   251,    -1,    -1,    39,    -1,    85,
      -1,    -1,   205,   159,    -1,    -1,   111,   238,    -1,    -1,
     148,    51,   255,    -1,   256,    -1,   255,   235,   256,    -1,
       3,   251,    -1,    -1,   131,   238,    -1,   131,   238,   235,
     238,    -1,   131,   238,   133,   238,    -1,    -1,   105,   191,
      -1,   105,   166,    -1,   105,   191,   167,   132,    -1,   105,
     166,   167,   132,    -1,    -1,   121,   260,    -1,     3,    -1,
     260,   235,     3,    -1,    -1,   261,    35,    -1,   261,    79,
      -1,   261,    83,    -1,   261,   109,    -1,   261,   172,    -1,
     261,   162,    -1,   261,   170,    -1,   261,   169,    -1,   263,
      -1,   262,   235,   263,    -1,    26,    -1,   238,   264,    -1,
      41,     3,    -1,     3,    -1,    -1,   266,    -1,   265,   235,
     266,    -1,   267,    -1,   269,    -1,     3,   264,   276,    -1,
       3,   232,     3,   264,   276,    -1,   279,   268,     3,    -1,
     233,   265,   234,    -1,    41,    -1,    -1,   266,   270,   124,
     267,   274,    -1,   266,   172,   267,    -1,   266,   172,   267,
     147,   238,    -1,   266,   272,   271,   124,   267,   275,    -1,
     266,   142,   273,   124,   267,    -1,    -1,   115,    -1,    61,
      -1,    -1,   146,    -1,   129,    -1,   160,    -1,   129,   271,
      -1,   160,   271,    -1,    -1,    -1,   275,    -1,   147,   238,
      -1,   196,   233,   260,   234,    -1,   197,   125,   277,   233,
     278,   234,    -1,   116,   125,   277,   233,   278,   234,    -1,
     100,   125,   277,   233,   278,   234,    -1,    -1,   105,   124,
      -1,    -1,     3,    -1,   278,   235,     3,    -1,   233,   247,
     234,    -1,   280,    -1,    80,   281,   102,     3,   248,   254,
     257,    -1,   281,   128,    -1,   281,   152,    -1,   281,   116,
      -1,    -1,    80,   281,   282,   102,   265,   248,    -1,     3,
     283,    -1,   282,   235,     3,   283,    -1,    -1,   232,    26,
      -1,    80,   281,   102,   282,   196,   265,   248,    -1,   284,
      -1,    81,   185,     3,    -1,    81,   185,   118,   209,     3,
      -1,   285,    -1,    58,   117,     3,   147,     3,   233,   286,
     234,    -1,    58,   117,   118,   209,     3,   147,     3,   233,
     286,   234,    -1,    58,   194,   117,     3,   147,     3,   233,
     286,   234,    -1,    58,   194,   117,   118,   209,     3,   147,
       3,   233,   286,   234,    -1,    58,   117,     3,   147,     3,
     196,   198,   233,   286,   234,    -1,    58,   117,   118,   209,
       3,   147,     3,   196,   198,   233,   286,   234,    -1,    58,
     194,   117,     3,   147,     3,   196,   198,   233,   286,   234,
      -1,    58,   194,   117,   118,   209,     3,   147,     3,   196,
     198,   233,   286,   234,    -1,    58,   117,    70,     3,   147,
       3,   233,   286,   234,    -1,    58,   117,    70,   118,   209,
       3,   147,     3,   233,   286,   234,    -1,    58,   194,   117,
      70,     3,   147,     3,   233,   286,   234,    -1,    58,   194,
     117,    70,   118,   209,     3,   147,     3,   233,   286,   234,
      -1,    58,   117,    70,     3,   147,     3,   196,   198,   233,
     286,   234,    -1,    58,   194,   117,    70,     3,   147,     3,
     196,   198,   233,   286,   234,    -1,     3,    -1,   286,   235,
       3,    -1,   287,    -1,   219,   233,     3,   234,    -1,   220,
     233,     3,   234,    -1,   221,   233,     3,   234,    -1,   222,
     233,     3,   235,     3,   234,    -1,   288,    -1,    81,   117,
       3,    -1,   289,   291,    -1,   188,   185,     3,    -1,   188,
     185,     3,   235,   290,    -1,     3,    -1,   290,   235,     3,
      -1,    -1,   291,    59,    -1,   291,   158,    -1,   291,    45,
      43,    -1,   291,    44,    43,    -1,   292,    -1,   155,   185,
       3,    -1,   293,    -1,    36,   185,     3,    -1,    36,   185,
       3,   232,     3,    -1,   294,    -1,    32,   185,     3,    33,
      56,     3,    63,   233,   238,   234,    -1,    32,   185,     3,
      33,    56,     3,   194,   233,   325,   234,    -1,    32,   185,
       3,    33,    56,     3,   101,   125,   233,   322,   234,   156,
       3,   233,   323,   234,   324,    -1,    32,   185,     3,    33,
      56,     3,    63,   233,   238,   234,    18,   199,    -1,    32,
     185,     3,    33,    56,     3,   101,   125,   233,   322,   234,
     156,     3,   233,   323,   234,   324,    18,   199,    -1,    32,
     185,     3,    33,    56,     3,   151,   125,   233,   321,   234,
      -1,    32,   185,     3,    81,    56,     3,    -1,    32,   185,
       3,   157,    56,     3,   178,     3,    -1,    32,   185,     3,
      91,    56,     3,    -1,    32,   185,     3,    74,    56,     3,
      -1,    32,   185,     3,   199,    56,     3,    -1,    32,   185,
       3,    33,    69,     3,   332,   327,   295,    -1,    32,   185,
       3,    81,    69,     3,    -1,    32,   185,     3,    81,     3,
      -1,    32,   185,     3,   157,    69,     3,   178,     3,    -1,
      32,   185,     3,   157,     3,   178,     3,    -1,    32,   185,
       3,   139,    69,     3,   332,   327,   295,    -1,    32,   185,
       3,   139,     3,   332,   327,   295,    -1,    32,   185,     3,
      60,    69,     3,     3,   332,   327,   295,    -1,    32,   185,
       3,    60,     3,     3,   332,   327,   295,    -1,    -1,    98,
      -1,    34,     3,    -1,   296,    -1,   119,   298,   299,     3,
     300,   201,   302,   297,    -1,   119,   298,   299,     3,   300,
     247,    -1,    -1,   149,   125,   191,   305,    -1,    -1,   298,
     128,    -1,   298,    76,    -1,   298,   109,    -1,   298,   116,
      -1,   121,    -1,    -1,    -1,   233,   301,   234,    -1,     3,
      -1,   301,   235,     3,    -1,   233,   304,   234,    -1,    -1,
     302,   235,   303,   233,   304,   234,    -1,   238,    -1,    86,
      -1,   304,   235,   238,    -1,   304,   235,    86,    -1,   119,
     298,   299,     3,   174,   305,   297,    -1,     3,    20,   238,
      -1,     3,    20,    86,    -1,   305,   235,     3,    20,   238,
      -1,   305,   235,     3,    20,    86,    -1,   306,    -1,   161,
     298,   299,     3,   300,   201,   302,   297,    -1,   161,   298,
     299,     3,   174,   305,   297,    -1,   161,   298,   299,     3,
     300,   247,   297,    -1,   307,    -1,   191,   308,   265,   174,
     309,   248,   254,   257,    -1,    -1,   298,   128,    -1,   298,
     116,    -1,     3,    20,   238,    -1,     3,   232,     3,    20,
     238,    -1,   309,   235,     3,    20,   238,    -1,   309,   235,
       3,   232,     3,    20,   238,    -1,   157,   185,     3,   178,
       3,    -1,   310,    -1,    58,    71,   311,     3,    -1,    58,
     163,   311,     3,    -1,    81,    71,     3,    -1,    81,    71,
     118,   209,     3,    -1,    81,   163,     3,    -1,    81,   163,
     118,   209,     3,    -1,    -1,   118,   209,    -1,   312,    -1,
      58,    75,     3,    41,   332,    -1,    58,    75,     3,    41,
     332,    86,   238,    -1,    58,    75,     3,    41,   332,    18,
     145,    -1,    58,    75,     3,    41,   332,    63,   233,   238,
     234,    -1,    58,    75,     3,    41,   332,    18,   145,    63,
     233,   238,   234,    -1,   313,    -1,   197,     3,    -1,   197,
      71,     3,    -1,   314,    -1,    58,   318,   185,   311,     3,
     233,   319,   234,   315,    -1,    58,   318,   185,   311,     3,
     232,     3,   233,   319,   234,   315,    -1,    -1,   315,    38,
      20,     5,    -1,   315,    38,     5,    -1,   315,   147,     3,
      80,     3,    -1,   315,   147,     3,   181,     3,    -1,   315,
     164,    51,   198,   233,     3,   234,   165,     5,    -1,   315,
     164,    51,   153,   233,     3,   234,   233,   316,   234,    -1,
     317,    -1,   316,   235,   317,    -1,   164,     3,   201,   126,
     183,     4,   147,   143,     5,    -1,   164,     3,   201,   126,
     183,   136,   147,   143,     5,    -1,    58,   318,   185,   311,
       3,   233,   319,   234,   334,    -1,    58,   318,   185,   311,
       3,   334,    -1,    58,   318,   185,   311,     3,   232,     3,
     233,   319,   234,   334,    -1,    58,   318,   185,   311,     3,
     232,     3,   334,    -1,    -1,   179,    -1,   180,   179,    -1,
     320,    -1,   319,   235,   320,    -1,   151,   125,   233,   321,
     234,    -1,    56,     3,   151,   125,   233,   321,   234,    -1,
     125,   233,   260,   234,    -1,   117,   233,   260,   234,    -1,
     104,   117,   233,   260,   234,    -1,   104,   125,   233,   260,
     234,    -1,    63,   233,   238,   234,    -1,    56,     3,    63,
     233,   238,   234,    -1,   101,   125,   233,   322,   234,   156,
       3,   233,   323,   234,   324,    -1,   101,   125,   233,   322,
     234,   156,     3,   232,     3,   233,   323,   234,   324,    -1,
      56,     3,   101,   125,   233,   322,   234,   156,     3,   233,
     323,   234,   324,    -1,    56,     3,   101,   125,   233,   322,
     234,   156,     3,   232,     3,   233,   323,   234,   324,    -1,
     194,   233,   325,   234,    -1,    56,     3,   194,   233,   325,
     234,    -1,     3,    -1,   321,   235,     3,    -1,     3,    -1,
     322,   235,     3,    -1,     3,    -1,   323,   235,     3,    -1,
      -1,   324,   147,    80,    59,    -1,   324,   147,    80,   174,
     145,    -1,   324,   147,    80,   158,    -1,   324,   147,    80,
     174,    86,    -1,   324,   147,   191,    59,    -1,   324,   147,
     191,   174,   145,    -1,   324,   147,   191,   158,    -1,   324,
     147,   191,   174,    86,    -1,   324,   147,    80,   144,    -1,
     324,   147,   191,   144,    -1,   324,   135,   103,    -1,   324,
     135,   171,    -1,   324,   135,   150,    -1,   324,    72,    -1,
     324,    18,    72,    -1,   324,    72,   113,    73,    -1,   324,
      72,   113,   112,    -1,     3,    -1,   325,   235,     3,    -1,
      -1,   326,     3,   332,   327,    -1,    -1,   327,    18,   145,
      -1,   327,   145,    -1,   327,    86,     4,    -1,   327,    86,
       5,    -1,   327,    86,     7,    -1,   327,    86,     6,    -1,
     327,    86,   225,   233,   234,    -1,   327,    86,   226,   233,
     234,    -1,   327,    86,   227,   233,   234,    -1,   327,    86,
      57,    -1,   327,    86,   233,   238,   234,    -1,   327,    38,
      -1,   327,    38,   233,     5,   235,     5,   234,    -1,   327,
      38,   233,     5,   234,    -1,   327,    43,   233,     5,   235,
       5,   234,    -1,   327,    43,   233,     5,   234,    -1,   327,
      43,    -1,   327,   194,   125,    -1,   327,   194,    -1,   327,
     151,   125,    -1,   327,   125,    -1,   327,    64,     4,    -1,
     327,    63,   233,   238,   234,    -1,   327,    56,     3,   194,
      -1,   327,    56,     3,   151,   125,    -1,   327,    56,     3,
      63,   233,   238,   234,    -1,   327,    46,    42,    41,   233,
     238,   234,    47,    -1,   327,    46,    42,    41,   233,   238,
     234,    48,    -1,   327,    46,    42,    41,   233,   238,   234,
      -1,   327,    41,   233,   238,   234,    47,    -1,   327,    41,
     233,   238,   234,    48,    -1,   327,    41,   233,   238,   234,
      -1,    -1,   233,     5,   234,    -1,   233,     5,   235,     5,
     234,    -1,    -1,    52,    -1,    -1,   330,   192,    -1,   330,
     208,    -1,    -1,   331,    67,   174,     4,    -1,   331,    68,
       4,    -1,    55,   328,    -1,   177,   328,   330,    -1,   173,
     328,   330,    -1,   141,   328,   330,    -1,   122,   328,   330,
      -1,   114,   328,   330,    -1,    54,   328,   330,    -1,   154,
     328,   330,    -1,    87,   328,   330,    -1,    99,   328,   330,
      -1,    89,   328,   330,    -1,    90,    -1,   190,    -1,   184,
      -1,    88,    -1,   206,    -1,    67,   328,   331,    -1,   200,
     233,     5,   234,   331,    -1,    52,   328,    -1,   202,   233,
       5,   234,    -1,   189,    -1,    49,    -1,   140,    -1,   134,
      -1,   176,   329,   331,    -1,   182,   329,   331,    -1,   137,
     329,   331,    -1,   127,   329,   331,    -1,    94,   233,   333,
     234,   331,    -1,   174,   233,   333,   234,   331,    -1,    50,
      -1,   195,    -1,     4,    -1,   333,   235,     4,    -1,   335,
     268,   247,    -1,    -1,   116,    -1,   161,    -1,   336,    -1,
     174,   163,     3,    -1,   174,   163,    86,    -1,   174,   337,
      -1,   338,    -1,   337,   235,   338,    -1,     8,    20,   238,
      -1,     8,     9,   238,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   332,   332,   333,   338,   345,   346,   347,   365,   373,
     381,   387,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     418,   419,   420,   421,   424,   425,   426,   427,   428,   431,
     432,   435,   436,   439,   440,   443,   443,   444,   444,   445,
     446,   447,   451,   455,   456,   457,   458,   459,   460,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   482,   489,   496,   500,   504,   510,   511,
     512,   515,   516,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   530,   532,   534,   536,   540,   548,   559,   560,
     563,   564,   567,   575,   583,   594,   604,   605,   619,   620,
     621,   622,   625,   632,   640,   641,   642,   645,   646,   649,
     650,   653,   654,   657,   658,   661,   669,   670,   671,   672,
     675,   676,   677,   678,   679,   682,   683,   686,   687,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   701,   702,
     703,   711,   717,   718,   719,   722,   723,   726,   727,   731,
     738,   739,   740,   743,   744,   748,   750,   752,   754,   756,
     760,   761,   762,   765,   766,   769,   770,   773,   774,   775,
     778,   779,   782,   783,   787,   789,   791,   793,   796,   797,
     800,   801,   804,   808,   818,   826,   827,   828,   829,   833,
     837,   839,   843,   843,   845,   850,   857,   864,   874,   881,
     888,   898,   906,   916,   924,   933,   942,   952,   960,   969,
     978,   988,   997,  1009,  1014,  1019,  1025,  1032,  1039,  1046,
    1056,  1063,  1072,  1079,  1085,  1093,  1099,  1107,  1108,  1109,
    1110,  1111,  1115,  1122,  1131,  1138,  1144,  1155,  1158,  1164,
    1170,  1177,  1183,  1190,  1196,  1202,  1208,  1214,  1220,  1226,
    1232,  1238,  1244,  1250,  1256,  1262,  1268,  1274,  1282,  1283,
    1284,  1287,  1295,  1301,  1314,  1315,  1318,  1319,  1320,  1321,
    1322,  1325,  1325,  1328,  1329,  1332,  1342,  1355,  1356,  1356,
    1359,  1360,  1361,  1362,  1365,  1369,  1370,  1371,  1372,  1378,
    1381,  1387,  1392,  1398,  1406,  1415,  1416,  1417,  1421,  1432,
    1444,  1455,  1470,  1475,  1479,  1480,  1484,  1486,  1488,  1490,
    1494,  1495,  1499,  1503,  1505,  1507,  1509,  1511,  1516,  1520,
    1521,  1525,  1534,  1544,  1548,  1549,  1550,  1551,  1552,  1553,
    1555,  1559,  1560,  1563,  1578,  1585,  1600,  1613,  1628,  1641,
    1642,  1643,  1646,  1647,  1650,  1651,  1652,  1653,  1654,  1655,
    1656,  1657,  1658,  1660,  1662,  1664,  1666,  1668,  1672,  1673,
    1676,  1677,  1680,  1681,  1684,  1685,  1686,  1687,  1688,  1689,
    1690,  1691,  1692,  1693,  1694,  1695,  1696,  1697,  1698,  1699,
    1700,  1701,  1704,  1705,  1708,  1708,  1718,  1719,  1720,  1721,
    1722,  1723,  1724,  1725,  1726,  1727,  1728,  1729,  1736,  1737,
    1738,  1739,  1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,
    1748,  1749,  1750,  1751,  1752,  1753,  1754,  1755,  1756,  1759,
    1760,  1761,  1764,  1765,  1768,  1769,  1770,  1773,  1774,  1775,
    1779,  1780,  1781,  1782,  1783,  1784,  1785,  1786,  1787,  1788,
    1789,  1790,  1791,  1792,  1793,  1794,  1795,  1796,  1797,  1798,
    1799,  1800,  1801,  1802,  1803,  1804,  1805,  1806,  1807,  1808,
    1809,  1810,  1813,  1814,  1817,  1830,  1831,  1832,  1836,  1839,
    1840,  1841,  1842,  1842,  1844,  1845
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
  "DECIMAL", "DATE", "ENABLE", "ESCAPED", "EXCEPT", "ENUM", "END", "ELSE",
  "EXPLAIN", "FIRST", "FLOAT", "FORCE", "FOREIGN", "FROM", "FULL",
  "FULLTEXT", "FOR", "GROUP", "HOUR_MINUTE", "HOUR_MICROSECOND",
  "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "IMMEDIATE", "INITIALLY",
  "INTEGER", "INNER", "IGNORE", "INDEX", "IF", "INSERT", "INTERSECT",
  "INTO", "INT", "INTERVAL", "JOIN", "KEY", "LESS", "LONGTEXT",
  "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "LOCKED", "OFFSET",
  "LONGBLOB", "MATCH", "MAXVALUE", "MEDIUMTEXT", "MINUS", "MODIFY",
  "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NODE", "NO_ACTION", "NULLX",
  "OUTER", "ON", "ORDER", "ONDUPLICATE", "PARTIAL", "PRIMARY", "QUICK",
  "RANGE", "REAL", "RECLAIM", "REFERENCES", "RENAME", "RESTRICT", "ROLLUP",
  "RIGHT", "REPLACE", "SQL_SMALL_RESULT", "SCHEMA", "SHARD", "SHARDS",
  "SHARE", "SKIP", "SOME", "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT",
  "SIMPLE", "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT", "TINYTEXT",
  "TINYINT", "TO", "TEMPORARY", "GLOBAL", "PRESERVE", "TEXT", "THAN",
  "TIMESTAMP", "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME",
  "UPDATE", "UNSIGNED", "UNION", "UNIQUE", "UUID", "USING", "USE", "HASH",
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
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,    59,    46,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   236,   237,   237,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   239,   239,   240,   240,   241,   238,   242,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   243,   243,
     243,   238,   238,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   238,   238,   238,   238,   245,   245,   238,   238,
     238,   238,   238,   238,   238,   246,   247,   247,   248,   248,
     249,   249,   250,   250,   251,   251,   251,   252,   252,   253,
     253,   254,   254,   255,   255,   256,   257,   257,   257,   257,
     258,   258,   258,   258,   258,   259,   259,   260,   260,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   262,   262,
     262,   263,   264,   264,   264,   265,   265,   266,   266,   267,
     267,   267,   267,   268,   268,   269,   269,   269,   269,   269,
     270,   270,   270,   271,   271,   272,   272,   273,   273,   273,
     274,   274,   275,   275,   276,   276,   276,   276,   277,   277,
     278,   278,   279,   246,   280,   281,   281,   281,   281,   280,
     282,   282,   283,   283,   280,   246,   284,   284,   246,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   286,   286,   286,   287,   287,   287,   287,
     246,   288,   246,   289,   289,   290,   290,   291,   291,   291,
     291,   291,   246,   292,   246,   293,   293,   246,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   295,   295,
     295,   246,   296,   296,   297,   297,   298,   298,   298,   298,
     298,   299,   299,   300,   300,   301,   301,   302,   303,   302,
     304,   304,   304,   304,   296,   305,   305,   305,   305,   246,
     306,   306,   306,   246,   307,   308,   308,   308,   309,   309,
     309,   309,   246,   246,   310,   310,   246,   246,   246,   246,
     311,   311,   246,   312,   312,   312,   312,   312,   246,   313,
     313,   246,   314,   314,   315,   315,   315,   315,   315,   315,
     315,   316,   316,   317,   317,   314,   314,   314,   314,   318,
     318,   318,   319,   319,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   321,   321,
     322,   322,   323,   323,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   325,   325,   326,   320,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   328,
     328,   328,   329,   329,   330,   330,   330,   331,   331,   331,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   333,   333,   334,   335,   335,   335,   246,   336,
     336,   336,   337,   337,   338,   338
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
#define YYPACT_NINF -843
static const yytype_int16 yypact[] =
{
    2525,  -124,   -31,   440,  -843,   441,  -843,    53,   106,  -843,
      41,  -843,   158,     6,    48,   131,   -16,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,   368,   417,   369,   477,   229,   369,
    -843,   330,   443,   413,   280,   124,   604,   138,   275,   258,
     613,   618,   258,   117,    62,   394,  -843,   352,   630,   389,
      15,  -843,   638,  -843,  2525,   237,  1102,   425,   450,   666,
     650,   532,   276,   492,   686,  -843,   262,   369,   485,   729,
    -843,  -843,  -843,    26,  -843,   529,  -843,  -843,   531,  -843,
     566,  -843,  -843,  -843,  -843,  -843,   746,  -843,   603,   784,
    1530,  1530,  -843,  -843,   775,   261,  -843,  -843,  -843,  -843,
     782,  1530,  1530,  1530,  -843,  -843,  -843,   319,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,   556,   562,
     609,   612,   614,   672,   681,   701,   706,   712,   718,   719,
     721,   722,   723,   724,   725,   726,   728,   730,   731,   744,
    1530,  2893,    34,  -843,   616,    16,    18,    23,    14,   -83,
     624,  -843,  -843,   798,  -843,  -843,   919,   948,  -843,  -843,
      -3,    56,   952,    60,   953,   294,    89,   954,  1008,  -843,
    -843,  2618,  1009,   866,   806,  1013,  -843,   870,   282,   809,
    1016,   994,  -843,   267,   104,    15,  1026,  1040,  1041,  1042,
    -116,  1044,   128,  2975,  2975,  -843,  1046,  1530,  1530,  1297,
    1297,  -843,  1530,  2434,   199,   875,  1530,   605,  1530,  1530,
     876,  1530,  1530,  1530,  1530,  1530,  1530,  1530,  1530,  1530,
    1530,   818,   819,   822,   823,  1530,  1530,  1613,  -843,  1530,
    1530,  1530,  1530,  1530,    29,   832,   540,  1530,   643,  1530,
    1530,  1530,  1530,  1530,  1530,  1530,  1530,  1530,  1530,  1076,
    -843,    15,  1530,  1077,  1078,   -54,   848,   359,  1080,    15,
    -843,  -843,  -843,   159,  -843,    15,   983,   938,  -843,  1105,
    -843,  -843,  1107,  1108,  1141,  1155,  1156,  -843,  1157,  1158,
    1160,  2618,  1162,   995,  1169,  1171,  1172,  -843,  -843,  -843,
     944,   944,   944,   944,   944,  -843,   944,  -843,   945,   944,
     944,   944,  1130,  -843,  1130,  -843,   944,   944,   944,   946,
    1130,   944,  1130,  -843,  -843,  -843,  -843,   951,   956,  -843,
     373,   105,  1182,  1183,  1043,  1184,  1045,   982,  1191,   156,
    -843,  1530,  1049,    15,   -82,   485,  -843,  -843,  -843,  1193,
    1218,   111,  -843,  1193,   303,  -843,   428,  -843,   990,  2975,
    2455,   208,  -843,  1530,  1530,   992,    85,  -843,  -843,  -843,
    1641,   903,   700,   960,   993,  1675,  1754,  1775,  1804,  1830,
    1858,  1892,  1913,  1012,  1048,  1127,  -843,  -843,  -843,  -843,
    1934,  1387,  -843,  2995,  1329,  2486,  3013,  3013,  -843,    30,
    -843,   875,  1530,  1530,  1010,  1530,  2929,  1011,  1015,  1017,
     989,  1420,   780,   862,   974,   561,   561,  1212,  1212,  1212,
    1212,  -843,  -843,   -82,  -843,  -843,   988,   325,  1120,  1121,
    1126,  -843,  -843,  -843,     3,   107,   624,   938,   938,  1134,
    1113,    15,  -843,  1137,  -843,   170,  2618,  2618,  1259,  -843,
    -843,  -843,  -843,  -843,  2618,  1260,  1086,  1087,  -843,  1263,
    -843,  -843,  -843,  -843,  -843,  -843,  1265,  -843,  -843,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  1265,  -843,  -843,  -843,
    1266,  1267,  1125,  1051,  1530,  1075,    24,   241,  1128,  1273,
     277,  1282,  1283,  1140,  -843,  -843,  1285,   539,  -843,   798,
    2975,  1238,  1159,   -82,  -843,  -843,  1275,  -115,  -843,   362,
    1060,  -843,  -115,  1060,  1145,  1530,  -843,  1530,  -843,  1530,
    2815,  2517,  -843,  1530,  1530,  -843,  1530,  2755,  1173,  1173,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  1530,
    1530,  1530,  -843,  1530,  -843,  -843,  1530,  1063,  3013,  3013,
     875,  2952,  1530,   875,   875,   875,  1064,  1194,  1299,   -54,
    1198,  1198,  1198,  1530,  1301,  1302,  1049,  -843,  -843,    15,
    1530,   -58,    15,  1074,  1185,  1187,  1095,  -843,  -843,  2618,
    2532,  -843,  -843,  1306,  1310,   380,   284,   452,   284,   284,
    -843,   390,   284,   284,   284,   452,   452,   284,   284,   284,
     393,   452,   284,   452,  1096,  1098,  1270,  1530,  2975,  1101,
    -843,  1104,  1131,  1132,  1133,   397,  -843,  1148,    24,  1326,
     283,  1165,    24,   285,  1214,  1335,   -86,  1364,  1135,  1244,
     304,  1138,  1219,  1245,  1220,   401,  -843,  1392,   875,  1401,
    1530,  -843,  -843,  1163,  1293,  1424,  -843,  -843,  1448,  1249,
    -101,  -843,  -101,  -843,  -843,  2975,  2840,  -843,  1530,  1587,
      58,  1955,  1530,  1530,  1221,  1222,  1992,  1410,  2021,  2047,
    1223,  -843,  1530,  1246,  1530,  1210,  1247,  1271,  1272,  -843,
    1403,  1404,  -843,  -843,  1390,  1284,  1286,  1287,  2975,  1496,
       4,  1159,  -843,  2975,  1530,  1288,  -843,  -843,   -58,  1530,
    1291,  1292,  1515,  2532,  2532,  -843,  1381,  1524,  1295,  1296,
    1298,  1490,  1536,  1307,  1537,    33,  -843,  -843,  -843,  1417,
    1418,  -843,  2532,  -843,  -843,  -843,  1539,  -843,  -843,  1371,
    1542,  -843,  1545,  -843,  -843,  -843,  1317,  2075,    24,  1548,
    1549,  1550,  1551,  -843,  1553,  1324,   404,  1325,  1361,    24,
    1327,   410,  1363,    24,  1560,   292,   539,  -843,   217,  1530,
    1331,  1332,  1333,  1565,  1565,  1336,  1515,   249,   539,  2618,
    -843,   250,  1337,  -843,   198,  -843,  2975,  1382,  1554,  -843,
    -843,  2975,   418,  -843,  -843,  -843,  -843,  2975,  1530,  -843,
    -843,  1530,  -843,  2109,  2410,  -843,  -843,  -843,  1530,  -843,
    -843,  -843,  1341,  -843,  1210,  -843,  -843,  -843,  1530,  1530,
    1049,  -843,  1573,  1573,  1573,  1530,  1530,  1574,  -843,  2975,
    1565,  -843,  2130,  1575,  1576,  -843,   420,  -843,  -843,  2532,
    -843,  -843,  1577,  1530,  1578,  1540,   -18,  1530,  -843,  -843,
    -843,  -843,  -843,  -843,  1347,  1351,  1352,  1530,  -843,  -843,
    -843,  1354,  1582,  -843,   452,  -843,   452,   452,  1530,  -843,
     431,  1355,  1356,  1359,  1369,  -843,    24,  -843,    24,  1385,
     438,    24,  -843,  1386,   442,  1388,  1396,    24,   447,  1397,
    1495,  1519,  1413,  2151,  1575,  1565,  1565,  -843,   464,   469,
    1576,   472,   226,  -843,  -843,  -843,  -843,  -843,  -843,  1401,
    1530,  1530,  1193,  1274,  -843,  1505,  1414,  2172,  2193,  -843,
    -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  2217,
    -843,  2861,   240,  2975,  1159,  -843,   502,   508,   510,  2975,
    2975,  1628,   512,  1631,  -843,   520,  -843,   522,  -843,  1655,
    -843,   526,  2238,   534,  1439,  1440,  1552,  -843,  2264,  1442,
    1444,  1445,  2292,  -843,  -843,  2326,  -843,  -843,  -843,  -843,
    1671,   551,   559,    24,  -843,   563,    24,  -843,    24,  1447,
     565,   249,  1530,  1449,  1450,  1515,  -843,   578,   602,   606,
    -843,  1678,  -843,   615,  -843,   480,  1681,  1656,  2536,  -843,
    2975,  2975,  1471,  -843,  2975,  -843,  2975,  1249,  -843,  -843,
    -843,  -843,  1602,  1530,  -843,  1603,  -843,  1706,  -843,  -843,
    1530,  -843,  1511,  1555,  1709,  -843,  1710,  -843,  -843,  1731,
     627,  -843,  1732,  1530,  1530,  -843,  -843,  -843,  -843,  -843,
    -843,  -843,  1528,  -843,  -843,   640,  -843,   661,   663,    24,
    -843,   226,  -843,  2347,  1575,  1576,   665,  1615,  -843,  -843,
    -843,  -843,  -843,  1787,   -39,   270,   669,  -843,  2861,   305,
    1685,  -843,  2975,  -843,  1805,  -843,  -843,  1579,  -843,  -843,
    1601,  2368,  2389,  -843,  -843,  -843,  -843,   678,  -843,   682,
     684,  -843,  1806,  -843,  1807,  1808,  1604,  1605,  -843,  -843,
    1640,  1645,  1565,  -843,  1606,  -843,  -843,   648,  -843,  -843,
    1680,  -843,   541,  -843,  -843,  1859,  1860,  1729,  1733,  1629,
    1863,  -843,  -843,  1864,  1886,  1863,  1657,  1658,  -843,  -843,
    -843,   688,   645,  1660,   690,  1661,  1725,  -843,  1893,  1894,
    1863,  1863,  -843,  1734,  1890,   269,  -843,  1666,   692,   695,
     354,  1897,   697,  -843,  -843,   -43,  1788,   248,   -47,  1863,
    -843,  -843,  1879,  1771,  -843,  1734,  -843,  -843,   289,  -843,
    -843,  -843,   239,   333,   702,   354,   354,  1861,  -843,  -843,
    -843,  -843,  -843,  -843,   230,  -843,  -843,  -843,   254,  -843,
    1747,  -843,  -843,  -843,  -843,   354,    98,  1839,  1842,  1847,
    1848,  1987,  1988,  -843,  -843
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -843,  1930,   -57,  -397,  -843,  -843,  -843,  -843,  1466,  1783,
    -843,  -148,  -194,  -843,  -843,  -827,  -843,  -843,  -560,  -843,
    1099,  -684,  -843,  -843,  -763,  -843,  -843,  1735,  -154,    72,
    1730,  -264,  1501,  -843,  -843,   506,  -843,  -843,  -843,  1303,
    1464,   386,   136,  -843,  -843,  -843,  1945,  1682,  -843,  -843,
    -614,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -843,  -672,
    -843,  -382,   302,  1973,  1824,  -843,  1516,  -843,  1031,  -351,
    -843,  -843,  -843,  -843,  -843,   395,  -843,  -843,  -843,  1059,
    -843,   897,  -843,  1300,  1311,  -838,  -842,  -531,  -624,  -738,
    -843,  -565,   461,   108,   219,  -457,  -266,  1607,  -621,  -843,
    -843,  -843,  1949
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
     601,  -306,   603,   563,   816,   453,   238,   610,   891,  1156,
     494,   827,   828,  1162,   644,   398,   544,   839,   840,   841,
     842,  1084,   977,   203,   204,   945,   428,   399,   644,    53,
     850,    61,   983,   282,   209,   210,   211,   932,   349,   284,
     213,    34,   429,   287,   259,   102,   283,   365,   239,   240,
     241,   242,   243,   244,   245,   495,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   694,
     843,   268,   293,   237,  1001,   239,   240,   241,   242,   243,
     244,   245,  1187,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   288,   350,   654,    62,
     645,   341,   978,   979,   860,   285,   100,    84,   195,   289,
     651,    63,   653,   946,   783,   870,   261,   101,   695,   874,
     829,    87,  1085,   430,  1163,   294,   893,   756,   103,   670,
     504,   359,   269,   269,    35,   360,  1157,   940,   295,   366,
     370,   372,   373,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   400,   545,   947,   571,   390,   391,
     577,   578,   393,   394,   395,   396,   397,   523,   581,    11,
     406,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,  1079,   511,    54,   151,   514,  1080,   239,   240,
     241,   242,   243,   244,   245,    64,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   557,
     267,  1089,    71,   573,  1188,   564,   817,  1046,    50,  -305,
    1005,   566,    85,   611,   612,   613,   614,   158,   158,  -307,
     924,  -306,   961,   547,   962,   264,    88,   965,   844,   845,
     846,   196,   556,   970,   985,   187,   847,   344,   784,   262,
     785,   574,   494,   559,   854,   802,   856,   857,    89,   183,
     879,   166,   167,    78,   500,   336,    11,  1145,   437,   896,
    -475,    51,   790,   791,   362,   363,   168,   291,  1171,    72,
     343,   485,   353,   518,   519,   692,   520,   521,   698,   642,
     341,    52,   510,   705,   527,    59,  1181,   495,   880,   438,
     524,   575,   105,   106,   107,   108,   109,   110,   238,  1109,
     988,   900,   188,   423,    91,   897,   111,   112,   486,   196,
    1183,  1146,   565,    58,   113,   548,   549,    73,   551,  1035,
    1042,  1159,  1037,   237,  1038,   105,   106,   107,   108,   109,
     110,   350,  1169,   292,   576,   494,   259,    92,   881,   111,
     112,    66,  1152,   986,    93,  1182,   116,   113,   114,    94,
     189,   117,    79,  1172,   118,   119,    95,   115,   496,   497,
     987,   482,  1175,    90,   184,   169,    80,  1173,  1160,  1184,
     337,  1170,   673,   364,  1147,   676,   677,   678,    81,   116,
     495,   882,   364,  1174,   117,   503,  1148,   118,   119,  1161,
      67,   761,   472,  1086,  -475,  1077,  1146,   608,   477,   762,
     479,   120,    82,   901,    74,   121,   483,   617,   239,   240,
     241,   242,   243,   244,   245,  1002,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   484,
     655,   122,   656,  -202,   123,    91,   659,   660,  1087,   661,
     341,  1090,   190,   621,   618,  1003,   727,  1176,    11,   748,
      70,   752,   666,   667,   668,  1052,   669,    68,   876,  1147,
     770,  1177,   728,   206,   207,   675,  1091,   123,    92,   191,
    1053,  1148,  -202,   895,   513,   155,   688,  1178,  1140,    75,
     622,    36,    45,   693,   124,    37,   749,   156,   753,   729,
     730,   125,   126,   212,   127,   877,  1165,  1166,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     737,   992,   150,   402,   403,  1185,   404,    38,    46,   405,
      76,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   774,  1124,   150,   776,   254,   255,   256,
     257,   258,   781,   433,   269,   627,   647,   648,    77,  1138,
    1139,   787,   628,    39,    47,   793,   794,    86,   105,   106,
     107,   108,   109,   110,   725,   726,    97,   804,  1164,    40,
      41,    98,   111,   112,   731,   732,    48,   733,   732,   104,
     113,   743,   744,   154,    42,   767,   768,   819,   867,   744,
     629,   164,   822,   630,   872,   744,   105,   106,   107,   108,
     109,   110,   904,   905,   938,   939,   631,   178,   367,   179,
     111,   112,   116,   515,   632,   956,   744,   117,   113,   180,
     118,   119,   964,   744,  1068,  1069,   967,   744,   407,   182,
     408,   971,   768,   588,   589,   270,   592,   593,   594,   186,
     633,   181,   597,   598,   599,  1111,  1112,   602,   980,   981,
     116,   185,   883,   982,   981,   117,   984,   939,   118,   119,
     239,   240,   241,   242,   243,   244,   245,   191,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   907,   193,   634,   908,   368,  1006,  1007,   197,   271,
     198,   919,  1008,  1007,  1009,  1007,  1011,   981,  -170,   200,
     123,   921,   923,   272,  1013,  1014,  1015,  1016,   929,   930,
    1018,  1019,   461,   462,   463,   464,   273,   465,  1021,  1022,
     467,   468,   469,  1114,  1115,   199,   942,   473,   474,   475,
     948,   201,   478,    53,   274,  1033,   744,   202,   123,   215,
     952,   208,   369,  1034,   744,   216,   275,  1036,   744,  1040,
     744,   955,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   409,  1047,  1014,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,  1048,   981,   150,   278,
    1049,   981,   217,   990,   991,   218,   994,   219,   996,  1051,
    1016,   263,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,  1074,   744,   410,  1129,  1130,   105,
     106,   107,   108,   109,   110,   251,   252,   253,   254,   255,
     256,   257,   258,   111,   112,  1075,   744,  1076,   744,  1081,
     939,   113,   374,  1088,   905,   220,   105,   106,   107,   108,
     109,   110,  1099,   744,   221,  1043,  1100,  1014,  1101,  1016,
     111,   112,  1127,  1128,  1132,  1128,  1150,  1128,   113,  1151,
    1128,  1154,  1155,   116,   222,   528,  1179,  1128,   117,   223,
     781,   118,   119,   567,   568,   224,  1058,   686,   687,   927,
     928,   225,   226,  1062,   227,   228,   229,   230,   231,   232,
     116,   233,   280,   234,   235,   117,  1071,  1072,   118,   119,
     239,   240,   241,   242,   243,   244,   245,   236,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   281,   105,   106,   107,   108,   109,   110,   252,   253,
     254,   255,   256,   257,   258,   526,   111,   112,   286,   290,
     296,   297,   331,   332,   113,   333,   334,   335,   338,   339,
     340,   123,   239,   240,   241,   242,   243,   244,   245,   345,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   346,   347,   348,   116,   352,   123,   355,
      11,   117,   386,   387,   118,   119,   388,   389,   239,   240,
     241,   242,   243,   244,   245,   401,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   422,
     425,   427,   432,   434,   442,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   441,   444,   150,
     445,   446,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   123,   170,   150,   239,   240,   241,
     242,   243,   244,   245,   447,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   448,   449,
     450,   451,   171,   452,    11,   454,   105,   106,   107,   108,
     109,   110,   456,   455,   457,   458,   172,   459,   466,   476,
     111,   112,   470,   173,   480,   487,   488,   490,   113,   481,
     489,   492,   491,   174,   493,   529,   506,   501,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     116,   508,   150,   558,   516,   117,   522,   530,   118,   119,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   175,   258,   550,   553,   560,   561,   539,   554,   775,
     555,   562,   105,   106,   107,   108,   109,   110,   569,   176,
     570,   572,   579,   582,   583,   584,   111,   112,   585,   590,
     606,   604,   605,   609,   113,   619,   620,   105,   106,   107,
     108,   109,   110,   540,   607,   623,   624,   625,   626,   639,
     640,   111,   112,   649,   644,   643,   663,   671,   679,   113,
     680,   177,   682,   684,   689,   690,   116,   699,   123,   723,
     700,   117,   701,   724,   118,   119,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   702,   747,
     734,   116,   735,   736,   738,   780,   117,   739,   755,   118,
     119,   241,   242,   243,   244,   245,   745,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     993,   754,   541,   750,   740,   741,   742,   758,   759,   760,
     765,   763,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   123,   769,   150,   239,   240,   241,
     242,   243,   244,   245,   771,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   777,   123,
     239,   240,   241,   242,   243,   244,   245,   778,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   779,   764,   766,   808,   795,   796,   801,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     803,   805,   150,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   806,   807,   150,   105,   106,
     107,   108,   109,   110,   811,   809,   815,   812,   825,   813,
     814,   820,   111,   112,   823,   824,   830,   831,   832,   833,
     113,   834,   835,   105,   106,   107,   108,   109,   110,   836,
     837,   838,   848,   849,   851,   852,   853,   111,   112,   855,
     858,   861,   862,   863,   864,   113,   865,   866,   868,   869,
     871,   873,   116,   875,   884,   885,   886,   117,   887,   890,
     118,   119,   899,   902,   903,   920,   925,   931,   934,   936,
     949,   944,   941,   943,   950,   951,   954,   116,   953,   957,
     958,   995,   117,   959,   969,   118,   119,   239,   240,   241,
     242,   243,   244,   245,   960,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   963,   966,
     973,   968,   543,   239,   240,   241,   242,   243,   244,   245,
     972,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   974,   798,   975,   997,  1010,  1012,
     123,   239,   240,   241,   242,   243,   244,   245,  1017,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,  1023,  1024,  1032,   123,  1027,  1025,  1028,  1029,
    1039,  1050,  1044,  1045,  1054,   239,   240,   241,   242,   243,
     244,   245,   788,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   645,  1055,  1059,  1061,
    1063,  1064,  1065,  1066,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,  1067,  1070,   150,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,  1057,  1073,   150,   239,   240,   241,   242,   243,   244,
     245,  1082,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   239,   240,   241,   242,   243,
     244,   245,  1083,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,  1092,  1107,  1094,  1102,
    1103,  1104,  1108,  1095,   239,   240,   241,   242,   243,   244,
     245,   789,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,  1096,  1113,  1105,  1106,  1110,
     239,   240,   241,   242,   243,   244,   245,   392,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,  1118,  1116,  1117,   981,  1119,  1120,  1122,   239,   240,
     241,   242,   243,   244,   245,   525,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,  1123,
    1134,  1125,  1126,  1131,  1133,  1144,  1136,  1137,  1141,  1149,
    1153,  1158,   239,   240,   241,   242,   243,   244,   245,   531,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   239,   240,   241,   242,   243,   244,   245,
    1186,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   239,   240,   241,   242,   243,   244,
     245,  1156,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   239,   240,   241,   242,   243,
     244,   245,  1167,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,  1189,  1180,   532,  1190,
    1191,  1192,  1193,  1194,   165,   665,   361,   424,   989,   436,
     638,   821,   239,   240,   241,   242,   243,   244,   245,   533,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   683,   194,    99,   354,   505,  1056,   652,
    1041,   239,   240,   241,   242,   243,   244,   245,   534,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,  1168,   205,     0,     0,   878,   239,   240,   241,
     242,   243,   244,   245,   535,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   894,
       0,     0,     0,   600,     0,   239,   240,   241,   242,   243,
     244,   245,   536,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   239,
     240,   241,   242,   243,   244,   245,   537,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     239,   240,   241,   242,   243,   244,   245,   538,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   239,   240,   241,   242,   243,   244,   245,   542,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   239,   240,   241,   242,   243,   244,   245,   792,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,     0,   797,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   239,   240,
     241,   242,   243,   244,   245,   799,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
       0,     0,     0,     0,   239,   240,   241,   242,   243,   244,
     245,   800,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,     0,     0,     0,     0,
       0,     0,   239,   240,   241,   242,   243,   244,   245,   859,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   239,   240,   241,   242,
     243,   244,   245,   909,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   239,   240,   241,
     242,   243,   244,   245,   933,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   239,   240,
     241,   242,   243,   244,   245,   976,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   239,
     240,   241,   242,   243,   244,   245,   998,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     239,   240,   241,   242,   243,   244,   245,   999,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,     0,     0,   239,   240,   241,   242,   243,   244,
     245,  1000,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   239,   240,   241,   242,   243,
     244,   245,  1020,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   910,   911,     0,
       0,     0,   912,     0,   913,     0,     0,     0,  1026,   242,
     243,   244,   245,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   914,   915,     0,
     916,     0,     0,     0,     0,     0,  1030,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
     706,     0,     0,     0,   706,     0,     0,     1,     0,     0,
    1031,     2,     0,     0,     0,     0,   707,     0,     0,     0,
     708,     0,     0,   709,   708,   710,     0,   709,   711,   710,
       0,  1078,   711,     3,     0,     0,     0,     0,   712,     0,
       0,     0,   712,     0,     0,   713,   714,     0,     0,   713,
     714,     0,  1097,     0,     0,     4,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   917,   918,   715,     0,
       0,     0,   715,  1098,     0,     0,     0,     0,     0,     0,
     716,     0,     0,     0,     0,     0,     0,     0,   212,     0,
       0,   517,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   717,     0,     0,
       0,   717,     0,     0,     0,     0,     0,   298,   299,     0,
     300,     0,   301,   302,     0,     0,     0,   718,     0,     0,
       7,   718,     8,   719,     0,   303,     9,   719,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,   658,     0,   304,   305,   306,   307,     0,
       0,     0,   308,    12,     0,     0,    13,   309,     0,     0,
       0,     0,    14,     0,     0,     0,   720,     0,     0,     0,
     720,     0,   310,     0,     0,     0,     0,     0,     0,     0,
     311,     0,     0,     0,     0,   312,     0,     0,     0,     0,
       0,     0,   313,     0,     0,   314,     0,     0,   315,   316,
       0,     0,     0,     0,     0,   239,   240,   241,   242,   243,
     244,   245,   317,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,     0,     0,     0,
       0,   318,   319,     0,   320,   321,     0,     0,     0,     0,
     322,     0,   323,     0,     0,     0,     0,   324,   325,     0,
       0,     0,     0,   326,     0,     0,     0,     0,   327,     0,
     328,     0,     0,     0,   329,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,     0,     0,     0,
     239,   240,   241,   242,   243,   244,   245,   662,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,     0,     0,     0,   238,     0,     0,     0,
     896,     0,     0,   239,   240,   241,   242,   243,   244,   245,
     657,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,   786,     0,     0,     0,   239,
     240,   241,   242,   243,   244,   245,   897,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,   239,   240,   241,   242,   243,   244,   245,   552,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,     0,   239,   240,   241,   242,   243,
     244,   245,   674,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   240,   241,   242,   243,
     244,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,  -476,  -476,  -476,  -476,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258
};

static const yytype_int16 yycheck[] =
{
      57,   764,   353,   157,   618,   626,   566,   691,   622,     3,
     158,   275,   577,   578,   471,   472,   581,     3,     3,     3,
     477,     3,   479,    20,    20,   291,     3,     3,   766,    72,
     116,   703,   704,    80,   149,     6,     6,     4,     5,     6,
       7,    80,   884,   100,   101,    63,   100,    18,   149,     8,
     722,     3,   890,    56,   111,   112,   113,   820,   174,     3,
     117,   185,   116,     3,    41,     3,    69,   215,    10,    11,
      12,    13,    14,    15,    16,   161,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   147,
      57,   174,     3,   150,   921,    10,    11,    12,    13,    14,
      15,    16,     4,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    56,   233,   515,    71,
     235,   203,   885,   886,   738,    69,     9,     3,   102,    69,
     512,     0,   514,   151,   235,   749,   102,    20,   196,   753,
     705,     3,   181,   197,   191,    56,   767,   233,    86,   546,
     344,   208,   235,   235,   185,   212,   199,   829,    69,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   145,   145,   194,   441,   235,   236,
     446,   447,   239,   240,   241,   242,   243,   102,   454,   175,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,  1044,   351,   163,   262,   354,  1045,    10,    11,
      12,    13,    14,    15,    16,   231,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   423,
     158,  1058,     3,    63,   136,   232,   232,   975,   185,   233,
     924,   435,   118,   219,   220,   221,   222,   233,   233,   233,
     810,   233,   866,   401,   868,   232,   118,   871,   225,   226,
     227,   235,   410,   877,    38,     3,   233,   195,   650,   235,
     652,   101,   116,   427,   731,   672,   733,   734,     3,     3,
      63,    44,    45,     3,   341,     3,   175,    18,   129,    39,
      41,   185,   234,   235,    95,    96,    59,     3,    59,    70,
     196,   196,   174,    95,    96,   569,   363,   364,   572,   503,
     203,     9,   201,   579,   371,    13,    86,   161,   101,   160,
     235,   151,     3,     4,     5,     6,     7,     8,     3,  1092,
     895,   133,    70,   261,    76,    85,    17,    18,   233,   235,
      86,    72,   235,   185,    25,   402,   403,   118,   405,   963,
     971,   103,   966,   410,   968,     3,     4,     5,     6,     7,
       8,   233,    73,    69,   194,   116,    41,   109,   151,    17,
      18,     3,    18,   147,   116,   145,    57,    25,    26,   121,
     118,    62,   102,   144,    65,    66,   128,    35,   232,   233,
     164,    18,    59,   118,   118,   158,   116,   158,   150,   145,
     118,   112,   550,   204,   135,   553,   554,   555,   128,    57,
     161,   194,   204,   174,    62,   343,   147,    65,    66,   171,
       3,   117,   314,   153,   175,  1039,    72,   484,   320,   125,
     322,    79,   152,   235,    39,    83,    63,   196,    10,    11,
      12,    13,    14,    15,    16,   205,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    86,
     517,   109,   519,   196,   145,    76,   523,   524,   198,   526,
     203,   166,    77,   196,   233,   235,   192,   144,   175,   196,
       3,   196,   539,   540,   541,     5,   543,   118,   196,   135,
     638,   158,   208,   232,   233,   552,   191,   145,   109,   232,
      20,   147,   235,   769,   201,   116,   563,   174,  1132,   179,
     233,    71,    71,   570,   162,    75,   233,   128,   233,    67,
      68,   169,   170,   204,   172,   233,  1150,  1151,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     607,   902,   233,    13,    14,  1179,    16,   117,   117,    19,
     117,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   640,  1115,   233,   643,    26,    27,    28,
      29,    30,   649,   234,   235,    56,   234,   235,   185,  1130,
    1131,   658,    63,   163,   163,   662,   663,     3,     3,     4,
       5,     6,     7,     8,   234,   235,     3,   674,  1149,   179,
     180,     3,    17,    18,   234,   235,   185,   234,   235,   235,
      25,   234,   235,     3,   194,   234,   235,   694,   234,   235,
     101,     3,   699,   104,   234,   235,     3,     4,     5,     6,
       7,     8,   234,   235,   234,   235,   117,   232,    53,   209,
      17,    18,    57,   235,   125,   234,   235,    62,    25,     3,
      65,    66,   234,   235,    47,    48,   234,   235,    35,   147,
      37,   234,   235,   464,   465,    61,   467,   468,   469,     3,
     151,    41,   473,   474,   475,    47,    48,   478,   234,   235,
      57,   209,   759,   234,   235,    62,   234,   235,    65,    66,
      10,    11,    12,    13,    14,    15,    16,   232,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   788,     3,   194,   791,   130,   234,   235,   209,   115,
     209,   798,   234,   235,   234,   235,   234,   235,   124,     3,
     145,   808,   809,   129,   234,   235,   234,   235,   815,   816,
     234,   235,   301,   302,   303,   304,   142,   306,   234,   235,
     309,   310,   311,   232,   233,   209,   833,   316,   317,   318,
     837,   178,   321,     8,   160,   234,   235,     3,   145,   233,
     847,     9,   187,   234,   235,   233,   172,   234,   235,   234,
     235,   858,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   168,   234,   235,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   234,   235,   233,    41,
     234,   235,   233,   900,   901,   233,   903,   233,   905,   234,
     235,   235,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   234,   235,   233,   232,   233,     3,
       4,     5,     6,     7,     8,    23,    24,    25,    26,    27,
      28,    29,    30,    17,    18,   234,   235,   234,   235,   234,
     235,    25,    26,   234,   235,   233,     3,     4,     5,     6,
       7,     8,   234,   235,   233,   972,   234,   235,   234,   235,
      17,    18,   234,   235,   234,   235,   234,   235,    25,   234,
     235,   234,   235,    57,   233,   235,   234,   235,    62,   233,
     997,    65,    66,   437,   438,   233,  1003,   561,   562,   813,
     814,   233,   233,  1010,   233,   233,   233,   233,   233,   233,
      57,   233,    43,   233,   233,    62,  1023,  1024,    65,    66,
      10,    11,    12,    13,    14,    15,    16,   233,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    43,     3,     4,     5,     6,     7,     8,    24,    25,
      26,    27,    28,    29,    30,   102,    17,    18,    56,    56,
      56,     3,     3,   147,    25,   209,     3,   147,   209,     3,
      26,   145,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     3,     3,     3,    57,     3,   145,     3,
     175,    62,   234,   234,    65,    66,   234,   234,    10,    11,
      12,    13,    14,    15,    16,   233,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
       3,     3,   234,     3,   146,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   124,     3,   233,
       3,     3,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   145,    33,   233,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,     3,
       3,     3,    60,     3,   175,     3,     3,     4,     5,     6,
       7,     8,     3,   178,     3,     3,    74,   233,   233,   233,
      17,    18,    52,    81,   233,     3,     3,     3,    25,   233,
     147,   209,   147,    91,     3,   235,     3,   148,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
      57,     3,   233,   235,   234,    62,   234,   234,    65,    66,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   139,    30,   233,   233,   125,   125,   235,   233,    86,
     233,   125,     3,     4,     5,     6,     7,     8,   124,   157,
     147,   124,     3,     3,   178,   178,    17,    18,     5,     4,
     145,     5,     5,   198,    25,   147,     3,     3,     4,     5,
       6,     7,     8,   235,   233,     3,     3,   147,     3,    51,
     131,    17,    18,   233,   149,    20,   123,   234,   234,    25,
     106,   199,     3,   105,     3,     3,    57,   233,   145,     3,
     125,    62,   125,     3,    65,    66,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   233,     3,
     234,    57,   234,    63,   233,    86,    62,   233,     3,    65,
      66,    12,    13,    14,    15,    16,   198,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      86,   147,   235,   198,   233,   233,   233,     3,   233,   125,
     125,   233,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   145,     3,   233,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   125,   145,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     3,   233,   233,    51,   234,   234,   234,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     234,   234,   233,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   234,   234,   233,     3,     4,
       5,     6,     7,     8,   124,   111,    20,   233,     3,   233,
     233,   233,    17,    18,   233,   233,   145,     3,   233,   233,
      25,   233,    42,     3,     4,     5,     6,     7,     8,     3,
     233,     4,   125,   125,     5,   174,     4,    17,    18,     4,
     233,     3,     3,     3,     3,    25,     3,   233,   233,   198,
     233,   198,    57,     3,   233,   233,   233,    62,     3,   233,
      65,    66,   235,   191,    20,   234,     3,     3,     3,     3,
     233,    41,     5,     5,   233,   233,     4,    57,   234,   234,
     234,    86,    62,   234,   198,    65,    66,    10,    11,    12,
      13,    14,    15,    16,   235,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   233,   233,
     125,   233,   235,    10,    11,    12,    13,    14,    15,    16,
     233,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   125,   235,   233,   233,    20,    18,
     145,    10,    11,    12,    13,    14,    15,    16,     3,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   233,   233,     3,   145,   234,   125,   234,   234,
     233,     3,   233,   233,     3,    10,    11,    12,    13,    14,
      15,    16,   105,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   235,    51,   105,     3,
     199,   156,     3,     3,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,     5,     5,   233,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   159,   234,   233,    10,    11,    12,    13,    14,    15,
      16,   156,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,     5,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   121,   167,     3,     3,
       3,     3,   167,   234,    10,    11,    12,    13,    14,    15,
      16,   234,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   234,   156,   233,   233,   233,
      10,    11,    12,    13,    14,    15,    16,   234,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   132,     3,     3,   235,   132,     3,     3,    10,    11,
      12,    13,    14,    15,    16,   234,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
     165,   234,   234,   233,   233,     5,     3,     3,   164,   233,
       3,   113,    10,    11,    12,    13,    14,    15,    16,   234,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     183,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    72,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   201,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   147,   126,   234,   147,
     143,   143,     5,     5,    64,   529,   213,   262,   899,   269,
     499,   698,    10,    11,    12,    13,    14,    15,    16,   234,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   559,    79,    52,   202,   345,   997,   513,
     971,    10,    11,    12,    13,    14,    15,    16,   234,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,  1155,   104,    -1,    -1,   756,    10,    11,    12,
      13,    14,    15,    16,   234,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   768,
      -1,    -1,    -1,   476,    -1,    10,    11,    12,    13,    14,
      15,    16,   234,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   234,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   234,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   234,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   234,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,   234,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   234,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   234,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,   234,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   234,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   234,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   234,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   234,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   234,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   234,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   234,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    77,    78,    -1,
      -1,    -1,    82,    -1,    84,    -1,    -1,    -1,   234,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   107,   108,    -1,
     110,    -1,    -1,    -1,    -1,    -1,   234,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      18,    -1,    -1,    -1,    18,    -1,    -1,    32,    -1,    -1,
     234,    36,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      38,    -1,    -1,    41,    38,    43,    -1,    41,    46,    43,
      -1,   234,    46,    58,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    56,    -1,    -1,    63,    64,    -1,    -1,    63,
      64,    -1,   234,    -1,    -1,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   206,   207,    86,    -1,
      -1,    -1,    86,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,
      -1,   186,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,    -1,    54,    55,    -1,    -1,    -1,   145,    -1,    -1,
     155,   145,   157,   151,    -1,    67,   161,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,
     175,    -1,    -1,   186,    -1,    87,    88,    89,    90,    -1,
      -1,    -1,    94,   188,    -1,    -1,   191,    99,    -1,    -1,
      -1,    -1,   197,    -1,    -1,    -1,   194,    -1,    -1,    -1,
     194,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,
      -1,    -1,   134,    -1,    -1,   137,    -1,    -1,   140,   141,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,   154,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,   173,   174,    -1,   176,   177,    -1,    -1,    -1,    -1,
     182,    -1,   184,    -1,    -1,    -1,    -1,   189,   190,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,   200,    -1,
     202,    -1,    -1,    -1,   206,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,   102,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      39,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      95,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    95,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    85,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    40,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    40,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    36,    58,    80,    81,   119,   155,   157,   161,
     174,   175,   188,   191,   197,   237,   246,   247,   280,   284,
     285,   288,   289,   292,   293,   294,   296,   306,   307,   310,
     312,   313,   314,   336,   185,   185,    71,    75,   117,   163,
     179,   180,   194,   318,   281,    71,   117,   163,   185,   298,
     185,   185,   298,     8,   163,   337,   338,   261,   185,   298,
     308,     3,    71,     0,   231,   291,     3,     3,   118,   311,
       3,     3,    70,   118,   311,   179,   117,   185,     3,   102,
     116,   128,   152,   282,     3,   118,     3,     3,   118,     3,
     118,    76,   109,   116,   121,   128,   299,     3,     3,   299,
       9,    20,     3,    86,   235,     3,     4,     5,     6,     7,
       8,    17,    18,    25,    26,    35,    57,    62,    65,    66,
      79,    83,   109,   145,   162,   169,   170,   172,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     233,   238,   262,   263,     3,   116,   128,     3,   233,   265,
     266,   267,   269,   279,     3,   237,    44,    45,    59,   158,
      33,    60,    74,    81,    91,   139,   157,   199,   232,   209,
       3,    41,   147,     3,   118,   209,     3,     3,    70,   118,
     311,   232,   283,     3,   282,   102,   235,   209,   209,   209,
       3,   178,     3,   238,   238,   338,   232,   233,     9,   238,
     238,   238,   204,   238,   245,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   238,     3,    10,
      11,    12,    13,    14,    15,    16,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    41,
     264,   102,   235,   235,   232,   264,   247,   265,   174,   235,
      61,   115,   129,   142,   160,   172,   270,   272,    41,   268,
      43,    43,    56,    69,     3,    69,    56,     3,    56,    69,
      56,     3,    69,     3,    56,    69,    56,     3,    49,    50,
      52,    54,    55,    67,    87,    88,    89,    90,    94,    99,
     114,   122,   127,   134,   137,   140,   141,   154,   173,   174,
     176,   177,   182,   184,   189,   190,   195,   200,   202,   206,
     332,     3,   147,   209,     3,   147,     3,   118,   209,     3,
      26,   203,   248,   196,   265,     3,     3,     3,     3,   174,
     233,   300,     3,   174,   300,     3,   238,   239,   240,   238,
     238,   245,    95,    96,   204,   247,   238,    53,   130,   187,
     238,   243,   238,   238,    26,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   234,   234,   234,   234,
     238,   238,   234,   238,   238,   238,   238,   238,     6,    18,
     145,   233,    13,    14,    16,    19,   238,    35,    37,   168,
     233,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,     3,   265,   263,     3,   290,     3,   100,   116,
     197,   276,   234,   234,     3,   309,   266,   129,   160,   273,
     267,   124,   146,   271,     3,     3,     3,     3,     3,     3,
       3,     3,     3,   332,     3,   178,     3,     3,     3,   233,
     328,   328,   328,   328,   328,   328,   233,   328,   328,   328,
      52,   329,   329,   328,   328,   328,   233,   329,   328,   329,
     233,   233,    18,    63,    86,   196,   233,     3,     3,   147,
       3,   147,   209,     3,   116,   161,   232,   233,   334,   335,
     238,   148,   254,   265,   248,   283,     3,   305,     3,   301,
     201,   247,   305,   201,   247,   235,   234,   186,    95,    96,
     238,   238,   234,   102,   235,   234,   102,   238,   235,   235,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   235,
     235,   235,   234,   235,     6,   145,   241,   247,   238,   238,
     233,   238,    40,   233,   233,   233,   247,   248,   235,   264,
     125,   125,   125,    20,   232,   235,   248,   271,   271,   124,
     147,   267,   124,    63,   101,   151,   194,   332,   332,     3,
     327,   332,     3,   178,   178,     5,   330,   331,   330,   330,
       4,   333,   330,   330,   330,   331,   331,   330,   330,   330,
     333,   331,   330,   331,     5,     5,   145,   233,   238,   198,
       3,   219,   220,   221,   222,   286,   287,   196,   233,   147,
       3,   196,   233,     3,     3,   147,     3,    56,    63,   101,
     104,   117,   125,   151,   194,   319,   320,   326,   268,    51,
     131,   257,   248,    20,   149,   235,   297,   234,   235,   233,
     302,   297,   302,   297,   239,   238,   238,    95,   186,   238,
     238,   238,   102,   123,   244,   244,   238,   238,   238,   238,
     239,   234,   242,   247,    40,   238,   247,   247,   247,   234,
     106,   249,     3,   276,   105,   277,   277,   277,   238,     3,
       3,   254,   267,   238,   147,   196,   274,   275,   267,   233,
     125,   125,   233,   327,   327,   332,    18,    34,    38,    41,
      43,    46,    56,    63,    64,    86,    98,   125,   145,   151,
     194,   295,   327,     3,     3,   234,   235,   192,   208,    67,
      68,   234,   235,   234,   234,   234,    63,   238,   233,   233,
     233,   233,   233,   234,   235,   198,   286,     3,   196,   233,
     198,   286,   196,   233,   147,     3,   233,   334,     3,   233,
     125,   117,   125,   233,   233,   125,   233,   234,   235,     3,
     247,     3,   255,   256,   238,    86,   238,   125,     3,     3,
      86,   238,   304,   235,   297,   297,    95,   238,   105,   234,
     234,   235,   234,   238,   238,   234,   234,   234,   235,   234,
     234,   234,   239,   234,   238,   234,   234,   234,    51,   111,
     253,   124,   233,   233,   233,    20,    20,   232,   257,   238,
     233,   275,   238,   233,   233,     3,   325,   295,   295,   327,
     145,     3,   233,   233,   233,    42,     3,   233,     4,     4,
       5,     6,     7,    57,   225,   226,   227,   233,   125,   125,
     295,     5,   174,     4,   331,     4,   331,   331,   233,   234,
     286,     3,     3,     3,     3,     3,   233,   234,   233,   198,
     286,   233,   234,   198,   286,     3,   196,   233,   319,    63,
     101,   151,   194,   238,   233,   233,   233,     3,   260,   260,
     233,   325,   315,   334,   320,   332,    39,    85,   251,   235,
     133,   235,   191,    20,   234,   235,   303,   238,   238,   234,
      77,    78,    82,    84,   107,   108,   110,   206,   207,   238,
     234,   238,   250,   238,   254,     3,   278,   278,   278,   238,
     238,     3,   260,   234,     3,   322,     3,   321,   234,   235,
     295,     5,   238,     5,    41,    63,   151,   194,   238,   233,
     233,   233,   238,   234,     4,   238,   234,   234,   234,   234,
     235,   286,   286,   233,   234,   286,   233,   234,   233,   198,
     286,   234,   233,   125,   125,   233,   234,   322,   260,   260,
     234,   235,   234,   321,   234,    38,   147,   164,   327,   256,
     238,   238,   305,    86,   238,    86,   238,   233,   234,   234,
     234,   251,   205,   235,   252,   257,   234,   235,   234,   234,
      20,   234,    18,   234,   235,   234,   235,     3,   234,   235,
     234,   234,   235,   233,   233,   125,   234,   234,   234,   234,
     234,   234,     3,   234,   234,   286,   234,   286,   286,   233,
     234,   315,   334,   238,   233,   233,   325,   234,   234,   234,
       3,   234,     5,    20,     3,    51,   304,   159,   238,   105,
     258,     3,   238,   199,   156,     3,     3,     5,    47,    48,
       5,   238,   238,   234,   234,   234,   234,   286,   234,   322,
     321,   234,   156,     5,    80,   181,   153,   198,   234,   251,
     166,   191,   121,   259,     3,   234,   234,   234,   234,   234,
     234,   234,     3,     3,     3,   233,   233,   167,   167,   260,
     233,    47,    48,   156,   232,   233,     3,     3,   132,   132,
       3,   323,     3,     3,   323,   234,   234,   234,   235,   232,
     233,   233,   234,   233,   165,   324,     3,     3,   323,   323,
     324,   164,   316,   317,     5,    18,    72,   135,   147,   233,
     234,   234,    18,     3,   234,   235,    72,   199,   113,   103,
     150,   171,    80,   191,   323,   324,   324,   201,   317,    73,
     112,    59,   144,   158,   174,    59,   144,   158,   174,   234,
     126,    86,   145,    86,   145,   324,   183,     4,   136,   147,
     147,   143,   143,     5,     5
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
#line 339 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        (yyval.exprval) = expr_make_column((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:
#line 345 "parser/evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); { char qn[256]; snprintf(qn, sizeof(qn), "%s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); (yyval.exprval) = expr_make_column(qn); } free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 346 "parser/evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.exprval) = expr_make_string((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 348 "parser/evoparser.y"
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
#line 366 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[(1) - (1)].intval));
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (1)].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 9:
#line 374 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[(1) - (1)].floatval));
        char buf[64];
        snprintf(buf, sizeof(buf), "%g", (yyvsp[(1) - (1)].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[(1) - (1)].floatval));
    ;}
    break;

  case 10:
#line 382 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[(1) - (1)].intval));
        GetInsertions((yyvsp[(1) - (1)].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[(1) - (1)].intval));
    ;}
    break;

  case 11:
#line 388 "parser/evoparser.y"
    {
        emit("NULL");
        GetInsertions("\x01NULL\x01");
        (yyval.exprval) = expr_make_null();
    ;}
    break;

  case 12:
#line 395 "parser/evoparser.y"
    { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 13:
#line 396 "parser/evoparser.y"
    { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 14:
#line 397 "parser/evoparser.y"
    { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 15:
#line 398 "parser/evoparser.y"
    { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 16:
#line 399 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 17:
#line 400 "parser/evoparser.y"
    { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 18:
#line 401 "parser/evoparser.y"
    { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 19:
#line 402 "parser/evoparser.y"
    { (yyval.exprval) = (yyvsp[(2) - (3)].exprval); ;}
    break;

  case 20:
#line 403 "parser/evoparser.y"
    { emit("AND"); (yyval.exprval) = expr_make_and((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 21:
#line 404 "parser/evoparser.y"
    { emit("OR"); (yyval.exprval) = expr_make_or((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 22:
#line 405 "parser/evoparser.y"
    { emit("XOR"); (yyval.exprval) = expr_make_xor((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 23:
#line 406 "parser/evoparser.y"
    { emit("BITOR"); (yyval.exprval) = expr_make_binop(EXPR_BITOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 24:
#line 407 "parser/evoparser.y"
    { emit("BITAND"); (yyval.exprval) = expr_make_binop(EXPR_BITAND, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 25:
#line 408 "parser/evoparser.y"
    { emit("BITXOR"); (yyval.exprval) = expr_make_binop(EXPR_BITXOR, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 26:
#line 409 "parser/evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.exprval) = expr_make_binop((yyvsp[(2) - (3)].subtok)==1 ? EXPR_SHIFT_LEFT : EXPR_SHIFT_RIGHT, (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 27:
#line 410 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 28:
#line 411 "parser/evoparser.y"
    { emit("NOT"); (yyval.exprval) = expr_make_not((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 29:
#line 413 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
        (yyval.exprval) = expr_make_cmp((yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval));
    ;}
    break;

  case 30:
#line 418 "parser/evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 31:
#line 419 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 32:
#line 420 "parser/evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 33:
#line 421 "parser/evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 34:
#line 424 "parser/evoparser.y"
    { emit("ISNULL"); (yyval.exprval) = expr_make_is_null((yyvsp[(1) - (3)].exprval)); ;}
    break;

  case 35:
#line 425 "parser/evoparser.y"
    { emit("ISNULL"); emit("NOT"); (yyval.exprval) = expr_make_is_not_null((yyvsp[(1) - (4)].exprval)); ;}
    break;

  case 36:
#line 426 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 37:
#line 427 "parser/evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 38:
#line 428 "parser/evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.exprval) = (yyvsp[(3) - (3)].exprval); ;}
    break;

  case 39:
#line 431 "parser/evoparser.y"
    { emit("BETWEEN"); (yyval.exprval) = expr_make_between((yyvsp[(1) - (5)].exprval), (yyvsp[(3) - (5)].exprval), (yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 40:
#line 432 "parser/evoparser.y"
    { emit("NOTBETWEEN"); (yyval.exprval) = expr_make_not_between((yyvsp[(1) - (6)].exprval), (yyvsp[(4) - (6)].exprval), (yyvsp[(6) - (6)].exprval)); ;}
    break;

  case 41:
#line 435 "parser/evoparser.y"
    { (yyval.intval) = 1; if (g_expr.inListCount < MAX_IN_LIST) g_expr.inListExprs[g_expr.inListCount++] = (yyvsp[(1) - (1)].exprval); ;}
    break;

  case 42:
#line 436 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); if (g_expr.inListCount < MAX_IN_LIST) { /* shift right and insert at front */ int _i; for(_i=g_expr.inListCount; _i>0; _i--) g_expr.inListExprs[_i]=g_expr.inListExprs[_i-1]; g_expr.inListExprs[0]=(yyvsp[(1) - (3)].exprval); g_expr.inListCount++; } ;}
    break;

  case 43:
#line 439 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 45:
#line 443 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 46:
#line 443 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); (yyval.exprval) = expr_make_in((yyvsp[(1) - (6)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 47:
#line 444 "parser/evoparser.y"
    { g_expr.inListCount = 0; ;}
    break;

  case 48:
#line 444 "parser/evoparser.y"
    { emit("ISIN %d", (yyvsp[(6) - (7)].intval)); emit("NOT"); (yyval.exprval) = expr_make_not_in((yyvsp[(1) - (7)].exprval), g_expr.inListExprs, g_expr.inListCount); ;}
    break;

  case 49:
#line 445 "parser/evoparser.y"
    { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[(1) - (5)].exprval); ;}
    break;

  case 50:
#line 446 "parser/evoparser.y"
    { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[(1) - (6)].exprval); ;}
    break;

  case 51:
#line 447 "parser/evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); (yyval.exprval) = NULL; ;}
    break;

  case 52:
#line 451 "parser/evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); (yyval.exprval) = expr_make_column((yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 53:
#line 455 "parser/evoparser.y"
    { emit("COUNTALL"); (yyval.exprval) = expr_make_count_star(); ;}
    break;

  case 54:
#line 456 "parser/evoparser.y"
    { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_count((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 55:
#line 457 "parser/evoparser.y"
    { emit(" CALL 1 SUM"); (yyval.exprval) = expr_make_sum((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 56:
#line 458 "parser/evoparser.y"
    { emit(" CALL 1 AVG"); (yyval.exprval) = expr_make_avg((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 57:
#line 459 "parser/evoparser.y"
    { emit(" CALL 1 MIN"); (yyval.exprval) = expr_make_min((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 58:
#line 460 "parser/evoparser.y"
    { emit(" CALL 1 MAX"); (yyval.exprval) = expr_make_max((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 59:
#line 462 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 60:
#line 463 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 61:
#line 464 "parser/evoparser.y"
    { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval), NULL); ;}
    break;

  case 62:
#line 465 "parser/evoparser.y"
    { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_substring((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 63:
#line 466 "parser/evoparser.y"
    { emit("CALL 1 TRIM"); (yyval.exprval) = expr_make_trim(3, NULL, (yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 64:
#line 467 "parser/evoparser.y"
    { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (7)].intval), (yyvsp[(4) - (7)].exprval), (yyvsp[(6) - (7)].exprval)); ;}
    break;

  case 65:
#line 468 "parser/evoparser.y"
    { emit("CALL 2 TRIM"); (yyval.exprval) = expr_make_trim((yyvsp[(3) - (6)].intval), NULL, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 66:
#line 469 "parser/evoparser.y"
    { emit("CALL 1 UPPER"); (yyval.exprval) = expr_make_upper((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 67:
#line 470 "parser/evoparser.y"
    { emit("CALL 1 LOWER"); (yyval.exprval) = expr_make_lower((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 68:
#line 471 "parser/evoparser.y"
    { emit("CALL 1 LENGTH"); (yyval.exprval) = expr_make_length((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 69:
#line 472 "parser/evoparser.y"
    { emit("CALL 2 CONCAT"); (yyval.exprval) = expr_make_concat((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 70:
#line 473 "parser/evoparser.y"
    { emit("CALL 3 REPLACE"); (yyval.exprval) = expr_make_replace((yyvsp[(3) - (8)].exprval), (yyvsp[(5) - (8)].exprval), (yyvsp[(7) - (8)].exprval)); ;}
    break;

  case 71:
#line 474 "parser/evoparser.y"
    { emit("CALL 2 COALESCE"); (yyval.exprval) = expr_make_coalesce((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 72:
#line 475 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID");
                                                        (yyval.exprval) = expr_make_gen_random_uuid();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 73:
#line 482 "parser/evoparser.y"
    {
                                                        emit("CALL 0 GEN_RANDOM_UUID_V7");
                                                        (yyval.exprval) = expr_make_gen_random_uuid_v7();
                                                        char _uuid[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _uuid, sizeof(_uuid));
                                                        GetInsertions(_uuid);
                                                    ;}
    break;

  case 74:
#line 489 "parser/evoparser.y"
    {
                                                        emit("CALL 0 SNOWFLAKE_ID");
                                                        (yyval.exprval) = expr_make_snowflake_id();
                                                        char _sf[64];
                                                        expr_evaluate((yyval.exprval), NULL, NULL, 0, _sf, sizeof(_sf));
                                                        GetInsertions(_sf);
                                                    ;}
    break;

  case 75:
#line 496 "parser/evoparser.y"
    {
                                                        emit("CALL 0 LAST_INSERT_ID");
                                                        (yyval.exprval) = expr_make_last_insert_id();
                                                    ;}
    break;

  case 76:
#line 500 "parser/evoparser.y"
    {
                                                        emit("CALL 1 EVO_SLEEP");
                                                        (yyval.exprval) = expr_make_evo_sleep((yyvsp[(3) - (4)].exprval));
                                                    ;}
    break;

  case 77:
#line 504 "parser/evoparser.y"
    {
                                                        emit("CALL 2 EVO_JITTER");
                                                        (yyval.exprval) = expr_make_evo_jitter((yyvsp[(3) - (6)].exprval), (yyvsp[(5) - (6)].exprval));
                                                    ;}
    break;

  case 78:
#line 510 "parser/evoparser.y"
    { emit("NUMBER 1"); (yyval.intval) = 1; ;}
    break;

  case 79:
#line 511 "parser/evoparser.y"
    { emit("NUMBER 2"); (yyval.intval) = 2; ;}
    break;

  case 80:
#line 512 "parser/evoparser.y"
    { emit("NUMBER 3"); (yyval.intval) = 3; ;}
    break;

  case 81:
#line 515 "parser/evoparser.y"
    { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); ;}
    break;

  case 82:
#line 516 "parser/evoparser.y"
    { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); ;}
    break;

  case 83:
#line 519 "parser/evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 84:
#line 520 "parser/evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 85:
#line 521 "parser/evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 86:
#line 522 "parser/evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 87:
#line 523 "parser/evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 88:
#line 524 "parser/evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 89:
#line 525 "parser/evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 90:
#line 526 "parser/evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 91:
#line 527 "parser/evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 92:
#line 531 "parser/evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (4)].exprval), g_expr.caseWhenCount, NULL); ;}
    break;

  case 93:
#line 533 "parser/evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); (yyval.exprval) = expr_make_case_simple((yyvsp[(2) - (6)].exprval), g_expr.caseWhenCount, (yyvsp[(5) - (6)].exprval)); ;}
    break;

  case 94:
#line 535 "parser/evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, NULL); ;}
    break;

  case 95:
#line 537 "parser/evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); (yyval.exprval) = expr_make_case_searched(g_expr.caseWhenCount, (yyvsp[(4) - (5)].exprval)); ;}
    break;

  case 96:
#line 541 "parser/evoparser.y"
    {
        g_expr.caseWhenCount = 0;
        g_expr.caseWhenExprs[0] = (yyvsp[(2) - (4)].exprval);
        g_expr.caseThenExprs[0] = (yyvsp[(4) - (4)].exprval);
        g_expr.caseWhenCount = 1;
        (yyval.intval) = 1;
    ;}
    break;

  case 97:
#line 549 "parser/evoparser.y"
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
#line 559 "parser/evoparser.y"
    { emit("LIKE"); (yyval.exprval) = expr_make_like((yyvsp[(1) - (3)].exprval), (yyvsp[(3) - (3)].exprval)); ;}
    break;

  case 99:
#line 560 "parser/evoparser.y"
    { emit("NOTLIKE"); (yyval.exprval) = expr_make_not_like((yyvsp[(1) - (4)].exprval), (yyvsp[(4) - (4)].exprval)); ;}
    break;

  case 100:
#line 563 "parser/evoparser.y"
    { emit("REGEXP"); (yyval.exprval) = (yyvsp[(1) - (3)].exprval); ;}
    break;

  case 101:
#line 564 "parser/evoparser.y"
    { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[(1) - (4)].exprval); ;}
    break;

  case 102:
#line 568 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_timestamp();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 103:
#line 576 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_date();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 104:
#line 584 "parser/evoparser.y"
    {
        emit("NOW");
        (yyval.exprval) = expr_make_current_time();
        char _ts[64];
        expr_evaluate((yyval.exprval), NULL, NULL, 0, _ts, sizeof(_ts));
        GetInsertions(_ts);
    ;}
    break;

  case 105:
#line 595 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 106:
#line 604 "parser/evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); g_sel.distinct = ((yyvsp[(2) - (3)].intval) & 02) ? 1 : 0; ;}
    break;

  case 107:
#line 609 "parser/evoparser.y"
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
#line 620 "parser/evoparser.y"
    { emit("WHERE"); g_expr.whereExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 111:
#line 622 "parser/evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 112:
#line 625 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(2) - (2)].intval));
        g_expr.groupByCount = 0;
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(1) - (2)].exprval);
        (yyval.intval) = 1;
    ;}
    break;

  case 113:
#line 632 "parser/evoparser.y"
    {
        emit("GROUPBY %d", (yyvsp[(4) - (4)].intval));
        if (g_expr.groupByCount < MAX_GROUP_BY)
            g_expr.groupByExprs[g_expr.groupByCount++] = (yyvsp[(3) - (4)].exprval);
        (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1;
    ;}
    break;

  case 114:
#line 640 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 115:
#line 641 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 116:
#line 642 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 117:
#line 645 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 118:
#line 646 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 120:
#line 650 "parser/evoparser.y"
    { emit("HAVING"); g_expr.havingExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 125:
#line 662 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        AddOrderByColumn((yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].intval));
        free((yyvsp[(1) - (2)].strval));
    ;}
    break;

  case 126:
#line 669 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 127:
#line 670 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 128:
#line 671 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 129:
#line 672 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 130:
#line 675 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 131:
#line 676 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 132:
#line 677 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 133:
#line 678 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 134:
#line 679 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 136:
#line 683 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 137:
#line 686 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 138:
#line 687 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 139:
#line 690 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 140:
#line 691 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 141:
#line 692 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 142:
#line 693 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 143:
#line 694 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 144:
#line 695 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 145:
#line 696 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 146:
#line 697 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 147:
#line 698 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 148:
#line 701 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 149:
#line 702 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 150:
#line 704 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 151:
#line 712 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 152:
#line 717 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 153:
#line 718 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 154:
#line 719 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 155:
#line 722 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 156:
#line 723 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 159:
#line 732 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 160:
#line 738 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 161:
#line 739 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 162:
#line 740 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 165:
#line 749 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 166:
#line 751 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 167:
#line 753 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 168:
#line 755 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 169:
#line 757 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 170:
#line 760 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 171:
#line 761 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 172:
#line 762 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 173:
#line 765 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 174:
#line 766 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 175:
#line 769 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 176:
#line 770 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 177:
#line 773 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 178:
#line 774 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 179:
#line 775 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 182:
#line 782 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 183:
#line 783 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 184:
#line 788 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 185:
#line 790 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 186:
#line 792 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 188:
#line 796 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 189:
#line 797 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 190:
#line 800 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 191:
#line 801 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 192:
#line 804 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 193:
#line 809 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 194:
#line 819 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 195:
#line 826 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 196:
#line 827 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 197:
#line 828 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 198:
#line 829 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 199:
#line 834 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 200:
#line 838 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 201:
#line 840 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 204:
#line 846 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 205:
#line 851 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 206:
#line 858 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 207:
#line 865 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 208:
#line 875 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 209:
#line 882 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 210:
#line 889 "parser/evoparser.y"
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
#line 899 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 212:
#line 907 "parser/evoparser.y"
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
#line 917 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 214:
#line 925 "parser/evoparser.y"
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
#line 934 "parser/evoparser.y"
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
#line 943 "parser/evoparser.y"
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
#line 953 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 218:
#line 961 "parser/evoparser.y"
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
#line 970 "parser/evoparser.y"
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
#line 979 "parser/evoparser.y"
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
#line 989 "parser/evoparser.y"
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
#line 998 "parser/evoparser.y"
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
#line 1010 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 224:
#line 1015 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 225:
#line 1020 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 226:
#line 1026 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 227:
#line 1033 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 228:
#line 1040 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 229:
#line 1047 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 230:
#line 1057 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 231:
#line 1064 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 232:
#line 1073 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 233:
#line 1080 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 234:
#line 1086 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 235:
#line 1094 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 236:
#line 1100 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 238:
#line 1108 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 239:
#line 1109 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 240:
#line 1110 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 241:
#line 1111 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 242:
#line 1116 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 243:
#line 1123 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 244:
#line 1132 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 245:
#line 1139 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 246:
#line 1145 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 247:
#line 1155 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 248:
#line 1159 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 249:
#line 1165 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 250:
#line 1171 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 251:
#line 1178 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 252:
#line 1184 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 253:
#line 1191 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 254:
#line 1197 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 255:
#line 1203 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 256:
#line 1209 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 257:
#line 1215 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 258:
#line 1221 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 259:
#line 1227 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 260:
#line 1233 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 261:
#line 1239 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 262:
#line 1245 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 263:
#line 1251 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 264:
#line 1257 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 265:
#line 1263 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 266:
#line 1269 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 267:
#line 1275 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 268:
#line 1282 "parser/evoparser.y"
    { ;}
    break;

  case 269:
#line 1283 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 270:
#line 1284 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 271:
#line 1288 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 272:
#line 1296 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 273:
#line 1302 "parser/evoparser.y"
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
#line 1315 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 276:
#line 1318 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 277:
#line 1319 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 278:
#line 1320 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 279:
#line 1321 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 280:
#line 1322 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 284:
#line 1329 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 285:
#line 1333 "parser/evoparser.y"
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
#line 1343 "parser/evoparser.y"
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
#line 1355 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 288:
#line 1356 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 289:
#line 1356 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 290:
#line 1359 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 291:
#line 1360 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 292:
#line 1361 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 293:
#line 1362 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 294:
#line 1366 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 295:
#line 1369 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 296:
#line 1370 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 297:
#line 1371 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 298:
#line 1372 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 299:
#line 1378 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 300:
#line 1384 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 301:
#line 1389 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 302:
#line 1394 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 303:
#line 1399 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 304:
#line 1408 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 305:
#line 1415 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 306:
#line 1416 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 307:
#line 1417 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 308:
#line 1422 "parser/evoparser.y"
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
#line 1433 "parser/evoparser.y"
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
#line 1445 "parser/evoparser.y"
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
#line 1456 "parser/evoparser.y"
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
#line 1471 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 313:
#line 1475 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 314:
#line 1479 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 315:
#line 1480 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 316:
#line 1485 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 317:
#line 1487 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 318:
#line 1489 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 319:
#line 1491 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 320:
#line 1494 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 321:
#line 1495 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 322:
#line 1499 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 323:
#line 1504 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 324:
#line 1506 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 325:
#line 1508 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 326:
#line 1510 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 327:
#line 1512 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 328:
#line 1516 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 329:
#line 1520 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 330:
#line 1521 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 331:
#line 1526 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 332:
#line 1536 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 333:
#line 1545 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 335:
#line 1549 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 336:
#line 1550 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 337:
#line 1551 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 338:
#line 1552 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 339:
#line 1554 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 340:
#line 1556 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 343:
#line 1564 "parser/evoparser.y"
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
#line 1579 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 345:
#line 1587 "parser/evoparser.y"
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
#line 1601 "parser/evoparser.y"
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
#line 1615 "parser/evoparser.y"
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
#line 1629 "parser/evoparser.y"
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
#line 1641 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 350:
#line 1642 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 351:
#line 1643 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 352:
#line 1646 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 353:
#line 1647 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 354:
#line 1650 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 355:
#line 1651 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 356:
#line 1652 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 357:
#line 1653 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 358:
#line 1654 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 359:
#line 1655 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 360:
#line 1656 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 361:
#line 1657 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 362:
#line 1659 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 363:
#line 1661 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 364:
#line 1663 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 365:
#line 1665 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 366:
#line 1667 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 367:
#line 1669 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 368:
#line 1672 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 369:
#line 1673 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 370:
#line 1676 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 371:
#line 1677 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 372:
#line 1680 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 373:
#line 1681 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 375:
#line 1685 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 376:
#line 1686 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 377:
#line 1687 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 378:
#line 1688 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 379:
#line 1689 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 380:
#line 1690 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 381:
#line 1691 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 382:
#line 1692 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 383:
#line 1693 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 384:
#line 1694 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 385:
#line 1695 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 386:
#line 1696 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 387:
#line 1697 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 388:
#line 1698 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 389:
#line 1699 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 390:
#line 1700 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 391:
#line 1701 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 392:
#line 1704 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 393:
#line 1705 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 394:
#line 1708 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 395:
#line 1710 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 396:
#line 1718 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 397:
#line 1719 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 399:
#line 1721 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 400:
#line 1722 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 401:
#line 1723 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 402:
#line 1724 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 403:
#line 1725 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 404:
#line 1726 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 405:
#line 1727 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 406:
#line 1728 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 407:
#line 1729 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 408:
#line 1736 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 409:
#line 1737 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 410:
#line 1738 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 411:
#line 1739 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 412:
#line 1740 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 413:
#line 1741 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 414:
#line 1742 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 415:
#line 1743 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 416:
#line 1744 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 417:
#line 1745 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 418:
#line 1746 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 419:
#line 1747 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 420:
#line 1748 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 421:
#line 1749 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 422:
#line 1750 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 423:
#line 1751 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 424:
#line 1752 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 425:
#line 1753 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 426:
#line 1754 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 427:
#line 1755 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 428:
#line 1756 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 429:
#line 1759 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 430:
#line 1760 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 431:
#line 1761 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 432:
#line 1764 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 433:
#line 1765 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 434:
#line 1768 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 435:
#line 1769 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 436:
#line 1770 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 438:
#line 1774 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 439:
#line 1775 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 440:
#line 1779 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 441:
#line 1780 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 442:
#line 1781 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 443:
#line 1782 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 444:
#line 1783 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 445:
#line 1784 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 446:
#line 1785 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 447:
#line 1786 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 448:
#line 1787 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 449:
#line 1788 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 450:
#line 1789 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 451:
#line 1790 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 452:
#line 1791 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 453:
#line 1792 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 454:
#line 1793 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 455:
#line 1794 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 456:
#line 1795 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 457:
#line 1796 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 458:
#line 1797 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 459:
#line 1798 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 460:
#line 1799 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 461:
#line 1800 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 462:
#line 1801 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 463:
#line 1802 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 464:
#line 1803 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 465:
#line 1804 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 466:
#line 1805 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 467:
#line 1806 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 468:
#line 1807 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 469:
#line 1808 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 470:
#line 1809 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 471:
#line 1810 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 472:
#line 1813 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 473:
#line 1814 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 474:
#line 1818 "parser/evoparser.y"
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
#line 1830 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 476:
#line 1831 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 477:
#line 1832 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 478:
#line 1836 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 479:
#line 1839 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 480:
#line 1840 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 484:
#line 1844 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 485:
#line 1845 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 6111 "parser/evoparser.tab.c"
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


#line 1848 "parser/evoparser.y"

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
