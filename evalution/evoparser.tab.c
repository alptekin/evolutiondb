
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 4 "evoparser.y"

	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdio.h>
	#include "database.h"
	
	void yyerror(char *s, ...);
	void emit(char *s, ...);
        int i;


/* Line 189 of yacc.c  */
#line 86 "evoparser.tab.c"

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
     ANY = 281,
     AUTO_INCREMENT = 282,
     ASC = 283,
     AND = 284,
     AS = 285,
     BLOB = 286,
     BY = 287,
     BINARY = 288,
     BOTH = 289,
     BIGINT = 290,
     BIT = 291,
     CURRENT_TIMESTAMP = 292,
     CREATE = 293,
     CROSS = 294,
     CASE = 295,
     COMMENT = 296,
     CURRENT_DATE = 297,
     CURRENT_TIME = 298,
     CHAR = 299,
     COLLATE = 300,
     DATABASE = 301,
     DELAYED = 302,
     DAY_HOUR = 303,
     DAY_MICROSECOND = 304,
     DISTINCT = 305,
     DELETE = 306,
     DAY_MINUTE = 307,
     DISTINCTROW = 308,
     DAY_SECOND = 309,
     DESC = 310,
     DEFAULT = 311,
     DOUBLE = 312,
     DATETIME = 313,
     DECIMAL = 314,
     DATE = 315,
     ESCAPED = 316,
     ENUM = 317,
     END = 318,
     ELSE = 319,
     FLOAT = 320,
     FORCE = 321,
     FROM = 322,
     FULLTEXT = 323,
     FOR = 324,
     GROUP = 325,
     HOUR_MINUTE = 326,
     HOUR_MICROSECOND = 327,
     HIGH_PRIORITY = 328,
     HOUR_SECOND = 329,
     HAVING = 330,
     INTEGER = 331,
     INNER = 332,
     IGNORE = 333,
     INDEX = 334,
     IF = 335,
     INSERT = 336,
     INTO = 337,
     INT = 338,
     INTERVAL = 339,
     JOIN = 340,
     KEY = 341,
     LONGTEXT = 342,
     LOW_PRIORITY = 343,
     LEFT = 344,
     LEADING = 345,
     LIMIT = 346,
     LONGBLOB = 347,
     MEDIUMTEXT = 348,
     MEDIUMBLOB = 349,
     MEDIUMINT = 350,
     NATURAL = 351,
     NULLX = 352,
     OUTER = 353,
     ON = 354,
     ORDER = 355,
     ONDUPLICATE = 356,
     PRIMARY = 357,
     QUICK = 358,
     REAL = 359,
     ROLLUP = 360,
     RIGHT = 361,
     REPLACE = 362,
     SQL_SMALL_RESULT = 363,
     SCHEMA = 364,
     SOME = 365,
     SQL_CALC_FOUND_ROWS = 366,
     SQL_BIG_RESULT = 367,
     STRAIGHT_JOIN = 368,
     SMALLINT = 369,
     SET = 370,
     SELECT = 371,
     TINYTEXT = 372,
     TINYINT = 373,
     TEMPORARY = 374,
     TEXT = 375,
     TIMESTAMP = 376,
     TABLE = 377,
     THEN = 378,
     TRAILING = 379,
     TINYBLOB = 380,
     TIME = 381,
     UPDATE = 382,
     UNSIGNED = 383,
     UNIQUE = 384,
     USING = 385,
     USE = 386,
     VARCHAR = 387,
     VALUES = 388,
     VARBINARY = 389,
     WHERE = 390,
     WHEN = 391,
     WITH = 392,
     YEAR = 393,
     YEAR_MONTH = 394,
     ZEROFILL = 395,
     EXISTS = 396,
     FSUBSTRING = 397,
     FTRIM = 398,
     FDATE_ADD = 399,
     FDATE_SUB = 400,
     FCOUNT = 401
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 15 "evoparser.y"

	int intval;
	double floatval;
	char *strval;
	int subtok;



/* Line 214 of yacc.c  */
#line 277 "evoparser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 289 "evoparser.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  161
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  298
/* YYNRULES -- Number of states.  */
#define YYNSTATES  615

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   401

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     158,   159,    26,    24,   160,    25,   157,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   156,
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
     154,   155
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    16,    18,    20,    22,
      24,    26,    30,    34,    38,    42,    46,    50,    53,    57,
      61,    65,    69,    73,    77,    81,    84,    87,    91,    97,
     104,   111,   118,   122,   127,   131,   136,   140,   146,   148,
     152,   153,   155,   161,   168,   174,   181,   186,   191,   196,
     201,   206,   213,   222,   227,   235,   237,   239,   241,   248,
     255,   259,   263,   267,   271,   275,   279,   283,   287,   291,
     296,   303,   307,   313,   318,   324,   328,   333,   337,   342,
     344,   346,   348,   350,   354,   366,   367,   370,   371,   376,
     379,   384,   385,   387,   389,   390,   393,   394,   397,   398,
     402,   403,   406,   411,   412,   415,   417,   421,   422,   425,
     428,   431,   434,   437,   440,   443,   446,   448,   452,   454,
     457,   460,   462,   463,   465,   469,   471,   473,   477,   483,
     487,   491,   493,   494,   500,   504,   510,   517,   523,   524,
     526,   528,   529,   531,   533,   535,   538,   541,   542,   543,
     545,   548,   553,   560,   567,   574,   575,   578,   579,   581,
     585,   589,   591,   599,   602,   605,   608,   609,   616,   619,
     624,   625,   628,   636,   638,   647,   648,   653,   654,   657,
     660,   663,   666,   668,   669,   670,   674,   678,   684,   686,
     688,   692,   696,   704,   708,   712,   718,   724,   726,   735,
     743,   751,   753,   762,   763,   766,   769,   773,   779,   785,
     793,   795,   800,   805,   806,   809,   811,   820,   831,   841,
     848,   860,   869,   870,   872,   874,   878,   884,   889,   894,
     900,   906,   907,   912,   913,   917,   920,   924,   928,   932,
     936,   939,   945,   949,   953,   956,   960,   961,   965,   971,
     972,   974,   975,   978,   981,   982,   987,   991,   994,   998,
    1002,  1006,  1010,  1014,  1018,  1022,  1026,  1030,  1034,  1036,
    1038,  1040,  1042,  1044,  1048,  1054,  1057,  1062,  1064,  1066,
    1068,  1070,  1074,  1078,  1082,  1086,  1092,  1098,  1100,  1104,
    1108,  1109,  1111,  1113,  1115,  1118,  1120,  1124,  1128
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     162,     0,    -1,   169,   156,    -1,   169,   156,   162,    -1,
       3,    -1,     3,   157,     3,    -1,     8,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,   163,    24,   163,    -1,
     163,    25,   163,    -1,   163,    26,   163,    -1,   163,    27,
     163,    -1,   163,    28,   163,    -1,   163,    29,   163,    -1,
      25,   163,    -1,   163,    12,   163,    -1,   163,    10,   163,
      -1,   163,    11,   163,    -1,   163,    21,   163,    -1,   163,
      22,   163,    -1,   163,    30,   163,    -1,   163,    23,   163,
      -1,    18,   163,    -1,    17,   163,    -1,   163,    20,   163,
      -1,   163,    20,   158,   170,   159,    -1,   163,    20,    35,
     158,   170,   159,    -1,   163,    20,   119,   158,   170,   159,
      -1,   163,    20,    34,   158,   170,   159,    -1,   163,    15,
     106,    -1,   163,    15,    18,   106,    -1,   163,    15,     6,
      -1,   163,    15,    18,     6,    -1,     8,     9,   163,    -1,
     163,    19,   163,    38,   163,    -1,   163,    -1,   163,   160,
     164,    -1,    -1,   164,    -1,   163,    16,   158,   164,   159,
      -1,   163,    18,    16,   158,   164,   159,    -1,   163,    16,
     158,   170,   159,    -1,   163,    18,    16,   158,   170,   159,
      -1,   150,   158,   170,   159,    -1,     3,   158,   165,   159,
      -1,   155,   158,    26,   159,    -1,   155,   158,   163,   159,
      -1,   151,   158,   164,   159,    -1,   151,   158,   163,    76,
     163,   159,    -1,   151,   158,   163,    76,   163,    78,   163,
     159,    -1,   152,   158,   164,   159,    -1,   152,   158,   166,
     163,    76,   164,   159,    -1,    99,    -1,   133,    -1,    43,
      -1,   153,   158,   163,   160,   167,   159,    -1,   154,   158,
     163,   160,   167,   159,    -1,    93,   163,    57,    -1,    93,
     163,    58,    -1,    93,   163,    61,    -1,    93,   163,    63,
      -1,    93,   163,   148,    -1,    93,   163,   147,    -1,    93,
     163,    81,    -1,    93,   163,    80,    -1,    93,   163,    83,
      -1,    49,   163,   168,    72,    -1,    49,   163,   168,    73,
     163,    72,    -1,    49,   168,    72,    -1,    49,   168,    73,
     163,    72,    -1,   145,   163,   132,   163,    -1,   168,   145,
     163,   132,   163,    -1,   163,    14,   163,    -1,   163,    18,
      14,   163,    -1,   163,    13,   163,    -1,   163,    18,    13,
     163,    -1,    46,    -1,    51,    -1,    52,    -1,   170,    -1,
     125,   181,   182,    -1,   125,   181,   182,    76,   185,   171,
     172,   176,   177,   178,   179,    -1,    -1,   144,   163,    -1,
      -1,    79,    41,   173,   175,    -1,   163,   174,    -1,   173,
     160,   163,   174,    -1,    -1,    37,    -1,    64,    -1,    -1,
     146,   114,    -1,    -1,    84,   163,    -1,    -1,   109,    41,
     173,    -1,    -1,   100,   163,    -1,   100,   163,   160,   163,
      -1,    -1,    91,   180,    -1,     3,    -1,   180,   160,     3,
      -1,    -1,   181,    34,    -1,   181,    59,    -1,   181,    62,
      -1,   181,    82,    -1,   181,   122,    -1,   181,   117,    -1,
     181,   121,    -1,   181,   120,    -1,   183,    -1,   182,   160,
     183,    -1,    26,    -1,   163,   184,    -1,    39,     3,    -1,
       3,    -1,    -1,   186,    -1,   185,   160,   186,    -1,   187,
      -1,   189,    -1,     3,   184,   196,    -1,     3,   157,     3,
     184,   196,    -1,   199,   188,     3,    -1,   158,   185,   159,
      -1,    39,    -1,    -1,   186,   190,    94,   187,   194,    -1,
     186,   122,   187,    -1,   186,   122,   187,   108,   163,    -1,
     186,   192,   191,    94,   187,   195,    -1,   186,   105,   193,
      94,   187,    -1,    -1,    86,    -1,    48,    -1,    -1,   107,
      -1,    98,    -1,   115,    -1,    98,   191,    -1,   115,   191,
      -1,    -1,    -1,   195,    -1,   108,   163,    -1,   139,   158,
     180,   159,    -1,   140,    95,   197,   158,   198,   159,    -1,
      87,    95,   197,   158,   198,   159,    -1,    75,    95,   197,
     158,   198,   159,    -1,    -1,    78,    94,    -1,    -1,     3,
      -1,   198,   160,     3,    -1,   158,   170,   159,    -1,   200,
      -1,    60,   201,    76,     3,   171,   177,   178,    -1,   201,
      97,    -1,   201,   112,    -1,   201,    87,    -1,    -1,    60,
     201,   202,    76,   185,   171,    -1,     3,   203,    -1,   202,
     160,     3,   203,    -1,    -1,   157,    26,    -1,    60,   201,
      76,   202,   139,   185,   171,    -1,   204,    -1,    90,   206,
     207,     3,   208,   142,   209,   205,    -1,    -1,   110,    95,
     136,   211,    -1,    -1,   206,    97,    -1,   206,    56,    -1,
     206,    82,    -1,   206,    87,    -1,    91,    -1,    -1,    -1,
     158,   180,   159,    -1,   158,   210,   159,    -1,   209,   160,
     158,   210,   159,    -1,   163,    -1,    65,    -1,   210,   160,
     163,    -1,   210,   160,    65,    -1,    90,   206,   207,     3,
     124,   211,   205,    -1,     3,    20,   163,    -1,     3,    20,
      65,    -1,   211,   160,     3,    20,   163,    -1,   211,   160,
       3,    20,    65,    -1,   212,    -1,   116,   206,   207,     3,
     208,   142,   209,   205,    -1,   116,   206,   207,     3,   124,
     211,   205,    -1,   116,   206,   207,     3,   208,   170,   205,
      -1,   213,    -1,   136,   214,   185,   124,   215,   171,   177,
     178,    -1,    -1,   206,    97,    -1,   206,    87,    -1,     3,
      20,   163,    -1,     3,   157,     3,    20,   163,    -1,   215,
     160,     3,    20,   163,    -1,   215,   160,     3,   157,     3,
      20,   163,    -1,   216,    -1,    47,    55,   217,     3,    -1,
      47,   118,   217,     3,    -1,    -1,    89,   150,    -1,   218,
      -1,    47,   219,   131,   217,     3,   158,   220,   159,    -1,
      47,   219,   131,   217,     3,   157,     3,   158,   220,   159,
      -1,    47,   219,   131,   217,     3,   158,   220,   159,   230,
      -1,    47,   219,   131,   217,     3,   230,    -1,    47,   219,
     131,   217,     3,   157,     3,   158,   220,   159,   230,    -1,
      47,   219,   131,   217,     3,   157,     3,   230,    -1,    -1,
     128,    -1,   221,    -1,   220,   160,   221,    -1,   111,    95,
     158,   180,   159,    -1,    95,   158,   180,   159,    -1,    88,
     158,   180,   159,    -1,    77,    88,   158,   180,   159,    -1,
      77,    95,   158,   180,   159,    -1,    -1,   222,     3,   228,
     223,    -1,    -1,   223,    18,   106,    -1,   223,   106,    -1,
     223,    65,     4,    -1,   223,    65,     5,    -1,   223,    65,
       7,    -1,   223,    65,     6,    -1,   223,    36,    -1,   223,
     138,   158,   180,   159,    -1,   223,   138,    95,    -1,   223,
     111,    95,    -1,   223,    95,    -1,   223,    50,     4,    -1,
      -1,   158,     5,   159,    -1,   158,     5,   160,     5,   159,
      -1,    -1,    42,    -1,    -1,   226,   137,    -1,   226,   149,
      -1,    -1,   227,    53,   124,     4,    -1,   227,    54,     4,
      -1,    45,   224,    -1,   127,   224,   226,    -1,   123,   224,
     226,    -1,   104,   224,   226,    -1,    92,   224,   226,    -1,
      85,   224,   226,    -1,    44,   224,   226,    -1,   113,   224,
     226,    -1,    66,   224,   226,    -1,    74,   224,   226,    -1,
      68,   224,   226,    -1,    69,    -1,   135,    -1,   130,    -1,
      67,    -1,   147,    -1,    53,   224,   227,    -1,   141,   158,
       5,   159,   227,    -1,    42,   224,    -1,   143,   158,     5,
     159,    -1,   134,    -1,    40,    -1,   103,    -1,   101,    -1,
     126,   225,   227,    -1,   129,   225,   227,    -1,   102,   225,
     227,    -1,    96,   225,   227,    -1,    71,   158,   229,   159,
     227,    -1,   124,   158,   229,   159,   227,    -1,     4,    -1,
     229,   160,     4,    -1,   231,   188,   170,    -1,    -1,    87,
      -1,   116,    -1,   232,    -1,   124,   233,    -1,   234,    -1,
     233,   160,   234,    -1,     8,    20,   163,    -1,     8,     9,
     163,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   236,   236,   237,   242,   248,   249,   250,   256,   257,
     258,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   282,   283,
     284,   285,   288,   289,   290,   291,   292,   295,   298,   299,
     302,   303,   306,   307,   308,   309,   310,   314,   318,   319,
     320,   321,   322,   323,   324,   327,   328,   329,   332,   333,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   347,
     348,   349,   350,   353,   354,   357,   358,   361,   362,   365,
     366,   367,   371,   381,   382,   395,   396,   397,   398,   401,
     402,   405,   406,   407,   410,   411,   414,   415,   418,   419,
     422,   422,   423,   426,   427,   430,   431,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   445,   446,   447,   454,
     455,   456,   457,   460,   461,   464,   465,   469,   475,   476,
     477,   480,   481,   485,   487,   489,   491,   493,   497,   498,
     499,   502,   503,   506,   507,   510,   511,   512,   515,   516,
     519,   520,   524,   526,   528,   530,   533,   534,   537,   538,
     541,   545,   553,   561,   562,   563,   564,   568,   571,   572,
     575,   575,   577,   580,   587,   595,   596,   599,   600,   601,
     602,   603,   606,   606,   609,   610,   613,   614,   616,   617,
     618,   619,   622,   626,   627,   628,   629,   635,   638,   644,
     649,   655,   661,   668,   669,   670,   674,   685,   696,   707,
     721,   725,   726,   729,   730,   734,   741,   750,   754,   759,
     763,   768,   772,   773,   776,   777,   780,   781,   782,   783,
     784,   787,   787,   796,   797,   798,   799,   800,   801,   802,
     803,   804,   805,   806,   807,   808,   811,   812,   813,   816,
     817,   820,   821,   822,   825,   826,   827,   831,   832,   833,
     834,   835,   836,   837,   838,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
     854,   855,   856,   857,   858,   859,   860,   863,   864,   867,
     871,   872,   873,   877,   880,   881,   881,   883,   884
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
  "ADD", "ALL", "ANY", "AUTO_INCREMENT", "ASC", "AND", "AS", "BLOB", "BY",
  "BINARY", "BOTH", "BIGINT", "BIT", "CURRENT_TIMESTAMP", "CREATE",
  "CROSS", "CASE", "COMMENT", "CURRENT_DATE", "CURRENT_TIME", "CHAR",
  "COLLATE", "DATABASE", "DELAYED", "DAY_HOUR", "DAY_MICROSECOND",
  "DISTINCT", "DELETE", "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND", "DESC",
  "DEFAULT", "DOUBLE", "DATETIME", "DECIMAL", "DATE", "ESCAPED", "ENUM",
  "END", "ELSE", "FLOAT", "FORCE", "FROM", "FULLTEXT", "FOR", "GROUP",
  "HOUR_MINUTE", "HOUR_MICROSECOND", "HIGH_PRIORITY", "HOUR_SECOND",
  "HAVING", "INTEGER", "INNER", "IGNORE", "INDEX", "IF", "INSERT", "INTO",
  "INT", "INTERVAL", "JOIN", "KEY", "LONGTEXT", "LOW_PRIORITY", "LEFT",
  "LEADING", "LIMIT", "LONGBLOB", "MEDIUMTEXT", "MEDIUMBLOB", "MEDIUMINT",
  "NATURAL", "NULLX", "OUTER", "ON", "ORDER", "ONDUPLICATE", "PRIMARY",
  "QUICK", "REAL", "ROLLUP", "RIGHT", "REPLACE", "SQL_SMALL_RESULT",
  "SCHEMA", "SOME", "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT",
  "STRAIGHT_JOIN", "SMALLINT", "SET", "SELECT", "TINYTEXT", "TINYINT",
  "TEMPORARY", "TEXT", "TIMESTAMP", "TABLE", "THEN", "TRAILING",
  "TINYBLOB", "TIME", "UPDATE", "UNSIGNED", "UNIQUE", "USING", "USE",
  "VARCHAR", "VALUES", "VARBINARY", "WHERE", "WHEN", "WITH", "YEAR",
  "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD",
  "FDATE_SUB", "FCOUNT", "';'", "'.'", "'('", "')'", "','", "$accept",
  "stmt_list", "expr", "val_list", "opt_val_list", "trim_ltb",
  "interval_exp", "case_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_orderby", "opt_limit", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "opt_as_alias",
  "table_references", "table_reference", "table_factor", "opt_as",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "opt_temporary", "create_col_list", "create_definition", "$@1",
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
     396,   397,   398,   399,   400,   401,    59,    46,    40,    41,
      44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   161,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   164,   164,
     165,   165,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   166,   166,   166,   163,   163,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   163,
     163,   163,   163,   168,   168,   163,   163,   163,   163,   163,
     163,   163,   169,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   174,   175,   175,   176,   176,   177,   177,
     178,   178,   178,   179,   179,   180,   180,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   182,   182,   182,   183,
     184,   184,   184,   185,   185,   186,   186,   187,   187,   187,
     187,   188,   188,   189,   189,   189,   189,   189,   190,   190,
     190,   191,   191,   192,   192,   193,   193,   193,   194,   194,
     195,   195,   196,   196,   196,   196,   197,   197,   198,   198,
     199,   169,   200,   201,   201,   201,   201,   200,   202,   202,
     203,   203,   200,   169,   204,   205,   205,   206,   206,   206,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     210,   210,   204,   211,   211,   211,   211,   169,   212,   212,
     212,   169,   213,   214,   214,   214,   215,   215,   215,   215,
     169,   216,   216,   217,   217,   169,   218,   218,   218,   218,
     218,   218,   219,   219,   220,   220,   221,   221,   221,   221,
     221,   222,   221,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   224,   224,   224,   225,
     225,   226,   226,   226,   227,   227,   227,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   229,   229,   230,
     231,   231,   231,   169,   232,   233,   233,   234,   234
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     5,     6,
       6,     6,     3,     4,     3,     4,     3,     5,     1,     3,
       0,     1,     5,     6,     5,     6,     4,     4,     4,     4,
       4,     6,     8,     4,     7,     1,     1,     1,     6,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     3,     5,     4,     5,     3,     4,     3,     4,     1,
       1,     1,     1,     3,    11,     0,     2,     0,     4,     2,
       4,     0,     1,     1,     0,     2,     0,     2,     0,     3,
       0,     2,     4,     0,     2,     1,     3,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     1,     2,
       2,     1,     0,     1,     3,     1,     1,     3,     5,     3,
       3,     1,     0,     5,     3,     5,     6,     5,     0,     1,
       1,     0,     1,     1,     1,     2,     2,     0,     0,     1,
       2,     4,     6,     6,     6,     0,     2,     0,     1,     3,
       3,     1,     7,     2,     2,     2,     0,     6,     2,     4,
       0,     2,     7,     1,     8,     0,     4,     0,     2,     2,
       2,     2,     1,     0,     0,     3,     3,     5,     1,     1,
       3,     3,     7,     3,     3,     5,     5,     1,     8,     7,
       7,     1,     8,     0,     2,     2,     3,     5,     5,     7,
       1,     4,     4,     0,     2,     1,     8,    10,     9,     6,
      11,     8,     0,     1,     1,     3,     5,     4,     4,     5,
       5,     0,     4,     0,     3,     2,     3,     3,     3,     3,
       2,     5,     3,     3,     2,     3,     0,     3,     5,     0,
       1,     0,     2,     2,     0,     4,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     3,     5,     2,     4,     1,     1,     1,
       1,     3,     3,     3,     3,     5,     5,     1,     3,     3,
       0,     1,     1,     1,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   222,   166,   177,   177,     0,   107,   177,     0,     0,
      82,   161,   173,   197,   201,   210,   215,   293,   213,   213,
     223,     0,     0,   183,   183,     0,   294,   295,     0,     0,
       0,     1,     2,     0,     0,     0,   213,   170,     0,   165,
     163,   164,     0,   179,   180,   181,   182,   178,     0,     0,
       0,     0,     0,     4,     7,     8,    10,     9,     6,     0,
       0,     0,   118,   108,    79,     0,    80,    81,   109,   110,
     111,   113,   115,   114,   112,     0,     0,     0,     0,     0,
       0,   122,    83,   116,   181,   178,   122,     0,     0,   123,
     125,   126,   132,     3,   214,   211,   212,     0,     0,   168,
      85,     0,     0,     0,   184,   184,   298,   297,   296,     0,
      40,     0,    26,    25,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
     155,     0,     0,     0,     0,   140,   139,   143,   147,   144,
       0,     0,   141,   131,     0,   290,   171,     0,    98,     0,
      85,   170,     0,     0,     0,     0,     0,     5,    38,    41,
       0,    36,     0,     0,    71,     0,     0,     0,    38,     0,
      57,    55,    56,     0,     0,     0,     0,     0,     0,    19,
      20,    18,    77,    75,    34,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    21,    22,    24,
      11,    12,    13,    14,    15,    16,    23,   120,    85,   117,
     122,     0,     0,     0,   127,   160,   130,     0,    85,   124,
     141,   141,     0,   134,     0,   142,     0,   129,   291,   292,
       0,   231,   219,   132,    86,     0,   100,    85,   167,   169,
       0,   175,   105,     0,     0,   175,     0,   175,     0,    47,
       0,    69,     0,     0,     0,    46,     0,    50,    53,     0,
       0,     0,    48,    49,    35,    33,     0,     0,    78,    76,
       0,     0,     0,     0,     0,     0,    87,   155,   157,   157,
     157,     0,     0,     0,    98,   145,   146,     0,     0,   148,
       0,   290,     0,     0,     0,     0,     0,   224,     0,     0,
       0,     0,   162,   172,     0,     0,     0,   192,   185,     0,
       0,   175,   199,   175,   200,    39,    73,     0,    72,     0,
       0,     0,     0,     0,     0,    42,    44,     0,     0,    37,
       0,     0,     0,    28,     0,    96,   128,     0,     0,     0,
       0,   206,     0,     0,   100,   137,   135,     0,     0,   133,
     149,     0,   231,   221,     0,     0,     0,     0,     0,   290,
     231,     0,   289,    91,    99,   101,   194,   193,     0,     0,
     106,   189,   188,     0,     0,   174,   198,    70,    74,     0,
      51,     0,     0,    58,    59,    43,    45,    31,    29,    30,
       0,     0,    98,   156,     0,     0,     0,     0,     0,     0,
     202,   150,     0,   136,     0,     0,     0,     0,     0,     0,
     218,   225,   278,   246,   246,   246,   246,   246,   271,   246,
     268,     0,   246,   246,   246,   249,   280,   249,   279,   246,
     246,   246,     0,   249,   246,   249,   270,   277,   269,     0,
       0,   272,   233,    92,    93,    89,     0,     0,     0,     0,
     186,     0,     0,     0,    54,    60,    61,    62,    63,    67,
      66,    68,    65,    64,    94,    97,   100,   158,     0,     0,
       0,   207,   208,     0,     0,   290,     0,     0,   228,   227,
       0,     0,   275,   251,   257,   254,   251,   251,     0,   251,
     251,   251,   250,   254,   254,   251,   251,   251,     0,   254,
     251,   254,     0,     0,   232,    91,   102,   176,   196,   195,
     191,   190,     0,    52,     0,    88,   103,   154,     0,   153,
     152,     0,   151,   220,   229,   230,   226,     0,   263,   273,
     265,   267,   287,     0,   266,   262,   261,   284,   283,   260,
     264,   259,     0,   281,   258,   282,     0,     0,     0,   240,
       0,     0,   244,   235,     0,     0,    90,   187,    95,     0,
      84,   159,   209,   247,     0,   252,   253,     0,     0,   254,
       0,   254,   254,   276,   234,   245,   236,   237,   239,   238,
     243,   242,     0,   104,     0,     0,   256,   285,   288,   286,
     274,     0,   248,   255,   241
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,   178,   179,   180,   194,   343,   117,     9,    10,
     168,   355,   384,   465,   535,   412,   256,   322,   580,   263,
      28,    82,    83,   146,    88,    89,    90,   164,    91,   161,
     246,   162,   242,   369,   370,   234,   358,   488,    92,    11,
      22,    42,    99,    12,   327,    23,    48,   174,   331,   393,
     261,    13,    14,    30,   238,    15,    34,    16,    21,   316,
     317,   318,   524,   502,   513,   548,   549,   462,   553,   252,
     253,    17,    26,    27
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -373
static const yytype_int16 yypact[] =
{
     429,   134,  -373,  -373,  -373,    73,  -373,     4,   160,   -68,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,     1,     1,
    -373,    47,   100,   -11,   -11,    76,    55,  -373,   215,   168,
       6,  -373,   429,    46,   224,   228,     1,    77,   235,  -373,
    -373,  -373,   -38,  -373,  -373,  -373,  -373,  -373,   253,   266,
     606,   606,    73,  -114,  -373,  -373,  -373,  -373,   251,   606,
     606,   606,  -373,  -373,  -373,   355,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,   114,   125,   133,   137,   147,
     182,  1265,   -36,  -373,     7,     9,    17,     3,   -99,   153,
    -373,  -373,   271,  -373,  -373,  -373,  -373,   319,   312,  -373,
     164,  -113,     6,   341,  -100,   -85,  1316,  1316,  -373,   352,
     606,   606,   551,   551,  -373,   606,   985,   156,   263,   606,
     282,   606,   606,   405,  -373,   606,   606,   606,   606,   606,
      12,   199,   371,   606,   165,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   361,  -373,     6,   606,   397,
     -13,   244,    43,   402,     6,  -373,  -373,  -373,   -47,  -373,
       6,   320,   321,  -373,   437,    88,  -373,   606,   333,     6,
     -81,    77,   452,   455,   339,   452,   -73,  -373,   679,  -373,
     327,  1316,  1006,   181,  -373,   606,   606,   328,   122,   336,
    -373,  -373,  -373,   337,   606,   700,   777,   338,   843,   964,
     725,   749,  1334,  1334,  -373,    13,  -373,   442,   606,   606,
     334,  1295,   340,   343,   344,   263,  1076,  1215,   636,   522,
     324,   324,   469,   469,   469,   469,  -373,  -373,   -81,  -373,
      26,   408,   409,   417,  -373,  -373,  -373,    -4,    35,   153,
     321,   321,   421,   418,     6,  -373,   424,  -373,  -373,  -373,
     524,   -29,  -373,   271,  1316,   487,   431,   -81,  -373,  -373,
     509,   -83,  -373,    66,   374,   -83,   374,   423,   606,  -373,
     606,  -373,   606,  1181,  1030,  -373,   606,  -373,  -373,  1160,
     443,   443,  -373,  -373,  -373,  -373,   378,   379,  1334,  1334,
     442,   606,   263,   263,   263,   380,   461,   -13,   463,   463,
     463,   606,   540,   541,   333,  -373,  -373,     6,   606,   -72,
       6,   -41,   -46,   403,   404,   488,   170,  -373,   561,   263,
     606,   606,  -373,  -373,   465,   495,   588,  -373,  -373,   597,
     517,   -82,  -373,   -82,  -373,  -373,  1316,  1202,  -373,   606,
     822,   606,   606,   444,   445,  -373,  -373,   446,   448,  1056,
     449,   462,   466,  -373,   560,   518,  -373,   528,   468,   470,
     471,  1316,   620,    -3,   431,  -373,  1316,   606,   483,  -373,
    -373,   -72,   -29,  -373,   484,   485,   455,   455,   486,   -52,
     -29,  1022,  -373,  1236,   490,   798,  -373,  1316,   511,   625,
    -373,  -373,  1316,   183,   493,  -373,  -373,  -373,  1316,   606,
    -373,   494,   891,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
     606,   606,   333,  -373,   651,   651,   651,   606,   606,   670,
    -373,  1316,   455,  -373,   219,   455,   455,   232,   234,   455,
    -373,  -373,  -373,   516,   516,   516,   516,   516,  -373,   516,
    -373,   520,   516,   516,   516,   633,  -373,   633,  -373,   516,
     516,   516,   521,   633,   516,   633,  -373,  -373,  -373,   523,
     526,  -373,  -373,  -373,  -373,  -373,   606,   606,   452,   581,
    -373,   631,   517,   864,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,    97,  1316,   431,  -373,   236,   239,
     257,  1316,  1316,   656,   259,   -27,   261,   265,  -373,  -373,
     267,   680,  -373,  -373,  -373,  -373,  -373,  -373,   682,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,   682,  -373,
    -373,  -373,   683,   712,   291,  1236,  1316,   527,  -373,  1316,
    -373,  1316,   293,  -373,   628,  -373,   675,  -373,   791,  -373,
    -373,   606,  -373,  -373,  -373,  -373,  -373,   302,    56,   410,
      56,    56,  -373,   306,    56,    56,    56,   410,   410,    56,
      56,    56,   315,   410,    56,   410,   621,   671,   709,  -373,
     825,   370,  -373,  -373,   736,   -74,  -373,  -373,  -373,   455,
    -373,  -373,  1316,  -373,   876,  -373,  -373,   771,   892,  -373,
     893,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,   455,   738,   740,   904,  -373,   410,  -373,   410,
     410,   318,  -373,  -373,  -373
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -373,   890,   -28,  -105,  -373,  -373,   646,   813,  -373,   -84,
     -44,  -373,   525,   411,  -373,  -373,  -291,  -356,  -373,  -372,
    -373,  -373,   782,   -75,    90,   780,  -119,   688,  -373,  -373,
      72,  -373,  -373,  -373,   571,   647,   180,    69,  -373,  -373,
    -373,   907,   775,  -373,    14,   152,   923,   845,   685,   481,
    -174,  -373,  -373,  -373,  -373,  -373,    36,  -373,  -373,   583,
     582,  -373,  -373,   489,  -149,   450,  -243,  -373,   451,  -309,
    -373,  -373,  -373,   911
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -218
static const yytype_int16 yytable[] =
{
      81,   265,   373,   151,   427,   428,    86,  -203,   420,    86,
    -205,   150,  -204,   364,   189,   193,   301,   418,   204,   284,
     124,   601,   106,   107,   172,   153,   169,   325,   325,   124,
     205,   112,   113,   114,   187,   248,   367,   116,   102,   175,
     147,   243,   374,   109,   110,    43,   248,   103,   312,   375,
     494,   240,     6,   496,   497,    35,   145,   500,   173,   313,
     248,   154,   231,   167,   249,   145,   314,   368,   241,   266,
     430,    44,    97,   173,   232,   249,    45,   326,   394,   154,
      46,    25,   315,   181,   602,    50,    47,   182,    32,   249,
      33,   188,   267,   195,   196,   198,    51,   199,   200,   201,
     202,   203,   286,    37,  -216,   211,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   372,   206,   285,
      81,   486,   103,   287,   148,   309,   258,   233,     6,  -217,
     536,   295,   125,   126,   127,   128,   129,   130,   131,   254,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   302,   419,   297,    24,   273,   274,    29,
      31,    87,  -203,   335,    87,  -205,   279,  -204,    53,    54,
      55,    56,    57,    58,   149,   248,    38,   152,    36,   167,
     288,   289,    59,    60,   296,   347,   543,    39,   365,    18,
      61,   371,   170,   585,   304,   303,    94,    40,   276,   212,
     213,   155,   236,   154,   249,   586,   348,   603,   350,   351,
     352,    64,    41,   323,    65,    52,    66,    67,    53,    54,
      55,    56,    57,    58,    43,   328,   329,    95,   184,   185,
     611,    96,    59,    60,    98,   382,   401,   228,   100,   156,
      61,    62,   336,   534,   337,   250,   251,  -138,   340,    63,
      44,   157,    19,   271,   272,    84,   104,   466,   158,   257,
     111,    64,    20,   349,    65,    85,    66,    67,   159,   105,
     557,   558,   118,   361,    68,   160,   563,    69,   565,   332,
     366,   334,   268,   119,   214,    53,    54,    55,    56,    57,
      58,   120,   383,   385,   527,   121,   387,    70,   514,    59,
      60,   186,   392,  -170,   519,   122,   521,    61,   167,   568,
     163,   398,   305,   306,   402,    75,    76,    77,    78,    79,
      80,    98,   165,   215,  -170,   190,   186,   569,    64,   379,
     380,    65,    71,    66,    67,    72,    73,    74,   166,   421,
     123,   570,   470,   471,   171,   395,   607,   396,   609,   610,
     140,   141,   142,   143,   144,   177,   571,   207,    53,    54,
      55,    56,    57,    58,   227,    75,    76,    77,    78,    79,
      80,   473,    59,    60,   596,   597,   598,   599,   495,   380,
      61,   191,   383,   485,   208,   209,   572,   210,     6,   491,
     492,   498,   329,   499,   329,   537,   538,   573,   539,   538,
     230,    64,   574,   235,    65,   237,    66,    67,    53,    54,
      55,    56,    57,    58,   244,   192,   540,   538,   542,   329,
     544,   329,    59,    60,   545,   329,   546,   329,   245,   575,
      61,   197,    75,    76,    77,    78,    79,    80,   525,   526,
     247,   529,   255,   531,   392,    53,    54,    55,    56,    57,
      58,    64,   577,   471,    65,   260,    66,    67,   262,    59,
      60,   583,   584,   587,   588,   589,   590,    61,    53,    54,
      55,    56,    57,    58,   591,   590,     1,   614,   329,   359,
     360,   264,    59,    60,   489,   490,   269,   275,    64,     2,
      61,    65,   290,    66,    67,   277,   278,   282,   292,   144,
     115,   293,   294,   298,   299,    75,    76,    77,    78,    79,
      80,    64,   300,   582,    65,   307,    66,    67,   310,     3,
      53,    54,    55,    56,    57,    58,   308,   311,   320,   324,
     386,   321,   330,   325,    59,    60,   342,   345,   346,   353,
     354,   357,    61,   362,   363,     4,   138,   139,   140,   141,
     142,   143,   144,     5,     6,    75,    76,    77,    78,    79,
      80,   376,   377,    64,   381,     7,    65,     6,    66,    67,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   391,   378,    53,    54,    55,    56,    57,    58,
     388,   389,    75,    76,    77,    78,    79,    80,    59,    60,
     390,   410,   411,   403,   404,   405,    61,   406,   407,    53,
      54,    55,    56,    57,    58,    75,    76,    77,    78,    79,
      80,   408,   413,    59,    60,   409,   414,    64,   415,   416,
      65,    61,    66,    67,    53,    54,    55,    56,    57,    58,
     417,   422,   425,   426,   429,   469,   528,   468,    59,    60,
     466,   472,    64,   474,   487,    65,    61,    66,    67,   137,
     138,   139,   140,   141,   142,   143,   144,    75,    76,    77,
      78,    79,    80,   493,   501,   512,   541,    64,   508,   518,
      65,   522,    66,    67,   523,   547,   552,   326,   566,   125,
     126,   127,   128,   129,   130,   131,   530,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     125,   126,   127,   128,   129,   130,   131,   567,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,    75,    76,    77,    78,    79,    80,   127,   128,   129,
     130,   131,   578,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    75,    76,    77,    78,
      79,    80,   128,   129,   130,   131,   579,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     592,    75,    76,    77,    78,    79,    80,   125,   126,   127,
     128,   129,   130,   131,   581,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   125,   126,
     127,   128,   129,   130,   131,   594,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   595,
     593,   600,   125,   126,   127,   128,   129,   130,   131,   268,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   125,   126,   127,   128,   129,   130,   131,
     280,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   125,   126,   127,   128,   129,   130,
     131,   604,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   605,   606,   608,   329,   612,
     399,   125,   126,   127,   128,   129,   130,   131,   613,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    93,   503,   504,   505,   506,   344,   507,   183,
     229,   509,   510,   511,   239,   484,   576,   281,   515,   516,
     517,   319,   423,   520,   356,   101,   259,    49,   475,   476,
     176,   333,   477,   532,   478,   424,   550,   551,   467,   554,
     555,   556,   431,   108,     0,   559,   560,   561,     0,   562,
     564,   479,   480,     0,   481,   126,   127,   128,   129,   130,
     131,   400,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   125,   126,   127,   128,   129,
     130,   131,   283,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   125,   126,   127,   128,
     129,   130,   131,   533,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,   482,   483,
     125,   126,   127,   128,   129,   130,   131,     0,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,   432,     0,   433,     0,   434,   435,     0,     0,
       0,     0,     0,     0,     0,   436,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,   437,   438,
     439,   440,     0,   441,     0,     0,   442,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   443,     0,     0,
       0,     0,     0,     0,   444,     0,     0,     0,   445,     0,
       0,     0,     0,   446,   447,   448,   449,     0,     0,     0,
     115,     0,     0,     0,     0,   450,     0,     0,   270,     0,
       0,     0,     0,     0,     0,   451,   452,     0,   453,   454,
       0,   455,   456,     0,     0,     0,   457,   458,     0,     0,
       0,     0,   339,   459,     0,   460,     0,     0,     0,   461,
     125,   126,   127,   128,   129,   130,   131,     0,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   125,   126,   127,   128,   129,   130,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   125,   126,   127,   128,   129,   130,   131,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     0,     0,     0,   341,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   125,   126,   127,   128,
     129,   130,   131,   338,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,   124,     0,
       0,     0,     0,   463,   397,   125,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,     0,     0,     0,
     464,     0,     0,     0,   145,   125,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   125,   126,   127,   128,
     129,   130,   131,   291,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,  -218,  -218,  -218,
    -218,     0,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144
};

static const yytype_int16 yycheck[] =
{
      28,   175,   311,    87,   376,   377,     3,     3,   364,     3,
       3,    86,     3,   304,   119,   120,    20,    20,     6,     6,
       3,    95,    50,    51,   124,   124,   139,   110,   110,     3,
      18,    59,    60,    61,   118,    87,   108,    65,    76,   124,
      76,   160,    88,   157,   158,    56,    87,   160,    77,    95,
     422,    98,   125,   425,   426,    19,    39,   429,   158,    88,
      87,   160,    75,   144,   116,    39,    95,   139,   115,   142,
     379,    82,    36,   158,    87,   116,    87,   160,   160,   160,
      91,     8,   111,   111,   158,     9,    97,   115,   156,   116,
      89,   119,   176,   121,   122,   123,    20,   125,   126,   127,
     128,   129,   207,     3,   156,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   158,   106,   106,
     148,   412,   160,   207,   160,   244,   170,   140,   125,   156,
     486,   215,    10,    11,    12,    13,    14,    15,    16,   167,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   157,   157,   230,     4,   185,   186,     7,
       0,   158,   158,   268,   158,   158,   194,   158,     3,     4,
       5,     6,     7,     8,   157,    87,    76,    87,   131,   144,
     208,   209,    17,    18,   228,   290,   495,    87,   307,    55,
      25,   310,   102,   137,   238,   160,   150,    97,    76,    34,
      35,    48,   159,   160,   116,   149,   290,   579,   292,   293,
     294,    46,   112,   257,    49,   160,    51,    52,     3,     4,
       5,     6,     7,     8,    56,   159,   160,     3,    72,    73,
     602,     3,    17,    18,   157,   319,   341,   147,     3,    86,
      25,    26,   270,   146,   272,   157,   158,    94,   276,    34,
      82,    98,   118,    72,    73,    87,     3,   160,   105,   169,
       9,    46,   128,   291,    49,    97,    51,    52,   115,     3,
     513,   514,   158,   301,    59,   122,   519,    62,   521,   265,
     308,   267,   160,   158,   119,     3,     4,     5,     6,     7,
       8,   158,   320,   321,   468,   158,   324,    82,   447,    17,
      18,   145,   330,   139,   453,   158,   455,    25,   144,    18,
      39,   339,   240,   241,   342,   150,   151,   152,   153,   154,
     155,   157,     3,   158,   160,    43,   145,    36,    46,   159,
     160,    49,   117,    51,    52,   120,   121,   122,    26,   367,
     158,    50,   159,   160,     3,   331,   589,   333,   591,   592,
      26,    27,    28,    29,    30,     3,    65,   158,     3,     4,
       5,     6,     7,     8,     3,   150,   151,   152,   153,   154,
     155,   399,    17,    18,     4,     5,     6,     7,   159,   160,
      25,    99,   410,   411,    13,    14,    95,    16,   125,   417,
     418,   159,   160,   159,   160,   159,   160,   106,   159,   160,
       3,    46,   111,   159,    49,     3,    51,    52,     3,     4,
       5,     6,     7,     8,    94,   133,   159,   160,   159,   160,
     159,   160,    17,    18,   159,   160,   159,   160,   107,   138,
      25,    26,   150,   151,   152,   153,   154,   155,   466,   467,
       3,   469,   109,   471,   472,     3,     4,     5,     6,     7,
       8,    46,   159,   160,    49,     3,    51,    52,     3,    17,
      18,   159,   160,    53,    54,   159,   160,    25,     3,     4,
       5,     6,     7,     8,   159,   160,    47,   159,   160,   299,
     300,   142,    17,    18,   415,   416,   159,   159,    46,    60,
      25,    49,   158,    51,    52,   159,   159,   159,   158,    30,
     145,   158,   158,    95,    95,   150,   151,   152,   153,   154,
     155,    46,    95,   541,    49,    94,    51,    52,    94,    90,
       3,     4,     5,     6,     7,     8,   108,     3,    41,    20,
      65,   100,   158,   110,    17,    18,    93,   159,   159,   159,
      79,    78,    25,     3,     3,   116,    24,    25,    26,    27,
      28,    29,    30,   124,   125,   150,   151,   152,   153,   154,
     155,   158,   158,    46,     3,   136,    49,   125,    51,    52,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    65,    95,     3,     4,     5,     6,     7,     8,
      95,     3,   150,   151,   152,   153,   154,   155,    17,    18,
       3,    41,    84,   159,   159,   159,    25,   159,   159,     3,
       4,     5,     6,     7,     8,   150,   151,   152,   153,   154,
     155,   159,    94,    17,    18,   159,   158,    46,   158,   158,
      49,    25,    51,    52,     3,     4,     5,     6,     7,     8,
      20,   158,   158,   158,   158,    20,    65,   136,    17,    18,
     160,   158,    46,   159,     3,    49,    25,    51,    52,    23,
      24,    25,    26,    27,    28,    29,    30,   150,   151,   152,
     153,   154,   155,     3,   158,    42,    20,    46,   158,   158,
      49,   158,    51,    52,   158,     5,     4,   160,     5,    10,
      11,    12,    13,    14,    15,    16,    65,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,     5,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   150,   151,   152,   153,   154,   155,    12,    13,    14,
      15,    16,   114,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   150,   151,   152,   153,
     154,   155,    13,    14,    15,    16,    91,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     159,   150,   151,   152,   153,   154,   155,    10,    11,    12,
      13,    14,    15,    16,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   106,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     4,
     159,    95,    10,    11,    12,    13,    14,    15,    16,   160,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
     160,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,     5,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   124,     4,     4,   160,   159,
      78,    10,    11,    12,    13,    14,    15,    16,     4,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    32,   434,   435,   436,   437,   281,   439,   116,
     148,   442,   443,   444,   154,   410,   525,   160,   449,   450,
     451,   253,   371,   454,   297,    38,   171,    24,    57,    58,
     105,   266,    61,   472,    63,   372,   506,   507,   160,   509,
     510,   511,   380,    52,    -1,   515,   516,   517,    -1,   518,
     520,    80,    81,    -1,    83,    11,    12,    13,    14,    15,
      16,   159,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,   159,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,   159,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,   147,   148,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    40,    -1,    42,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    66,    67,
      68,    69,    -1,    71,    -1,    -1,    74,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,   101,   102,   103,   104,    -1,    -1,    -1,
     145,    -1,    -1,    -1,    -1,   113,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,    -1,   126,   127,
      -1,   129,   130,    -1,    -1,    -1,   134,   135,    -1,    -1,
      -1,    -1,   132,   141,    -1,   143,    -1,    -1,    -1,   147,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    76,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    72,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,     3,    -1,
      -1,    -1,    -1,    37,    72,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    39,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    38,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,    60,    90,   116,   124,   125,   136,   162,   169,
     170,   200,   204,   212,   213,   216,   218,   232,    55,   118,
     128,   219,   201,   206,   206,     8,   233,   234,   181,   206,
     214,     0,   156,    89,   217,   217,   131,     3,    76,    87,
      97,   112,   202,    56,    82,    87,    91,    97,   207,   207,
       9,    20,   160,     3,     4,     5,     6,     7,     8,    17,
      18,    25,    26,    34,    46,    49,    51,    52,    59,    62,
      82,   117,   120,   121,   122,   150,   151,   152,   153,   154,
     155,   163,   182,   183,    87,    97,     3,   158,   185,   186,
     187,   189,   199,   162,   150,     3,     3,   217,   157,   203,
       3,   202,    76,   160,     3,     3,   163,   163,   234,   157,
     158,     9,   163,   163,   163,   145,   163,   168,   158,   158,
     158,   158,   158,   158,     3,    10,    11,    12,    13,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    39,   184,    76,   160,   157,
     184,   170,   185,   124,   160,    48,    86,    98,   105,   115,
     122,   190,   192,    39,   188,     3,    26,   144,   171,   139,
     185,     3,   124,   158,   208,   124,   208,     3,   163,   164,
     165,   163,   163,   168,    72,    73,   145,   170,   163,   164,
      43,    99,   133,   164,   166,   163,   163,    26,   163,   163,
     163,   163,   163,   163,     6,    18,   106,   158,    13,    14,
      16,   163,    34,    35,   119,   158,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,     3,   185,   183,
       3,    75,    87,   140,   196,   159,   159,     3,   215,   186,
      98,   115,   193,   187,    94,   107,   191,     3,    87,   116,
     157,   158,   230,   231,   163,   109,   177,   185,   171,   203,
       3,   211,     3,   180,   142,   211,   142,   170,   160,   159,
     132,    72,    73,   163,   163,   159,    76,   159,   159,   163,
     160,   160,   159,   159,     6,   106,   164,   170,   163,   163,
     158,    38,   158,   158,   158,   170,   171,   184,    95,    95,
      95,    20,   157,   160,   171,   191,   191,    94,   108,   187,
      94,     3,    77,    88,    95,   111,   220,   221,   222,   188,
      41,   100,   178,   171,    20,   110,   160,   205,   159,   160,
     158,   209,   205,   209,   205,   164,   163,   163,    72,   132,
     163,    76,    93,   167,   167,   159,   159,   164,   170,   163,
     170,   170,   170,   159,    79,   172,   196,    78,   197,   197,
     197,   163,     3,     3,   177,   187,   163,   108,   139,   194,
     195,   187,   158,   230,    88,    95,   158,   158,    95,   159,
     160,     3,   170,   163,   173,   163,    65,   163,    95,     3,
       3,    65,   163,   210,   160,   205,   205,    72,   163,    78,
     159,   164,   163,   159,   159,   159,   159,   159,   159,   159,
      41,    84,   176,    94,   158,   158,   158,    20,    20,   157,
     178,   163,   158,   195,   220,   158,   158,   180,   180,   158,
     230,   221,    40,    42,    44,    45,    53,    66,    67,    68,
      69,    71,    74,    85,    92,    96,   101,   102,   103,   104,
     113,   123,   124,   126,   127,   129,   130,   134,   135,   141,
     143,   147,   228,    37,    64,   174,   160,   160,   136,    20,
     159,   160,   158,   163,   159,    57,    58,    61,    63,    80,
      81,    83,   147,   148,   173,   163,   177,     3,   198,   198,
     198,   163,   163,     3,   180,   159,   180,   180,   159,   159,
     180,   158,   224,   224,   224,   224,   224,   224,   158,   224,
     224,   224,    42,   225,   225,   224,   224,   224,   158,   225,
     224,   225,   158,   158,   223,   163,   163,   211,    65,   163,
      65,   163,   210,   159,   146,   175,   178,   159,   160,   159,
     159,    20,   159,   230,   159,   159,   159,     5,   226,   227,
     226,   226,     4,   229,   226,   226,   226,   227,   227,   226,
     226,   226,   229,   227,   226,   227,     5,     5,    18,    36,
      50,    65,    95,   106,   111,   138,   174,   159,   114,    91,
     179,     3,   163,   159,   160,   137,   149,    53,    54,   159,
     160,   159,   159,   159,   106,     4,     4,     5,     6,     7,
      95,    95,   158,   180,     5,   124,     4,   227,     4,   227,
     227,   180,   159,     4,   159
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 243 "evoparser.y"
    {
        emit("NAME %s", (yyvsp[(1) - (1)].strval));
        GetSelection((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 248 "evoparser.y"
    { emit("FIELDNAME %s.%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 249 "evoparser.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 251 "evoparser.y"
    {
        emit("STRING %s", (yyvsp[(1) - (1)].strval));
        GetInsertions((yyvsp[(1) - (1)].strval));
        free((yyvsp[(1) - (1)].strval));
    ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 256 "evoparser.y"
    { emit("NUMBER %d", (yyvsp[(1) - (1)].intval)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 257 "evoparser.y"
    { emit("FLOAT %g", (yyvsp[(1) - (1)].floatval)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 258 "evoparser.y"
    { emit("BOOL %d", (yyvsp[(1) - (1)].intval)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 261 "evoparser.y"
    { emit("ADD"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 262 "evoparser.y"
    { emit("SUB"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 263 "evoparser.y"
    { emit("MUL"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 264 "evoparser.y"
    { emit("DIV"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 265 "evoparser.y"
    { emit("MOD"); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 266 "evoparser.y"
    { emit("MOD"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 267 "evoparser.y"
    { emit("NEG"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 268 "evoparser.y"
    { emit("AND"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 269 "evoparser.y"
    { emit("OR"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 270 "evoparser.y"
    { emit("XOR"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 271 "evoparser.y"
    { emit("BITOR"); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 272 "evoparser.y"
    { emit("BITAND"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 273 "evoparser.y"
    { emit("BITXOR"); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 274 "evoparser.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 275 "evoparser.y"
    { emit("NOT"); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 276 "evoparser.y"
    { emit("NOT"); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 278 "evoparser.y"
    {
        emit("CMP %d", (yyvsp[(2) - (3)].subtok));
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 282 "evoparser.y"
    { emit("CMPSELECT %d", (yyvsp[(2) - (5)].subtok)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 283 "evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 284 "evoparser.y"
    { emit("CMPANYSELECT %d", (yyvsp[(2) - (6)].subtok)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 285 "evoparser.y"
    { emit("CMPALLSELECT %d", (yyvsp[(2) - (6)].subtok)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 288 "evoparser.y"
    { emit("ISNULL"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 289 "evoparser.y"
    { emit("ISNULL"); emit("NOT"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 290 "evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(3) - (3)].intval)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 291 "evoparser.y"
    { emit("ISBOOL %d", (yyvsp[(4) - (4)].intval)); emit("NOT"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 292 "evoparser.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 295 "evoparser.y"
    { emit("BETWEEN"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 298 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 299 "evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 302 "evoparser.y"
    { (yyval.intval) = 0 ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 306 "evoparser.y"
    { emit("ISIN %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 307 "evoparser.y"
    { emit("ISIN %d", (yyvsp[(5) - (6)].intval)); emit("NOT"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 308 "evoparser.y"
    { emit("CMPANYSELECT 4"); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 309 "evoparser.y"
    { emit("CMPALLSELECT 3"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 310 "evoparser.y"
    { emit("EXISTSSELECT"); if((yyvsp[(1) - (4)].subtok))emit("NOT"); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 314 "evoparser.y"
    { emit("CALL %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].strval)); free((yyvsp[(1) - (4)].strval)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 318 "evoparser.y"
    { emit("COUNTALL") ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 319 "evoparser.y"
    { emit(" CALL 1 COUNT"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 320 "evoparser.y"
    { emit("CALL %d SUBSTR", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 321 "evoparser.y"
    { emit("CALL 2 SUBSTR"); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 322 "evoparser.y"
    { emit("CALL 3 SUBSTR"); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 323 "evoparser.y"
    { emit("CALL %d TRIM", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 324 "evoparser.y"
    { emit("CALL 3 TRIM"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 327 "evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 328 "evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 329 "evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 332 "evoparser.y"
    { emit("CALL 3 DATE_ADD"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 333 "evoparser.y"
    { emit("CALL 3 DATE_SUB"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 336 "evoparser.y"
    { emit("NUMBER 1"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 337 "evoparser.y"
    { emit("NUMBER 2"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 338 "evoparser.y"
    { emit("NUMBER 3"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 339 "evoparser.y"
    { emit("NUMBER 4"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 340 "evoparser.y"
    { emit("NUMBER 5"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 341 "evoparser.y"
    { emit("NUMBER 6"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 342 "evoparser.y"
    { emit("NUMBER 7"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 343 "evoparser.y"
    { emit("NUMBER 8"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 344 "evoparser.y"
    { emit("NUMBER 9"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 347 "evoparser.y"
    { emit("CASEVAL %d 0", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 348 "evoparser.y"
    { emit("CASEVAL %d 1", (yyvsp[(3) - (6)].intval)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 349 "evoparser.y"
    { emit("CASE %d 0", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 350 "evoparser.y"
    { emit("CASE %d 1", (yyvsp[(2) - (5)].intval)); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 353 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 354 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (5)].intval)+1; ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 357 "evoparser.y"
    { emit("LIKE"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 358 "evoparser.y"
    { emit("LIKE"); emit("NOT"); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 361 "evoparser.y"
    { emit("REGEXP"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 362 "evoparser.y"
    { emit("REGEXP"); emit("NOT"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 365 "evoparser.y"
    { emit("NOW") ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 366 "evoparser.y"
    { emit("NOW") ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 367 "evoparser.y"
    { emit("NOW") ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 372 "evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[(1) - (1)].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 381 "evoparser.y"
    { emit("SELECTNODATA %d %d", (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 386 "evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[(2) - (11)].intval), (yyvsp[(3) - (11)].intval), (yyvsp[(5) - (11)].intval));
        if ((yyvsp[(3) - (11)].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 396 "evoparser.y"
    { emit("WHERE"); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 398 "evoparser.y"
    { emit("GROUPBYLIST %d %d", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 401 "evoparser.y"
    { emit("GROUPBY %d", (yyvsp[(2) - (2)].intval)); (yyval.intval) = 1; ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 402 "evoparser.y"
    { emit("GROUPBY %d", (yyvsp[(4) - (4)].intval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 405 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 406 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 407 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 410 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 411 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 415 "evoparser.y"
    { emit("HAVING"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 419 "evoparser.y"
    { emit("ORDERBY %d", (yyvsp[(3) - (3)].intval)); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 422 "evoparser.y"
    { emit("LIMIT 1"); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 423 "evoparser.y"
    { emit("LIMIT 2"); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 427 "evoparser.y"
    { emit("INTO %d", (yyvsp[(2) - (2)].intval)); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 430 "evoparser.y"
    { emit("COLUMN %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 431 "evoparser.y"
    { emit("COLUMN %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 434 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 435 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 436 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 437 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 438 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 439 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 440 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 441 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 442 "evoparser.y"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 445 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 446 "evoparser.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 448 "evoparser.y"
    {
        emit("SELECTALL");
        (yyval.intval) = 3;
    ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 455 "evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(2) - (2)].strval)); free((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 456 "evoparser.y"
    { emit ("ALIAS %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 460 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 461 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 470 "evoparser.y"
    {
        emit("TABLE %s", (yyvsp[(1) - (3)].strval));
        GetSelTableName((yyvsp[(1) - (3)].strval));
        free((yyvsp[(1) - (3)].strval));
    ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 475 "evoparser.y"
    { emit("TABLE %s.%s", (yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval)); free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 476 "evoparser.y"
    { emit("SUBQUERYAS %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 477 "evoparser.y"
    { emit("TABLEREFERENCES %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 486 "evoparser.y"
    { emit("JOIN %d", 100+(yyvsp[(2) - (5)].intval)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 488 "evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 490 "evoparser.y"
    { emit("JOIN %d", 200); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 492 "evoparser.y"
    { emit("JOIN %d", 300+(yyvsp[(2) - (6)].intval)+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 494 "evoparser.y"
    { emit("JOIN %d", 400+(yyvsp[(3) - (5)].intval)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 497 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 498 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 499 "evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 502 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 503 "evoparser.y"
    {(yyval.intval) = 4; ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 506 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 507 "evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 510 "evoparser.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 511 "evoparser.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 512 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 519 "evoparser.y"
    { emit("ONEXPR"); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 520 "evoparser.y"
    { emit("USING %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 525 "evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 10+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 527 "evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 20+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 529 "evoparser.y"
    { emit("INDEXHINT %d %d", (yyvsp[(5) - (6)].intval), 30+(yyvsp[(3) - (6)].intval)); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 533 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 534 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 537 "evoparser.y"
    { emit("INDEX %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 538 "evoparser.y"
    { emit("INDEX %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 541 "evoparser.y"
    { emit("SUBQUERY"); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 546 "evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 554 "evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval));
        GetDelTableName((yyvsp[(4) - (7)].strval));
        free((yyvsp[(4) - (7)].strval));
    ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 561 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 562 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 563 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 564 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 568 "evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (6)].intval), (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].intval)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 571 "evoparser.y"
    { emit("TABLE %s", (yyvsp[(1) - (2)].strval)); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 572 "evoparser.y"
    { emit("TABLE %s", (yyvsp[(3) - (4)].strval)); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 577 "evoparser.y"
    { emit("DELETEMULTI %d %d %d", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].intval), (yyvsp[(6) - (7)].intval)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 581 "evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 588 "evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval));
        GetInsertionTableName((yyvsp[(4) - (8)].strval));
        free((yyvsp[(4) - (8)].strval))
    ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 596 "evoparser.y"
    { emit("DUPUPDATE %d", (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 599 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 600 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 601 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 602 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 603 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 610 "evoparser.y"
    { emit("INSERTCOLS %d", (yyvsp[(2) - (3)].intval)); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 613 "evoparser.y"
    { emit("VALUES %d", (yyvsp[(2) - (3)].intval)); (yyval.intval) = 1; ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 614 "evoparser.y"
    { emit("VALUES %d", (yyvsp[(4) - (5)].intval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 616 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 617 "evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = 1; ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 618 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 619 "evoparser.y"
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 623 "evoparser.y"
    { emit("INSERTASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)) ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 626 "evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 627 "evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); (yyval.intval) = 1; ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 628 "evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 629 "evoparser.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[(3) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 635 "evoparser.y"
    { emit("STMT"); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 641 "evoparser.y"
    { emit("REPLACEVALS %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(4) - (8)].strval)); free((yyvsp[(4) - (8)].strval)) ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 646 "evoparser.y"
    { emit("REPLACEASGN %d %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(6) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)) ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 651 "evoparser.y"
    { emit("REPLACESELECT %d %s", (yyvsp[(2) - (7)].intval), (yyvsp[(4) - (7)].strval)); free((yyvsp[(4) - (7)].strval)); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 656 "evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 663 "evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[(2) - (8)].intval), (yyvsp[(3) - (8)].intval), (yyvsp[(5) - (8)].intval));
    ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 668 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 669 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 670 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 675 "evoparser.y"
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

  case 207:

/* Line 1455 of yacc.c  */
#line 686 "evoparser.y"
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

  case 208:

/* Line 1455 of yacc.c  */
#line 697 "evoparser.y"
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

  case 209:

/* Line 1455 of yacc.c  */
#line 708 "evoparser.y"
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

  case 210:

/* Line 1455 of yacc.c  */
#line 721 "evoparser.y"
    { emit("STMT"); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 725 "evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 726 "evoparser.y"
    { emit("CREATEDATABASE %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 729 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 730 "evoparser.y"
    { if(!(yyvsp[(2) - (2)].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 735 "evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 743 "evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(7) - (8)].intval), (yyvsp[(5) - (8)].strval));
        GetTableName((yyvsp[(5) - (8)].strval));
        free((yyvsp[(5) - (8)].strval));
    ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 751 "evoparser.y"
    { emit("CREATE %d %d %d %s.%s", (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(9) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval)); free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 756 "evoparser.y"
    { emit("CREATESELECT %d %d %d %s", (yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(7) - (9)].intval), (yyvsp[(5) - (9)].strval)); free((yyvsp[(5) - (9)].strval)); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 760 "evoparser.y"
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval)); free((yyvsp[(5) - (6)].strval)); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 765 "evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); free((yyvsp[(7) - (11)].strval)); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 769 "evoparser.y"
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); free((yyvsp[(7) - (8)].strval)); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 772 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 773 "evoparser.y"
    { (yyval.intval) = 1;;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 776 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 777 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 780 "evoparser.y"
    { emit("PRIKEY %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 781 "evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 782 "evoparser.y"
    { emit("KEY %d", (yyvsp[(3) - (4)].intval)); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 783 "evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 784 "evoparser.y"
    { emit("TEXTINDEX %d", (yyvsp[(4) - (5)].intval)); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 787 "evoparser.y"
    { emit("STARTCOL"); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 789 "evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[(3) - (4)].intval), (yyvsp[(2) - (4)].strval));
        /*GetColumnNames($2);*/
        free((yyvsp[(2) - (4)].strval));
    ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 796 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 797 "evoparser.y"
    { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 799 "evoparser.y"
    { emit("ATTR DEFAULT STRING %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 800 "evoparser.y"
    { emit("ATTR DEFAULT NUMBER %d", (yyvsp[(3) - (3)].intval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 801 "evoparser.y"
    { emit("ATTR DEFAULT FLOAT %g", (yyvsp[(3) - (3)].floatval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 802 "evoparser.y"
    { emit("ATTR DEFAULT BOOL %d", (yyvsp[(3) - (3)].intval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 803 "evoparser.y"
    { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 804 "evoparser.y"
    { emit("ATTR UNIQUEKEY %d", (yyvsp[(4) - (5)].intval)); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 805 "evoparser.y"
    { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 806 "evoparser.y"
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 807 "evoparser.y"
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 808 "evoparser.y"
    { emit("ATTR COMMENT %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 811 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 812 "evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 813 "evoparser.y"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 816 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 817 "evoparser.y"
    { (yyval.intval) = 4000; ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 820 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 821 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 822 "evoparser.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 826 "evoparser.y"
    { emit("COLCHARSET %s", (yyvsp[(4) - (4)].strval)); free((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 827 "evoparser.y"
    { emit("COLCOLLATE %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 831 "evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 832 "evoparser.y"
    { (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 833 "evoparser.y"
    { (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 834 "evoparser.y"
    { (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 835 "evoparser.y"
    { (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 836 "evoparser.y"
    { (yyval.intval) = 50000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 837 "evoparser.y"
    { (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 838 "evoparser.y"
    { (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 839 "evoparser.y"
    { (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 840 "evoparser.y"
    { (yyval.intval) = 90000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 841 "evoparser.y"
    { (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 842 "evoparser.y"
    { (yyval.intval) = 100001; ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 843 "evoparser.y"
    { (yyval.intval) = 100002; ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 844 "evoparser.y"
    { (yyval.intval) = 100003; ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 845 "evoparser.y"
    { (yyval.intval) = 100004; ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 846 "evoparser.y"
    { (yyval.intval) = 100005; ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 847 "evoparser.y"
    { (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 848 "evoparser.y"
    { (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 849 "evoparser.y"
    { (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 850 "evoparser.y"
    { (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 851 "evoparser.y"
    { (yyval.intval) = 160001; ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 852 "evoparser.y"
    { (yyval.intval) = 160002; ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 853 "evoparser.y"
    { (yyval.intval) = 160003; ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 854 "evoparser.y"
    { (yyval.intval) = 160004; ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 855 "evoparser.y"
    { (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 856 "evoparser.y"
    { (yyval.intval) = 171000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 857 "evoparser.y"
    { (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 858 "evoparser.y"
    { (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 859 "evoparser.y"
    { (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 860 "evoparser.y"
    { (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 863 "evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 864 "evoparser.y"
    { emit("ENUMVAL %s", (yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 868 "evoparser.y"
    { emit("CREATESELECT %d", (yyvsp[(1) - (3)].intval)) ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 871 "evoparser.y"
    { (yyval.intval) = 0; ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 872 "evoparser.y"
    { (yyval.intval) = 1; ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 873 "evoparser.y"
    { (yyval.intval) = 2; ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 877 "evoparser.y"
    { emit("STMT"); ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 883 "evoparser.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 884 "evoparser.y"
    { emit("SET %s", (yyvsp[(1) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 4206 "evoparser.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 887 "evoparser.y"

void emit(char *s, ...)
{
	extern yylineno;
	va_list ap;
	va_start(ap, s);
	printf("rpn: ");
	vfprintf(stdout, s, ap);
	printf("\n");
}
void yyerror(char *s, ...)
{
	extern yylineno;
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "%d: error: ", yylineno);
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
}
