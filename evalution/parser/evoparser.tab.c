/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "evoparser.y"

	#define _CRT_SECURE_NO_WARNINGS
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdio.h>
	#include "../db/database.h"

	void yyerror(char *s, ...);
	void emit(char *s, ...);
	int yylex(void);

#line 84 "evoparser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "evoparser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INTNUM = 5,                     /* INTNUM  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_APPROXNUM = 7,                  /* APPROXNUM  */
  YYSYMBOL_USERVAR = 8,                    /* USERVAR  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_OR = 10,                        /* OR  */
  YYSYMBOL_XOR = 11,                       /* XOR  */
  YYSYMBOL_ANDOP = 12,                     /* ANDOP  */
  YYSYMBOL_IN = 13,                        /* IN  */
  YYSYMBOL_IS = 14,                        /* IS  */
  YYSYMBOL_LIKE = 15,                      /* LIKE  */
  YYSYMBOL_REGEXP = 16,                    /* REGEXP  */
  YYSYMBOL_NOT = 17,                       /* NOT  */
  YYSYMBOL_18_ = 18,                       /* '!'  */
  YYSYMBOL_BETWEEN = 19,                   /* BETWEEN  */
  YYSYMBOL_COMPARISON = 20,                /* COMPARISON  */
  YYSYMBOL_21_ = 21,                       /* '|'  */
  YYSYMBOL_22_ = 22,                       /* '&'  */
  YYSYMBOL_SHIFT = 23,                     /* SHIFT  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* '*'  */
  YYSYMBOL_27_ = 27,                       /* '/'  */
  YYSYMBOL_28_ = 28,                       /* '%'  */
  YYSYMBOL_MOD = 29,                       /* MOD  */
  YYSYMBOL_30_ = 30,                       /* '^'  */
  YYSYMBOL_UMINUS = 31,                    /* UMINUS  */
  YYSYMBOL_ALTER = 32,                     /* ALTER  */
  YYSYMBOL_ADD = 33,                       /* ADD  */
  YYSYMBOL_ALL = 34,                       /* ALL  */
  YYSYMBOL_ANY = 35,                       /* ANY  */
  YYSYMBOL_AUTO_INCREMENT = 36,            /* AUTO_INCREMENT  */
  YYSYMBOL_ASC = 37,                       /* ASC  */
  YYSYMBOL_AND = 38,                       /* AND  */
  YYSYMBOL_AS = 39,                        /* AS  */
  YYSYMBOL_BLOB = 40,                      /* BLOB  */
  YYSYMBOL_BY = 41,                        /* BY  */
  YYSYMBOL_BINARY = 42,                    /* BINARY  */
  YYSYMBOL_BOTH = 43,                      /* BOTH  */
  YYSYMBOL_BIGINT = 44,                    /* BIGINT  */
  YYSYMBOL_BIT = 45,                       /* BIT  */
  YYSYMBOL_CURRENT_TIMESTAMP = 46,         /* CURRENT_TIMESTAMP  */
  YYSYMBOL_CREATE = 47,                    /* CREATE  */
  YYSYMBOL_CROSS = 48,                     /* CROSS  */
  YYSYMBOL_CASE = 49,                      /* CASE  */
  YYSYMBOL_COMMENT = 50,                   /* COMMENT  */
  YYSYMBOL_CURRENT_DATE = 51,              /* CURRENT_DATE  */
  YYSYMBOL_CURRENT_TIME = 52,              /* CURRENT_TIME  */
  YYSYMBOL_CHAR = 53,                      /* CHAR  */
  YYSYMBOL_COLLATE = 54,                   /* COLLATE  */
  YYSYMBOL_DATABASE = 55,                  /* DATABASE  */
  YYSYMBOL_DELAYED = 56,                   /* DELAYED  */
  YYSYMBOL_DAY_HOUR = 57,                  /* DAY_HOUR  */
  YYSYMBOL_DAY_MICROSECOND = 58,           /* DAY_MICROSECOND  */
  YYSYMBOL_DISTINCT = 59,                  /* DISTINCT  */
  YYSYMBOL_DELETE = 60,                    /* DELETE  */
  YYSYMBOL_DAY_MINUTE = 61,                /* DAY_MINUTE  */
  YYSYMBOL_DISTINCTROW = 62,               /* DISTINCTROW  */
  YYSYMBOL_DAY_SECOND = 63,                /* DAY_SECOND  */
  YYSYMBOL_DESC = 64,                      /* DESC  */
  YYSYMBOL_DEFAULT = 65,                   /* DEFAULT  */
  YYSYMBOL_DOUBLE = 66,                    /* DOUBLE  */
  YYSYMBOL_DATETIME = 67,                  /* DATETIME  */
  YYSYMBOL_DECIMAL = 68,                   /* DECIMAL  */
  YYSYMBOL_DATE = 69,                      /* DATE  */
  YYSYMBOL_ESCAPED = 70,                   /* ESCAPED  */
  YYSYMBOL_ENUM = 71,                      /* ENUM  */
  YYSYMBOL_END = 72,                       /* END  */
  YYSYMBOL_ELSE = 73,                      /* ELSE  */
  YYSYMBOL_FLOAT = 74,                     /* FLOAT  */
  YYSYMBOL_FORCE = 75,                     /* FORCE  */
  YYSYMBOL_FROM = 76,                      /* FROM  */
  YYSYMBOL_FULLTEXT = 77,                  /* FULLTEXT  */
  YYSYMBOL_FOR = 78,                       /* FOR  */
  YYSYMBOL_GROUP = 79,                     /* GROUP  */
  YYSYMBOL_HOUR_MINUTE = 80,               /* HOUR_MINUTE  */
  YYSYMBOL_HOUR_MICROSECOND = 81,          /* HOUR_MICROSECOND  */
  YYSYMBOL_HIGH_PRIORITY = 82,             /* HIGH_PRIORITY  */
  YYSYMBOL_HOUR_SECOND = 83,               /* HOUR_SECOND  */
  YYSYMBOL_HAVING = 84,                    /* HAVING  */
  YYSYMBOL_INTEGER = 85,                   /* INTEGER  */
  YYSYMBOL_INNER = 86,                     /* INNER  */
  YYSYMBOL_IGNORE = 87,                    /* IGNORE  */
  YYSYMBOL_INDEX = 88,                     /* INDEX  */
  YYSYMBOL_IF = 89,                        /* IF  */
  YYSYMBOL_INSERT = 90,                    /* INSERT  */
  YYSYMBOL_INTO = 91,                      /* INTO  */
  YYSYMBOL_INT = 92,                       /* INT  */
  YYSYMBOL_INTERVAL = 93,                  /* INTERVAL  */
  YYSYMBOL_JOIN = 94,                      /* JOIN  */
  YYSYMBOL_KEY = 95,                       /* KEY  */
  YYSYMBOL_LONGTEXT = 96,                  /* LONGTEXT  */
  YYSYMBOL_LOW_PRIORITY = 97,              /* LOW_PRIORITY  */
  YYSYMBOL_LEFT = 98,                      /* LEFT  */
  YYSYMBOL_LEADING = 99,                   /* LEADING  */
  YYSYMBOL_LIMIT = 100,                    /* LIMIT  */
  YYSYMBOL_LONGBLOB = 101,                 /* LONGBLOB  */
  YYSYMBOL_MEDIUMTEXT = 102,               /* MEDIUMTEXT  */
  YYSYMBOL_MEDIUMBLOB = 103,               /* MEDIUMBLOB  */
  YYSYMBOL_MEDIUMINT = 104,                /* MEDIUMINT  */
  YYSYMBOL_NATURAL = 105,                  /* NATURAL  */
  YYSYMBOL_NULLX = 106,                    /* NULLX  */
  YYSYMBOL_OUTER = 107,                    /* OUTER  */
  YYSYMBOL_ON = 108,                       /* ON  */
  YYSYMBOL_ORDER = 109,                    /* ORDER  */
  YYSYMBOL_ONDUPLICATE = 110,              /* ONDUPLICATE  */
  YYSYMBOL_PRIMARY = 111,                  /* PRIMARY  */
  YYSYMBOL_QUICK = 112,                    /* QUICK  */
  YYSYMBOL_REAL = 113,                     /* REAL  */
  YYSYMBOL_ROLLUP = 114,                   /* ROLLUP  */
  YYSYMBOL_RIGHT = 115,                    /* RIGHT  */
  YYSYMBOL_REPLACE = 116,                  /* REPLACE  */
  YYSYMBOL_SQL_SMALL_RESULT = 117,         /* SQL_SMALL_RESULT  */
  YYSYMBOL_SCHEMA = 118,                   /* SCHEMA  */
  YYSYMBOL_SOME = 119,                     /* SOME  */
  YYSYMBOL_SQL_CALC_FOUND_ROWS = 120,      /* SQL_CALC_FOUND_ROWS  */
  YYSYMBOL_SQL_BIG_RESULT = 121,           /* SQL_BIG_RESULT  */
  YYSYMBOL_STRAIGHT_JOIN = 122,            /* STRAIGHT_JOIN  */
  YYSYMBOL_SMALLINT = 123,                 /* SMALLINT  */
  YYSYMBOL_SET = 124,                      /* SET  */
  YYSYMBOL_SELECT = 125,                   /* SELECT  */
  YYSYMBOL_TINYTEXT = 126,                 /* TINYTEXT  */
  YYSYMBOL_TINYINT = 127,                  /* TINYINT  */
  YYSYMBOL_TEMPORARY = 128,                /* TEMPORARY  */
  YYSYMBOL_TEXT = 129,                     /* TEXT  */
  YYSYMBOL_TIMESTAMP = 130,                /* TIMESTAMP  */
  YYSYMBOL_TABLE = 131,                    /* TABLE  */
  YYSYMBOL_THEN = 132,                     /* THEN  */
  YYSYMBOL_TRAILING = 133,                 /* TRAILING  */
  YYSYMBOL_TINYBLOB = 134,                 /* TINYBLOB  */
  YYSYMBOL_TIME = 135,                     /* TIME  */
  YYSYMBOL_UPDATE = 136,                   /* UPDATE  */
  YYSYMBOL_UNSIGNED = 137,                 /* UNSIGNED  */
  YYSYMBOL_UNIQUE = 138,                   /* UNIQUE  */
  YYSYMBOL_USING = 139,                    /* USING  */
  YYSYMBOL_USE = 140,                      /* USE  */
  YYSYMBOL_VARCHAR = 141,                  /* VARCHAR  */
  YYSYMBOL_VALUES = 142,                   /* VALUES  */
  YYSYMBOL_VARBINARY = 143,                /* VARBINARY  */
  YYSYMBOL_WHERE = 144,                    /* WHERE  */
  YYSYMBOL_WHEN = 145,                     /* WHEN  */
  YYSYMBOL_WITH = 146,                     /* WITH  */
  YYSYMBOL_YEAR = 147,                     /* YEAR  */
  YYSYMBOL_YEAR_MONTH = 148,               /* YEAR_MONTH  */
  YYSYMBOL_ZEROFILL = 149,                 /* ZEROFILL  */
  YYSYMBOL_EXISTS = 150,                   /* EXISTS  */
  YYSYMBOL_FSUBSTRING = 151,               /* FSUBSTRING  */
  YYSYMBOL_FTRIM = 152,                    /* FTRIM  */
  YYSYMBOL_FDATE_ADD = 153,                /* FDATE_ADD  */
  YYSYMBOL_FDATE_SUB = 154,                /* FDATE_SUB  */
  YYSYMBOL_FCOUNT = 155,                   /* FCOUNT  */
  YYSYMBOL_156_ = 156,                     /* ';'  */
  YYSYMBOL_157_ = 157,                     /* '.'  */
  YYSYMBOL_158_ = 158,                     /* '('  */
  YYSYMBOL_159_ = 159,                     /* ')'  */
  YYSYMBOL_160_ = 160,                     /* ','  */
  YYSYMBOL_YYACCEPT = 161,                 /* $accept  */
  YYSYMBOL_stmt_list = 162,                /* stmt_list  */
  YYSYMBOL_expr = 163,                     /* expr  */
  YYSYMBOL_val_list = 164,                 /* val_list  */
  YYSYMBOL_opt_val_list = 165,             /* opt_val_list  */
  YYSYMBOL_trim_ltb = 166,                 /* trim_ltb  */
  YYSYMBOL_interval_exp = 167,             /* interval_exp  */
  YYSYMBOL_case_list = 168,                /* case_list  */
  YYSYMBOL_stmt = 169,                     /* stmt  */
  YYSYMBOL_select_stmt = 170,              /* select_stmt  */
  YYSYMBOL_opt_where = 171,                /* opt_where  */
  YYSYMBOL_opt_groupby = 172,              /* opt_groupby  */
  YYSYMBOL_groupby_list = 173,             /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 174,             /* opt_asc_desc  */
  YYSYMBOL_opt_with_rollup = 175,          /* opt_with_rollup  */
  YYSYMBOL_opt_having = 176,               /* opt_having  */
  YYSYMBOL_opt_orderby = 177,              /* opt_orderby  */
  YYSYMBOL_opt_limit = 178,                /* opt_limit  */
  YYSYMBOL_opt_into_list = 179,            /* opt_into_list  */
  YYSYMBOL_column_list = 180,              /* column_list  */
  YYSYMBOL_select_opts = 181,              /* select_opts  */
  YYSYMBOL_select_expr_list = 182,         /* select_expr_list  */
  YYSYMBOL_select_expr = 183,              /* select_expr  */
  YYSYMBOL_opt_as_alias = 184,             /* opt_as_alias  */
  YYSYMBOL_table_references = 185,         /* table_references  */
  YYSYMBOL_table_reference = 186,          /* table_reference  */
  YYSYMBOL_table_factor = 187,             /* table_factor  */
  YYSYMBOL_opt_as = 188,                   /* opt_as  */
  YYSYMBOL_join_table = 189,               /* join_table  */
  YYSYMBOL_opt_inner_cross = 190,          /* opt_inner_cross  */
  YYSYMBOL_opt_outer = 191,                /* opt_outer  */
  YYSYMBOL_left_or_right = 192,            /* left_or_right  */
  YYSYMBOL_opt_left_or_right_outer = 193,  /* opt_left_or_right_outer  */
  YYSYMBOL_opt_join_condition = 194,       /* opt_join_condition  */
  YYSYMBOL_join_condition = 195,           /* join_condition  */
  YYSYMBOL_index_hint = 196,               /* index_hint  */
  YYSYMBOL_opt_for_join = 197,             /* opt_for_join  */
  YYSYMBOL_index_list = 198,               /* index_list  */
  YYSYMBOL_table_subquery = 199,           /* table_subquery  */
  YYSYMBOL_delete_stmt = 200,              /* delete_stmt  */
  YYSYMBOL_delete_opts = 201,              /* delete_opts  */
  YYSYMBOL_delete_list = 202,              /* delete_list  */
  YYSYMBOL_opt_dot_star = 203,             /* opt_dot_star  */
  YYSYMBOL_insert_stmt = 204,              /* insert_stmt  */
  YYSYMBOL_opt_ondupupdate = 205,          /* opt_ondupupdate  */
  YYSYMBOL_insert_opts = 206,              /* insert_opts  */
  YYSYMBOL_opt_into = 207,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 208,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 209,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 210,              /* insert_vals  */
  YYSYMBOL_insert_asgn_list = 211,         /* insert_asgn_list  */
  YYSYMBOL_replace_stmt = 212,             /* replace_stmt  */
  YYSYMBOL_update_stmt = 213,              /* update_stmt  */
  YYSYMBOL_update_opts = 214,              /* update_opts  */
  YYSYMBOL_update_asgn_list = 215,         /* update_asgn_list  */
  YYSYMBOL_create_database_stmt = 216,     /* create_database_stmt  */
  YYSYMBOL_opt_if_not_exists = 217,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 218,        /* create_table_stmt  */
  YYSYMBOL_opt_temporary = 219,            /* opt_temporary  */
  YYSYMBOL_create_col_list = 220,          /* create_col_list  */
  YYSYMBOL_create_definition = 221,        /* create_definition  */
  YYSYMBOL_222_1 = 222,                    /* $@1  */
  YYSYMBOL_column_atts = 223,              /* column_atts  */
  YYSYMBOL_opt_length = 224,               /* opt_length  */
  YYSYMBOL_opt_binary = 225,               /* opt_binary  */
  YYSYMBOL_opt_uz = 226,                   /* opt_uz  */
  YYSYMBOL_opt_csc = 227,                  /* opt_csc  */
  YYSYMBOL_data_type = 228,                /* data_type  */
  YYSYMBOL_enum_list = 229,                /* enum_list  */
  YYSYMBOL_create_select_statement = 230,  /* create_select_statement  */
  YYSYMBOL_opt_ignore_replace = 231,       /* opt_ignore_replace  */
  YYSYMBOL_set_stmt = 232,                 /* set_stmt  */
  YYSYMBOL_set_list = 233,                 /* set_list  */
  YYSYMBOL_set_expr = 234                  /* set_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1408

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  161
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  298
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  615

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   401


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    28,    22,     2,
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
      15,    16,    17,    19,    20,    23,    29,    31,    32,    33,
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   237,   237,   238,   243,   249,   250,   251,   257,   258,
     259,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   283,   284,
     285,   286,   289,   290,   291,   292,   293,   296,   299,   300,
     303,   304,   307,   308,   309,   310,   311,   315,   319,   320,
     322,   323,   324,   325,   326,   329,   330,   331,   334,   335,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   349,
     350,   351,   352,   355,   356,   359,   360,   363,   364,   367,
     368,   369,   373,   383,   384,   397,   398,   399,   400,   403,
     404,   407,   408,   409,   412,   413,   416,   417,   420,   421,
     424,   424,   425,   428,   429,   432,   433,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   447,   448,   449,   456,
     457,   458,   459,   462,   463,   466,   467,   471,   477,   478,
     479,   482,   483,   487,   489,   491,   493,   495,   499,   500,
     501,   504,   505,   508,   509,   512,   513,   514,   517,   518,
     521,   522,   526,   528,   530,   532,   535,   536,   539,   540,
     543,   547,   555,   563,   564,   565,   566,   570,   573,   574,
     577,   577,   579,   582,   589,   597,   598,   601,   602,   603,
     604,   605,   608,   608,   611,   612,   615,   616,   619,   620,
     621,   622,   625,   629,   630,   631,   632,   638,   641,   647,
     652,   658,   664,   671,   672,   673,   677,   688,   699,   710,
     724,   728,   729,   732,   733,   737,   744,   753,   757,   762,
     766,   771,   775,   776,   779,   780,   783,   784,   785,   786,
     787,   790,   790,   799,   800,   801,   802,   803,   804,   805,
     806,   807,   808,   809,   810,   811,   814,   815,   816,   819,
     820,   823,   824,   825,   828,   829,   830,   834,   835,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,   851,   852,   853,   854,   855,   856,
     857,   858,   859,   860,   861,   862,   863,   866,   867,   870,
     874,   875,   876,   880,   883,   884,   884,   886,   887
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "STRING",
  "INTNUM", "BOOL", "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP",
  "IN", "IS", "LIKE", "REGEXP", "NOT", "'!'", "BETWEEN", "COMPARISON",
  "'|'", "'&'", "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'",
  "UMINUS", "ALTER", "ADD", "ALL", "ANY", "AUTO_INCREMENT", "ASC", "AND",
  "AS", "BLOB", "BY", "BINARY", "BOTH", "BIGINT", "BIT",
  "CURRENT_TIMESTAMP", "CREATE", "CROSS", "CASE", "COMMENT",
  "CURRENT_DATE", "CURRENT_TIME", "CHAR", "COLLATE", "DATABASE", "DELAYED",
  "DAY_HOUR", "DAY_MICROSECOND", "DISTINCT", "DELETE", "DAY_MINUTE",
  "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE", "DATETIME",
  "DECIMAL", "DATE", "ESCAPED", "ENUM", "END", "ELSE", "FLOAT", "FORCE",
  "FROM", "FULLTEXT", "FOR", "GROUP", "HOUR_MINUTE", "HOUR_MICROSECOND",
  "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "INTEGER", "INNER", "IGNORE",
  "INDEX", "IF", "INSERT", "INTO", "INT", "INTERVAL", "JOIN", "KEY",
  "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT", "LONGBLOB",
  "MEDIUMTEXT", "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NULLX", "OUTER",
  "ON", "ORDER", "ONDUPLICATE", "PRIMARY", "QUICK", "REAL", "ROLLUP",
  "RIGHT", "REPLACE", "SQL_SMALL_RESULT", "SCHEMA", "SOME",
  "SQL_CALC_FOUND_ROWS", "SQL_BIG_RESULT", "STRAIGHT_JOIN", "SMALLINT",
  "SET", "SELECT", "TINYTEXT", "TINYINT", "TEMPORARY", "TEXT", "TIMESTAMP",
  "TABLE", "THEN", "TRAILING", "TINYBLOB", "TIME", "UPDATE", "UNSIGNED",
  "UNIQUE", "USING", "USE", "VARCHAR", "VALUES", "VARBINARY", "WHERE",
  "WHEN", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS", "FSUBSTRING",
  "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT", "';'", "'.'", "'('", "')'",
  "','", "$accept", "stmt_list", "expr", "val_list", "opt_val_list",
  "trim_ltb", "interval_exp", "case_list", "stmt", "select_stmt",
  "opt_where", "opt_groupby", "groupby_list", "opt_asc_desc",
  "opt_with_rollup", "opt_having", "opt_orderby", "opt_limit",
  "opt_into_list", "column_list", "select_opts", "select_expr_list",
  "select_expr", "opt_as_alias", "table_references", "table_reference",
  "table_factor", "opt_as", "join_table", "opt_inner_cross", "opt_outer",
  "left_or_right", "opt_left_or_right_outer", "opt_join_condition",
  "join_condition", "index_hint", "opt_for_join", "index_list",
  "table_subquery", "delete_stmt", "delete_opts", "delete_list",
  "opt_dot_star", "insert_stmt", "opt_ondupupdate", "insert_opts",
  "opt_into", "opt_col_names", "insert_vals_list", "insert_vals",
  "insert_asgn_list", "replace_stmt", "update_stmt", "update_opts",
  "update_asgn_list", "create_database_stmt", "opt_if_not_exists",
  "create_table_stmt", "opt_temporary", "create_col_list",
  "create_definition", "$@1", "column_atts", "opt_length", "opt_binary",
  "opt_uz", "opt_csc", "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-373)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-218)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     146,    20,  -373,  -373,  -373,    64,  -373,    16,    79,   -72,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,    15,    15,
    -373,    61,   114,   178,   178,   112,    -9,  -373,   215,   171,
      18,  -373,   146,    37,   222,   226,    15,    74,   236,  -373,
    -373,  -373,   -37,  -373,  -373,  -373,  -373,  -373,   244,   253,
     606,   606,    64,    93,  -373,  -373,  -373,  -373,   250,   606,
     606,   606,  -373,  -373,  -373,   355,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,   118,   123,   133,   137,   140,
     143,  1281,   -36,  -373,    21,    22,    26,     9,   -82,   380,
    -373,  -373,   233,  -373,  -373,  -373,  -373,   309,   301,  -373,
     166,    45,    18,   335,   -98,   -81,  1340,  1340,  -373,   340,
     606,   606,   551,   551,  -373,   606,   919,   -26,   224,   606,
     282,   606,   606,   405,  -373,   606,   606,   606,   206,    24,
     606,   606,   199,   606,    10,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   376,  -373,    18,   606,   385,
      84,   246,   119,   411,    18,  -373,  -373,  -373,   -49,  -373,
      18,   280,   322,  -373,   437,    40,  -373,   606,   333,    18,
     -86,    74,   452,   455,   323,   452,   -62,  -373,   699,  -373,
     318,  1340,  1024,    -4,  -373,   606,   606,   325,   678,   330,
    -373,  -373,  -373,   339,   606,   777,   798,   342,   862,  1360,
     524,   749,   442,  -373,    30,  -373,  1378,  1378,   334,   606,
     606,  1311,   341,   345,   346,   224,   370,   898,   636,   926,
     292,   292,   451,   451,   451,   451,  -373,  -373,   -86,  -373,
      49,   417,   420,   423,  -373,  -373,  -373,   -11,    34,   380,
     322,   322,   425,   418,    18,  -373,   433,  -373,  -373,  -373,
     525,   229,  -373,   233,  1340,   488,   431,   -86,  -373,  -373,
     512,   -59,  -373,   124,   375,   -59,   375,   454,   606,  -373,
     606,  -373,   606,  1197,  1046,  -373,   606,  -373,  -373,  1176,
     468,   468,  -373,  -373,   403,   406,  -373,  -373,   442,  1378,
    1378,   606,   224,   224,   224,   424,   511,    84,   513,   513,
     513,   606,   597,   598,   333,  -373,  -373,    18,   606,   -53,
      18,    38,    82,   444,   445,   509,   144,  -373,   602,   224,
     606,   606,  -373,  -373,   465,   526,   604,  -373,  -373,   605,
     517,    39,  -373,    39,  -373,  -373,  1340,  1218,  -373,   606,
     841,   606,   606,   463,   466,  -373,  -373,   467,   469,   717,
     470,   481,   482,  -373,   601,   559,  -373,   550,   487,   489,
     492,  1340,   633,   -10,   431,  -373,  1340,   606,   493,  -373,
    -373,   -53,   229,  -373,   496,   515,   455,   455,   516,   -16,
     229,  1038,  -373,  1251,   518,   820,  -373,  1340,   539,   656,
    -373,  -373,  1340,   149,   521,  -373,  -373,  -373,  1340,   606,
    -373,   522,   949,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
     606,   606,   333,  -373,   681,   681,   681,   606,   606,   682,
    -373,  1340,   455,  -373,   170,   455,   455,   188,   194,   455,
    -373,  -373,  -373,   528,   528,   528,   528,   528,  -373,   528,
    -373,   529,   528,   528,   528,   675,  -373,   675,  -373,   528,
     528,   528,   572,   675,   528,   675,  -373,  -373,  -373,   590,
     591,  -373,  -373,  -373,  -373,  -373,   606,   606,   452,   581,
    -373,   631,   517,   883,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,    56,  1340,   431,  -373,   197,   225,
     227,  1340,  1340,   730,   243,    57,   257,   259,  -373,  -373,
     261,   746,  -373,  -373,  -373,  -373,  -373,  -373,   748,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,   748,  -373,
    -373,  -373,   750,   762,    31,  1251,  1340,   593,  -373,  1340,
    -373,  1340,   265,  -373,   666,  -373,   704,  -373,   813,  -373,
    -373,   606,  -373,  -373,  -373,  -373,  -373,   267,   -73,   399,
     -73,   -73,  -373,   302,   -73,   -73,   -73,   399,   399,   -73,
     -73,   -73,   304,   399,   -73,   399,   670,   721,   795,  -373,
     910,   371,  -373,  -373,   821,   -13,  -373,  -373,  -373,   455,
    -373,  -373,  1340,  -373,   912,  -373,  -373,   791,   914,  -373,
     953,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,   455,   807,   826,   983,  -373,   399,  -373,   399,
     399,   316,  -373,  -373,  -373
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
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
      40,     0,    25,    26,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
     155,     0,     0,     0,     0,   140,   139,   143,   147,   144,
       0,     0,   141,   131,     0,   290,   171,     0,    98,     0,
      85,   170,     0,     0,     0,     0,     0,     5,    38,    41,
       0,    36,     0,     0,    71,     0,     0,     0,    38,     0,
      57,    55,    56,     0,     0,     0,     0,     0,     0,    19,
      20,    18,     0,    34,     0,    32,    75,    77,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    21,    22,    24,
      11,    12,    13,    14,    15,    16,    23,   120,    85,   117,
     122,     0,     0,     0,   127,   160,   130,     0,    85,   124,
     141,   141,     0,   134,     0,   142,     0,   129,   291,   292,
       0,   231,   219,   132,    86,     0,   100,    85,   167,   169,
       0,   175,   105,     0,     0,   175,     0,   175,     0,    47,
       0,    69,     0,     0,     0,    46,     0,    50,    53,     0,
       0,     0,    48,    49,     0,     0,    35,    33,     0,    76,
      78,     0,     0,     0,     0,     0,    87,   155,   157,   157,
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -373,   956,   -28,  -113,  -373,  -373,   711,   877,  -373,   -84,
     -85,  -373,   584,   474,  -373,  -373,  -284,  -353,  -373,  -372,
    -373,  -373,   847,   -78,    48,   848,  -122,   751,  -373,  -373,
     239,  -373,  -373,  -373,   632,   708,   187,    81,  -373,  -373,
    -373,   970,   838,  -373,   -76,   196,   987,   908,   752,   542,
    -174,  -373,  -373,  -373,  -373,  -373,    54,  -373,  -373,   643,
     637,  -373,  -373,   547,  -201,  -165,  -276,  -373,   498,  -309,
    -373,  -373,  -373,   967
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,   178,   179,   180,   194,   343,   117,     9,    10,
     168,   355,   384,   465,   535,   412,   256,   322,   580,   263,
      28,    82,    83,   146,    88,    89,    90,   164,    91,   161,
     246,   162,   242,   369,   370,   234,   358,   488,    92,    11,
      22,    42,    99,    12,   327,    23,    48,   174,   331,   393,
     261,    13,    14,    30,   238,    15,    34,    16,    21,   316,
     317,   318,   524,   502,   513,   548,   549,   462,   553,   252,
     253,    17,    26,    27
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,   265,   373,   151,   427,   428,   189,   193,   150,   301,
     418,   420,    86,    53,    54,    55,    56,    57,    58,  -203,
     364,    86,   106,   107,  -205,  -204,   172,    59,    60,   124,
     203,   112,   113,   114,   187,    61,   286,   116,   243,   102,
     147,   204,   153,   175,   212,   213,   184,   185,   568,   240,
     494,   325,   124,   496,   497,   367,    64,   500,   167,    65,
     173,    66,    67,     6,   585,   145,   241,   569,   271,   272,
     430,   248,    25,    35,   154,    18,   586,   173,   154,    31,
     266,   570,   601,   181,    32,   258,   368,   182,   145,   284,
      97,   188,   267,   195,   196,   198,   571,   199,   200,   201,
     249,   326,   206,   207,    33,   211,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,    37,   285,   186,
      81,    50,   309,   103,   148,   248,   572,   248,   486,   214,
     205,   295,    51,   536,     6,   152,   287,   573,    19,   254,
    -216,   186,   574,   296,   248,   602,   302,   419,    20,   325,
     170,    52,   297,   304,   249,   335,   249,   273,   274,   231,
      75,    76,    77,    78,    79,    80,   279,    87,   215,   575,
     374,   232,   323,   249,  -203,   347,    87,   375,   167,  -205,
    -204,   289,   290,   149,   169,   365,   543,    94,   371,   332,
      38,   334,    36,     1,   303,   228,   372,   250,   251,   394,
      24,    39,   534,    29,   348,   103,     2,   603,   350,   351,
     352,    40,   208,  -217,   209,   210,   466,   257,    53,    54,
      55,    56,    57,    58,   233,    95,    41,    43,   401,    96,
     611,    98,    59,    60,    43,   382,     3,   557,   558,   100,
      61,    62,   336,   563,   337,   565,   514,   104,   340,    63,
     109,   110,   519,    44,   521,   395,   105,   396,    84,   111,
      44,    64,     4,   349,    65,    45,    66,    67,    85,    46,
       5,     6,   163,   361,    68,    47,   118,    69,   236,   154,
     366,   119,     7,   328,   329,    53,    54,    55,    56,    57,
      58,   120,   383,   385,   527,   121,   387,    70,   122,    59,
      60,   123,   392,   379,   380,  -170,   312,    61,   470,   471,
     167,   398,   165,   607,   402,   609,   610,   313,   140,   141,
     142,   143,   144,    98,   314,   190,  -170,   166,    64,   495,
     380,    65,    71,    66,    67,    72,    73,    74,   171,   421,
     315,   550,   551,   177,   554,   555,   556,   498,   329,     6,
     559,   560,   561,   499,   329,   564,   537,   538,    53,    54,
      55,    56,    57,    58,   202,    75,    76,    77,    78,    79,
      80,   473,    59,    60,   244,   596,   597,   598,   599,   227,
      61,   191,   383,   485,   539,   538,   540,   538,   230,   491,
     492,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,    64,   542,   329,    65,   235,    66,    67,    53,    54,
      55,    56,    57,    58,   237,   192,   544,   329,   545,   329,
     546,   329,    59,    60,   577,   471,   583,   584,   155,   245,
      61,   197,    75,    76,    77,    78,    79,    80,   525,   526,
     247,   529,   255,   531,   392,    53,    54,    55,    56,    57,
      58,    64,   587,   588,    65,   260,    66,    67,   262,    59,
      60,   589,   590,   591,   590,   264,   156,    61,    53,    54,
      55,    56,    57,    58,  -138,   614,   329,   269,   157,   305,
     306,   144,    59,    60,   275,   158,   359,   360,    64,   277,
      61,    65,   288,    66,    67,   159,   489,   490,   278,   292,
     115,   282,   160,   293,   294,    75,    76,    77,    78,    79,
      80,    64,   298,   582,    65,   299,    66,    67,   300,   307,
      53,    54,    55,    56,    57,    58,   308,   310,   311,   320,
     386,   321,   324,   330,    59,    60,   127,   128,   129,   130,
     131,   132,    61,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,    75,    76,    77,    78,    79,
      80,   342,   345,    64,   325,   346,    65,     6,    66,    67,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   391,   353,    53,    54,    55,    56,    57,    58,
     354,   357,    75,    76,    77,    78,    79,    80,    59,    60,
     362,   363,   376,   377,   378,   381,    61,   389,   390,    53,
      54,    55,    56,    57,    58,    75,    76,    77,    78,    79,
      80,   388,   403,    59,    60,   404,   405,    64,   406,   407,
      65,    61,    66,    67,    53,    54,    55,    56,    57,    58,
     408,   409,   410,   411,   413,   414,   528,   415,    59,    60,
     416,   422,    64,   417,   425,    65,    61,    66,    67,   137,
     138,   139,   140,   141,   142,   143,   144,    75,    76,    77,
      78,    79,    80,   426,   429,   468,   469,    64,   466,   472,
      65,   474,    66,    67,   487,   493,   501,   508,   125,   126,
     127,   128,   129,   130,   131,   132,   530,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   125,
     126,   127,   128,   129,   130,   131,   132,   512,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     518,    75,    76,    77,    78,    79,    80,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   522,   523,
     541,   547,   552,   326,   276,   566,    75,    76,    77,    78,
      79,    80,   128,   129,   130,   131,   132,   567,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     578,    75,    76,    77,    78,    79,    80,   125,   126,   127,
     128,   129,   130,   131,   132,   579,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   125,   126,
     127,   128,   129,   130,   131,   132,   581,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   592,
     125,   126,   127,   128,   129,   130,   131,   132,   268,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   125,   126,   127,   128,   129,   130,   131,   132,   268,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   125,   126,   127,   128,   129,   130,   131,   132,
     593,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   125,   126,   127,   128,   129,   130,   131,
     132,   594,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   595,   605,   600,   604,   606,   399,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   125,
     126,   127,   128,   129,   130,   131,   132,   280,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     138,   139,   140,   141,   142,   143,   144,   608,   281,   125,
     126,   127,   128,   129,   130,   131,   132,   329,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     467,   503,   504,   505,   506,   612,   507,   613,    93,   509,
     510,   511,   344,   183,   484,   229,   515,   516,   517,   576,
     400,   520,   239,   423,   319,   356,   475,   476,   101,   259,
     477,    49,   478,   176,   532,   424,   562,   431,   333,   108,
       0,   283,     0,     0,     0,     0,     0,     0,     0,   479,
     480,     0,   481,     0,   125,   126,   127,   128,   129,   130,
     131,   132,   533,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,   125,   126,   127,   128,
     129,   130,   131,   132,   115,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     0,   432,     0,
     433,     0,   434,   435,     0,     0,     0,     0,     0,     0,
       0,   436,     0,     0,     0,     0,   482,   483,     0,     0,
       0,     0,     0,     0,   437,   438,   439,   440,     0,   441,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   443,     0,     0,     0,     0,     0,     0,
     444,     0,     0,     0,   445,     0,     0,     0,     0,   446,
     447,   448,   449,     0,     0,     0,     0,     0,     0,     0,
       0,   450,     0,     0,     0,     0,   270,     0,     0,     0,
       0,   451,   452,     0,   453,   454,     0,   455,   456,     0,
       0,     0,   457,   458,     0,     0,     0,     0,   339,   459,
       0,   460,     0,     0,     0,   461,   125,   126,   127,   128,
     129,   130,   131,   132,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   125,   126,   127,
     128,   129,   130,   131,   132,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   125,   126,
     127,   128,   129,   130,   131,   132,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
       0,     0,   341,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,   131,   132,   338,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,     0,   124,     0,     0,     0,   463,     0,
     397,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,     0,     0,   464,     0,     0,     0,     0,
     145,   125,   126,   127,   128,   129,   130,   131,   132,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,     0,     0,     0,     0,     0,     0,   291,
     125,   126,   127,   128,   129,   130,   131,   132,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   126,   127,   128,   129,   130,   131,   132,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,  -218,  -218,  -218,  -218,   132,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144
};

static const yytype_int16 yycheck[] =
{
      28,   175,   311,    87,   376,   377,   119,   120,    86,    20,
      20,   364,     3,     3,     4,     5,     6,     7,     8,     3,
     304,     3,    50,    51,     3,     3,   124,    17,    18,     3,
       6,    59,    60,    61,   118,    25,     6,    65,   160,    76,
      76,    17,   124,   124,    34,    35,    72,    73,    17,    98,
     422,   110,     3,   425,   426,   108,    46,   429,   144,    49,
     158,    51,    52,   125,   137,    39,   115,    36,    72,    73,
     379,    87,     8,    19,   160,    55,   149,   158,   160,     0,
     142,    50,    95,   111,   156,   170,   139,   115,    39,   202,
      36,   119,   176,   121,   122,   123,    65,   125,   126,   127,
     116,   160,   130,   131,    89,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,     3,   202,   145,
     148,     9,   244,   160,   160,    87,    95,    87,   412,   119,
     106,   215,    20,   486,   125,    87,   106,   106,   118,   167,
     156,   145,   111,   228,    87,   158,   157,   157,   128,   110,
     102,   160,   230,   238,   116,   268,   116,   185,   186,    75,
     150,   151,   152,   153,   154,   155,   194,   158,   158,   138,
      88,    87,   257,   116,   158,   288,   158,    95,   144,   158,
     158,   209,   210,   157,   139,   307,   495,   150,   310,   265,
      76,   267,   131,    47,   160,   147,   158,   157,   158,   160,
       4,    87,   146,     7,   288,   160,    60,   579,   292,   293,
     294,    97,    13,   156,    15,    16,   160,   169,     3,     4,
       5,     6,     7,     8,   140,     3,   112,    56,   341,     3,
     602,   157,    17,    18,    56,   319,    90,   513,   514,     3,
      25,    26,   270,   519,   272,   521,   447,     3,   276,    34,
     157,   158,   453,    82,   455,   331,     3,   333,    87,     9,
      82,    46,   116,   291,    49,    87,    51,    52,    97,    91,
     124,   125,    39,   301,    59,    97,   158,    62,   159,   160,
     308,   158,   136,   159,   160,     3,     4,     5,     6,     7,
       8,   158,   320,   321,   468,   158,   324,    82,   158,    17,
      18,   158,   330,   159,   160,   139,    77,    25,   159,   160,
     144,   339,     3,   589,   342,   591,   592,    88,    26,    27,
      28,    29,    30,   157,    95,    43,   160,    26,    46,   159,
     160,    49,   117,    51,    52,   120,   121,   122,     3,   367,
     111,   506,   507,     3,   509,   510,   511,   159,   160,   125,
     515,   516,   517,   159,   160,   520,   159,   160,     3,     4,
       5,     6,     7,     8,   158,   150,   151,   152,   153,   154,
     155,   399,    17,    18,    94,     4,     5,     6,     7,     3,
      25,    99,   410,   411,   159,   160,   159,   160,     3,   417,
     418,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    46,   159,   160,    49,   159,    51,    52,     3,     4,
       5,     6,     7,     8,     3,   133,   159,   160,   159,   160,
     159,   160,    17,    18,   159,   160,   159,   160,    48,   107,
      25,    26,   150,   151,   152,   153,   154,   155,   466,   467,
       3,   469,   109,   471,   472,     3,     4,     5,     6,     7,
       8,    46,    53,    54,    49,     3,    51,    52,     3,    17,
      18,   159,   160,   159,   160,   142,    86,    25,     3,     4,
       5,     6,     7,     8,    94,   159,   160,   159,    98,   240,
     241,    30,    17,    18,   159,   105,   299,   300,    46,   159,
      25,    49,   158,    51,    52,   115,   415,   416,   159,   158,
     145,   159,   122,   158,   158,   150,   151,   152,   153,   154,
     155,    46,    95,   541,    49,    95,    51,    52,    95,    94,
       3,     4,     5,     6,     7,     8,   108,    94,     3,    41,
      65,   100,    20,   158,    17,    18,    12,    13,    14,    15,
      16,    17,    25,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   150,   151,   152,   153,   154,
     155,    93,   159,    46,   110,   159,    49,   125,    51,    52,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    65,   159,     3,     4,     5,     6,     7,     8,
      79,    78,   150,   151,   152,   153,   154,   155,    17,    18,
       3,     3,   158,   158,    95,     3,    25,     3,     3,     3,
       4,     5,     6,     7,     8,   150,   151,   152,   153,   154,
     155,    95,   159,    17,    18,   159,   159,    46,   159,   159,
      49,    25,    51,    52,     3,     4,     5,     6,     7,     8,
     159,   159,    41,    84,    94,   158,    65,   158,    17,    18,
     158,   158,    46,    20,   158,    49,    25,    51,    52,    23,
      24,    25,    26,    27,    28,    29,    30,   150,   151,   152,
     153,   154,   155,   158,   158,   136,    20,    46,   160,   158,
      49,   159,    51,    52,     3,     3,   158,   158,    10,    11,
      12,    13,    14,    15,    16,    17,    65,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    42,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     158,   150,   151,   152,   153,   154,   155,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   158,   158,
      20,     5,     4,   160,    76,     5,   150,   151,   152,   153,
     154,   155,    13,    14,    15,    16,    17,     5,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     114,   150,   151,   152,   153,   154,   155,    10,    11,    12,
      13,    14,    15,    16,    17,    91,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,     3,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   159,
      10,    11,    12,    13,    14,    15,    16,    17,   160,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,   160,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    17,
     159,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      17,   106,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     4,   124,    95,     5,     4,    78,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,   160,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      24,    25,    26,    27,    28,    29,    30,     4,   160,    10,
      11,    12,    13,    14,    15,    16,    17,   160,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     160,   434,   435,   436,   437,   159,   439,     4,    32,   442,
     443,   444,   281,   116,   410,   148,   449,   450,   451,   525,
     159,   454,   154,   371,   253,   297,    57,    58,    38,   171,
      61,    24,    63,   105,   472,   372,   518,   380,   266,    52,
      -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    83,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,   159,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,   145,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    40,    -1,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,   123,   124,    -1,   126,   127,    -1,   129,   130,    -1,
      -1,    -1,   134,   135,    -1,    -1,    -1,    -1,   132,   141,
      -1,   143,    -1,    -1,    -1,   147,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    72,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,     3,    -1,    -1,    -1,    37,    -1,
      72,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      39,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
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
      15,    16,    17,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    39,   184,    76,   160,   157,
     184,   170,   185,   124,   160,    48,    86,    98,   105,   115,
     122,   190,   192,    39,   188,     3,    26,   144,   171,   139,
     185,     3,   124,   158,   208,   124,   208,     3,   163,   164,
     165,   163,   163,   168,    72,    73,   145,   170,   163,   164,
      43,    99,   133,   164,   166,   163,   163,    26,   163,   163,
     163,   163,   158,     6,    17,   106,   163,   163,    13,    15,
      16,   163,    34,    35,   119,   158,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,     3,   185,   183,
       3,    75,    87,   140,   196,   159,   159,     3,   215,   186,
      98,   115,   193,   187,    94,   107,   191,     3,    87,   116,
     157,   158,   230,   231,   163,   109,   177,   185,   171,   203,
       3,   211,     3,   180,   142,   211,   142,   170,   160,   159,
     132,    72,    73,   163,   163,   159,    76,   159,   159,   163,
     160,   160,   159,   159,   164,   170,     6,   106,   158,   163,
     163,    38,   158,   158,   158,   170,   171,   184,    95,    95,
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
     226,   226,   229,   227,   226,   227,     5,     5,    17,    36,
      50,    65,    95,   106,   111,   138,   174,   159,   114,    91,
     179,     3,   163,   159,   160,   137,   149,    53,    54,   159,
     160,   159,   159,   159,   106,     4,     4,     5,     6,     7,
      95,    95,   158,   180,     5,   124,     4,   227,     4,   227,
     227,   180,   159,     4,   159
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* expr: NAME  */
#line 244 "evoparser.y"
    {
        emit("NAME %s", (yyvsp[0].strval));
        GetSelection((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 1914 "evoparser.tab.c"
    break;

  case 5: /* expr: NAME '.' NAME  */
#line 249 "evoparser.y"
                                                                                { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 1920 "evoparser.tab.c"
    break;

  case 6: /* expr: USERVAR  */
#line 250 "evoparser.y"
                                                                                { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 1926 "evoparser.tab.c"
    break;

  case 7: /* expr: STRING  */
#line 252 "evoparser.y"
    {
        char *sv = (yyvsp[0].strval);
        int slen = (int)strlen(sv);
        emit("STRING %s", sv);
        /* Strip surrounding quotes before insertion */
        if (slen >= 2 && (sv[0] == '\'' || sv[0] == '"')) {
            char stripped[1024];
            strncpy(stripped, sv + 1, slen - 2);
            stripped[slen - 2] = '\0';
            GetInsertions(stripped);
        } else {
            GetInsertions(sv);
        }
        free(sv);
    }
#line 1936 "evoparser.tab.c"
    break;

  case 8: /* expr: INTNUM  */
#line 257 "evoparser.y"
                                                                                { emit("NUMBER %d", (yyvsp[0].intval)); { char buf[32]; sprintf(buf, "%d", (yyvsp[0].intval)); GetInsertions(buf); } }
#line 1942 "evoparser.tab.c"
    break;

  case 9: /* expr: APPROXNUM  */
#line 258 "evoparser.y"
                                                                                { emit("FLOAT %g", (yyvsp[0].floatval)); { char buf[64]; sprintf(buf, "%g", (yyvsp[0].floatval)); GetInsertions(buf); } }
#line 1948 "evoparser.tab.c"
    break;

  case 10: /* expr: BOOL  */
#line 259 "evoparser.y"
                                                                                { emit("BOOL %d", (yyvsp[0].intval)); }
#line 1954 "evoparser.tab.c"
    break;

  case 11: /* expr: expr '+' expr  */
#line 262 "evoparser.y"
                                                                                { emit("ADD"); }
#line 1960 "evoparser.tab.c"
    break;

  case 12: /* expr: expr '-' expr  */
#line 263 "evoparser.y"
                                                                                { emit("SUB"); }
#line 1966 "evoparser.tab.c"
    break;

  case 13: /* expr: expr '*' expr  */
#line 264 "evoparser.y"
                                                                                { emit("MUL"); }
#line 1972 "evoparser.tab.c"
    break;

  case 14: /* expr: expr '/' expr  */
#line 265 "evoparser.y"
                                                                                { emit("DIV"); }
#line 1978 "evoparser.tab.c"
    break;

  case 15: /* expr: expr '%' expr  */
#line 266 "evoparser.y"
                                                                                { emit("MOD"); }
#line 1984 "evoparser.tab.c"
    break;

  case 16: /* expr: expr MOD expr  */
#line 267 "evoparser.y"
                                                                                { emit("MOD"); }
#line 1990 "evoparser.tab.c"
    break;

  case 17: /* expr: '-' expr  */
#line 268 "evoparser.y"
                                                                                { emit("NEG"); }
#line 1996 "evoparser.tab.c"
    break;

  case 18: /* expr: expr ANDOP expr  */
#line 269 "evoparser.y"
                                                                                { emit("AND"); }
#line 2002 "evoparser.tab.c"
    break;

  case 19: /* expr: expr OR expr  */
#line 270 "evoparser.y"
                                                                                { emit("OR"); }
#line 2008 "evoparser.tab.c"
    break;

  case 20: /* expr: expr XOR expr  */
#line 271 "evoparser.y"
                                                                                { emit("XOR"); }
#line 2014 "evoparser.tab.c"
    break;

  case 21: /* expr: expr '|' expr  */
#line 272 "evoparser.y"
                                                                                { emit("BITOR"); }
#line 2020 "evoparser.tab.c"
    break;

  case 22: /* expr: expr '&' expr  */
#line 273 "evoparser.y"
                                                                                { emit("BITAND"); }
#line 2026 "evoparser.tab.c"
    break;

  case 23: /* expr: expr '^' expr  */
#line 274 "evoparser.y"
                                                                                { emit("BITXOR"); }
#line 2032 "evoparser.tab.c"
    break;

  case 24: /* expr: expr SHIFT expr  */
#line 275 "evoparser.y"
                                                                                { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2038 "evoparser.tab.c"
    break;

  case 25: /* expr: NOT expr  */
#line 276 "evoparser.y"
                                                                                { emit("NOT"); }
#line 2044 "evoparser.tab.c"
    break;

  case 26: /* expr: '!' expr  */
#line 277 "evoparser.y"
                                                                                { emit("NOT"); }
#line 2050 "evoparser.tab.c"
    break;

  case 27: /* expr: expr COMPARISON expr  */
#line 279 "evoparser.y"
    {
        emit("CMP %d", (yyvsp[-1].subtok));
    }
#line 2058 "evoparser.tab.c"
    break;

  case 28: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 283 "evoparser.y"
                                                                                { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2064 "evoparser.tab.c"
    break;

  case 29: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 284 "evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2070 "evoparser.tab.c"
    break;

  case 30: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 285 "evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2076 "evoparser.tab.c"
    break;

  case 31: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 286 "evoparser.y"
                                                                                { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2082 "evoparser.tab.c"
    break;

  case 32: /* expr: expr IS NULLX  */
#line 289 "evoparser.y"
                                                                                { emit("ISNULL"); }
#line 2088 "evoparser.tab.c"
    break;

  case 33: /* expr: expr IS NOT NULLX  */
#line 290 "evoparser.y"
                                                                                { emit("ISNULL"); emit("NOT"); }
#line 2094 "evoparser.tab.c"
    break;

  case 34: /* expr: expr IS BOOL  */
#line 291 "evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2100 "evoparser.tab.c"
    break;

  case 35: /* expr: expr IS NOT BOOL  */
#line 292 "evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2106 "evoparser.tab.c"
    break;

  case 36: /* expr: USERVAR ASSIGN expr  */
#line 293 "evoparser.y"
                                                                                { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2112 "evoparser.tab.c"
    break;

  case 37: /* expr: expr BETWEEN expr AND expr  */
#line 296 "evoparser.y"
                                                                                { emit("BETWEEN"); }
#line 2118 "evoparser.tab.c"
    break;

  case 38: /* val_list: expr  */
#line 299 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2124 "evoparser.tab.c"
    break;

  case 39: /* val_list: expr ',' val_list  */
#line 300 "evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2130 "evoparser.tab.c"
    break;

  case 40: /* opt_val_list: %empty  */
#line 303 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2136 "evoparser.tab.c"
    break;

  case 42: /* expr: expr IN '(' val_list ')'  */
#line 307 "evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2142 "evoparser.tab.c"
    break;

  case 43: /* expr: expr NOT IN '(' val_list ')'  */
#line 308 "evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2148 "evoparser.tab.c"
    break;

  case 44: /* expr: expr IN '(' select_stmt ')'  */
#line 309 "evoparser.y"
                                                                                { emit("CMPANYSELECT 4"); }
#line 2154 "evoparser.tab.c"
    break;

  case 45: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 310 "evoparser.y"
                                                                                { emit("CMPALLSELECT 3"); }
#line 2160 "evoparser.tab.c"
    break;

  case 46: /* expr: EXISTS '(' select_stmt ')'  */
#line 311 "evoparser.y"
                                                                                { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2166 "evoparser.tab.c"
    break;

  case 47: /* expr: NAME '(' opt_val_list ')'  */
#line 315 "evoparser.y"
                                                                                { emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2172 "evoparser.tab.c"
    break;

  case 48: /* expr: FCOUNT '(' '*' ')'  */
#line 319 "evoparser.y"
                                                                                { emit("COUNTALL"); }
#line 2178 "evoparser.tab.c"
    break;

  case 49: /* expr: FCOUNT '(' expr ')'  */
#line 320 "evoparser.y"
                                                                                { emit(" CALL 1 COUNT"); }
#line 2184 "evoparser.tab.c"
    break;

  case 50: /* expr: FSUBSTRING '(' val_list ')'  */
#line 322 "evoparser.y"
                                                                                { emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2190 "evoparser.tab.c"
    break;

  case 51: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 323 "evoparser.y"
                                                                                { emit("CALL 2 SUBSTR"); }
#line 2196 "evoparser.tab.c"
    break;

  case 52: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 324 "evoparser.y"
                                                                                { emit("CALL 3 SUBSTR"); }
#line 2202 "evoparser.tab.c"
    break;

  case 53: /* expr: FTRIM '(' val_list ')'  */
#line 325 "evoparser.y"
                                                                                { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2208 "evoparser.tab.c"
    break;

  case 54: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 326 "evoparser.y"
                                                                                { emit("CALL 3 TRIM"); }
#line 2214 "evoparser.tab.c"
    break;

  case 55: /* trim_ltb: LEADING  */
#line 329 "evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2220 "evoparser.tab.c"
    break;

  case 56: /* trim_ltb: TRAILING  */
#line 330 "evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2226 "evoparser.tab.c"
    break;

  case 57: /* trim_ltb: BOTH  */
#line 331 "evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2232 "evoparser.tab.c"
    break;

  case 58: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 334 "evoparser.y"
                                                                                { emit("CALL 3 DATE_ADD"); }
#line 2238 "evoparser.tab.c"
    break;

  case 59: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 335 "evoparser.y"
                                                                                { emit("CALL 3 DATE_SUB"); }
#line 2244 "evoparser.tab.c"
    break;

  case 60: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 338 "evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2250 "evoparser.tab.c"
    break;

  case 61: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 339 "evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2256 "evoparser.tab.c"
    break;

  case 62: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 340 "evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2262 "evoparser.tab.c"
    break;

  case 63: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 341 "evoparser.y"
                                                                                { emit("NUMBER 4"); }
#line 2268 "evoparser.tab.c"
    break;

  case 64: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 342 "evoparser.y"
                                                                                { emit("NUMBER 5"); }
#line 2274 "evoparser.tab.c"
    break;

  case 65: /* interval_exp: INTERVAL expr YEAR  */
#line 343 "evoparser.y"
                                                                                { emit("NUMBER 6"); }
#line 2280 "evoparser.tab.c"
    break;

  case 66: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 344 "evoparser.y"
                                                                                { emit("NUMBER 7"); }
#line 2286 "evoparser.tab.c"
    break;

  case 67: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 345 "evoparser.y"
                                                                                { emit("NUMBER 8"); }
#line 2292 "evoparser.tab.c"
    break;

  case 68: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 346 "evoparser.y"
                                                                                { emit("NUMBER 9"); }
#line 2298 "evoparser.tab.c"
    break;

  case 69: /* expr: CASE expr case_list END  */
#line 349 "evoparser.y"
                                                                                { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2304 "evoparser.tab.c"
    break;

  case 70: /* expr: CASE expr case_list ELSE expr END  */
#line 350 "evoparser.y"
                                                                                { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2310 "evoparser.tab.c"
    break;

  case 71: /* expr: CASE case_list END  */
#line 351 "evoparser.y"
                                                                                { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2316 "evoparser.tab.c"
    break;

  case 72: /* expr: CASE case_list ELSE expr END  */
#line 352 "evoparser.y"
                                                                                { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2322 "evoparser.tab.c"
    break;

  case 73: /* case_list: WHEN expr THEN expr  */
#line 355 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2328 "evoparser.tab.c"
    break;

  case 74: /* case_list: case_list WHEN expr THEN expr  */
#line 356 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2334 "evoparser.tab.c"
    break;

  case 75: /* expr: expr LIKE expr  */
#line 359 "evoparser.y"
                                                                                { emit("LIKE"); }
#line 2340 "evoparser.tab.c"
    break;

  case 76: /* expr: expr NOT LIKE expr  */
#line 360 "evoparser.y"
                                                                                { emit("LIKE"); emit("NOT"); }
#line 2346 "evoparser.tab.c"
    break;

  case 77: /* expr: expr REGEXP expr  */
#line 363 "evoparser.y"
                                                                                { emit("REGEXP"); }
#line 2352 "evoparser.tab.c"
    break;

  case 78: /* expr: expr NOT REGEXP expr  */
#line 364 "evoparser.y"
                                                                                { emit("REGEXP"); emit("NOT"); }
#line 2358 "evoparser.tab.c"
    break;

  case 79: /* expr: CURRENT_TIMESTAMP  */
#line 367 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2364 "evoparser.tab.c"
    break;

  case 80: /* expr: CURRENT_DATE  */
#line 368 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2370 "evoparser.tab.c"
    break;

  case 81: /* expr: CURRENT_TIME  */
#line 369 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2376 "evoparser.tab.c"
    break;

  case 82: /* stmt: select_stmt  */
#line 374 "evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[0].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    }
#line 2388 "evoparser.tab.c"
    break;

  case 83: /* select_stmt: SELECT select_opts select_expr_list  */
#line 383 "evoparser.y"
                                                                                { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2394 "evoparser.tab.c"
    break;

  case 84: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 388 "evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval));
        if ((yyvsp[-8].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    }
#line 2406 "evoparser.tab.c"
    break;

  case 86: /* opt_where: WHERE expr  */
#line 398 "evoparser.y"
                                                                                { emit("WHERE"); }
#line 2412 "evoparser.tab.c"
    break;

  case 88: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 400 "evoparser.y"
                                                                                { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2418 "evoparser.tab.c"
    break;

  case 89: /* groupby_list: expr opt_asc_desc  */
#line 403 "evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2424 "evoparser.tab.c"
    break;

  case 90: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 404 "evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2430 "evoparser.tab.c"
    break;

  case 91: /* opt_asc_desc: %empty  */
#line 407 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2436 "evoparser.tab.c"
    break;

  case 92: /* opt_asc_desc: ASC  */
#line 408 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2442 "evoparser.tab.c"
    break;

  case 93: /* opt_asc_desc: DESC  */
#line 409 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2448 "evoparser.tab.c"
    break;

  case 94: /* opt_with_rollup: %empty  */
#line 412 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2454 "evoparser.tab.c"
    break;

  case 95: /* opt_with_rollup: WITH ROLLUP  */
#line 413 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2460 "evoparser.tab.c"
    break;

  case 97: /* opt_having: HAVING expr  */
#line 417 "evoparser.y"
                                                                                { emit("HAVING"); }
#line 2466 "evoparser.tab.c"
    break;

  case 99: /* opt_orderby: ORDER BY groupby_list  */
#line 421 "evoparser.y"
                                                                                { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2472 "evoparser.tab.c"
    break;

  case 101: /* opt_limit: LIMIT expr  */
#line 424 "evoparser.y"
                                                                                { emit("LIMIT 1"); }
#line 2478 "evoparser.tab.c"
    break;

  case 102: /* opt_limit: LIMIT expr ',' expr  */
#line 425 "evoparser.y"
                                                                                { emit("LIMIT 2"); }
#line 2484 "evoparser.tab.c"
    break;

  case 104: /* opt_into_list: INTO column_list  */
#line 429 "evoparser.y"
                                                                                { emit("INTO %d", (yyvsp[0].intval)); }
#line 2490 "evoparser.tab.c"
    break;

  case 105: /* column_list: NAME  */
#line 432 "evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2496 "evoparser.tab.c"
    break;

  case 106: /* column_list: column_list ',' NAME  */
#line 433 "evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2502 "evoparser.tab.c"
    break;

  case 107: /* select_opts: %empty  */
#line 436 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2508 "evoparser.tab.c"
    break;

  case 108: /* select_opts: select_opts ALL  */
#line 437 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2514 "evoparser.tab.c"
    break;

  case 109: /* select_opts: select_opts DISTINCT  */
#line 438 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2520 "evoparser.tab.c"
    break;

  case 110: /* select_opts: select_opts DISTINCTROW  */
#line 439 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2526 "evoparser.tab.c"
    break;

  case 111: /* select_opts: select_opts HIGH_PRIORITY  */
#line 440 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2532 "evoparser.tab.c"
    break;

  case 112: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 441 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2538 "evoparser.tab.c"
    break;

  case 113: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 442 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2544 "evoparser.tab.c"
    break;

  case 114: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 443 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2550 "evoparser.tab.c"
    break;

  case 115: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 444 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[-1].intval) | 0200; }
#line 2556 "evoparser.tab.c"
    break;

  case 116: /* select_expr_list: select_expr  */
#line 447 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2562 "evoparser.tab.c"
    break;

  case 117: /* select_expr_list: select_expr_list ',' select_expr  */
#line 448 "evoparser.y"
                                                                                {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2568 "evoparser.tab.c"
    break;

  case 118: /* select_expr_list: '*'  */
#line 450 "evoparser.y"
    {
        emit("SELECTALL");
        (yyval.intval) = 3;
    }
#line 2577 "evoparser.tab.c"
    break;

  case 120: /* opt_as_alias: AS NAME  */
#line 457 "evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2583 "evoparser.tab.c"
    break;

  case 121: /* opt_as_alias: NAME  */
#line 458 "evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2589 "evoparser.tab.c"
    break;

  case 123: /* table_references: table_reference  */
#line 462 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2595 "evoparser.tab.c"
    break;

  case 124: /* table_references: table_references ',' table_reference  */
#line 463 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2601 "evoparser.tab.c"
    break;

  case 127: /* table_factor: NAME opt_as_alias index_hint  */
#line 472 "evoparser.y"
    {
        emit("TABLE %s", (yyvsp[-2].strval));
        GetSelTableName((yyvsp[-2].strval));
        free((yyvsp[-2].strval));
    }
#line 2611 "evoparser.tab.c"
    break;

  case 128: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 477 "evoparser.y"
                                                                                { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2617 "evoparser.tab.c"
    break;

  case 129: /* table_factor: table_subquery opt_as NAME  */
#line 478 "evoparser.y"
                                                                                { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2623 "evoparser.tab.c"
    break;

  case 130: /* table_factor: '(' table_references ')'  */
#line 479 "evoparser.y"
                                                                                { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2629 "evoparser.tab.c"
    break;

  case 133: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 488 "evoparser.y"
                                                                                { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2635 "evoparser.tab.c"
    break;

  case 134: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 490 "evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2641 "evoparser.tab.c"
    break;

  case 135: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 492 "evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2647 "evoparser.tab.c"
    break;

  case 136: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 494 "evoparser.y"
                                                                                { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2653 "evoparser.tab.c"
    break;

  case 137: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 496 "evoparser.y"
                                                                                { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2659 "evoparser.tab.c"
    break;

  case 138: /* opt_inner_cross: %empty  */
#line 499 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2665 "evoparser.tab.c"
    break;

  case 139: /* opt_inner_cross: INNER  */
#line 500 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2671 "evoparser.tab.c"
    break;

  case 140: /* opt_inner_cross: CROSS  */
#line 501 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2677 "evoparser.tab.c"
    break;

  case 141: /* opt_outer: %empty  */
#line 504 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2683 "evoparser.tab.c"
    break;

  case 142: /* opt_outer: OUTER  */
#line 505 "evoparser.y"
                                                                                {(yyval.intval) = 4; }
#line 2689 "evoparser.tab.c"
    break;

  case 143: /* left_or_right: LEFT  */
#line 508 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2695 "evoparser.tab.c"
    break;

  case 144: /* left_or_right: RIGHT  */
#line 509 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2701 "evoparser.tab.c"
    break;

  case 145: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 512 "evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2707 "evoparser.tab.c"
    break;

  case 146: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 513 "evoparser.y"
                                                                                { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2713 "evoparser.tab.c"
    break;

  case 147: /* opt_left_or_right_outer: %empty  */
#line 514 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2719 "evoparser.tab.c"
    break;

  case 150: /* join_condition: ON expr  */
#line 521 "evoparser.y"
                                                                                { emit("ONEXPR"); }
#line 2725 "evoparser.tab.c"
    break;

  case 151: /* join_condition: USING '(' column_list ')'  */
#line 522 "evoparser.y"
                                                                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 2731 "evoparser.tab.c"
    break;

  case 152: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 527 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 2737 "evoparser.tab.c"
    break;

  case 153: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 529 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 2743 "evoparser.tab.c"
    break;

  case 154: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 531 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 2749 "evoparser.tab.c"
    break;

  case 156: /* opt_for_join: FOR JOIN  */
#line 535 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2755 "evoparser.tab.c"
    break;

  case 157: /* opt_for_join: %empty  */
#line 536 "evoparser.y"
            { (yyval.intval) = 0; }
#line 2761 "evoparser.tab.c"
    break;

  case 158: /* index_list: NAME  */
#line 539 "evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2767 "evoparser.tab.c"
    break;

  case 159: /* index_list: index_list ',' NAME  */
#line 540 "evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2773 "evoparser.tab.c"
    break;

  case 160: /* table_subquery: '(' select_stmt ')'  */
#line 543 "evoparser.y"
                                                                                { emit("SUBQUERY"); }
#line 2779 "evoparser.tab.c"
    break;

  case 161: /* stmt: delete_stmt  */
#line 548 "evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    }
#line 2788 "evoparser.tab.c"
    break;

  case 162: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 556 "evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval));
        GetDelTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 2798 "evoparser.tab.c"
    break;

  case 163: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 563 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2804 "evoparser.tab.c"
    break;

  case 164: /* delete_opts: delete_opts QUICK  */
#line 564 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2810 "evoparser.tab.c"
    break;

  case 165: /* delete_opts: delete_opts IGNORE  */
#line 565 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2816 "evoparser.tab.c"
    break;

  case 166: /* delete_opts: %empty  */
#line 566 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2822 "evoparser.tab.c"
    break;

  case 167: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 570 "evoparser.y"
                                                                                { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2828 "evoparser.tab.c"
    break;

  case 168: /* delete_list: NAME opt_dot_star  */
#line 573 "evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2834 "evoparser.tab.c"
    break;

  case 169: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 574 "evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2840 "evoparser.tab.c"
    break;

  case 172: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 579 "evoparser.y"
                                                                                        { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2846 "evoparser.tab.c"
    break;

  case 173: /* stmt: insert_stmt  */
#line 583 "evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    }
#line 2855 "evoparser.tab.c"
    break;

  case 174: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 590 "evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval));
        GetInsertionTableName((yyvsp[-4].strval));
        free((yyvsp[-4].strval));
    }
#line 2865 "evoparser.tab.c"
    break;

  case 176: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 598 "evoparser.y"
                                          { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2871 "evoparser.tab.c"
    break;

  case 177: /* insert_opts: %empty  */
#line 601 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2877 "evoparser.tab.c"
    break;

  case 178: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 602 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2883 "evoparser.tab.c"
    break;

  case 179: /* insert_opts: insert_opts DELAYED  */
#line 603 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2889 "evoparser.tab.c"
    break;

  case 180: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 604 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2895 "evoparser.tab.c"
    break;

  case 181: /* insert_opts: insert_opts IGNORE  */
#line 605 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2901 "evoparser.tab.c"
    break;

  case 185: /* opt_col_names: '(' column_list ')'  */
#line 612 "evoparser.y"
                                                                                { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 2907 "evoparser.tab.c"
    break;

  case 186: /* insert_vals_list: '(' insert_vals ')'  */
#line 615 "evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2913 "evoparser.tab.c"
    break;

  case 187: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 616 "evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2919 "evoparser.tab.c"
    break;

  case 188: /* insert_vals: expr  */
#line 619 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2925 "evoparser.tab.c"
    break;

  case 189: /* insert_vals: DEFAULT  */
#line 620 "evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = 1; }
#line 2931 "evoparser.tab.c"
    break;

  case 190: /* insert_vals: insert_vals ',' expr  */
#line 621 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2937 "evoparser.tab.c"
    break;

  case 191: /* insert_vals: insert_vals ',' DEFAULT  */
#line 622 "evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2943 "evoparser.tab.c"
    break;

  case 192: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 626 "evoparser.y"
                                                                                { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2949 "evoparser.tab.c"
    break;

  case 193: /* insert_asgn_list: NAME COMPARISON expr  */
#line 629 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2955 "evoparser.tab.c"
    break;

  case 194: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 630 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2961 "evoparser.tab.c"
    break;

  case 195: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 631 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2967 "evoparser.tab.c"
    break;

  case 196: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 632 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2973 "evoparser.tab.c"
    break;

  case 197: /* stmt: replace_stmt  */
#line 638 "evoparser.y"
                                                                                { emit("STMT"); }
#line 2979 "evoparser.tab.c"
    break;

  case 198: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 644 "evoparser.y"
                                                                                { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2985 "evoparser.tab.c"
    break;

  case 199: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 649 "evoparser.y"
                                                                                { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2991 "evoparser.tab.c"
    break;

  case 200: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 654 "evoparser.y"
                                                                                { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2997 "evoparser.tab.c"
    break;

  case 201: /* stmt: update_stmt  */
#line 659 "evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    }
#line 3006 "evoparser.tab.c"
    break;

  case 202: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 666 "evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval));
    }
#line 3014 "evoparser.tab.c"
    break;

  case 203: /* update_opts: %empty  */
#line 671 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3020 "evoparser.tab.c"
    break;

  case 204: /* update_opts: insert_opts LOW_PRIORITY  */
#line 672 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3026 "evoparser.tab.c"
    break;

  case 205: /* update_opts: insert_opts IGNORE  */
#line 673 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3032 "evoparser.tab.c"
    break;

  case 206: /* update_asgn_list: NAME COMPARISON expr  */
#line 678 "evoparser.y"
    {
        if ((yyvsp[-1].subtok) != 4) {
            yyerror("bad update assignment to %s", (yyvsp[-2].strval));
            YYERROR; 
        }
        emit("ASSIGN1 %s", (yyvsp[-2].strval));
        GetUpdateColumnName((yyvsp[-2].strval)); /*for first column name after the SET Terminal symbol*/
        free((yyvsp[-2].strval));
        (yyval.intval) = 1;
    }
#line 3047 "evoparser.tab.c"
    break;

  case 207: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 689 "evoparser.y"
    {
        if ((yyvsp[-1].subtok) != 4) {
            yyerror("bad update assignment to %s", (yyvsp[-4].strval));
            YYERROR;
        }
        emit("ASSIGN2 %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
        free((yyvsp[-4].strval));
        free((yyvsp[-2].strval));
        (yyval.intval) = 1;
    }
#line 3062 "evoparser.tab.c"
    break;

  case 208: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 700 "evoparser.y"
    {
        if ((yyvsp[-1].subtok) != 4) {
            yyerror("bad update assignment to %s", (yyvsp[-2].strval));
            YYERROR;
        }
        emit("ASSIGN3 %s", (yyvsp[-2].strval));
        GetUpdateColumnName((yyvsp[-2].strval)); /*for other column names*/
        free((yyvsp[-2].strval));
        (yyval.intval) = (yyvsp[-4].intval) + 1;
    }
#line 3077 "evoparser.tab.c"
    break;

  case 209: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 711 "evoparser.y"
    {
        if ((yyvsp[-1].subtok) != 4) {
            yyerror("bad update assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval));
            YYERROR;
        }
        emit("ASSIGN4 %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
        free((yyvsp[-4].strval));
        free((yyvsp[-2].strval));
        (yyval.intval) = 1;
    }
#line 3092 "evoparser.tab.c"
    break;

  case 210: /* stmt: create_database_stmt  */
#line 724 "evoparser.y"
                                                                                { emit("STMT"); }
#line 3098 "evoparser.tab.c"
    break;

  case 211: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 728 "evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3104 "evoparser.tab.c"
    break;

  case 212: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 729 "evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3110 "evoparser.tab.c"
    break;

  case 213: /* opt_if_not_exists: %empty  */
#line 732 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3116 "evoparser.tab.c"
    break;

  case 214: /* opt_if_not_exists: IF EXISTS  */
#line 733 "evoparser.y"
                                                                                { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3122 "evoparser.tab.c"
    break;

  case 215: /* stmt: create_table_stmt  */
#line 738 "evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    }
#line 3131 "evoparser.tab.c"
    break;

  case 216: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 746 "evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval));
        GetTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 3141 "evoparser.tab.c"
    break;

  case 217: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 754 "evoparser.y"
                                                                                { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval)); free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3147 "evoparser.tab.c"
    break;

  case 218: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 759 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3153 "evoparser.tab.c"
    break;

  case 219: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 763 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3159 "evoparser.tab.c"
    break;

  case 220: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 768 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval)); free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3165 "evoparser.tab.c"
    break;

  case 221: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 772 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval)); free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3171 "evoparser.tab.c"
    break;

  case 222: /* opt_temporary: %empty  */
#line 775 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3177 "evoparser.tab.c"
    break;

  case 223: /* opt_temporary: TEMPORARY  */
#line 776 "evoparser.y"
                                                                                { (yyval.intval) = 1;}
#line 3183 "evoparser.tab.c"
    break;

  case 224: /* create_col_list: create_definition  */
#line 779 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3189 "evoparser.tab.c"
    break;

  case 225: /* create_col_list: create_col_list ',' create_definition  */
#line 780 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3195 "evoparser.tab.c"
    break;

  case 226: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 783 "evoparser.y"
                                                                                { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3201 "evoparser.tab.c"
    break;

  case 227: /* create_definition: KEY '(' column_list ')'  */
#line 784 "evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3207 "evoparser.tab.c"
    break;

  case 228: /* create_definition: INDEX '(' column_list ')'  */
#line 785 "evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3213 "evoparser.tab.c"
    break;

  case 229: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 786 "evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3219 "evoparser.tab.c"
    break;

  case 230: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 787 "evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3225 "evoparser.tab.c"
    break;

  case 231: /* $@1: %empty  */
#line 790 "evoparser.y"
                                                                                { emit("STARTCOL"); }
#line 3231 "evoparser.tab.c"
    break;

  case 232: /* create_definition: $@1 NAME data_type column_atts  */
#line 792 "evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval));
        GetColumnNames((yyvsp[-2].strval));
        GetColumnSize((yyvsp[-1].intval));
        free((yyvsp[-2].strval));
    }
#line 3241 "evoparser.tab.c"
    break;

  case 233: /* column_atts: %empty  */
#line 799 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3247 "evoparser.tab.c"
    break;

  case 234: /* column_atts: column_atts NOT NULLX  */
#line 800 "evoparser.y"
                                                                                { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3253 "evoparser.tab.c"
    break;

  case 236: /* column_atts: column_atts DEFAULT STRING  */
#line 802 "evoparser.y"
                                                                                { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3259 "evoparser.tab.c"
    break;

  case 237: /* column_atts: column_atts DEFAULT INTNUM  */
#line 803 "evoparser.y"
                                                                                { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3265 "evoparser.tab.c"
    break;

  case 238: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 804 "evoparser.y"
                                                                                { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3271 "evoparser.tab.c"
    break;

  case 239: /* column_atts: column_atts DEFAULT BOOL  */
#line 805 "evoparser.y"
                                                                                { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3277 "evoparser.tab.c"
    break;

  case 240: /* column_atts: column_atts AUTO_INCREMENT  */
#line 806 "evoparser.y"
                                                                                { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3283 "evoparser.tab.c"
    break;

  case 241: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 807 "evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3289 "evoparser.tab.c"
    break;

  case 242: /* column_atts: column_atts UNIQUE KEY  */
#line 808 "evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3295 "evoparser.tab.c"
    break;

  case 243: /* column_atts: column_atts PRIMARY KEY  */
#line 809 "evoparser.y"
                                                                                { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3301 "evoparser.tab.c"
    break;

  case 244: /* column_atts: column_atts KEY  */
#line 810 "evoparser.y"
                                                                                { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3307 "evoparser.tab.c"
    break;

  case 245: /* column_atts: column_atts COMMENT STRING  */
#line 811 "evoparser.y"
                                                                                { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3313 "evoparser.tab.c"
    break;

  case 246: /* opt_length: %empty  */
#line 814 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3319 "evoparser.tab.c"
    break;

  case 247: /* opt_length: '(' INTNUM ')'  */
#line 815 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval); }
#line 3325 "evoparser.tab.c"
    break;

  case 248: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 816 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3331 "evoparser.tab.c"
    break;

  case 249: /* opt_binary: %empty  */
#line 819 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3337 "evoparser.tab.c"
    break;

  case 250: /* opt_binary: BINARY  */
#line 820 "evoparser.y"
                                                                                { (yyval.intval) = 4000; }
#line 3343 "evoparser.tab.c"
    break;

  case 251: /* opt_uz: %empty  */
#line 823 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3349 "evoparser.tab.c"
    break;

  case 252: /* opt_uz: opt_uz UNSIGNED  */
#line 824 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3355 "evoparser.tab.c"
    break;

  case 253: /* opt_uz: opt_uz ZEROFILL  */
#line 825 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3361 "evoparser.tab.c"
    break;

  case 255: /* opt_csc: opt_csc CHAR SET STRING  */
#line 829 "evoparser.y"
                                                                                { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3367 "evoparser.tab.c"
    break;

  case 256: /* opt_csc: opt_csc COLLATE STRING  */
#line 830 "evoparser.y"
                                                                                { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3373 "evoparser.tab.c"
    break;

  case 257: /* data_type: BIT opt_length  */
#line 834 "evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3379 "evoparser.tab.c"
    break;

  case 258: /* data_type: TINYINT opt_length opt_uz  */
#line 835 "evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3385 "evoparser.tab.c"
    break;

  case 259: /* data_type: SMALLINT opt_length opt_uz  */
#line 836 "evoparser.y"
                                                                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3391 "evoparser.tab.c"
    break;

  case 260: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 837 "evoparser.y"
                                                                                { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3397 "evoparser.tab.c"
    break;

  case 261: /* data_type: INT opt_length opt_uz  */
#line 838 "evoparser.y"
                                                                                { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3403 "evoparser.tab.c"
    break;

  case 262: /* data_type: INTEGER opt_length opt_uz  */
#line 839 "evoparser.y"
                                                                                { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3409 "evoparser.tab.c"
    break;

  case 263: /* data_type: BIGINT opt_length opt_uz  */
#line 840 "evoparser.y"
                                                                                { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3415 "evoparser.tab.c"
    break;

  case 264: /* data_type: REAL opt_length opt_uz  */
#line 841 "evoparser.y"
                                                                                { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3421 "evoparser.tab.c"
    break;

  case 265: /* data_type: DOUBLE opt_length opt_uz  */
#line 842 "evoparser.y"
                                                                                { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3427 "evoparser.tab.c"
    break;

  case 266: /* data_type: FLOAT opt_length opt_uz  */
#line 843 "evoparser.y"
                                                                                { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3433 "evoparser.tab.c"
    break;

  case 267: /* data_type: DECIMAL opt_length opt_uz  */
#line 844 "evoparser.y"
                                                                                { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3439 "evoparser.tab.c"
    break;

  case 268: /* data_type: DATE  */
#line 845 "evoparser.y"
                                                                                { (yyval.intval) = 100001; }
#line 3445 "evoparser.tab.c"
    break;

  case 269: /* data_type: TIME  */
#line 846 "evoparser.y"
                                                                                { (yyval.intval) = 100002; }
#line 3451 "evoparser.tab.c"
    break;

  case 270: /* data_type: TIMESTAMP  */
#line 847 "evoparser.y"
                                                                                { (yyval.intval) = 100003; }
#line 3457 "evoparser.tab.c"
    break;

  case 271: /* data_type: DATETIME  */
#line 848 "evoparser.y"
                                                                                { (yyval.intval) = 100004; }
#line 3463 "evoparser.tab.c"
    break;

  case 272: /* data_type: YEAR  */
#line 849 "evoparser.y"
                                                                                { (yyval.intval) = 100005; }
#line 3469 "evoparser.tab.c"
    break;

  case 273: /* data_type: CHAR opt_length opt_csc  */
#line 850 "evoparser.y"
                                                                                { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3475 "evoparser.tab.c"
    break;

  case 274: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 851 "evoparser.y"
                                                                                { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3481 "evoparser.tab.c"
    break;

  case 275: /* data_type: BINARY opt_length  */
#line 852 "evoparser.y"
                                                                                { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3487 "evoparser.tab.c"
    break;

  case 276: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 853 "evoparser.y"
                                                                                { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3493 "evoparser.tab.c"
    break;

  case 277: /* data_type: TINYBLOB  */
#line 854 "evoparser.y"
                                                                                { (yyval.intval) = 160001; }
#line 3499 "evoparser.tab.c"
    break;

  case 278: /* data_type: BLOB  */
#line 855 "evoparser.y"
                                                                                { (yyval.intval) = 160002; }
#line 3505 "evoparser.tab.c"
    break;

  case 279: /* data_type: MEDIUMBLOB  */
#line 856 "evoparser.y"
                                                                                { (yyval.intval) = 160003; }
#line 3511 "evoparser.tab.c"
    break;

  case 280: /* data_type: LONGBLOB  */
#line 857 "evoparser.y"
                                                                                { (yyval.intval) = 160004; }
#line 3517 "evoparser.tab.c"
    break;

  case 281: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 858 "evoparser.y"
                                                                                { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3523 "evoparser.tab.c"
    break;

  case 282: /* data_type: TEXT opt_binary opt_csc  */
#line 859 "evoparser.y"
                                                                                { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3529 "evoparser.tab.c"
    break;

  case 283: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 860 "evoparser.y"
                                                                                { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3535 "evoparser.tab.c"
    break;

  case 284: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 861 "evoparser.y"
                                                                                { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3541 "evoparser.tab.c"
    break;

  case 285: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 862 "evoparser.y"
                                                                                { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3547 "evoparser.tab.c"
    break;

  case 286: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 863 "evoparser.y"
                                                                                { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3553 "evoparser.tab.c"
    break;

  case 287: /* enum_list: STRING  */
#line 866 "evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3559 "evoparser.tab.c"
    break;

  case 288: /* enum_list: enum_list ',' STRING  */
#line 867 "evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3565 "evoparser.tab.c"
    break;

  case 289: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 871 "evoparser.y"
                                                                                { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3571 "evoparser.tab.c"
    break;

  case 290: /* opt_ignore_replace: %empty  */
#line 874 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3577 "evoparser.tab.c"
    break;

  case 291: /* opt_ignore_replace: IGNORE  */
#line 875 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3583 "evoparser.tab.c"
    break;

  case 292: /* opt_ignore_replace: REPLACE  */
#line 876 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 3589 "evoparser.tab.c"
    break;

  case 293: /* stmt: set_stmt  */
#line 880 "evoparser.y"
                                                                                { emit("STMT"); }
#line 3595 "evoparser.tab.c"
    break;

  case 297: /* set_expr: USERVAR COMPARISON expr  */
#line 886 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; } emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3601 "evoparser.tab.c"
    break;

  case 298: /* set_expr: USERVAR ASSIGN expr  */
#line 887 "evoparser.y"
                                                                                { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3607 "evoparser.tab.c"
    break;


#line 3611 "evoparser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 890 "evoparser.y"

void emit(char *s, ...)
{
	extern int yylineno;
	va_list ap;
	if (g_gui_mode) return;
	va_start(ap, s);
	printf("rpn: ");
	vfprintf(stdout, s, ap);
	printf("\n");
}
void yyerror(char *s, ...)
{
	extern int yylineno;
	va_list ap;
	va_start(ap, s);
	fprintf(stderr, "%d: error: ", yylineno);
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
}
