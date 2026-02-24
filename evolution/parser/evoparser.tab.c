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
  YYSYMBOL_TRUNCATE = 135,                 /* TRUNCATE  */
  YYSYMBOL_TINYBLOB = 136,                 /* TINYBLOB  */
  YYSYMBOL_TIME = 137,                     /* TIME  */
  YYSYMBOL_UPDATE = 138,                   /* UPDATE  */
  YYSYMBOL_UNSIGNED = 139,                 /* UNSIGNED  */
  YYSYMBOL_UNIQUE = 140,                   /* UNIQUE  */
  YYSYMBOL_USING = 141,                    /* USING  */
  YYSYMBOL_USE = 142,                      /* USE  */
  YYSYMBOL_VARCHAR = 143,                  /* VARCHAR  */
  YYSYMBOL_VALUES = 144,                   /* VALUES  */
  YYSYMBOL_VARBINARY = 145,                /* VARBINARY  */
  YYSYMBOL_WHERE = 146,                    /* WHERE  */
  YYSYMBOL_WHEN = 147,                     /* WHEN  */
  YYSYMBOL_WITH = 148,                     /* WITH  */
  YYSYMBOL_YEAR = 149,                     /* YEAR  */
  YYSYMBOL_YEAR_MONTH = 150,               /* YEAR_MONTH  */
  YYSYMBOL_ZEROFILL = 151,                 /* ZEROFILL  */
  YYSYMBOL_EXISTS = 152,                   /* EXISTS  */
  YYSYMBOL_FSUBSTRING = 153,               /* FSUBSTRING  */
  YYSYMBOL_FTRIM = 154,                    /* FTRIM  */
  YYSYMBOL_FDATE_ADD = 155,                /* FDATE_ADD  */
  YYSYMBOL_FDATE_SUB = 156,                /* FDATE_SUB  */
  YYSYMBOL_FCOUNT = 157,                   /* FCOUNT  */
  YYSYMBOL_158_ = 158,                     /* ';'  */
  YYSYMBOL_159_ = 159,                     /* '.'  */
  YYSYMBOL_160_ = 160,                     /* '('  */
  YYSYMBOL_161_ = 161,                     /* ')'  */
  YYSYMBOL_162_ = 162,                     /* ','  */
  YYSYMBOL_YYACCEPT = 163,                 /* $accept  */
  YYSYMBOL_stmt_list = 164,                /* stmt_list  */
  YYSYMBOL_expr = 165,                     /* expr  */
  YYSYMBOL_val_list = 166,                 /* val_list  */
  YYSYMBOL_opt_val_list = 167,             /* opt_val_list  */
  YYSYMBOL_trim_ltb = 168,                 /* trim_ltb  */
  YYSYMBOL_interval_exp = 169,             /* interval_exp  */
  YYSYMBOL_case_list = 170,                /* case_list  */
  YYSYMBOL_stmt = 171,                     /* stmt  */
  YYSYMBOL_select_stmt = 172,              /* select_stmt  */
  YYSYMBOL_opt_where = 173,                /* opt_where  */
  YYSYMBOL_opt_groupby = 174,              /* opt_groupby  */
  YYSYMBOL_groupby_list = 175,             /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 176,             /* opt_asc_desc  */
  YYSYMBOL_opt_with_rollup = 177,          /* opt_with_rollup  */
  YYSYMBOL_opt_having = 178,               /* opt_having  */
  YYSYMBOL_opt_orderby = 179,              /* opt_orderby  */
  YYSYMBOL_opt_limit = 180,                /* opt_limit  */
  YYSYMBOL_opt_into_list = 181,            /* opt_into_list  */
  YYSYMBOL_column_list = 182,              /* column_list  */
  YYSYMBOL_select_opts = 183,              /* select_opts  */
  YYSYMBOL_select_expr_list = 184,         /* select_expr_list  */
  YYSYMBOL_select_expr = 185,              /* select_expr  */
  YYSYMBOL_opt_as_alias = 186,             /* opt_as_alias  */
  YYSYMBOL_table_references = 187,         /* table_references  */
  YYSYMBOL_table_reference = 188,          /* table_reference  */
  YYSYMBOL_table_factor = 189,             /* table_factor  */
  YYSYMBOL_opt_as = 190,                   /* opt_as  */
  YYSYMBOL_join_table = 191,               /* join_table  */
  YYSYMBOL_opt_inner_cross = 192,          /* opt_inner_cross  */
  YYSYMBOL_opt_outer = 193,                /* opt_outer  */
  YYSYMBOL_left_or_right = 194,            /* left_or_right  */
  YYSYMBOL_opt_left_or_right_outer = 195,  /* opt_left_or_right_outer  */
  YYSYMBOL_opt_join_condition = 196,       /* opt_join_condition  */
  YYSYMBOL_join_condition = 197,           /* join_condition  */
  YYSYMBOL_index_hint = 198,               /* index_hint  */
  YYSYMBOL_opt_for_join = 199,             /* opt_for_join  */
  YYSYMBOL_index_list = 200,               /* index_list  */
  YYSYMBOL_table_subquery = 201,           /* table_subquery  */
  YYSYMBOL_delete_stmt = 202,              /* delete_stmt  */
  YYSYMBOL_delete_opts = 203,              /* delete_opts  */
  YYSYMBOL_delete_list = 204,              /* delete_list  */
  YYSYMBOL_opt_dot_star = 205,             /* opt_dot_star  */
  YYSYMBOL_drop_table_stmt = 206,          /* drop_table_stmt  */
  YYSYMBOL_truncate_table_stmt = 207,      /* truncate_table_stmt  */
  YYSYMBOL_insert_stmt = 208,              /* insert_stmt  */
  YYSYMBOL_opt_ondupupdate = 209,          /* opt_ondupupdate  */
  YYSYMBOL_insert_opts = 210,              /* insert_opts  */
  YYSYMBOL_opt_into = 211,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 212,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 213,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 214,              /* insert_vals  */
  YYSYMBOL_insert_asgn_list = 215,         /* insert_asgn_list  */
  YYSYMBOL_replace_stmt = 216,             /* replace_stmt  */
  YYSYMBOL_update_stmt = 217,              /* update_stmt  */
  YYSYMBOL_update_opts = 218,              /* update_opts  */
  YYSYMBOL_update_asgn_list = 219,         /* update_asgn_list  */
  YYSYMBOL_create_database_stmt = 220,     /* create_database_stmt  */
  YYSYMBOL_opt_if_not_exists = 221,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 222,        /* create_table_stmt  */
  YYSYMBOL_opt_temporary = 223,            /* opt_temporary  */
  YYSYMBOL_create_col_list = 224,          /* create_col_list  */
  YYSYMBOL_create_definition = 225,        /* create_definition  */
  YYSYMBOL_226_1 = 226,                    /* $@1  */
  YYSYMBOL_column_atts = 227,              /* column_atts  */
  YYSYMBOL_opt_length = 228,               /* opt_length  */
  YYSYMBOL_opt_binary = 229,               /* opt_binary  */
  YYSYMBOL_opt_uz = 230,                   /* opt_uz  */
  YYSYMBOL_opt_csc = 231,                  /* opt_csc  */
  YYSYMBOL_data_type = 232,                /* data_type  */
  YYSYMBOL_enum_list = 233,                /* enum_list  */
  YYSYMBOL_create_select_statement = 234,  /* create_select_statement  */
  YYSYMBOL_opt_ignore_replace = 235,       /* opt_ignore_replace  */
  YYSYMBOL_set_stmt = 236,                 /* set_stmt  */
  YYSYMBOL_set_list = 237,                 /* set_list  */
  YYSYMBOL_set_expr = 238                  /* set_expr  */
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
#define YYLAST   1420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  302
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  624

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   403


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
     160,   161,    26,    24,   162,    25,   159,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   158,
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
     154,   155,   156,   157
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   239,   239,   240,   245,   251,   252,   253,   269,   276,
     283,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   307,   308,
     309,   310,   313,   314,   315,   316,   317,   320,   323,   324,
     327,   328,   331,   332,   333,   334,   335,   339,   343,   344,
     346,   347,   348,   349,   350,   353,   354,   355,   358,   359,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   373,
     374,   375,   376,   379,   380,   383,   384,   387,   388,   391,
     392,   393,   397,   407,   408,   421,   422,   423,   424,   427,
     428,   431,   432,   433,   436,   437,   440,   441,   444,   445,
     454,   454,   455,   458,   459,   462,   463,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   477,   478,   479,   486,
     487,   488,   489,   492,   493,   496,   497,   501,   507,   508,
     509,   512,   513,   517,   519,   521,   523,   525,   529,   530,
     531,   534,   535,   538,   539,   542,   543,   544,   547,   548,
     551,   552,   556,   558,   560,   562,   565,   566,   569,   570,
     573,   577,   585,   593,   594,   595,   596,   600,   603,   604,
     607,   607,   609,   613,   620,   629,   636,   644,   651,   659,
     660,   663,   664,   665,   666,   667,   670,   670,   673,   674,
     677,   678,   681,   682,   683,   684,   687,   691,   692,   693,
     694,   700,   703,   709,   714,   720,   726,   733,   734,   735,
     739,   750,   761,   772,   786,   790,   791,   794,   795,   799,
     806,   815,   819,   824,   828,   833,   837,   838,   841,   842,
     845,   846,   847,   848,   849,   852,   852,   862,   863,   864,
     865,   866,   867,   868,   869,   870,   871,   872,   873,   874,
     877,   878,   879,   882,   883,   886,   887,   888,   891,   892,
     893,   897,   898,   899,   900,   901,   902,   903,   904,   905,
     906,   907,   908,   909,   910,   911,   912,   913,   914,   915,
     916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
     926,   929,   930,   933,   937,   938,   939,   943,   946,   947,
     947,   949,   950
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

#define YYPACT_NINF (-465)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-222)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     127,     6,  -465,   -88,  -465,  -465,    61,  -465,   -50,    17,
     145,    14,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,   114,   114,  -465,    78,    49,   238,    -7,    -7,
     230,    84,  -465,   303,   245,   137,    18,  -465,   127,   102,
     269,   271,   114,   119,   291,  -465,  -465,  -465,   -35,  -465,
    -465,  -465,  -465,  -465,  -465,   316,   319,   612,   612,    61,
      72,  -465,  -465,  -465,  -465,   315,   612,   612,   612,  -465,
    -465,  -465,   252,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,   193,   196,   198,   201,   205,   212,  1313,   -19,
    -465,  -465,    19,    20,    27,    10,   -58,   434,  -465,  -465,
     348,  -465,  -465,  -465,  -465,   387,   369,  -465,   156,   -82,
      18,   395,   -72,    57,  1372,  1372,  -465,   413,   612,   612,
     946,   946,  -465,   612,  1026,   -18,   305,   612,   191,   612,
     612,   371,  -465,   612,   612,   612,   281,    21,   612,   612,
     248,   612,    11,   612,   612,   612,   612,   612,   612,   612,
     612,   612,   612,   440,  -465,    18,   612,   458,   126,   318,
     123,   461,    18,  -465,  -465,  -465,    40,  -465,    18,   372,
     396,  -465,   492,    32,  -465,   612,   397,    18,   -78,   119,
     502,   503,   364,   502,    80,  -465,   676,  -465,   349,  1372,
    1047,    -3,  -465,   612,   612,   353,   655,   354,  -465,  -465,
    -465,   356,   612,   760,   781,   357,   862,  1102,   733,   799,
     429,  -465,    34,  -465,  1390,  1390,   359,   612,   612,  1343,
     362,   370,   374,   305,  1003,  1121,   460,   306,   341,   341,
     501,   501,   501,   501,  -465,  -465,   -78,  -465,    38,   436,
     439,   441,  -465,  -465,  -465,   -11,   -73,   434,   396,   396,
     443,   427,    18,  -465,   444,  -465,  -465,  -465,   539,   204,
    -465,   348,  1372,   504,   442,   -78,  -465,  -465,   528,   -79,
    -465,   151,   389,   -79,   389,   447,   612,  -465,   612,  -465,
     612,  1228,  1075,  -465,   612,  -465,  -465,  1207,   457,   457,
    -465,  -465,   391,   392,  -465,  -465,   429,  1390,  1390,   612,
     305,   305,   305,   393,   476,   126,   480,   480,   480,   612,
     557,   559,   397,  -465,  -465,    18,   612,    42,    18,    15,
     140,   403,   404,   477,   165,  -465,   568,   305,   569,   612,
    -465,  -465,   445,   478,   572,  -465,  -465,   573,   495,   -63,
    -465,   -63,  -465,  -465,  1372,  1249,  -465,   612,   841,   612,
     612,   416,   417,  -465,  -465,   428,   435,   983,   446,   448,
     449,  -465,   547,   518,  -465,   511,   462,   463,   464,  1372,
     601,    -9,   442,  -465,  1372,   612,   465,  -465,  -465,    42,
     204,  -465,   466,   467,   503,   503,   471,    64,   204,  1067,
    -465,    28,   820,  -465,  1372,   494,   614,  -465,  -465,  1372,
     189,   481,  -465,  -465,  -465,  1372,   612,  -465,   474,   934,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,   612,   612,   397,
    -465,   637,   637,   637,   612,   612,   639,  -465,  1372,   503,
    -465,   202,   503,   503,   219,   221,   503,  -465,  -465,  -465,
     483,   483,   483,   483,   483,  -465,   483,  -465,   484,   483,
     483,   483,   603,  -465,   603,  -465,   483,   483,   483,   486,
     603,   483,   603,  -465,  -465,  -465,   496,   497,  -465,  -465,
    -465,  -465,  -465,   612,   502,   562,  -465,   587,   495,   883,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    1283,    41,  1372,   442,  -465,   232,   239,   241,  1372,  1372,
     634,   249,   113,   251,   253,  -465,  -465,   257,   650,  -465,
    -465,  -465,  -465,  -465,  -465,   656,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,   656,  -465,  -465,  -465,   654,
     657,   183,  1372,   532,  -465,  1372,  -465,  1372,   266,  -465,
    -465,   558,   612,  -465,   615,  -465,   705,  -465,  -465,   612,
    -465,  -465,  -465,  -465,  -465,   268,    76,   385,    76,    76,
    -465,   304,    76,    76,    76,   385,   385,    76,    76,    76,
     307,   385,    76,   385,   548,   549,   604,  -465,   708,   334,
    -465,  -465,   617,   -53,  -465,  -465,  1283,   503,  -465,  -465,
    1372,  -465,   717,  -465,  -465,   602,   722,  -465,   724,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
     503,  -465,   571,   574,   732,  -465,   385,  -465,   385,   385,
     310,  -465,  -465,  -465
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   226,   166,     0,   181,   181,     0,   107,     0,   181,
       0,     0,    82,   161,   173,   175,   177,   201,   205,   214,
     219,   297,   217,   217,   227,     0,     0,     0,   187,   187,
       0,   298,   299,     0,     0,     0,     0,     1,     2,     0,
       0,     0,   217,   170,     0,   165,   163,   164,     0,   174,
     183,   184,   185,   186,   182,     0,     0,     0,     0,     0,
       4,     7,     8,    10,     9,     6,     0,     0,     0,   118,
     108,    79,     0,    80,    81,   109,   110,   111,   113,   115,
     114,   112,     0,     0,     0,     0,     0,     0,   122,    83,
     116,   176,   185,   182,   122,     0,     0,   123,   125,   126,
     132,     3,   218,   215,   216,     0,     0,   168,    85,     0,
       0,     0,   188,   188,   302,   301,   300,     0,    40,     0,
      25,    26,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,   155,     0,
       0,     0,     0,   140,   139,   143,   147,   144,     0,     0,
     141,   131,     0,   294,   171,     0,    98,     0,    85,   170,
       0,     0,     0,     0,     0,     5,    38,    41,     0,    36,
       0,     0,    71,     0,     0,     0,    38,     0,    57,    55,
      56,     0,     0,     0,     0,     0,     0,    19,    20,    18,
       0,    34,     0,    32,    75,    77,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    21,    22,    24,    11,    12,
      13,    14,    15,    16,    23,   120,    85,   117,   122,     0,
       0,     0,   127,   160,   130,     0,    85,   124,   141,   141,
       0,   134,     0,   142,     0,   129,   295,   296,     0,   235,
     223,   132,    86,     0,   100,    85,   167,   169,     0,   179,
     105,     0,     0,   179,     0,   179,     0,    47,     0,    69,
       0,     0,     0,    46,     0,    50,    53,     0,     0,     0,
      48,    49,     0,     0,    35,    33,     0,    76,    78,     0,
       0,     0,     0,     0,    87,   155,   157,   157,   157,     0,
       0,     0,    98,   145,   146,     0,     0,   148,     0,   294,
       0,     0,     0,     0,     0,   228,     0,     0,     0,     0,
     162,   172,     0,     0,     0,   196,   189,     0,     0,   179,
     203,   179,   204,    39,    73,     0,    72,     0,     0,     0,
       0,     0,     0,    42,    44,     0,     0,    37,     0,     0,
       0,    28,     0,    96,   128,     0,     0,     0,     0,   210,
       0,     0,   100,   137,   135,     0,     0,   133,   149,     0,
     235,   225,     0,     0,     0,     0,     0,   294,   235,     0,
     293,    91,   101,   198,   197,     0,     0,   106,   193,   192,
       0,     0,   178,   202,    70,    74,     0,    51,     0,     0,
      58,    59,    43,    45,    31,    29,    30,     0,     0,    98,
     156,     0,     0,     0,     0,     0,     0,   206,   150,     0,
     136,     0,     0,     0,     0,     0,     0,   222,   229,   282,
     250,   250,   250,   250,   250,   275,   250,   272,     0,   250,
     250,   250,   253,   284,   253,   283,   250,   250,   250,     0,
     253,   250,   253,   274,   281,   273,     0,     0,   276,   237,
      92,    93,    99,     0,     0,     0,   190,     0,     0,     0,
      54,    60,    61,    62,    63,    67,    66,    68,    65,    64,
      91,    94,    97,   100,   158,     0,     0,     0,   211,   212,
       0,     0,   294,     0,     0,   232,   231,     0,     0,   279,
     255,   261,   258,   255,   255,     0,   255,   255,   255,   254,
     258,   258,   255,   255,   255,     0,   258,   255,   258,     0,
       0,   236,   102,   180,   200,   199,   195,   194,     0,    52,
      89,     0,     0,    88,   103,   154,     0,   153,   152,     0,
     151,   224,   233,   234,   230,     0,   267,   277,   269,   271,
     291,     0,   270,   266,   265,   288,   287,   264,   268,   263,
       0,   285,   262,   286,     0,     0,     0,   244,     0,     0,
     248,   239,     0,     0,   191,    95,    91,     0,    84,   159,
     213,   251,     0,   256,   257,     0,     0,   258,     0,   258,
     258,   280,   238,   249,   240,   241,   243,   242,   247,   246,
       0,    90,   104,     0,     0,   260,   289,   292,   290,   278,
       0,   252,   259,   245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -465,   699,   -33,  -123,  -465,  -465,   489,   627,  -465,   -89,
    -106,  -465,  -465,  -464,  -465,  -465,  -281,  -360,  -465,  -382,
    -465,  -465,   582,   -84,   -31,   697,  -160,   538,  -465,  -465,
     225,  -465,  -465,  -465,   522,   575,   169,    70,  -465,  -465,
    -465,   870,   736,  -465,  -465,  -465,   -52,    69,   894,   814,
     660,   450,  -182,  -465,  -465,  -465,  -465,  -465,   134,  -465,
    -465,   550,   541,  -465,  -465,   475,  -187,   207,  -240,  -465,
     410,  -312,  -465,  -465,  -465,   878
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    10,   186,   187,   188,   202,   351,   125,    11,    12,
     176,   363,   491,   472,   543,   419,   264,   330,   588,   271,
      33,    89,    90,   154,    96,    97,    98,   172,    99,   169,
     254,   170,   250,   377,   378,   242,   366,   495,   100,    13,
      26,    48,   107,    14,    15,    16,   335,    28,    55,   182,
     339,   400,   269,    17,    18,    36,   246,    19,    40,    20,
      25,   324,   325,   326,   531,   509,   520,   556,   557,   469,
     561,   260,   261,    21,    31,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,   273,   434,   435,   197,   201,   159,   381,   251,   309,
     158,   425,   427,    94,    60,    61,    62,    63,    64,    65,
    -207,    94,  -209,  -208,   114,   115,   540,   211,    66,    67,
     132,   372,   333,   120,   121,   122,    68,   195,   212,   124,
     294,   132,   110,   609,    27,   220,   221,   501,   333,    50,
     503,   504,    43,   180,   507,   192,   193,    71,   155,   177,
      72,    22,    73,    74,   160,   470,   153,   161,   175,    30,
     279,   280,   266,   175,    29,   437,    51,   153,    35,   178,
     111,    52,    34,   334,   162,    53,   189,   292,   181,   311,
     190,    54,   317,   471,   196,   275,   203,   204,   206,   401,
     207,   208,   209,   256,   162,   214,   215,   610,   219,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     256,   293,   611,    88,   236,    23,    44,   111,   213,   194,
     304,   222,   257,   544,   303,    24,     7,    45,   493,   248,
     312,   295,   262,   156,   194,    37,   265,    46,   310,   257,
     426,   375,   256,   343,   305,   373,   249,    41,   379,   331,
     281,   282,    47,    82,    83,    84,    85,    86,    87,   287,
      95,   223,    38,   355,     1,   380,   105,  -207,    95,  -209,
    -208,   257,   183,   376,   297,   298,   157,     2,     3,   541,
     551,   258,   259,    50,    60,    61,    62,    63,    64,    65,
     576,   256,   239,   542,    39,   612,     7,   356,    66,    67,
      42,   358,   359,   360,   240,   593,    68,   181,     4,   577,
      51,   340,  -220,   342,   274,    92,   408,   594,   620,   382,
     257,   117,   118,   578,   198,    93,   383,    71,   390,    57,
      72,    49,    73,    74,     5,   344,    59,   345,    91,   579,
      58,   348,     6,     7,   102,    60,    61,    62,    63,    64,
      65,   216,     8,   217,   218,     9,   357,   521,   241,    66,
      67,  -221,   103,   526,   104,   528,   369,    68,   106,   580,
     565,   566,   320,   374,   244,   162,   571,   402,   573,   403,
     581,   199,   533,   321,   108,   582,   392,  -170,    71,   394,
     322,    72,   175,    73,    74,   399,    60,    61,    62,    63,
      64,    65,   336,   337,   405,   106,   323,   409,  -170,   112,
      66,    67,   113,   583,   119,   200,   387,   388,    68,    69,
     146,   147,   148,   149,   150,   151,   152,    70,   604,   605,
     606,   607,   428,    82,    83,    84,    85,    86,    87,    71,
     476,   477,    72,   126,    73,    74,   127,   616,   128,   618,
     619,   129,    75,   502,   388,   130,    76,   148,   149,   150,
     151,   152,   131,   479,    60,    61,    62,    63,    64,    65,
     505,   337,   506,   337,   490,   492,    77,   171,    66,    67,
     173,   498,   499,   545,   546,   174,    68,   205,   179,   123,
     547,   546,   548,   546,    82,    83,    84,    85,    86,    87,
     550,   337,   552,   337,   553,   337,   185,    71,   554,   337,
      72,    78,    73,    74,    79,    80,    81,   584,   477,   591,
     592,     7,    60,    61,    62,    63,    64,    65,   595,   596,
     532,   210,   535,   235,   537,   399,    66,    67,    60,    61,
      62,    63,    64,    65,    68,    82,    83,    84,    85,    86,
      87,   238,    66,    67,   245,   597,   598,   252,   599,   598,
      68,   623,   337,   313,   314,    71,   367,   368,    72,   243,
      73,    74,   163,   145,   146,   147,   148,   149,   150,   151,
     152,    71,   496,   497,    72,   255,    73,    74,    60,    61,
      62,    63,    64,    65,   253,   268,   270,   263,   272,   586,
     277,   393,    66,    67,   283,   285,   590,   286,   290,   296,
      68,   164,   300,    82,    83,    84,    85,    86,    87,  -138,
     301,   152,   306,   165,   302,   307,   316,   308,   315,   318,
     166,    71,   319,   329,    72,   328,    73,    74,   332,   338,
     167,   350,   353,   354,   361,     7,   362,   168,   333,   365,
     370,   398,   371,   384,   385,    60,    61,    62,    63,    64,
      65,   389,   391,   386,   395,   396,   397,   410,   411,    66,
      67,    82,    83,    84,    85,    86,    87,    68,   417,   412,
      60,    61,    62,    63,    64,    65,   413,    82,    83,    84,
      85,    86,    87,   418,    66,    67,   420,   414,    71,   415,
     416,    72,    68,    73,    74,    60,    61,    62,    63,    64,
      65,   424,   421,   422,   423,   429,   432,   433,   534,    66,
      67,   436,   474,    71,   475,   480,    72,    68,    73,    74,
     494,   478,   500,   508,   515,   519,   525,    82,    83,    84,
      85,    86,    87,   536,   549,   555,   529,   530,    71,   574,
     560,    72,   575,    73,    74,   133,   134,   135,   136,   137,
     138,   139,   140,   585,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   133,   134,   135,   136,
     137,   138,   139,   140,   334,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   587,   589,   600,
     601,   602,   603,   608,    82,    83,    84,    85,    86,    87,
     558,   559,   613,   562,   563,   564,   615,   614,   617,   567,
     568,   569,   284,   337,   572,   621,   622,   101,   237,    82,
      83,    84,    85,    86,    87,   135,   136,   137,   138,   139,
     140,   191,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    82,    83,    84,    85,    86,    87,
     133,   134,   135,   136,   137,   138,   139,   140,   352,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   133,   134,   135,   136,   137,   138,   139,   140,   327,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   136,   137,   138,   139,   140,   276,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     133,   134,   135,   136,   137,   138,   139,   140,   276,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   133,   134,   135,   136,   137,   138,   139,   140,   247,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   133,   134,   135,   136,   137,   138,   139,   140,
     364,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   133,   134,   135,   136,   137,   138,   139,
     140,   430,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   109,   267,   510,   511,   512,   513,
     406,   514,   288,    56,   516,   517,   518,   184,   538,   438,
     431,   522,   523,   524,   341,   570,   527,   116,     0,     0,
       0,     0,     0,   289,   133,   134,   135,   136,   137,   138,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     0,     0,     0,
       0,     0,   473,     0,     0,     0,     0,     0,     0,     0,
       0,   481,   482,     0,     0,     0,   483,     0,   484,     0,
       0,     0,   407,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,     0,   485,   486,     0,   487,     0,
       0,     0,     0,   291,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,     0,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   539,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   133,   134,   135,
     136,   137,   138,   139,   140,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,     0,     0,
       0,     0,     0,   488,   489,   133,   134,   135,   136,   137,
     138,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,     0,   439,     0,   440,
       0,   441,   442,   134,   135,   136,   137,   138,   139,   140,
     443,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,     0,   444,   445,   446,   447,     0,   448,
       0,     0,   449,   144,   145,   146,   147,   148,   149,   150,
     151,   152,     0,   450,     0,     0,     0,     0,     0,     0,
     451,     0,     0,     0,   452,     0,     0,     0,     0,   453,
     454,   455,   456,   123,     0,     0,     0,     0,     0,     0,
     278,   457,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   458,   459,     0,   460,   461,     0,   462,   463,     0,
       0,     0,     0,   464,   465,     0,     0,     0,   347,     0,
     466,     0,   467,     0,     0,     0,   468,   133,   134,   135,
     136,   137,   138,   139,   140,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   133,   134,
     135,   136,   137,   138,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   133,
     134,   135,   136,   137,   138,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,     0,     0,     0,   349,     0,     0,     0,     0,     0,
       0,     0,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   346,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,     0,     0,   132,     0,     0,     0,
     470,     0,   404,   133,   134,   135,   136,   137,   138,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,     0,     0,     0,     0,   471,     0,
       0,     0,   153,   133,   134,   135,   136,   137,   138,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,     0,     0,     0,     0,     0,     0,
       0,   299,   133,   134,   135,   136,   137,   138,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,  -222,  -222,  -222,  -222,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152
};

static const yytype_int16 yycheck[] =
{
      33,   183,   384,   385,   127,   128,    95,   319,   168,    20,
      94,    20,   372,     3,     3,     4,     5,     6,     7,     8,
       3,     3,     3,     3,    57,    58,   490,     6,    17,    18,
       3,   312,   111,    66,    67,    68,    25,   126,    17,    72,
       6,     3,    77,    96,   132,    34,    35,   429,   111,    56,
     432,   433,     3,   125,   436,    73,    74,    46,    77,   141,
      49,    55,    51,    52,    95,    37,    39,   125,   146,     8,
      73,    74,   178,   146,     5,   387,    83,    39,     9,   110,
     162,    88,   132,   162,   162,    92,   119,   210,   160,   162,
     123,    98,   252,    65,   127,   184,   129,   130,   131,   162,
     133,   134,   135,    88,   162,   138,   139,   160,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      88,   210,   586,   156,   155,   119,    77,   162,   107,   147,
     236,   120,   117,   493,   223,   129,   126,    88,   419,    99,
     246,   107,   175,   162,   147,     0,   177,    98,   159,   117,
     159,   109,    88,   276,   238,   315,   116,    23,   318,   265,
     193,   194,   113,   152,   153,   154,   155,   156,   157,   202,
     160,   160,   158,   296,    47,   160,    42,   160,   160,   160,
     160,   117,   125,   141,   217,   218,   159,    60,    61,   148,
     502,   159,   160,    56,     3,     4,     5,     6,     7,     8,
      17,    88,    76,   162,    90,   587,   126,   296,    17,    18,
     132,   300,   301,   302,    88,   139,    25,   160,    91,    36,
      83,   273,   158,   275,   144,    88,   349,   151,   610,    89,
     117,   159,   160,    50,    43,    98,    96,    46,   327,     9,
      49,     3,    51,    52,   117,   278,   162,   280,     3,    66,
      20,   284,   125,   126,   152,     3,     4,     5,     6,     7,
       8,    13,   135,    15,    16,   138,   299,   454,   142,    17,
      18,   158,     3,   460,     3,   462,   309,    25,   159,    96,
     520,   521,    78,   316,   161,   162,   526,   339,   528,   341,
     107,   100,   474,    89,     3,   112,   329,   141,    46,   332,
      96,    49,   146,    51,    52,   338,     3,     4,     5,     6,
       7,     8,   161,   162,   347,   159,   112,   350,   162,     3,
      17,    18,     3,   140,     9,   134,   161,   162,    25,    26,
      24,    25,    26,    27,    28,    29,    30,    34,     4,     5,
       6,     7,   375,   152,   153,   154,   155,   156,   157,    46,
     161,   162,    49,   160,    51,    52,   160,   597,   160,   599,
     600,   160,    59,   161,   162,   160,    63,    26,    27,    28,
      29,    30,   160,   406,     3,     4,     5,     6,     7,     8,
     161,   162,   161,   162,   417,   418,    83,    39,    17,    18,
       3,   424,   425,   161,   162,    26,    25,    26,     3,   147,
     161,   162,   161,   162,   152,   153,   154,   155,   156,   157,
     161,   162,   161,   162,   161,   162,     3,    46,   161,   162,
      49,   118,    51,    52,   121,   122,   123,   161,   162,   161,
     162,   126,     3,     4,     5,     6,     7,     8,    53,    54,
     473,   160,   475,     3,   477,   478,    17,    18,     3,     4,
       5,     6,     7,     8,    25,   152,   153,   154,   155,   156,
     157,     3,    17,    18,     3,   161,   162,    95,   161,   162,
      25,   161,   162,   248,   249,    46,   307,   308,    49,   161,
      51,    52,    48,    23,    24,    25,    26,    27,    28,    29,
      30,    46,   422,   423,    49,     3,    51,    52,     3,     4,
       5,     6,     7,     8,   108,     3,     3,   110,   144,   542,
     161,    66,    17,    18,   161,   161,   549,   161,   161,   160,
      25,    87,   160,   152,   153,   154,   155,   156,   157,    95,
     160,    30,    96,    99,   160,    96,   109,    96,    95,    95,
     106,    46,     3,   101,    49,    41,    51,    52,    20,   160,
     116,    94,   161,   161,   161,   126,    80,   123,   111,    79,
       3,    66,     3,   160,   160,     3,     4,     5,     6,     7,
       8,     3,     3,    96,    96,     3,     3,   161,   161,    17,
      18,   152,   153,   154,   155,   156,   157,    25,    41,   161,
       3,     4,     5,     6,     7,     8,   161,   152,   153,   154,
     155,   156,   157,    85,    17,    18,    95,   161,    46,   161,
     161,    49,    25,    51,    52,     3,     4,     5,     6,     7,
       8,    20,   160,   160,   160,   160,   160,   160,    66,    17,
      18,   160,   138,    46,    20,   161,    49,    25,    51,    52,
       3,   160,     3,   160,   160,    42,   160,   152,   153,   154,
     155,   156,   157,    66,    20,     5,   160,   160,    46,     5,
       4,    49,     5,    51,    52,    10,    11,    12,    13,    14,
      15,    16,    17,   115,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    17,   162,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    92,     3,   161,
     161,   107,     4,    96,   152,   153,   154,   155,   156,   157,
     513,   514,     5,   516,   517,   518,     4,   125,     4,   522,
     523,   524,    77,   162,   527,   161,     4,    38,   156,   152,
     153,   154,   155,   156,   157,    12,    13,    14,    15,    16,
      17,   124,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   152,   153,   154,   155,   156,   157,
      10,    11,    12,    13,    14,    15,    16,    17,   289,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,   261,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    13,    14,    15,    16,    17,   162,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    17,   162,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,   162,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    17,
     305,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      17,   379,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    44,   179,   441,   442,   443,   444,
      79,   446,   162,    29,   449,   450,   451,   113,   478,   388,
     380,   456,   457,   458,   274,   525,   461,    59,    -1,    -1,
      -1,    -1,    -1,   162,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    62,    -1,    64,    -1,
      -1,    -1,   161,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    81,    82,    -1,    84,    -1,
      -1,    -1,    -1,   161,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,   161,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,   149,   150,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    40,    -1,    42,
      -1,    44,    45,    11,    12,    13,    14,    15,    16,    17,
      53,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    67,    68,    69,    70,    -1,    72,
      -1,    -1,    75,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,   102,
     103,   104,   105,   147,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,    -1,   127,   128,    -1,   130,   131,    -1,
      -1,    -1,    -1,   136,   137,    -1,    -1,    -1,   133,    -1,
     143,    -1,   145,    -1,    -1,    -1,   149,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    73,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,     3,    -1,    -1,    -1,
      37,    -1,    73,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,    60,    61,    91,   117,   125,   126,   135,   138,
     164,   171,   172,   202,   206,   207,   208,   216,   217,   220,
     222,   236,    55,   119,   129,   223,   203,   132,   210,   210,
       8,   237,   238,   183,   132,   210,   218,     0,   158,    90,
     221,   221,   132,     3,    77,    88,    98,   113,   204,     3,
      56,    83,    88,    92,    98,   211,   211,     9,    20,   162,
       3,     4,     5,     6,     7,     8,    17,    18,    25,    26,
      34,    46,    49,    51,    52,    59,    63,    83,   118,   121,
     122,   123,   152,   153,   154,   155,   156,   157,   165,   184,
     185,     3,    88,    98,     3,   160,   187,   188,   189,   191,
     201,   164,   152,     3,     3,   221,   159,   205,     3,   204,
      77,   162,     3,     3,   165,   165,   238,   159,   160,     9,
     165,   165,   165,   147,   165,   170,   160,   160,   160,   160,
     160,   160,     3,    10,    11,    12,    13,    14,    15,    16,
      17,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    39,   186,    77,   162,   159,   186,   172,
     187,   125,   162,    48,    87,    99,   106,   116,   123,   192,
     194,    39,   190,     3,    26,   146,   173,   141,   187,     3,
     125,   160,   212,   125,   212,     3,   165,   166,   167,   165,
     165,   170,    73,    74,   147,   172,   165,   166,    43,   100,
     134,   166,   168,   165,   165,    26,   165,   165,   165,   165,
     160,     6,    17,   107,   165,   165,    13,    15,    16,   165,
      34,    35,   120,   160,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,     3,   187,   185,     3,    76,
      88,   142,   198,   161,   161,     3,   219,   188,    99,   116,
     195,   189,    95,   108,   193,     3,    88,   117,   159,   160,
     234,   235,   165,   110,   179,   187,   173,   205,     3,   215,
       3,   182,   144,   215,   144,   172,   162,   161,   133,    73,
      74,   165,   165,   161,    77,   161,   161,   165,   162,   162,
     161,   161,   166,   172,     6,   107,   160,   165,   165,    38,
     160,   160,   160,   172,   173,   186,    96,    96,    96,    20,
     159,   162,   173,   193,   193,    95,   109,   189,    95,     3,
      78,    89,    96,   112,   224,   225,   226,   190,    41,   101,
     180,   173,    20,   111,   162,   209,   161,   162,   160,   213,
     209,   213,   209,   166,   165,   165,    73,   133,   165,    77,
      94,   169,   169,   161,   161,   166,   172,   165,   172,   172,
     172,   161,    80,   174,   198,    79,   199,   199,   199,   165,
       3,     3,   179,   189,   165,   109,   141,   196,   197,   189,
     160,   234,    89,    96,   160,   160,    96,   161,   162,     3,
     172,     3,   165,    66,   165,    96,     3,     3,    66,   165,
     214,   162,   209,   209,    73,   165,    79,   161,   166,   165,
     161,   161,   161,   161,   161,   161,   161,    41,    85,   178,
      95,   160,   160,   160,    20,    20,   159,   180,   165,   160,
     197,   224,   160,   160,   182,   182,   160,   234,   225,    40,
      42,    44,    45,    53,    67,    68,    69,    70,    72,    75,
      86,    93,    97,   102,   103,   104,   105,   114,   124,   125,
     127,   128,   130,   131,   136,   137,   143,   145,   149,   232,
      37,    65,   176,   162,   138,    20,   161,   162,   160,   165,
     161,    57,    58,    62,    64,    81,    82,    84,   149,   150,
     165,   175,   165,   179,     3,   200,   200,   200,   165,   165,
       3,   182,   161,   182,   182,   161,   161,   182,   160,   228,
     228,   228,   228,   228,   228,   160,   228,   228,   228,    42,
     229,   229,   228,   228,   228,   160,   229,   228,   229,   160,
     160,   227,   165,   215,    66,   165,    66,   165,   214,   161,
     176,   148,   162,   177,   180,   161,   162,   161,   161,    20,
     161,   234,   161,   161,   161,     5,   230,   231,   230,   230,
       4,   233,   230,   230,   230,   231,   231,   230,   230,   230,
     233,   231,   230,   231,     5,     5,    17,    36,    50,    66,
      96,   107,   112,   140,   161,   115,   165,    92,   181,     3,
     165,   161,   162,   139,   151,    53,    54,   161,   162,   161,
     161,   161,   107,     4,     4,     5,     6,     7,    96,    96,
     160,   176,   182,     5,   125,     4,   231,     4,   231,   231,
     182,   161,     4,   161
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   163,   164,   164,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   166,   166,
     167,   167,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   168,   168,   168,   165,   165,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   165,
     165,   165,   165,   170,   170,   165,   165,   165,   165,   165,
     165,   165,   171,   172,   172,   173,   173,   174,   174,   175,
     175,   176,   176,   176,   177,   177,   178,   178,   179,   179,
     180,   180,   180,   181,   181,   182,   182,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   184,   184,   184,   185,
     186,   186,   186,   187,   187,   188,   188,   189,   189,   189,
     189,   190,   190,   191,   191,   191,   191,   191,   192,   192,
     192,   193,   193,   194,   194,   195,   195,   195,   196,   196,
     197,   197,   198,   198,   198,   198,   199,   199,   200,   200,
     201,   171,   202,   203,   203,   203,   203,   202,   204,   204,
     205,   205,   202,   171,   206,   171,   207,   171,   208,   209,
     209,   210,   210,   210,   210,   210,   211,   211,   212,   212,
     213,   213,   214,   214,   214,   214,   208,   215,   215,   215,
     215,   171,   216,   216,   216,   171,   217,   218,   218,   218,
     219,   219,   219,   219,   171,   220,   220,   221,   221,   171,
     222,   222,   222,   222,   222,   222,   223,   223,   224,   224,
     225,   225,   225,   225,   225,   226,   225,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     228,   228,   228,   229,   229,   230,   230,   230,   231,   231,
     231,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   233,   233,   234,   235,   235,   235,   171,   236,   237,
     237,   238,   238
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
       5,     1,     3,     3,     0,     1,     1,     1,     2,     1,
       3,     3,     3
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
#line 246 "evoparser.y"
    {
        emit("NAME %s", (yyvsp[0].strval));
        GetSelection((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 1930 "evoparser.tab.c"
    break;

  case 5: /* expr: NAME '.' NAME  */
#line 251 "evoparser.y"
                                                                                { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 1936 "evoparser.tab.c"
    break;

  case 6: /* expr: USERVAR  */
#line 252 "evoparser.y"
                                                                                { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 1942 "evoparser.tab.c"
    break;

  case 7: /* expr: STRING  */
#line 254 "evoparser.y"
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
#line 1962 "evoparser.tab.c"
    break;

  case 8: /* expr: INTNUM  */
#line 270 "evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[0].intval));
        char buf[32];
        sprintf(buf, "%d", (yyvsp[0].intval));
        GetInsertions(buf);
    }
#line 1973 "evoparser.tab.c"
    break;

  case 9: /* expr: APPROXNUM  */
#line 277 "evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[0].floatval));
        char buf[64];
        sprintf(buf, "%g", (yyvsp[0].floatval));
        GetInsertions(buf);
    }
#line 1984 "evoparser.tab.c"
    break;

  case 10: /* expr: BOOL  */
#line 283 "evoparser.y"
                                                                                { emit("BOOL %d", (yyvsp[0].intval)); }
#line 1990 "evoparser.tab.c"
    break;

  case 11: /* expr: expr '+' expr  */
#line 286 "evoparser.y"
                                                                                { emit("ADD"); }
#line 1996 "evoparser.tab.c"
    break;

  case 12: /* expr: expr '-' expr  */
#line 287 "evoparser.y"
                                                                                { emit("SUB"); }
#line 2002 "evoparser.tab.c"
    break;

  case 13: /* expr: expr '*' expr  */
#line 288 "evoparser.y"
                                                                                { emit("MUL"); }
#line 2008 "evoparser.tab.c"
    break;

  case 14: /* expr: expr '/' expr  */
#line 289 "evoparser.y"
                                                                                { emit("DIV"); }
#line 2014 "evoparser.tab.c"
    break;

  case 15: /* expr: expr '%' expr  */
#line 290 "evoparser.y"
                                                                                { emit("MOD"); }
#line 2020 "evoparser.tab.c"
    break;

  case 16: /* expr: expr MOD expr  */
#line 291 "evoparser.y"
                                                                                { emit("MOD"); }
#line 2026 "evoparser.tab.c"
    break;

  case 17: /* expr: '-' expr  */
#line 292 "evoparser.y"
                                                                                { emit("NEG"); }
#line 2032 "evoparser.tab.c"
    break;

  case 18: /* expr: expr ANDOP expr  */
#line 293 "evoparser.y"
                                                                                { emit("AND"); }
#line 2038 "evoparser.tab.c"
    break;

  case 19: /* expr: expr OR expr  */
#line 294 "evoparser.y"
                                                                                { emit("OR"); }
#line 2044 "evoparser.tab.c"
    break;

  case 20: /* expr: expr XOR expr  */
#line 295 "evoparser.y"
                                                                                { emit("XOR"); }
#line 2050 "evoparser.tab.c"
    break;

  case 21: /* expr: expr '|' expr  */
#line 296 "evoparser.y"
                                                                                { emit("BITOR"); }
#line 2056 "evoparser.tab.c"
    break;

  case 22: /* expr: expr '&' expr  */
#line 297 "evoparser.y"
                                                                                { emit("BITAND"); }
#line 2062 "evoparser.tab.c"
    break;

  case 23: /* expr: expr '^' expr  */
#line 298 "evoparser.y"
                                                                                { emit("BITXOR"); }
#line 2068 "evoparser.tab.c"
    break;

  case 24: /* expr: expr SHIFT expr  */
#line 299 "evoparser.y"
                                                                                { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2074 "evoparser.tab.c"
    break;

  case 25: /* expr: NOT expr  */
#line 300 "evoparser.y"
                                                                                { emit("NOT"); }
#line 2080 "evoparser.tab.c"
    break;

  case 26: /* expr: '!' expr  */
#line 301 "evoparser.y"
                                                                                { emit("NOT"); }
#line 2086 "evoparser.tab.c"
    break;

  case 27: /* expr: expr COMPARISON expr  */
#line 303 "evoparser.y"
    {
        emit("CMP %d", (yyvsp[-1].subtok));
    }
#line 2094 "evoparser.tab.c"
    break;

  case 28: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 307 "evoparser.y"
                                                                                { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2100 "evoparser.tab.c"
    break;

  case 29: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 308 "evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2106 "evoparser.tab.c"
    break;

  case 30: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 309 "evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2112 "evoparser.tab.c"
    break;

  case 31: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 310 "evoparser.y"
                                                                                { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2118 "evoparser.tab.c"
    break;

  case 32: /* expr: expr IS NULLX  */
#line 313 "evoparser.y"
                                                                                { emit("ISNULL"); }
#line 2124 "evoparser.tab.c"
    break;

  case 33: /* expr: expr IS NOT NULLX  */
#line 314 "evoparser.y"
                                                                                { emit("ISNULL"); emit("NOT"); }
#line 2130 "evoparser.tab.c"
    break;

  case 34: /* expr: expr IS BOOL  */
#line 315 "evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2136 "evoparser.tab.c"
    break;

  case 35: /* expr: expr IS NOT BOOL  */
#line 316 "evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2142 "evoparser.tab.c"
    break;

  case 36: /* expr: USERVAR ASSIGN expr  */
#line 317 "evoparser.y"
                                                                                { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2148 "evoparser.tab.c"
    break;

  case 37: /* expr: expr BETWEEN expr AND expr  */
#line 320 "evoparser.y"
                                                                                { emit("BETWEEN"); }
#line 2154 "evoparser.tab.c"
    break;

  case 38: /* val_list: expr  */
#line 323 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2160 "evoparser.tab.c"
    break;

  case 39: /* val_list: expr ',' val_list  */
#line 324 "evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2166 "evoparser.tab.c"
    break;

  case 40: /* opt_val_list: %empty  */
#line 327 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2172 "evoparser.tab.c"
    break;

  case 42: /* expr: expr IN '(' val_list ')'  */
#line 331 "evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2178 "evoparser.tab.c"
    break;

  case 43: /* expr: expr NOT IN '(' val_list ')'  */
#line 332 "evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2184 "evoparser.tab.c"
    break;

  case 44: /* expr: expr IN '(' select_stmt ')'  */
#line 333 "evoparser.y"
                                                                                { emit("CMPANYSELECT 4"); }
#line 2190 "evoparser.tab.c"
    break;

  case 45: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 334 "evoparser.y"
                                                                                { emit("CMPALLSELECT 3"); }
#line 2196 "evoparser.tab.c"
    break;

  case 46: /* expr: EXISTS '(' select_stmt ')'  */
#line 335 "evoparser.y"
                                                                                { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2202 "evoparser.tab.c"
    break;

  case 47: /* expr: NAME '(' opt_val_list ')'  */
#line 339 "evoparser.y"
                                                                                { emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2208 "evoparser.tab.c"
    break;

  case 48: /* expr: FCOUNT '(' '*' ')'  */
#line 343 "evoparser.y"
                                                                                { emit("COUNTALL"); }
#line 2214 "evoparser.tab.c"
    break;

  case 49: /* expr: FCOUNT '(' expr ')'  */
#line 344 "evoparser.y"
                                                                                { emit(" CALL 1 COUNT"); }
#line 2220 "evoparser.tab.c"
    break;

  case 50: /* expr: FSUBSTRING '(' val_list ')'  */
#line 346 "evoparser.y"
                                                                                { emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2226 "evoparser.tab.c"
    break;

  case 51: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 347 "evoparser.y"
                                                                                { emit("CALL 2 SUBSTR"); }
#line 2232 "evoparser.tab.c"
    break;

  case 52: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 348 "evoparser.y"
                                                                                { emit("CALL 3 SUBSTR"); }
#line 2238 "evoparser.tab.c"
    break;

  case 53: /* expr: FTRIM '(' val_list ')'  */
#line 349 "evoparser.y"
                                                                                { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2244 "evoparser.tab.c"
    break;

  case 54: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 350 "evoparser.y"
                                                                                { emit("CALL 3 TRIM"); }
#line 2250 "evoparser.tab.c"
    break;

  case 55: /* trim_ltb: LEADING  */
#line 353 "evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2256 "evoparser.tab.c"
    break;

  case 56: /* trim_ltb: TRAILING  */
#line 354 "evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2262 "evoparser.tab.c"
    break;

  case 57: /* trim_ltb: BOTH  */
#line 355 "evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2268 "evoparser.tab.c"
    break;

  case 58: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 358 "evoparser.y"
                                                                                { emit("CALL 3 DATE_ADD"); }
#line 2274 "evoparser.tab.c"
    break;

  case 59: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 359 "evoparser.y"
                                                                                { emit("CALL 3 DATE_SUB"); }
#line 2280 "evoparser.tab.c"
    break;

  case 60: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 362 "evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2286 "evoparser.tab.c"
    break;

  case 61: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 363 "evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2292 "evoparser.tab.c"
    break;

  case 62: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 364 "evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2298 "evoparser.tab.c"
    break;

  case 63: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 365 "evoparser.y"
                                                                                { emit("NUMBER 4"); }
#line 2304 "evoparser.tab.c"
    break;

  case 64: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 366 "evoparser.y"
                                                                                { emit("NUMBER 5"); }
#line 2310 "evoparser.tab.c"
    break;

  case 65: /* interval_exp: INTERVAL expr YEAR  */
#line 367 "evoparser.y"
                                                                                { emit("NUMBER 6"); }
#line 2316 "evoparser.tab.c"
    break;

  case 66: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 368 "evoparser.y"
                                                                                { emit("NUMBER 7"); }
#line 2322 "evoparser.tab.c"
    break;

  case 67: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 369 "evoparser.y"
                                                                                { emit("NUMBER 8"); }
#line 2328 "evoparser.tab.c"
    break;

  case 68: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 370 "evoparser.y"
                                                                                { emit("NUMBER 9"); }
#line 2334 "evoparser.tab.c"
    break;

  case 69: /* expr: CASE expr case_list END  */
#line 373 "evoparser.y"
                                                                                { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2340 "evoparser.tab.c"
    break;

  case 70: /* expr: CASE expr case_list ELSE expr END  */
#line 374 "evoparser.y"
                                                                                { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2346 "evoparser.tab.c"
    break;

  case 71: /* expr: CASE case_list END  */
#line 375 "evoparser.y"
                                                                                { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2352 "evoparser.tab.c"
    break;

  case 72: /* expr: CASE case_list ELSE expr END  */
#line 376 "evoparser.y"
                                                                                { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2358 "evoparser.tab.c"
    break;

  case 73: /* case_list: WHEN expr THEN expr  */
#line 379 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2364 "evoparser.tab.c"
    break;

  case 74: /* case_list: case_list WHEN expr THEN expr  */
#line 380 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2370 "evoparser.tab.c"
    break;

  case 75: /* expr: expr LIKE expr  */
#line 383 "evoparser.y"
                                                                                { emit("LIKE"); }
#line 2376 "evoparser.tab.c"
    break;

  case 76: /* expr: expr NOT LIKE expr  */
#line 384 "evoparser.y"
                                                                                { emit("LIKE"); emit("NOT"); }
#line 2382 "evoparser.tab.c"
    break;

  case 77: /* expr: expr REGEXP expr  */
#line 387 "evoparser.y"
                                                                                { emit("REGEXP"); }
#line 2388 "evoparser.tab.c"
    break;

  case 78: /* expr: expr NOT REGEXP expr  */
#line 388 "evoparser.y"
                                                                                { emit("REGEXP"); emit("NOT"); }
#line 2394 "evoparser.tab.c"
    break;

  case 79: /* expr: CURRENT_TIMESTAMP  */
#line 391 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2400 "evoparser.tab.c"
    break;

  case 80: /* expr: CURRENT_DATE  */
#line 392 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2406 "evoparser.tab.c"
    break;

  case 81: /* expr: CURRENT_TIME  */
#line 393 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2412 "evoparser.tab.c"
    break;

  case 82: /* stmt: select_stmt  */
#line 398 "evoparser.y"
    {
        emit("STMT");
        if ((yyvsp[0].intval) == 1)
            SelectAll();
        else
            SelectProcess();
    }
#line 2424 "evoparser.tab.c"
    break;

  case 83: /* select_stmt: SELECT select_opts select_expr_list  */
#line 407 "evoparser.y"
                                                                                { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2430 "evoparser.tab.c"
    break;

  case 84: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 412 "evoparser.y"
    {
        emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval));
        if ((yyvsp[-8].intval) == 3)
            (yyval.intval) = 1;
        else
            ;
    }
#line 2442 "evoparser.tab.c"
    break;

  case 86: /* opt_where: WHERE expr  */
#line 422 "evoparser.y"
                                                                                { emit("WHERE"); }
#line 2448 "evoparser.tab.c"
    break;

  case 88: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 424 "evoparser.y"
                                                                                { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2454 "evoparser.tab.c"
    break;

  case 89: /* groupby_list: expr opt_asc_desc  */
#line 427 "evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2460 "evoparser.tab.c"
    break;

  case 90: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 428 "evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2466 "evoparser.tab.c"
    break;

  case 91: /* opt_asc_desc: %empty  */
#line 431 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2472 "evoparser.tab.c"
    break;

  case 92: /* opt_asc_desc: ASC  */
#line 432 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2478 "evoparser.tab.c"
    break;

  case 93: /* opt_asc_desc: DESC  */
#line 433 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2484 "evoparser.tab.c"
    break;

  case 94: /* opt_with_rollup: %empty  */
#line 436 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2490 "evoparser.tab.c"
    break;

  case 95: /* opt_with_rollup: WITH ROLLUP  */
#line 437 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2496 "evoparser.tab.c"
    break;

  case 97: /* opt_having: HAVING expr  */
#line 441 "evoparser.y"
                                                                                { emit("HAVING"); }
#line 2502 "evoparser.tab.c"
    break;

  case 99: /* opt_orderby: ORDER BY NAME opt_asc_desc  */
#line 446 "evoparser.y"
    {
        emit("ORDERBY %s %d", (yyvsp[-1].strval), (yyvsp[0].intval));
        GetOrderByColumn((yyvsp[-1].strval));
        SetOrderByDirection((yyvsp[0].intval));
        free((yyvsp[-1].strval));
    }
#line 2513 "evoparser.tab.c"
    break;

  case 101: /* opt_limit: LIMIT expr  */
#line 454 "evoparser.y"
                                                                                { emit("LIMIT 1"); }
#line 2519 "evoparser.tab.c"
    break;

  case 102: /* opt_limit: LIMIT expr ',' expr  */
#line 455 "evoparser.y"
                                                                                { emit("LIMIT 2"); }
#line 2525 "evoparser.tab.c"
    break;

  case 104: /* opt_into_list: INTO column_list  */
#line 459 "evoparser.y"
                                                                                { emit("INTO %d", (yyvsp[0].intval)); }
#line 2531 "evoparser.tab.c"
    break;

  case 105: /* column_list: NAME  */
#line 462 "evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2537 "evoparser.tab.c"
    break;

  case 106: /* column_list: column_list ',' NAME  */
#line 463 "evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2543 "evoparser.tab.c"
    break;

  case 107: /* select_opts: %empty  */
#line 466 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2549 "evoparser.tab.c"
    break;

  case 108: /* select_opts: select_opts ALL  */
#line 467 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2555 "evoparser.tab.c"
    break;

  case 109: /* select_opts: select_opts DISTINCT  */
#line 468 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2561 "evoparser.tab.c"
    break;

  case 110: /* select_opts: select_opts DISTINCTROW  */
#line 469 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2567 "evoparser.tab.c"
    break;

  case 111: /* select_opts: select_opts HIGH_PRIORITY  */
#line 470 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2573 "evoparser.tab.c"
    break;

  case 112: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 471 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2579 "evoparser.tab.c"
    break;

  case 113: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 472 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2585 "evoparser.tab.c"
    break;

  case 114: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 473 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2591 "evoparser.tab.c"
    break;

  case 115: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 474 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[-1].intval) | 0200; }
#line 2597 "evoparser.tab.c"
    break;

  case 116: /* select_expr_list: select_expr  */
#line 477 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2603 "evoparser.tab.c"
    break;

  case 117: /* select_expr_list: select_expr_list ',' select_expr  */
#line 478 "evoparser.y"
                                                                                {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2609 "evoparser.tab.c"
    break;

  case 118: /* select_expr_list: '*'  */
#line 480 "evoparser.y"
    {
        emit("SELECTALL");
        (yyval.intval) = 3;
    }
#line 2618 "evoparser.tab.c"
    break;

  case 120: /* opt_as_alias: AS NAME  */
#line 487 "evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2624 "evoparser.tab.c"
    break;

  case 121: /* opt_as_alias: NAME  */
#line 488 "evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2630 "evoparser.tab.c"
    break;

  case 123: /* table_references: table_reference  */
#line 492 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2636 "evoparser.tab.c"
    break;

  case 124: /* table_references: table_references ',' table_reference  */
#line 493 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2642 "evoparser.tab.c"
    break;

  case 127: /* table_factor: NAME opt_as_alias index_hint  */
#line 502 "evoparser.y"
    {
        emit("TABLE %s", (yyvsp[-2].strval));
        GetSelTableName((yyvsp[-2].strval));
        free((yyvsp[-2].strval));
    }
#line 2652 "evoparser.tab.c"
    break;

  case 128: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 507 "evoparser.y"
                                                                                { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2658 "evoparser.tab.c"
    break;

  case 129: /* table_factor: table_subquery opt_as NAME  */
#line 508 "evoparser.y"
                                                                                { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2664 "evoparser.tab.c"
    break;

  case 130: /* table_factor: '(' table_references ')'  */
#line 509 "evoparser.y"
                                                                                { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2670 "evoparser.tab.c"
    break;

  case 133: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 518 "evoparser.y"
                                                                                { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2676 "evoparser.tab.c"
    break;

  case 134: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 520 "evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2682 "evoparser.tab.c"
    break;

  case 135: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 522 "evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2688 "evoparser.tab.c"
    break;

  case 136: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 524 "evoparser.y"
                                                                                { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2694 "evoparser.tab.c"
    break;

  case 137: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 526 "evoparser.y"
                                                                                { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2700 "evoparser.tab.c"
    break;

  case 138: /* opt_inner_cross: %empty  */
#line 529 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2706 "evoparser.tab.c"
    break;

  case 139: /* opt_inner_cross: INNER  */
#line 530 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2712 "evoparser.tab.c"
    break;

  case 140: /* opt_inner_cross: CROSS  */
#line 531 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2718 "evoparser.tab.c"
    break;

  case 141: /* opt_outer: %empty  */
#line 534 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2724 "evoparser.tab.c"
    break;

  case 142: /* opt_outer: OUTER  */
#line 535 "evoparser.y"
                                                                                {(yyval.intval) = 4; }
#line 2730 "evoparser.tab.c"
    break;

  case 143: /* left_or_right: LEFT  */
#line 538 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2736 "evoparser.tab.c"
    break;

  case 144: /* left_or_right: RIGHT  */
#line 539 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2742 "evoparser.tab.c"
    break;

  case 145: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 542 "evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2748 "evoparser.tab.c"
    break;

  case 146: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 543 "evoparser.y"
                                                                                { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2754 "evoparser.tab.c"
    break;

  case 147: /* opt_left_or_right_outer: %empty  */
#line 544 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2760 "evoparser.tab.c"
    break;

  case 150: /* join_condition: ON expr  */
#line 551 "evoparser.y"
                                                                                { emit("ONEXPR"); }
#line 2766 "evoparser.tab.c"
    break;

  case 151: /* join_condition: USING '(' column_list ')'  */
#line 552 "evoparser.y"
                                                                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 2772 "evoparser.tab.c"
    break;

  case 152: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 557 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 2778 "evoparser.tab.c"
    break;

  case 153: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 559 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 2784 "evoparser.tab.c"
    break;

  case 154: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 561 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 2790 "evoparser.tab.c"
    break;

  case 156: /* opt_for_join: FOR JOIN  */
#line 565 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2796 "evoparser.tab.c"
    break;

  case 157: /* opt_for_join: %empty  */
#line 566 "evoparser.y"
            { (yyval.intval) = 0; }
#line 2802 "evoparser.tab.c"
    break;

  case 158: /* index_list: NAME  */
#line 569 "evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2808 "evoparser.tab.c"
    break;

  case 159: /* index_list: index_list ',' NAME  */
#line 570 "evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2814 "evoparser.tab.c"
    break;

  case 160: /* table_subquery: '(' select_stmt ')'  */
#line 573 "evoparser.y"
                                                                                { emit("SUBQUERY"); }
#line 2820 "evoparser.tab.c"
    break;

  case 161: /* stmt: delete_stmt  */
#line 578 "evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    }
#line 2829 "evoparser.tab.c"
    break;

  case 162: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 586 "evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval));
        GetDelTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 2839 "evoparser.tab.c"
    break;

  case 163: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 593 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2845 "evoparser.tab.c"
    break;

  case 164: /* delete_opts: delete_opts QUICK  */
#line 594 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2851 "evoparser.tab.c"
    break;

  case 165: /* delete_opts: delete_opts IGNORE  */
#line 595 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2857 "evoparser.tab.c"
    break;

  case 166: /* delete_opts: %empty  */
#line 596 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2863 "evoparser.tab.c"
    break;

  case 167: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 600 "evoparser.y"
                                                                                { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2869 "evoparser.tab.c"
    break;

  case 168: /* delete_list: NAME opt_dot_star  */
#line 603 "evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2875 "evoparser.tab.c"
    break;

  case 169: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 604 "evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2881 "evoparser.tab.c"
    break;

  case 172: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 609 "evoparser.y"
                                                                                        { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2887 "evoparser.tab.c"
    break;

  case 173: /* stmt: drop_table_stmt  */
#line 614 "evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    }
#line 2896 "evoparser.tab.c"
    break;

  case 174: /* drop_table_stmt: DROP TABLE NAME  */
#line 621 "evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[0].strval));
        GetDropTableName((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 2906 "evoparser.tab.c"
    break;

  case 175: /* stmt: truncate_table_stmt  */
#line 630 "evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    }
#line 2915 "evoparser.tab.c"
    break;

  case 176: /* truncate_table_stmt: TRUNCATE TABLE NAME  */
#line 637 "evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[0].strval));
        GetDropTableName((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 2925 "evoparser.tab.c"
    break;

  case 177: /* stmt: insert_stmt  */
#line 645 "evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    }
#line 2934 "evoparser.tab.c"
    break;

  case 178: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 652 "evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval));
        GetInsertionTableName((yyvsp[-4].strval));
        free((yyvsp[-4].strval));
    }
#line 2944 "evoparser.tab.c"
    break;

  case 180: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 660 "evoparser.y"
                                          { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2950 "evoparser.tab.c"
    break;

  case 181: /* insert_opts: %empty  */
#line 663 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2956 "evoparser.tab.c"
    break;

  case 182: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 664 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2962 "evoparser.tab.c"
    break;

  case 183: /* insert_opts: insert_opts DELAYED  */
#line 665 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2968 "evoparser.tab.c"
    break;

  case 184: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 666 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2974 "evoparser.tab.c"
    break;

  case 185: /* insert_opts: insert_opts IGNORE  */
#line 667 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2980 "evoparser.tab.c"
    break;

  case 189: /* opt_col_names: '(' column_list ')'  */
#line 674 "evoparser.y"
                                                                                { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 2986 "evoparser.tab.c"
    break;

  case 190: /* insert_vals_list: '(' insert_vals ')'  */
#line 677 "evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2992 "evoparser.tab.c"
    break;

  case 191: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 678 "evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2998 "evoparser.tab.c"
    break;

  case 192: /* insert_vals: expr  */
#line 681 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3004 "evoparser.tab.c"
    break;

  case 193: /* insert_vals: DEFAULT  */
#line 682 "evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = 1; }
#line 3010 "evoparser.tab.c"
    break;

  case 194: /* insert_vals: insert_vals ',' expr  */
#line 683 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3016 "evoparser.tab.c"
    break;

  case 195: /* insert_vals: insert_vals ',' DEFAULT  */
#line 684 "evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3022 "evoparser.tab.c"
    break;

  case 196: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 688 "evoparser.y"
                                                                                { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3028 "evoparser.tab.c"
    break;

  case 197: /* insert_asgn_list: NAME COMPARISON expr  */
#line 691 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3034 "evoparser.tab.c"
    break;

  case 198: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 692 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3040 "evoparser.tab.c"
    break;

  case 199: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 693 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3046 "evoparser.tab.c"
    break;

  case 200: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 694 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3052 "evoparser.tab.c"
    break;

  case 201: /* stmt: replace_stmt  */
#line 700 "evoparser.y"
                                                                                { emit("STMT"); }
#line 3058 "evoparser.tab.c"
    break;

  case 202: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 706 "evoparser.y"
                                                                                { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3064 "evoparser.tab.c"
    break;

  case 203: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 711 "evoparser.y"
                                                                                { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3070 "evoparser.tab.c"
    break;

  case 204: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 716 "evoparser.y"
                                                                                { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3076 "evoparser.tab.c"
    break;

  case 205: /* stmt: update_stmt  */
#line 721 "evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    }
#line 3085 "evoparser.tab.c"
    break;

  case 206: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 728 "evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval));
    }
#line 3093 "evoparser.tab.c"
    break;

  case 207: /* update_opts: %empty  */
#line 733 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3099 "evoparser.tab.c"
    break;

  case 208: /* update_opts: insert_opts LOW_PRIORITY  */
#line 734 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3105 "evoparser.tab.c"
    break;

  case 209: /* update_opts: insert_opts IGNORE  */
#line 735 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3111 "evoparser.tab.c"
    break;

  case 210: /* update_asgn_list: NAME COMPARISON expr  */
#line 740 "evoparser.y"
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
#line 3126 "evoparser.tab.c"
    break;

  case 211: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 751 "evoparser.y"
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
#line 3141 "evoparser.tab.c"
    break;

  case 212: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 762 "evoparser.y"
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
#line 3156 "evoparser.tab.c"
    break;

  case 213: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 773 "evoparser.y"
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
#line 3171 "evoparser.tab.c"
    break;

  case 214: /* stmt: create_database_stmt  */
#line 786 "evoparser.y"
                                                                                { emit("STMT"); }
#line 3177 "evoparser.tab.c"
    break;

  case 215: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 790 "evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3183 "evoparser.tab.c"
    break;

  case 216: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 791 "evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3189 "evoparser.tab.c"
    break;

  case 217: /* opt_if_not_exists: %empty  */
#line 794 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3195 "evoparser.tab.c"
    break;

  case 218: /* opt_if_not_exists: IF EXISTS  */
#line 795 "evoparser.y"
                                                                                { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3201 "evoparser.tab.c"
    break;

  case 219: /* stmt: create_table_stmt  */
#line 800 "evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    }
#line 3210 "evoparser.tab.c"
    break;

  case 220: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 808 "evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval));
        GetTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 3220 "evoparser.tab.c"
    break;

  case 221: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 816 "evoparser.y"
                                                                                { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval)); free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3226 "evoparser.tab.c"
    break;

  case 222: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 821 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3232 "evoparser.tab.c"
    break;

  case 223: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 825 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3238 "evoparser.tab.c"
    break;

  case 224: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 830 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval)); free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3244 "evoparser.tab.c"
    break;

  case 225: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 834 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval)); free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3250 "evoparser.tab.c"
    break;

  case 226: /* opt_temporary: %empty  */
#line 837 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3256 "evoparser.tab.c"
    break;

  case 227: /* opt_temporary: TEMPORARY  */
#line 838 "evoparser.y"
                                                                                { (yyval.intval) = 1;}
#line 3262 "evoparser.tab.c"
    break;

  case 228: /* create_col_list: create_definition  */
#line 841 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3268 "evoparser.tab.c"
    break;

  case 229: /* create_col_list: create_col_list ',' create_definition  */
#line 842 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3274 "evoparser.tab.c"
    break;

  case 230: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 845 "evoparser.y"
                                                                                { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3280 "evoparser.tab.c"
    break;

  case 231: /* create_definition: KEY '(' column_list ')'  */
#line 846 "evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3286 "evoparser.tab.c"
    break;

  case 232: /* create_definition: INDEX '(' column_list ')'  */
#line 847 "evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3292 "evoparser.tab.c"
    break;

  case 233: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 848 "evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3298 "evoparser.tab.c"
    break;

  case 234: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 849 "evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3304 "evoparser.tab.c"
    break;

  case 235: /* $@1: %empty  */
#line 852 "evoparser.y"
                                                                                { emit("STARTCOL"); }
#line 3310 "evoparser.tab.c"
    break;

  case 236: /* create_definition: $@1 NAME data_type column_atts  */
#line 854 "evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval));
        GetColumnNames((yyvsp[-2].strval));
        GetColumnSize((yyvsp[-1].intval));
        free((yyvsp[-2].strval));
    }
#line 3321 "evoparser.tab.c"
    break;

  case 237: /* column_atts: %empty  */
#line 862 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3327 "evoparser.tab.c"
    break;

  case 238: /* column_atts: column_atts NOT NULLX  */
#line 863 "evoparser.y"
                                                                                { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3333 "evoparser.tab.c"
    break;

  case 240: /* column_atts: column_atts DEFAULT STRING  */
#line 865 "evoparser.y"
                                                                                { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3339 "evoparser.tab.c"
    break;

  case 241: /* column_atts: column_atts DEFAULT INTNUM  */
#line 866 "evoparser.y"
                                                                                { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3345 "evoparser.tab.c"
    break;

  case 242: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 867 "evoparser.y"
                                                                                { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3351 "evoparser.tab.c"
    break;

  case 243: /* column_atts: column_atts DEFAULT BOOL  */
#line 868 "evoparser.y"
                                                                                { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3357 "evoparser.tab.c"
    break;

  case 244: /* column_atts: column_atts AUTO_INCREMENT  */
#line 869 "evoparser.y"
                                                                                { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3363 "evoparser.tab.c"
    break;

  case 245: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 870 "evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3369 "evoparser.tab.c"
    break;

  case 246: /* column_atts: column_atts UNIQUE KEY  */
#line 871 "evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3375 "evoparser.tab.c"
    break;

  case 247: /* column_atts: column_atts PRIMARY KEY  */
#line 872 "evoparser.y"
                                                                                { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3381 "evoparser.tab.c"
    break;

  case 248: /* column_atts: column_atts KEY  */
#line 873 "evoparser.y"
                                                                                { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3387 "evoparser.tab.c"
    break;

  case 249: /* column_atts: column_atts COMMENT STRING  */
#line 874 "evoparser.y"
                                                                                { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3393 "evoparser.tab.c"
    break;

  case 250: /* opt_length: %empty  */
#line 877 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3399 "evoparser.tab.c"
    break;

  case 251: /* opt_length: '(' INTNUM ')'  */
#line 878 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval); }
#line 3405 "evoparser.tab.c"
    break;

  case 252: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 879 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3411 "evoparser.tab.c"
    break;

  case 253: /* opt_binary: %empty  */
#line 882 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3417 "evoparser.tab.c"
    break;

  case 254: /* opt_binary: BINARY  */
#line 883 "evoparser.y"
                                                                                { (yyval.intval) = 4000; }
#line 3423 "evoparser.tab.c"
    break;

  case 255: /* opt_uz: %empty  */
#line 886 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3429 "evoparser.tab.c"
    break;

  case 256: /* opt_uz: opt_uz UNSIGNED  */
#line 887 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3435 "evoparser.tab.c"
    break;

  case 257: /* opt_uz: opt_uz ZEROFILL  */
#line 888 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3441 "evoparser.tab.c"
    break;

  case 259: /* opt_csc: opt_csc CHAR SET STRING  */
#line 892 "evoparser.y"
                                                                                { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3447 "evoparser.tab.c"
    break;

  case 260: /* opt_csc: opt_csc COLLATE STRING  */
#line 893 "evoparser.y"
                                                                                { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3453 "evoparser.tab.c"
    break;

  case 261: /* data_type: BIT opt_length  */
#line 897 "evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3459 "evoparser.tab.c"
    break;

  case 262: /* data_type: TINYINT opt_length opt_uz  */
#line 898 "evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3465 "evoparser.tab.c"
    break;

  case 263: /* data_type: SMALLINT opt_length opt_uz  */
#line 899 "evoparser.y"
                                                                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3471 "evoparser.tab.c"
    break;

  case 264: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 900 "evoparser.y"
                                                                                { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3477 "evoparser.tab.c"
    break;

  case 265: /* data_type: INT opt_length opt_uz  */
#line 901 "evoparser.y"
                                                                                { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3483 "evoparser.tab.c"
    break;

  case 266: /* data_type: INTEGER opt_length opt_uz  */
#line 902 "evoparser.y"
                                                                                { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3489 "evoparser.tab.c"
    break;

  case 267: /* data_type: BIGINT opt_length opt_uz  */
#line 903 "evoparser.y"
                                                                                { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3495 "evoparser.tab.c"
    break;

  case 268: /* data_type: REAL opt_length opt_uz  */
#line 904 "evoparser.y"
                                                                                { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3501 "evoparser.tab.c"
    break;

  case 269: /* data_type: DOUBLE opt_length opt_uz  */
#line 905 "evoparser.y"
                                                                                { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3507 "evoparser.tab.c"
    break;

  case 270: /* data_type: FLOAT opt_length opt_uz  */
#line 906 "evoparser.y"
                                                                                { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3513 "evoparser.tab.c"
    break;

  case 271: /* data_type: DECIMAL opt_length opt_uz  */
#line 907 "evoparser.y"
                                                                                { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3519 "evoparser.tab.c"
    break;

  case 272: /* data_type: DATE  */
#line 908 "evoparser.y"
                                                                                { (yyval.intval) = 100001; }
#line 3525 "evoparser.tab.c"
    break;

  case 273: /* data_type: TIME  */
#line 909 "evoparser.y"
                                                                                { (yyval.intval) = 100002; }
#line 3531 "evoparser.tab.c"
    break;

  case 274: /* data_type: TIMESTAMP  */
#line 910 "evoparser.y"
                                                                                { (yyval.intval) = 100003; }
#line 3537 "evoparser.tab.c"
    break;

  case 275: /* data_type: DATETIME  */
#line 911 "evoparser.y"
                                                                                { (yyval.intval) = 100004; }
#line 3543 "evoparser.tab.c"
    break;

  case 276: /* data_type: YEAR  */
#line 912 "evoparser.y"
                                                                                { (yyval.intval) = 100005; }
#line 3549 "evoparser.tab.c"
    break;

  case 277: /* data_type: CHAR opt_length opt_csc  */
#line 913 "evoparser.y"
                                                                                { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3555 "evoparser.tab.c"
    break;

  case 278: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 914 "evoparser.y"
                                                                                { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3561 "evoparser.tab.c"
    break;

  case 279: /* data_type: BINARY opt_length  */
#line 915 "evoparser.y"
                                                                                { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3567 "evoparser.tab.c"
    break;

  case 280: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 916 "evoparser.y"
                                                                                { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3573 "evoparser.tab.c"
    break;

  case 281: /* data_type: TINYBLOB  */
#line 917 "evoparser.y"
                                                                                { (yyval.intval) = 160001; }
#line 3579 "evoparser.tab.c"
    break;

  case 282: /* data_type: BLOB  */
#line 918 "evoparser.y"
                                                                                { (yyval.intval) = 160002; }
#line 3585 "evoparser.tab.c"
    break;

  case 283: /* data_type: MEDIUMBLOB  */
#line 919 "evoparser.y"
                                                                                { (yyval.intval) = 160003; }
#line 3591 "evoparser.tab.c"
    break;

  case 284: /* data_type: LONGBLOB  */
#line 920 "evoparser.y"
                                                                                { (yyval.intval) = 160004; }
#line 3597 "evoparser.tab.c"
    break;

  case 285: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 921 "evoparser.y"
                                                                                { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3603 "evoparser.tab.c"
    break;

  case 286: /* data_type: TEXT opt_binary opt_csc  */
#line 922 "evoparser.y"
                                                                                { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3609 "evoparser.tab.c"
    break;

  case 287: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 923 "evoparser.y"
                                                                                { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3615 "evoparser.tab.c"
    break;

  case 288: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 924 "evoparser.y"
                                                                                { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3621 "evoparser.tab.c"
    break;

  case 289: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 925 "evoparser.y"
                                                                                { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3627 "evoparser.tab.c"
    break;

  case 290: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 926 "evoparser.y"
                                                                                { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3633 "evoparser.tab.c"
    break;

  case 291: /* enum_list: STRING  */
#line 929 "evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3639 "evoparser.tab.c"
    break;

  case 292: /* enum_list: enum_list ',' STRING  */
#line 930 "evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3645 "evoparser.tab.c"
    break;

  case 293: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 934 "evoparser.y"
                                                                                { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3651 "evoparser.tab.c"
    break;

  case 294: /* opt_ignore_replace: %empty  */
#line 937 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3657 "evoparser.tab.c"
    break;

  case 295: /* opt_ignore_replace: IGNORE  */
#line 938 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3663 "evoparser.tab.c"
    break;

  case 296: /* opt_ignore_replace: REPLACE  */
#line 939 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 3669 "evoparser.tab.c"
    break;

  case 297: /* stmt: set_stmt  */
#line 943 "evoparser.y"
                                                                                { emit("STMT"); }
#line 3675 "evoparser.tab.c"
    break;

  case 301: /* set_expr: USERVAR COMPARISON expr  */
#line 949 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; } emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3681 "evoparser.tab.c"
    break;

  case 302: /* set_expr: USERVAR ASSIGN expr  */
#line 950 "evoparser.y"
                                                                                { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3687 "evoparser.tab.c"
    break;


#line 3691 "evoparser.tab.c"

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

#line 953 "evoparser.y"

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
