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
  YYSYMBOL_DROP = 61,                      /* DROP  */
  YYSYMBOL_DAY_MINUTE = 62,                /* DAY_MINUTE  */
  YYSYMBOL_DISTINCTROW = 63,               /* DISTINCTROW  */
  YYSYMBOL_DAY_SECOND = 64,                /* DAY_SECOND  */
  YYSYMBOL_DESC = 65,                      /* DESC  */
  YYSYMBOL_DEFAULT = 66,                   /* DEFAULT  */
  YYSYMBOL_DOUBLE = 67,                    /* DOUBLE  */
  YYSYMBOL_DATETIME = 68,                  /* DATETIME  */
  YYSYMBOL_DECIMAL = 69,                   /* DECIMAL  */
  YYSYMBOL_DATE = 70,                      /* DATE  */
  YYSYMBOL_ESCAPED = 71,                   /* ESCAPED  */
  YYSYMBOL_ENUM = 72,                      /* ENUM  */
  YYSYMBOL_END = 73,                       /* END  */
  YYSYMBOL_ELSE = 74,                      /* ELSE  */
  YYSYMBOL_FLOAT = 75,                     /* FLOAT  */
  YYSYMBOL_FORCE = 76,                     /* FORCE  */
  YYSYMBOL_FROM = 77,                      /* FROM  */
  YYSYMBOL_FULLTEXT = 78,                  /* FULLTEXT  */
  YYSYMBOL_FOR = 79,                       /* FOR  */
  YYSYMBOL_GROUP = 80,                     /* GROUP  */
  YYSYMBOL_HOUR_MINUTE = 81,               /* HOUR_MINUTE  */
  YYSYMBOL_HOUR_MICROSECOND = 82,          /* HOUR_MICROSECOND  */
  YYSYMBOL_HIGH_PRIORITY = 83,             /* HIGH_PRIORITY  */
  YYSYMBOL_HOUR_SECOND = 84,               /* HOUR_SECOND  */
  YYSYMBOL_HAVING = 85,                    /* HAVING  */
  YYSYMBOL_INTEGER = 86,                   /* INTEGER  */
  YYSYMBOL_INNER = 87,                     /* INNER  */
  YYSYMBOL_IGNORE = 88,                    /* IGNORE  */
  YYSYMBOL_INDEX = 89,                     /* INDEX  */
  YYSYMBOL_IF = 90,                        /* IF  */
  YYSYMBOL_INSERT = 91,                    /* INSERT  */
  YYSYMBOL_INTO = 92,                      /* INTO  */
  YYSYMBOL_INT = 93,                       /* INT  */
  YYSYMBOL_INTERVAL = 94,                  /* INTERVAL  */
  YYSYMBOL_JOIN = 95,                      /* JOIN  */
  YYSYMBOL_KEY = 96,                       /* KEY  */
  YYSYMBOL_LONGTEXT = 97,                  /* LONGTEXT  */
  YYSYMBOL_LOW_PRIORITY = 98,              /* LOW_PRIORITY  */
  YYSYMBOL_LEFT = 99,                      /* LEFT  */
  YYSYMBOL_LEADING = 100,                  /* LEADING  */
  YYSYMBOL_LIMIT = 101,                    /* LIMIT  */
  YYSYMBOL_LONGBLOB = 102,                 /* LONGBLOB  */
  YYSYMBOL_MEDIUMTEXT = 103,               /* MEDIUMTEXT  */
  YYSYMBOL_MEDIUMBLOB = 104,               /* MEDIUMBLOB  */
  YYSYMBOL_MEDIUMINT = 105,                /* MEDIUMINT  */
  YYSYMBOL_NATURAL = 106,                  /* NATURAL  */
  YYSYMBOL_NULLX = 107,                    /* NULLX  */
  YYSYMBOL_OUTER = 108,                    /* OUTER  */
  YYSYMBOL_ON = 109,                       /* ON  */
  YYSYMBOL_ORDER = 110,                    /* ORDER  */
  YYSYMBOL_ONDUPLICATE = 111,              /* ONDUPLICATE  */
  YYSYMBOL_PRIMARY = 112,                  /* PRIMARY  */
  YYSYMBOL_QUICK = 113,                    /* QUICK  */
  YYSYMBOL_REAL = 114,                     /* REAL  */
  YYSYMBOL_ROLLUP = 115,                   /* ROLLUP  */
  YYSYMBOL_RIGHT = 116,                    /* RIGHT  */
  YYSYMBOL_REPLACE = 117,                  /* REPLACE  */
  YYSYMBOL_SQL_SMALL_RESULT = 118,         /* SQL_SMALL_RESULT  */
  YYSYMBOL_SCHEMA = 119,                   /* SCHEMA  */
  YYSYMBOL_SOME = 120,                     /* SOME  */
  YYSYMBOL_SQL_CALC_FOUND_ROWS = 121,      /* SQL_CALC_FOUND_ROWS  */
  YYSYMBOL_SQL_BIG_RESULT = 122,           /* SQL_BIG_RESULT  */
  YYSYMBOL_STRAIGHT_JOIN = 123,            /* STRAIGHT_JOIN  */
  YYSYMBOL_SMALLINT = 124,                 /* SMALLINT  */
  YYSYMBOL_SET = 125,                      /* SET  */
  YYSYMBOL_SELECT = 126,                   /* SELECT  */
  YYSYMBOL_TINYTEXT = 127,                 /* TINYTEXT  */
  YYSYMBOL_TINYINT = 128,                  /* TINYINT  */
  YYSYMBOL_TEMPORARY = 129,                /* TEMPORARY  */
  YYSYMBOL_TEXT = 130,                     /* TEXT  */
  YYSYMBOL_TIMESTAMP = 131,                /* TIMESTAMP  */
  YYSYMBOL_TABLE = 132,                    /* TABLE  */
  YYSYMBOL_THEN = 133,                     /* THEN  */
  YYSYMBOL_TRAILING = 134,                 /* TRAILING  */
  YYSYMBOL_TINYBLOB = 135,                 /* TINYBLOB  */
  YYSYMBOL_TIME = 136,                     /* TIME  */
  YYSYMBOL_UPDATE = 137,                   /* UPDATE  */
  YYSYMBOL_UNSIGNED = 138,                 /* UNSIGNED  */
  YYSYMBOL_UNIQUE = 139,                   /* UNIQUE  */
  YYSYMBOL_USING = 140,                    /* USING  */
  YYSYMBOL_USE = 141,                      /* USE  */
  YYSYMBOL_VARCHAR = 142,                  /* VARCHAR  */
  YYSYMBOL_VALUES = 143,                   /* VALUES  */
  YYSYMBOL_VARBINARY = 144,                /* VARBINARY  */
  YYSYMBOL_WHERE = 145,                    /* WHERE  */
  YYSYMBOL_WHEN = 146,                     /* WHEN  */
  YYSYMBOL_WITH = 147,                     /* WITH  */
  YYSYMBOL_YEAR = 148,                     /* YEAR  */
  YYSYMBOL_YEAR_MONTH = 149,               /* YEAR_MONTH  */
  YYSYMBOL_ZEROFILL = 150,                 /* ZEROFILL  */
  YYSYMBOL_EXISTS = 151,                   /* EXISTS  */
  YYSYMBOL_FSUBSTRING = 152,               /* FSUBSTRING  */
  YYSYMBOL_FTRIM = 153,                    /* FTRIM  */
  YYSYMBOL_FDATE_ADD = 154,                /* FDATE_ADD  */
  YYSYMBOL_FDATE_SUB = 155,                /* FDATE_SUB  */
  YYSYMBOL_FCOUNT = 156,                   /* FCOUNT  */
  YYSYMBOL_157_ = 157,                     /* ';'  */
  YYSYMBOL_158_ = 158,                     /* '.'  */
  YYSYMBOL_159_ = 159,                     /* '('  */
  YYSYMBOL_160_ = 160,                     /* ')'  */
  YYSYMBOL_161_ = 161,                     /* ','  */
  YYSYMBOL_YYACCEPT = 162,                 /* $accept  */
  YYSYMBOL_stmt_list = 163,                /* stmt_list  */
  YYSYMBOL_expr = 164,                     /* expr  */
  YYSYMBOL_val_list = 165,                 /* val_list  */
  YYSYMBOL_opt_val_list = 166,             /* opt_val_list  */
  YYSYMBOL_trim_ltb = 167,                 /* trim_ltb  */
  YYSYMBOL_interval_exp = 168,             /* interval_exp  */
  YYSYMBOL_case_list = 169,                /* case_list  */
  YYSYMBOL_stmt = 170,                     /* stmt  */
  YYSYMBOL_select_stmt = 171,              /* select_stmt  */
  YYSYMBOL_opt_where = 172,                /* opt_where  */
  YYSYMBOL_opt_groupby = 173,              /* opt_groupby  */
  YYSYMBOL_groupby_list = 174,             /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 175,             /* opt_asc_desc  */
  YYSYMBOL_opt_with_rollup = 176,          /* opt_with_rollup  */
  YYSYMBOL_opt_having = 177,               /* opt_having  */
  YYSYMBOL_opt_orderby = 178,              /* opt_orderby  */
  YYSYMBOL_opt_limit = 179,                /* opt_limit  */
  YYSYMBOL_opt_into_list = 180,            /* opt_into_list  */
  YYSYMBOL_column_list = 181,              /* column_list  */
  YYSYMBOL_select_opts = 182,              /* select_opts  */
  YYSYMBOL_select_expr_list = 183,         /* select_expr_list  */
  YYSYMBOL_select_expr = 184,              /* select_expr  */
  YYSYMBOL_opt_as_alias = 185,             /* opt_as_alias  */
  YYSYMBOL_table_references = 186,         /* table_references  */
  YYSYMBOL_table_reference = 187,          /* table_reference  */
  YYSYMBOL_table_factor = 188,             /* table_factor  */
  YYSYMBOL_opt_as = 189,                   /* opt_as  */
  YYSYMBOL_join_table = 190,               /* join_table  */
  YYSYMBOL_opt_inner_cross = 191,          /* opt_inner_cross  */
  YYSYMBOL_opt_outer = 192,                /* opt_outer  */
  YYSYMBOL_left_or_right = 193,            /* left_or_right  */
  YYSYMBOL_opt_left_or_right_outer = 194,  /* opt_left_or_right_outer  */
  YYSYMBOL_opt_join_condition = 195,       /* opt_join_condition  */
  YYSYMBOL_join_condition = 196,           /* join_condition  */
  YYSYMBOL_index_hint = 197,               /* index_hint  */
  YYSYMBOL_opt_for_join = 198,             /* opt_for_join  */
  YYSYMBOL_index_list = 199,               /* index_list  */
  YYSYMBOL_table_subquery = 200,           /* table_subquery  */
  YYSYMBOL_delete_stmt = 201,              /* delete_stmt  */
  YYSYMBOL_delete_opts = 202,              /* delete_opts  */
  YYSYMBOL_delete_list = 203,              /* delete_list  */
  YYSYMBOL_opt_dot_star = 204,             /* opt_dot_star  */
  YYSYMBOL_drop_table_stmt = 205,          /* drop_table_stmt  */
  YYSYMBOL_insert_stmt = 206,              /* insert_stmt  */
  YYSYMBOL_opt_ondupupdate = 207,          /* opt_ondupupdate  */
  YYSYMBOL_insert_opts = 208,              /* insert_opts  */
  YYSYMBOL_opt_into = 209,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 210,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 211,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 212,              /* insert_vals  */
  YYSYMBOL_insert_asgn_list = 213,         /* insert_asgn_list  */
  YYSYMBOL_replace_stmt = 214,             /* replace_stmt  */
  YYSYMBOL_update_stmt = 215,              /* update_stmt  */
  YYSYMBOL_update_opts = 216,              /* update_opts  */
  YYSYMBOL_update_asgn_list = 217,         /* update_asgn_list  */
  YYSYMBOL_create_database_stmt = 218,     /* create_database_stmt  */
  YYSYMBOL_opt_if_not_exists = 219,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 220,        /* create_table_stmt  */
  YYSYMBOL_opt_temporary = 221,            /* opt_temporary  */
  YYSYMBOL_create_col_list = 222,          /* create_col_list  */
  YYSYMBOL_create_definition = 223,        /* create_definition  */
  YYSYMBOL_224_1 = 224,                    /* $@1  */
  YYSYMBOL_column_atts = 225,              /* column_atts  */
  YYSYMBOL_opt_length = 226,               /* opt_length  */
  YYSYMBOL_opt_binary = 227,               /* opt_binary  */
  YYSYMBOL_opt_uz = 228,                   /* opt_uz  */
  YYSYMBOL_opt_csc = 229,                  /* opt_csc  */
  YYSYMBOL_data_type = 230,                /* data_type  */
  YYSYMBOL_enum_list = 231,                /* enum_list  */
  YYSYMBOL_create_select_statement = 232,  /* create_select_statement  */
  YYSYMBOL_opt_ignore_replace = 233,       /* opt_ignore_replace  */
  YYSYMBOL_set_stmt = 234,                 /* set_stmt  */
  YYSYMBOL_set_list = 235,                 /* set_list  */
  YYSYMBOL_set_expr = 236                  /* set_expr  */
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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  162
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  300
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  619

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   402


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
     159,   160,    26,    24,   161,    25,   158,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   157,
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
     154,   155,   156
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   238,   238,   239,   244,   250,   251,   252,   268,   275,
     282,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   306,   307,
     308,   309,   312,   313,   314,   315,   316,   319,   322,   323,
     326,   327,   330,   331,   332,   333,   334,   338,   342,   343,
     345,   346,   347,   348,   349,   352,   353,   354,   357,   358,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   372,
     373,   374,   375,   378,   379,   382,   383,   386,   387,   390,
     391,   392,   396,   406,   407,   420,   421,   422,   423,   426,
     427,   430,   431,   432,   435,   436,   439,   440,   443,   444,
     447,   447,   448,   451,   452,   455,   456,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   470,   471,   472,   479,
     480,   481,   482,   485,   486,   489,   490,   494,   500,   501,
     502,   505,   506,   510,   512,   514,   516,   518,   522,   523,
     524,   527,   528,   531,   532,   535,   536,   537,   540,   541,
     544,   545,   549,   551,   553,   555,   558,   559,   562,   563,
     566,   570,   578,   586,   587,   588,   589,   593,   596,   597,
     600,   600,   602,   606,   613,   621,   628,   636,   637,   640,
     641,   642,   643,   644,   647,   647,   650,   651,   654,   655,
     658,   659,   660,   661,   664,   668,   669,   670,   671,   677,
     680,   686,   691,   697,   703,   710,   711,   712,   716,   727,
     738,   749,   763,   767,   768,   771,   772,   776,   783,   792,
     796,   801,   805,   810,   814,   815,   818,   819,   822,   823,
     824,   825,   826,   829,   829,   839,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   854,   855,
     856,   859,   860,   863,   864,   865,   868,   869,   870,   874,
     875,   876,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   886,   887,   888,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   906,
     907,   910,   914,   915,   916,   920,   923,   924,   924,   926,
     927
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
  "DAY_HOUR", "DAY_MICROSECOND", "DISTINCT", "DELETE", "DROP",
  "DAY_MINUTE", "DISTINCTROW", "DAY_SECOND", "DESC", "DEFAULT", "DOUBLE",
  "DATETIME", "DECIMAL", "DATE", "ESCAPED", "ENUM", "END", "ELSE", "FLOAT",
  "FORCE", "FROM", "FULLTEXT", "FOR", "GROUP", "HOUR_MINUTE",
  "HOUR_MICROSECOND", "HIGH_PRIORITY", "HOUR_SECOND", "HAVING", "INTEGER",
  "INNER", "IGNORE", "INDEX", "IF", "INSERT", "INTO", "INT", "INTERVAL",
  "JOIN", "KEY", "LONGTEXT", "LOW_PRIORITY", "LEFT", "LEADING", "LIMIT",
  "LONGBLOB", "MEDIUMTEXT", "MEDIUMBLOB", "MEDIUMINT", "NATURAL", "NULLX",
  "OUTER", "ON", "ORDER", "ONDUPLICATE", "PRIMARY", "QUICK", "REAL",
  "ROLLUP", "RIGHT", "REPLACE", "SQL_SMALL_RESULT", "SCHEMA", "SOME",
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
  "opt_dot_star", "drop_table_stmt", "insert_stmt", "opt_ondupupdate",
  "insert_opts", "opt_into", "opt_col_names", "insert_vals_list",
  "insert_vals", "insert_asgn_list", "replace_stmt", "update_stmt",
  "update_opts", "update_asgn_list", "create_database_stmt",
  "opt_if_not_exists", "create_table_stmt", "opt_temporary",
  "create_col_list", "create_definition", "$@1", "column_atts",
  "opt_length", "opt_binary", "opt_uz", "opt_csc", "data_type",
  "enum_list", "create_select_statement", "opt_ignore_replace", "set_stmt",
  "set_list", "set_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-376)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-220)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     146,   -28,  -376,   -91,  -376,  -376,    37,  -376,     6,    83,
     -27,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
      45,    45,  -376,    42,   115,   138,   132,   132,    33,    64,
    -376,   302,   116,     9,  -376,   146,    29,   193,   220,    45,
      84,   259,  -376,  -376,  -376,   -59,  -376,  -376,  -376,  -376,
    -376,  -376,   262,   270,   701,   701,    37,    76,  -376,  -376,
    -376,  -376,   278,   701,   701,   701,  -376,  -376,  -376,   443,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,   139,
     141,   145,   159,   167,   174,  1372,   -38,  -376,    10,    11,
      13,     7,    65,   153,  -376,  -376,   296,  -376,  -376,  -376,
    -376,   338,   321,  -376,   121,  -111,     9,   347,    22,   119,
    1431,  1431,  -376,   349,   701,   701,   735,   735,  -376,   701,
    1060,   -26,   245,   701,   370,   701,   701,   459,  -376,   701,
     701,   701,   205,    19,   701,   701,   298,   701,   250,   701,
     701,   701,   701,   701,   701,   701,   701,   701,   701,   383,
    -376,     9,   701,   386,   110,   240,   156,   391,     9,  -376,
    -376,  -376,    62,  -376,     9,   315,   318,  -376,   426,    74,
    -376,   701,   325,     9,  -115,    84,   440,   449,   316,   440,
     -86,  -376,   766,  -376,   309,  1431,  1114,    72,  -376,   701,
     701,   326,    51,   327,  -376,  -376,  -376,   328,   701,   796,
     848,   330,   918,   540,   998,  1078,   495,  -376,    15,  -376,
    1162,  1162,   332,   701,   701,  1402,   334,   337,   348,   245,
     579,   716,   605,   510,   295,   295,   445,   445,   445,   445,
    -376,  -376,  -115,  -376,   199,   401,   410,   413,  -376,  -376,
    -376,    -1,    18,   153,   318,   318,   420,   407,     9,  -376,
     422,  -376,  -376,  -376,   515,   -52,  -376,   296,  1431,   478,
     444,  -115,  -376,  -376,   507,   -25,  -376,   182,   389,   -25,
     389,   438,   701,  -376,   701,  -376,   701,  1287,  1135,  -376,
     701,  -376,  -376,  1266,   464,   464,  -376,  -376,   412,   415,
    -376,  -376,   495,  1162,  1162,   701,   245,   245,   245,   430,
     493,   110,   513,   513,   513,   701,   590,   613,   325,  -376,
    -376,     9,   701,   -81,     9,   -32,   181,   458,   460,   522,
     195,  -376,   617,   245,   701,   701,  -376,  -376,   525,   542,
     636,  -376,  -376,   637,   619,    28,  -376,    28,  -376,  -376,
    1431,  1308,  -376,   701,   890,   701,   701,   481,   482,  -376,
    -376,   483,   485,   558,   498,   499,   500,  -376,   620,   577,
    -376,   568,   505,   514,   516,  1431,   652,     2,   444,  -376,
    1431,   701,   523,  -376,  -376,   -81,   -52,  -376,   524,   527,
     449,   449,   528,   -68,   -52,  1127,  -376,  1342,   508,   869,
    -376,  1431,   547,   674,  -376,  -376,  1431,   197,   537,  -376,
    -376,  -376,  1431,   701,  -376,   539,   974,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,   701,   701,   325,  -376,   694,   694,
     694,   701,   701,   708,  -376,  1431,   449,  -376,   202,   449,
     449,   206,   208,   449,  -376,  -376,  -376,   553,   553,   553,
     553,   553,  -376,   553,  -376,   554,   553,   553,   553,   672,
    -376,   672,  -376,   553,   553,   553,   557,   672,   553,   672,
    -376,  -376,  -376,   561,   562,  -376,  -376,  -376,  -376,  -376,
     701,   701,   440,   649,  -376,   685,   619,   951,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,  -376,  -376,    99,  1431,
     444,  -376,   219,   221,   232,  1431,  1431,   697,   236,    60,
     238,   247,  -376,  -376,   251,   717,  -376,  -376,  -376,  -376,
    -376,  -376,   719,  -376,  -376,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,   719,  -376,  -376,  -376,   720,   722,    88,  1342,
    1431,   563,  -376,  1431,  -376,  1431,   254,  -376,   614,  -376,
     638,  -376,   725,  -376,  -376,   701,  -376,  -376,  -376,  -376,
    -376,   257,  -107,   306,  -107,  -107,  -376,   273,  -107,  -107,
    -107,   306,   306,  -107,  -107,  -107,   311,   306,  -107,   306,
     572,   573,   628,  -376,   744,   285,  -376,  -376,   653,    35,
    -376,  -376,  -376,   449,  -376,  -376,  1431,  -376,   761,  -376,
    -376,   642,   764,  -376,   765,  -376,  -376,  -376,  -376,  -376,
    -376,  -376,  -376,  -376,  -376,  -376,   449,   623,   639,   793,
    -376,   306,  -376,   306,   306,   313,  -376,  -376,  -376
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   224,   166,     0,   179,   179,     0,   107,   179,     0,
       0,    82,   161,   173,   175,   199,   203,   212,   217,   295,
     215,   215,   225,     0,     0,     0,   185,   185,     0,   296,
     297,     0,     0,     0,     1,     2,     0,     0,     0,   215,
     170,     0,   165,   163,   164,     0,   174,   181,   182,   183,
     184,   180,     0,     0,     0,     0,     0,     4,     7,     8,
      10,     9,     6,     0,     0,     0,   118,   108,    79,     0,
      80,    81,   109,   110,   111,   113,   115,   114,   112,     0,
       0,     0,     0,     0,     0,   122,    83,   116,   183,   180,
     122,     0,     0,   123,   125,   126,   132,     3,   216,   213,
     214,     0,     0,   168,    85,     0,     0,     0,   186,   186,
     300,   299,   298,     0,    40,     0,    25,    26,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0,   155,     0,     0,     0,     0,   140,
     139,   143,   147,   144,     0,     0,   141,   131,     0,   292,
     171,     0,    98,     0,    85,   170,     0,     0,     0,     0,
       0,     5,    38,    41,     0,    36,     0,     0,    71,     0,
       0,     0,    38,     0,    57,    55,    56,     0,     0,     0,
       0,     0,     0,    19,    20,    18,     0,    34,     0,    32,
      75,    77,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    21,    22,    24,    11,    12,    13,    14,    15,    16,
      23,   120,    85,   117,   122,     0,     0,     0,   127,   160,
     130,     0,    85,   124,   141,   141,     0,   134,     0,   142,
       0,   129,   293,   294,     0,   233,   221,   132,    86,     0,
     100,    85,   167,   169,     0,   177,   105,     0,     0,   177,
       0,   177,     0,    47,     0,    69,     0,     0,     0,    46,
       0,    50,    53,     0,     0,     0,    48,    49,     0,     0,
      35,    33,     0,    76,    78,     0,     0,     0,     0,     0,
      87,   155,   157,   157,   157,     0,     0,     0,    98,   145,
     146,     0,     0,   148,     0,   292,     0,     0,     0,     0,
       0,   226,     0,     0,     0,     0,   162,   172,     0,     0,
       0,   194,   187,     0,     0,   177,   201,   177,   202,    39,
      73,     0,    72,     0,     0,     0,     0,     0,     0,    42,
      44,     0,     0,    37,     0,     0,     0,    28,     0,    96,
     128,     0,     0,     0,     0,   208,     0,     0,   100,   137,
     135,     0,     0,   133,   149,     0,   233,   223,     0,     0,
       0,     0,     0,   292,   233,     0,   291,    91,    99,   101,
     196,   195,     0,     0,   106,   191,   190,     0,     0,   176,
     200,    70,    74,     0,    51,     0,     0,    58,    59,    43,
      45,    31,    29,    30,     0,     0,    98,   156,     0,     0,
       0,     0,     0,     0,   204,   150,     0,   136,     0,     0,
       0,     0,     0,     0,   220,   227,   280,   248,   248,   248,
     248,   248,   273,   248,   270,     0,   248,   248,   248,   251,
     282,   251,   281,   248,   248,   248,     0,   251,   248,   251,
     272,   279,   271,     0,     0,   274,   235,    92,    93,    89,
       0,     0,     0,     0,   188,     0,     0,     0,    54,    60,
      61,    62,    63,    67,    66,    68,    65,    64,    94,    97,
     100,   158,     0,     0,     0,   209,   210,     0,     0,   292,
       0,     0,   230,   229,     0,     0,   277,   253,   259,   256,
     253,   253,     0,   253,   253,   253,   252,   256,   256,   253,
     253,   253,     0,   256,   253,   256,     0,     0,   234,    91,
     102,   178,   198,   197,   193,   192,     0,    52,     0,    88,
     103,   154,     0,   153,   152,     0,   151,   222,   231,   232,
     228,     0,   265,   275,   267,   269,   289,     0,   268,   264,
     263,   286,   285,   262,   266,   261,     0,   283,   260,   284,
       0,     0,     0,   242,     0,     0,   246,   237,     0,     0,
      90,   189,    95,     0,    84,   159,   211,   249,     0,   254,
     255,     0,     0,   256,     0,   256,   256,   278,   236,   247,
     238,   239,   241,   240,   245,   244,     0,   104,     0,     0,
     258,   287,   290,   288,   276,     0,   250,   257,   243
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -376,   763,   -31,  -116,  -376,  -376,   529,   707,  -376,   -87,
     -45,  -376,   414,   300,  -376,  -376,  -291,  -353,  -376,  -375,
    -376,  -376,   678,   -79,    -9,   673,  -161,   575,  -376,  -376,
     234,  -376,  -376,  -376,   467,   532,   177,    63,  -376,  -376,
    -376,   794,   659,  -376,  -376,   -96,   242,   816,   736,   574,
     371,  -177,  -376,  -376,  -376,  -376,  -376,   113,  -376,  -376,
     470,   465,  -376,  -376,  -109,  -171,   -83,  -374,  -376,   329,
    -314,  -376,  -376,  -376,   792
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     9,   182,   183,   184,   198,   347,   121,    10,    11,
     172,   359,   388,   469,   539,   416,   260,   326,   584,   267,
      31,    86,    87,   150,    92,    93,    94,   168,    95,   165,
     250,   166,   246,   373,   374,   238,   362,   492,    96,    12,
      24,    45,   103,    13,    14,   331,    26,    52,   178,   335,
     397,   265,    15,    16,    33,   242,    17,    37,    18,    23,
     320,   321,   322,   528,   506,   517,   552,   553,   466,   557,
     256,   257,    19,    29,    30
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,   377,   269,   247,   155,   431,   432,   193,   197,  -205,
      90,   154,    90,  -207,  -206,   424,   128,   368,   106,   305,
     252,   290,   422,   110,   111,   207,   316,    20,   371,   173,
     171,   589,   116,   117,   118,   191,   208,   317,   120,   151,
       7,    25,    54,   590,   318,    28,   158,   188,   189,   253,
     107,   498,   149,    55,   500,   501,   252,   270,   504,   372,
     319,   129,   130,   131,   132,   133,   134,   135,   136,   434,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   156,    34,   185,   253,   329,   313,   186,  -218,
     288,    21,   192,   271,   199,   200,   202,   174,   203,   204,
     205,    22,   107,   210,   211,   572,   215,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,    40,   289,
     190,    85,   291,   152,   573,   490,   209,   376,   280,   262,
      35,   605,   299,     7,    38,    36,   330,   540,   574,   329,
     258,    46,   232,   561,   562,   275,   276,   176,   252,   567,
     369,   569,   101,   375,   575,   301,   339,   306,   277,   278,
     423,   244,   252,   171,   261,  -205,    91,   283,    91,  -207,
    -206,   153,    47,   336,    39,   338,   351,   253,   245,   307,
      98,   177,   293,   294,   576,   547,   235,   300,    47,   398,
     157,   253,    41,     1,   606,   577,    99,   308,   236,    48,
     578,   159,   128,    42,    88,   352,     2,     3,   607,   354,
     355,   356,   272,    43,    89,    48,   327,  -219,   190,   611,
      49,   613,   614,   100,    50,    56,   158,   579,    44,   405,
      51,   615,   254,   255,   113,   114,   386,     4,   149,   399,
     160,   400,   102,   340,   179,   341,   538,    27,  -138,   344,
      32,   237,   161,    57,    58,    59,    60,    61,    62,   162,
     470,  -170,   104,     5,   353,   108,   171,    63,    64,   163,
     378,     6,     7,   109,   365,    65,   164,   379,   177,   102,
     518,   370,  -170,     8,   216,   217,   523,   115,   525,   600,
     601,   602,   603,   387,   389,   531,    68,   391,   122,    69,
     123,    70,    71,   396,   124,    57,    58,    59,    60,    61,
      62,   212,   402,   213,   214,   406,   240,   158,   125,    63,
      64,   144,   145,   146,   147,   148,   126,    65,    66,   507,
     508,   509,   510,   127,   511,   167,    67,   513,   514,   515,
     425,   169,   332,   333,   519,   520,   521,   170,    68,   524,
     175,    69,   181,    70,    71,   383,   384,   474,   475,   591,
     592,    72,   499,   384,   206,    73,   502,   333,   503,   333,
     218,     7,   477,    57,    58,    59,    60,    61,    62,   541,
     542,   543,   542,   387,   489,    74,   231,    63,    64,   234,
     495,   496,   544,   542,   241,    65,   546,   333,   548,   333,
     239,    79,    80,    81,    82,    83,    84,   549,   333,   219,
     248,   550,   333,   194,   581,   475,    68,   587,   588,    69,
      75,    70,    71,    76,    77,    78,   249,   554,   555,   251,
     558,   559,   560,   593,   594,   259,   563,   564,   565,   529,
     530,   568,   533,   264,   535,   396,    57,    58,    59,    60,
      61,    62,   266,    79,    80,    81,    82,    83,    84,   268,
      63,    64,    57,    58,    59,    60,    61,    62,    65,   273,
     195,   595,   594,   618,   333,   148,    63,    64,   309,   310,
     363,   364,   493,   494,    65,   201,   279,   281,   282,    68,
     286,   292,    69,   296,    70,    71,   297,   302,    57,    58,
      59,    60,    61,    62,   196,    68,   303,   298,    69,   304,
      70,    71,    63,    64,   586,   311,   312,   314,   315,   324,
      65,    79,    80,    81,    82,    83,    84,   328,    57,    58,
      59,    60,    61,    62,   142,   143,   144,   145,   146,   147,
     148,    68,    63,    64,    69,   325,    70,    71,   334,   329,
      65,   130,   131,   132,   133,   134,   135,   136,   346,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    68,   349,   358,    69,   350,    70,    71,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   119,
     357,   390,   361,   366,    79,    80,    81,    82,    83,    84,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      79,    80,    81,    82,    83,    84,   367,   380,   382,   381,
     385,     7,    57,    58,    59,    60,    61,    62,   141,   142,
     143,   144,   145,   146,   147,   148,    63,    64,   392,   393,
     394,   407,   408,   409,    65,   410,    79,    80,    81,    82,
      83,    84,    57,    58,    59,    60,    61,    62,   411,   412,
     413,   414,   415,   417,   418,    68,    63,    64,    69,   470,
      70,    71,   421,   419,    65,   420,    79,    80,    81,    82,
      83,    84,   426,   429,   472,   395,   430,   433,    57,    58,
      59,    60,    61,    62,   473,    68,   476,   491,    69,   478,
      70,    71,    63,    64,    57,    58,    59,    60,    61,    62,
      65,   497,   505,   512,   516,   532,   522,   545,    63,    64,
     526,   527,   551,   556,   330,   570,    65,   571,   585,   582,
     583,    68,   596,   597,    69,   598,    70,    71,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    68,   599,   604,
      69,   534,    70,    71,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   608,   609,   610,   612,
      79,    80,    81,    82,    83,    84,   129,   130,   131,   132,
     133,   134,   135,   136,   333,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   617,    97,   616,
      79,    80,    81,    82,    83,    84,   129,   130,   131,   132,
     133,   134,   135,   136,   348,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   187,   488,   580,
     233,   243,   323,   360,   263,   105,    79,    80,    81,    82,
      83,    84,   427,    53,   337,   180,   428,   536,   112,   435,
       0,   566,    79,    80,    81,    82,    83,    84,   129,   130,
     131,   132,   133,   134,   135,   136,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   129,
     130,   131,   132,   133,   134,   135,   136,     0,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     129,   130,   131,   132,   133,   134,   135,   136,     0,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,     0,     0,   272,   129,   130,
     131,   132,   133,   134,   135,   136,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,     0,     0,   284,     0,     0,
       0,   129,   130,   131,   132,   133,   134,   135,   136,   403,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,   285,
     131,   132,   133,   134,   135,   136,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
     471,   479,   480,     0,     0,     0,   481,     0,   482,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     404,     0,     0,     0,     0,   483,   484,     0,   485,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   130,   131,   132,   133,   134,   135,   136,   287,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   132,   133,   134,   135,   136,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,   537,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   486,   487,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   129,   130,   131,   132,   133,
     134,   135,   136,     0,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,   436,     0,   437,
       0,   438,   439,     0,     0,  -220,  -220,  -220,  -220,   136,
     440,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,   441,   442,   443,   444,     0,   445,
       0,     0,   446,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,   447,     0,     0,     0,     0,     0,     0,
     448,     0,     0,     0,   449,     0,     0,     0,     0,   450,
     451,   452,   453,     0,     0,     0,     0,     0,     0,     0,
       0,   454,     0,     0,     0,     0,     0,   274,     0,     0,
       0,   455,   456,     0,   457,   458,     0,   459,   460,     0,
       0,     0,   461,   462,     0,     0,     0,     0,   343,   463,
       0,   464,     0,     0,     0,   465,   129,   130,   131,   132,
     133,   134,   135,   136,     0,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   129,   130,   131,
     132,   133,   134,   135,   136,     0,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   129,   130,
     131,   132,   133,   134,   135,   136,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,   345,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     342,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,   128,     0,     0,     0,   467,
       0,   401,   129,   130,   131,   132,   133,   134,   135,   136,
       0,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,   468,     0,     0,
       0,   149,   129,   130,   131,   132,   133,   134,   135,   136,
       0,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
     295,   129,   130,   131,   132,   133,   134,   135,   136,     0,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148
};

static const yytype_int16 yycheck[] =
{
      31,   315,   179,   164,    91,   380,   381,   123,   124,     3,
       3,    90,     3,     3,     3,   368,     3,   308,    77,    20,
      88,     6,    20,    54,    55,     6,    78,    55,   109,   140,
     145,   138,    63,    64,    65,   122,    17,    89,    69,    77,
     126,   132,     9,   150,    96,     8,   161,    73,    74,   117,
     161,   426,    39,    20,   429,   430,    88,   143,   433,   140,
     112,    10,    11,    12,    13,    14,    15,    16,    17,   383,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    91,     0,   115,   117,   111,   248,   119,   157,
     206,   119,   123,   180,   125,   126,   127,   106,   129,   130,
     131,   129,   161,   134,   135,    17,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     3,   206,
     146,   152,   107,   161,    36,   416,   107,   159,    77,   174,
     157,    96,   219,   126,    21,    90,   161,   490,    50,   111,
     171,     3,   151,   517,   518,    73,    74,   125,    88,   523,
     311,   525,    39,   314,    66,   234,   272,   158,   189,   190,
     158,    99,    88,   145,   173,   159,   159,   198,   159,   159,
     159,   158,    56,   269,   132,   271,   292,   117,   116,   161,
     151,   159,   213,   214,    96,   499,    76,   232,    56,   161,
     125,   117,    77,    47,   159,   107,     3,   242,    88,    83,
     112,    48,     3,    88,    88,   292,    60,    61,   583,   296,
     297,   298,   161,    98,    98,    83,   261,   157,   146,   593,
      88,   595,   596,     3,    92,   161,   161,   139,   113,   345,
      98,   606,   158,   159,   158,   159,   323,    91,    39,   335,
      87,   337,   158,   274,   125,   276,   147,     5,    95,   280,
       8,   141,    99,     3,     4,     5,     6,     7,     8,   106,
     161,   140,     3,   117,   295,     3,   145,    17,    18,   116,
      89,   125,   126,     3,   305,    25,   123,    96,   159,   158,
     451,   312,   161,   137,    34,    35,   457,     9,   459,     4,
       5,     6,     7,   324,   325,   472,    46,   328,   159,    49,
     159,    51,    52,   334,   159,     3,     4,     5,     6,     7,
       8,    13,   343,    15,    16,   346,   160,   161,   159,    17,
      18,    26,    27,    28,    29,    30,   159,    25,    26,   438,
     439,   440,   441,   159,   443,    39,    34,   446,   447,   448,
     371,     3,   160,   161,   453,   454,   455,    26,    46,   458,
       3,    49,     3,    51,    52,   160,   161,   160,   161,    53,
      54,    59,   160,   161,   159,    63,   160,   161,   160,   161,
     120,   126,   403,     3,     4,     5,     6,     7,     8,   160,
     161,   160,   161,   414,   415,    83,     3,    17,    18,     3,
     421,   422,   160,   161,     3,    25,   160,   161,   160,   161,
     160,   151,   152,   153,   154,   155,   156,   160,   161,   159,
      95,   160,   161,    43,   160,   161,    46,   160,   161,    49,
     118,    51,    52,   121,   122,   123,   108,   510,   511,     3,
     513,   514,   515,   160,   161,   110,   519,   520,   521,   470,
     471,   524,   473,     3,   475,   476,     3,     4,     5,     6,
       7,     8,     3,   151,   152,   153,   154,   155,   156,   143,
      17,    18,     3,     4,     5,     6,     7,     8,    25,   160,
     100,   160,   161,   160,   161,    30,    17,    18,   244,   245,
     303,   304,   419,   420,    25,    26,   160,   160,   160,    46,
     160,   159,    49,   159,    51,    52,   159,    96,     3,     4,
       5,     6,     7,     8,   134,    46,    96,   159,    49,    96,
      51,    52,    17,    18,   545,    95,   109,    95,     3,    41,
      25,   151,   152,   153,   154,   155,   156,    20,     3,     4,
       5,     6,     7,     8,    24,    25,    26,    27,    28,    29,
      30,    46,    17,    18,    49,   101,    51,    52,   159,   111,
      25,    11,    12,    13,    14,    15,    16,    17,    94,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    46,   160,    80,    49,   160,    51,    52,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   146,
     160,    66,    79,     3,   151,   152,   153,   154,   155,   156,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     151,   152,   153,   154,   155,   156,     3,   159,    96,   159,
       3,   126,     3,     4,     5,     6,     7,     8,    23,    24,
      25,    26,    27,    28,    29,    30,    17,    18,    96,     3,
       3,   160,   160,   160,    25,   160,   151,   152,   153,   154,
     155,   156,     3,     4,     5,     6,     7,     8,   160,   160,
     160,    41,    85,    95,   159,    46,    17,    18,    49,   161,
      51,    52,    20,   159,    25,   159,   151,   152,   153,   154,
     155,   156,   159,   159,   137,    66,   159,   159,     3,     4,
       5,     6,     7,     8,    20,    46,   159,     3,    49,   160,
      51,    52,    17,    18,     3,     4,     5,     6,     7,     8,
      25,     3,   159,   159,    42,    66,   159,    20,    17,    18,
     159,   159,     5,     4,   161,     5,    25,     5,     3,   115,
      92,    46,   160,   160,    49,   107,    51,    52,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    46,     4,    96,
      49,    66,    51,    52,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     5,   125,     4,     4,
     151,   152,   153,   154,   155,   156,    10,    11,    12,    13,
      14,    15,    16,    17,   161,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     4,    35,   160,
     151,   152,   153,   154,   155,   156,    10,    11,    12,    13,
      14,    15,    16,    17,   285,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   120,   414,   529,
     152,   158,   257,   301,   175,    41,   151,   152,   153,   154,
     155,   156,   375,    27,   270,   109,   376,   476,    56,   384,
      -1,   522,   151,   152,   153,   154,   155,   156,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,   161,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    79,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,   161,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
     161,    57,    58,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    81,    82,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,   160,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    40,    -1,    42,
      -1,    44,    45,    -1,    -1,    13,    14,    15,    16,    17,
      53,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    67,    68,    69,    70,    -1,    72,
      -1,    -1,    75,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
      -1,   124,   125,    -1,   127,   128,    -1,   130,   131,    -1,
      -1,    -1,   135,   136,    -1,    -1,    -1,    -1,   133,   142,
      -1,   144,    -1,    -1,    -1,   148,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      73,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,     3,    -1,    -1,    -1,    37,
      -1,    73,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    39,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,    60,    61,    91,   117,   125,   126,   137,   163,
     170,   171,   201,   205,   206,   214,   215,   218,   220,   234,
      55,   119,   129,   221,   202,   132,   208,   208,     8,   235,
     236,   182,   208,   216,     0,   157,    90,   219,   219,   132,
       3,    77,    88,    98,   113,   203,     3,    56,    83,    88,
      92,    98,   209,   209,     9,    20,   161,     3,     4,     5,
       6,     7,     8,    17,    18,    25,    26,    34,    46,    49,
      51,    52,    59,    63,    83,   118,   121,   122,   123,   151,
     152,   153,   154,   155,   156,   164,   183,   184,    88,    98,
       3,   159,   186,   187,   188,   190,   200,   163,   151,     3,
       3,   219,   158,   204,     3,   203,    77,   161,     3,     3,
     164,   164,   236,   158,   159,     9,   164,   164,   164,   146,
     164,   169,   159,   159,   159,   159,   159,   159,     3,    10,
      11,    12,    13,    14,    15,    16,    17,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    39,
     185,    77,   161,   158,   185,   171,   186,   125,   161,    48,
      87,    99,   106,   116,   123,   191,   193,    39,   189,     3,
      26,   145,   172,   140,   186,     3,   125,   159,   210,   125,
     210,     3,   164,   165,   166,   164,   164,   169,    73,    74,
     146,   171,   164,   165,    43,   100,   134,   165,   167,   164,
     164,    26,   164,   164,   164,   164,   159,     6,    17,   107,
     164,   164,    13,    15,    16,   164,    34,    35,   120,   159,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,     3,   186,   184,     3,    76,    88,   141,   197,   160,
     160,     3,   217,   187,    99,   116,   194,   188,    95,   108,
     192,     3,    88,   117,   158,   159,   232,   233,   164,   110,
     178,   186,   172,   204,     3,   213,     3,   181,   143,   213,
     143,   171,   161,   160,   133,    73,    74,   164,   164,   160,
      77,   160,   160,   164,   161,   161,   160,   160,   165,   171,
       6,   107,   159,   164,   164,    38,   159,   159,   159,   171,
     172,   185,    96,    96,    96,    20,   158,   161,   172,   192,
     192,    95,   109,   188,    95,     3,    78,    89,    96,   112,
     222,   223,   224,   189,    41,   101,   179,   172,    20,   111,
     161,   207,   160,   161,   159,   211,   207,   211,   207,   165,
     164,   164,    73,   133,   164,    77,    94,   168,   168,   160,
     160,   165,   171,   164,   171,   171,   171,   160,    80,   173,
     197,    79,   198,   198,   198,   164,     3,     3,   178,   188,
     164,   109,   140,   195,   196,   188,   159,   232,    89,    96,
     159,   159,    96,   160,   161,     3,   171,   164,   174,   164,
      66,   164,    96,     3,     3,    66,   164,   212,   161,   207,
     207,    73,   164,    79,   160,   165,   164,   160,   160,   160,
     160,   160,   160,   160,    41,    85,   177,    95,   159,   159,
     159,    20,    20,   158,   179,   164,   159,   196,   222,   159,
     159,   181,   181,   159,   232,   223,    40,    42,    44,    45,
      53,    67,    68,    69,    70,    72,    75,    86,    93,    97,
     102,   103,   104,   105,   114,   124,   125,   127,   128,   130,
     131,   135,   136,   142,   144,   148,   230,    37,    65,   175,
     161,   161,   137,    20,   160,   161,   159,   164,   160,    57,
      58,    62,    64,    81,    82,    84,   148,   149,   174,   164,
     178,     3,   199,   199,   199,   164,   164,     3,   181,   160,
     181,   181,   160,   160,   181,   159,   226,   226,   226,   226,
     226,   226,   159,   226,   226,   226,    42,   227,   227,   226,
     226,   226,   159,   227,   226,   227,   159,   159,   225,   164,
     164,   213,    66,   164,    66,   164,   212,   160,   147,   176,
     179,   160,   161,   160,   160,    20,   160,   232,   160,   160,
     160,     5,   228,   229,   228,   228,     4,   231,   228,   228,
     228,   229,   229,   228,   228,   228,   231,   229,   228,   229,
       5,     5,    17,    36,    50,    66,    96,   107,   112,   139,
     175,   160,   115,    92,   180,     3,   164,   160,   161,   138,
     150,    53,    54,   160,   161,   160,   160,   160,   107,     4,
       4,     5,     6,     7,    96,    96,   159,   181,     5,   125,
       4,   229,     4,   229,   229,   181,   160,     4,   160
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   162,   163,   163,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   165,   165,
     166,   166,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   167,   167,   167,   164,   164,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   164,
     164,   164,   164,   169,   169,   164,   164,   164,   164,   164,
     164,   164,   170,   171,   171,   172,   172,   173,   173,   174,
     174,   175,   175,   175,   176,   176,   177,   177,   178,   178,
     179,   179,   179,   180,   180,   181,   181,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   183,   183,   183,   184,
     185,   185,   185,   186,   186,   187,   187,   188,   188,   188,
     188,   189,   189,   190,   190,   190,   190,   190,   191,   191,
     191,   192,   192,   193,   193,   194,   194,   194,   195,   195,
     196,   196,   197,   197,   197,   197,   198,   198,   199,   199,
     200,   170,   201,   202,   202,   202,   202,   201,   203,   203,
     204,   204,   201,   170,   205,   170,   206,   207,   207,   208,
     208,   208,   208,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   212,   212,   206,   213,   213,   213,   213,   170,
     214,   214,   214,   170,   215,   216,   216,   216,   217,   217,
     217,   217,   170,   218,   218,   219,   219,   170,   220,   220,
     220,   220,   220,   220,   221,   221,   222,   222,   223,   223,
     223,   223,   223,   224,   223,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   226,   226,
     226,   227,   227,   228,   228,   228,   229,   229,   229,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   231,
     231,   232,   233,   233,   233,   170,   234,   235,   235,   236,
     236
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
       0,     2,     7,     1,     3,     1,     8,     0,     4,     0,
       2,     2,     2,     2,     1,     0,     0,     3,     3,     5,
       1,     1,     3,     3,     7,     3,     3,     5,     5,     1,
       8,     7,     7,     1,     8,     0,     2,     2,     3,     5,
       5,     7,     1,     4,     4,     0,     2,     1,     8,    10,
       9,     6,    11,     8,     0,     1,     1,     3,     5,     4,
       4,     5,     5,     0,     4,     0,     3,     2,     3,     3,
       3,     3,     2,     5,     3,     3,     2,     3,     0,     3,
       5,     0,     1,     0,     2,     2,     0,     4,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     3,     5,     2,     4,     1,
       1,     1,     1,     3,     3,     3,     3,     5,     5,     1,
       3,     3,     0,     1,     1,     1,     2,     1,     3,     3,
       3
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
#line 245 "evoparser.y"
    {
        emit("NAME %s", (yyvsp[0].strval));
        GetSelection((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 1932 "evoparser.tab.c"
    break;

  case 5: /* expr: NAME '.' NAME  */
#line 250 "evoparser.y"
                                                                                { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 1938 "evoparser.tab.c"
    break;

  case 6: /* expr: USERVAR  */
#line 251 "evoparser.y"
                                                                                { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 1944 "evoparser.tab.c"
    break;

  case 7: /* expr: STRING  */
#line 253 "evoparser.y"
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
#line 1964 "evoparser.tab.c"
    break;

  case 8: /* expr: INTNUM  */
#line 269 "evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[0].intval));
        char buf[32];
        sprintf(buf, "%d", (yyvsp[0].intval));
        GetInsertions(buf);
    }
#line 1975 "evoparser.tab.c"
    break;

  case 9: /* expr: APPROXNUM  */
#line 276 "evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[0].floatval));
        char buf[64];
        sprintf(buf, "%g", (yyvsp[0].floatval));
        GetInsertions(buf);
    }
#line 1986 "evoparser.tab.c"
    break;

  case 10: /* expr: BOOL  */
#line 282 "evoparser.y"
                                                                                { emit("BOOL %d", (yyvsp[0].intval)); }
#line 1992 "evoparser.tab.c"
    break;

  case 11: /* expr: expr '+' expr  */
#line 285 "evoparser.y"
                                                                                { emit("ADD"); }
#line 1998 "evoparser.tab.c"
    break;

  case 12: /* expr: expr '-' expr  */
#line 286 "evoparser.y"
                                                                                { emit("SUB"); }
#line 2004 "evoparser.tab.c"
    break;

  case 13: /* expr: expr '*' expr  */
#line 287 "evoparser.y"
                                                                                { emit("MUL"); }
#line 2010 "evoparser.tab.c"
    break;

  case 14: /* expr: expr '/' expr  */
#line 288 "evoparser.y"
                                                                                { emit("DIV"); }
#line 2016 "evoparser.tab.c"
    break;

  case 15: /* expr: expr '%' expr  */
#line 289 "evoparser.y"
                                                                                { emit("MOD"); }
#line 2022 "evoparser.tab.c"
    break;

  case 16: /* expr: expr MOD expr  */
#line 290 "evoparser.y"
                                                                                { emit("MOD"); }
#line 2028 "evoparser.tab.c"
    break;

  case 17: /* expr: '-' expr  */
#line 291 "evoparser.y"
                                                                                { emit("NEG"); }
#line 2034 "evoparser.tab.c"
    break;

  case 18: /* expr: expr ANDOP expr  */
#line 292 "evoparser.y"
                                                                                { emit("AND"); }
#line 2040 "evoparser.tab.c"
    break;

  case 19: /* expr: expr OR expr  */
#line 293 "evoparser.y"
                                                                                { emit("OR"); }
#line 2046 "evoparser.tab.c"
    break;

  case 20: /* expr: expr XOR expr  */
#line 294 "evoparser.y"
                                                                                { emit("XOR"); }
#line 2052 "evoparser.tab.c"
    break;

  case 21: /* expr: expr '|' expr  */
#line 295 "evoparser.y"
                                                                                { emit("BITOR"); }
#line 2058 "evoparser.tab.c"
    break;

  case 22: /* expr: expr '&' expr  */
#line 296 "evoparser.y"
                                                                                { emit("BITAND"); }
#line 2064 "evoparser.tab.c"
    break;

  case 23: /* expr: expr '^' expr  */
#line 297 "evoparser.y"
                                                                                { emit("BITXOR"); }
#line 2070 "evoparser.tab.c"
    break;

  case 24: /* expr: expr SHIFT expr  */
#line 298 "evoparser.y"
                                                                                { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2076 "evoparser.tab.c"
    break;

  case 25: /* expr: NOT expr  */
#line 299 "evoparser.y"
                                                                                { emit("NOT"); }
#line 2082 "evoparser.tab.c"
    break;

  case 26: /* expr: '!' expr  */
#line 300 "evoparser.y"
                                                                                { emit("NOT"); }
#line 2088 "evoparser.tab.c"
    break;

  case 27: /* expr: expr COMPARISON expr  */
#line 302 "evoparser.y"
    {
        emit("CMP %d", (yyvsp[-1].subtok));
    }
#line 2096 "evoparser.tab.c"
    break;

  case 28: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 306 "evoparser.y"
                                                                                { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2102 "evoparser.tab.c"
    break;

  case 29: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 307 "evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2108 "evoparser.tab.c"
    break;

  case 30: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 308 "evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2114 "evoparser.tab.c"
    break;

  case 31: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 309 "evoparser.y"
                                                                                { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2120 "evoparser.tab.c"
    break;

  case 32: /* expr: expr IS NULLX  */
#line 312 "evoparser.y"
                                                                                { emit("ISNULL"); }
#line 2126 "evoparser.tab.c"
    break;

  case 33: /* expr: expr IS NOT NULLX  */
#line 313 "evoparser.y"
                                                                                { emit("ISNULL"); emit("NOT"); }
#line 2132 "evoparser.tab.c"
    break;

  case 34: /* expr: expr IS BOOL  */
#line 314 "evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2138 "evoparser.tab.c"
    break;

  case 35: /* expr: expr IS NOT BOOL  */
#line 315 "evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2144 "evoparser.tab.c"
    break;

  case 36: /* expr: USERVAR ASSIGN expr  */
#line 316 "evoparser.y"
                                                                                { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2150 "evoparser.tab.c"
    break;

  case 37: /* expr: expr BETWEEN expr AND expr  */
#line 319 "evoparser.y"
                                                                                { emit("BETWEEN"); }
#line 2156 "evoparser.tab.c"
    break;

  case 38: /* val_list: expr  */
#line 322 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2162 "evoparser.tab.c"
    break;

  case 39: /* val_list: expr ',' val_list  */
#line 323 "evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2168 "evoparser.tab.c"
    break;

  case 40: /* opt_val_list: %empty  */
#line 326 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2174 "evoparser.tab.c"
    break;

  case 42: /* expr: expr IN '(' val_list ')'  */
#line 330 "evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2180 "evoparser.tab.c"
    break;

  case 43: /* expr: expr NOT IN '(' val_list ')'  */
#line 331 "evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2186 "evoparser.tab.c"
    break;

  case 44: /* expr: expr IN '(' select_stmt ')'  */
#line 332 "evoparser.y"
                                                                                { emit("CMPANYSELECT 4"); }
#line 2192 "evoparser.tab.c"
    break;

  case 45: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 333 "evoparser.y"
                                                                                { emit("CMPALLSELECT 3"); }
#line 2198 "evoparser.tab.c"
    break;

  case 46: /* expr: EXISTS '(' select_stmt ')'  */
#line 334 "evoparser.y"
                                                                                { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2204 "evoparser.tab.c"
    break;

  case 47: /* expr: NAME '(' opt_val_list ')'  */
#line 338 "evoparser.y"
                                                                                { emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2210 "evoparser.tab.c"
    break;

  case 48: /* expr: FCOUNT '(' '*' ')'  */
#line 342 "evoparser.y"
                                                                                { emit("COUNTALL"); }
#line 2216 "evoparser.tab.c"
    break;

  case 49: /* expr: FCOUNT '(' expr ')'  */
#line 343 "evoparser.y"
                                                                                { emit(" CALL 1 COUNT"); }
#line 2222 "evoparser.tab.c"
    break;

  case 50: /* expr: FSUBSTRING '(' val_list ')'  */
#line 345 "evoparser.y"
                                                                                { emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2228 "evoparser.tab.c"
    break;

  case 51: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 346 "evoparser.y"
                                                                                { emit("CALL 2 SUBSTR"); }
#line 2234 "evoparser.tab.c"
    break;

  case 52: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 347 "evoparser.y"
                                                                                { emit("CALL 3 SUBSTR"); }
#line 2240 "evoparser.tab.c"
    break;

  case 53: /* expr: FTRIM '(' val_list ')'  */
#line 348 "evoparser.y"
                                                                                { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2246 "evoparser.tab.c"
    break;

  case 54: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 349 "evoparser.y"
                                                                                { emit("CALL 3 TRIM"); }
#line 2252 "evoparser.tab.c"
    break;

  case 55: /* trim_ltb: LEADING  */
#line 352 "evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2258 "evoparser.tab.c"
    break;

  case 56: /* trim_ltb: TRAILING  */
#line 353 "evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2264 "evoparser.tab.c"
    break;

  case 57: /* trim_ltb: BOTH  */
#line 354 "evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2270 "evoparser.tab.c"
    break;

  case 58: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 357 "evoparser.y"
                                                                                { emit("CALL 3 DATE_ADD"); }
#line 2276 "evoparser.tab.c"
    break;

  case 59: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 358 "evoparser.y"
                                                                                { emit("CALL 3 DATE_SUB"); }
#line 2282 "evoparser.tab.c"
    break;

  case 60: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 361 "evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2288 "evoparser.tab.c"
    break;

  case 61: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 362 "evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2294 "evoparser.tab.c"
    break;

  case 62: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 363 "evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2300 "evoparser.tab.c"
    break;

  case 63: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 364 "evoparser.y"
                                                                                { emit("NUMBER 4"); }
#line 2306 "evoparser.tab.c"
    break;

  case 64: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 365 "evoparser.y"
                                                                                { emit("NUMBER 5"); }
#line 2312 "evoparser.tab.c"
    break;

  case 65: /* interval_exp: INTERVAL expr YEAR  */
#line 366 "evoparser.y"
                                                                                { emit("NUMBER 6"); }
#line 2318 "evoparser.tab.c"
    break;

  case 66: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 367 "evoparser.y"
                                                                                { emit("NUMBER 7"); }
#line 2324 "evoparser.tab.c"
    break;

  case 67: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 368 "evoparser.y"
                                                                                { emit("NUMBER 8"); }
#line 2330 "evoparser.tab.c"
    break;

  case 68: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 369 "evoparser.y"
                                                                                { emit("NUMBER 9"); }
#line 2336 "evoparser.tab.c"
    break;

  case 69: /* expr: CASE expr case_list END  */
#line 372 "evoparser.y"
                                                                                { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2342 "evoparser.tab.c"
    break;

  case 70: /* expr: CASE expr case_list ELSE expr END  */
#line 373 "evoparser.y"
                                                                                { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2348 "evoparser.tab.c"
    break;

  case 71: /* expr: CASE case_list END  */
#line 374 "evoparser.y"
                                                                                { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2354 "evoparser.tab.c"
    break;

  case 72: /* expr: CASE case_list ELSE expr END  */
#line 375 "evoparser.y"
                                                                                { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2360 "evoparser.tab.c"
    break;

  case 73: /* case_list: WHEN expr THEN expr  */
#line 378 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2366 "evoparser.tab.c"
    break;

  case 74: /* case_list: case_list WHEN expr THEN expr  */
#line 379 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2372 "evoparser.tab.c"
    break;

  case 75: /* expr: expr LIKE expr  */
#line 382 "evoparser.y"
                                                                                { emit("LIKE"); }
#line 2378 "evoparser.tab.c"
    break;

  case 76: /* expr: expr NOT LIKE expr  */
#line 383 "evoparser.y"
                                                                                { emit("LIKE"); emit("NOT"); }
#line 2384 "evoparser.tab.c"
    break;

  case 77: /* expr: expr REGEXP expr  */
#line 386 "evoparser.y"
                                                                                { emit("REGEXP"); }
#line 2390 "evoparser.tab.c"
    break;

  case 78: /* expr: expr NOT REGEXP expr  */
#line 387 "evoparser.y"
                                                                                { emit("REGEXP"); emit("NOT"); }
#line 2396 "evoparser.tab.c"
    break;

  case 79: /* expr: CURRENT_TIMESTAMP  */
#line 390 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2402 "evoparser.tab.c"
    break;

  case 80: /* expr: CURRENT_DATE  */
#line 391 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2408 "evoparser.tab.c"
    break;

  case 81: /* expr: CURRENT_TIME  */
#line 392 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2414 "evoparser.tab.c"
    break;

  case 82: /* stmt: select_stmt  */
#line 397 "evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[0].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    }
#line 2426 "evoparser.tab.c"
    break;

  case 83: /* select_stmt: SELECT select_opts select_expr_list  */
#line 406 "evoparser.y"
                                                                                { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2432 "evoparser.tab.c"
    break;

  case 84: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 411 "evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval));
        if ((yyvsp[-8].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    }
#line 2444 "evoparser.tab.c"
    break;

  case 86: /* opt_where: WHERE expr  */
#line 421 "evoparser.y"
                                                                                { emit("WHERE"); }
#line 2450 "evoparser.tab.c"
    break;

  case 88: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 423 "evoparser.y"
                                                                                { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2456 "evoparser.tab.c"
    break;

  case 89: /* groupby_list: expr opt_asc_desc  */
#line 426 "evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2462 "evoparser.tab.c"
    break;

  case 90: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 427 "evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2468 "evoparser.tab.c"
    break;

  case 91: /* opt_asc_desc: %empty  */
#line 430 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2474 "evoparser.tab.c"
    break;

  case 92: /* opt_asc_desc: ASC  */
#line 431 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2480 "evoparser.tab.c"
    break;

  case 93: /* opt_asc_desc: DESC  */
#line 432 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2486 "evoparser.tab.c"
    break;

  case 94: /* opt_with_rollup: %empty  */
#line 435 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2492 "evoparser.tab.c"
    break;

  case 95: /* opt_with_rollup: WITH ROLLUP  */
#line 436 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2498 "evoparser.tab.c"
    break;

  case 97: /* opt_having: HAVING expr  */
#line 440 "evoparser.y"
                                                                                { emit("HAVING"); }
#line 2504 "evoparser.tab.c"
    break;

  case 99: /* opt_orderby: ORDER BY groupby_list  */
#line 444 "evoparser.y"
                                                                                { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2510 "evoparser.tab.c"
    break;

  case 101: /* opt_limit: LIMIT expr  */
#line 447 "evoparser.y"
                                                                                { emit("LIMIT 1"); }
#line 2516 "evoparser.tab.c"
    break;

  case 102: /* opt_limit: LIMIT expr ',' expr  */
#line 448 "evoparser.y"
                                                                                { emit("LIMIT 2"); }
#line 2522 "evoparser.tab.c"
    break;

  case 104: /* opt_into_list: INTO column_list  */
#line 452 "evoparser.y"
                                                                                { emit("INTO %d", (yyvsp[0].intval)); }
#line 2528 "evoparser.tab.c"
    break;

  case 105: /* column_list: NAME  */
#line 455 "evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2534 "evoparser.tab.c"
    break;

  case 106: /* column_list: column_list ',' NAME  */
#line 456 "evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2540 "evoparser.tab.c"
    break;

  case 107: /* select_opts: %empty  */
#line 459 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2546 "evoparser.tab.c"
    break;

  case 108: /* select_opts: select_opts ALL  */
#line 460 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2552 "evoparser.tab.c"
    break;

  case 109: /* select_opts: select_opts DISTINCT  */
#line 461 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2558 "evoparser.tab.c"
    break;

  case 110: /* select_opts: select_opts DISTINCTROW  */
#line 462 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2564 "evoparser.tab.c"
    break;

  case 111: /* select_opts: select_opts HIGH_PRIORITY  */
#line 463 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2570 "evoparser.tab.c"
    break;

  case 112: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 464 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2576 "evoparser.tab.c"
    break;

  case 113: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 465 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2582 "evoparser.tab.c"
    break;

  case 114: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 466 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2588 "evoparser.tab.c"
    break;

  case 115: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 467 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[-1].intval) | 0200; }
#line 2594 "evoparser.tab.c"
    break;

  case 116: /* select_expr_list: select_expr  */
#line 470 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2600 "evoparser.tab.c"
    break;

  case 117: /* select_expr_list: select_expr_list ',' select_expr  */
#line 471 "evoparser.y"
                                                                                {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2606 "evoparser.tab.c"
    break;

  case 118: /* select_expr_list: '*'  */
#line 473 "evoparser.y"
    {
        emit("SELECTALL");
        (yyval.intval) = 3;
    }
#line 2615 "evoparser.tab.c"
    break;

  case 120: /* opt_as_alias: AS NAME  */
#line 480 "evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2621 "evoparser.tab.c"
    break;

  case 121: /* opt_as_alias: NAME  */
#line 481 "evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2627 "evoparser.tab.c"
    break;

  case 123: /* table_references: table_reference  */
#line 485 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2633 "evoparser.tab.c"
    break;

  case 124: /* table_references: table_references ',' table_reference  */
#line 486 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2639 "evoparser.tab.c"
    break;

  case 127: /* table_factor: NAME opt_as_alias index_hint  */
#line 495 "evoparser.y"
    {
        emit("TABLE %s", (yyvsp[-2].strval));
        GetSelTableName((yyvsp[-2].strval));
        free((yyvsp[-2].strval));
    }
#line 2649 "evoparser.tab.c"
    break;

  case 128: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 500 "evoparser.y"
                                                                                { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2655 "evoparser.tab.c"
    break;

  case 129: /* table_factor: table_subquery opt_as NAME  */
#line 501 "evoparser.y"
                                                                                { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2661 "evoparser.tab.c"
    break;

  case 130: /* table_factor: '(' table_references ')'  */
#line 502 "evoparser.y"
                                                                                { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2667 "evoparser.tab.c"
    break;

  case 133: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 511 "evoparser.y"
                                                                                { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2673 "evoparser.tab.c"
    break;

  case 134: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 513 "evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2679 "evoparser.tab.c"
    break;

  case 135: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 515 "evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2685 "evoparser.tab.c"
    break;

  case 136: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 517 "evoparser.y"
                                                                                { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2691 "evoparser.tab.c"
    break;

  case 137: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 519 "evoparser.y"
                                                                                { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2697 "evoparser.tab.c"
    break;

  case 138: /* opt_inner_cross: %empty  */
#line 522 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2703 "evoparser.tab.c"
    break;

  case 139: /* opt_inner_cross: INNER  */
#line 523 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2709 "evoparser.tab.c"
    break;

  case 140: /* opt_inner_cross: CROSS  */
#line 524 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2715 "evoparser.tab.c"
    break;

  case 141: /* opt_outer: %empty  */
#line 527 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2721 "evoparser.tab.c"
    break;

  case 142: /* opt_outer: OUTER  */
#line 528 "evoparser.y"
                                                                                {(yyval.intval) = 4; }
#line 2727 "evoparser.tab.c"
    break;

  case 143: /* left_or_right: LEFT  */
#line 531 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2733 "evoparser.tab.c"
    break;

  case 144: /* left_or_right: RIGHT  */
#line 532 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2739 "evoparser.tab.c"
    break;

  case 145: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 535 "evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2745 "evoparser.tab.c"
    break;

  case 146: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 536 "evoparser.y"
                                                                                { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2751 "evoparser.tab.c"
    break;

  case 147: /* opt_left_or_right_outer: %empty  */
#line 537 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2757 "evoparser.tab.c"
    break;

  case 150: /* join_condition: ON expr  */
#line 544 "evoparser.y"
                                                                                { emit("ONEXPR"); }
#line 2763 "evoparser.tab.c"
    break;

  case 151: /* join_condition: USING '(' column_list ')'  */
#line 545 "evoparser.y"
                                                                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 2769 "evoparser.tab.c"
    break;

  case 152: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 550 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 2775 "evoparser.tab.c"
    break;

  case 153: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 552 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 2781 "evoparser.tab.c"
    break;

  case 154: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 554 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 2787 "evoparser.tab.c"
    break;

  case 156: /* opt_for_join: FOR JOIN  */
#line 558 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2793 "evoparser.tab.c"
    break;

  case 157: /* opt_for_join: %empty  */
#line 559 "evoparser.y"
            { (yyval.intval) = 0; }
#line 2799 "evoparser.tab.c"
    break;

  case 158: /* index_list: NAME  */
#line 562 "evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2805 "evoparser.tab.c"
    break;

  case 159: /* index_list: index_list ',' NAME  */
#line 563 "evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2811 "evoparser.tab.c"
    break;

  case 160: /* table_subquery: '(' select_stmt ')'  */
#line 566 "evoparser.y"
                                                                                { emit("SUBQUERY"); }
#line 2817 "evoparser.tab.c"
    break;

  case 161: /* stmt: delete_stmt  */
#line 571 "evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    }
#line 2826 "evoparser.tab.c"
    break;

  case 162: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 579 "evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval));
        GetDelTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 2836 "evoparser.tab.c"
    break;

  case 163: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 586 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2842 "evoparser.tab.c"
    break;

  case 164: /* delete_opts: delete_opts QUICK  */
#line 587 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2848 "evoparser.tab.c"
    break;

  case 165: /* delete_opts: delete_opts IGNORE  */
#line 588 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2854 "evoparser.tab.c"
    break;

  case 166: /* delete_opts: %empty  */
#line 589 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2860 "evoparser.tab.c"
    break;

  case 167: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 593 "evoparser.y"
                                                                                { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2866 "evoparser.tab.c"
    break;

  case 168: /* delete_list: NAME opt_dot_star  */
#line 596 "evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2872 "evoparser.tab.c"
    break;

  case 169: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 597 "evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2878 "evoparser.tab.c"
    break;

  case 172: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 602 "evoparser.y"
                                                                                        { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2884 "evoparser.tab.c"
    break;

  case 173: /* stmt: drop_table_stmt  */
#line 607 "evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    }
#line 2893 "evoparser.tab.c"
    break;

  case 174: /* drop_table_stmt: DROP TABLE NAME  */
#line 614 "evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[0].strval));
        GetDropTableName((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 2903 "evoparser.tab.c"
    break;

  case 175: /* stmt: insert_stmt  */
#line 622 "evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    }
#line 2912 "evoparser.tab.c"
    break;

  case 176: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 629 "evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval));
        GetInsertionTableName((yyvsp[-4].strval));
        free((yyvsp[-4].strval));
    }
#line 2922 "evoparser.tab.c"
    break;

  case 178: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 637 "evoparser.y"
                                          { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2928 "evoparser.tab.c"
    break;

  case 179: /* insert_opts: %empty  */
#line 640 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2934 "evoparser.tab.c"
    break;

  case 180: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 641 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2940 "evoparser.tab.c"
    break;

  case 181: /* insert_opts: insert_opts DELAYED  */
#line 642 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2946 "evoparser.tab.c"
    break;

  case 182: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 643 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2952 "evoparser.tab.c"
    break;

  case 183: /* insert_opts: insert_opts IGNORE  */
#line 644 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2958 "evoparser.tab.c"
    break;

  case 187: /* opt_col_names: '(' column_list ')'  */
#line 651 "evoparser.y"
                                                                                { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 2964 "evoparser.tab.c"
    break;

  case 188: /* insert_vals_list: '(' insert_vals ')'  */
#line 654 "evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2970 "evoparser.tab.c"
    break;

  case 189: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 655 "evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2976 "evoparser.tab.c"
    break;

  case 190: /* insert_vals: expr  */
#line 658 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2982 "evoparser.tab.c"
    break;

  case 191: /* insert_vals: DEFAULT  */
#line 659 "evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = 1; }
#line 2988 "evoparser.tab.c"
    break;

  case 192: /* insert_vals: insert_vals ',' expr  */
#line 660 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2994 "evoparser.tab.c"
    break;

  case 193: /* insert_vals: insert_vals ',' DEFAULT  */
#line 661 "evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3000 "evoparser.tab.c"
    break;

  case 194: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 665 "evoparser.y"
                                                                                { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3006 "evoparser.tab.c"
    break;

  case 195: /* insert_asgn_list: NAME COMPARISON expr  */
#line 668 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3012 "evoparser.tab.c"
    break;

  case 196: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 669 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3018 "evoparser.tab.c"
    break;

  case 197: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 670 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3024 "evoparser.tab.c"
    break;

  case 198: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 671 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3030 "evoparser.tab.c"
    break;

  case 199: /* stmt: replace_stmt  */
#line 677 "evoparser.y"
                                                                                { emit("STMT"); }
#line 3036 "evoparser.tab.c"
    break;

  case 200: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 683 "evoparser.y"
                                                                                { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3042 "evoparser.tab.c"
    break;

  case 201: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 688 "evoparser.y"
                                                                                { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3048 "evoparser.tab.c"
    break;

  case 202: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 693 "evoparser.y"
                                                                                { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3054 "evoparser.tab.c"
    break;

  case 203: /* stmt: update_stmt  */
#line 698 "evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    }
#line 3063 "evoparser.tab.c"
    break;

  case 204: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 705 "evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval));
    }
#line 3071 "evoparser.tab.c"
    break;

  case 205: /* update_opts: %empty  */
#line 710 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3077 "evoparser.tab.c"
    break;

  case 206: /* update_opts: insert_opts LOW_PRIORITY  */
#line 711 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3083 "evoparser.tab.c"
    break;

  case 207: /* update_opts: insert_opts IGNORE  */
#line 712 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3089 "evoparser.tab.c"
    break;

  case 208: /* update_asgn_list: NAME COMPARISON expr  */
#line 717 "evoparser.y"
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
#line 3104 "evoparser.tab.c"
    break;

  case 209: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 728 "evoparser.y"
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
#line 3119 "evoparser.tab.c"
    break;

  case 210: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 739 "evoparser.y"
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
#line 3134 "evoparser.tab.c"
    break;

  case 211: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 750 "evoparser.y"
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
#line 3149 "evoparser.tab.c"
    break;

  case 212: /* stmt: create_database_stmt  */
#line 763 "evoparser.y"
                                                                                { emit("STMT"); }
#line 3155 "evoparser.tab.c"
    break;

  case 213: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 767 "evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3161 "evoparser.tab.c"
    break;

  case 214: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 768 "evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3167 "evoparser.tab.c"
    break;

  case 215: /* opt_if_not_exists: %empty  */
#line 771 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3173 "evoparser.tab.c"
    break;

  case 216: /* opt_if_not_exists: IF EXISTS  */
#line 772 "evoparser.y"
                                                                                { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3179 "evoparser.tab.c"
    break;

  case 217: /* stmt: create_table_stmt  */
#line 777 "evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    }
#line 3188 "evoparser.tab.c"
    break;

  case 218: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 785 "evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval));
        GetTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 3198 "evoparser.tab.c"
    break;

  case 219: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 793 "evoparser.y"
                                                                                { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval)); free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3204 "evoparser.tab.c"
    break;

  case 220: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 798 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3210 "evoparser.tab.c"
    break;

  case 221: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 802 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3216 "evoparser.tab.c"
    break;

  case 222: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 807 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval)); free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3222 "evoparser.tab.c"
    break;

  case 223: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 811 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval)); free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3228 "evoparser.tab.c"
    break;

  case 224: /* opt_temporary: %empty  */
#line 814 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3234 "evoparser.tab.c"
    break;

  case 225: /* opt_temporary: TEMPORARY  */
#line 815 "evoparser.y"
                                                                                { (yyval.intval) = 1;}
#line 3240 "evoparser.tab.c"
    break;

  case 226: /* create_col_list: create_definition  */
#line 818 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3246 "evoparser.tab.c"
    break;

  case 227: /* create_col_list: create_col_list ',' create_definition  */
#line 819 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3252 "evoparser.tab.c"
    break;

  case 228: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 822 "evoparser.y"
                                                                                { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3258 "evoparser.tab.c"
    break;

  case 229: /* create_definition: KEY '(' column_list ')'  */
#line 823 "evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3264 "evoparser.tab.c"
    break;

  case 230: /* create_definition: INDEX '(' column_list ')'  */
#line 824 "evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3270 "evoparser.tab.c"
    break;

  case 231: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 825 "evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3276 "evoparser.tab.c"
    break;

  case 232: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 826 "evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3282 "evoparser.tab.c"
    break;

  case 233: /* $@1: %empty  */
#line 829 "evoparser.y"
                                                                                { emit("STARTCOL"); }
#line 3288 "evoparser.tab.c"
    break;

  case 234: /* create_definition: $@1 NAME data_type column_atts  */
#line 831 "evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval));
        GetColumnNames((yyvsp[-2].strval));
        GetColumnSize((yyvsp[-1].intval));
        free((yyvsp[-2].strval));
    }
#line 3299 "evoparser.tab.c"
    break;

  case 235: /* column_atts: %empty  */
#line 839 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3305 "evoparser.tab.c"
    break;

  case 236: /* column_atts: column_atts NOT NULLX  */
#line 840 "evoparser.y"
                                                                                { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3311 "evoparser.tab.c"
    break;

  case 238: /* column_atts: column_atts DEFAULT STRING  */
#line 842 "evoparser.y"
                                                                                { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3317 "evoparser.tab.c"
    break;

  case 239: /* column_atts: column_atts DEFAULT INTNUM  */
#line 843 "evoparser.y"
                                                                                { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3323 "evoparser.tab.c"
    break;

  case 240: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 844 "evoparser.y"
                                                                                { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3329 "evoparser.tab.c"
    break;

  case 241: /* column_atts: column_atts DEFAULT BOOL  */
#line 845 "evoparser.y"
                                                                                { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3335 "evoparser.tab.c"
    break;

  case 242: /* column_atts: column_atts AUTO_INCREMENT  */
#line 846 "evoparser.y"
                                                                                { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3341 "evoparser.tab.c"
    break;

  case 243: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 847 "evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3347 "evoparser.tab.c"
    break;

  case 244: /* column_atts: column_atts UNIQUE KEY  */
#line 848 "evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3353 "evoparser.tab.c"
    break;

  case 245: /* column_atts: column_atts PRIMARY KEY  */
#line 849 "evoparser.y"
                                                                                { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3359 "evoparser.tab.c"
    break;

  case 246: /* column_atts: column_atts KEY  */
#line 850 "evoparser.y"
                                                                                { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3365 "evoparser.tab.c"
    break;

  case 247: /* column_atts: column_atts COMMENT STRING  */
#line 851 "evoparser.y"
                                                                                { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3371 "evoparser.tab.c"
    break;

  case 248: /* opt_length: %empty  */
#line 854 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3377 "evoparser.tab.c"
    break;

  case 249: /* opt_length: '(' INTNUM ')'  */
#line 855 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval); }
#line 3383 "evoparser.tab.c"
    break;

  case 250: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 856 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3389 "evoparser.tab.c"
    break;

  case 251: /* opt_binary: %empty  */
#line 859 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3395 "evoparser.tab.c"
    break;

  case 252: /* opt_binary: BINARY  */
#line 860 "evoparser.y"
                                                                                { (yyval.intval) = 4000; }
#line 3401 "evoparser.tab.c"
    break;

  case 253: /* opt_uz: %empty  */
#line 863 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3407 "evoparser.tab.c"
    break;

  case 254: /* opt_uz: opt_uz UNSIGNED  */
#line 864 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3413 "evoparser.tab.c"
    break;

  case 255: /* opt_uz: opt_uz ZEROFILL  */
#line 865 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3419 "evoparser.tab.c"
    break;

  case 257: /* opt_csc: opt_csc CHAR SET STRING  */
#line 869 "evoparser.y"
                                                                                { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3425 "evoparser.tab.c"
    break;

  case 258: /* opt_csc: opt_csc COLLATE STRING  */
#line 870 "evoparser.y"
                                                                                { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3431 "evoparser.tab.c"
    break;

  case 259: /* data_type: BIT opt_length  */
#line 874 "evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3437 "evoparser.tab.c"
    break;

  case 260: /* data_type: TINYINT opt_length opt_uz  */
#line 875 "evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3443 "evoparser.tab.c"
    break;

  case 261: /* data_type: SMALLINT opt_length opt_uz  */
#line 876 "evoparser.y"
                                                                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3449 "evoparser.tab.c"
    break;

  case 262: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 877 "evoparser.y"
                                                                                { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3455 "evoparser.tab.c"
    break;

  case 263: /* data_type: INT opt_length opt_uz  */
#line 878 "evoparser.y"
                                                                                { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3461 "evoparser.tab.c"
    break;

  case 264: /* data_type: INTEGER opt_length opt_uz  */
#line 879 "evoparser.y"
                                                                                { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3467 "evoparser.tab.c"
    break;

  case 265: /* data_type: BIGINT opt_length opt_uz  */
#line 880 "evoparser.y"
                                                                                { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3473 "evoparser.tab.c"
    break;

  case 266: /* data_type: REAL opt_length opt_uz  */
#line 881 "evoparser.y"
                                                                                { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3479 "evoparser.tab.c"
    break;

  case 267: /* data_type: DOUBLE opt_length opt_uz  */
#line 882 "evoparser.y"
                                                                                { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3485 "evoparser.tab.c"
    break;

  case 268: /* data_type: FLOAT opt_length opt_uz  */
#line 883 "evoparser.y"
                                                                                { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3491 "evoparser.tab.c"
    break;

  case 269: /* data_type: DECIMAL opt_length opt_uz  */
#line 884 "evoparser.y"
                                                                                { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3497 "evoparser.tab.c"
    break;

  case 270: /* data_type: DATE  */
#line 885 "evoparser.y"
                                                                                { (yyval.intval) = 100001; }
#line 3503 "evoparser.tab.c"
    break;

  case 271: /* data_type: TIME  */
#line 886 "evoparser.y"
                                                                                { (yyval.intval) = 100002; }
#line 3509 "evoparser.tab.c"
    break;

  case 272: /* data_type: TIMESTAMP  */
#line 887 "evoparser.y"
                                                                                { (yyval.intval) = 100003; }
#line 3515 "evoparser.tab.c"
    break;

  case 273: /* data_type: DATETIME  */
#line 888 "evoparser.y"
                                                                                { (yyval.intval) = 100004; }
#line 3521 "evoparser.tab.c"
    break;

  case 274: /* data_type: YEAR  */
#line 889 "evoparser.y"
                                                                                { (yyval.intval) = 100005; }
#line 3527 "evoparser.tab.c"
    break;

  case 275: /* data_type: CHAR opt_length opt_csc  */
#line 890 "evoparser.y"
                                                                                { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3533 "evoparser.tab.c"
    break;

  case 276: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 891 "evoparser.y"
                                                                                { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3539 "evoparser.tab.c"
    break;

  case 277: /* data_type: BINARY opt_length  */
#line 892 "evoparser.y"
                                                                                { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3545 "evoparser.tab.c"
    break;

  case 278: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 893 "evoparser.y"
                                                                                { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3551 "evoparser.tab.c"
    break;

  case 279: /* data_type: TINYBLOB  */
#line 894 "evoparser.y"
                                                                                { (yyval.intval) = 160001; }
#line 3557 "evoparser.tab.c"
    break;

  case 280: /* data_type: BLOB  */
#line 895 "evoparser.y"
                                                                                { (yyval.intval) = 160002; }
#line 3563 "evoparser.tab.c"
    break;

  case 281: /* data_type: MEDIUMBLOB  */
#line 896 "evoparser.y"
                                                                                { (yyval.intval) = 160003; }
#line 3569 "evoparser.tab.c"
    break;

  case 282: /* data_type: LONGBLOB  */
#line 897 "evoparser.y"
                                                                                { (yyval.intval) = 160004; }
#line 3575 "evoparser.tab.c"
    break;

  case 283: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 898 "evoparser.y"
                                                                                { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3581 "evoparser.tab.c"
    break;

  case 284: /* data_type: TEXT opt_binary opt_csc  */
#line 899 "evoparser.y"
                                                                                { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3587 "evoparser.tab.c"
    break;

  case 285: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 900 "evoparser.y"
                                                                                { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3593 "evoparser.tab.c"
    break;

  case 286: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 901 "evoparser.y"
                                                                                { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3599 "evoparser.tab.c"
    break;

  case 287: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 902 "evoparser.y"
                                                                                { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3605 "evoparser.tab.c"
    break;

  case 288: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 903 "evoparser.y"
                                                                                { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3611 "evoparser.tab.c"
    break;

  case 289: /* enum_list: STRING  */
#line 906 "evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3617 "evoparser.tab.c"
    break;

  case 290: /* enum_list: enum_list ',' STRING  */
#line 907 "evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3623 "evoparser.tab.c"
    break;

  case 291: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 911 "evoparser.y"
                                                                                { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3629 "evoparser.tab.c"
    break;

  case 292: /* opt_ignore_replace: %empty  */
#line 914 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3635 "evoparser.tab.c"
    break;

  case 293: /* opt_ignore_replace: IGNORE  */
#line 915 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3641 "evoparser.tab.c"
    break;

  case 294: /* opt_ignore_replace: REPLACE  */
#line 916 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 3647 "evoparser.tab.c"
    break;

  case 295: /* stmt: set_stmt  */
#line 920 "evoparser.y"
                                                                                { emit("STMT"); }
#line 3653 "evoparser.tab.c"
    break;

  case 299: /* set_expr: USERVAR COMPARISON expr  */
#line 926 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; } emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3659 "evoparser.tab.c"
    break;

  case 300: /* set_expr: USERVAR ASSIGN expr  */
#line 927 "evoparser.y"
                                                                                { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3665 "evoparser.tab.c"
    break;


#line 3669 "evoparser.tab.c"

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

#line 930 "evoparser.y"

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
