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
#line 4 "parser/evoparser.y"

	#define _CRT_SECURE_NO_WARNINGS
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdio.h>
	#include "../db/database.h"

	void yyerror(char *s, ...);
	void emit(char *s, ...);
	int yylex(void);

#line 84 "parser/evoparser.tab.c"

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
  YYSYMBOL_BOOLEAN = 41,                   /* BOOLEAN  */
  YYSYMBOL_BY = 42,                        /* BY  */
  YYSYMBOL_BINARY = 43,                    /* BINARY  */
  YYSYMBOL_BOTH = 44,                      /* BOTH  */
  YYSYMBOL_BIGINT = 45,                    /* BIGINT  */
  YYSYMBOL_BIT = 46,                       /* BIT  */
  YYSYMBOL_CURRENT_TIMESTAMP = 47,         /* CURRENT_TIMESTAMP  */
  YYSYMBOL_CREATE = 48,                    /* CREATE  */
  YYSYMBOL_CROSS = 49,                     /* CROSS  */
  YYSYMBOL_CASE = 50,                      /* CASE  */
  YYSYMBOL_COMMENT = 51,                   /* COMMENT  */
  YYSYMBOL_CURRENT_DATE = 52,              /* CURRENT_DATE  */
  YYSYMBOL_CURRENT_TIME = 53,              /* CURRENT_TIME  */
  YYSYMBOL_CHAR = 54,                      /* CHAR  */
  YYSYMBOL_COLLATE = 55,                   /* COLLATE  */
  YYSYMBOL_DATABASE = 56,                  /* DATABASE  */
  YYSYMBOL_DELAYED = 57,                   /* DELAYED  */
  YYSYMBOL_DAY_HOUR = 58,                  /* DAY_HOUR  */
  YYSYMBOL_DAY_MICROSECOND = 59,           /* DAY_MICROSECOND  */
  YYSYMBOL_DISTINCT = 60,                  /* DISTINCT  */
  YYSYMBOL_DELETE = 61,                    /* DELETE  */
  YYSYMBOL_DROP = 62,                      /* DROP  */
  YYSYMBOL_DAY_MINUTE = 63,                /* DAY_MINUTE  */
  YYSYMBOL_DISTINCTROW = 64,               /* DISTINCTROW  */
  YYSYMBOL_DAY_SECOND = 65,                /* DAY_SECOND  */
  YYSYMBOL_DESC = 66,                      /* DESC  */
  YYSYMBOL_DEFAULT = 67,                   /* DEFAULT  */
  YYSYMBOL_DOUBLE = 68,                    /* DOUBLE  */
  YYSYMBOL_DATETIME = 69,                  /* DATETIME  */
  YYSYMBOL_DECIMAL = 70,                   /* DECIMAL  */
  YYSYMBOL_DATE = 71,                      /* DATE  */
  YYSYMBOL_ESCAPED = 72,                   /* ESCAPED  */
  YYSYMBOL_ENUM = 73,                      /* ENUM  */
  YYSYMBOL_END = 74,                       /* END  */
  YYSYMBOL_ELSE = 75,                      /* ELSE  */
  YYSYMBOL_FLOAT = 76,                     /* FLOAT  */
  YYSYMBOL_FORCE = 77,                     /* FORCE  */
  YYSYMBOL_FROM = 78,                      /* FROM  */
  YYSYMBOL_FULLTEXT = 79,                  /* FULLTEXT  */
  YYSYMBOL_FOR = 80,                       /* FOR  */
  YYSYMBOL_GROUP = 81,                     /* GROUP  */
  YYSYMBOL_HOUR_MINUTE = 82,               /* HOUR_MINUTE  */
  YYSYMBOL_HOUR_MICROSECOND = 83,          /* HOUR_MICROSECOND  */
  YYSYMBOL_HIGH_PRIORITY = 84,             /* HIGH_PRIORITY  */
  YYSYMBOL_HOUR_SECOND = 85,               /* HOUR_SECOND  */
  YYSYMBOL_HAVING = 86,                    /* HAVING  */
  YYSYMBOL_INTEGER = 87,                   /* INTEGER  */
  YYSYMBOL_INNER = 88,                     /* INNER  */
  YYSYMBOL_IGNORE = 89,                    /* IGNORE  */
  YYSYMBOL_INDEX = 90,                     /* INDEX  */
  YYSYMBOL_IF = 91,                        /* IF  */
  YYSYMBOL_INSERT = 92,                    /* INSERT  */
  YYSYMBOL_INTO = 93,                      /* INTO  */
  YYSYMBOL_INT = 94,                       /* INT  */
  YYSYMBOL_INTERVAL = 95,                  /* INTERVAL  */
  YYSYMBOL_JOIN = 96,                      /* JOIN  */
  YYSYMBOL_KEY = 97,                       /* KEY  */
  YYSYMBOL_LONGTEXT = 98,                  /* LONGTEXT  */
  YYSYMBOL_LOW_PRIORITY = 99,              /* LOW_PRIORITY  */
  YYSYMBOL_LEFT = 100,                     /* LEFT  */
  YYSYMBOL_LEADING = 101,                  /* LEADING  */
  YYSYMBOL_LIMIT = 102,                    /* LIMIT  */
  YYSYMBOL_LONGBLOB = 103,                 /* LONGBLOB  */
  YYSYMBOL_MEDIUMTEXT = 104,               /* MEDIUMTEXT  */
  YYSYMBOL_MEDIUMBLOB = 105,               /* MEDIUMBLOB  */
  YYSYMBOL_MEDIUMINT = 106,                /* MEDIUMINT  */
  YYSYMBOL_NATURAL = 107,                  /* NATURAL  */
  YYSYMBOL_NULLX = 108,                    /* NULLX  */
  YYSYMBOL_OUTER = 109,                    /* OUTER  */
  YYSYMBOL_ON = 110,                       /* ON  */
  YYSYMBOL_ORDER = 111,                    /* ORDER  */
  YYSYMBOL_ONDUPLICATE = 112,              /* ONDUPLICATE  */
  YYSYMBOL_PRIMARY = 113,                  /* PRIMARY  */
  YYSYMBOL_QUICK = 114,                    /* QUICK  */
  YYSYMBOL_REAL = 115,                     /* REAL  */
  YYSYMBOL_ROLLUP = 116,                   /* ROLLUP  */
  YYSYMBOL_RIGHT = 117,                    /* RIGHT  */
  YYSYMBOL_REPLACE = 118,                  /* REPLACE  */
  YYSYMBOL_SQL_SMALL_RESULT = 119,         /* SQL_SMALL_RESULT  */
  YYSYMBOL_SCHEMA = 120,                   /* SCHEMA  */
  YYSYMBOL_SOME = 121,                     /* SOME  */
  YYSYMBOL_SQL_CALC_FOUND_ROWS = 122,      /* SQL_CALC_FOUND_ROWS  */
  YYSYMBOL_SQL_BIG_RESULT = 123,           /* SQL_BIG_RESULT  */
  YYSYMBOL_STRAIGHT_JOIN = 124,            /* STRAIGHT_JOIN  */
  YYSYMBOL_SMALLINT = 125,                 /* SMALLINT  */
  YYSYMBOL_SET = 126,                      /* SET  */
  YYSYMBOL_SELECT = 127,                   /* SELECT  */
  YYSYMBOL_TINYTEXT = 128,                 /* TINYTEXT  */
  YYSYMBOL_TINYINT = 129,                  /* TINYINT  */
  YYSYMBOL_TEMPORARY = 130,                /* TEMPORARY  */
  YYSYMBOL_TEXT = 131,                     /* TEXT  */
  YYSYMBOL_TIMESTAMP = 132,                /* TIMESTAMP  */
  YYSYMBOL_TABLE = 133,                    /* TABLE  */
  YYSYMBOL_THEN = 134,                     /* THEN  */
  YYSYMBOL_TRAILING = 135,                 /* TRAILING  */
  YYSYMBOL_TRUNCATE = 136,                 /* TRUNCATE  */
  YYSYMBOL_TINYBLOB = 137,                 /* TINYBLOB  */
  YYSYMBOL_TIME = 138,                     /* TIME  */
  YYSYMBOL_UPDATE = 139,                   /* UPDATE  */
  YYSYMBOL_UNSIGNED = 140,                 /* UNSIGNED  */
  YYSYMBOL_UNIQUE = 141,                   /* UNIQUE  */
  YYSYMBOL_USING = 142,                    /* USING  */
  YYSYMBOL_USE = 143,                      /* USE  */
  YYSYMBOL_VARCHAR = 144,                  /* VARCHAR  */
  YYSYMBOL_VALUES = 145,                   /* VALUES  */
  YYSYMBOL_VARBINARY = 146,                /* VARBINARY  */
  YYSYMBOL_WHERE = 147,                    /* WHERE  */
  YYSYMBOL_WHEN = 148,                     /* WHEN  */
  YYSYMBOL_WITH = 149,                     /* WITH  */
  YYSYMBOL_YEAR = 150,                     /* YEAR  */
  YYSYMBOL_YEAR_MONTH = 151,               /* YEAR_MONTH  */
  YYSYMBOL_ZEROFILL = 152,                 /* ZEROFILL  */
  YYSYMBOL_EXISTS = 153,                   /* EXISTS  */
  YYSYMBOL_FSUBSTRING = 154,               /* FSUBSTRING  */
  YYSYMBOL_FTRIM = 155,                    /* FTRIM  */
  YYSYMBOL_FDATE_ADD = 156,                /* FDATE_ADD  */
  YYSYMBOL_FDATE_SUB = 157,                /* FDATE_SUB  */
  YYSYMBOL_FCOUNT = 158,                   /* FCOUNT  */
  YYSYMBOL_159_ = 159,                     /* ';'  */
  YYSYMBOL_160_ = 160,                     /* '.'  */
  YYSYMBOL_161_ = 161,                     /* '('  */
  YYSYMBOL_162_ = 162,                     /* ')'  */
  YYSYMBOL_163_ = 163,                     /* ','  */
  YYSYMBOL_YYACCEPT = 164,                 /* $accept  */
  YYSYMBOL_stmt_list = 165,                /* stmt_list  */
  YYSYMBOL_expr = 166,                     /* expr  */
  YYSYMBOL_val_list = 167,                 /* val_list  */
  YYSYMBOL_opt_val_list = 168,             /* opt_val_list  */
  YYSYMBOL_trim_ltb = 169,                 /* trim_ltb  */
  YYSYMBOL_interval_exp = 170,             /* interval_exp  */
  YYSYMBOL_case_list = 171,                /* case_list  */
  YYSYMBOL_stmt = 172,                     /* stmt  */
  YYSYMBOL_select_stmt = 173,              /* select_stmt  */
  YYSYMBOL_opt_where = 174,                /* opt_where  */
  YYSYMBOL_opt_groupby = 175,              /* opt_groupby  */
  YYSYMBOL_groupby_list = 176,             /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 177,             /* opt_asc_desc  */
  YYSYMBOL_opt_with_rollup = 178,          /* opt_with_rollup  */
  YYSYMBOL_opt_having = 179,               /* opt_having  */
  YYSYMBOL_opt_orderby = 180,              /* opt_orderby  */
  YYSYMBOL_opt_limit = 181,                /* opt_limit  */
  YYSYMBOL_opt_into_list = 182,            /* opt_into_list  */
  YYSYMBOL_column_list = 183,              /* column_list  */
  YYSYMBOL_select_opts = 184,              /* select_opts  */
  YYSYMBOL_select_expr_list = 185,         /* select_expr_list  */
  YYSYMBOL_select_expr = 186,              /* select_expr  */
  YYSYMBOL_opt_as_alias = 187,             /* opt_as_alias  */
  YYSYMBOL_table_references = 188,         /* table_references  */
  YYSYMBOL_table_reference = 189,          /* table_reference  */
  YYSYMBOL_table_factor = 190,             /* table_factor  */
  YYSYMBOL_opt_as = 191,                   /* opt_as  */
  YYSYMBOL_join_table = 192,               /* join_table  */
  YYSYMBOL_opt_inner_cross = 193,          /* opt_inner_cross  */
  YYSYMBOL_opt_outer = 194,                /* opt_outer  */
  YYSYMBOL_left_or_right = 195,            /* left_or_right  */
  YYSYMBOL_opt_left_or_right_outer = 196,  /* opt_left_or_right_outer  */
  YYSYMBOL_opt_join_condition = 197,       /* opt_join_condition  */
  YYSYMBOL_join_condition = 198,           /* join_condition  */
  YYSYMBOL_index_hint = 199,               /* index_hint  */
  YYSYMBOL_opt_for_join = 200,             /* opt_for_join  */
  YYSYMBOL_index_list = 201,               /* index_list  */
  YYSYMBOL_table_subquery = 202,           /* table_subquery  */
  YYSYMBOL_delete_stmt = 203,              /* delete_stmt  */
  YYSYMBOL_delete_opts = 204,              /* delete_opts  */
  YYSYMBOL_delete_list = 205,              /* delete_list  */
  YYSYMBOL_opt_dot_star = 206,             /* opt_dot_star  */
  YYSYMBOL_drop_table_stmt = 207,          /* drop_table_stmt  */
  YYSYMBOL_truncate_table_stmt = 208,      /* truncate_table_stmt  */
  YYSYMBOL_insert_stmt = 209,              /* insert_stmt  */
  YYSYMBOL_opt_ondupupdate = 210,          /* opt_ondupupdate  */
  YYSYMBOL_insert_opts = 211,              /* insert_opts  */
  YYSYMBOL_opt_into = 212,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 213,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 214,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 215,              /* insert_vals  */
  YYSYMBOL_insert_asgn_list = 216,         /* insert_asgn_list  */
  YYSYMBOL_replace_stmt = 217,             /* replace_stmt  */
  YYSYMBOL_update_stmt = 218,              /* update_stmt  */
  YYSYMBOL_update_opts = 219,              /* update_opts  */
  YYSYMBOL_update_asgn_list = 220,         /* update_asgn_list  */
  YYSYMBOL_create_database_stmt = 221,     /* create_database_stmt  */
  YYSYMBOL_opt_if_not_exists = 222,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 223,        /* create_table_stmt  */
  YYSYMBOL_opt_temporary = 224,            /* opt_temporary  */
  YYSYMBOL_create_col_list = 225,          /* create_col_list  */
  YYSYMBOL_create_definition = 226,        /* create_definition  */
  YYSYMBOL_227_1 = 227,                    /* $@1  */
  YYSYMBOL_column_atts = 228,              /* column_atts  */
  YYSYMBOL_opt_length = 229,               /* opt_length  */
  YYSYMBOL_opt_binary = 230,               /* opt_binary  */
  YYSYMBOL_opt_uz = 231,                   /* opt_uz  */
  YYSYMBOL_opt_csc = 232,                  /* opt_csc  */
  YYSYMBOL_data_type = 233,                /* data_type  */
  YYSYMBOL_enum_list = 234,                /* enum_list  */
  YYSYMBOL_create_select_statement = 235,  /* create_select_statement  */
  YYSYMBOL_opt_ignore_replace = 236,       /* opt_ignore_replace  */
  YYSYMBOL_set_stmt = 237,                 /* set_stmt  */
  YYSYMBOL_set_list = 238,                 /* set_list  */
  YYSYMBOL_set_expr = 239                  /* set_expr  */
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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1463

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  164
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  303
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  625

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   404


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
     161,   162,    26,    24,   163,    25,   160,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   159,
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
     154,   155,   156,   157,   158
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   240,   240,   241,   246,   252,   253,   254,   270,   277,
     284,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   312,   313,
     314,   315,   318,   319,   320,   321,   322,   325,   328,   329,
     332,   333,   336,   337,   338,   339,   340,   344,   348,   349,
     351,   352,   353,   354,   355,   358,   359,   360,   363,   364,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   378,
     379,   380,   381,   384,   385,   388,   389,   392,   393,   396,
     397,   398,   402,   412,   413,   426,   427,   428,   429,   432,
     433,   436,   437,   438,   441,   442,   445,   446,   449,   450,
     459,   459,   460,   463,   464,   467,   468,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   482,   483,   484,   491,
     492,   493,   494,   497,   498,   501,   502,   506,   512,   513,
     514,   517,   518,   522,   524,   526,   528,   530,   534,   535,
     536,   539,   540,   543,   544,   547,   548,   549,   552,   553,
     556,   557,   561,   563,   565,   567,   570,   571,   574,   575,
     578,   582,   590,   598,   599,   600,   601,   605,   608,   609,
     612,   612,   614,   618,   625,   634,   641,   649,   656,   664,
     665,   668,   669,   670,   671,   672,   675,   675,   678,   679,
     682,   683,   686,   687,   688,   689,   692,   696,   697,   698,
     699,   705,   708,   714,   719,   725,   731,   738,   739,   740,
     744,   755,   766,   777,   791,   795,   796,   799,   800,   804,
     811,   820,   824,   829,   833,   838,   842,   843,   846,   847,
     850,   851,   852,   853,   854,   857,   857,   867,   868,   869,
     870,   871,   872,   873,   874,   875,   876,   877,   878,   879,
     882,   883,   884,   887,   888,   891,   892,   893,   896,   897,
     898,   902,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,   922,   923,   924,   925,   926,   927,   928,   929,   930,
     931,   932,   935,   936,   939,   943,   944,   945,   949,   952,
     953,   953,   955,   956
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
  "AS", "BLOB", "BOOLEAN", "BY", "BINARY", "BOTH", "BIGINT", "BIT",
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
  "TABLE", "THEN", "TRAILING", "TRUNCATE", "TINYBLOB", "TIME", "UPDATE",
  "UNSIGNED", "UNIQUE", "USING", "USE", "VARCHAR", "VALUES", "VARBINARY",
  "WHERE", "WHEN", "WITH", "YEAR", "YEAR_MONTH", "ZEROFILL", "EXISTS",
  "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT", "';'", "'.'",
  "'('", "')'", "','", "$accept", "stmt_list", "expr", "val_list",
  "opt_val_list", "trim_ltb", "interval_exp", "case_list", "stmt",
  "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_orderby",
  "opt_limit", "opt_into_list", "column_list", "select_opts",
  "select_expr_list", "select_expr", "opt_as_alias", "table_references",
  "table_reference", "table_factor", "opt_as", "join_table",
  "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "drop_table_stmt", "truncate_table_stmt", "insert_stmt",
  "opt_ondupupdate", "insert_opts", "opt_into", "opt_col_names",
  "insert_vals_list", "insert_vals", "insert_asgn_list", "replace_stmt",
  "update_stmt", "update_opts", "update_asgn_list", "create_database_stmt",
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

#define YYPACT_NINF (-466)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-222)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      83,    17,  -466,   -97,  -466,  -466,    52,  -466,   -66,     6,
      70,    -1,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,    -8,    -8,  -466,   -48,    49,   183,   193,   193,
     215,    29,  -466,   303,   217,   160,     7,  -466,    83,    36,
     239,   249,    -8,   138,   276,  -466,  -466,  -466,   -59,  -466,
    -466,  -466,  -466,  -466,  -466,   278,   298,   691,   691,    52,
     100,  -466,  -466,  -466,  -466,   295,   691,   691,   691,  -466,
    -466,  -466,   327,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,  -466,   158,   175,   182,   190,   203,   205,  1356,   -30,
    -466,  -466,     9,    10,    14,     5,  -106,   269,  -466,  -466,
     273,  -466,  -466,  -466,  -466,   351,   334,  -466,    76,   -60,
       7,   365,   -81,   -80,  1415,  1415,  -466,   367,   691,   691,
     409,   409,  -466,   691,  1055,    -9,   245,   691,    24,   691,
     691,   445,  -466,   691,   691,   691,   214,    38,   691,   691,
     300,   691,   250,   691,   691,   691,   691,   691,   691,   691,
     691,   691,   691,   375,  -466,     7,   691,   380,   119,   228,
     107,   414,     7,  -466,  -466,  -466,   116,  -466,     7,   328,
     312,  -466,   437,   -25,  -466,   691,   333,     7,    41,   138,
     439,   444,   329,   439,   -84,  -466,   766,  -466,   345,  1415,
    1076,     4,  -466,   691,   691,   347,   735,   350,  -466,  -466,
    -466,   360,   691,   795,   840,   362,   911,   993,  1144,   813,
     461,  -466,    16,  -466,  1433,  1433,   330,   691,   691,  1386,
     335,   385,   388,   245,   921,   372,   508,   581,   261,   261,
     533,   533,   533,   533,  -466,  -466,    41,  -466,    20,   467,
     469,   470,  -466,  -466,  -466,    -6,    80,   269,   312,   312,
     472,   460,     7,  -466,   475,  -466,  -466,  -466,   570,   151,
    -466,   273,  1415,   534,   476,    41,  -466,  -466,   557,   -74,
    -466,   132,   418,   -74,   418,   468,   691,  -466,   691,  -466,
     691,  1270,  1114,  -466,   691,  -466,  -466,  1249,   486,   486,
    -466,  -466,   428,   429,  -466,  -466,   461,  1433,  1433,   691,
     245,   245,   245,   430,   512,   119,   514,   514,   514,   691,
     592,   609,   333,  -466,  -466,     7,   691,   -54,     7,    54,
      93,   452,   466,   531,   164,  -466,   627,   245,   630,   691,
    -466,  -466,   498,   539,   634,  -466,  -466,   635,   522,   -72,
    -466,   -72,  -466,  -466,  1415,  1291,  -466,   691,   889,   691,
     691,   477,   478,  -466,  -466,   479,   481,   532,   482,   483,
     485,  -466,   606,   563,  -466,   554,   496,   497,   499,  1415,
     639,    -4,   476,  -466,  1415,   691,   500,  -466,  -466,   -54,
     151,  -466,   501,   502,   444,   444,   504,    75,   151,  1108,
    -466,    26,   861,  -466,  1415,   527,   648,  -466,  -466,  1415,
     176,   510,  -466,  -466,  -466,  1415,   691,  -466,   511,   972,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,   691,   691,   333,
    -466,   669,   669,   669,   691,   691,   671,  -466,  1415,   444,
    -466,   178,   444,   444,   184,   186,   444,  -466,  -466,  -466,
    -466,   520,   520,   520,   520,   520,  -466,   520,  -466,   521,
     520,   520,   520,   640,  -466,   640,  -466,   520,   520,   520,
     524,   640,   520,   640,  -466,  -466,  -466,   525,   526,  -466,
    -466,  -466,  -466,  -466,   691,   439,   579,  -466,   617,   522,
     951,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,  1326,   -91,  1415,   476,  -466,   196,   199,   219,  1415,
    1415,   668,   226,    87,   253,   292,  -466,  -466,   310,   684,
    -466,  -466,  -466,  -466,  -466,  -466,   686,  -466,  -466,  -466,
    -466,  -466,  -466,  -466,  -466,  -466,   686,  -466,  -466,  -466,
     687,   688,    90,  1415,   528,  -466,  1415,  -466,  1415,   314,
    -466,  -466,   584,   691,  -466,   608,  -466,   703,  -466,  -466,
     691,  -466,  -466,  -466,  -466,  -466,   325,    85,   435,    85,
      85,  -466,   331,    85,    85,    85,   435,   435,    85,    85,
      85,   337,   435,    85,   435,   551,   552,   607,  -466,   716,
     318,  -466,  -466,   624,    53,  -466,  -466,  1326,   444,  -466,
    -466,  1415,  -466,   718,  -466,  -466,   598,   721,  -466,   722,
    -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,  -466,
    -466,   444,  -466,   564,   566,   725,  -466,   435,  -466,   435,
     435,   356,  -466,  -466,  -466
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   226,   166,     0,   181,   181,     0,   107,     0,   181,
       0,     0,    82,   161,   173,   175,   177,   201,   205,   214,
     219,   298,   217,   217,   227,     0,     0,     0,   187,   187,
       0,   299,   300,     0,     0,     0,     0,     1,     2,     0,
       0,     0,   217,   170,     0,   165,   163,   164,     0,   174,
     183,   184,   185,   186,   182,     0,     0,     0,     0,     0,
       4,     7,     8,    10,     9,     6,     0,     0,     0,   118,
     108,    79,     0,    80,    81,   109,   110,   111,   113,   115,
     114,   112,     0,     0,     0,     0,     0,     0,   122,    83,
     116,   176,   185,   182,   122,     0,     0,   123,   125,   126,
     132,     3,   218,   215,   216,     0,     0,   168,    85,     0,
       0,     0,   188,   188,   303,   302,   301,     0,    40,     0,
      25,    26,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,   155,     0,
       0,     0,     0,   140,   139,   143,   147,   144,     0,     0,
     141,   131,     0,   295,   171,     0,    98,     0,    85,   170,
       0,     0,     0,     0,     0,     5,    38,    41,     0,    36,
       0,     0,    71,     0,     0,     0,    38,     0,    57,    55,
      56,     0,     0,     0,     0,     0,     0,    19,    20,    18,
       0,    34,     0,    32,    75,    77,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    21,    22,    24,    11,    12,
      13,    14,    15,    16,    23,   120,    85,   117,   122,     0,
       0,     0,   127,   160,   130,     0,    85,   124,   141,   141,
       0,   134,     0,   142,     0,   129,   296,   297,     0,   235,
     223,   132,    86,     0,   100,    85,   167,   169,     0,   179,
     105,     0,     0,   179,     0,   179,     0,    47,     0,    69,
       0,     0,     0,    46,     0,    50,    53,     0,     0,     0,
      48,    49,     0,     0,    35,    33,     0,    76,    78,     0,
       0,     0,     0,     0,    87,   155,   157,   157,   157,     0,
       0,     0,    98,   145,   146,     0,     0,   148,     0,   295,
       0,     0,     0,     0,     0,   228,     0,     0,     0,     0,
     162,   172,     0,     0,     0,   196,   189,     0,     0,   179,
     203,   179,   204,    39,    73,     0,    72,     0,     0,     0,
       0,     0,     0,    42,    44,     0,     0,    37,     0,     0,
       0,    28,     0,    96,   128,     0,     0,     0,     0,   210,
       0,     0,   100,   137,   135,     0,     0,   133,   149,     0,
     235,   225,     0,     0,     0,     0,     0,   295,   235,     0,
     294,    91,   101,   198,   197,     0,     0,   106,   193,   192,
       0,     0,   178,   202,    70,    74,     0,    51,     0,     0,
      58,    59,    43,    45,    31,    29,    30,     0,     0,    98,
     156,     0,     0,     0,     0,     0,     0,   206,   150,     0,
     136,     0,     0,     0,     0,     0,     0,   222,   229,   282,
     291,   250,   250,   250,   250,   250,   275,   250,   272,     0,
     250,   250,   250,   253,   284,   253,   283,   250,   250,   250,
       0,   253,   250,   253,   274,   281,   273,     0,     0,   276,
     237,    92,    93,    99,     0,     0,     0,   190,     0,     0,
       0,    54,    60,    61,    62,    63,    67,    66,    68,    65,
      64,    91,    94,    97,   100,   158,     0,     0,     0,   211,
     212,     0,     0,   295,     0,     0,   232,   231,     0,     0,
     279,   255,   261,   258,   255,   255,     0,   255,   255,   255,
     254,   258,   258,   255,   255,   255,     0,   258,   255,   258,
       0,     0,   236,   102,   180,   200,   199,   195,   194,     0,
      52,    89,     0,     0,    88,   103,   154,     0,   153,   152,
       0,   151,   224,   233,   234,   230,     0,   267,   277,   269,
     271,   292,     0,   270,   266,   265,   288,   287,   264,   268,
     263,     0,   285,   262,   286,     0,     0,     0,   244,     0,
       0,   248,   239,     0,     0,   191,    95,    91,     0,    84,
     159,   213,   251,     0,   256,   257,     0,     0,   258,     0,
     258,   258,   280,   238,   249,   240,   241,   243,   242,   247,
     246,     0,    90,   104,     0,     0,   260,   289,   293,   290,
     278,     0,   252,   259,   245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -466,   692,   -33,  -123,  -466,  -466,   442,   615,  -466,   -89,
    -116,  -466,  -466,  -465,  -466,  -466,  -291,  -354,  -466,  -382,
    -466,  -466,   586,   -83,   -26,   578,  -153,   492,  -466,  -466,
     272,  -466,  -466,  -466,   387,   462,   234,   121,  -466,  -466,
    -466,   724,   590,  -466,  -466,  -466,   -76,   223,   755,   685,
     523,   320,  -182,  -466,  -466,  -466,  -466,  -466,   198,  -466,
    -466,   420,   413,  -466,  -466,   260,  -183,  -105,  -327,  -466,
     277,  -312,  -466,  -466,  -466,   743
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    10,   186,   187,   188,   202,   351,   125,    11,    12,
     176,   363,   492,   473,   544,   419,   264,   330,   589,   271,
      33,    89,    90,   154,    96,    97,    98,   172,    99,   169,
     254,   170,   250,   377,   378,   242,   366,   496,   100,    13,
      26,    48,   107,    14,    15,    16,   335,    28,    55,   182,
     339,   400,   269,    17,    18,    36,   246,    19,    40,    20,
      25,   324,   325,   326,   532,   510,   521,   557,   558,   470,
     562,   260,   261,    21,    31,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,   273,   434,   435,   197,   201,   159,   381,    94,  -207,
      94,   158,  -209,  -208,   309,   251,   425,   132,   427,   110,
     161,   372,   294,   132,   114,   115,   541,    60,    61,    62,
      63,    64,    65,   120,   121,   122,    27,   195,   333,   124,
     333,    66,    67,     7,   211,   180,   183,   502,   155,    68,
     504,   505,    43,   153,   508,   212,   375,   162,   542,   153,
      30,   274,   266,   471,   256,   192,   193,    34,   198,   160,
      37,    71,   543,    22,    72,   437,    73,    74,   279,   280,
     181,   181,   177,    39,   178,    42,   189,   292,   376,   334,
     190,   401,   472,   257,   196,   275,   203,   204,   206,   317,
     207,   208,   209,   111,   111,   214,   215,   577,   219,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     304,   293,   612,    88,   295,   199,   578,    44,   494,   236,
     312,     1,     7,   156,   303,   258,   259,    23,    45,   194,
     545,   579,   262,   256,     2,     3,   213,    24,    46,   331,
     610,   265,   194,   343,   310,   305,   426,   580,    38,   200,
     281,   282,   373,    47,   256,   379,    95,  -207,    95,   287,
    -209,  -208,   257,   355,   157,     4,   256,    82,    83,    84,
      85,    86,    87,   382,   297,   298,    49,   581,   175,   102,
     383,   552,    59,   257,   566,   567,   239,   340,   582,   342,
     572,     5,   574,   583,   162,   257,   613,   356,   240,     6,
       7,   358,   359,   360,   611,   380,   248,    50,  -170,     8,
      91,    41,     9,   175,    57,   594,   408,   175,    29,   621,
     320,   584,    35,   249,  -220,    58,   106,   595,   390,  -170,
     105,   321,   103,   311,    51,   344,  -221,   345,   322,    92,
      50,   348,   104,    60,    61,    62,    63,    64,    65,    93,
     117,   118,   241,   402,   323,   403,   357,    66,    67,   244,
     162,   617,   522,   619,   620,    68,   369,    51,   527,   108,
     529,   112,    52,   374,   220,   221,    53,   148,   149,   150,
     151,   152,    54,   534,   336,   337,   392,    71,   106,   394,
      72,   113,    73,    74,   119,   399,    60,    61,    62,    63,
      64,    65,   171,   216,   405,   217,   218,   409,   163,   126,
      66,    67,   605,   606,   607,   608,   387,   388,    68,    69,
      60,    61,    62,    63,    64,    65,   127,    70,   477,   478,
     503,   388,   428,   128,    66,    67,   506,   337,   507,   337,
      71,   129,    68,    72,   173,    73,    74,   164,   546,   547,
     174,   548,   547,    75,   130,  -138,   131,    76,   179,   165,
     185,   222,     7,   480,    71,   210,   166,    72,   235,    73,
      74,   549,   547,   238,   491,   493,   167,    77,   551,   337,
     243,   499,   500,   168,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    82,    83,    84,    85,    86,    87,   559,
     560,   223,   563,   564,   565,   553,   337,   245,   568,   569,
     570,   253,    78,   573,   252,    79,    80,    81,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     255,   533,   268,   536,   263,   538,   399,   270,    60,    61,
      62,    63,    64,    65,   554,   337,    82,    83,    84,    85,
      86,    87,    66,    67,    60,    61,    62,    63,    64,    65,
      68,   205,   555,   337,   272,   123,   585,   478,    66,    67,
      82,    83,    84,    85,    86,    87,    68,   592,   593,   596,
     597,   296,    71,   598,   599,    72,   300,    73,    74,   600,
     599,    60,    61,    62,    63,    64,    65,   277,    71,   283,
     587,    72,   285,    73,    74,    66,    67,   591,   624,   337,
     313,   314,   286,    68,   290,    60,    61,    62,    63,    64,
      65,   145,   146,   147,   148,   149,   150,   151,   152,    66,
      67,   367,   368,   497,   498,    71,   301,    68,    72,   302,
      73,    74,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   152,   306,   393,   307,   308,   315,    71,
     316,   318,    72,   319,    73,    74,   328,   332,   329,   338,
     333,   350,    60,    61,    62,    63,    64,    65,     7,   398,
     353,   354,   361,   362,   365,   370,    66,    67,    82,    83,
      84,    85,    86,    87,    68,   146,   147,   148,   149,   150,
     151,   152,   371,   384,    82,    83,    84,    85,    86,    87,
      60,    61,    62,    63,    64,    65,    71,   385,   386,    72,
     389,    73,    74,   391,    66,    67,   395,   396,   397,   410,
     411,   412,    68,   413,   414,   415,   535,   416,   417,   418,
     420,    82,    83,    84,    85,    86,    87,   421,   422,   424,
     423,   429,   432,   433,    71,   436,   475,    72,   476,    73,
      74,   479,   495,   481,   501,    82,    83,    84,    85,    86,
      87,   509,   516,   520,   537,   526,   530,   531,   550,   556,
     561,   334,   575,   576,    60,    61,    62,    63,    64,    65,
     586,   588,   511,   512,   513,   514,   590,   515,    66,    67,
     517,   518,   519,   601,   602,   603,    68,   523,   524,   525,
     604,   609,   528,   614,   615,   616,   618,   337,   622,   623,
     101,   352,    82,    83,    84,    85,    86,    87,    71,   191,
     247,    72,   237,    73,    74,   133,   134,   135,   136,   137,
     138,   139,   140,   327,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   430,   364,   109,   267,
      82,    83,    84,    85,    86,    87,   133,   134,   135,   136,
     137,   138,   139,   140,    56,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   341,   184,   539,
     431,   438,   116,   571,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   284,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   136,   137,   138,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    82,    83,    84,    85,    86,    87,
     133,   134,   135,   136,   137,   138,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   133,   134,   135,   136,   137,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,     0,     0,     0,     0,     0,     0,   276,   133,
     134,   135,   136,   137,   138,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   276,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,     0,     0,     0,     0,     0,     0,   288,     0,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   406,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   133,   134,   135,   136,   137,   138,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   289,   134,   135,   136,   137,   138,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   474,     0,     0,     0,     0,     0,
     482,   483,     0,     0,     0,   484,     0,   485,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,     0,     0,   486,   487,     0,   488,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   291,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   133,   134,   135,   136,
     137,   138,   139,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     0,     0,     0,
       0,     0,     0,   540,     0,     0,     0,     0,     0,     0,
       0,     0,   489,   490,   133,   134,   135,   136,   137,   138,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,     0,     0,     0,   439,   440,
       0,   441,     0,   442,   443,     0,   135,   136,   137,   138,
     139,   140,   444,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,     0,   445,   446,   447,   448,
       0,   449,     0,     0,   450,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   451,     0,     0,     0,     0,
       0,     0,   452,   123,     0,     0,   453,     0,     0,     0,
     278,   454,   455,   456,   457,     0,     0,     0,     0,     0,
       0,     0,     0,   458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   459,   460,     0,   461,   462,     0,   463,
     464,     0,     0,     0,     0,   465,   466,     0,   347,     0,
       0,     0,   467,     0,   468,     0,     0,     0,   469,   133,
     134,   135,   136,   137,   138,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     133,   134,   135,   136,   137,   138,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   133,   134,   135,   136,   137,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,     0,     0,     0,     0,     0,   349,     0,     0,
       0,     0,     0,     0,     0,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   346,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     0,     0,   132,
       0,     0,     0,   471,     0,   404,   133,   134,   135,   136,
     137,   138,   139,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     0,     0,     0,
       0,     0,   472,     0,     0,   153,   133,   134,   135,   136,
     137,   138,   139,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     0,     0,     0,
       0,     0,     0,     0,   299,   133,   134,   135,   136,   137,
     138,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,  -222,  -222,  -222,  -222,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152
};

static const yytype_int16 yycheck[] =
{
      33,   183,   384,   385,   127,   128,    95,   319,     3,     3,
       3,    94,     3,     3,    20,   168,    20,     3,   372,    78,
     126,   312,     6,     3,    57,    58,   491,     3,     4,     5,
       6,     7,     8,    66,    67,    68,   133,   126,   112,    72,
     112,    17,    18,   127,     6,   126,   126,   429,    78,    25,
     432,   433,     3,    39,   436,    17,   110,   163,   149,    39,
       8,   145,   178,    37,    89,    74,    75,   133,    44,    95,
       0,    47,   163,    56,    50,   387,    52,    53,    74,    75,
     161,   161,   142,    91,   110,   133,   119,   210,   142,   163,
     123,   163,    66,   118,   127,   184,   129,   130,   131,   252,
     133,   134,   135,   163,   163,   138,   139,    17,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     236,   210,   587,   156,   108,   101,    36,    78,   419,   155,
     246,    48,   127,   163,   223,   160,   161,   120,    89,   148,
     494,    51,   175,    89,    61,    62,   108,   130,    99,   265,
      97,   177,   148,   276,   160,   238,   160,    67,   159,   135,
     193,   194,   315,   114,    89,   318,   161,   161,   161,   202,
     161,   161,   118,   296,   160,    92,    89,   153,   154,   155,
     156,   157,   158,    90,   217,   218,     3,    97,   147,   153,
      97,   503,   163,   118,   521,   522,    77,   273,   108,   275,
     527,   118,   529,   113,   163,   118,   588,   296,    89,   126,
     127,   300,   301,   302,   161,   161,   100,    57,   142,   136,
       3,    23,   139,   147,     9,   140,   349,   147,     5,   611,
      79,   141,     9,   117,   159,    20,   160,   152,   327,   163,
      42,    90,     3,   163,    84,   278,   159,   280,    97,    89,
      57,   284,     3,     3,     4,     5,     6,     7,     8,    99,
     160,   161,   143,   339,   113,   341,   299,    17,    18,   162,
     163,   598,   455,   600,   601,    25,   309,    84,   461,     3,
     463,     3,    89,   316,    34,    35,    93,    26,    27,    28,
      29,    30,    99,   475,   162,   163,   329,    47,   160,   332,
      50,     3,    52,    53,     9,   338,     3,     4,     5,     6,
       7,     8,    39,    13,   347,    15,    16,   350,    49,   161,
      17,    18,     4,     5,     6,     7,   162,   163,    25,    26,
       3,     4,     5,     6,     7,     8,   161,    34,   162,   163,
     162,   163,   375,   161,    17,    18,   162,   163,   162,   163,
      47,   161,    25,    50,     3,    52,    53,    88,   162,   163,
      26,   162,   163,    60,   161,    96,   161,    64,     3,   100,
       3,   121,   127,   406,    47,   161,   107,    50,     3,    52,
      53,   162,   163,     3,   417,   418,   117,    84,   162,   163,
     162,   424,   425,   124,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   153,   154,   155,   156,   157,   158,   514,
     515,   161,   517,   518,   519,   162,   163,     3,   523,   524,
     525,   109,   119,   528,    96,   122,   123,   124,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       3,   474,     3,   476,   111,   478,   479,     3,     3,     4,
       5,     6,     7,     8,   162,   163,   153,   154,   155,   156,
     157,   158,    17,    18,     3,     4,     5,     6,     7,     8,
      25,    26,   162,   163,   145,   148,   162,   163,    17,    18,
     153,   154,   155,   156,   157,   158,    25,   162,   163,    54,
      55,   161,    47,   162,   163,    50,   161,    52,    53,   162,
     163,     3,     4,     5,     6,     7,     8,   162,    47,   162,
     543,    50,   162,    52,    53,    17,    18,   550,   162,   163,
     248,   249,   162,    25,   162,     3,     4,     5,     6,     7,
       8,    23,    24,    25,    26,    27,    28,    29,    30,    17,
      18,   307,   308,   422,   423,    47,   161,    25,    50,   161,
      52,    53,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    30,    97,    67,    97,    97,    96,    47,
     110,    96,    50,     3,    52,    53,    42,    20,   102,   161,
     112,    95,     3,     4,     5,     6,     7,     8,   127,    67,
     162,   162,   162,    81,    80,     3,    17,    18,   153,   154,
     155,   156,   157,   158,    25,    24,    25,    26,    27,    28,
      29,    30,     3,   161,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,    47,   161,    97,    50,
       3,    52,    53,     3,    17,    18,    97,     3,     3,   162,
     162,   162,    25,   162,   162,   162,    67,   162,    42,    86,
      96,   153,   154,   155,   156,   157,   158,   161,   161,    20,
     161,   161,   161,   161,    47,   161,   139,    50,    20,    52,
      53,   161,     3,   162,     3,   153,   154,   155,   156,   157,
     158,   161,   161,    43,    67,   161,   161,   161,    20,     5,
       4,   163,     5,     5,     3,     4,     5,     6,     7,     8,
     116,    93,   442,   443,   444,   445,     3,   447,    17,    18,
     450,   451,   452,   162,   162,   108,    25,   457,   458,   459,
       4,    97,   462,     5,   126,     4,     4,   163,   162,     4,
      38,   289,   153,   154,   155,   156,   157,   158,    47,   124,
     162,    50,   156,    52,    53,    10,    11,    12,    13,    14,
      15,    16,    17,   261,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   379,   305,    44,   179,
     153,   154,   155,   156,   157,   158,    10,    11,    12,    13,
      14,    15,    16,    17,    29,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   274,   113,   479,
     380,   388,    59,   526,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    78,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   153,   154,   155,   156,   157,   158,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,   163,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,   163,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    80,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   163,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   163,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    63,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    82,    83,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,   162,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,   151,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    40,    41,
      -1,    43,    -1,    45,    46,    -1,    12,    13,    14,    15,
      16,    17,    54,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    68,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    94,   148,    -1,    -1,    98,    -1,    -1,    -1,
     134,   103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,    -1,   131,
     132,    -1,    -1,    -1,    -1,   137,   138,    -1,   134,    -1,
      -1,    -1,   144,    -1,   146,    -1,    -1,    -1,   150,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    74,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,     3,
      -1,    -1,    -1,    37,    -1,    74,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    39,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,    61,    62,    92,   118,   126,   127,   136,   139,
     165,   172,   173,   203,   207,   208,   209,   217,   218,   221,
     223,   237,    56,   120,   130,   224,   204,   133,   211,   211,
       8,   238,   239,   184,   133,   211,   219,     0,   159,    91,
     222,   222,   133,     3,    78,    89,    99,   114,   205,     3,
      57,    84,    89,    93,    99,   212,   212,     9,    20,   163,
       3,     4,     5,     6,     7,     8,    17,    18,    25,    26,
      34,    47,    50,    52,    53,    60,    64,    84,   119,   122,
     123,   124,   153,   154,   155,   156,   157,   158,   166,   185,
     186,     3,    89,    99,     3,   161,   188,   189,   190,   192,
     202,   165,   153,     3,     3,   222,   160,   206,     3,   205,
      78,   163,     3,     3,   166,   166,   239,   160,   161,     9,
     166,   166,   166,   148,   166,   171,   161,   161,   161,   161,
     161,   161,     3,    10,    11,    12,    13,    14,    15,    16,
      17,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    39,   187,    78,   163,   160,   187,   173,
     188,   126,   163,    49,    88,   100,   107,   117,   124,   193,
     195,    39,   191,     3,    26,   147,   174,   142,   188,     3,
     126,   161,   213,   126,   213,     3,   166,   167,   168,   166,
     166,   171,    74,    75,   148,   173,   166,   167,    44,   101,
     135,   167,   169,   166,   166,    26,   166,   166,   166,   166,
     161,     6,    17,   108,   166,   166,    13,    15,    16,   166,
      34,    35,   121,   161,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,     3,   188,   186,     3,    77,
      89,   143,   199,   162,   162,     3,   220,   189,   100,   117,
     196,   190,    96,   109,   194,     3,    89,   118,   160,   161,
     235,   236,   166,   111,   180,   188,   174,   206,     3,   216,
       3,   183,   145,   216,   145,   173,   163,   162,   134,    74,
      75,   166,   166,   162,    78,   162,   162,   166,   163,   163,
     162,   162,   167,   173,     6,   108,   161,   166,   166,    38,
     161,   161,   161,   173,   174,   187,    97,    97,    97,    20,
     160,   163,   174,   194,   194,    96,   110,   190,    96,     3,
      79,    90,    97,   113,   225,   226,   227,   191,    42,   102,
     181,   174,    20,   112,   163,   210,   162,   163,   161,   214,
     210,   214,   210,   167,   166,   166,    74,   134,   166,    78,
      95,   170,   170,   162,   162,   167,   173,   166,   173,   173,
     173,   162,    81,   175,   199,    80,   200,   200,   200,   166,
       3,     3,   180,   190,   166,   110,   142,   197,   198,   190,
     161,   235,    90,    97,   161,   161,    97,   162,   163,     3,
     173,     3,   166,    67,   166,    97,     3,     3,    67,   166,
     215,   163,   210,   210,    74,   166,    80,   162,   167,   166,
     162,   162,   162,   162,   162,   162,   162,    42,    86,   179,
      96,   161,   161,   161,    20,    20,   160,   181,   166,   161,
     198,   225,   161,   161,   183,   183,   161,   235,   226,    40,
      41,    43,    45,    46,    54,    68,    69,    70,    71,    73,
      76,    87,    94,    98,   103,   104,   105,   106,   115,   125,
     126,   128,   129,   131,   132,   137,   138,   144,   146,   150,
     233,    37,    66,   177,   163,   139,    20,   162,   163,   161,
     166,   162,    58,    59,    63,    65,    82,    83,    85,   150,
     151,   166,   176,   166,   180,     3,   201,   201,   201,   166,
     166,     3,   183,   162,   183,   183,   162,   162,   183,   161,
     229,   229,   229,   229,   229,   229,   161,   229,   229,   229,
      43,   230,   230,   229,   229,   229,   161,   230,   229,   230,
     161,   161,   228,   166,   216,    67,   166,    67,   166,   215,
     162,   177,   149,   163,   178,   181,   162,   163,   162,   162,
      20,   162,   235,   162,   162,   162,     5,   231,   232,   231,
     231,     4,   234,   231,   231,   231,   232,   232,   231,   231,
     231,   234,   232,   231,   232,     5,     5,    17,    36,    51,
      67,    97,   108,   113,   141,   162,   116,   166,    93,   182,
       3,   166,   162,   163,   140,   152,    54,    55,   162,   163,
     162,   162,   162,   108,     4,     4,     5,     6,     7,    97,
      97,   161,   177,   183,     5,   126,     4,   232,     4,   232,
     232,   183,   162,     4,   162
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   167,   167,
     168,   168,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   169,   169,   169,   166,   166,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   166,
     166,   166,   166,   171,   171,   166,   166,   166,   166,   166,
     166,   166,   172,   173,   173,   174,   174,   175,   175,   176,
     176,   177,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   181,   182,   182,   183,   183,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   185,   185,   185,   186,
     187,   187,   187,   188,   188,   189,   189,   190,   190,   190,
     190,   191,   191,   192,   192,   192,   192,   192,   193,   193,
     193,   194,   194,   195,   195,   196,   196,   196,   197,   197,
     198,   198,   199,   199,   199,   199,   200,   200,   201,   201,
     202,   172,   203,   204,   204,   204,   204,   203,   205,   205,
     206,   206,   203,   172,   207,   172,   208,   172,   209,   210,
     210,   211,   211,   211,   211,   211,   212,   212,   213,   213,
     214,   214,   215,   215,   215,   215,   209,   216,   216,   216,
     216,   172,   217,   217,   217,   172,   218,   219,   219,   219,
     220,   220,   220,   220,   172,   221,   221,   222,   222,   172,
     223,   223,   223,   223,   223,   223,   224,   224,   225,   225,
     226,   226,   226,   226,   226,   227,   226,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     229,   229,   229,   230,   230,   231,   231,   231,   232,   232,
     232,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   234,   234,   235,   236,   236,   236,   172,   237,
     238,   238,   239,   239
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
       4,     0,     1,     1,     0,     2,     0,     2,     0,     4,
       0,     2,     4,     0,     2,     1,     3,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     1,     2,
       2,     1,     0,     1,     3,     1,     1,     3,     5,     3,
       3,     1,     0,     5,     3,     5,     6,     5,     0,     1,
       1,     0,     1,     1,     1,     2,     2,     0,     0,     1,
       2,     4,     6,     6,     6,     0,     2,     0,     1,     3,
       3,     1,     7,     2,     2,     2,     0,     6,     2,     4,
       0,     2,     7,     1,     3,     1,     3,     1,     8,     0,
       4,     0,     2,     2,     2,     2,     1,     0,     0,     3,
       3,     5,     1,     1,     3,     3,     7,     3,     3,     5,
       5,     1,     8,     7,     7,     1,     8,     0,     2,     2,
       3,     5,     5,     7,     1,     4,     4,     0,     2,     1,
       8,    10,     9,     6,    11,     8,     0,     1,     1,     3,
       5,     4,     4,     5,     5,     0,     4,     0,     3,     2,
       3,     3,     3,     3,     2,     5,     3,     3,     2,     3,
       0,     3,     5,     0,     1,     0,     2,     2,     0,     4,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     3,     5,     2,
       4,     1,     1,     1,     1,     3,     3,     3,     3,     5,
       5,     1,     1,     3,     3,     0,     1,     1,     1,     2,
       1,     3,     3,     3
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
#line 247 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[0].strval));
        GetSelection((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 1939 "parser/evoparser.tab.c"
    break;

  case 5: /* expr: NAME '.' NAME  */
#line 252 "parser/evoparser.y"
                                                                                { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 1945 "parser/evoparser.tab.c"
    break;

  case 6: /* expr: USERVAR  */
#line 253 "parser/evoparser.y"
                                                                                { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 1951 "parser/evoparser.tab.c"
    break;

  case 7: /* expr: STRING  */
#line 255 "parser/evoparser.y"
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
#line 1971 "parser/evoparser.tab.c"
    break;

  case 8: /* expr: INTNUM  */
#line 271 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[0].intval));
        char buf[32];
        sprintf(buf, "%d", (yyvsp[0].intval));
        GetInsertions(buf);
    }
#line 1982 "parser/evoparser.tab.c"
    break;

  case 9: /* expr: APPROXNUM  */
#line 278 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[0].floatval));
        char buf[64];
        sprintf(buf, "%g", (yyvsp[0].floatval));
        GetInsertions(buf);
    }
#line 1993 "parser/evoparser.tab.c"
    break;

  case 10: /* expr: BOOL  */
#line 285 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[0].intval));
        GetInsertions((yyvsp[0].intval) ? "true" : "false");
    }
#line 2002 "parser/evoparser.tab.c"
    break;

  case 11: /* expr: expr '+' expr  */
#line 291 "parser/evoparser.y"
                                                                                { emit("ADD"); }
#line 2008 "parser/evoparser.tab.c"
    break;

  case 12: /* expr: expr '-' expr  */
#line 292 "parser/evoparser.y"
                                                                                { emit("SUB"); }
#line 2014 "parser/evoparser.tab.c"
    break;

  case 13: /* expr: expr '*' expr  */
#line 293 "parser/evoparser.y"
                                                                                { emit("MUL"); }
#line 2020 "parser/evoparser.tab.c"
    break;

  case 14: /* expr: expr '/' expr  */
#line 294 "parser/evoparser.y"
                                                                                { emit("DIV"); }
#line 2026 "parser/evoparser.tab.c"
    break;

  case 15: /* expr: expr '%' expr  */
#line 295 "parser/evoparser.y"
                                                                                { emit("MOD"); }
#line 2032 "parser/evoparser.tab.c"
    break;

  case 16: /* expr: expr MOD expr  */
#line 296 "parser/evoparser.y"
                                                                                { emit("MOD"); }
#line 2038 "parser/evoparser.tab.c"
    break;

  case 17: /* expr: '-' expr  */
#line 297 "parser/evoparser.y"
                                                                                { emit("NEG"); }
#line 2044 "parser/evoparser.tab.c"
    break;

  case 18: /* expr: expr ANDOP expr  */
#line 298 "parser/evoparser.y"
                                                                                { emit("AND"); }
#line 2050 "parser/evoparser.tab.c"
    break;

  case 19: /* expr: expr OR expr  */
#line 299 "parser/evoparser.y"
                                                                                { emit("OR"); }
#line 2056 "parser/evoparser.tab.c"
    break;

  case 20: /* expr: expr XOR expr  */
#line 300 "parser/evoparser.y"
                                                                                { emit("XOR"); }
#line 2062 "parser/evoparser.tab.c"
    break;

  case 21: /* expr: expr '|' expr  */
#line 301 "parser/evoparser.y"
                                                                                { emit("BITOR"); }
#line 2068 "parser/evoparser.tab.c"
    break;

  case 22: /* expr: expr '&' expr  */
#line 302 "parser/evoparser.y"
                                                                                { emit("BITAND"); }
#line 2074 "parser/evoparser.tab.c"
    break;

  case 23: /* expr: expr '^' expr  */
#line 303 "parser/evoparser.y"
                                                                                { emit("BITXOR"); }
#line 2080 "parser/evoparser.tab.c"
    break;

  case 24: /* expr: expr SHIFT expr  */
#line 304 "parser/evoparser.y"
                                                                                { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2086 "parser/evoparser.tab.c"
    break;

  case 25: /* expr: NOT expr  */
#line 305 "parser/evoparser.y"
                                                                                { emit("NOT"); }
#line 2092 "parser/evoparser.tab.c"
    break;

  case 26: /* expr: '!' expr  */
#line 306 "parser/evoparser.y"
                                                                                { emit("NOT"); }
#line 2098 "parser/evoparser.tab.c"
    break;

  case 27: /* expr: expr COMPARISON expr  */
#line 308 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[-1].subtok));
    }
#line 2106 "parser/evoparser.tab.c"
    break;

  case 28: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 312 "parser/evoparser.y"
                                                                                { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2112 "parser/evoparser.tab.c"
    break;

  case 29: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 313 "parser/evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2118 "parser/evoparser.tab.c"
    break;

  case 30: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 314 "parser/evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2124 "parser/evoparser.tab.c"
    break;

  case 31: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 315 "parser/evoparser.y"
                                                                                { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2130 "parser/evoparser.tab.c"
    break;

  case 32: /* expr: expr IS NULLX  */
#line 318 "parser/evoparser.y"
                                                                                { emit("ISNULL"); }
#line 2136 "parser/evoparser.tab.c"
    break;

  case 33: /* expr: expr IS NOT NULLX  */
#line 319 "parser/evoparser.y"
                                                                                { emit("ISNULL"); emit("NOT"); }
#line 2142 "parser/evoparser.tab.c"
    break;

  case 34: /* expr: expr IS BOOL  */
#line 320 "parser/evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2148 "parser/evoparser.tab.c"
    break;

  case 35: /* expr: expr IS NOT BOOL  */
#line 321 "parser/evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2154 "parser/evoparser.tab.c"
    break;

  case 36: /* expr: USERVAR ASSIGN expr  */
#line 322 "parser/evoparser.y"
                                                                                { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2160 "parser/evoparser.tab.c"
    break;

  case 37: /* expr: expr BETWEEN expr AND expr  */
#line 325 "parser/evoparser.y"
                                                                                { emit("BETWEEN"); }
#line 2166 "parser/evoparser.tab.c"
    break;

  case 38: /* val_list: expr  */
#line 328 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2172 "parser/evoparser.tab.c"
    break;

  case 39: /* val_list: expr ',' val_list  */
#line 329 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2178 "parser/evoparser.tab.c"
    break;

  case 40: /* opt_val_list: %empty  */
#line 332 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2184 "parser/evoparser.tab.c"
    break;

  case 42: /* expr: expr IN '(' val_list ')'  */
#line 336 "parser/evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2190 "parser/evoparser.tab.c"
    break;

  case 43: /* expr: expr NOT IN '(' val_list ')'  */
#line 337 "parser/evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2196 "parser/evoparser.tab.c"
    break;

  case 44: /* expr: expr IN '(' select_stmt ')'  */
#line 338 "parser/evoparser.y"
                                                                                { emit("CMPANYSELECT 4"); }
#line 2202 "parser/evoparser.tab.c"
    break;

  case 45: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 339 "parser/evoparser.y"
                                                                                { emit("CMPALLSELECT 3"); }
#line 2208 "parser/evoparser.tab.c"
    break;

  case 46: /* expr: EXISTS '(' select_stmt ')'  */
#line 340 "parser/evoparser.y"
                                                                                { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2214 "parser/evoparser.tab.c"
    break;

  case 47: /* expr: NAME '(' opt_val_list ')'  */
#line 344 "parser/evoparser.y"
                                                                                { emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2220 "parser/evoparser.tab.c"
    break;

  case 48: /* expr: FCOUNT '(' '*' ')'  */
#line 348 "parser/evoparser.y"
                                                                                { emit("COUNTALL"); }
#line 2226 "parser/evoparser.tab.c"
    break;

  case 49: /* expr: FCOUNT '(' expr ')'  */
#line 349 "parser/evoparser.y"
                                                                                { emit(" CALL 1 COUNT"); }
#line 2232 "parser/evoparser.tab.c"
    break;

  case 50: /* expr: FSUBSTRING '(' val_list ')'  */
#line 351 "parser/evoparser.y"
                                                                                { emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2238 "parser/evoparser.tab.c"
    break;

  case 51: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 352 "parser/evoparser.y"
                                                                                { emit("CALL 2 SUBSTR"); }
#line 2244 "parser/evoparser.tab.c"
    break;

  case 52: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 353 "parser/evoparser.y"
                                                                                { emit("CALL 3 SUBSTR"); }
#line 2250 "parser/evoparser.tab.c"
    break;

  case 53: /* expr: FTRIM '(' val_list ')'  */
#line 354 "parser/evoparser.y"
                                                                                { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2256 "parser/evoparser.tab.c"
    break;

  case 54: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 355 "parser/evoparser.y"
                                                                                { emit("CALL 3 TRIM"); }
#line 2262 "parser/evoparser.tab.c"
    break;

  case 55: /* trim_ltb: LEADING  */
#line 358 "parser/evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2268 "parser/evoparser.tab.c"
    break;

  case 56: /* trim_ltb: TRAILING  */
#line 359 "parser/evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2274 "parser/evoparser.tab.c"
    break;

  case 57: /* trim_ltb: BOTH  */
#line 360 "parser/evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2280 "parser/evoparser.tab.c"
    break;

  case 58: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 363 "parser/evoparser.y"
                                                                                { emit("CALL 3 DATE_ADD"); }
#line 2286 "parser/evoparser.tab.c"
    break;

  case 59: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 364 "parser/evoparser.y"
                                                                                { emit("CALL 3 DATE_SUB"); }
#line 2292 "parser/evoparser.tab.c"
    break;

  case 60: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 367 "parser/evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2298 "parser/evoparser.tab.c"
    break;

  case 61: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 368 "parser/evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2304 "parser/evoparser.tab.c"
    break;

  case 62: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 369 "parser/evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2310 "parser/evoparser.tab.c"
    break;

  case 63: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 370 "parser/evoparser.y"
                                                                                { emit("NUMBER 4"); }
#line 2316 "parser/evoparser.tab.c"
    break;

  case 64: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 371 "parser/evoparser.y"
                                                                                { emit("NUMBER 5"); }
#line 2322 "parser/evoparser.tab.c"
    break;

  case 65: /* interval_exp: INTERVAL expr YEAR  */
#line 372 "parser/evoparser.y"
                                                                                { emit("NUMBER 6"); }
#line 2328 "parser/evoparser.tab.c"
    break;

  case 66: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 373 "parser/evoparser.y"
                                                                                { emit("NUMBER 7"); }
#line 2334 "parser/evoparser.tab.c"
    break;

  case 67: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 374 "parser/evoparser.y"
                                                                                { emit("NUMBER 8"); }
#line 2340 "parser/evoparser.tab.c"
    break;

  case 68: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 375 "parser/evoparser.y"
                                                                                { emit("NUMBER 9"); }
#line 2346 "parser/evoparser.tab.c"
    break;

  case 69: /* expr: CASE expr case_list END  */
#line 378 "parser/evoparser.y"
                                                                                { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2352 "parser/evoparser.tab.c"
    break;

  case 70: /* expr: CASE expr case_list ELSE expr END  */
#line 379 "parser/evoparser.y"
                                                                                { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2358 "parser/evoparser.tab.c"
    break;

  case 71: /* expr: CASE case_list END  */
#line 380 "parser/evoparser.y"
                                                                                { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2364 "parser/evoparser.tab.c"
    break;

  case 72: /* expr: CASE case_list ELSE expr END  */
#line 381 "parser/evoparser.y"
                                                                                { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2370 "parser/evoparser.tab.c"
    break;

  case 73: /* case_list: WHEN expr THEN expr  */
#line 384 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2376 "parser/evoparser.tab.c"
    break;

  case 74: /* case_list: case_list WHEN expr THEN expr  */
#line 385 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2382 "parser/evoparser.tab.c"
    break;

  case 75: /* expr: expr LIKE expr  */
#line 388 "parser/evoparser.y"
                                                                                { emit("LIKE"); }
#line 2388 "parser/evoparser.tab.c"
    break;

  case 76: /* expr: expr NOT LIKE expr  */
#line 389 "parser/evoparser.y"
                                                                                { emit("LIKE"); emit("NOT"); }
#line 2394 "parser/evoparser.tab.c"
    break;

  case 77: /* expr: expr REGEXP expr  */
#line 392 "parser/evoparser.y"
                                                                                { emit("REGEXP"); }
#line 2400 "parser/evoparser.tab.c"
    break;

  case 78: /* expr: expr NOT REGEXP expr  */
#line 393 "parser/evoparser.y"
                                                                                { emit("REGEXP"); emit("NOT"); }
#line 2406 "parser/evoparser.tab.c"
    break;

  case 79: /* expr: CURRENT_TIMESTAMP  */
#line 396 "parser/evoparser.y"
                                                                                { emit("NOW"); }
#line 2412 "parser/evoparser.tab.c"
    break;

  case 80: /* expr: CURRENT_DATE  */
#line 397 "parser/evoparser.y"
                                                                                { emit("NOW"); }
#line 2418 "parser/evoparser.tab.c"
    break;

  case 81: /* expr: CURRENT_TIME  */
#line 398 "parser/evoparser.y"
                                                                                { emit("NOW"); }
#line 2424 "parser/evoparser.tab.c"
    break;

  case 82: /* stmt: select_stmt  */
#line 403 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[0].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    }
#line 2436 "parser/evoparser.tab.c"
    break;

  case 83: /* select_stmt: SELECT select_opts select_expr_list  */
#line 412 "parser/evoparser.y"
                                                                                { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2442 "parser/evoparser.tab.c"
    break;

  case 84: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 417 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval));
        if ((yyvsp[-8].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    }
#line 2454 "parser/evoparser.tab.c"
    break;

  case 86: /* opt_where: WHERE expr  */
#line 427 "parser/evoparser.y"
                                                                                { emit("WHERE"); }
#line 2460 "parser/evoparser.tab.c"
    break;

  case 88: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 429 "parser/evoparser.y"
                                                                                { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2466 "parser/evoparser.tab.c"
    break;

  case 89: /* groupby_list: expr opt_asc_desc  */
#line 432 "parser/evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2472 "parser/evoparser.tab.c"
    break;

  case 90: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 433 "parser/evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2478 "parser/evoparser.tab.c"
    break;

  case 91: /* opt_asc_desc: %empty  */
#line 436 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2484 "parser/evoparser.tab.c"
    break;

  case 92: /* opt_asc_desc: ASC  */
#line 437 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2490 "parser/evoparser.tab.c"
    break;

  case 93: /* opt_asc_desc: DESC  */
#line 438 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2496 "parser/evoparser.tab.c"
    break;

  case 94: /* opt_with_rollup: %empty  */
#line 441 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2502 "parser/evoparser.tab.c"
    break;

  case 95: /* opt_with_rollup: WITH ROLLUP  */
#line 442 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2508 "parser/evoparser.tab.c"
    break;

  case 97: /* opt_having: HAVING expr  */
#line 446 "parser/evoparser.y"
                                                                                { emit("HAVING"); }
#line 2514 "parser/evoparser.tab.c"
    break;

  case 99: /* opt_orderby: ORDER BY NAME opt_asc_desc  */
#line 451 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[-1].strval), (yyvsp[0].intval));
        GetOrderByColumn((yyvsp[-1].strval));
        SetOrderByDirection((yyvsp[0].intval));
        free((yyvsp[-1].strval));
    }
#line 2525 "parser/evoparser.tab.c"
    break;

  case 101: /* opt_limit: LIMIT expr  */
#line 459 "parser/evoparser.y"
                                                                                { emit("LIMIT 1"); }
#line 2531 "parser/evoparser.tab.c"
    break;

  case 102: /* opt_limit: LIMIT expr ',' expr  */
#line 460 "parser/evoparser.y"
                                                                                { emit("LIMIT 2"); }
#line 2537 "parser/evoparser.tab.c"
    break;

  case 104: /* opt_into_list: INTO column_list  */
#line 464 "parser/evoparser.y"
                                                                                { emit("INTO %d", (yyvsp[0].intval)); }
#line 2543 "parser/evoparser.tab.c"
    break;

  case 105: /* column_list: NAME  */
#line 467 "parser/evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2549 "parser/evoparser.tab.c"
    break;

  case 106: /* column_list: column_list ',' NAME  */
#line 468 "parser/evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2555 "parser/evoparser.tab.c"
    break;

  case 107: /* select_opts: %empty  */
#line 471 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2561 "parser/evoparser.tab.c"
    break;

  case 108: /* select_opts: select_opts ALL  */
#line 472 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2567 "parser/evoparser.tab.c"
    break;

  case 109: /* select_opts: select_opts DISTINCT  */
#line 473 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2573 "parser/evoparser.tab.c"
    break;

  case 110: /* select_opts: select_opts DISTINCTROW  */
#line 474 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2579 "parser/evoparser.tab.c"
    break;

  case 111: /* select_opts: select_opts HIGH_PRIORITY  */
#line 475 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2585 "parser/evoparser.tab.c"
    break;

  case 112: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 476 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2591 "parser/evoparser.tab.c"
    break;

  case 113: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 477 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2597 "parser/evoparser.tab.c"
    break;

  case 114: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 478 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2603 "parser/evoparser.tab.c"
    break;

  case 115: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 479 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[-1].intval) | 0200; }
#line 2609 "parser/evoparser.tab.c"
    break;

  case 116: /* select_expr_list: select_expr  */
#line 482 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2615 "parser/evoparser.tab.c"
    break;

  case 117: /* select_expr_list: select_expr_list ',' select_expr  */
#line 483 "parser/evoparser.y"
                                                                                {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2621 "parser/evoparser.tab.c"
    break;

  case 118: /* select_expr_list: '*'  */
#line 485 "parser/evoparser.y"
    {
        emit("SELECTALL");
        (yyval.intval) = 3;
    }
#line 2630 "parser/evoparser.tab.c"
    break;

  case 120: /* opt_as_alias: AS NAME  */
#line 492 "parser/evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2636 "parser/evoparser.tab.c"
    break;

  case 121: /* opt_as_alias: NAME  */
#line 493 "parser/evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2642 "parser/evoparser.tab.c"
    break;

  case 123: /* table_references: table_reference  */
#line 497 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2648 "parser/evoparser.tab.c"
    break;

  case 124: /* table_references: table_references ',' table_reference  */
#line 498 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2654 "parser/evoparser.tab.c"
    break;

  case 127: /* table_factor: NAME opt_as_alias index_hint  */
#line 507 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[-2].strval));
        GetSelTableName((yyvsp[-2].strval));
        free((yyvsp[-2].strval));
    }
#line 2664 "parser/evoparser.tab.c"
    break;

  case 128: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 512 "parser/evoparser.y"
                                                                                { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2670 "parser/evoparser.tab.c"
    break;

  case 129: /* table_factor: table_subquery opt_as NAME  */
#line 513 "parser/evoparser.y"
                                                                                { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2676 "parser/evoparser.tab.c"
    break;

  case 130: /* table_factor: '(' table_references ')'  */
#line 514 "parser/evoparser.y"
                                                                                { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2682 "parser/evoparser.tab.c"
    break;

  case 133: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 523 "parser/evoparser.y"
                                                                                { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2688 "parser/evoparser.tab.c"
    break;

  case 134: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 525 "parser/evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2694 "parser/evoparser.tab.c"
    break;

  case 135: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 527 "parser/evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2700 "parser/evoparser.tab.c"
    break;

  case 136: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 529 "parser/evoparser.y"
                                                                                { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2706 "parser/evoparser.tab.c"
    break;

  case 137: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 531 "parser/evoparser.y"
                                                                                { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2712 "parser/evoparser.tab.c"
    break;

  case 138: /* opt_inner_cross: %empty  */
#line 534 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2718 "parser/evoparser.tab.c"
    break;

  case 139: /* opt_inner_cross: INNER  */
#line 535 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2724 "parser/evoparser.tab.c"
    break;

  case 140: /* opt_inner_cross: CROSS  */
#line 536 "parser/evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2730 "parser/evoparser.tab.c"
    break;

  case 141: /* opt_outer: %empty  */
#line 539 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2736 "parser/evoparser.tab.c"
    break;

  case 142: /* opt_outer: OUTER  */
#line 540 "parser/evoparser.y"
                                                                                {(yyval.intval) = 4; }
#line 2742 "parser/evoparser.tab.c"
    break;

  case 143: /* left_or_right: LEFT  */
#line 543 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2748 "parser/evoparser.tab.c"
    break;

  case 144: /* left_or_right: RIGHT  */
#line 544 "parser/evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2754 "parser/evoparser.tab.c"
    break;

  case 145: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 547 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2760 "parser/evoparser.tab.c"
    break;

  case 146: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 548 "parser/evoparser.y"
                                                                                { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2766 "parser/evoparser.tab.c"
    break;

  case 147: /* opt_left_or_right_outer: %empty  */
#line 549 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2772 "parser/evoparser.tab.c"
    break;

  case 150: /* join_condition: ON expr  */
#line 556 "parser/evoparser.y"
                                                                                { emit("ONEXPR"); }
#line 2778 "parser/evoparser.tab.c"
    break;

  case 151: /* join_condition: USING '(' column_list ')'  */
#line 557 "parser/evoparser.y"
                                                                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 2784 "parser/evoparser.tab.c"
    break;

  case 152: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 562 "parser/evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 2790 "parser/evoparser.tab.c"
    break;

  case 153: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 564 "parser/evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 2796 "parser/evoparser.tab.c"
    break;

  case 154: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 566 "parser/evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 2802 "parser/evoparser.tab.c"
    break;

  case 156: /* opt_for_join: FOR JOIN  */
#line 570 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2808 "parser/evoparser.tab.c"
    break;

  case 157: /* opt_for_join: %empty  */
#line 571 "parser/evoparser.y"
            { (yyval.intval) = 0; }
#line 2814 "parser/evoparser.tab.c"
    break;

  case 158: /* index_list: NAME  */
#line 574 "parser/evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2820 "parser/evoparser.tab.c"
    break;

  case 159: /* index_list: index_list ',' NAME  */
#line 575 "parser/evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2826 "parser/evoparser.tab.c"
    break;

  case 160: /* table_subquery: '(' select_stmt ')'  */
#line 578 "parser/evoparser.y"
                                                                                { emit("SUBQUERY"); }
#line 2832 "parser/evoparser.tab.c"
    break;

  case 161: /* stmt: delete_stmt  */
#line 583 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    }
#line 2841 "parser/evoparser.tab.c"
    break;

  case 162: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 591 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval));
        GetDelTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 2851 "parser/evoparser.tab.c"
    break;

  case 163: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 598 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2857 "parser/evoparser.tab.c"
    break;

  case 164: /* delete_opts: delete_opts QUICK  */
#line 599 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2863 "parser/evoparser.tab.c"
    break;

  case 165: /* delete_opts: delete_opts IGNORE  */
#line 600 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2869 "parser/evoparser.tab.c"
    break;

  case 166: /* delete_opts: %empty  */
#line 601 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2875 "parser/evoparser.tab.c"
    break;

  case 167: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 605 "parser/evoparser.y"
                                                                                { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2881 "parser/evoparser.tab.c"
    break;

  case 168: /* delete_list: NAME opt_dot_star  */
#line 608 "parser/evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2887 "parser/evoparser.tab.c"
    break;

  case 169: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 609 "parser/evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2893 "parser/evoparser.tab.c"
    break;

  case 172: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 614 "parser/evoparser.y"
                                                                                        { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2899 "parser/evoparser.tab.c"
    break;

  case 173: /* stmt: drop_table_stmt  */
#line 619 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    }
#line 2908 "parser/evoparser.tab.c"
    break;

  case 174: /* drop_table_stmt: DROP TABLE NAME  */
#line 626 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[0].strval));
        GetDropTableName((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 2918 "parser/evoparser.tab.c"
    break;

  case 175: /* stmt: truncate_table_stmt  */
#line 635 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    }
#line 2927 "parser/evoparser.tab.c"
    break;

  case 176: /* truncate_table_stmt: TRUNCATE TABLE NAME  */
#line 642 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[0].strval));
        GetDropTableName((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 2937 "parser/evoparser.tab.c"
    break;

  case 177: /* stmt: insert_stmt  */
#line 650 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    }
#line 2946 "parser/evoparser.tab.c"
    break;

  case 178: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 657 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval));
        GetInsertionTableName((yyvsp[-4].strval));
        free((yyvsp[-4].strval));
    }
#line 2956 "parser/evoparser.tab.c"
    break;

  case 180: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 665 "parser/evoparser.y"
                                          { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2962 "parser/evoparser.tab.c"
    break;

  case 181: /* insert_opts: %empty  */
#line 668 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2968 "parser/evoparser.tab.c"
    break;

  case 182: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 669 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2974 "parser/evoparser.tab.c"
    break;

  case 183: /* insert_opts: insert_opts DELAYED  */
#line 670 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2980 "parser/evoparser.tab.c"
    break;

  case 184: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 671 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2986 "parser/evoparser.tab.c"
    break;

  case 185: /* insert_opts: insert_opts IGNORE  */
#line 672 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2992 "parser/evoparser.tab.c"
    break;

  case 189: /* opt_col_names: '(' column_list ')'  */
#line 679 "parser/evoparser.y"
                                                                                { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 2998 "parser/evoparser.tab.c"
    break;

  case 190: /* insert_vals_list: '(' insert_vals ')'  */
#line 682 "parser/evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 3004 "parser/evoparser.tab.c"
    break;

  case 191: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 683 "parser/evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3010 "parser/evoparser.tab.c"
    break;

  case 192: /* insert_vals: expr  */
#line 686 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3016 "parser/evoparser.tab.c"
    break;

  case 193: /* insert_vals: DEFAULT  */
#line 687 "parser/evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = 1; }
#line 3022 "parser/evoparser.tab.c"
    break;

  case 194: /* insert_vals: insert_vals ',' expr  */
#line 688 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3028 "parser/evoparser.tab.c"
    break;

  case 195: /* insert_vals: insert_vals ',' DEFAULT  */
#line 689 "parser/evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3034 "parser/evoparser.tab.c"
    break;

  case 196: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 693 "parser/evoparser.y"
                                                                                { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3040 "parser/evoparser.tab.c"
    break;

  case 197: /* insert_asgn_list: NAME COMPARISON expr  */
#line 696 "parser/evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3046 "parser/evoparser.tab.c"
    break;

  case 198: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 697 "parser/evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3052 "parser/evoparser.tab.c"
    break;

  case 199: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 698 "parser/evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3058 "parser/evoparser.tab.c"
    break;

  case 200: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 699 "parser/evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3064 "parser/evoparser.tab.c"
    break;

  case 201: /* stmt: replace_stmt  */
#line 705 "parser/evoparser.y"
                                                                                { emit("STMT"); }
#line 3070 "parser/evoparser.tab.c"
    break;

  case 202: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 711 "parser/evoparser.y"
                                                                                { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3076 "parser/evoparser.tab.c"
    break;

  case 203: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 716 "parser/evoparser.y"
                                                                                { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3082 "parser/evoparser.tab.c"
    break;

  case 204: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 721 "parser/evoparser.y"
                                                                                { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3088 "parser/evoparser.tab.c"
    break;

  case 205: /* stmt: update_stmt  */
#line 726 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    }
#line 3097 "parser/evoparser.tab.c"
    break;

  case 206: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 733 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval));
    }
#line 3105 "parser/evoparser.tab.c"
    break;

  case 207: /* update_opts: %empty  */
#line 738 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3111 "parser/evoparser.tab.c"
    break;

  case 208: /* update_opts: insert_opts LOW_PRIORITY  */
#line 739 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3117 "parser/evoparser.tab.c"
    break;

  case 209: /* update_opts: insert_opts IGNORE  */
#line 740 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3123 "parser/evoparser.tab.c"
    break;

  case 210: /* update_asgn_list: NAME COMPARISON expr  */
#line 745 "parser/evoparser.y"
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
#line 3138 "parser/evoparser.tab.c"
    break;

  case 211: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 756 "parser/evoparser.y"
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
#line 3153 "parser/evoparser.tab.c"
    break;

  case 212: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 767 "parser/evoparser.y"
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
#line 3168 "parser/evoparser.tab.c"
    break;

  case 213: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 778 "parser/evoparser.y"
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
#line 3183 "parser/evoparser.tab.c"
    break;

  case 214: /* stmt: create_database_stmt  */
#line 791 "parser/evoparser.y"
                                                                                { emit("STMT"); }
#line 3189 "parser/evoparser.tab.c"
    break;

  case 215: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 795 "parser/evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3195 "parser/evoparser.tab.c"
    break;

  case 216: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 796 "parser/evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3201 "parser/evoparser.tab.c"
    break;

  case 217: /* opt_if_not_exists: %empty  */
#line 799 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3207 "parser/evoparser.tab.c"
    break;

  case 218: /* opt_if_not_exists: IF EXISTS  */
#line 800 "parser/evoparser.y"
                                                                                { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3213 "parser/evoparser.tab.c"
    break;

  case 219: /* stmt: create_table_stmt  */
#line 805 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    }
#line 3222 "parser/evoparser.tab.c"
    break;

  case 220: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 813 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval));
        GetTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 3232 "parser/evoparser.tab.c"
    break;

  case 221: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 821 "parser/evoparser.y"
                                                                                { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval)); free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3238 "parser/evoparser.tab.c"
    break;

  case 222: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 826 "parser/evoparser.y"
                                                                                { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3244 "parser/evoparser.tab.c"
    break;

  case 223: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 830 "parser/evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3250 "parser/evoparser.tab.c"
    break;

  case 224: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 835 "parser/evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval)); free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3256 "parser/evoparser.tab.c"
    break;

  case 225: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 839 "parser/evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval)); free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3262 "parser/evoparser.tab.c"
    break;

  case 226: /* opt_temporary: %empty  */
#line 842 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3268 "parser/evoparser.tab.c"
    break;

  case 227: /* opt_temporary: TEMPORARY  */
#line 843 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1;}
#line 3274 "parser/evoparser.tab.c"
    break;

  case 228: /* create_col_list: create_definition  */
#line 846 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3280 "parser/evoparser.tab.c"
    break;

  case 229: /* create_col_list: create_col_list ',' create_definition  */
#line 847 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3286 "parser/evoparser.tab.c"
    break;

  case 230: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 850 "parser/evoparser.y"
                                                                                { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3292 "parser/evoparser.tab.c"
    break;

  case 231: /* create_definition: KEY '(' column_list ')'  */
#line 851 "parser/evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3298 "parser/evoparser.tab.c"
    break;

  case 232: /* create_definition: INDEX '(' column_list ')'  */
#line 852 "parser/evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3304 "parser/evoparser.tab.c"
    break;

  case 233: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 853 "parser/evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3310 "parser/evoparser.tab.c"
    break;

  case 234: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 854 "parser/evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3316 "parser/evoparser.tab.c"
    break;

  case 235: /* $@1: %empty  */
#line 857 "parser/evoparser.y"
                                                                                { emit("STARTCOL"); }
#line 3322 "parser/evoparser.tab.c"
    break;

  case 236: /* create_definition: $@1 NAME data_type column_atts  */
#line 859 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval));
        GetColumnNames((yyvsp[-2].strval));
        GetColumnSize((yyvsp[-1].intval));
        free((yyvsp[-2].strval));
    }
#line 3333 "parser/evoparser.tab.c"
    break;

  case 237: /* column_atts: %empty  */
#line 867 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3339 "parser/evoparser.tab.c"
    break;

  case 238: /* column_atts: column_atts NOT NULLX  */
#line 868 "parser/evoparser.y"
                                                                                { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3345 "parser/evoparser.tab.c"
    break;

  case 240: /* column_atts: column_atts DEFAULT STRING  */
#line 870 "parser/evoparser.y"
                                                                                { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3351 "parser/evoparser.tab.c"
    break;

  case 241: /* column_atts: column_atts DEFAULT INTNUM  */
#line 871 "parser/evoparser.y"
                                                                                { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3357 "parser/evoparser.tab.c"
    break;

  case 242: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 872 "parser/evoparser.y"
                                                                                { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3363 "parser/evoparser.tab.c"
    break;

  case 243: /* column_atts: column_atts DEFAULT BOOL  */
#line 873 "parser/evoparser.y"
                                                                                { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3369 "parser/evoparser.tab.c"
    break;

  case 244: /* column_atts: column_atts AUTO_INCREMENT  */
#line 874 "parser/evoparser.y"
                                                                                { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3375 "parser/evoparser.tab.c"
    break;

  case 245: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 875 "parser/evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3381 "parser/evoparser.tab.c"
    break;

  case 246: /* column_atts: column_atts UNIQUE KEY  */
#line 876 "parser/evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3387 "parser/evoparser.tab.c"
    break;

  case 247: /* column_atts: column_atts PRIMARY KEY  */
#line 877 "parser/evoparser.y"
                                                                                { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3393 "parser/evoparser.tab.c"
    break;

  case 248: /* column_atts: column_atts KEY  */
#line 878 "parser/evoparser.y"
                                                                                { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3399 "parser/evoparser.tab.c"
    break;

  case 249: /* column_atts: column_atts COMMENT STRING  */
#line 879 "parser/evoparser.y"
                                                                                { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3405 "parser/evoparser.tab.c"
    break;

  case 250: /* opt_length: %empty  */
#line 882 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3411 "parser/evoparser.tab.c"
    break;

  case 251: /* opt_length: '(' INTNUM ')'  */
#line 883 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval); }
#line 3417 "parser/evoparser.tab.c"
    break;

  case 252: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 884 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3423 "parser/evoparser.tab.c"
    break;

  case 253: /* opt_binary: %empty  */
#line 887 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3429 "parser/evoparser.tab.c"
    break;

  case 254: /* opt_binary: BINARY  */
#line 888 "parser/evoparser.y"
                                                                                { (yyval.intval) = 4000; }
#line 3435 "parser/evoparser.tab.c"
    break;

  case 255: /* opt_uz: %empty  */
#line 891 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3441 "parser/evoparser.tab.c"
    break;

  case 256: /* opt_uz: opt_uz UNSIGNED  */
#line 892 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3447 "parser/evoparser.tab.c"
    break;

  case 257: /* opt_uz: opt_uz ZEROFILL  */
#line 893 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3453 "parser/evoparser.tab.c"
    break;

  case 259: /* opt_csc: opt_csc CHAR SET STRING  */
#line 897 "parser/evoparser.y"
                                                                                { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3459 "parser/evoparser.tab.c"
    break;

  case 260: /* opt_csc: opt_csc COLLATE STRING  */
#line 898 "parser/evoparser.y"
                                                                                { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3465 "parser/evoparser.tab.c"
    break;

  case 261: /* data_type: BIT opt_length  */
#line 902 "parser/evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3471 "parser/evoparser.tab.c"
    break;

  case 262: /* data_type: TINYINT opt_length opt_uz  */
#line 903 "parser/evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3477 "parser/evoparser.tab.c"
    break;

  case 263: /* data_type: SMALLINT opt_length opt_uz  */
#line 904 "parser/evoparser.y"
                                                                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3483 "parser/evoparser.tab.c"
    break;

  case 264: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 905 "parser/evoparser.y"
                                                                                { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3489 "parser/evoparser.tab.c"
    break;

  case 265: /* data_type: INT opt_length opt_uz  */
#line 906 "parser/evoparser.y"
                                                                                { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3495 "parser/evoparser.tab.c"
    break;

  case 266: /* data_type: INTEGER opt_length opt_uz  */
#line 907 "parser/evoparser.y"
                                                                                { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3501 "parser/evoparser.tab.c"
    break;

  case 267: /* data_type: BIGINT opt_length opt_uz  */
#line 908 "parser/evoparser.y"
                                                                                { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3507 "parser/evoparser.tab.c"
    break;

  case 268: /* data_type: REAL opt_length opt_uz  */
#line 909 "parser/evoparser.y"
                                                                                { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3513 "parser/evoparser.tab.c"
    break;

  case 269: /* data_type: DOUBLE opt_length opt_uz  */
#line 910 "parser/evoparser.y"
                                                                                { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3519 "parser/evoparser.tab.c"
    break;

  case 270: /* data_type: FLOAT opt_length opt_uz  */
#line 911 "parser/evoparser.y"
                                                                                { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3525 "parser/evoparser.tab.c"
    break;

  case 271: /* data_type: DECIMAL opt_length opt_uz  */
#line 912 "parser/evoparser.y"
                                                                                { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3531 "parser/evoparser.tab.c"
    break;

  case 272: /* data_type: DATE  */
#line 913 "parser/evoparser.y"
                                                                                { (yyval.intval) = 100001; }
#line 3537 "parser/evoparser.tab.c"
    break;

  case 273: /* data_type: TIME  */
#line 914 "parser/evoparser.y"
                                                                                { (yyval.intval) = 100002; }
#line 3543 "parser/evoparser.tab.c"
    break;

  case 274: /* data_type: TIMESTAMP  */
#line 915 "parser/evoparser.y"
                                                                                { (yyval.intval) = 100003; }
#line 3549 "parser/evoparser.tab.c"
    break;

  case 275: /* data_type: DATETIME  */
#line 916 "parser/evoparser.y"
                                                                                { (yyval.intval) = 100004; }
#line 3555 "parser/evoparser.tab.c"
    break;

  case 276: /* data_type: YEAR  */
#line 917 "parser/evoparser.y"
                                                                                { (yyval.intval) = 100005; }
#line 3561 "parser/evoparser.tab.c"
    break;

  case 277: /* data_type: CHAR opt_length opt_csc  */
#line 918 "parser/evoparser.y"
                                                                                { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3567 "parser/evoparser.tab.c"
    break;

  case 278: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 919 "parser/evoparser.y"
                                                                                { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3573 "parser/evoparser.tab.c"
    break;

  case 279: /* data_type: BINARY opt_length  */
#line 920 "parser/evoparser.y"
                                                                                { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3579 "parser/evoparser.tab.c"
    break;

  case 280: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 921 "parser/evoparser.y"
                                                                                { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3585 "parser/evoparser.tab.c"
    break;

  case 281: /* data_type: TINYBLOB  */
#line 922 "parser/evoparser.y"
                                                                                { (yyval.intval) = 160001; }
#line 3591 "parser/evoparser.tab.c"
    break;

  case 282: /* data_type: BLOB  */
#line 923 "parser/evoparser.y"
                                                                                { (yyval.intval) = 160002; }
#line 3597 "parser/evoparser.tab.c"
    break;

  case 283: /* data_type: MEDIUMBLOB  */
#line 924 "parser/evoparser.y"
                                                                                { (yyval.intval) = 160003; }
#line 3603 "parser/evoparser.tab.c"
    break;

  case 284: /* data_type: LONGBLOB  */
#line 925 "parser/evoparser.y"
                                                                                { (yyval.intval) = 160004; }
#line 3609 "parser/evoparser.tab.c"
    break;

  case 285: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 926 "parser/evoparser.y"
                                                                                { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3615 "parser/evoparser.tab.c"
    break;

  case 286: /* data_type: TEXT opt_binary opt_csc  */
#line 927 "parser/evoparser.y"
                                                                                { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3621 "parser/evoparser.tab.c"
    break;

  case 287: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 928 "parser/evoparser.y"
                                                                                { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3627 "parser/evoparser.tab.c"
    break;

  case 288: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 929 "parser/evoparser.y"
                                                                                { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3633 "parser/evoparser.tab.c"
    break;

  case 289: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 930 "parser/evoparser.y"
                                                                                { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3639 "parser/evoparser.tab.c"
    break;

  case 290: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 931 "parser/evoparser.y"
                                                                                { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3645 "parser/evoparser.tab.c"
    break;

  case 291: /* data_type: BOOLEAN  */
#line 932 "parser/evoparser.y"
                                                                                 { (yyval.intval) = 220001; }
#line 3651 "parser/evoparser.tab.c"
    break;

  case 292: /* enum_list: STRING  */
#line 935 "parser/evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3657 "parser/evoparser.tab.c"
    break;

  case 293: /* enum_list: enum_list ',' STRING  */
#line 936 "parser/evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3663 "parser/evoparser.tab.c"
    break;

  case 294: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 940 "parser/evoparser.y"
                                                                                { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3669 "parser/evoparser.tab.c"
    break;

  case 295: /* opt_ignore_replace: %empty  */
#line 943 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3675 "parser/evoparser.tab.c"
    break;

  case 296: /* opt_ignore_replace: IGNORE  */
#line 944 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3681 "parser/evoparser.tab.c"
    break;

  case 297: /* opt_ignore_replace: REPLACE  */
#line 945 "parser/evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 3687 "parser/evoparser.tab.c"
    break;

  case 298: /* stmt: set_stmt  */
#line 949 "parser/evoparser.y"
                                                                                { emit("STMT"); }
#line 3693 "parser/evoparser.tab.c"
    break;

  case 302: /* set_expr: USERVAR COMPARISON expr  */
#line 955 "parser/evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; } emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3699 "parser/evoparser.tab.c"
    break;

  case 303: /* set_expr: USERVAR ASSIGN expr  */
#line 956 "parser/evoparser.y"
                                                                                { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3705 "parser/evoparser.tab.c"
    break;


#line 3709 "parser/evoparser.tab.c"

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

#line 959 "parser/evoparser.y"

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
