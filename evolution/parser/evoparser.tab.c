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
#define YYLAST   3075

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  236
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  486
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1197

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
     516,   519,   520,   524,   526,   530,   533,   536,   537,   540,
     545,   550,   551,   554,   557,   562,   567,   568,   571,   573,
     577,   578,   581,   584,   587,   590,   593,   596,   599,   602,
     604,   608,   610,   613,   616,   618,   619,   621,   625,   627,
     629,   633,   639,   643,   647,   649,   650,   656,   660,   666,
     673,   679,   680,   682,   684,   685,   687,   689,   691,   694,
     697,   698,   699,   701,   704,   709,   716,   723,   730,   731,
     734,   735,   737,   741,   745,   747,   755,   758,   761,   764,
     765,   772,   775,   780,   781,   784,   792,   794,   798,   804,
     806,   815,   826,   836,   848,   859,   872,   884,   898,   908,
     920,   931,   944,   956,   969,   971,   975,   977,   982,   987,
     992,   999,  1001,  1005,  1008,  1012,  1018,  1020,  1024,  1025,
    1028,  1031,  1035,  1039,  1041,  1045,  1047,  1051,  1057,  1059,
    1070,  1081,  1099,  1112,  1132,  1144,  1151,  1160,  1167,  1174,
    1181,  1191,  1198,  1204,  1213,  1221,  1231,  1240,  1251,  1261,
    1262,  1264,  1267,  1269,  1278,  1285,  1286,  1291,  1292,  1295,
    1298,  1301,  1304,  1306,  1307,  1308,  1312,  1314,  1318,  1322,
    1323,  1330,  1332,  1334,  1338,  1342,  1350,  1354,  1358,  1364,
    1370,  1372,  1381,  1389,  1397,  1399,  1408,  1409,  1412,  1415,
    1419,  1425,  1431,  1439,  1445,  1447,  1452,  1457,  1461,  1467,
    1471,  1477,  1478,  1481,  1483,  1489,  1497,  1505,  1515,  1527,
    1529,  1532,  1536,  1538,  1548,  1560,  1561,  1566,  1570,  1576,
    1582,  1592,  1603,  1605,  1609,  1619,  1629,  1639,  1646,  1658,
    1667,  1668,  1670,  1673,  1675,  1679,  1685,  1693,  1698,  1703,
    1709,  1715,  1720,  1727,  1739,  1753,  1767,  1783,  1788,  1795,
    1797,  1801,  1803,  1807,  1809,  1813,  1814,  1819,  1825,  1830,
    1836,  1841,  1847,  1852,  1858,  1863,  1868,  1872,  1876,  1880,
    1883,  1887,  1892,  1897,  1899,  1903,  1904,  1909,  1910,  1914,
    1917,  1921,  1925,  1929,  1933,  1939,  1945,  1951,  1955,  1961,
    1964,  1972,  1978,  1986,  1992,  1995,  1999,  2002,  2006,  2009,
    2013,  2019,  2024,  2030,  2038,  2047,  2056,  2064,  2071,  2078,
    2084,  2085,  2089,  2095,  2096,  2098,  2099,  2102,  2105,  2106,
    2111,  2115,  2118,  2122,  2126,  2130,  2134,  2138,  2142,  2146,
    2150,  2154,  2158,  2160,  2162,  2164,  2166,  2168,  2172,  2178,
    2181,  2186,  2188,  2190,  2192,  2194,  2198,  2202,  2206,  2210,
    2216,  2222,  2224,  2226,  2228,  2232,  2236,  2237,  2239,  2241,
    2243,  2247,  2251,  2254,  2256,  2260,  2264
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
       3,   251,    -1,     5,   251,    -1,    -1,   131,   238,    -1,
     131,   238,   235,   238,    -1,   131,   238,   133,   238,    -1,
      -1,   105,   191,    -1,   105,   166,    -1,   105,   191,   167,
     132,    -1,   105,   166,   167,   132,    -1,    -1,   121,   260,
      -1,     3,    -1,   260,   235,     3,    -1,    -1,   261,    35,
      -1,   261,    79,    -1,   261,    83,    -1,   261,   109,    -1,
     261,   172,    -1,   261,   162,    -1,   261,   170,    -1,   261,
     169,    -1,   263,    -1,   262,   235,   263,    -1,    26,    -1,
     238,   264,    -1,    41,     3,    -1,     3,    -1,    -1,   266,
      -1,   265,   235,   266,    -1,   267,    -1,   269,    -1,     3,
     264,   276,    -1,     3,   232,     3,   264,   276,    -1,   279,
     268,     3,    -1,   233,   265,   234,    -1,    41,    -1,    -1,
     266,   270,   124,   267,   274,    -1,   266,   172,   267,    -1,
     266,   172,   267,   147,   238,    -1,   266,   272,   271,   124,
     267,   275,    -1,   266,   142,   273,   124,   267,    -1,    -1,
     115,    -1,    61,    -1,    -1,   146,    -1,   129,    -1,   160,
      -1,   129,   271,    -1,   160,   271,    -1,    -1,    -1,   275,
      -1,   147,   238,    -1,   196,   233,   260,   234,    -1,   197,
     125,   277,   233,   278,   234,    -1,   116,   125,   277,   233,
     278,   234,    -1,   100,   125,   277,   233,   278,   234,    -1,
      -1,   105,   124,    -1,    -1,     3,    -1,   278,   235,     3,
      -1,   233,   247,   234,    -1,   280,    -1,    80,   281,   102,
       3,   248,   254,   257,    -1,   281,   128,    -1,   281,   152,
      -1,   281,   116,    -1,    -1,    80,   281,   282,   102,   265,
     248,    -1,     3,   283,    -1,   282,   235,     3,   283,    -1,
      -1,   232,    26,    -1,    80,   281,   102,   282,   196,   265,
     248,    -1,   284,    -1,    81,   185,     3,    -1,    81,   185,
     118,   209,     3,    -1,   285,    -1,    58,   117,     3,   147,
       3,   233,   286,   234,    -1,    58,   117,   118,   209,     3,
     147,     3,   233,   286,   234,    -1,    58,   194,   117,     3,
     147,     3,   233,   286,   234,    -1,    58,   194,   117,   118,
     209,     3,   147,     3,   233,   286,   234,    -1,    58,   117,
       3,   147,     3,   196,   198,   233,   286,   234,    -1,    58,
     117,   118,   209,     3,   147,     3,   196,   198,   233,   286,
     234,    -1,    58,   194,   117,     3,   147,     3,   196,   198,
     233,   286,   234,    -1,    58,   194,   117,   118,   209,     3,
     147,     3,   196,   198,   233,   286,   234,    -1,    58,   117,
      70,     3,   147,     3,   233,   286,   234,    -1,    58,   117,
      70,   118,   209,     3,   147,     3,   233,   286,   234,    -1,
      58,   194,   117,    70,     3,   147,     3,   233,   286,   234,
      -1,    58,   194,   117,    70,   118,   209,     3,   147,     3,
     233,   286,   234,    -1,    58,   117,    70,     3,   147,     3,
     196,   198,   233,   286,   234,    -1,    58,   194,   117,    70,
       3,   147,     3,   196,   198,   233,   286,   234,    -1,     3,
      -1,   286,   235,     3,    -1,   287,    -1,   219,   233,     3,
     234,    -1,   220,   233,     3,   234,    -1,   221,   233,     3,
     234,    -1,   222,   233,     3,   235,     3,   234,    -1,   288,
      -1,    81,   117,     3,    -1,   289,   291,    -1,   188,   185,
       3,    -1,   188,   185,     3,   235,   290,    -1,     3,    -1,
     290,   235,     3,    -1,    -1,   291,    59,    -1,   291,   158,
      -1,   291,    45,    43,    -1,   291,    44,    43,    -1,   292,
      -1,   155,   185,     3,    -1,   293,    -1,    36,   185,     3,
      -1,    36,   185,     3,   232,     3,    -1,   294,    -1,    32,
     185,     3,    33,    56,     3,    63,   233,   238,   234,    -1,
      32,   185,     3,    33,    56,     3,   194,   233,   325,   234,
      -1,    32,   185,     3,    33,    56,     3,   101,   125,   233,
     322,   234,   156,     3,   233,   323,   234,   324,    -1,    32,
     185,     3,    33,    56,     3,    63,   233,   238,   234,    18,
     199,    -1,    32,   185,     3,    33,    56,     3,   101,   125,
     233,   322,   234,   156,     3,   233,   323,   234,   324,    18,
     199,    -1,    32,   185,     3,    33,    56,     3,   151,   125,
     233,   321,   234,    -1,    32,   185,     3,    81,    56,     3,
      -1,    32,   185,     3,   157,    56,     3,   178,     3,    -1,
      32,   185,     3,    91,    56,     3,    -1,    32,   185,     3,
      74,    56,     3,    -1,    32,   185,     3,   199,    56,     3,
      -1,    32,   185,     3,    33,    69,     3,   332,   327,   295,
      -1,    32,   185,     3,    81,    69,     3,    -1,    32,   185,
       3,    81,     3,    -1,    32,   185,     3,   157,    69,     3,
     178,     3,    -1,    32,   185,     3,   157,     3,   178,     3,
      -1,    32,   185,     3,   139,    69,     3,   332,   327,   295,
      -1,    32,   185,     3,   139,     3,   332,   327,   295,    -1,
      32,   185,     3,    60,    69,     3,     3,   332,   327,   295,
      -1,    32,   185,     3,    60,     3,     3,   332,   327,   295,
      -1,    -1,    98,    -1,    34,     3,    -1,   296,    -1,   119,
     298,   299,     3,   300,   201,   302,   297,    -1,   119,   298,
     299,     3,   300,   247,    -1,    -1,   149,   125,   191,   305,
      -1,    -1,   298,   128,    -1,   298,    76,    -1,   298,   109,
      -1,   298,   116,    -1,   121,    -1,    -1,    -1,   233,   301,
     234,    -1,     3,    -1,   301,   235,     3,    -1,   233,   304,
     234,    -1,    -1,   302,   235,   303,   233,   304,   234,    -1,
     238,    -1,    86,    -1,   304,   235,   238,    -1,   304,   235,
      86,    -1,   119,   298,   299,     3,   174,   305,   297,    -1,
       3,    20,   238,    -1,     3,    20,    86,    -1,   305,   235,
       3,    20,   238,    -1,   305,   235,     3,    20,    86,    -1,
     306,    -1,   161,   298,   299,     3,   300,   201,   302,   297,
      -1,   161,   298,   299,     3,   174,   305,   297,    -1,   161,
     298,   299,     3,   300,   247,   297,    -1,   307,    -1,   191,
     308,   265,   174,   309,   248,   254,   257,    -1,    -1,   298,
     128,    -1,   298,   116,    -1,     3,    20,   238,    -1,     3,
     232,     3,    20,   238,    -1,   309,   235,     3,    20,   238,
      -1,   309,   235,     3,   232,     3,    20,   238,    -1,   157,
     185,     3,   178,     3,    -1,   310,    -1,    58,    71,   311,
       3,    -1,    58,   163,   311,     3,    -1,    81,    71,     3,
      -1,    81,    71,   118,   209,     3,    -1,    81,   163,     3,
      -1,    81,   163,   118,   209,     3,    -1,    -1,   118,   209,
      -1,   312,    -1,    58,    75,     3,    41,   332,    -1,    58,
      75,     3,    41,   332,    86,   238,    -1,    58,    75,     3,
      41,   332,    18,   145,    -1,    58,    75,     3,    41,   332,
      63,   233,   238,   234,    -1,    58,    75,     3,    41,   332,
      18,   145,    63,   233,   238,   234,    -1,   313,    -1,   197,
       3,    -1,   197,    71,     3,    -1,   314,    -1,    58,   318,
     185,   311,     3,   233,   319,   234,   315,    -1,    58,   318,
     185,   311,     3,   232,     3,   233,   319,   234,   315,    -1,
      -1,   315,    38,    20,     5,    -1,   315,    38,     5,    -1,
     315,   147,     3,    80,     3,    -1,   315,   147,     3,   181,
       3,    -1,   315,   164,    51,   198,   233,     3,   234,   165,
       5,    -1,   315,   164,    51,   153,   233,     3,   234,   233,
     316,   234,    -1,   317,    -1,   316,   235,   317,    -1,   164,
       3,   201,   126,   183,     4,   147,   143,     5,    -1,   164,
       3,   201,   126,   183,   136,   147,   143,     5,    -1,    58,
     318,   185,   311,     3,   233,   319,   234,   334,    -1,    58,
     318,   185,   311,     3,   334,    -1,    58,   318,   185,   311,
       3,   232,     3,   233,   319,   234,   334,    -1,    58,   318,
     185,   311,     3,   232,     3,   334,    -1,    -1,   179,    -1,
     180,   179,    -1,   320,    -1,   319,   235,   320,    -1,   151,
     125,   233,   321,   234,    -1,    56,     3,   151,   125,   233,
     321,   234,    -1,   125,   233,   260,   234,    -1,   117,   233,
     260,   234,    -1,   104,   117,   233,   260,   234,    -1,   104,
     125,   233,   260,   234,    -1,    63,   233,   238,   234,    -1,
      56,     3,    63,   233,   238,   234,    -1,   101,   125,   233,
     322,   234,   156,     3,   233,   323,   234,   324,    -1,   101,
     125,   233,   322,   234,   156,     3,   232,     3,   233,   323,
     234,   324,    -1,    56,     3,   101,   125,   233,   322,   234,
     156,     3,   233,   323,   234,   324,    -1,    56,     3,   101,
     125,   233,   322,   234,   156,     3,   232,     3,   233,   323,
     234,   324,    -1,   194,   233,   325,   234,    -1,    56,     3,
     194,   233,   325,   234,    -1,     3,    -1,   321,   235,     3,
      -1,     3,    -1,   322,   235,     3,    -1,     3,    -1,   323,
     235,     3,    -1,    -1,   324,   147,    80,    59,    -1,   324,
     147,    80,   174,   145,    -1,   324,   147,    80,   158,    -1,
     324,   147,    80,   174,    86,    -1,   324,   147,   191,    59,
      -1,   324,   147,   191,   174,   145,    -1,   324,   147,   191,
     158,    -1,   324,   147,   191,   174,    86,    -1,   324,   147,
      80,   144,    -1,   324,   147,   191,   144,    -1,   324,   135,
     103,    -1,   324,   135,   171,    -1,   324,   135,   150,    -1,
     324,    72,    -1,   324,    18,    72,    -1,   324,    72,   113,
      73,    -1,   324,    72,   113,   112,    -1,     3,    -1,   325,
     235,     3,    -1,    -1,   326,     3,   332,   327,    -1,    -1,
     327,    18,   145,    -1,   327,   145,    -1,   327,    86,     4,
      -1,   327,    86,     5,    -1,   327,    86,     7,    -1,   327,
      86,     6,    -1,   327,    86,   225,   233,   234,    -1,   327,
      86,   226,   233,   234,    -1,   327,    86,   227,   233,   234,
      -1,   327,    86,    57,    -1,   327,    86,   233,   238,   234,
      -1,   327,    38,    -1,   327,    38,   233,     5,   235,     5,
     234,    -1,   327,    38,   233,     5,   234,    -1,   327,    43,
     233,     5,   235,     5,   234,    -1,   327,    43,   233,     5,
     234,    -1,   327,    43,    -1,   327,   194,   125,    -1,   327,
     194,    -1,   327,   151,   125,    -1,   327,   125,    -1,   327,
      64,     4,    -1,   327,    63,   233,   238,   234,    -1,   327,
      56,     3,   194,    -1,   327,    56,     3,   151,   125,    -1,
     327,    56,     3,    63,   233,   238,   234,    -1,   327,    46,
      42,    41,   233,   238,   234,    47,    -1,   327,    46,    42,
      41,   233,   238,   234,    48,    -1,   327,    46,    42,    41,
     233,   238,   234,    -1,   327,    41,   233,   238,   234,    47,
      -1,   327,    41,   233,   238,   234,    48,    -1,   327,    41,
     233,   238,   234,    -1,    -1,   233,     5,   234,    -1,   233,
       5,   235,     5,   234,    -1,    -1,    52,    -1,    -1,   330,
     192,    -1,   330,   208,    -1,    -1,   331,    67,   174,     4,
      -1,   331,    68,     4,    -1,    55,   328,    -1,   177,   328,
     330,    -1,   173,   328,   330,    -1,   141,   328,   330,    -1,
     122,   328,   330,    -1,   114,   328,   330,    -1,    54,   328,
     330,    -1,   154,   328,   330,    -1,    87,   328,   330,    -1,
      99,   328,   330,    -1,    89,   328,   330,    -1,    90,    -1,
     190,    -1,   184,    -1,    88,    -1,   206,    -1,    67,   328,
     331,    -1,   200,   233,     5,   234,   331,    -1,    52,   328,
      -1,   202,   233,     5,   234,    -1,   189,    -1,    49,    -1,
     140,    -1,   134,    -1,   176,   329,   331,    -1,   182,   329,
     331,    -1,   137,   329,   331,    -1,   127,   329,   331,    -1,
      94,   233,   333,   234,   331,    -1,   174,   233,   333,   234,
     331,    -1,    50,    -1,   195,    -1,     4,    -1,   333,   235,
       4,    -1,   335,   268,   247,    -1,    -1,   116,    -1,   161,
      -1,   336,    -1,   174,   163,     3,    -1,   174,   163,    86,
      -1,   174,   337,    -1,   338,    -1,   337,   235,   338,    -1,
       8,    20,   238,    -1,     8,     9,   238,    -1
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
     650,   653,   654,   657,   658,   661,   667,   676,   677,   678,
     679,   682,   683,   684,   685,   686,   689,   690,   693,   694,
     697,   698,   699,   700,   701,   702,   703,   704,   705,   708,
     709,   710,   718,   724,   725,   726,   729,   730,   733,   734,
     738,   745,   746,   747,   750,   751,   755,   757,   759,   761,
     763,   767,   768,   769,   772,   773,   776,   777,   780,   781,
     782,   785,   786,   789,   790,   794,   796,   798,   800,   803,
     804,   807,   808,   811,   815,   825,   833,   834,   835,   836,
     840,   844,   846,   850,   850,   852,   857,   864,   871,   881,
     888,   895,   905,   913,   923,   931,   940,   949,   959,   967,
     976,   985,   995,  1004,  1016,  1021,  1026,  1032,  1039,  1046,
    1053,  1063,  1070,  1079,  1086,  1092,  1100,  1106,  1114,  1115,
    1116,  1117,  1118,  1122,  1129,  1138,  1145,  1151,  1162,  1165,
    1171,  1177,  1184,  1190,  1197,  1203,  1209,  1215,  1221,  1227,
    1233,  1239,  1245,  1251,  1257,  1263,  1269,  1275,  1281,  1289,
    1290,  1291,  1294,  1302,  1308,  1321,  1322,  1325,  1326,  1327,
    1328,  1329,  1332,  1332,  1335,  1336,  1339,  1349,  1362,  1363,
    1363,  1366,  1367,  1368,  1369,  1372,  1376,  1377,  1378,  1379,
    1385,  1388,  1394,  1399,  1405,  1413,  1422,  1423,  1424,  1428,
    1439,  1451,  1462,  1477,  1482,  1486,  1487,  1491,  1493,  1495,
    1497,  1501,  1502,  1506,  1510,  1512,  1514,  1516,  1518,  1523,
    1527,  1528,  1532,  1541,  1551,  1555,  1556,  1557,  1558,  1559,
    1560,  1562,  1566,  1567,  1570,  1585,  1592,  1607,  1620,  1635,
    1648,  1649,  1650,  1653,  1654,  1657,  1658,  1659,  1660,  1661,
    1662,  1663,  1664,  1665,  1667,  1669,  1671,  1673,  1675,  1679,
    1680,  1683,  1684,  1687,  1688,  1691,  1692,  1693,  1694,  1695,
    1696,  1697,  1698,  1699,  1700,  1701,  1702,  1703,  1704,  1705,
    1706,  1707,  1708,  1711,  1712,  1715,  1715,  1725,  1726,  1727,
    1728,  1729,  1730,  1731,  1732,  1733,  1734,  1735,  1736,  1743,
    1744,  1745,  1746,  1747,  1748,  1749,  1750,  1751,  1752,  1753,
    1754,  1755,  1756,  1757,  1758,  1759,  1760,  1761,  1762,  1763,
    1766,  1767,  1768,  1771,  1772,  1775,  1776,  1777,  1780,  1781,
    1782,  1786,  1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,
    1795,  1796,  1797,  1798,  1799,  1800,  1801,  1802,  1803,  1804,
    1805,  1806,  1807,  1808,  1809,  1810,  1811,  1812,  1813,  1814,
    1815,  1816,  1817,  1820,  1821,  1824,  1837,  1838,  1839,  1843,
    1846,  1847,  1848,  1849,  1849,  1851,  1852
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
     253,   254,   254,   255,   255,   256,   256,   257,   257,   257,
     257,   258,   258,   258,   258,   258,   259,   259,   260,   260,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   262,
     262,   262,   263,   264,   264,   264,   265,   265,   266,   266,
     267,   267,   267,   267,   268,   268,   269,   269,   269,   269,
     269,   270,   270,   270,   271,   271,   272,   272,   273,   273,
     273,   274,   274,   275,   275,   276,   276,   276,   276,   277,
     277,   278,   278,   279,   246,   280,   281,   281,   281,   281,
     280,   282,   282,   283,   283,   280,   246,   284,   284,   246,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   286,   286,   286,   287,   287,   287,
     287,   246,   288,   246,   289,   289,   290,   290,   291,   291,
     291,   291,   291,   246,   292,   246,   293,   293,   246,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   295,
     295,   295,   246,   296,   296,   297,   297,   298,   298,   298,
     298,   298,   299,   299,   300,   300,   301,   301,   302,   303,
     302,   304,   304,   304,   304,   296,   305,   305,   305,   305,
     246,   306,   306,   306,   246,   307,   308,   308,   308,   309,
     309,   309,   309,   246,   246,   310,   310,   246,   246,   246,
     246,   311,   311,   246,   312,   312,   312,   312,   312,   246,
     313,   313,   246,   314,   314,   315,   315,   315,   315,   315,
     315,   315,   316,   316,   317,   317,   314,   314,   314,   314,
     318,   318,   318,   319,   319,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   321,
     321,   322,   322,   323,   323,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   325,   325,   326,   320,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     328,   328,   328,   329,   329,   330,   330,   330,   331,   331,
     331,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   333,   333,   334,   335,   335,   335,   246,
     336,   336,   336,   337,   337,   338,   338
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
       2,     0,     3,     1,     3,     2,     2,     0,     2,     4,
       4,     0,     2,     2,     4,     4,     0,     2,     1,     3,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       3,     1,     2,     2,     1,     0,     1,     3,     1,     1,
       3,     5,     3,     3,     1,     0,     5,     3,     5,     6,
       5,     0,     1,     1,     0,     1,     1,     1,     2,     2,
       0,     0,     1,     2,     4,     6,     6,     6,     0,     2,
       0,     1,     3,     3,     1,     7,     2,     2,     2,     0,
       6,     2,     4,     0,     2,     7,     1,     3,     5,     1,
       8,    10,     9,    11,    10,    12,    11,    13,     9,    11,
      10,    12,    11,    12,     1,     3,     1,     4,     4,     4,
       6,     1,     3,     2,     3,     5,     1,     3,     0,     2,
       2,     3,     3,     1,     3,     1,     3,     5,     1,    10,
      10,    17,    12,    19,    11,     6,     8,     6,     6,     6,
       9,     6,     5,     8,     7,     9,     8,    10,     9,     0,
       1,     2,     1,     8,     6,     0,     4,     0,     2,     2,
       2,     2,     1,     0,     0,     3,     1,     3,     3,     0,
       6,     1,     1,     3,     3,     7,     3,     3,     5,     5,
       1,     8,     7,     7,     1,     8,     0,     2,     2,     3,
       5,     5,     7,     5,     1,     4,     4,     3,     5,     3,
       5,     0,     2,     1,     5,     7,     7,     9,    11,     1,
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
       0,     0,     0,   350,   199,     0,   277,     0,     0,   277,
       0,   140,     0,   277,     0,     0,     0,   105,   194,   206,
     209,   231,   238,   243,   245,   248,   272,   300,   304,   314,
     323,   329,   332,   479,     0,     0,   321,     0,     0,   321,
     351,     0,     0,     0,     0,     0,     0,     0,     0,   283,
       0,     0,   283,     0,     0,   482,   483,     0,     0,     0,
       0,   330,     0,     1,     2,   233,     0,   246,     0,     0,
       0,     0,     0,     0,     0,   352,     0,   321,   203,     0,
     198,   196,   197,     0,   317,     0,   232,   319,     0,   207,
       0,   279,   280,   281,   282,   278,     0,   244,     0,     0,
       0,     0,   480,   481,     0,     4,     7,     8,    10,     9,
       6,     0,     0,     0,   151,   141,   102,     0,   103,   104,
     142,   143,   144,    11,   146,   148,   147,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,   106,   149,   234,   281,   278,   155,     0,     0,
     156,   158,   159,   165,   331,     3,     0,     0,   239,   240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   322,
     315,     0,     0,     0,     0,     0,   316,     0,     0,     0,
       0,     0,   201,   108,     0,     0,     0,     0,     0,     0,
     284,     0,   284,   486,   485,   484,     0,    43,     0,    28,
      27,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,     0,     0,     0,     0,   188,     0,     0,     0,     0,
     173,   172,   176,   180,   177,     0,     0,   174,   164,     0,
     242,   241,     0,     0,     0,     0,     0,   262,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   247,   462,   471,
     430,   430,   430,   430,   430,   455,   430,   452,     0,   430,
     430,   430,   433,   464,   433,   463,   430,   430,   430,     0,
     433,   430,   433,   454,   461,   453,   472,     0,     0,   456,
     324,     0,     0,     0,     0,     0,     0,     0,     0,   476,
     204,     0,   121,     0,   108,   203,   318,   320,   208,     0,
       0,     0,   313,     0,     0,     5,    41,    44,     0,    38,
       0,     0,    94,     0,     0,     0,     0,    80,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
       0,     0,    19,    21,    22,    20,   100,    98,    36,     0,
      34,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    23,    24,    26,    12,    13,    14,    15,    16,
      17,    25,   153,   108,   150,   236,   235,   155,     0,     0,
       0,   160,   193,   163,     0,   108,   157,   174,   174,     0,
     167,     0,   175,     0,   162,     0,     0,     0,     0,   258,
     255,   261,   257,   397,     0,     0,     0,     0,   259,     0,
     459,   435,   441,   438,   435,   435,     0,   435,   435,   435,
     434,   438,   438,   435,   435,   435,     0,   438,   435,   438,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   477,   478,     0,   395,   347,   165,
     109,     0,   127,   108,   200,   202,     0,   275,   286,     0,
       0,   274,   275,     0,   275,     0,    52,     0,    92,     0,
       0,     0,    51,     0,     0,    63,     0,     0,     0,     0,
      53,    54,    55,    56,    57,    58,    66,    67,    68,     0,
       0,     0,    76,     0,    37,    35,     0,     0,   101,    99,
      47,     0,     0,     0,     0,     0,     0,   110,     0,   188,
     190,   190,   190,     0,     0,     0,   121,   178,   179,     0,
       0,   181,     0,     0,     0,     0,     0,   397,   397,     0,
     269,   397,   264,     0,     0,     0,   447,   457,   449,   451,
     473,     0,   450,   446,   445,   468,   467,   444,   448,   443,
       0,   465,   442,   466,     0,     0,   326,     0,   325,     0,
     224,     0,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   476,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   353,     0,     0,     0,
       0,   195,   205,     0,     0,     0,   295,   285,     0,     0,
     275,   302,   275,   303,    42,    96,     0,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,     0,    39,     0,     0,     0,    30,
       0,   119,   237,   161,     0,     0,     0,     0,   309,     0,
       0,   127,   170,   168,     0,     0,   166,   182,     0,     0,
       0,     0,     0,   269,   269,   397,     0,     0,   409,     0,
     414,     0,     0,     0,     0,     0,   270,   418,   399,     0,
     416,   266,   269,   256,   263,   431,     0,   436,   437,     0,
       0,   438,     0,   438,   438,   460,     0,     0,     0,     0,
       0,     0,     0,   210,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,   349,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,   395,     0,
     475,   114,   114,   122,   123,   128,   297,   296,     0,     0,
     287,   292,   291,     0,   289,   273,   301,    93,    97,     0,
      61,    60,     0,    65,     0,     0,    81,    82,    69,     0,
      71,    77,    46,     0,    50,    40,    33,    31,    32,     0,
       0,   121,   189,     0,     0,     0,     0,     0,     0,   305,
     183,     0,   169,     0,     0,     0,   393,     0,   260,   268,
     269,   398,   271,     0,     0,     0,     0,     0,     0,   419,
     400,   401,   403,   402,   407,     0,     0,     0,     0,   417,
     415,   265,     0,     0,   440,   469,   474,   470,   458,     0,
     327,     0,     0,     0,     0,     0,   225,     0,   218,     0,
       0,     0,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,     0,
       0,     0,     0,   333,   346,   354,   397,   115,   116,   125,
     126,     0,     0,     0,     0,     0,   288,     0,     0,     0,
       0,    64,    83,    84,    85,    86,    90,    89,    91,    88,
      87,     0,    48,   114,   117,   120,   127,   191,     0,     0,
       0,   310,   311,     0,     0,   249,   371,     0,   369,     0,
     250,     0,   267,     0,     0,     0,     0,     0,     0,   421,
       0,     0,     0,     0,     0,   432,   439,     0,   214,   227,
     228,   229,     0,     0,     0,     0,   211,     0,     0,   220,
       0,     0,     0,   335,     0,     0,     0,     0,   361,     0,
       0,     0,   358,     0,   357,     0,   367,     0,     0,     0,
     396,   124,   130,   129,   276,   299,   298,   294,   293,     0,
      62,    59,    70,   112,     0,     0,   111,   131,   187,     0,
     186,   185,     0,   184,     0,     0,     0,   254,     0,   394,
     411,     0,   429,   413,     0,     0,     0,   422,   420,   404,
     405,   406,   408,   328,     0,   222,   219,     0,   216,     0,
       0,     0,   213,   334,   348,     0,     0,     0,     0,     0,
     359,   360,   139,   355,   337,     0,     0,     0,     0,   118,
     114,     0,   136,   192,   312,   252,     0,   372,   370,     0,
     427,   428,     0,     0,     0,   230,   215,   223,   221,     0,
     362,     0,     0,   368,     0,   336,     0,     0,     0,     0,
     290,   113,   133,   132,     0,   107,     0,   410,   412,   426,
     423,   217,     0,   356,     0,   338,   339,     0,     0,     0,
       0,   137,     0,   424,   425,     0,     0,     0,     0,     0,
     135,   134,   373,     0,     0,     0,     0,     0,     0,   375,
       0,     0,     0,     0,   375,     0,     0,   251,   374,     0,
       0,     0,   363,     0,     0,   342,   340,     0,   389,     0,
       0,     0,   375,   375,     0,     0,   341,     0,   390,   253,
       0,   386,   388,   387,     0,     0,     0,   365,   364,     0,
     343,   391,   392,   376,   384,   378,     0,   380,   385,   382,
       0,   375,     0,   379,   377,   383,   381,   366,     0,     0,
       0,     0,     0,     0,     0,   344,   345
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,   356,   357,   358,   546,   672,   371,   664,   214,
      16,    17,   342,   681,   924,   899,  1006,   811,   502,   773,
     774,   641,  1062,  1095,   889,    57,   152,   153,   260,   159,
     160,   161,   279,   162,   276,   443,   277,   439,   696,   697,
     431,   685,   928,   163,    18,    44,    83,   192,    19,    20,
     615,   616,    21,    22,   426,    65,    23,    24,    25,   721,
      26,   646,    49,    96,   351,   509,   650,   908,   783,   507,
      27,    28,    60,   435,    29,    69,    30,    31,    32,   893,
    1144,  1145,    43,   635,   636,   939,   937,  1123,  1137,   827,
     637,   580,   460,   471,   586,   587,   330,   591,   498,   499,
      33,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -845
static const yytype_int16 yypact[] =
{
    2558,  -110,    32,   293,  -845,   224,  -845,    85,   102,  -845,
      50,  -845,   285,    19,    82,   426,   248,  -845,  -845,  -845,
    -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,
    -845,  -845,  -845,  -845,   451,   482,   370,   491,   218,   370,
    -845,   317,   390,   324,   114,    30,   524,    34,   104,   343,
     541,   543,   343,   365,    36,   280,  -845,   220,   546,   349,
      24,  -845,   558,  -845,  2558,   253,   256,   309,   346,   566,
     563,   480,   215,   427,   635,  -845,   270,   370,   415,   652,
    -845,  -845,  -845,   -79,  -845,   517,  -845,  -845,   522,  -845,
     542,  -845,  -845,  -845,  -845,  -845,   753,  -845,   583,   755,
    1477,  1477,  -845,  -845,   762,  -123,  -845,  -845,  -845,  -845,
     675,  1477,  1477,  1477,  -845,  -845,  -845,   668,  -845,  -845,
    -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,   530,   547,
     557,   559,   564,   568,   573,   595,   614,   616,   641,   643,
     672,   710,   720,   721,   732,   733,   734,   759,   760,   771,
    1477,  2923,   -60,  -845,   539,    25,    28,    16,    14,   -97,
     633,  -845,  -845,   735,  -845,  -845,   828,   859,  -845,  -845,
     412,    78,   949,    59,   950,   287,   302,   951,  1005,  -845,
    -845,  2594,  1006,   863,   802,  1009,  -845,   888,   241,   827,
    1042,  1055,  -845,   180,  -112,    24,  1079,  1087,  1088,  1089,
    -115,  1090,   106,  2970,  2970,  -845,  1091,  1477,  1477,   812,
     812,  -845,  1477,  2466,   -46,   920,  1477,   494,  1477,  1477,
     804,  1477,  1477,  1477,  1477,  1477,  1477,  1477,  1477,  1477,
    1477,   862,   866,   867,   868,  1477,  1477,  1752,  -845,  1477,
    1477,  1477,  1477,  1477,    62,   864,   529,  1477,   761,  1477,
    1477,  1477,  1477,  1477,  1477,  1477,  1477,  1477,  1477,  1100,
    -845,    24,  1477,  1101,  1102,   -52,   873,   240,  1105,    24,
    -845,  -845,  -845,   264,  -845,    24,   991,   970,  -845,  1114,
    -845,  -845,  1115,  1116,  1117,  1118,  1122,  -845,  1123,  1124,
    1125,  2594,  1126,   944,  1127,  1129,  1130,  -845,  -845,  -845,
     901,   901,   901,   901,   901,  -845,   901,  -845,   902,   901,
     901,   901,  1084,  -845,  1084,  -845,   901,   901,   901,   906,
    1084,   901,  1084,  -845,  -845,  -845,  -845,   907,   908,  -845,
      51,  -150,  1139,  1141,   998,  1145,  1002,   941,  1148,   167,
    -845,  1477,  1004,    24,   254,   415,  -845,  -845,  -845,  1150,
    1151,   197,  -845,  1150,   200,  -845,   552,  -845,   921,  2970,
    2487,   213,  -845,  1477,  1477,   922,   510,  -845,  -845,  -845,
    1773,   850,  1028,  1209,   924,  1794,  1831,  1852,  1873,  1894,
    1919,  1947,  1969,  1330,  1534,  1590,  -845,  -845,  -845,  -845,
    1990,  1613,  -845,  2990,  3009,  3027,  3045,  3045,  -845,    64,
    -845,   920,  1477,  1477,   926,  1477,  2890,   928,   931,   933,
    1081,   909,   934,   973,   671,   581,   581,  1137,  1137,  1137,
    1137,  -845,  -845,   254,  -845,  -845,   935,   105,  1044,  1048,
    1049,  -845,  -845,  -845,     4,   258,   633,   970,   970,  1052,
    1030,    24,  -845,  1054,  -845,   166,  2594,  2594,  1176,  -845,
    -845,  -845,  -845,  -845,  2594,  1177,  1003,  1007,  -845,  1179,
    -845,  -845,  -845,  -845,  -845,  -845,  1182,  -845,  -845,  -845,
    -845,  -845,  -845,  -845,  -845,  -845,  1182,  -845,  -845,  -845,
    1183,  1184,  1045,   954,  1477,   993,    13,  -117,  1046,  1191,
     158,  1198,  1199,  1056,  -845,  -845,  1201,   269,  -845,   735,
    2970,  1155,  1076,   254,  -845,  -845,  1188,   -96,  -845,   283,
     978,  -845,   -96,   978,  1063,  1477,  -845,  1477,  -845,  1477,
    2812,  2553,  -845,  1477,  1477,  -845,  1477,  2791,  1092,  1092,
    -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,  1477,
    1477,  1477,  -845,  1477,  -845,  -845,  1477,   979,  3045,  3045,
     920,  2947,  1477,   920,   920,   920,   980,  1110,  1215,   -52,
    1135,  1135,  1135,  1477,  1238,  1239,  1004,  -845,  -845,    24,
    1477,   124,    24,  1010,  1120,  1121,  1014,  -845,  -845,  2594,
    2567,  -845,  -845,  1245,  1247,   319,  -126,   437,  -126,  -126,
    -845,   323,  -126,  -126,  -126,   437,   437,  -126,  -126,  -126,
     356,   437,  -126,   437,  1018,  1019,  1196,  1477,  2970,  1022,
    -845,  1027,  1029,  1032,  1033,   362,  -845,  1069,    13,  1258,
     170,  1070,    13,   181,  1128,  1266,   163,  1268,  1039,  1149,
     291,  1040,  1043,  1152,  1047,   368,  -845,  1276,   920,   475,
    1477,  -845,  -845,  1106,  1156,  1279,  -845,  -845,  1280,  1192,
      66,  -845,    66,  -845,  -845,  2970,  2833,  -845,  1477,  1722,
      76,  2011,  1477,  1477,  1050,  1051,  2032,  1701,  2069,  2090,
    1053,  -845,  1477,  1078,  1477,   898,  1104,  1113,  1131,  -845,
    1235,  1178,  -845,  -845,  1164,  1133,  1134,  1142,  2970,  1341,
       9,  1076,  -845,  2970,  1477,  1143,  -845,  -845,   124,  1477,
    1144,  1146,  1359,  2567,  2567,  -845,  1218,  1361,  1147,  1153,
    1154,  1326,  1375,  1157,  1377,    67,  -845,  -845,  -845,  1257,
    1260,  -845,  2567,  -845,  -845,  -845,  1383,  -845,  -845,  1219,
    1385,  -845,  1388,  -845,  -845,  -845,  1161,  2111,    13,  1392,
    1393,  1394,  1395,  -845,  1396,  1167,   385,  1193,  1226,    13,
    1194,   391,  1231,    13,  1427,   188,   269,  -845,   168,  1477,
    1200,  1202,  1203,  1431,  1431,  1204,  1359,   103,   269,  2594,
    -845,    26,    26,  1205,  -845,   638,  -845,  2970,  1248,  1418,
    -845,  -845,  2970,   397,  -845,  -845,  -845,  -845,  2970,  1477,
    -845,  -845,  1477,  -845,  2136,  2445,  -845,  -845,  -845,  1477,
    -845,  -845,  -845,  1207,  -845,   898,  -845,  -845,  -845,  1477,
    1477,  1004,  -845,  1439,  1439,  1439,  1477,  1477,  1440,  -845,
    2970,  1431,  -845,  2164,  1442,  1443,  -845,   400,  -845,  -845,
    2567,  -845,  -845,  1444,  1477,  1445,  1406,    69,  1477,  -845,
    -845,  -845,  -845,  -845,  -845,  1220,  1221,  1228,  1477,  -845,
    -845,  -845,  1214,  1447,  -845,   437,  -845,   437,   437,  1477,
    -845,   406,  1229,  1230,  1232,  1227,  -845,    13,  -845,    13,
    1234,   409,    13,  -845,  1240,   411,  1241,  1267,    13,   435,
    1242,  1343,  1346,  1243,  2186,  1442,  1431,  1431,  -845,   443,
     445,  1443,   448,   174,  -845,  -845,  -845,  -845,  -845,  -845,
    -845,   475,  1477,  1477,  1150,  1366,  -845,  1452,  1246,  2207,
    2228,  -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,
    -845,  2249,  -845,  2855,    46,  2970,  1076,  -845,   453,   455,
     457,  2970,  2970,  1458,   502,  1454,  -845,   504,  -845,   506,
    -845,  1483,  -845,   509,  2270,   512,  1254,  1255,  1364,  -845,
    2307,  1256,  1259,  1262,  2328,  -845,  -845,  2353,  -845,  -845,
    -845,  -845,  1488,   515,   520,    13,  -845,   538,    13,  -845,
      13,  1264,   548,   103,  1477,  1265,  1270,  1359,  -845,   550,
     554,   560,  -845,  1489,  -845,   565,  -845,   358,  1496,  1449,
    1119,  -845,  2970,  2970,  1269,  -845,  2970,  -845,  2970,  1192,
    -845,  -845,  -845,  -845,  1342,  1477,  -845,  1400,  -845,  1503,
    -845,  -845,  1477,  -845,  1308,  1352,  1507,  -845,  1509,  -845,
    -845,  1508,   681,  -845,  1510,  1477,  1477,  -845,  -845,  -845,
    -845,  -845,  -845,  -845,  1282,  -845,  -845,   569,  -845,   580,
     582,    13,  -845,   174,  -845,  2381,  1442,  1443,   585,  1363,
    -845,  -845,  -845,  -845,  -845,  1515,   -40,   -77,   590,  -845,
    2855,   178,  1401,  -845,  2970,  -845,  1518,  -845,  -845,  1289,
    -845,  -845,  1290,  2403,  2424,  -845,  -845,  -845,  -845,   609,
    -845,   617,   625,  -845,  1522,  -845,  1523,  1524,  1295,  1296,
    -845,  -845,  1365,  1368,  1431,  -845,  1297,  -845,  -845,   815,
    -845,  -845,  1380,  -845,   367,  -845,  -845,  1528,  1530,  1405,
    1408,  1306,  1548,  -845,  -845,  1563,  1564,  1548,  1334,  1335,
    -845,  -845,  -845,   630,   667,  1337,   669,  1338,  1407,  -845,
    1570,  1571,  1548,  1548,  -845,  1434,  1602,   196,  -845,  1397,
     674,   676,   232,  1618,   679,  -845,  -845,   -42,  1531,   247,
     160,  1548,  -845,  -845,  1573,  1446,  -845,  1434,  -845,  -845,
     223,  -845,  -845,  -845,   -25,   -24,   706,   232,   232,  1520,
    -845,  -845,  -845,  -845,  -845,  -845,   216,  -845,  -845,  -845,
     236,  -845,  1465,  -845,  -845,  -845,  -845,   232,    41,  1502,
    1504,  1511,  1512,  1645,  1647,  -845,  -845
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -845,  1589,   -57,  -468,  -845,  -845,  -845,  -845,  1180,  1470,
    -845,  -148,  -293,  -845,  -845,  -769,  -845,  -845,  -551,  -845,
     756,  -677,  -845,  -845,  -760,  -845,  -845,  1398,  -151,  -132,
    1387,  -254,  1159,  -845,  -845,   507,  -845,  -845,  -845,   961,
    1195,   389,   132,  -845,  -845,  -845,  1605,  1373,  -845,  -845,
    -613,  -845,  -845,  -845,  -845,  -845,  -845,  -845,  -845,  -591,
    -845,  -476,   314,  1656,  1537,  -845,  1244,  -845,   754,  -352,
    -845,  -845,  -845,  -845,  -845,   303,  -845,  -845,  -845,   782,
    -845,   599,  -845,  1034,   990,  -839,  -844,  -641,  -730,  -734,
    -845,  -570,   312,   194,   120,  -459,  -266,  1283,  -624,  -845,
    -845,  -845,  1657
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -477
static const yytype_int16 yytable[] =
{
     151,   512,   757,   900,   890,   746,   265,   703,   704,   751,
     266,   722,   595,   596,   819,   691,   610,   157,   601,   238,
     603,   440,  -306,   195,   563,   453,   267,   157,  -308,   817,
    1158,  -307,   892,    84,  1173,  1177,   651,    87,   653,   102,
    1086,   979,   261,   203,   204,  1189,   485,   654,   428,   362,
     363,   504,   985,   644,   209,   210,   211,   259,    53,   349,
     213,   934,   287,   344,   429,   897,   727,   365,   398,   482,
     544,   840,   841,   842,   843,    34,  1088,   268,   670,   617,
     399,   284,   728,   486,   343,    61,   239,   240,   241,   242,
     243,   244,   245,   237,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,    89,   238,   206,
     207,   898,   828,   829,   483,   288,   618,    78,   350,  1174,
    1178,  1089,   103,   196,   844,   861,   980,   981,   289,   423,
     557,   851,   947,  1175,  1179,   830,   871,   484,   269,   645,
     875,  1087,   566,   894,  -476,   430,   259,   285,    85,  1176,
    1180,   359,    88,    62,  1003,   360,   196,  1159,   364,   366,
     370,   372,   373,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   785,   262,   786,  1190,   390,   391,
     577,   578,   393,   394,   395,   396,   397,   571,   581,    11,
     406,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,  1081,   511,   803,   151,   514,   400,  1082,   545,
     642,   503,   987,    54,  1147,   644,    79,    35,   183,   494,
     948,    71,    90,   105,   106,   107,   108,   109,   110,   573,
      80,   880,   611,   612,   613,   614,   564,   111,   112,   942,
    1164,   818,    81,  1048,   336,   113,   114,   158,   264,  1007,
    1154,  1004,  -306,   547,   963,   115,   964,   158,  -308,   967,
     926,  -307,   556,   949,   495,   972,    82,   574,  1148,   881,
      50,   694,   855,   187,   857,   858,   559,   116,  -476,   494,
     353,  1005,   117,   494,   500,   118,   119,    51,    72,   170,
     291,  1091,   845,   846,   847,    45,  1171,   166,   167,   120,
     848,   784,  1183,   121,  1148,   293,   520,   521,   518,   519,
     791,   792,   168,   705,   527,   692,   171,   575,   698,   882,
     695,   988,  1185,    52,   495,   627,   990,    59,   495,   122,
     172,  1149,   628,   184,  1111,  1172,    73,   173,   989,   350,
     188,    46,    74,  1150,  1092,   548,   549,   174,   551,  1044,
    1161,  1165,  1037,   237,   621,  1039,   292,  1040,   294,   337,
     576,  1184,   883,  1054,    36,   123,   748,  1149,    37,  1093,
     629,   295,    11,   630,   100,    11,  -203,   752,  1055,  1150,
     190,  1186,   124,   341,   877,   101,   631,    47,   189,   125,
     126,   622,   127,   437,   632,   175,   756,  1162,   510,   496,
     497,   513,   673,   749,  1142,   676,   677,   678,   761,    48,
      38,   169,   191,   176,   753,  -203,   762,   364,  1163,    91,
     633,   878,  1167,  1168,   438,    91,    63,   608,  1079,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,  1187,    92,   150,    66,   177,    39,   341,    92,    93,
     655,   341,   656,   634,    94,   155,   659,   660,   282,   661,
      58,    95,    40,    41,   433,   269,  1126,   156,   771,    64,
     772,   283,   666,   667,   668,    67,   669,    42,    68,   269,
     770,  1140,  1141,   565,    70,   675,    75,   105,   106,   107,
     108,   109,   110,   896,   729,   730,   688,    76,   472,    77,
    1166,   111,   112,   693,   477,   104,   479,   647,   648,   113,
     239,   240,   241,   242,   243,   244,   245,    86,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   178,   402,   403,    97,   404,    98,   367,   405,   154,
     737,   116,   994,   725,   726,   179,   117,   731,   732,   118,
     119,   164,   239,   240,   241,   242,   243,   244,   245,   180,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   775,   588,   589,   777,   592,   593,   594,
     733,   732,   782,   597,   598,   599,   743,   744,   602,  1116,
    1117,   788,   767,   768,   181,   794,   795,   254,   255,   256,
     257,   258,   523,   461,   462,   463,   464,   805,   465,   868,
     744,   467,   468,   469,   368,   873,   744,   182,   473,   474,
     475,   906,   907,   478,   940,   941,   185,   820,   186,   123,
     958,   744,   823,   966,   744,   969,   744,   191,   239,   240,
     241,   242,   243,   244,   245,   193,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   973,
     768,   105,   106,   107,   108,   109,   110,   982,   983,   984,
     983,   369,   986,   941,   208,   111,   112,  1008,  1009,  1010,
    1009,  1011,  1009,   113,   270,   252,   253,   254,   255,   256,
     257,   258,   884,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   116,   197,   150,  1070,  1071,
     117,   198,   909,   118,   119,   910,  1013,   983,  1015,  1016,
    1017,  1018,   921,  1020,  1021,   524,  1023,  1024,   271,  1035,
     744,   199,   923,   925,  1036,   744,   200,  -171,   202,   931,
     932,   201,   272,   215,   105,   106,   107,   108,   109,   110,
      53,   902,  1038,   744,   263,   273,   278,   944,   111,   112,
     216,   950,  1042,   744,  1049,  1016,   113,   515,  1050,   983,
     217,   954,   218,   274,  1051,   983,   407,   219,   408,  1053,
    1018,   220,   957,  1076,   744,   275,   221,   105,   106,   107,
     108,   109,   110,   123,  1077,   744,  1078,   744,   116,  1083,
     941,   111,   112,   117,  1090,   907,   118,   119,   222,   113,
     374,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,  1101,   744,   992,   993,   223,   996,   224,
     998,  1102,  1016,   105,   106,   107,   108,   109,   110,  1103,
    1018,   116,  1113,  1114,  1129,  1130,   117,   111,   112,   118,
     119,   280,   212,   903,   225,   113,   226,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,  1131,
    1132,   150,   281,  1134,  1130,   227,   123,   116,  1152,  1130,
    1153,  1130,   117,  1156,  1157,   118,   119,  1045,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   409,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
    1181,  1130,   782,   228,   567,   568,   929,   930,  1060,   123,
     686,   687,   526,   229,   230,  1064,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   231,   232,   233,  1073,  1074,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   234,   235,   410,   123,   251,   252,   253,   254,
     255,   256,   257,   258,   236,   286,   290,   296,   297,   331,
     332,   333,   334,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   335,   338,   150,   239,   240,
     241,   242,   243,   244,   245,   339,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   340,   345,   150,   105,   106,   107,   108,   109,   110,
     346,   347,   348,   352,   355,    11,   386,   401,   111,   112,
     387,   388,   389,   422,   425,   427,   113,   432,   434,   105,
     106,   107,   108,   109,   110,   441,   442,   444,   445,   446,
     447,   448,   455,   111,   112,   449,   450,   451,   452,   454,
     456,   113,   457,   458,   459,   466,   470,   706,   116,   476,
     480,   481,   487,   117,   488,   489,   118,   119,   490,   491,
     492,   493,   501,   506,   508,   516,   522,   708,   530,   550,
     709,   553,   710,   116,   554,   711,   555,   258,   117,   560,
     558,   118,   119,   561,   562,   712,   569,   570,   572,   579,
     582,   583,   713,   714,   585,   584,   590,   607,   604,   605,
     606,   609,   776,   619,   620,   105,   106,   107,   108,   109,
     110,   623,   624,   625,   626,   715,   639,   640,   643,   111,
     112,   649,   644,   671,   679,   663,   680,   113,   682,   239,
     240,   241,   242,   243,   244,   245,   123,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     684,   689,   690,   699,   717,   700,   701,   702,   723,   116,
     724,   123,   734,   735,   117,   738,    11,   118,   119,   736,
     739,   747,   740,   528,   718,   741,   742,   745,   750,   755,
     719,   758,   759,   763,   760,   754,   764,   765,   781,   769,
     766,   778,   779,   780,   796,   797,   809,   802,   812,   810,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   804,   720,   150,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   123,   806,   150,
     239,   240,   241,   242,   243,   244,   245,   807,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   816,   826,   831,   832,   808,   813,   814,   836,   105,
     106,   107,   108,   109,   110,   815,   821,   824,   837,   825,
     833,   839,   849,   111,   112,   850,   834,   835,   852,   854,
     838,   113,   856,   853,   859,   862,   863,   864,   865,   866,
     867,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   116,   870,   150,   869,   872,   117,   874,
     876,   118,   119,   885,   888,   886,   887,   891,   905,   904,
     901,   922,   927,   933,   529,   936,   938,   946,   955,   943,
     945,   956,   995,   951,   952,   105,   106,   107,   108,   109,
     110,   953,   962,   959,   960,   971,   961,   965,   975,   111,
     112,   976,  1014,   968,   970,   974,   977,   113,  1012,   999,
     105,   106,   107,   108,   109,   110,  1019,  1025,  1026,  1027,
    1029,  1034,  1052,  1030,   111,   112,  1031,  1041,  1046,  1056,
    1057,  1059,   113,  1047,   645,  1061,  1063,  1065,  1066,   116,
    1067,   123,  1068,  1069,   117,  1072,  1075,   118,   119,  1084,
    1085,  1096,  1094,  1097,  1098,  1104,  1105,  1106,  1107,  1108,
    1112,  1118,  1109,  1119,   116,  1110,  1115,  1120,   997,   117,
    1121,   983,   118,   119,   239,   240,   241,   242,   243,   244,
     245,  1122,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   539,  1124,  1125,  1127,  1128,
    1133,  1135,  1136,  1138,  1139,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   123,  1143,   150,
     239,   240,   241,   242,   243,   244,   245,  1146,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,  1155,   123,   239,   240,   241,   242,   243,   244,   245,
    1151,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,  1160,  1158,  1182,  1169,  1188,  1191,
    1195,  1192,  1196,   165,  1193,  1194,   436,   991,   638,   822,
     424,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   361,   194,   150,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    99,   665,
     150,   239,   240,   241,   242,   243,   244,   245,   505,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   239,   240,   241,   242,   243,   244,   245,   354,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,  1058,   683,  1043,  1170,   652,   895,   600,
       0,   205,   239,   240,   241,   242,   243,   244,   245,   540,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   239,   240,   241,   242,   243,   244,   245,
     879,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   541,     0,   789,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   239,   240,   241,   242,   243,   244,   245,   543,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,     0,     0,     0,   239,
     240,   241,   242,   243,   244,   245,   799,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,     0,     0,     0,     0,   790,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   239,
     240,   241,   242,   243,   244,   245,   392,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     239,   240,   241,   242,   243,   244,   245,   525,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   239,   240,   241,   242,   243,   244,   245,   531,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,     0,   532,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   239,
     240,   241,   242,   243,   244,   245,   533,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     239,   240,   241,   242,   243,   244,   245,   534,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   239,   240,   241,   242,   243,   244,   245,   535,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,     0,     0,     0,   239,   240,   241,   242,
     243,   244,   245,   536,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,     0,     0,
       0,     0,     0,     0,   239,   240,   241,   242,   243,   244,
     245,   537,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   239,   240,   241,   242,
     243,   244,   245,   538,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   239,   240,   241,
     242,   243,   244,   245,   542,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   239,   240,
     241,   242,   243,   244,   245,   793,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   239,
     240,   241,   242,   243,   244,   245,   798,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,     0,   800,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   239,   240,   241,
     242,   243,   244,   245,   801,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   239,   240,
     241,   242,   243,   244,   245,   860,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
       0,     0,     0,   239,   240,   241,   242,   243,   244,   245,
     911,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,     0,     0,     0,     0,     0,
       0,   239,   240,   241,   242,   243,   244,   245,   935,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   239,   240,   241,   242,   243,   244,   245,
     978,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   239,   240,   241,   242,   243,   244,
     245,  1000,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   239,   240,   241,   242,   243,
     244,   245,  1001,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   239,   240,   241,   242,
     243,   244,   245,  1002,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   239,   240,   241,
     242,   243,   244,   245,  1022,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
       0,     0,   912,   913,     0,     0,     0,   914,     0,   915,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1028,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   916,   917,     0,   918,     0,     0,     0,     0,
       0,     0,  1032,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   706,     0,  1033,     0,     0,
       1,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,   707,     0,     0,     0,   708,     0,     0,   709,     0,
     710,     0,     0,   711,     0,  1080,     3,     0,     0,     0,
       0,     0,     0,   712,     0,     0,     0,     0,     0,     0,
     713,   714,     0,     0,     0,     0,     0,  1099,     4,     5,
       0,     0,     0,   298,   299,     0,   300,     0,   301,   302,
       0,   919,   920,   715,     0,     0,     0,     0,  1100,     0,
       0,   303,     0,     0,     0,   716,     0,     0,     0,     0,
     212,     0,     0,   517,     0,     0,     0,     6,     0,     0,
       0,   304,   305,   306,   307,     0,     0,     0,   308,     0,
       0,     0,   717,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   310,     0,
       0,     0,   718,     7,     0,     8,   311,     0,   719,     9,
       0,   312,     0,     0,     0,     0,     0,     0,   313,     0,
       0,   314,    10,    11,   315,   316,     0,     0,     0,   658,
       0,     0,     0,     0,     0,     0,    12,     0,   317,    13,
       0,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,   720,     0,     0,     0,     0,     0,   318,   319,     0,
     320,   321,     0,     0,     0,     0,   322,     0,   323,     0,
       0,     0,     0,   324,   325,     0,     0,     0,     0,   326,
       0,     0,     0,     0,   327,     0,   328,     0,     0,     0,
     329,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,     0,     0,     0,
       0,     0,     0,   662,   897,     0,     0,     0,     0,     0,
     239,   240,   241,   242,   243,   244,   245,   657,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,     0,     0,     0,     0,   238,     0,   787,     0,
     552,     0,     0,   239,   240,   241,   242,   243,   244,   245,
     898,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,     0,     0,   239,   240,   241,
     242,   243,   244,   245,   259,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
     239,   240,   241,   242,   243,   244,   245,   674,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   240,   241,   242,   243,   244,   245,     0,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   241,   242,   243,   244,   245,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     242,   243,   244,   245,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,  -477,  -477,
    -477,  -477,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258
};

static const yytype_int16 yycheck[] =
{
      57,   353,   626,   772,   764,   618,   157,   577,   578,   622,
     158,   581,   471,   472,   691,   566,     3,     3,   477,     3,
     479,   275,     3,   102,    20,   291,   158,     3,     3,    20,
      72,     3,   766,     3,    59,    59,   512,     3,   514,     3,
      80,   885,   102,   100,   101,     4,   196,   515,   100,    95,
      96,   344,   891,   149,   111,   112,   113,    41,     8,   174,
     117,   821,     3,   195,   116,    39,   192,   215,     6,    18,
       6,     4,     5,     6,     7,   185,   153,   174,   546,   196,
      18,     3,   208,   233,   196,     3,    10,    11,    12,    13,
      14,    15,    16,   150,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     3,     3,   232,
     233,    85,   703,   704,    63,    56,   233,     3,   233,   144,
     144,   198,    86,   235,    57,   738,   886,   887,    69,   261,
     423,   722,    63,   158,   158,   705,   749,    86,   235,   235,
     753,   181,   435,   767,    41,   197,    41,    69,   118,   174,
     174,   208,   118,    71,   923,   212,   235,   199,   204,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   650,   235,   652,   136,   235,   236,
     446,   447,   239,   240,   241,   242,   243,   441,   454,   175,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,  1046,   351,   672,   262,   354,   145,  1047,   145,
     503,   343,    38,   163,    18,   149,   102,   185,     3,   116,
     151,     3,   118,     3,     4,     5,     6,     7,     8,    63,
     116,    63,   219,   220,   221,   222,   232,    17,    18,   830,
      80,   232,   128,   977,     3,    25,    26,   233,   232,   926,
      18,   205,   233,   401,   867,    35,   869,   233,   233,   872,
     811,   233,   410,   194,   161,   878,   152,   101,    72,   101,
     185,   147,   731,     3,   733,   734,   427,    57,   175,   116,
     174,   235,    62,   116,   341,    65,    66,   185,    70,    33,
       3,  1060,   225,   226,   227,    71,    73,    44,    45,    79,
     233,   235,    86,    83,    72,     3,   363,   364,    95,    96,
     234,   235,    59,   579,   371,   569,    60,   151,   572,   151,
     196,   147,    86,     9,   161,    56,   896,    13,   161,   109,
      74,   135,    63,   118,  1094,   112,   118,    81,   164,   233,
      70,   117,    39,   147,   166,   402,   403,    91,   405,   973,
     103,   191,   965,   410,   196,   968,    69,   970,    56,   118,
     194,   145,   194,     5,    71,   145,   196,   135,    75,   191,
     101,    69,   175,   104,     9,   175,   196,   196,    20,   147,
      77,   145,   162,   203,   196,    20,   117,   163,   118,   169,
     170,   233,   172,   129,   125,   139,   233,   150,   201,   232,
     233,   201,   550,   233,  1134,   553,   554,   555,   117,   185,
     117,   158,   232,   157,   233,   235,   125,   204,   171,    76,
     151,   233,  1152,  1153,   160,    76,     0,   484,  1041,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,  1181,   109,   233,     3,   199,   163,   203,   109,   116,
     517,   203,   519,   194,   121,   116,   523,   524,    56,   526,
     185,   128,   179,   180,   234,   235,  1117,   128,     3,   231,
       5,    69,   539,   540,   541,     3,   543,   194,   118,   235,
     638,  1132,  1133,   235,     3,   552,   179,     3,     4,     5,
       6,     7,     8,   769,    67,    68,   563,   117,   314,   185,
    1151,    17,    18,   570,   320,   235,   322,   234,   235,    25,
      10,    11,    12,    13,    14,    15,    16,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   232,    13,    14,     3,    16,     3,    53,    19,     3,
     607,    57,   904,   234,   235,   209,    62,   234,   235,    65,
      66,     3,    10,    11,    12,    13,    14,    15,    16,     3,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   640,   464,   465,   643,   467,   468,   469,
     234,   235,   649,   473,   474,   475,   234,   235,   478,   232,
     233,   658,   234,   235,    41,   662,   663,    26,    27,    28,
      29,    30,   102,   301,   302,   303,   304,   674,   306,   234,
     235,   309,   310,   311,   130,   234,   235,   147,   316,   317,
     318,   234,   235,   321,   234,   235,   209,   694,     3,   145,
     234,   235,   699,   234,   235,   234,   235,   232,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   234,
     235,     3,     4,     5,     6,     7,     8,   234,   235,   234,
     235,   187,   234,   235,     9,    17,    18,   234,   235,   234,
     235,   234,   235,    25,    61,    24,    25,    26,    27,    28,
      29,    30,   759,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,    57,   209,   233,    47,    48,
      62,   209,   789,    65,    66,   792,   234,   235,   234,   235,
     234,   235,   799,   234,   235,   235,   234,   235,   115,   234,
     235,   209,   809,   810,   234,   235,     3,   124,     3,   816,
     817,   178,   129,   233,     3,     4,     5,     6,     7,     8,
       8,   133,   234,   235,   235,   142,    41,   834,    17,    18,
     233,   838,   234,   235,   234,   235,    25,   235,   234,   235,
     233,   848,   233,   160,   234,   235,    35,   233,    37,   234,
     235,   233,   859,   234,   235,   172,   233,     3,     4,     5,
       6,     7,     8,   145,   234,   235,   234,   235,    57,   234,
     235,    17,    18,    62,   234,   235,    65,    66,   233,    25,
      26,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   234,   235,   902,   903,   233,   905,   233,
     907,   234,   235,     3,     4,     5,     6,     7,     8,   234,
     235,    57,    47,    48,   234,   235,    62,    17,    18,    65,
      66,    43,   204,   235,   233,    25,   233,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   232,
     233,   233,    43,   234,   235,   233,   145,    57,   234,   235,
     234,   235,    62,   234,   235,    65,    66,   974,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   168,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     234,   235,   999,   233,   437,   438,   814,   815,  1005,   145,
     561,   562,   102,   233,   233,  1012,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   233,   233,   233,  1025,  1026,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   233,   233,   233,   145,    23,    24,    25,    26,
      27,    28,    29,    30,   233,    56,    56,    56,     3,     3,
     147,   209,     3,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   147,   209,   233,    10,    11,
      12,    13,    14,    15,    16,     3,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,    26,     3,   233,     3,     4,     5,     6,     7,     8,
       3,     3,     3,     3,     3,   175,   234,   233,    17,    18,
     234,   234,   234,     3,     3,     3,    25,   234,     3,     3,
       4,     5,     6,     7,     8,   124,   146,     3,     3,     3,
       3,     3,   178,    17,    18,     3,     3,     3,     3,     3,
       3,    25,     3,     3,   233,   233,    52,    18,    57,   233,
     233,   233,     3,    62,     3,   147,    65,    66,     3,   147,
     209,     3,   148,     3,     3,   234,   234,    38,   234,   233,
      41,   233,    43,    57,   233,    46,   233,    30,    62,   125,
     235,    65,    66,   125,   125,    56,   124,   147,   124,     3,
       3,   178,    63,    64,     5,   178,     4,   233,     5,     5,
     145,   198,    86,   147,     3,     3,     4,     5,     6,     7,
       8,     3,     3,   147,     3,    86,    51,   131,    20,    17,
      18,   233,   149,   234,   234,   123,   106,    25,     3,    10,
      11,    12,    13,    14,    15,    16,   145,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     105,     3,     3,   233,   125,   125,   125,   233,     3,    57,
       3,   145,   234,   234,    62,   233,   175,    65,    66,    63,
     233,     3,   233,   235,   145,   233,   233,   198,   198,     3,
     151,     3,   233,   233,   125,   147,   233,   125,    86,     3,
     233,   125,     3,     3,   234,   234,    51,   234,   124,   111,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   234,   194,   233,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   145,   234,   233,
      10,    11,    12,    13,    14,    15,    16,   234,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    20,     3,   145,     3,   234,   233,   233,    42,     3,
       4,     5,     6,     7,     8,   233,   233,   233,     3,   233,
     233,     4,   125,    17,    18,   125,   233,   233,     5,     4,
     233,    25,     4,   174,   233,     3,     3,     3,     3,     3,
     233,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,    57,   198,   233,   233,   233,    62,   198,
       3,    65,    66,   233,     3,   233,   233,   233,    20,   191,
     235,   234,     3,     3,   235,     3,     3,    41,   234,     5,
       5,     4,    86,   233,   233,     3,     4,     5,     6,     7,
       8,   233,   235,   234,   234,   198,   234,   233,   125,    17,
      18,   125,    18,   233,   233,   233,   233,    25,    20,   233,
       3,     4,     5,     6,     7,     8,     3,   233,   233,   125,
     234,     3,     3,   234,    17,    18,   234,   233,   233,     3,
      51,   159,    25,   233,   235,   105,     3,   199,   156,    57,
       3,   145,     3,     5,    62,     5,   234,    65,    66,   156,
       5,     3,   121,   234,   234,     3,     3,     3,   233,   233,
     233,     3,   167,     3,    57,   167,   156,   132,    86,    62,
     132,   235,    65,    66,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   235,     3,     3,   234,   234,
     233,   233,   165,     3,     3,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   145,   164,   233,
      10,    11,    12,    13,    14,    15,    16,     5,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     3,   145,    10,    11,    12,    13,    14,    15,    16,
     233,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   113,    72,   126,   201,   183,   147,
       5,   147,     5,    64,   143,   143,   269,   901,   499,   698,
     262,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   213,    79,   233,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,    52,   529,
     233,    10,    11,    12,    13,    14,    15,    16,   345,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,   202,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   999,   559,   973,  1157,   513,   768,   476,
      -1,   104,    10,    11,    12,    13,    14,    15,    16,   235,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     756,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   235,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   235,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   235,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    10,
      11,    12,    13,    14,    15,    16,   234,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   234,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   234,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,   234,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,   234,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,   234,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,   234,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,   234,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,   234,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,   234,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   234,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   234,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   234,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,   234,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   234,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
     234,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,   234,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    10,    11,    12,    13,    14,    15,    16,
     234,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,   234,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   234,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   234,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,   234,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    82,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,   108,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    18,    -1,   234,    -1,    -1,
      32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    41,    -1,
      43,    -1,    -1,    46,    -1,   234,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,   234,    80,    81,
      -1,    -1,    -1,    49,    50,    -1,    52,    -1,    54,    55,
      -1,   206,   207,    86,    -1,    -1,    -1,    -1,   234,    -1,
      -1,    67,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
     204,    -1,    -1,   186,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    87,    88,    89,    90,    -1,    -1,    -1,    94,    -1,
      -1,    -1,   125,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,    -1,   145,   155,    -1,   157,   122,    -1,   151,   161,
      -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,   137,   174,   175,   140,   141,    -1,    -1,    -1,   186,
      -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,   154,   191,
      -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,
      -1,   194,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,
     176,   177,    -1,    -1,    -1,    -1,   182,    -1,   184,    -1,
      -1,    -1,    -1,   189,   190,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,   200,    -1,   202,    -1,    -1,    -1,
     206,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    39,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    95,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,     3,    -1,    95,    -1,
      40,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      85,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    41,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    40,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
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
     247,     3,     5,   255,   256,   238,    86,   238,   125,     3,
       3,    86,   238,   304,   235,   297,   297,    95,   238,   105,
     234,   234,   235,   234,   238,   238,   234,   234,   234,   235,
     234,   234,   234,   239,   234,   238,   234,   234,   234,    51,
     111,   253,   124,   233,   233,   233,    20,    20,   232,   257,
     238,   233,   275,   238,   233,   233,     3,   325,   295,   295,
     327,   145,     3,   233,   233,   233,    42,     3,   233,     4,
       4,     5,     6,     7,    57,   225,   226,   227,   233,   125,
     125,   295,     5,   174,     4,   331,     4,   331,   331,   233,
     234,   286,     3,     3,     3,     3,     3,   233,   234,   233,
     198,   286,   233,   234,   198,   286,     3,   196,   233,   319,
      63,   101,   151,   194,   238,   233,   233,   233,     3,   260,
     260,   233,   325,   315,   334,   320,   332,    39,    85,   251,
     251,   235,   133,   235,   191,    20,   234,   235,   303,   238,
     238,   234,    77,    78,    82,    84,   107,   108,   110,   206,
     207,   238,   234,   238,   250,   238,   254,     3,   278,   278,
     278,   238,   238,     3,   260,   234,     3,   322,     3,   321,
     234,   235,   295,     5,   238,     5,    41,    63,   151,   194,
     238,   233,   233,   233,   238,   234,     4,   238,   234,   234,
     234,   234,   235,   286,   286,   233,   234,   286,   233,   234,
     233,   198,   286,   234,   233,   125,   125,   233,   234,   322,
     260,   260,   234,   235,   234,   321,   234,    38,   147,   164,
     327,   256,   238,   238,   305,    86,   238,    86,   238,   233,
     234,   234,   234,   251,   205,   235,   252,   257,   234,   235,
     234,   234,    20,   234,    18,   234,   235,   234,   235,     3,
     234,   235,   234,   234,   235,   233,   233,   125,   234,   234,
     234,   234,   234,   234,     3,   234,   234,   286,   234,   286,
     286,   233,   234,   315,   334,   238,   233,   233,   325,   234,
     234,   234,     3,   234,     5,    20,     3,    51,   304,   159,
     238,   105,   258,     3,   238,   199,   156,     3,     3,     5,
      47,    48,     5,   238,   238,   234,   234,   234,   234,   286,
     234,   322,   321,   234,   156,     5,    80,   181,   153,   198,
     234,   251,   166,   191,   121,   259,     3,   234,   234,   234,
     234,   234,   234,   234,     3,     3,     3,   233,   233,   167,
     167,   260,   233,    47,    48,   156,   232,   233,     3,     3,
     132,   132,     3,   323,     3,     3,   323,   234,   234,   234,
     235,   232,   233,   233,   234,   233,   165,   324,     3,     3,
     323,   323,   324,   164,   316,   317,     5,    18,    72,   135,
     147,   233,   234,   234,    18,     3,   234,   235,    72,   199,
     113,   103,   150,   171,    80,   191,   323,   324,   324,   201,
     317,    73,   112,    59,   144,   158,   174,    59,   144,   158,
     174,   234,   126,    86,   145,    86,   145,   324,   183,     4,
     136,   147,   147,   143,   143,     5,     5
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
#line 668 "parser/evoparser.y"
    {
        char buf[16];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[(1) - (2)].intval));
        emit("ORDERBY %s %d", buf, (yyvsp[(2) - (2)].intval));
        AddOrderByColumn(buf, (yyvsp[(2) - (2)].intval));
    ;}
    break;

  case 127:
#line 676 "parser/evoparser.y"
    { /* no limit */ ;}
    break;

  case 128:
#line 677 "parser/evoparser.y"
    { emit("LIMIT 1"); g_expr.limitExpr = (yyvsp[(2) - (2)].exprval); ;}
    break;

  case 129:
#line 678 "parser/evoparser.y"
    { emit("LIMIT 2"); g_expr.offsetExpr = (yyvsp[(2) - (4)].exprval); g_expr.limitExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 130:
#line 679 "parser/evoparser.y"
    { emit("LIMIT OFFSET"); g_expr.limitExpr = (yyvsp[(2) - (4)].exprval); g_expr.offsetExpr = (yyvsp[(4) - (4)].exprval); ;}
    break;

  case 131:
#line 682 "parser/evoparser.y"
    { /* no locking */ ;}
    break;

  case 132:
#line 683 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE"); ;}
    break;

  case 133:
#line 684 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE"); ;}
    break;

  case 134:
#line 685 "parser/evoparser.y"
    { g_sel.forUpdate = 1; emit("FOR UPDATE SKIP LOCKED"); ;}
    break;

  case 135:
#line 686 "parser/evoparser.y"
    { g_sel.forUpdate = 2; emit("FOR SHARE SKIP LOCKED"); ;}
    break;

  case 137:
#line 690 "parser/evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 138:
#line 693 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 139:
#line 694 "parser/evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 140:
#line 697 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 141:
#line 698 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror(scanner, "duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 142:
#line 699 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror(scanner, "duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 143:
#line 700 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror(scanner, "duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 144:
#line 701 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror(scanner, "duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 145:
#line 702 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror(scanner, "duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 146:
#line 703 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror(scanner, "duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 147:
#line 704 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror(scanner, "duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 148:
#line 705 "parser/evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror(scanner, "duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 149:
#line 708 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 150:
#line 709 "parser/evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 151:
#line 711 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    ;}
    break;

  case 152:
#line 719 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[(1) - (2)].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    ;}
    break;

  case 153:
#line 724 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); strncpy(g_currentAlias, (yyvsp[(2) - (2)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 154:
#line 725 "parser/evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); strncpy(g_currentAlias, (yyvsp[(1) - (1)].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 155:
#line 726 "parser/evoparser.y"
    { g_currentAlias[0] = '\0'; ;}
    break;

  case 156:
#line 729 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 157:
#line 730 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 160:
#line 739 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        if (g_qctx) AddJoinTable((yyvsp[(1) - (3)].strval), g_currentAlias);
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 161:
#line 745 "parser/evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); if (g_qctx) AddJoinTable((yyvsp[(3) - (5)].strval), g_currentAlias); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 162:
#line 746 "parser/evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 163:
#line 747 "parser/evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 166:
#line 756 "parser/evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); SetLastJoinType(100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 167:
#line 758 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); ;}
    break;

  case 168:
#line 760 "parser/evoparser.y"
    { emit("JOIN %d", 200); SetLastJoinType(200); SetJoinOnExpr((yyvsp[(5) - (5)].exprval)); ;}
    break;

  case 169:
#line 762 "parser/evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); SetLastJoinType(300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 170:
#line 764 "parser/evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); SetLastJoinType(400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 171:
#line 767 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 172:
#line 768 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 173:
#line 769 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 174:
#line 772 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 175:
#line 773 "parser/evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 176:
#line 776 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 177:
#line 777 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 178:
#line 780 "parser/evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 179:
#line 781 "parser/evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 180:
#line 782 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 183:
#line 789 "parser/evoparser.y"
    { emit("ONEXPR"); SetJoinOnExpr((yyvsp[(2) - (2)].exprval)); ;}
    break;

  case 184:
#line 790 "parser/evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 185:
#line 795 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 186:
#line 797 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 187:
#line 799 "parser/evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 189:
#line 803 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 190:
#line 804 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 191:
#line 807 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 192:
#line 808 "parser/evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 193:
#line 811 "parser/evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 194:
#line 816 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_del.multiDelete) {
            DeleteProcess();
        }
    ;}
    break;

  case 195:
#line 826 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 196:
#line 833 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 197:
#line 834 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 198:
#line 835 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 199:
#line 836 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 200:
#line 841 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 201:
#line 845 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 202:
#line 847 "parser/evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); if (g_qctx) AddDeleteTarget((yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 205:
#line 853 "parser/evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); if (g_qctx) SetMultiDelete(); ;}
    break;

  case 206:
#line 858 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    ;}
    break;

  case 207:
#line 865 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[(3) - (3)].strval));
        g_drop.ifExists = 0;
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 208:
#line 872 "parser/evoparser.y"
    {
        emit("DROPTABLE IF EXISTS %s", (yyvsp[(5) - (5)].strval));
        g_drop.ifExists = 1;
        GetDropTableName((yyvsp[(5) - (5)].strval));
        free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 209:
#line 882 "parser/evoparser.y"
    {
        emit("STMT");
        CreateIndexProcess();
    ;}
    break;

  case 210:
#line 889 "parser/evoparser.y"
    {
        emit("CREATEINDEX %s ON %s", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval));
        SetIndexInfo((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), "");
        free((yyvsp[(3) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 211:
#line 896 "parser/evoparser.y"
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

  case 212:
#line 906 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexUnique();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 213:
#line 914 "parser/evoparser.y"
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

  case 214:
#line 924 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX %s ON %s", (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval));
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].strval), "");
        free((yyvsp[(3) - (10)].strval));
        free((yyvsp[(5) - (10)].strval));
    ;}
    break;

  case 215:
#line 932 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX IF NOT EXISTS %s ON %s", (yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval));
        SetIndexUsingHash();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(5) - (12)].strval), (yyvsp[(7) - (12)].strval), "");
        free((yyvsp[(5) - (12)].strval));
        free((yyvsp[(7) - (12)].strval));
    ;}
    break;

  case 216:
#line 941 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEHASHINDEX %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexUnique();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 217:
#line 950 "parser/evoparser.y"
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

  case 218:
#line 960 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval));
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), "");
        free((yyvsp[(4) - (9)].strval));
        free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 219:
#line 968 "parser/evoparser.y"
    {
        emit("CREATEINDEX CONCURRENTLY IF NOT EXISTS %s ON %s", (yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval));
        SetIndexConcurrent();
        SetIndexIfNotExists();
        SetIndexInfo((yyvsp[(6) - (11)].strval), (yyvsp[(8) - (11)].strval), "");
        free((yyvsp[(6) - (11)].strval));
        free((yyvsp[(8) - (11)].strval));
    ;}
    break;

  case 220:
#line 977 "parser/evoparser.y"
    {
        emit("CREATEUNIQUEINDEX CONCURRENTLY %s ON %s", (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval));
        SetIndexUnique();
        SetIndexConcurrent();
        SetIndexInfo((yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), "");
        free((yyvsp[(5) - (10)].strval));
        free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 221:
#line 986 "parser/evoparser.y"
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

  case 222:
#line 996 "parser/evoparser.y"
    {
        emit("CREATEHASHINDEX CONCURRENTLY %s ON %s", (yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval));
        SetIndexConcurrent();
        SetIndexUsingHash();
        SetIndexInfo((yyvsp[(4) - (11)].strval), (yyvsp[(6) - (11)].strval), "");
        free((yyvsp[(4) - (11)].strval));
        free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 223:
#line 1005 "parser/evoparser.y"
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

  case 224:
#line 1017 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 225:
#line 1022 "parser/evoparser.y"
    {
        SetIndexAddColumn((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 226:
#line 1027 "parser/evoparser.y"
    {
        /* Expression index — single expression, already set via SetIndexExpression */
    ;}
    break;

  case 227:
#line 1033 "parser/evoparser.y"
    {
        emit("IDX_EXPR UPPER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_upper(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 228:
#line 1040 "parser/evoparser.y"
    {
        emit("IDX_EXPR LOWER(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_lower(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 229:
#line 1047 "parser/evoparser.y"
    {
        emit("IDX_EXPR LENGTH(%s)", (yyvsp[(3) - (4)].strval));
        SetIndexAddColumn((yyvsp[(3) - (4)].strval));
        SetIndexExpression(expr_make_length(expr_make_column((yyvsp[(3) - (4)].strval))));
        free((yyvsp[(3) - (4)].strval));
    ;}
    break;

  case 230:
#line 1054 "parser/evoparser.y"
    {
        emit("IDX_EXPR CONCAT(%s,%s)", (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval));
        SetIndexAddColumn((yyvsp[(3) - (6)].strval));
        SetIndexExpression(expr_make_concat(expr_make_column((yyvsp[(3) - (6)].strval)), expr_make_column((yyvsp[(5) - (6)].strval))));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(5) - (6)].strval));
    ;}
    break;

  case 231:
#line 1064 "parser/evoparser.y"
    {
        emit("STMT");
        DropIndexProcess();
    ;}
    break;

  case 232:
#line 1071 "parser/evoparser.y"
    {
        emit("DROPINDEX %s", (yyvsp[(3) - (3)].strval));
        SetDropIndexName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 233:
#line 1080 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    ;}
    break;

  case 234:
#line 1087 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 235:
#line 1093 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s (+multi)", (yyvsp[(3) - (5)].strval));
        GetDropTableName((yyvsp[(3) - (5)].strval));
        free((yyvsp[(3) - (5)].strval));
    ;}
    break;

  case 236:
#line 1101 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(1) - (1)].strval));
        TruncateAddTable((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 237:
#line 1107 "parser/evoparser.y"
    {
        emit("TRUNCATE_EXTRA %s", (yyvsp[(3) - (3)].strval));
        TruncateAddTable((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 239:
#line 1115 "parser/evoparser.y"
    { emit("TRUNCATE CASCADE"); TruncateSetCascade(); ;}
    break;

  case 240:
#line 1116 "parser/evoparser.y"
    { emit("TRUNCATE RESTRICT"); ;}
    break;

  case 241:
#line 1117 "parser/evoparser.y"
    { emit("TRUNCATE RESTART IDENTITY"); ;}
    break;

  case 242:
#line 1118 "parser/evoparser.y"
    { emit("TRUNCATE CONTINUE IDENTITY"); TruncateSetContinueIdentity(); ;}
    break;

  case 243:
#line 1123 "parser/evoparser.y"
    {
        emit("STMT");
        ReclaimTableProcess();
    ;}
    break;

  case 244:
#line 1130 "parser/evoparser.y"
    {
        emit("RECLAIMTABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 245:
#line 1139 "parser/evoparser.y"
    {
        emit("STMT");
        AnalyzeTableProcess();
    ;}
    break;

  case 246:
#line 1146 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s", (yyvsp[(3) - (3)].strval));
        GetDropTableName((yyvsp[(3) - (3)].strval));
        free((yyvsp[(3) - (3)].strval));
    ;}
    break;

  case 247:
#line 1152 "parser/evoparser.y"
    {
        emit("ANALYZETABLE %s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        char full[512];
        snprintf(full, sizeof(full), "%s.%s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        GetDropTableName(full);
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 248:
#line 1162 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 249:
#line 1166 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddCheckConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(9) - (10)].exprval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 250:
#line 1172 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD UNIQUE %s %s", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        AlterTableAddUniqueConstraint((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval));
    ;}
    break;

  case 251:
#line 1178 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK %s %s", (yyvsp[(3) - (17)].strval), (yyvsp[(6) - (17)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (17)].strval), 127);
        AlterTableAddForeignKeyConstraint((yyvsp[(3) - (17)].strval), (yyvsp[(13) - (17)].strval));
        free((yyvsp[(3) - (17)].strval)); free((yyvsp[(6) - (17)].strval)); free((yyvsp[(13) - (17)].strval));
    ;}
    break;

  case 252:
#line 1185 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD CHECK NOT VALID %s %s", (yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval));
        AlterTableAddCheckConstraintNotValid((yyvsp[(3) - (12)].strval), (yyvsp[(6) - (12)].strval), (yyvsp[(9) - (12)].exprval));
        free((yyvsp[(3) - (12)].strval)); free((yyvsp[(6) - (12)].strval));
    ;}
    break;

  case 253:
#line 1191 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD FK NOT VALID %s %s", (yyvsp[(3) - (19)].strval), (yyvsp[(6) - (19)].strval));
        strncpy(g_constr.pendingConstraintName, (yyvsp[(6) - (19)].strval), 127);
        AlterTableAddForeignKeyConstraintNotValid((yyvsp[(3) - (19)].strval), (yyvsp[(13) - (19)].strval));
        free((yyvsp[(3) - (19)].strval)); free((yyvsp[(6) - (19)].strval)); free((yyvsp[(13) - (19)].strval));
    ;}
    break;

  case 254:
#line 1198 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD PK %s %s", (yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        AlterTableAddPrimaryKey((yyvsp[(3) - (11)].strval), (yyvsp[(6) - (11)].strval));
        free((yyvsp[(3) - (11)].strval)); free((yyvsp[(6) - (11)].strval));
    ;}
    break;

  case 255:
#line 1204 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 256:
#line 1210 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME CONSTRAINT %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameConstraint((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 257:
#line 1216 "parser/evoparser.y"
    {
        emit("ALTER TABLE ENABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableEnableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 258:
#line 1222 "parser/evoparser.y"
    {
        emit("ALTER TABLE DISABLE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDisableConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 259:
#line 1228 "parser/evoparser.y"
    {
        emit("ALTER TABLE VALIDATE CONSTRAINT %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableValidateConstraint((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 260:
#line 1234 "parser/evoparser.y"
    {
        emit("ALTER TABLE ADD COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableAddColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 261:
#line 1240 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        AlterTableDropColumn((yyvsp[(3) - (6)].strval), (yyvsp[(6) - (6)].strval));
        free((yyvsp[(3) - (6)].strval)); free((yyvsp[(6) - (6)].strval));
    ;}
    break;

  case 262:
#line 1246 "parser/evoparser.y"
    {
        emit("ALTER TABLE DROP COLUMN %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        AlterTableDropColumn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval));
        free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval));
    ;}
    break;

  case 263:
#line 1252 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (8)].strval), (yyvsp[(6) - (8)].strval), (yyvsp[(8) - (8)].strval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(6) - (8)].strval)); free((yyvsp[(8) - (8)].strval));
    ;}
    break;

  case 264:
#line 1258 "parser/evoparser.y"
    {
        emit("ALTER TABLE RENAME COLUMN %s %s %s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        AlterTableRenameColumn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].strval));
        free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); free((yyvsp[(7) - (7)].strval));
    ;}
    break;

  case 265:
#line 1264 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 266:
#line 1270 "parser/evoparser.y"
    {
        emit("ALTER TABLE MODIFY COLUMN %s %s %d", (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        AlterTableModifyColumn((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (yyvsp[(6) - (8)].intval));
        free((yyvsp[(3) - (8)].strval)); free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 267:
#line 1276 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (10)].strval), (yyvsp[(6) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].intval));
        free((yyvsp[(3) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); free((yyvsp[(7) - (10)].strval));
    ;}
    break;

  case 268:
#line 1282 "parser/evoparser.y"
    {
        emit("ALTER TABLE CHANGE COLUMN %s %s %s %d", (yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        AlterTableChangeColumn((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].strval), (yyvsp[(6) - (9)].strval), (yyvsp[(7) - (9)].intval));
        free((yyvsp[(3) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); free((yyvsp[(6) - (9)].strval));
    ;}
    break;

  case 269:
#line 1289 "parser/evoparser.y"
    { ;}
    break;

  case 270:
#line 1290 "parser/evoparser.y"
    { if (g_qctx) g_upd.colPosition = 1; ;}
    break;

  case 271:
#line 1291 "parser/evoparser.y"
    { if (g_qctx) { g_upd.colPosition = 2; strncpy(g_upd.colPositionAfter, (yyvsp[(2) - (2)].strval), 127); g_upd.colPositionAfter[127] = '\0'; } free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 272:
#line 1295 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_ins.insertFromSelect)
            InsertProcess();
    ;}
    break;

  case 273:
#line 1303 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval));
    ;}
    break;

  case 274:
#line 1309 "parser/evoparser.y"
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

  case 276:
#line 1322 "parser/evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 277:
#line 1325 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 278:
#line 1326 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 279:
#line 1327 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 280:
#line 1328 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 281:
#line 1329 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 285:
#line 1336 "parser/evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 286:
#line 1340 "parser/evoparser.y"
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

  case 287:
#line 1350 "parser/evoparser.y"
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

  case 288:
#line 1362 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 289:
#line 1363 "parser/evoparser.y"
    { InsertRowSeparator(); ;}
    break;

  case 290:
#line 1363 "parser/evoparser.y"
    { emit("VALUES %d", (yyvsp[(5) - (6)].intval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 291:
#line 1366 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 292:
#line 1367 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 293:
#line 1368 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 294:
#line 1369 "parser/evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 295:
#line 1373 "parser/evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 296:
#line 1376 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 297:
#line 1377 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 298:
#line 1378 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 299:
#line 1379 "parser/evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror(scanner, "bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 300:
#line 1385 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 301:
#line 1391 "parser/evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)); ;}
    break;

  case 302:
#line 1396 "parser/evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 303:
#line 1401 "parser/evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 304:
#line 1406 "parser/evoparser.y"
    {
        emit("STMT");
        if (!g_upd.multiUpdate) {
            UpdateProcess();
        }
    ;}
    break;

  case 305:
#line 1415 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
        if (g_qctx && g_sel.joinTableCount > 1 && !g_upd.multiUpdate)
            SetMultiUpdate();
    ;}
    break;

  case 306:
#line 1422 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 307:
#line 1423 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 308:
#line 1424 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 309:
#line 1429 "parser/evoparser.y"
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

  case 310:
#line 1440 "parser/evoparser.y"
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

  case 311:
#line 1452 "parser/evoparser.y"
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

  case 312:
#line 1463 "parser/evoparser.y"
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

  case 313:
#line 1478 "parser/evoparser.y"
    { emit("RENAMETABLE %s %s", (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); RenameTableProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 314:
#line 1482 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 315:
#line 1486 "parser/evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateDatabaseProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 316:
#line 1487 "parser/evoparser.y"
    { emit("CREATESCHEMA %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); CreateSchemaProcess((yyvsp[(4) - (4)].strval), (yyvsp[(3) - (4)].intval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 317:
#line 1492 "parser/evoparser.y"
    { emit("DROPDATABASE %s", (yyvsp[(3) - (3)].strval)); DropDatabaseProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 318:
#line 1494 "parser/evoparser.y"
    { emit("DROPDATABASE IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropDatabaseProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 319:
#line 1496 "parser/evoparser.y"
    { emit("DROPSCHEMA %s", (yyvsp[(3) - (3)].strval)); DropSchemaProcess((yyvsp[(3) - (3)].strval), 0); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 320:
#line 1498 "parser/evoparser.y"
    { emit("DROPSCHEMA IF EXISTS %s", (yyvsp[(5) - (5)].strval)); DropSchemaProcess((yyvsp[(5) - (5)].strval), 1); free((yyvsp[(5) - (5)].strval)); ;}
    break;

  case 321:
#line 1501 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 322:
#line 1502 "parser/evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror(scanner, "IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 323:
#line 1506 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 324:
#line 1511 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d", (yyvsp[(3) - (5)].strval)); CreateDomainProcess((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval), NULL, 0, 0); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 325:
#line 1513 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d DEFAULT", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 0, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 326:
#line 1515 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL", (yyvsp[(3) - (7)].strval)); CreateDomainProcess((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval), NULL, 1, 0); free((yyvsp[(3) - (7)].strval)); ;}
    break;

  case 327:
#line 1517 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d CHECK", (yyvsp[(3) - (9)].strval)); CreateDomainProcess((yyvsp[(3) - (9)].strval), (yyvsp[(5) - (9)].intval), (yyvsp[(8) - (9)].exprval), 0, 1); free((yyvsp[(3) - (9)].strval)); ;}
    break;

  case 328:
#line 1519 "parser/evoparser.y"
    { emit("CREATEDOMAIN %s %d NOTNULL CHECK", (yyvsp[(3) - (11)].strval)); CreateDomainProcess((yyvsp[(3) - (11)].strval), (yyvsp[(5) - (11)].intval), (yyvsp[(10) - (11)].exprval), 1, 1); free((yyvsp[(3) - (11)].strval)); ;}
    break;

  case 329:
#line 1523 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 330:
#line 1527 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(2) - (2)].strval)); UseDatabaseProcess((yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 331:
#line 1528 "parser/evoparser.y"
    { emit("USEDATABASE %s", (yyvsp[(3) - (3)].strval)); UseDatabaseProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 332:
#line 1533 "parser/evoparser.y"
    {
        emit("STMT");
        if (g_create.ctasMode == CTAS_NONE || g_create.ctasMode == CTAS_EXPLICIT)
            CreateTableProcess();
        /* CTAS_INFER: table created in post-parse from SELECT result */
    ;}
    break;

  case 333:
#line 1543 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval));
        g_create.isTemporary = (yyvsp[(2) - (9)].intval);
        GetTableName((yyvsp[(5) - (9)].strval));
        free((yyvsp[(5) - (9)].strval));
    ;}
    break;

  case 334:
#line 1552 "parser/evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(9) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); g_create.isTemporary = (yyvsp[(2) - (11)].intval); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 336:
#line 1556 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(4) - (4)].intval)); SetTableAutoIncrement((yyvsp[(4) - (4)].intval)); ;}
    break;

  case 337:
#line 1557 "parser/evoparser.y"
    { emit("TABLE OPT AUTOINC %d", (yyvsp[(3) - (3)].intval)); SetTableAutoIncrement((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 338:
#line 1558 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT DELETE ROWS"); g_create.onCommitDelete = 1; ;}
    break;

  case 339:
#line 1559 "parser/evoparser.y"
    { emit("TABLE OPT ON COMMIT PRESERVE ROWS"); g_create.onCommitDelete = 0; ;}
    break;

  case 340:
#line 1561 "parser/evoparser.y"
    { emit("SHARD HASH %s %d", (yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); SetShardHash((yyvsp[(6) - (9)].strval), (yyvsp[(9) - (9)].intval)); free((yyvsp[(6) - (9)].strval)); ;}
    break;

  case 341:
#line 1563 "parser/evoparser.y"
    { emit("SHARD RANGE %s", (yyvsp[(6) - (10)].strval)); SetShardRange((yyvsp[(6) - (10)].strval)); free((yyvsp[(6) - (10)].strval)); ;}
    break;

  case 344:
#line 1571 "parser/evoparser.y"
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

  case 345:
#line 1586 "parser/evoparser.y"
    {
        AddShardRangeDef((yyvsp[(2) - (9)].strval), "", (yyvsp[(9) - (9)].intval));
        free((yyvsp[(2) - (9)].strval));
    ;}
    break;

  case 346:
#line 1594 "parser/evoparser.y"
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

  case 347:
#line 1608 "parser/evoparser.y"
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

  case 348:
#line 1622 "parser/evoparser.y"
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

  case 349:
#line 1636 "parser/evoparser.y"
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

  case 350:
#line 1648 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 351:
#line 1649 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 352:
#line 1650 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 353:
#line 1653 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 354:
#line 1654 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 355:
#line 1657 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 356:
#line 1658 "parser/evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(6) - (7)].intval)); g_constr.pendingConstraintName[0] = '\0'; free((yyvsp[(2) - (7)].strval)); ;}
    break;

  case 357:
#line 1659 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 358:
#line 1660 "parser/evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 359:
#line 1661 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 360:
#line 1662 "parser/evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 361:
#line 1663 "parser/evoparser.y"
    { emit("CHECK"); AddCheckConstraint((yyvsp[(3) - (4)].exprval)); ;}
    break;

  case 362:
#line 1664 "parser/evoparser.y"
    { emit("CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(2) - (6)].strval), 127); AddCheckConstraint((yyvsp[(5) - (6)].exprval)); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 363:
#line 1666 "parser/evoparser.y"
    { emit("FOREIGNKEY"); AddForeignKeyRefTable((yyvsp[(7) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 364:
#line 1668 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); AddForeignKeyRefTableSchema((yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval)); free((yyvsp[(7) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 365:
#line 1670 "parser/evoparser.y"
    { emit("FOREIGNKEY"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (13)].strval), 127); AddForeignKeyRefTable((yyvsp[(9) - (13)].strval)); free((yyvsp[(2) - (13)].strval)); free((yyvsp[(9) - (13)].strval)); ;}
    break;

  case 366:
#line 1672 "parser/evoparser.y"
    { emit("FOREIGNKEY CROSSSCHEMA"); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (15)].strval), 127); AddForeignKeyRefTableSchema((yyvsp[(9) - (15)].strval), (yyvsp[(11) - (15)].strval)); free((yyvsp[(2) - (15)].strval)); free((yyvsp[(9) - (15)].strval)); free((yyvsp[(11) - (15)].strval)); ;}
    break;

  case 367:
#line 1674 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(3) - (4)].intval)); AddUniqueComplete(); ;}
    break;

  case 368:
#line 1676 "parser/evoparser.y"
    { emit("UNIQUE %d", (yyvsp[(5) - (6)].intval)); strncpy(g_constr.pendingConstraintName, (yyvsp[(2) - (6)].strval), 127); AddUniqueComplete(); free((yyvsp[(2) - (6)].strval)); ;}
    break;

  case 369:
#line 1679 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(1) - (1)].strval)); AddPrimaryKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 370:
#line 1680 "parser/evoparser.y"
    { emit("PRIKEY_COL %s", (yyvsp[(3) - (3)].strval)); AddPrimaryKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 371:
#line 1683 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 372:
#line 1684 "parser/evoparser.y"
    { AddForeignKeyColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 373:
#line 1687 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 374:
#line 1688 "parser/evoparser.y"
    { AddForeignKeyRefColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 376:
#line 1692 "parser/evoparser.y"
    { SetForeignKeyOnDelete(1); ;}
    break;

  case 377:
#line 1693 "parser/evoparser.y"
    { SetForeignKeyOnDelete(2); ;}
    break;

  case 378:
#line 1694 "parser/evoparser.y"
    { SetForeignKeyOnDelete(3); ;}
    break;

  case 379:
#line 1695 "parser/evoparser.y"
    { SetForeignKeyOnDelete(4); ;}
    break;

  case 380:
#line 1696 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(1); ;}
    break;

  case 381:
#line 1697 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(2); ;}
    break;

  case 382:
#line 1698 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(3); ;}
    break;

  case 383:
#line 1699 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(4); ;}
    break;

  case 384:
#line 1700 "parser/evoparser.y"
    { SetForeignKeyOnDelete(5); ;}
    break;

  case 385:
#line 1701 "parser/evoparser.y"
    { SetForeignKeyOnUpdate(5); ;}
    break;

  case 386:
#line 1702 "parser/evoparser.y"
    { SetForeignKeyMatchType(1); ;}
    break;

  case 387:
#line 1703 "parser/evoparser.y"
    { SetForeignKeyMatchType(0); ;}
    break;

  case 388:
#line 1704 "parser/evoparser.y"
    { SetForeignKeyMatchType(2); ;}
    break;

  case 389:
#line 1705 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 390:
#line 1706 "parser/evoparser.y"
    { SetForeignKeyDeferrable(0); ;}
    break;

  case 391:
#line 1707 "parser/evoparser.y"
    { SetForeignKeyDeferrable(2); ;}
    break;

  case 392:
#line 1708 "parser/evoparser.y"
    { SetForeignKeyDeferrable(1); ;}
    break;

  case 393:
#line 1711 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 394:
#line 1712 "parser/evoparser.y"
    { AddUniqueColumn((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 395:
#line 1715 "parser/evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 396:
#line 1717 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        GetColumnNames((yyvsp[(2) - (4)].strval));
        GetColumnSize((yyvsp[(3) - (4)].intval));
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 397:
#line 1725 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 398:
#line 1726 "parser/evoparser.y"
    { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 400:
#line 1728 "parser/evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); SetColumnDefault((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 401:
#line 1729 "parser/evoparser.y"
    { char _buf[32]; snprintf(_buf, sizeof(_buf), "%d", (yyvsp[(3) - (3)].intval)); emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 402:
#line 1730 "parser/evoparser.y"
    { char _buf[64]; snprintf(_buf, sizeof(_buf), "%g", (yyvsp[(3) - (3)].floatval)); emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 403:
#line 1731 "parser/evoparser.y"
    { char _buf[8]; snprintf(_buf, sizeof(_buf), "%s", (yyvsp[(3) - (3)].intval) ? "true" : "false"); emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); SetColumnDefault(_buf); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 404:
#line 1732 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID"); SetColumnDefault("gen_random_uuid()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 405:
#line 1733 "parser/evoparser.y"
    { emit("ATTR DEFAULT GEN_RANDOM_UUID_V7"); SetColumnDefault("gen_random_uuid_v7()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 406:
#line 1734 "parser/evoparser.y"
    { emit("ATTR DEFAULT SNOWFLAKE_ID"); SetColumnDefault("snowflake_id()"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 407:
#line 1735 "parser/evoparser.y"
    { emit("ATTR DEFAULT CURRENT_TIMESTAMP"); SetColumnDefault("CURRENT_TIMESTAMP"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 408:
#line 1736 "parser/evoparser.y"
    {
    char _ser[512]; expr_serialize((yyvsp[(4) - (5)].exprval), _ser, sizeof(_ser));
    char _prefixed[520]; snprintf(_prefixed, sizeof(_prefixed), "EXPR:%s", _ser);
    emit("ATTR DEFAULT EXPR");
    SetColumnDefault(_prefixed);
    (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1;
  ;}
    break;

  case 409:
#line 1743 "parser/evoparser.y"
    { emit("ATTR AUTOINC"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 410:
#line 1744 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 411:
#line 1745 "parser/evoparser.y"
    { emit("ATTR AUTOINC %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 412:
#line 1746 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d %d", (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 413:
#line 1747 "parser/evoparser.y"
    { emit("ATTR IDENTITY %d 1", (yyvsp[(4) - (5)].intval)); SetColumnAutoIncrement((yyvsp[(4) - (5)].intval), 1); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 414:
#line 1748 "parser/evoparser.y"
    { emit("ATTR IDENTITY"); SetColumnAutoIncrement(1, 1); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 415:
#line 1749 "parser/evoparser.y"
    { emit("ATTR UNIQUEKEY"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 416:
#line 1750 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 417:
#line 1751 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 418:
#line 1752 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 419:
#line 1753 "parser/evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 420:
#line 1754 "parser/evoparser.y"
    { emit("ATTR CHECK"); AddCheckConstraint((yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 421:
#line 1755 "parser/evoparser.y"
    { emit("ATTR UNIQUE"); SetColumnUnique(); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 422:
#line 1756 "parser/evoparser.y"
    { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 423:
#line 1757 "parser/evoparser.y"
    { emit("ATTR CHECK"); strncpy(g_constr.checkNames[g_constr.checkCount], (yyvsp[(3) - (7)].strval), 127); AddCheckConstraint((yyvsp[(6) - (7)].exprval)); free((yyvsp[(3) - (7)].strval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 424:
#line 1758 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 425:
#line 1759 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (8)].exprval)); (yyval.intval) = (yyvsp[(1) - (8)].intval) + 1; ;}
    break;

  case 426:
#line 1760 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(6) - (7)].exprval)); (yyval.intval) = (yyvsp[(1) - (7)].intval) + 1; ;}
    break;

  case 427:
#line 1761 "parser/evoparser.y"
    { emit("ATTR GENERATED STORED"); SetColumnGenerated(1, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 428:
#line 1762 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (6)].exprval)); (yyval.intval) = (yyvsp[(1) - (6)].intval) + 1; ;}
    break;

  case 429:
#line 1763 "parser/evoparser.y"
    { emit("ATTR GENERATED VIRTUAL"); SetColumnGenerated(2, (yyvsp[(4) - (5)].exprval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 430:
#line 1766 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 431:
#line 1767 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 432:
#line 1768 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 433:
#line 1771 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 434:
#line 1772 "parser/evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 435:
#line 1775 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 436:
#line 1776 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 437:
#line 1777 "parser/evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 439:
#line 1781 "parser/evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 440:
#line 1782 "parser/evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 441:
#line 1786 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 442:
#line 1787 "parser/evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 443:
#line 1788 "parser/evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 444:
#line 1789 "parser/evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 445:
#line 1790 "parser/evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 446:
#line 1791 "parser/evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 447:
#line 1792 "parser/evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 448:
#line 1793 "parser/evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 449:
#line 1794 "parser/evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 450:
#line 1795 "parser/evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 451:
#line 1796 "parser/evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 452:
#line 1797 "parser/evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 453:
#line 1798 "parser/evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 454:
#line 1799 "parser/evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 455:
#line 1800 "parser/evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 456:
#line 1801 "parser/evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 457:
#line 1802 "parser/evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 458:
#line 1803 "parser/evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 459:
#line 1804 "parser/evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 460:
#line 1805 "parser/evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 461:
#line 1806 "parser/evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 462:
#line 1807 "parser/evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 463:
#line 1808 "parser/evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 464:
#line 1809 "parser/evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 465:
#line 1810 "parser/evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 466:
#line 1811 "parser/evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 467:
#line 1812 "parser/evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 468:
#line 1813 "parser/evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 469:
#line 1814 "parser/evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 470:
#line 1815 "parser/evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 471:
#line 1816 "parser/evoparser.y"
    { (yyval.intval) = 220001; ;}
    break;

  case 472:
#line 1817 "parser/evoparser.y"
    { (yyval.intval) = 180036; ;}
    break;

  case 473:
#line 1820 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 474:
#line 1821 "parser/evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 475:
#line 1825 "parser/evoparser.y"
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

  case 476:
#line 1837 "parser/evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 477:
#line 1838 "parser/evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 478:
#line 1839 "parser/evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 479:
#line 1843 "parser/evoparser.y"
    { emit("STMT"); ;}
    break;

  case 480:
#line 1846 "parser/evoparser.y"
    { emit("SETSCHEMA %s", (yyvsp[(3) - (3)].strval)); SetSchemaProcess((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 481:
#line 1847 "parser/evoparser.y"
    { emit("SETSCHEMA default"); SetSchemaProcess("default"); ;}
    break;

  case 485:
#line 1851 "parser/evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror(scanner, "bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 486:
#line 1852 "parser/evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 6127 "parser/evoparser.tab.c"
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


#line 1855 "parser/evoparser.y"

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
