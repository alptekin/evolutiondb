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
	#include "../db/expression.h"

	void yyerror(char *s, ...);
	void emit(char *s, ...);
	int yylex(void);

	/* Track alias for current select_expr */
	static char g_currentAlias[128];

#line 88 "parser/evoparser.tab.c"

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
#define YYLAST   1488

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  164
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  304
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  628

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
       0,   248,   248,   249,   254,   261,   262,   263,   281,   289,
     297,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   328,
     329,   330,   331,   334,   335,   336,   337,   338,   341,   344,
     345,   348,   349,   352,   353,   354,   355,   356,   360,   364,
     365,   367,   368,   369,   370,   371,   374,   375,   376,   379,
     380,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     394,   395,   396,   397,   400,   401,   404,   405,   408,   409,
     412,   413,   414,   418,   428,   429,   442,   443,   444,   445,
     448,   449,   452,   453,   454,   457,   458,   461,   462,   465,
     466,   475,   475,   476,   479,   480,   483,   484,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   498,   499,   500,
     508,   514,   515,   516,   519,   520,   523,   524,   528,   534,
     535,   536,   539,   540,   544,   546,   548,   550,   552,   556,
     557,   558,   561,   562,   565,   566,   569,   570,   571,   574,
     575,   578,   579,   583,   585,   587,   589,   592,   593,   596,
     597,   600,   604,   612,   620,   621,   622,   623,   627,   630,
     631,   634,   634,   636,   640,   647,   656,   663,   671,   678,
     686,   687,   690,   691,   692,   693,   694,   697,   697,   700,
     701,   704,   705,   708,   709,   710,   711,   714,   718,   719,
     720,   721,   727,   730,   736,   741,   747,   753,   760,   761,
     762,   766,   777,   788,   799,   813,   817,   818,   821,   822,
     826,   833,   842,   846,   851,   855,   860,   864,   865,   868,
     869,   872,   873,   874,   875,   876,   879,   879,   889,   890,
     891,   892,   893,   894,   895,   896,   897,   898,   899,   900,
     901,   904,   905,   906,   909,   910,   913,   914,   915,   918,
     919,   920,   924,   925,   926,   927,   928,   929,   930,   931,
     932,   933,   934,   935,   936,   937,   938,   939,   940,   941,
     942,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   953,   954,   957,   958,   961,   965,   966,   967,   971,
     974,   975,   975,   977,   978
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

#define YYPACT_NINF (-463)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-223)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     257,    21,  -463,   -73,  -463,  -463,    57,  -463,   -54,     9,
      86,   -58,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,
    -463,  -463,    31,    31,  -463,    13,   123,   186,   143,   143,
     177,    98,  -463,   213,   243,   196,    17,  -463,   257,   121,
     275,   279,    31,    14,   281,  -463,  -463,  -463,   -26,  -463,
    -463,  -463,  -463,  -463,  -463,   293,   295,   578,   578,    57,
      44,  -463,  -463,  -463,  -463,   175,   578,   578,   578,  -463,
    -463,  -463,   374,  -463,  -463,  -463,  -463,  -463,  -463,  -463,
    -463,  -463,   140,   161,   164,   187,   190,   204,   578,  1343,
     -25,  -463,  -463,    19,    20,    23,    18,   -78,   491,  -463,
    -463,   299,  -463,  -463,  -463,  -463,   354,   380,  -463,   179,
     -75,    17,   417,   -83,   -77,  1402,  1402,  -463,   422,   578,
     578,   697,   697,  -463,   578,  1022,   -18,   318,   578,   306,
     578,   578,   405,   917,  -463,   578,   578,   578,   286,    25,
     578,   578,   255,   578,    11,   578,   578,   578,   578,   578,
     578,   578,   578,   578,   578,   447,  -463,    17,   578,   448,
       5,   294,    71,   462,    17,  -463,  -463,  -463,    90,  -463,
      17,   370,   365,  -463,   474,    42,  -463,   578,   376,    17,
      61,    14,   478,   485,   346,   478,   -55,  -463,   751,  -463,
     347,  1402,  1082,    -6,  -463,   578,   578,   348,   730,   357,
    -463,  -463,  -463,   359,   578,   814,   835,   361,   938,  -463,
    1422,   875,  1440,   465,  -463,    32,  -463,  1458,  1458,   355,
     578,   578,  1373,   363,   364,   372,   465,   667,   410,   475,
     263,   334,   334,   481,   481,   481,   481,  -463,  -463,    61,
    -463,    37,   411,   429,   437,  -463,  -463,  -463,   -11,    78,
     491,   365,   365,   441,   428,    17,  -463,   449,  -463,  -463,
    -463,   540,    64,  -463,   299,  1402,   502,   444,    61,  -463,
    -463,   527,   -82,  -463,    82,   387,   -82,   387,   445,   578,
    -463,   578,  -463,   578,  1257,  1103,  -463,   578,  -463,  -463,
    1236,   454,   454,  -463,  -463,   406,   407,  -463,  -463,   465,
    1458,  1458,   578,   318,   318,   318,   408,   486,     5,   493,
     493,   493,   578,   568,   571,   376,  -463,  -463,    17,   578,
     -36,    17,    -9,   -24,   414,   415,   480,    95,  -463,   575,
     318,   577,   578,  -463,  -463,   489,   492,   585,  -463,  -463,
     587,   547,   -71,  -463,   -71,  -463,  -463,  1402,  1278,  -463,
     578,   896,   578,   578,   431,   439,  -463,  -463,   440,   442,
     958,   443,   450,   451,  -463,   564,   521,  -463,   513,   455,
     456,   463,  1402,   590,   -10,   444,  -463,  1402,   578,   466,
    -463,  -463,   -36,    64,  -463,   468,   471,   485,   485,   472,
      35,    64,  1095,  -463,    34,   856,  -463,  1402,   501,   591,
    -463,  -463,  1402,   141,   490,  -463,  -463,  -463,  1402,   578,
    -463,   479,  1001,  -463,  -463,  -463,  -463,  -463,  -463,  -463,
     578,   578,   376,  -463,   649,   649,   649,   578,   578,   650,
    -463,  1402,   485,  -463,   144,   485,   485,   153,   171,   485,
    -463,  -463,  -463,  -463,   494,   494,   494,   494,   494,  -463,
     494,  -463,   496,   494,   494,   494,   611,  -463,   611,  -463,
     494,   494,   494,   497,   611,   494,   611,  -463,  -463,  -463,
     498,   499,  -463,  -463,  -463,  -463,  -463,   578,   478,   631,
    -463,   662,   547,   980,  -463,  -463,  -463,  -463,  -463,  -463,
    -463,  -463,  -463,  -463,  1313,    36,  1402,   444,  -463,   178,
     181,   184,  1402,  1402,   641,   210,    93,   223,   227,  -463,
    -463,   235,   657,  -463,  -463,  -463,  -463,  -463,  -463,   659,
    -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,  -463,   659,
    -463,  -463,  -463,   666,   668,   159,  1402,   509,  -463,  1402,
    -463,  1402,   238,  -463,  -463,   548,   578,  -463,   581,  -463,
     672,  -463,  -463,   578,  -463,  -463,  -463,  -463,  -463,   240,
      83,   350,    83,    83,  -463,   252,    83,    83,    83,   350,
     350,    83,    83,    83,   254,   350,    83,   350,   514,   515,
     574,  -463,   681,   323,  -463,  -463,   589,   -14,  -463,  -463,
    1313,   485,  -463,  -463,  1402,  -463,   694,  -463,  -463,   580,
     703,  -463,   706,  -463,  -463,  -463,  -463,  -463,  -463,  -463,
    -463,  -463,  -463,  -463,   485,  -463,   550,   549,   724,  -463,
     350,  -463,   350,   350,   256,  -463,  -463,  -463
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   227,   167,     0,   182,   182,     0,   108,     0,   182,
       0,     0,    83,   162,   174,   176,   178,   202,   206,   215,
     220,   299,   218,   218,   228,     0,     0,     0,   188,   188,
       0,   300,   301,     0,     0,     0,     0,     1,     2,     0,
       0,     0,   218,   171,     0,   166,   164,   165,     0,   175,
     184,   185,   186,   187,   183,     0,     0,     0,     0,     0,
       4,     7,     8,    10,     9,     6,     0,     0,     0,   119,
     109,    80,     0,    81,    82,   110,   111,   112,   114,   116,
     115,   113,     0,     0,     0,     0,     0,     0,     0,   123,
      84,   117,   177,   186,   183,   123,     0,     0,   124,   126,
     127,   133,     3,   219,   216,   217,     0,     0,   169,    86,
       0,     0,     0,   189,   189,   304,   303,   302,     0,    41,
       0,    26,    27,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
     156,     0,     0,     0,     0,   141,   140,   144,   148,   145,
       0,     0,   142,   132,     0,   296,   172,     0,    99,     0,
      86,   171,     0,     0,     0,     0,     0,     5,    39,    42,
       0,    37,     0,     0,    72,     0,     0,     0,    39,     0,
      58,    56,    57,     0,     0,     0,     0,     0,     0,    18,
      20,    21,    19,     0,    35,     0,    33,    76,    78,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    22,    23,
      25,    11,    12,    13,    14,    15,    16,    24,   121,    86,
     118,   123,     0,     0,     0,   128,   161,   131,     0,    86,
     125,   142,   142,     0,   135,     0,   143,     0,   130,   297,
     298,     0,   236,   224,   133,    87,     0,   101,    86,   168,
     170,     0,   180,   106,     0,     0,   180,     0,   180,     0,
      48,     0,    70,     0,     0,     0,    47,     0,    51,    54,
       0,     0,     0,    49,    50,     0,     0,    36,    34,     0,
      77,    79,     0,     0,     0,     0,     0,    88,   156,   158,
     158,   158,     0,     0,     0,    99,   146,   147,     0,     0,
     149,     0,   296,     0,     0,     0,     0,     0,   229,     0,
       0,     0,     0,   163,   173,     0,     0,     0,   197,   190,
       0,     0,   180,   204,   180,   205,    40,    74,     0,    73,
       0,     0,     0,     0,     0,     0,    43,    45,     0,     0,
      38,     0,     0,     0,    29,     0,    97,   129,     0,     0,
       0,     0,   211,     0,     0,   101,   138,   136,     0,     0,
     134,   150,     0,   236,   226,     0,     0,     0,     0,     0,
     296,   236,     0,   295,    92,   102,   199,   198,     0,     0,
     107,   194,   193,     0,     0,   179,   203,    71,    75,     0,
      52,     0,     0,    59,    60,    44,    46,    32,    30,    31,
       0,     0,    99,   157,     0,     0,     0,     0,     0,     0,
     207,   151,     0,   137,     0,     0,     0,     0,     0,     0,
     223,   230,   283,   292,   251,   251,   251,   251,   251,   276,
     251,   273,     0,   251,   251,   251,   254,   285,   254,   284,
     251,   251,   251,     0,   254,   251,   254,   275,   282,   274,
       0,     0,   277,   238,    93,    94,   100,     0,     0,     0,
     191,     0,     0,     0,    55,    61,    62,    63,    64,    68,
      67,    69,    66,    65,    92,    95,    98,   101,   159,     0,
       0,     0,   212,   213,     0,     0,   296,     0,     0,   233,
     232,     0,     0,   280,   256,   262,   259,   256,   256,     0,
     256,   256,   256,   255,   259,   259,   256,   256,   256,     0,
     259,   256,   259,     0,     0,   237,   103,   181,   201,   200,
     196,   195,     0,    53,    90,     0,     0,    89,   104,   155,
       0,   154,   153,     0,   152,   225,   234,   235,   231,     0,
     268,   278,   270,   272,   293,     0,   271,   267,   266,   289,
     288,   265,   269,   264,     0,   286,   263,   287,     0,     0,
       0,   245,     0,     0,   249,   240,     0,     0,   192,    96,
      92,     0,    85,   160,   214,   252,     0,   257,   258,     0,
       0,   259,     0,   259,   259,   281,   239,   250,   241,   242,
     244,   243,   248,   247,     0,    91,   105,     0,     0,   261,
     290,   294,   291,   279,     0,   253,   260,   246
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -463,   692,   -33,  -124,  -463,  -463,   446,   612,  -463,   -90,
    -110,  -463,  -463,  -462,  -463,  -463,  -288,  -362,  -463,  -385,
    -463,  -463,   624,   -84,   -52,   584,  -162,   505,  -463,  -463,
     191,  -463,  -463,  -463,   401,   482,   118,    28,  -463,  -463,
    -463,   747,   617,  -463,  -463,  -463,   -80,   250,   764,   686,
     524,   324,  -184,  -463,  -463,  -463,  -463,  -463,   150,  -463,
    -463,   424,   421,  -463,  -463,   349,  -215,   -42,  -249,  -463,
     276,  -315,  -463,  -463,  -463,   754
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    10,   188,   189,   190,   204,   354,   126,    11,    12,
     178,   366,   495,   476,   547,   422,   267,   333,   592,   274,
      33,    90,    91,   156,    97,    98,    99,   174,   100,   171,
     257,   172,   253,   380,   381,   245,   369,   499,   101,    13,
      26,    48,   108,    14,    15,    16,   338,    28,    55,   184,
     342,   403,   272,    17,    18,    36,   249,    19,    40,    20,
      25,   327,   328,   329,   535,   513,   524,   560,   561,   473,
     565,   263,   264,    21,    31,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,   276,   437,   438,   199,   203,   161,   384,   254,   312,
     428,   160,  -208,   430,    60,    61,    62,    63,    64,    65,
      95,    95,  -210,  -209,   115,   116,   134,   375,    66,    67,
     336,   214,   544,   121,   122,   123,    68,   197,   297,   125,
     134,   336,   215,   182,   162,   223,   224,   505,   163,   185,
     507,   508,   111,   157,   511,   133,   194,   195,    71,   180,
      27,    72,   155,    73,    74,    30,   385,   179,   282,   283,
     269,   474,     7,   386,   378,   440,   155,    22,   183,    34,
     259,   337,   242,   613,   183,   164,    37,   191,   112,   295,
     277,   192,   404,   320,   243,   198,   278,   205,   206,   208,
     475,    38,   210,   211,   212,   239,   379,   217,   218,   260,
     222,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,    39,   296,   259,    89,    43,   268,   615,   307,
     196,   259,   225,   216,   497,   548,   306,   112,   158,   315,
     298,    23,   196,   323,   265,     7,    42,   614,   244,   313,
     429,    24,   383,   260,   324,   346,   376,   308,   334,   382,
     260,   325,   284,   285,    82,    83,    84,    85,    86,    87,
    -208,   290,   226,    41,   107,   358,   580,   326,    96,    96,
    -210,  -209,   259,   159,   120,   545,    57,   300,   301,    49,
     251,   555,   106,   133,  -221,   581,   343,    58,   345,   546,
      50,    44,   261,   262,   118,   119,   616,   252,   177,   359,
     582,   260,    45,   361,   362,   363,    60,    61,    62,    63,
      64,    65,    46,   597,   164,   177,   583,    51,   411,   624,
      66,    67,    52,   247,   164,   598,    53,    47,    68,    69,
     393,   314,    54,   525,   339,   340,    92,    70,   347,   530,
     348,   532,  -222,    50,   351,    29,   584,   390,   391,    35,
      71,    59,   405,    72,   406,    73,    74,   585,   219,   360,
     220,   221,   586,    75,   103,   569,   570,    76,   104,   372,
      51,   575,   105,   577,   109,    93,   377,   148,   149,   150,
     151,   152,   153,   154,   537,    94,   113,    77,   114,   395,
     587,   127,   397,   480,   481,     1,   506,   391,   402,    60,
      61,    62,    63,    64,    65,   509,   340,   408,     2,     3,
     412,  -171,   128,    66,    67,   129,   177,   608,   609,   610,
     611,    68,    78,   510,   340,    79,    80,    81,   173,   107,
     549,   550,  -171,   551,   550,   431,   552,   550,   130,     4,
     200,   131,   620,    71,   622,   623,    72,   175,    73,    74,
     150,   151,   152,   153,   154,   132,    82,    83,    84,    85,
      86,    87,   554,   340,    88,     5,   483,    60,    61,    62,
      63,    64,    65,     6,     7,   556,   340,   494,   496,   557,
     340,    66,    67,     8,   502,   503,     9,   558,   340,    68,
     588,   481,   595,   596,   599,   600,   176,   201,    60,    61,
      62,    63,    64,    65,   601,   602,   603,   602,   627,   340,
     181,    71,    66,    67,    72,   187,    73,    74,   370,   371,
      68,   207,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   202,   316,   317,   536,     7,   539,   213,   541,   402,
     238,   241,    71,   500,   501,    72,   246,    73,    74,    82,
      83,    84,    85,    86,    87,   248,   255,    88,    60,    61,
      62,    63,    64,    65,   256,   562,   563,   258,   566,   567,
     568,   271,    66,    67,   571,   572,   573,   266,   273,   576,
      68,   275,    60,    61,    62,    63,    64,    65,   147,   148,
     149,   150,   151,   152,   153,   154,    66,    67,   309,   280,
     286,   154,    71,   590,    68,    72,   299,    73,    74,   288,
     594,   289,   124,   293,   303,   304,   310,    82,    83,    84,
      85,    86,    87,   305,   311,    88,    71,   318,   319,    72,
     165,    73,    74,   322,   331,   321,   332,   335,   341,   353,
      60,    61,    62,    63,    64,    65,   396,   336,    82,    83,
      84,    85,    86,    87,    66,    67,    88,   365,   356,   357,
     364,   373,    68,   368,   374,   387,   388,   389,   392,   166,
     394,    60,    61,    62,    63,    64,    65,  -139,   399,   398,
     400,   167,     7,   413,    71,    66,    67,    72,   168,    73,
      74,   414,   415,    68,   416,   417,   420,   421,   169,   423,
     427,   479,   418,   419,   401,   170,   424,   425,    82,    83,
      84,    85,    86,    87,   426,    71,    88,   432,    72,   435,
      73,    74,   436,   439,    60,    61,    62,    63,    64,    65,
     478,   484,    82,    83,    84,    85,    86,    87,    66,    67,
      88,   482,   498,   504,   523,   512,    68,   519,   529,   533,
     534,   553,   559,   564,   589,    60,    61,    62,    63,    64,
      65,   578,   337,   579,   591,   593,   604,   605,    71,    66,
      67,    72,   606,    73,    74,   607,   612,    68,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   538,   617,
      82,    83,    84,    85,    86,    87,   618,   619,    88,    71,
     621,   625,    72,   340,    73,    74,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   626,   540,
     102,    82,    83,    84,    85,    86,    87,   193,   355,    88,
     135,   136,   137,   138,   139,   140,   141,   142,   250,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   135,   136,   137,   138,   139,   140,   141,   142,   330,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   240,   433,    82,    83,    84,    85,    86,    87,
     367,   110,    88,    56,   514,   515,   516,   517,   270,   518,
     186,   344,   520,   521,   522,   574,   542,   434,   287,   526,
     527,   528,   441,   117,   531,    82,    83,    84,    85,    86,
      87,     0,     0,    88,   135,   136,   137,   138,   139,   140,
     141,   142,     0,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   135,   136,   137,   138,   139,
     140,   141,   142,     0,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   135,   136,   137,   138,
     139,   140,   141,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   137,   138,   139,
     140,   141,   142,   279,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   135,   136,   137,   138,
     139,   140,   141,   142,   279,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   135,   136,   137,
     138,   139,   140,   141,   142,     0,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   135,   136,
     137,   138,   139,   140,   141,   142,     0,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
       0,     0,     0,     0,     0,     0,   409,   291,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   292,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   135,   136,   137,   138,   139,   140,   141,   142,   477,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   135,   136,   137,   138,   139,   140,   141,   142,
       0,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,     0,     0,     0,     0,     0,   410,   485,
     486,     0,     0,     0,   487,     0,   488,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   209,
       0,     0,     0,   489,   490,     0,   491,     0,     0,     0,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     294,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   135,   136,   137,   138,   139,   140,   141,
     142,     0,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,     0,   442,   443,     0,   444,     0,
     445,   446,   543,     0,     0,     0,     0,     0,     0,   447,
       0,   492,   493,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   448,   449,   450,   451,     0,   452,     0,
     124,   453,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   454,     0,     0,     0,     0,     0,     0,   455,
       0,     0,     0,   456,     0,     0,     0,     0,   457,   458,
     459,   460,     0,     0,     0,     0,     0,     0,     0,     0,
     461,     0,     0,     0,     0,     0,   281,     0,     0,     0,
     462,   463,     0,   464,   465,     0,   466,   467,     0,     0,
       0,     0,   468,   469,     0,     0,     0,   350,     0,   470,
       0,   471,     0,     0,     0,   472,   135,   136,   137,   138,
     139,   140,   141,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   135,   136,   137,
     138,   139,   140,   141,   142,     0,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   135,   136,
     137,   138,   139,   140,   141,   142,     0,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
       0,     0,     0,     0,   352,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   349,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,     0,     0,   134,     0,     0,     0,
     474,     0,   407,   135,   136,   137,   138,   139,   140,   141,
     142,     0,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,     0,     0,     0,     0,     0,   475,
       0,     0,   155,   135,   136,   137,   138,   139,   140,   141,
     142,     0,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,     0,     0,     0,     0,     0,     0,
       0,   302,   135,   136,   137,   138,   139,   140,   141,   142,
       0,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   136,   137,   138,   139,   140,   141,   142,
       0,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   138,   139,   140,   141,   142,     0,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,  -223,  -223,  -223,  -223,   142,     0,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154
};

static const yytype_int16 yycheck[] =
{
      33,   185,   387,   388,   128,   129,    96,   322,   170,    20,
      20,    95,     3,   375,     3,     4,     5,     6,     7,     8,
       3,     3,     3,     3,    57,    58,     3,   315,    17,    18,
     112,     6,   494,    66,    67,    68,    25,   127,     6,    72,
       3,   112,    17,   126,    96,    34,    35,   432,   126,   126,
     435,   436,    78,    78,   439,    88,    74,    75,    47,   111,
     133,    50,    39,    52,    53,     8,    90,   142,    74,    75,
     180,    37,   127,    97,   110,   390,    39,    56,   161,   133,
      89,   163,    77,    97,   161,   163,     0,   120,   163,   213,
     145,   124,   163,   255,    89,   128,   186,   130,   131,   132,
      66,   159,   135,   136,   137,   157,   142,   140,   141,   118,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,    91,   213,    89,   158,     3,   179,   590,   239,
     148,    89,   121,   108,   422,   497,   226,   163,   163,   249,
     108,   120,   148,    79,   177,   127,   133,   161,   143,   160,
     160,   130,   161,   118,    90,   279,   318,   241,   268,   321,
     118,    97,   195,   196,   153,   154,   155,   156,   157,   158,
     161,   204,   161,    23,   160,   299,    17,   113,   161,   161,
     161,   161,    89,   160,     9,   149,     9,   220,   221,     3,
     100,   506,    42,   226,   159,    36,   276,    20,   278,   163,
      57,    78,   160,   161,   160,   161,   591,   117,   147,   299,
      51,   118,    89,   303,   304,   305,     3,     4,     5,     6,
       7,     8,    99,   140,   163,   147,    67,    84,   352,   614,
      17,    18,    89,   162,   163,   152,    93,   114,    25,    26,
     330,   163,    99,   458,   162,   163,     3,    34,   281,   464,
     283,   466,   159,    57,   287,     5,    97,   162,   163,     9,
      47,   163,   342,    50,   344,    52,    53,   108,    13,   302,
      15,    16,   113,    60,   153,   524,   525,    64,     3,   312,
      84,   530,     3,   532,     3,    89,   319,    24,    25,    26,
      27,    28,    29,    30,   478,    99,     3,    84,     3,   332,
     141,   161,   335,   162,   163,    48,   162,   163,   341,     3,
       4,     5,     6,     7,     8,   162,   163,   350,    61,    62,
     353,   142,   161,    17,    18,   161,   147,     4,     5,     6,
       7,    25,   119,   162,   163,   122,   123,   124,    39,   160,
     162,   163,   163,   162,   163,   378,   162,   163,   161,    92,
      44,   161,   601,    47,   603,   604,    50,     3,    52,    53,
      26,    27,    28,    29,    30,   161,   153,   154,   155,   156,
     157,   158,   162,   163,   161,   118,   409,     3,     4,     5,
       6,     7,     8,   126,   127,   162,   163,   420,   421,   162,
     163,    17,    18,   136,   427,   428,   139,   162,   163,    25,
     162,   163,   162,   163,    54,    55,    26,   101,     3,     4,
       5,     6,     7,     8,   162,   163,   162,   163,   162,   163,
       3,    47,    17,    18,    50,     3,    52,    53,   310,   311,
      25,    26,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   135,   251,   252,   477,   127,   479,   161,   481,   482,
       3,     3,    47,   425,   426,    50,   162,    52,    53,   153,
     154,   155,   156,   157,   158,     3,    96,   161,     3,     4,
       5,     6,     7,     8,   109,   517,   518,     3,   520,   521,
     522,     3,    17,    18,   526,   527,   528,   111,     3,   531,
      25,   145,     3,     4,     5,     6,     7,     8,    23,    24,
      25,    26,    27,    28,    29,    30,    17,    18,    97,   162,
     162,    30,    47,   546,    25,    50,   161,    52,    53,   162,
     553,   162,   148,   162,   161,   161,    97,   153,   154,   155,
     156,   157,   158,   161,    97,   161,    47,    96,   110,    50,
      49,    52,    53,     3,    42,    96,   102,    20,   161,    95,
       3,     4,     5,     6,     7,     8,    67,   112,   153,   154,
     155,   156,   157,   158,    17,    18,   161,    81,   162,   162,
     162,     3,    25,    80,     3,   161,   161,    97,     3,    88,
       3,     3,     4,     5,     6,     7,     8,    96,     3,    97,
       3,   100,   127,   162,    47,    17,    18,    50,   107,    52,
      53,   162,   162,    25,   162,   162,    42,    86,   117,    96,
      20,    20,   162,   162,    67,   124,   161,   161,   153,   154,
     155,   156,   157,   158,   161,    47,   161,   161,    50,   161,
      52,    53,   161,   161,     3,     4,     5,     6,     7,     8,
     139,   162,   153,   154,   155,   156,   157,   158,    17,    18,
     161,   161,     3,     3,    43,   161,    25,   161,   161,   161,
     161,    20,     5,     4,   116,     3,     4,     5,     6,     7,
       8,     5,   163,     5,    93,     3,   162,   162,    47,    17,
      18,    50,   108,    52,    53,     4,    97,    25,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    67,     5,
     153,   154,   155,   156,   157,   158,   126,     4,   161,    47,
       4,   162,    50,   163,    52,    53,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     4,    67,
      38,   153,   154,   155,   156,   157,   158,   125,   292,   161,
      10,    11,    12,    13,    14,    15,    16,    17,   164,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,   264,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   158,   382,   153,   154,   155,   156,   157,   158,
     308,    44,   161,    29,   445,   446,   447,   448,   181,   450,
     114,   277,   453,   454,   455,   529,   482,   383,    78,   460,
     461,   462,   391,    59,   465,   153,   154,   155,   156,   157,
     158,    -1,    -1,   161,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    12,    13,    14,
      15,    16,    17,   163,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    17,   163,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,   163,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,   163,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,   163,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,   162,    58,
      59,    -1,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    82,    83,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
     162,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    40,    41,    -1,    43,    -1,
      45,    46,   162,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    -1,    73,    -1,
     148,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,
     125,   126,    -1,   128,   129,    -1,   131,   132,    -1,    -1,
      -1,    -1,   137,   138,    -1,    -1,    -1,   134,    -1,   144,
      -1,   146,    -1,    -1,    -1,   150,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    74,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,     3,    -1,    -1,    -1,
      37,    -1,    74,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30
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
     123,   124,   153,   154,   155,   156,   157,   158,   161,   166,
     185,   186,     3,    89,    99,     3,   161,   188,   189,   190,
     192,   202,   165,   153,     3,     3,   222,   160,   206,     3,
     205,    78,   163,     3,     3,   166,   166,   239,   160,   161,
       9,   166,   166,   166,   148,   166,   171,   161,   161,   161,
     161,   161,   161,   166,     3,    10,    11,    12,    13,    14,
      15,    16,    17,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    39,   187,    78,   163,   160,
     187,   173,   188,   126,   163,    49,    88,   100,   107,   117,
     124,   193,   195,    39,   191,     3,    26,   147,   174,   142,
     188,     3,   126,   161,   213,   126,   213,     3,   166,   167,
     168,   166,   166,   171,    74,    75,   148,   173,   166,   167,
      44,   101,   135,   167,   169,   166,   166,    26,   166,   162,
     166,   166,   166,   161,     6,    17,   108,   166,   166,    13,
      15,    16,   166,    34,    35,   121,   161,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,     3,   188,
     186,     3,    77,    89,   143,   199,   162,   162,     3,   220,
     189,   100,   117,   196,   190,    96,   109,   194,     3,    89,
     118,   160,   161,   235,   236,   166,   111,   180,   188,   174,
     206,     3,   216,     3,   183,   145,   216,   145,   173,   163,
     162,   134,    74,    75,   166,   166,   162,    78,   162,   162,
     166,   163,   163,   162,   162,   167,   173,     6,   108,   161,
     166,   166,    38,   161,   161,   161,   173,   174,   187,    97,
      97,    97,    20,   160,   163,   174,   194,   194,    96,   110,
     190,    96,     3,    79,    90,    97,   113,   225,   226,   227,
     191,    42,   102,   181,   174,    20,   112,   163,   210,   162,
     163,   161,   214,   210,   214,   210,   167,   166,   166,    74,
     134,   166,    78,    95,   170,   170,   162,   162,   167,   173,
     166,   173,   173,   173,   162,    81,   175,   199,    80,   200,
     200,   200,   166,     3,     3,   180,   190,   166,   110,   142,
     197,   198,   190,   161,   235,    90,    97,   161,   161,    97,
     162,   163,     3,   173,     3,   166,    67,   166,    97,     3,
       3,    67,   166,   215,   163,   210,   210,    74,   166,    80,
     162,   167,   166,   162,   162,   162,   162,   162,   162,   162,
      42,    86,   179,    96,   161,   161,   161,    20,    20,   160,
     181,   166,   161,   198,   225,   161,   161,   183,   183,   161,
     235,   226,    40,    41,    43,    45,    46,    54,    68,    69,
      70,    71,    73,    76,    87,    94,    98,   103,   104,   105,
     106,   115,   125,   126,   128,   129,   131,   132,   137,   138,
     144,   146,   150,   233,    37,    66,   177,   163,   139,    20,
     162,   163,   161,   166,   162,    58,    59,    63,    65,    82,
      83,    85,   150,   151,   166,   176,   166,   180,     3,   201,
     201,   201,   166,   166,     3,   183,   162,   183,   183,   162,
     162,   183,   161,   229,   229,   229,   229,   229,   229,   161,
     229,   229,   229,    43,   230,   230,   229,   229,   229,   161,
     230,   229,   230,   161,   161,   228,   166,   216,    67,   166,
      67,   166,   215,   162,   177,   149,   163,   178,   181,   162,
     163,   162,   162,    20,   162,   235,   162,   162,   162,     5,
     231,   232,   231,   231,     4,   234,   231,   231,   231,   232,
     232,   231,   231,   231,   234,   232,   231,   232,     5,     5,
      17,    36,    51,    67,    97,   108,   113,   141,   162,   116,
     166,    93,   182,     3,   166,   162,   163,   140,   152,    54,
      55,   162,   163,   162,   162,   162,   108,     4,     4,     5,
       6,     7,    97,    97,   161,   177,   183,     5,   126,     4,
     232,     4,   232,   232,   183,   162,     4,   162
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   167,
     167,   168,   168,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   169,   169,   169,   166,
     166,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     166,   166,   166,   166,   171,   171,   166,   166,   166,   166,
     166,   166,   166,   172,   173,   173,   174,   174,   175,   175,
     176,   176,   177,   177,   177,   178,   178,   179,   179,   180,
     180,   181,   181,   181,   182,   182,   183,   183,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   185,   185,   185,
     186,   187,   187,   187,   188,   188,   189,   189,   190,   190,
     190,   190,   191,   191,   192,   192,   192,   192,   192,   193,
     193,   193,   194,   194,   195,   195,   196,   196,   196,   197,
     197,   198,   198,   199,   199,   199,   199,   200,   200,   201,
     201,   202,   172,   203,   204,   204,   204,   204,   203,   205,
     205,   206,   206,   203,   172,   207,   172,   208,   172,   209,
     210,   210,   211,   211,   211,   211,   211,   212,   212,   213,
     213,   214,   214,   215,   215,   215,   215,   209,   216,   216,
     216,   216,   172,   217,   217,   217,   172,   218,   219,   219,
     219,   220,   220,   220,   220,   172,   221,   221,   222,   222,
     172,   223,   223,   223,   223,   223,   223,   224,   224,   225,
     225,   226,   226,   226,   226,   226,   227,   226,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   229,   229,   229,   230,   230,   231,   231,   231,   232,
     232,   232,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   234,   234,   235,   236,   236,   236,   172,
     237,   238,   238,   239,   239
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     5,
       6,     6,     6,     3,     4,     3,     4,     3,     5,     1,
       3,     0,     1,     5,     6,     5,     6,     4,     4,     4,
       4,     4,     6,     8,     4,     7,     1,     1,     1,     6,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     6,     3,     5,     4,     5,     3,     4,     3,     4,
       1,     1,     1,     1,     3,    11,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       4,     0,     2,     4,     0,     2,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       2,     2,     1,     0,     1,     3,     1,     1,     3,     5,
       3,     3,     1,     0,     5,     3,     5,     6,     5,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     0,
       1,     2,     4,     6,     6,     6,     0,     2,     0,     1,
       3,     3,     1,     7,     2,     2,     2,     0,     6,     2,
       4,     0,     2,     7,     1,     3,     1,     3,     1,     8,
       0,     4,     0,     2,     2,     2,     2,     1,     0,     0,
       3,     3,     5,     1,     1,     3,     3,     7,     3,     3,
       5,     5,     1,     8,     7,     7,     1,     8,     0,     2,
       2,     3,     5,     5,     7,     1,     4,     4,     0,     2,
       1,     8,    10,     9,     6,    11,     8,     0,     1,     1,
       3,     5,     4,     4,     5,     5,     0,     4,     0,     3,
       2,     3,     3,     3,     3,     2,     5,     3,     3,     2,
       3,     0,     3,     5,     0,     1,     0,     2,     2,     0,
       4,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     3,     5,
       2,     4,     1,     1,     1,     1,     3,     3,     3,     3,
       5,     5,     1,     1,     3,     3,     0,     1,     1,     1,
       2,     1,     3,     3,     3
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
#line 255 "parser/evoparser.y"
    {
        emit("NAME %s", (yyvsp[0].strval));
        GetSelection((yyvsp[0].strval));
        (yyval.exprval) = expr_make_column((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 1948 "parser/evoparser.tab.c"
    break;

  case 5: /* expr: NAME '.' NAME  */
#line 261 "parser/evoparser.y"
                                                                                { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); (yyval.exprval) = expr_make_column((yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 1954 "parser/evoparser.tab.c"
    break;

  case 6: /* expr: USERVAR  */
#line 262 "parser/evoparser.y"
                                                                                { emit("USERVAR %s", (yyvsp[0].strval)); (yyval.exprval) = expr_make_string((yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 1960 "parser/evoparser.tab.c"
    break;

  case 7: /* expr: STRING  */
#line 264 "parser/evoparser.y"
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
            (yyval.exprval) = expr_make_string(stripped);
        } else {
            GetInsertions(sv);
            (yyval.exprval) = expr_make_string(sv);
        }
        free(sv);
    }
#line 1982 "parser/evoparser.tab.c"
    break;

  case 8: /* expr: INTNUM  */
#line 282 "parser/evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[0].intval));
        char buf[32];
        sprintf(buf, "%d", (yyvsp[0].intval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_int((yyvsp[0].intval));
    }
#line 1994 "parser/evoparser.tab.c"
    break;

  case 9: /* expr: APPROXNUM  */
#line 290 "parser/evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[0].floatval));
        char buf[64];
        sprintf(buf, "%g", (yyvsp[0].floatval));
        GetInsertions(buf);
        (yyval.exprval) = expr_make_float((yyvsp[0].floatval));
    }
#line 2006 "parser/evoparser.tab.c"
    break;

  case 10: /* expr: BOOL  */
#line 298 "parser/evoparser.y"
    {
        emit("BOOL %d", (yyvsp[0].intval));
        GetInsertions((yyvsp[0].intval) ? "true" : "false");
        (yyval.exprval) = expr_make_bool((yyvsp[0].intval));
    }
#line 2016 "parser/evoparser.tab.c"
    break;

  case 11: /* expr: expr '+' expr  */
#line 305 "parser/evoparser.y"
                                                                                { emit("ADD"); (yyval.exprval) = expr_make_binop(EXPR_ADD, (yyvsp[-2].exprval), (yyvsp[0].exprval)); }
#line 2022 "parser/evoparser.tab.c"
    break;

  case 12: /* expr: expr '-' expr  */
#line 306 "parser/evoparser.y"
                                                                                { emit("SUB"); (yyval.exprval) = expr_make_binop(EXPR_SUB, (yyvsp[-2].exprval), (yyvsp[0].exprval)); }
#line 2028 "parser/evoparser.tab.c"
    break;

  case 13: /* expr: expr '*' expr  */
#line 307 "parser/evoparser.y"
                                                                                { emit("MUL"); (yyval.exprval) = expr_make_binop(EXPR_MUL, (yyvsp[-2].exprval), (yyvsp[0].exprval)); }
#line 2034 "parser/evoparser.tab.c"
    break;

  case 14: /* expr: expr '/' expr  */
#line 308 "parser/evoparser.y"
                                                                                { emit("DIV"); (yyval.exprval) = expr_make_binop(EXPR_DIV, (yyvsp[-2].exprval), (yyvsp[0].exprval)); }
#line 2040 "parser/evoparser.tab.c"
    break;

  case 15: /* expr: expr '%' expr  */
#line 309 "parser/evoparser.y"
                                                                                { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[-2].exprval), (yyvsp[0].exprval)); }
#line 2046 "parser/evoparser.tab.c"
    break;

  case 16: /* expr: expr MOD expr  */
#line 310 "parser/evoparser.y"
                                                                                { emit("MOD"); (yyval.exprval) = expr_make_binop(EXPR_MOD, (yyvsp[-2].exprval), (yyvsp[0].exprval)); }
#line 2052 "parser/evoparser.tab.c"
    break;

  case 17: /* expr: '-' expr  */
#line 311 "parser/evoparser.y"
                                                                                { emit("NEG"); (yyval.exprval) = expr_make_neg((yyvsp[0].exprval)); }
#line 2058 "parser/evoparser.tab.c"
    break;

  case 18: /* expr: '(' expr ')'  */
#line 312 "parser/evoparser.y"
                                                                                { (yyval.exprval) = (yyvsp[-1].exprval); }
#line 2064 "parser/evoparser.tab.c"
    break;

  case 19: /* expr: expr ANDOP expr  */
#line 313 "parser/evoparser.y"
                                                                                { emit("AND"); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2070 "parser/evoparser.tab.c"
    break;

  case 20: /* expr: expr OR expr  */
#line 314 "parser/evoparser.y"
                                                                                { emit("OR"); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2076 "parser/evoparser.tab.c"
    break;

  case 21: /* expr: expr XOR expr  */
#line 315 "parser/evoparser.y"
                                                                                { emit("XOR"); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2082 "parser/evoparser.tab.c"
    break;

  case 22: /* expr: expr '|' expr  */
#line 316 "parser/evoparser.y"
                                                                                { emit("BITOR"); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2088 "parser/evoparser.tab.c"
    break;

  case 23: /* expr: expr '&' expr  */
#line 317 "parser/evoparser.y"
                                                                                { emit("BITAND"); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2094 "parser/evoparser.tab.c"
    break;

  case 24: /* expr: expr '^' expr  */
#line 318 "parser/evoparser.y"
                                                                                { emit("BITXOR"); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2100 "parser/evoparser.tab.c"
    break;

  case 25: /* expr: expr SHIFT expr  */
#line 319 "parser/evoparser.y"
                                                                                { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2106 "parser/evoparser.tab.c"
    break;

  case 26: /* expr: NOT expr  */
#line 320 "parser/evoparser.y"
                                                                                { emit("NOT"); (yyval.exprval) = (yyvsp[0].exprval); }
#line 2112 "parser/evoparser.tab.c"
    break;

  case 27: /* expr: '!' expr  */
#line 321 "parser/evoparser.y"
                                                                                { emit("NOT"); (yyval.exprval) = (yyvsp[0].exprval); }
#line 2118 "parser/evoparser.tab.c"
    break;

  case 28: /* expr: expr COMPARISON expr  */
#line 323 "parser/evoparser.y"
    {
        emit("CMP %d", (yyvsp[-1].subtok));
        (yyval.exprval) = (yyvsp[-2].exprval);
    }
#line 2127 "parser/evoparser.tab.c"
    break;

  case 29: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 328 "parser/evoparser.y"
                                                                                { emit("CMPSELECT %d", (yyvsp[-3].subtok)); (yyval.exprval) = (yyvsp[-4].exprval); }
#line 2133 "parser/evoparser.tab.c"
    break;

  case 30: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 329 "parser/evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); (yyval.exprval) = (yyvsp[-5].exprval); }
#line 2139 "parser/evoparser.tab.c"
    break;

  case 31: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 330 "parser/evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); (yyval.exprval) = (yyvsp[-5].exprval); }
#line 2145 "parser/evoparser.tab.c"
    break;

  case 32: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 331 "parser/evoparser.y"
                                                                                { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); (yyval.exprval) = (yyvsp[-5].exprval); }
#line 2151 "parser/evoparser.tab.c"
    break;

  case 33: /* expr: expr IS NULLX  */
#line 334 "parser/evoparser.y"
                                                                                { emit("ISNULL"); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2157 "parser/evoparser.tab.c"
    break;

  case 34: /* expr: expr IS NOT NULLX  */
#line 335 "parser/evoparser.y"
                                                                                { emit("ISNULL"); emit("NOT"); (yyval.exprval) = (yyvsp[-3].exprval); }
#line 2163 "parser/evoparser.tab.c"
    break;

  case 35: /* expr: expr IS BOOL  */
#line 336 "parser/evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2169 "parser/evoparser.tab.c"
    break;

  case 36: /* expr: expr IS NOT BOOL  */
#line 337 "parser/evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[-3].exprval); }
#line 2175 "parser/evoparser.tab.c"
    break;

  case 37: /* expr: USERVAR ASSIGN expr  */
#line 338 "parser/evoparser.y"
                                                                                { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.exprval) = (yyvsp[0].exprval); }
#line 2181 "parser/evoparser.tab.c"
    break;

  case 38: /* expr: expr BETWEEN expr AND expr  */
#line 341 "parser/evoparser.y"
                                                                                { emit("BETWEEN"); (yyval.exprval) = (yyvsp[-4].exprval); }
#line 2187 "parser/evoparser.tab.c"
    break;

  case 39: /* val_list: expr  */
#line 344 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2193 "parser/evoparser.tab.c"
    break;

  case 40: /* val_list: expr ',' val_list  */
#line 345 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2199 "parser/evoparser.tab.c"
    break;

  case 41: /* opt_val_list: %empty  */
#line 348 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2205 "parser/evoparser.tab.c"
    break;

  case 43: /* expr: expr IN '(' val_list ')'  */
#line 352 "parser/evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); (yyval.exprval) = (yyvsp[-4].exprval); }
#line 2211 "parser/evoparser.tab.c"
    break;

  case 44: /* expr: expr NOT IN '(' val_list ')'  */
#line 353 "parser/evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); (yyval.exprval) = (yyvsp[-5].exprval); }
#line 2217 "parser/evoparser.tab.c"
    break;

  case 45: /* expr: expr IN '(' select_stmt ')'  */
#line 354 "parser/evoparser.y"
                                                                                { emit("CMPANYSELECT 4"); (yyval.exprval) = (yyvsp[-4].exprval); }
#line 2223 "parser/evoparser.tab.c"
    break;

  case 46: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 355 "parser/evoparser.y"
                                                                                { emit("CMPALLSELECT 3"); (yyval.exprval) = (yyvsp[-5].exprval); }
#line 2229 "parser/evoparser.tab.c"
    break;

  case 47: /* expr: EXISTS '(' select_stmt ')'  */
#line 356 "parser/evoparser.y"
                                                                                { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); (yyval.exprval) = NULL; }
#line 2235 "parser/evoparser.tab.c"
    break;

  case 48: /* expr: NAME '(' opt_val_list ')'  */
#line 360 "parser/evoparser.y"
                                                                                { emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); (yyval.exprval) = expr_make_column((yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2241 "parser/evoparser.tab.c"
    break;

  case 49: /* expr: FCOUNT '(' '*' ')'  */
#line 364 "parser/evoparser.y"
                                                                                { emit("COUNTALL"); (yyval.exprval) = expr_make_column("COUNT"); }
#line 2247 "parser/evoparser.tab.c"
    break;

  case 50: /* expr: FCOUNT '(' expr ')'  */
#line 365 "parser/evoparser.y"
                                                                                { emit(" CALL 1 COUNT"); (yyval.exprval) = expr_make_column("COUNT"); }
#line 2253 "parser/evoparser.tab.c"
    break;

  case 51: /* expr: FSUBSTRING '(' val_list ')'  */
#line 367 "parser/evoparser.y"
                                                                                { emit("CALL %d SUBSTR", (yyvsp[-1].intval)); (yyval.exprval) = expr_make_column("SUBSTR"); }
#line 2259 "parser/evoparser.tab.c"
    break;

  case 52: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 368 "parser/evoparser.y"
                                                                                { emit("CALL 2 SUBSTR"); (yyval.exprval) = expr_make_column("SUBSTR"); }
#line 2265 "parser/evoparser.tab.c"
    break;

  case 53: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 369 "parser/evoparser.y"
                                                                                { emit("CALL 3 SUBSTR"); (yyval.exprval) = expr_make_column("SUBSTR"); }
#line 2271 "parser/evoparser.tab.c"
    break;

  case 54: /* expr: FTRIM '(' val_list ')'  */
#line 370 "parser/evoparser.y"
                                                                                { emit("CALL %d TRIM", (yyvsp[-1].intval)); (yyval.exprval) = expr_make_column("TRIM"); }
#line 2277 "parser/evoparser.tab.c"
    break;

  case 55: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 371 "parser/evoparser.y"
                                                                                { emit("CALL 3 TRIM"); (yyval.exprval) = expr_make_column("TRIM"); }
#line 2283 "parser/evoparser.tab.c"
    break;

  case 56: /* trim_ltb: LEADING  */
#line 374 "parser/evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2289 "parser/evoparser.tab.c"
    break;

  case 57: /* trim_ltb: TRAILING  */
#line 375 "parser/evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2295 "parser/evoparser.tab.c"
    break;

  case 58: /* trim_ltb: BOTH  */
#line 376 "parser/evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2301 "parser/evoparser.tab.c"
    break;

  case 59: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 379 "parser/evoparser.y"
                                                                                { emit("CALL 3 DATE_ADD"); (yyval.exprval) = expr_make_column("DATE_ADD"); }
#line 2307 "parser/evoparser.tab.c"
    break;

  case 60: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 380 "parser/evoparser.y"
                                                                                { emit("CALL 3 DATE_SUB"); (yyval.exprval) = expr_make_column("DATE_SUB"); }
#line 2313 "parser/evoparser.tab.c"
    break;

  case 61: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 383 "parser/evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2319 "parser/evoparser.tab.c"
    break;

  case 62: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 384 "parser/evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2325 "parser/evoparser.tab.c"
    break;

  case 63: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 385 "parser/evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2331 "parser/evoparser.tab.c"
    break;

  case 64: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 386 "parser/evoparser.y"
                                                                                { emit("NUMBER 4"); }
#line 2337 "parser/evoparser.tab.c"
    break;

  case 65: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 387 "parser/evoparser.y"
                                                                                { emit("NUMBER 5"); }
#line 2343 "parser/evoparser.tab.c"
    break;

  case 66: /* interval_exp: INTERVAL expr YEAR  */
#line 388 "parser/evoparser.y"
                                                                                { emit("NUMBER 6"); }
#line 2349 "parser/evoparser.tab.c"
    break;

  case 67: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 389 "parser/evoparser.y"
                                                                                { emit("NUMBER 7"); }
#line 2355 "parser/evoparser.tab.c"
    break;

  case 68: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 390 "parser/evoparser.y"
                                                                                { emit("NUMBER 8"); }
#line 2361 "parser/evoparser.tab.c"
    break;

  case 69: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 391 "parser/evoparser.y"
                                                                                { emit("NUMBER 9"); }
#line 2367 "parser/evoparser.tab.c"
    break;

  case 70: /* expr: CASE expr case_list END  */
#line 394 "parser/evoparser.y"
                                                                                { emit("CASEVAL %d 0", (yyvsp[-1].intval)); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2373 "parser/evoparser.tab.c"
    break;

  case 71: /* expr: CASE expr case_list ELSE expr END  */
#line 395 "parser/evoparser.y"
                                                                                { emit("CASEVAL %d 1", (yyvsp[-3].intval)); (yyval.exprval) = (yyvsp[-4].exprval); }
#line 2379 "parser/evoparser.tab.c"
    break;

  case 72: /* expr: CASE case_list END  */
#line 396 "parser/evoparser.y"
                                                                                { emit("CASE %d 0", (yyvsp[-1].intval)); (yyval.exprval) = NULL; }
#line 2385 "parser/evoparser.tab.c"
    break;

  case 73: /* expr: CASE case_list ELSE expr END  */
#line 397 "parser/evoparser.y"
                                                                                { emit("CASE %d 1", (yyvsp[-3].intval)); (yyval.exprval) = (yyvsp[-1].exprval); }
#line 2391 "parser/evoparser.tab.c"
    break;

  case 74: /* case_list: WHEN expr THEN expr  */
#line 400 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2397 "parser/evoparser.tab.c"
    break;

  case 75: /* case_list: case_list WHEN expr THEN expr  */
#line 401 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2403 "parser/evoparser.tab.c"
    break;

  case 76: /* expr: expr LIKE expr  */
#line 404 "parser/evoparser.y"
                                                                                { emit("LIKE"); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2409 "parser/evoparser.tab.c"
    break;

  case 77: /* expr: expr NOT LIKE expr  */
#line 405 "parser/evoparser.y"
                                                                                { emit("LIKE"); emit("NOT"); (yyval.exprval) = (yyvsp[-3].exprval); }
#line 2415 "parser/evoparser.tab.c"
    break;

  case 78: /* expr: expr REGEXP expr  */
#line 408 "parser/evoparser.y"
                                                                                { emit("REGEXP"); (yyval.exprval) = (yyvsp[-2].exprval); }
#line 2421 "parser/evoparser.tab.c"
    break;

  case 79: /* expr: expr NOT REGEXP expr  */
#line 409 "parser/evoparser.y"
                                                                                { emit("REGEXP"); emit("NOT"); (yyval.exprval) = (yyvsp[-3].exprval); }
#line 2427 "parser/evoparser.tab.c"
    break;

  case 80: /* expr: CURRENT_TIMESTAMP  */
#line 412 "parser/evoparser.y"
                                                                                { emit("NOW"); (yyval.exprval) = expr_make_column("CURRENT_TIMESTAMP"); }
#line 2433 "parser/evoparser.tab.c"
    break;

  case 81: /* expr: CURRENT_DATE  */
#line 413 "parser/evoparser.y"
                                                                                { emit("NOW"); (yyval.exprval) = expr_make_column("CURRENT_DATE"); }
#line 2439 "parser/evoparser.tab.c"
    break;

  case 82: /* expr: CURRENT_TIME  */
#line 414 "parser/evoparser.y"
                                                                                { emit("NOW"); (yyval.exprval) = expr_make_column("CURRENT_TIME"); }
#line 2445 "parser/evoparser.tab.c"
    break;

  case 83: /* stmt: select_stmt  */
#line 419 "parser/evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[0].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    }
#line 2457 "parser/evoparser.tab.c"
    break;

  case 84: /* select_stmt: SELECT select_opts select_expr_list  */
#line 428 "parser/evoparser.y"
                                                                                { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2463 "parser/evoparser.tab.c"
    break;

  case 85: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 433 "parser/evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval));
        if ((yyvsp[-8].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    }
#line 2475 "parser/evoparser.tab.c"
    break;

  case 87: /* opt_where: WHERE expr  */
#line 443 "parser/evoparser.y"
                                                                                { emit("WHERE"); }
#line 2481 "parser/evoparser.tab.c"
    break;

  case 89: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 445 "parser/evoparser.y"
                                                                                { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2487 "parser/evoparser.tab.c"
    break;

  case 90: /* groupby_list: expr opt_asc_desc  */
#line 448 "parser/evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2493 "parser/evoparser.tab.c"
    break;

  case 91: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 449 "parser/evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2499 "parser/evoparser.tab.c"
    break;

  case 92: /* opt_asc_desc: %empty  */
#line 452 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2505 "parser/evoparser.tab.c"
    break;

  case 93: /* opt_asc_desc: ASC  */
#line 453 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2511 "parser/evoparser.tab.c"
    break;

  case 94: /* opt_asc_desc: DESC  */
#line 454 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2517 "parser/evoparser.tab.c"
    break;

  case 95: /* opt_with_rollup: %empty  */
#line 457 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2523 "parser/evoparser.tab.c"
    break;

  case 96: /* opt_with_rollup: WITH ROLLUP  */
#line 458 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2529 "parser/evoparser.tab.c"
    break;

  case 98: /* opt_having: HAVING expr  */
#line 462 "parser/evoparser.y"
                                                                                { emit("HAVING"); }
#line 2535 "parser/evoparser.tab.c"
    break;

  case 100: /* opt_orderby: ORDER BY NAME opt_asc_desc  */
#line 467 "parser/evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[-1].strval), (yyvsp[0].intval));
        GetOrderByColumn((yyvsp[-1].strval));
        SetOrderByDirection((yyvsp[0].intval));
        free((yyvsp[-1].strval));
    }
#line 2546 "parser/evoparser.tab.c"
    break;

  case 102: /* opt_limit: LIMIT expr  */
#line 475 "parser/evoparser.y"
                                                                                { emit("LIMIT 1"); }
#line 2552 "parser/evoparser.tab.c"
    break;

  case 103: /* opt_limit: LIMIT expr ',' expr  */
#line 476 "parser/evoparser.y"
                                                                                { emit("LIMIT 2"); }
#line 2558 "parser/evoparser.tab.c"
    break;

  case 105: /* opt_into_list: INTO column_list  */
#line 480 "parser/evoparser.y"
                                                                                { emit("INTO %d", (yyvsp[0].intval)); }
#line 2564 "parser/evoparser.tab.c"
    break;

  case 106: /* column_list: NAME  */
#line 483 "parser/evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2570 "parser/evoparser.tab.c"
    break;

  case 107: /* column_list: column_list ',' NAME  */
#line 484 "parser/evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2576 "parser/evoparser.tab.c"
    break;

  case 108: /* select_opts: %empty  */
#line 487 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2582 "parser/evoparser.tab.c"
    break;

  case 109: /* select_opts: select_opts ALL  */
#line 488 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2588 "parser/evoparser.tab.c"
    break;

  case 110: /* select_opts: select_opts DISTINCT  */
#line 489 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2594 "parser/evoparser.tab.c"
    break;

  case 111: /* select_opts: select_opts DISTINCTROW  */
#line 490 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2600 "parser/evoparser.tab.c"
    break;

  case 112: /* select_opts: select_opts HIGH_PRIORITY  */
#line 491 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2606 "parser/evoparser.tab.c"
    break;

  case 113: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 492 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2612 "parser/evoparser.tab.c"
    break;

  case 114: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 493 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2618 "parser/evoparser.tab.c"
    break;

  case 115: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 494 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2624 "parser/evoparser.tab.c"
    break;

  case 116: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 495 "parser/evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[-1].intval) | 0200; }
#line 2630 "parser/evoparser.tab.c"
    break;

  case 117: /* select_expr_list: select_expr  */
#line 498 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2636 "parser/evoparser.tab.c"
    break;

  case 118: /* select_expr_list: select_expr_list ',' select_expr  */
#line 499 "parser/evoparser.y"
                                                                                {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2642 "parser/evoparser.tab.c"
    break;

  case 119: /* select_expr_list: '*'  */
#line 501 "parser/evoparser.y"
    {
        emit("SELECTALL");
        expr_store_select(expr_make_star(), NULL);
        (yyval.intval) = 3;
    }
#line 2652 "parser/evoparser.tab.c"
    break;

  case 120: /* select_expr: expr opt_as_alias  */
#line 509 "parser/evoparser.y"
    {
        expr_store_select((yyvsp[-1].exprval), g_currentAlias[0] ? g_currentAlias : NULL);
        g_currentAlias[0] = '\0';
    }
#line 2661 "parser/evoparser.tab.c"
    break;

  case 121: /* opt_as_alias: AS NAME  */
#line 514 "parser/evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); strncpy(g_currentAlias, (yyvsp[0].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[0].strval)); }
#line 2667 "parser/evoparser.tab.c"
    break;

  case 122: /* opt_as_alias: NAME  */
#line 515 "parser/evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); strncpy(g_currentAlias, (yyvsp[0].strval), sizeof(g_currentAlias)-1); g_currentAlias[sizeof(g_currentAlias)-1] = '\0'; free((yyvsp[0].strval)); }
#line 2673 "parser/evoparser.tab.c"
    break;

  case 123: /* opt_as_alias: %empty  */
#line 516 "parser/evoparser.y"
                                                                                { g_currentAlias[0] = '\0'; }
#line 2679 "parser/evoparser.tab.c"
    break;

  case 124: /* table_references: table_reference  */
#line 519 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2685 "parser/evoparser.tab.c"
    break;

  case 125: /* table_references: table_references ',' table_reference  */
#line 520 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2691 "parser/evoparser.tab.c"
    break;

  case 128: /* table_factor: NAME opt_as_alias index_hint  */
#line 529 "parser/evoparser.y"
    {
        emit("TABLE %s", (yyvsp[-2].strval));
        GetSelTableName((yyvsp[-2].strval));
        free((yyvsp[-2].strval));
    }
#line 2701 "parser/evoparser.tab.c"
    break;

  case 129: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 534 "parser/evoparser.y"
                                                                                { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2707 "parser/evoparser.tab.c"
    break;

  case 130: /* table_factor: table_subquery opt_as NAME  */
#line 535 "parser/evoparser.y"
                                                                                { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2713 "parser/evoparser.tab.c"
    break;

  case 131: /* table_factor: '(' table_references ')'  */
#line 536 "parser/evoparser.y"
                                                                                { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2719 "parser/evoparser.tab.c"
    break;

  case 134: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 545 "parser/evoparser.y"
                                                                                { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2725 "parser/evoparser.tab.c"
    break;

  case 135: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 547 "parser/evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2731 "parser/evoparser.tab.c"
    break;

  case 136: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 549 "parser/evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2737 "parser/evoparser.tab.c"
    break;

  case 137: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 551 "parser/evoparser.y"
                                                                                { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2743 "parser/evoparser.tab.c"
    break;

  case 138: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 553 "parser/evoparser.y"
                                                                                { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2749 "parser/evoparser.tab.c"
    break;

  case 139: /* opt_inner_cross: %empty  */
#line 556 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2755 "parser/evoparser.tab.c"
    break;

  case 140: /* opt_inner_cross: INNER  */
#line 557 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2761 "parser/evoparser.tab.c"
    break;

  case 141: /* opt_inner_cross: CROSS  */
#line 558 "parser/evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2767 "parser/evoparser.tab.c"
    break;

  case 142: /* opt_outer: %empty  */
#line 561 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2773 "parser/evoparser.tab.c"
    break;

  case 143: /* opt_outer: OUTER  */
#line 562 "parser/evoparser.y"
                                                                                {(yyval.intval) = 4; }
#line 2779 "parser/evoparser.tab.c"
    break;

  case 144: /* left_or_right: LEFT  */
#line 565 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2785 "parser/evoparser.tab.c"
    break;

  case 145: /* left_or_right: RIGHT  */
#line 566 "parser/evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2791 "parser/evoparser.tab.c"
    break;

  case 146: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 569 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2797 "parser/evoparser.tab.c"
    break;

  case 147: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 570 "parser/evoparser.y"
                                                                                { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2803 "parser/evoparser.tab.c"
    break;

  case 148: /* opt_left_or_right_outer: %empty  */
#line 571 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2809 "parser/evoparser.tab.c"
    break;

  case 151: /* join_condition: ON expr  */
#line 578 "parser/evoparser.y"
                                                                                { emit("ONEXPR"); }
#line 2815 "parser/evoparser.tab.c"
    break;

  case 152: /* join_condition: USING '(' column_list ')'  */
#line 579 "parser/evoparser.y"
                                                                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 2821 "parser/evoparser.tab.c"
    break;

  case 153: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 584 "parser/evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 2827 "parser/evoparser.tab.c"
    break;

  case 154: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 586 "parser/evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 2833 "parser/evoparser.tab.c"
    break;

  case 155: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 588 "parser/evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 2839 "parser/evoparser.tab.c"
    break;

  case 157: /* opt_for_join: FOR JOIN  */
#line 592 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2845 "parser/evoparser.tab.c"
    break;

  case 158: /* opt_for_join: %empty  */
#line 593 "parser/evoparser.y"
            { (yyval.intval) = 0; }
#line 2851 "parser/evoparser.tab.c"
    break;

  case 159: /* index_list: NAME  */
#line 596 "parser/evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2857 "parser/evoparser.tab.c"
    break;

  case 160: /* index_list: index_list ',' NAME  */
#line 597 "parser/evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2863 "parser/evoparser.tab.c"
    break;

  case 161: /* table_subquery: '(' select_stmt ')'  */
#line 600 "parser/evoparser.y"
                                                                                { emit("SUBQUERY"); }
#line 2869 "parser/evoparser.tab.c"
    break;

  case 162: /* stmt: delete_stmt  */
#line 605 "parser/evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    }
#line 2878 "parser/evoparser.tab.c"
    break;

  case 163: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 613 "parser/evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval));
        GetDelTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 2888 "parser/evoparser.tab.c"
    break;

  case 164: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 620 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2894 "parser/evoparser.tab.c"
    break;

  case 165: /* delete_opts: delete_opts QUICK  */
#line 621 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2900 "parser/evoparser.tab.c"
    break;

  case 166: /* delete_opts: delete_opts IGNORE  */
#line 622 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2906 "parser/evoparser.tab.c"
    break;

  case 167: /* delete_opts: %empty  */
#line 623 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2912 "parser/evoparser.tab.c"
    break;

  case 168: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 627 "parser/evoparser.y"
                                                                                { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2918 "parser/evoparser.tab.c"
    break;

  case 169: /* delete_list: NAME opt_dot_star  */
#line 630 "parser/evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2924 "parser/evoparser.tab.c"
    break;

  case 170: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 631 "parser/evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2930 "parser/evoparser.tab.c"
    break;

  case 173: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 636 "parser/evoparser.y"
                                                                                        { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2936 "parser/evoparser.tab.c"
    break;

  case 174: /* stmt: drop_table_stmt  */
#line 641 "parser/evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    }
#line 2945 "parser/evoparser.tab.c"
    break;

  case 175: /* drop_table_stmt: DROP TABLE NAME  */
#line 648 "parser/evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[0].strval));
        GetDropTableName((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 2955 "parser/evoparser.tab.c"
    break;

  case 176: /* stmt: truncate_table_stmt  */
#line 657 "parser/evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    }
#line 2964 "parser/evoparser.tab.c"
    break;

  case 177: /* truncate_table_stmt: TRUNCATE TABLE NAME  */
#line 664 "parser/evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[0].strval));
        GetDropTableName((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 2974 "parser/evoparser.tab.c"
    break;

  case 178: /* stmt: insert_stmt  */
#line 672 "parser/evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    }
#line 2983 "parser/evoparser.tab.c"
    break;

  case 179: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 679 "parser/evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval));
        GetInsertionTableName((yyvsp[-4].strval));
        free((yyvsp[-4].strval));
    }
#line 2993 "parser/evoparser.tab.c"
    break;

  case 181: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 687 "parser/evoparser.y"
                                          { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2999 "parser/evoparser.tab.c"
    break;

  case 182: /* insert_opts: %empty  */
#line 690 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3005 "parser/evoparser.tab.c"
    break;

  case 183: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 691 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3011 "parser/evoparser.tab.c"
    break;

  case 184: /* insert_opts: insert_opts DELAYED  */
#line 692 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 3017 "parser/evoparser.tab.c"
    break;

  case 185: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 693 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 3023 "parser/evoparser.tab.c"
    break;

  case 186: /* insert_opts: insert_opts IGNORE  */
#line 694 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3029 "parser/evoparser.tab.c"
    break;

  case 190: /* opt_col_names: '(' column_list ')'  */
#line 701 "parser/evoparser.y"
                                                                                { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 3035 "parser/evoparser.tab.c"
    break;

  case 191: /* insert_vals_list: '(' insert_vals ')'  */
#line 704 "parser/evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 3041 "parser/evoparser.tab.c"
    break;

  case 192: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 705 "parser/evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3047 "parser/evoparser.tab.c"
    break;

  case 193: /* insert_vals: expr  */
#line 708 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3053 "parser/evoparser.tab.c"
    break;

  case 194: /* insert_vals: DEFAULT  */
#line 709 "parser/evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = 1; }
#line 3059 "parser/evoparser.tab.c"
    break;

  case 195: /* insert_vals: insert_vals ',' expr  */
#line 710 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3065 "parser/evoparser.tab.c"
    break;

  case 196: /* insert_vals: insert_vals ',' DEFAULT  */
#line 711 "parser/evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3071 "parser/evoparser.tab.c"
    break;

  case 197: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 715 "parser/evoparser.y"
                                                                                { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3077 "parser/evoparser.tab.c"
    break;

  case 198: /* insert_asgn_list: NAME COMPARISON expr  */
#line 718 "parser/evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3083 "parser/evoparser.tab.c"
    break;

  case 199: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 719 "parser/evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3089 "parser/evoparser.tab.c"
    break;

  case 200: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 720 "parser/evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3095 "parser/evoparser.tab.c"
    break;

  case 201: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 721 "parser/evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3101 "parser/evoparser.tab.c"
    break;

  case 202: /* stmt: replace_stmt  */
#line 727 "parser/evoparser.y"
                                                                                { emit("STMT"); }
#line 3107 "parser/evoparser.tab.c"
    break;

  case 203: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 733 "parser/evoparser.y"
                                                                                { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3113 "parser/evoparser.tab.c"
    break;

  case 204: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 738 "parser/evoparser.y"
                                                                                { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3119 "parser/evoparser.tab.c"
    break;

  case 205: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 743 "parser/evoparser.y"
                                                                                { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3125 "parser/evoparser.tab.c"
    break;

  case 206: /* stmt: update_stmt  */
#line 748 "parser/evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    }
#line 3134 "parser/evoparser.tab.c"
    break;

  case 207: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 755 "parser/evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval));
    }
#line 3142 "parser/evoparser.tab.c"
    break;

  case 208: /* update_opts: %empty  */
#line 760 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3148 "parser/evoparser.tab.c"
    break;

  case 209: /* update_opts: insert_opts LOW_PRIORITY  */
#line 761 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3154 "parser/evoparser.tab.c"
    break;

  case 210: /* update_opts: insert_opts IGNORE  */
#line 762 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3160 "parser/evoparser.tab.c"
    break;

  case 211: /* update_asgn_list: NAME COMPARISON expr  */
#line 767 "parser/evoparser.y"
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
#line 3175 "parser/evoparser.tab.c"
    break;

  case 212: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 778 "parser/evoparser.y"
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
#line 3190 "parser/evoparser.tab.c"
    break;

  case 213: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 789 "parser/evoparser.y"
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
#line 3205 "parser/evoparser.tab.c"
    break;

  case 214: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 800 "parser/evoparser.y"
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
#line 3220 "parser/evoparser.tab.c"
    break;

  case 215: /* stmt: create_database_stmt  */
#line 813 "parser/evoparser.y"
                                                                                { emit("STMT"); }
#line 3226 "parser/evoparser.tab.c"
    break;

  case 216: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 817 "parser/evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3232 "parser/evoparser.tab.c"
    break;

  case 217: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 818 "parser/evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3238 "parser/evoparser.tab.c"
    break;

  case 218: /* opt_if_not_exists: %empty  */
#line 821 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3244 "parser/evoparser.tab.c"
    break;

  case 219: /* opt_if_not_exists: IF EXISTS  */
#line 822 "parser/evoparser.y"
                                                                                { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3250 "parser/evoparser.tab.c"
    break;

  case 220: /* stmt: create_table_stmt  */
#line 827 "parser/evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    }
#line 3259 "parser/evoparser.tab.c"
    break;

  case 221: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 835 "parser/evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval));
        GetTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 3269 "parser/evoparser.tab.c"
    break;

  case 222: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 843 "parser/evoparser.y"
                                                                                { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval)); free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3275 "parser/evoparser.tab.c"
    break;

  case 223: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 848 "parser/evoparser.y"
                                                                                { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3281 "parser/evoparser.tab.c"
    break;

  case 224: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 852 "parser/evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3287 "parser/evoparser.tab.c"
    break;

  case 225: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 857 "parser/evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval)); free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3293 "parser/evoparser.tab.c"
    break;

  case 226: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 861 "parser/evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval)); free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3299 "parser/evoparser.tab.c"
    break;

  case 227: /* opt_temporary: %empty  */
#line 864 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3305 "parser/evoparser.tab.c"
    break;

  case 228: /* opt_temporary: TEMPORARY  */
#line 865 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1;}
#line 3311 "parser/evoparser.tab.c"
    break;

  case 229: /* create_col_list: create_definition  */
#line 868 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3317 "parser/evoparser.tab.c"
    break;

  case 230: /* create_col_list: create_col_list ',' create_definition  */
#line 869 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3323 "parser/evoparser.tab.c"
    break;

  case 231: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 872 "parser/evoparser.y"
                                                                                { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3329 "parser/evoparser.tab.c"
    break;

  case 232: /* create_definition: KEY '(' column_list ')'  */
#line 873 "parser/evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3335 "parser/evoparser.tab.c"
    break;

  case 233: /* create_definition: INDEX '(' column_list ')'  */
#line 874 "parser/evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3341 "parser/evoparser.tab.c"
    break;

  case 234: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 875 "parser/evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3347 "parser/evoparser.tab.c"
    break;

  case 235: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 876 "parser/evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3353 "parser/evoparser.tab.c"
    break;

  case 236: /* $@1: %empty  */
#line 879 "parser/evoparser.y"
                                                                                { emit("STARTCOL"); }
#line 3359 "parser/evoparser.tab.c"
    break;

  case 237: /* create_definition: $@1 NAME data_type column_atts  */
#line 881 "parser/evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval));
        GetColumnNames((yyvsp[-2].strval));
        GetColumnSize((yyvsp[-1].intval));
        free((yyvsp[-2].strval));
    }
#line 3370 "parser/evoparser.tab.c"
    break;

  case 238: /* column_atts: %empty  */
#line 889 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3376 "parser/evoparser.tab.c"
    break;

  case 239: /* column_atts: column_atts NOT NULLX  */
#line 890 "parser/evoparser.y"
                                                                                { emit("ATTR NOTNULL"); SetColumnNotNull(); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3382 "parser/evoparser.tab.c"
    break;

  case 241: /* column_atts: column_atts DEFAULT STRING  */
#line 892 "parser/evoparser.y"
                                                                                { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3388 "parser/evoparser.tab.c"
    break;

  case 242: /* column_atts: column_atts DEFAULT INTNUM  */
#line 893 "parser/evoparser.y"
                                                                                { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3394 "parser/evoparser.tab.c"
    break;

  case 243: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 894 "parser/evoparser.y"
                                                                                { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3400 "parser/evoparser.tab.c"
    break;

  case 244: /* column_atts: column_atts DEFAULT BOOL  */
#line 895 "parser/evoparser.y"
                                                                                { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3406 "parser/evoparser.tab.c"
    break;

  case 245: /* column_atts: column_atts AUTO_INCREMENT  */
#line 896 "parser/evoparser.y"
                                                                                { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3412 "parser/evoparser.tab.c"
    break;

  case 246: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 897 "parser/evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3418 "parser/evoparser.tab.c"
    break;

  case 247: /* column_atts: column_atts UNIQUE KEY  */
#line 898 "parser/evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3424 "parser/evoparser.tab.c"
    break;

  case 248: /* column_atts: column_atts PRIMARY KEY  */
#line 899 "parser/evoparser.y"
                                                                                { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3430 "parser/evoparser.tab.c"
    break;

  case 249: /* column_atts: column_atts KEY  */
#line 900 "parser/evoparser.y"
                                                                                { emit("ATTR PRIKEY"); SetColumnPrimaryKey(); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3436 "parser/evoparser.tab.c"
    break;

  case 250: /* column_atts: column_atts COMMENT STRING  */
#line 901 "parser/evoparser.y"
                                                                                { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3442 "parser/evoparser.tab.c"
    break;

  case 251: /* opt_length: %empty  */
#line 904 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3448 "parser/evoparser.tab.c"
    break;

  case 252: /* opt_length: '(' INTNUM ')'  */
#line 905 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval); }
#line 3454 "parser/evoparser.tab.c"
    break;

  case 253: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 906 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3460 "parser/evoparser.tab.c"
    break;

  case 254: /* opt_binary: %empty  */
#line 909 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3466 "parser/evoparser.tab.c"
    break;

  case 255: /* opt_binary: BINARY  */
#line 910 "parser/evoparser.y"
                                                                                { (yyval.intval) = 4000; }
#line 3472 "parser/evoparser.tab.c"
    break;

  case 256: /* opt_uz: %empty  */
#line 913 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3478 "parser/evoparser.tab.c"
    break;

  case 257: /* opt_uz: opt_uz UNSIGNED  */
#line 914 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3484 "parser/evoparser.tab.c"
    break;

  case 258: /* opt_uz: opt_uz ZEROFILL  */
#line 915 "parser/evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3490 "parser/evoparser.tab.c"
    break;

  case 260: /* opt_csc: opt_csc CHAR SET STRING  */
#line 919 "parser/evoparser.y"
                                                                                { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3496 "parser/evoparser.tab.c"
    break;

  case 261: /* opt_csc: opt_csc COLLATE STRING  */
#line 920 "parser/evoparser.y"
                                                                                { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3502 "parser/evoparser.tab.c"
    break;

  case 262: /* data_type: BIT opt_length  */
#line 924 "parser/evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3508 "parser/evoparser.tab.c"
    break;

  case 263: /* data_type: TINYINT opt_length opt_uz  */
#line 925 "parser/evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3514 "parser/evoparser.tab.c"
    break;

  case 264: /* data_type: SMALLINT opt_length opt_uz  */
#line 926 "parser/evoparser.y"
                                                                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3520 "parser/evoparser.tab.c"
    break;

  case 265: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 927 "parser/evoparser.y"
                                                                                { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3526 "parser/evoparser.tab.c"
    break;

  case 266: /* data_type: INT opt_length opt_uz  */
#line 928 "parser/evoparser.y"
                                                                                { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3532 "parser/evoparser.tab.c"
    break;

  case 267: /* data_type: INTEGER opt_length opt_uz  */
#line 929 "parser/evoparser.y"
                                                                                { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3538 "parser/evoparser.tab.c"
    break;

  case 268: /* data_type: BIGINT opt_length opt_uz  */
#line 930 "parser/evoparser.y"
                                                                                { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3544 "parser/evoparser.tab.c"
    break;

  case 269: /* data_type: REAL opt_length opt_uz  */
#line 931 "parser/evoparser.y"
                                                                                { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3550 "parser/evoparser.tab.c"
    break;

  case 270: /* data_type: DOUBLE opt_length opt_uz  */
#line 932 "parser/evoparser.y"
                                                                                { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3556 "parser/evoparser.tab.c"
    break;

  case 271: /* data_type: FLOAT opt_length opt_uz  */
#line 933 "parser/evoparser.y"
                                                                                { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3562 "parser/evoparser.tab.c"
    break;

  case 272: /* data_type: DECIMAL opt_length opt_uz  */
#line 934 "parser/evoparser.y"
                                                                                { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3568 "parser/evoparser.tab.c"
    break;

  case 273: /* data_type: DATE  */
#line 935 "parser/evoparser.y"
                                                                                { (yyval.intval) = 100001; }
#line 3574 "parser/evoparser.tab.c"
    break;

  case 274: /* data_type: TIME  */
#line 936 "parser/evoparser.y"
                                                                                { (yyval.intval) = 100002; }
#line 3580 "parser/evoparser.tab.c"
    break;

  case 275: /* data_type: TIMESTAMP  */
#line 937 "parser/evoparser.y"
                                                                                { (yyval.intval) = 100003; }
#line 3586 "parser/evoparser.tab.c"
    break;

  case 276: /* data_type: DATETIME  */
#line 938 "parser/evoparser.y"
                                                                                { (yyval.intval) = 100004; }
#line 3592 "parser/evoparser.tab.c"
    break;

  case 277: /* data_type: YEAR  */
#line 939 "parser/evoparser.y"
                                                                                { (yyval.intval) = 100005; }
#line 3598 "parser/evoparser.tab.c"
    break;

  case 278: /* data_type: CHAR opt_length opt_csc  */
#line 940 "parser/evoparser.y"
                                                                                { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3604 "parser/evoparser.tab.c"
    break;

  case 279: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 941 "parser/evoparser.y"
                                                                                { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3610 "parser/evoparser.tab.c"
    break;

  case 280: /* data_type: BINARY opt_length  */
#line 942 "parser/evoparser.y"
                                                                                { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3616 "parser/evoparser.tab.c"
    break;

  case 281: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 943 "parser/evoparser.y"
                                                                                { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3622 "parser/evoparser.tab.c"
    break;

  case 282: /* data_type: TINYBLOB  */
#line 944 "parser/evoparser.y"
                                                                                { (yyval.intval) = 160001; }
#line 3628 "parser/evoparser.tab.c"
    break;

  case 283: /* data_type: BLOB  */
#line 945 "parser/evoparser.y"
                                                                                { (yyval.intval) = 160002; }
#line 3634 "parser/evoparser.tab.c"
    break;

  case 284: /* data_type: MEDIUMBLOB  */
#line 946 "parser/evoparser.y"
                                                                                { (yyval.intval) = 160003; }
#line 3640 "parser/evoparser.tab.c"
    break;

  case 285: /* data_type: LONGBLOB  */
#line 947 "parser/evoparser.y"
                                                                                { (yyval.intval) = 160004; }
#line 3646 "parser/evoparser.tab.c"
    break;

  case 286: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 948 "parser/evoparser.y"
                                                                                { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3652 "parser/evoparser.tab.c"
    break;

  case 287: /* data_type: TEXT opt_binary opt_csc  */
#line 949 "parser/evoparser.y"
                                                                                { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3658 "parser/evoparser.tab.c"
    break;

  case 288: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 950 "parser/evoparser.y"
                                                                                { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3664 "parser/evoparser.tab.c"
    break;

  case 289: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 951 "parser/evoparser.y"
                                                                                { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3670 "parser/evoparser.tab.c"
    break;

  case 290: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 952 "parser/evoparser.y"
                                                                                { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3676 "parser/evoparser.tab.c"
    break;

  case 291: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 953 "parser/evoparser.y"
                                                                                { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3682 "parser/evoparser.tab.c"
    break;

  case 292: /* data_type: BOOLEAN  */
#line 954 "parser/evoparser.y"
                                                                                 { (yyval.intval) = 220001; }
#line 3688 "parser/evoparser.tab.c"
    break;

  case 293: /* enum_list: STRING  */
#line 957 "parser/evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3694 "parser/evoparser.tab.c"
    break;

  case 294: /* enum_list: enum_list ',' STRING  */
#line 958 "parser/evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3700 "parser/evoparser.tab.c"
    break;

  case 295: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 962 "parser/evoparser.y"
                                                                                { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3706 "parser/evoparser.tab.c"
    break;

  case 296: /* opt_ignore_replace: %empty  */
#line 965 "parser/evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3712 "parser/evoparser.tab.c"
    break;

  case 297: /* opt_ignore_replace: IGNORE  */
#line 966 "parser/evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3718 "parser/evoparser.tab.c"
    break;

  case 298: /* opt_ignore_replace: REPLACE  */
#line 967 "parser/evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 3724 "parser/evoparser.tab.c"
    break;

  case 299: /* stmt: set_stmt  */
#line 971 "parser/evoparser.y"
                                                                                { emit("STMT"); }
#line 3730 "parser/evoparser.tab.c"
    break;

  case 303: /* set_expr: USERVAR COMPARISON expr  */
#line 977 "parser/evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; } emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3736 "parser/evoparser.tab.c"
    break;

  case 304: /* set_expr: USERVAR ASSIGN expr  */
#line 978 "parser/evoparser.y"
                                                                                { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3742 "parser/evoparser.tab.c"
    break;


#line 3746 "parser/evoparser.tab.c"

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

#line 981 "parser/evoparser.y"

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
