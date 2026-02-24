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
#define YYLAST   1430

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  302
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  623

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
     448,   448,   449,   452,   453,   456,   457,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   471,   472,   473,   480,
     481,   482,   483,   486,   487,   490,   491,   495,   501,   502,
     503,   506,   507,   511,   513,   515,   517,   519,   523,   524,
     525,   528,   529,   532,   533,   536,   537,   538,   541,   542,
     545,   546,   550,   552,   554,   556,   559,   560,   563,   564,
     567,   571,   579,   587,   588,   589,   590,   594,   597,   598,
     601,   601,   603,   607,   614,   623,   630,   638,   645,   653,
     654,   657,   658,   659,   660,   661,   664,   664,   667,   668,
     671,   672,   675,   676,   677,   678,   681,   685,   686,   687,
     688,   694,   697,   703,   708,   714,   720,   727,   728,   729,
     733,   744,   755,   766,   780,   784,   785,   788,   789,   793,
     800,   809,   813,   818,   822,   827,   831,   832,   835,   836,
     839,   840,   841,   842,   843,   846,   846,   856,   857,   858,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     871,   872,   873,   876,   877,   880,   881,   882,   885,   886,
     887,   891,   892,   893,   894,   895,   896,   897,   898,   899,
     900,   901,   902,   903,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     920,   923,   924,   927,   931,   932,   933,   937,   940,   941,
     941,   943,   944
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

#define YYPACT_NINF (-383)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-222)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     201,    16,  -383,   -52,  -383,  -383,    75,  -383,     6,    17,
     144,    31,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,   114,   114,  -383,    89,    74,   220,   127,   127,
     173,    65,  -383,   304,   230,    -7,    18,  -383,   201,    83,
     236,   238,   114,    85,   243,  -383,  -383,  -383,   -37,  -383,
    -383,  -383,  -383,  -383,  -383,   247,   260,   659,   659,    75,
     108,  -383,  -383,  -383,  -383,   245,   659,   659,   659,  -383,
    -383,  -383,   252,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,   105,   112,   115,   118,   120,   122,  1284,   -36,
    -383,  -383,    19,    20,    27,    10,   -78,   386,  -383,  -383,
     246,  -383,  -383,  -383,  -383,   285,   280,  -383,    90,   -97,
      18,   290,   -99,   -67,  1343,  1343,  -383,   294,   659,   659,
    1032,  1032,  -383,   659,   923,    -6,   174,   659,   191,   659,
     659,   365,  -383,   659,   659,   659,   142,    25,   659,   659,
     300,   659,    11,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   325,  -383,    18,   659,   334,   -38,   193,
     128,   363,    18,  -383,  -383,  -383,    58,  -383,    18,   289,
     302,  -383,   395,    42,  -383,   659,   333,    18,    30,    85,
     412,   442,   330,   412,   -72,  -383,   726,  -383,   314,  1343,
     992,     0,  -383,   659,   659,   315,   626,   316,  -383,  -383,
    -383,   319,   659,   747,   770,   321,   849,  1363,  1382,   699,
     445,  -383,    26,  -383,  1400,  1400,   323,   659,   659,  1314,
     324,   327,   328,   174,   780,   663,   512,   351,   305,   305,
     459,   459,   459,   459,  -383,  -383,    30,  -383,    50,   394,
     397,   399,  -383,  -383,  -383,   -11,    60,   386,   302,   302,
     403,   390,    18,  -383,   405,  -383,  -383,  -383,   498,   175,
    -383,   246,  1343,   462,   404,    30,  -383,  -383,   484,    28,
    -383,   158,   346,    28,   346,   400,   659,  -383,   659,  -383,
     659,  1199,  1013,  -383,   659,  -383,  -383,  1178,   414,   414,
    -383,  -383,   354,   362,  -383,  -383,   445,  1400,  1400,   659,
     174,   174,   174,   364,   434,   -38,   447,   447,   447,   659,
     521,   525,   333,  -383,  -383,    18,   659,    34,    18,   -32,
      92,   392,   406,   468,   162,  -383,   554,   174,   659,   659,
    -383,  -383,   461,   469,   571,  -383,  -383,   573,   526,    41,
    -383,    41,  -383,  -383,  1343,  1220,  -383,   659,   828,   659,
     659,   418,   419,  -383,  -383,   426,   428,   950,   429,   443,
     444,  -383,   565,   522,  -383,   514,   450,   451,   452,  1343,
     599,    -9,   404,  -383,  1343,   659,   460,  -383,  -383,    34,
     175,  -383,   463,   465,   442,   442,   466,   -29,   175,  1038,
    -383,  1254,   470,   807,  -383,  1343,   483,   602,  -383,  -383,
    1343,   179,   471,  -383,  -383,  -383,  1343,   659,  -383,   467,
     900,  -383,  -383,  -383,  -383,  -383,  -383,  -383,   659,   659,
     333,  -383,   630,   630,   630,   659,   659,   631,  -383,  1343,
     442,  -383,   200,   442,   442,   203,   227,   442,  -383,  -383,
    -383,   475,   475,   475,   475,   475,  -383,   475,  -383,   497,
     475,   475,   475,   616,  -383,   616,  -383,   475,   475,   475,
     499,   616,   475,   616,  -383,  -383,  -383,   500,   501,  -383,
    -383,  -383,  -383,  -383,   659,   659,   412,   542,  -383,   578,
     526,   870,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,    52,  1343,   404,  -383,   233,   235,   239,  1343,
    1343,   648,   241,   -18,   251,   257,  -383,  -383,   259,   664,
    -383,  -383,  -383,  -383,  -383,  -383,   666,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,   666,  -383,  -383,  -383,
     667,   668,  1027,  1254,  1343,   509,  -383,  1343,  -383,  1343,
     262,  -383,   559,  -383,   583,  -383,   697,  -383,  -383,   659,
    -383,  -383,  -383,  -383,  -383,   267,    78,   377,    78,    78,
    -383,   271,    78,    78,    78,   377,   377,    78,    78,    78,
     274,   377,    78,   377,   540,   541,   597,  -383,   702,   353,
    -383,  -383,   611,   -53,  -383,  -383,  -383,   442,  -383,  -383,
    1343,  -383,   704,  -383,  -383,   592,   740,  -383,   761,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
     442,   617,   685,   774,  -383,   377,  -383,   377,   377,   276,
    -383,  -383,  -383
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
     293,    91,    99,   101,   198,   197,     0,     0,   106,   193,
     192,     0,     0,   178,   202,    70,    74,     0,    51,     0,
       0,    58,    59,    43,    45,    31,    29,    30,     0,     0,
      98,   156,     0,     0,     0,     0,     0,     0,   206,   150,
       0,   136,     0,     0,     0,     0,     0,     0,   222,   229,
     282,   250,   250,   250,   250,   250,   275,   250,   272,     0,
     250,   250,   250,   253,   284,   253,   283,   250,   250,   250,
       0,   253,   250,   253,   274,   281,   273,     0,     0,   276,
     237,    92,    93,    89,     0,     0,     0,     0,   190,     0,
       0,     0,    54,    60,    61,    62,    63,    67,    66,    68,
      65,    64,    94,    97,   100,   158,     0,     0,     0,   211,
     212,     0,     0,   294,     0,     0,   232,   231,     0,     0,
     279,   255,   261,   258,   255,   255,     0,   255,   255,   255,
     254,   258,   258,   255,   255,   255,     0,   258,   255,   258,
       0,     0,   236,    91,   102,   180,   200,   199,   195,   194,
       0,    52,     0,    88,   103,   154,     0,   153,   152,     0,
     151,   224,   233,   234,   230,     0,   267,   277,   269,   271,
     291,     0,   270,   266,   265,   288,   287,   264,   268,   263,
       0,   285,   262,   286,     0,     0,     0,   244,     0,     0,
     248,   239,     0,     0,    90,   191,    95,     0,    84,   159,
     213,   251,     0,   256,   257,     0,     0,   258,     0,   258,
     258,   280,   238,   249,   240,   241,   243,   242,   247,   246,
       0,   104,     0,     0,   260,   289,   292,   290,   278,     0,
     252,   259,   245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -383,   787,   -33,  -123,  -383,  -383,   612,   743,  -383,   -89,
    -109,  -383,   485,   369,  -383,  -383,  -300,  -345,  -383,  -382,
    -383,  -383,   748,   -84,   -31,   744,  -160,   644,  -383,  -383,
     206,  -383,  -383,  -383,   529,   613,   132,    48,  -383,  -383,
    -383,   887,   762,  -383,  -383,  -383,   -55,    73,   925,   842,
     682,   479,  -182,  -383,  -383,  -383,  -383,  -383,    80,  -383,
    -383,   580,   575,  -383,  -383,   111,  -231,   473,  -248,  -383,
     435,  -312,  -383,  -383,  -383,   906
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    10,   186,   187,   188,   202,   351,   125,    11,    12,
     176,   363,   392,   473,   543,   420,   264,   330,   588,   271,
      33,    89,    90,   154,    96,    97,    98,   172,    99,   169,
     254,   170,   250,   377,   378,   242,   366,   496,   100,    13,
      26,    48,   107,    14,    15,    16,   335,    28,    55,   182,
     339,   401,   269,    17,    18,    36,   246,    19,    40,    20,
      25,   324,   325,   326,   532,   510,   521,   556,   557,   470,
     561,   260,   261,    21,    31,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,   273,   435,   436,   197,   201,   159,   381,   251,   309,
     158,   426,   372,    94,    60,    61,    62,    63,    64,    65,
    -207,    94,  -209,  -208,   114,   115,   180,   428,    66,    67,
     132,   211,   294,   120,   121,   122,    68,   195,   239,   124,
     110,   155,   212,   609,   177,   220,   221,   161,   502,    50,
     240,   504,   505,   132,     7,   508,   256,    71,   183,   256,
      72,   181,    73,    74,   160,   111,   153,   192,   193,   266,
     256,    22,   274,   279,   280,   438,    51,    43,    29,   178,
      27,    92,    35,    30,   162,   257,   189,   292,   257,   153,
     190,    93,   317,   181,   196,   275,   203,   204,   206,   257,
     207,   208,   209,    41,   241,   214,   215,   610,   219,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     494,   293,   105,    88,   236,   111,   156,   304,   380,  -220,
     256,   222,   213,   295,   303,    23,     7,   312,    34,   333,
    -221,   194,   262,   375,    37,    24,   265,   194,   310,   544,
     427,    44,   333,   343,   305,   373,   331,   248,   379,   257,
     281,   282,    45,    82,    83,    84,    85,    86,    87,   287,
      95,   223,    46,   355,   249,   376,   175,  -207,    95,  -209,
    -208,   382,    57,    50,   297,   298,   157,    47,   383,    38,
     334,   551,   162,    58,    60,    61,    62,    63,    64,    65,
     542,   258,   259,   402,    39,   611,   175,   356,    66,    67,
      51,   358,   359,   360,   474,    52,    68,   593,   340,    53,
     342,    42,   311,    49,   522,    54,   409,    59,   619,   594,
     527,  -170,   529,    91,   198,   102,   175,    71,   390,   103,
      72,   104,    73,    74,   106,   344,   108,   345,     1,   106,
     112,   348,  -170,   320,   119,    60,    61,    62,    63,    64,
      65,     2,     3,   113,   321,   126,   357,   117,   118,    66,
      67,   322,   127,   565,   566,   128,   369,    68,   129,   571,
     130,   573,   131,   374,   403,   171,   404,   323,   173,   244,
     162,   199,     4,   179,   535,   391,   393,   185,    71,   395,
       7,    72,   210,    73,    74,   400,   174,    60,    61,    62,
      63,    64,    65,   216,   406,   217,   218,   410,     5,   336,
     337,    66,    67,   387,   388,   200,     6,     7,   235,    68,
      69,   148,   149,   150,   151,   152,     8,   238,    70,     9,
     478,   479,   429,    82,    83,    84,    85,    86,    87,   615,
      71,   617,   618,    72,   243,    73,    74,   604,   605,   606,
     607,   503,   388,    75,   506,   337,   245,    76,    60,    61,
      62,    63,    64,    65,   481,   146,   147,   148,   149,   150,
     151,   152,    66,    67,   252,   391,   493,    77,   507,   337,
      68,   205,   499,   500,   545,   546,   547,   546,   255,   123,
     548,   546,   550,   337,    82,    83,    84,    85,    86,    87,
     253,    71,   552,   337,    72,   268,    73,    74,   553,   337,
     554,   337,    78,   585,   479,    79,    80,    81,   591,   592,
     595,   596,   597,   598,   163,   599,   598,   622,   337,   367,
     368,   533,   534,   263,   537,   270,   539,   400,    60,    61,
      62,    63,    64,    65,   313,   314,    82,    83,    84,    85,
      86,    87,    66,    67,    60,    61,    62,    63,    64,    65,
      68,   497,   498,   164,   272,   277,   283,   285,    66,    67,
     286,  -138,   290,   296,   300,   165,    68,   301,   302,   152,
     306,    71,   166,   307,    72,   308,    73,    74,   315,   316,
     318,   319,   167,   328,   332,   329,   338,    71,   350,   168,
      72,   333,    73,    74,   362,   353,   590,    82,    83,    84,
      85,    86,    87,   354,   370,   361,   365,   394,   371,    60,
      61,    62,    63,    64,    65,   145,   146,   147,   148,   149,
     150,   151,   152,    66,    67,    60,    61,    62,    63,    64,
      65,    68,   384,   511,   512,   513,   514,   389,   515,    66,
      67,   517,   518,   519,   386,   396,   385,    68,   523,   524,
     525,     7,    71,   528,   397,    72,   398,    73,    74,   411,
     412,    60,    61,    62,    63,    64,    65,   413,    71,   414,
     415,    72,   399,    73,    74,    66,    67,    82,    83,    84,
      85,    86,    87,    68,   416,   417,   418,   419,   536,   421,
     422,   423,   424,    82,    83,    84,    85,    86,    87,   425,
     430,   476,   477,   433,    71,   434,   437,    72,   482,    73,
      74,   480,   474,   495,   501,   509,   133,   134,   135,   136,
     137,   138,   139,   140,   538,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   516,   520,   526,
     530,   531,    60,    61,    62,    63,    64,    65,   549,   555,
     560,   334,   574,   575,   586,   587,    66,    67,    82,    83,
      84,    85,    86,    87,    68,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    82,    83,    84,    85,    86,    87,
     589,   600,   601,   284,   602,    71,   603,   608,    72,   612,
      73,    74,   136,   137,   138,   139,   140,   613,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      82,    83,    84,    85,    86,    87,   133,   134,   135,   136,
     137,   138,   139,   140,   614,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   133,   134,   135,
     136,   137,   138,   139,   140,   616,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   621,   337,
     133,   134,   135,   136,   137,   138,   139,   140,   276,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    82,    83,    84,    85,    86,    87,   133,   134,   135,
     136,   137,   138,   139,   140,   101,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   133,   134,
     135,   136,   137,   138,   139,   140,   620,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   133,
     134,   135,   136,   137,   138,   139,   140,   191,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     133,   134,   135,   136,   137,   138,   139,   140,   276,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   352,   584,   492,   237,   327,   247,   407,   431,   288,
     133,   134,   135,   136,   137,   138,   139,   140,   364,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   109,   289,   133,   134,   135,   136,   137,   138,   139,
     140,   267,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    56,   184,   341,   483,   484,   540,
     432,   570,   485,   439,   486,   116,     0,     0,     0,   475,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   487,   488,     0,   489,     0,     0,   558,   559,   408,
     562,   563,   564,     0,     0,     0,   567,   568,   569,     0,
       0,   572,   133,   134,   135,   136,   137,   138,   139,   140,
     291,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   133,   134,   135,   136,   137,   138,   139,
     140,   541,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   576,     0,     0,     0,     0,   490,
     491,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   577,     0,     0,     0,     0,     0,     0,
     123,     0,     0,     0,     0,     0,     0,   578,   440,     0,
     441,     0,   442,   443,     0,     0,     0,     0,     0,     0,
       0,   444,     0,   579,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   445,   446,   447,   448,     0,
     449,     0,     0,   450,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   580,   451,   278,     0,     0,     0,     0,
       0,   452,     0,     0,   581,   453,     0,     0,     0,   582,
     454,   455,   456,   457,     0,     0,   347,     0,     0,     0,
       0,     0,   458,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   459,   460,     0,   461,   462,   583,   463,   464,
       0,     0,     0,     0,   465,   466,     0,     0,     0,     0,
       0,   467,     0,   468,     0,     0,     0,   469,   133,   134,
     135,   136,   137,   138,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   133,
     134,   135,   136,   137,   138,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     133,   134,   135,   136,   137,   138,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     0,     0,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   346,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,     0,     0,   132,     0,     0,
       0,   471,     0,   405,   133,   134,   135,   136,   137,   138,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,     0,     0,     0,     0,   472,
       0,     0,     0,   153,   133,   134,   135,   136,   137,   138,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,     0,     0,     0,     0,     0,
       0,     0,   299,   133,   134,   135,   136,   137,   138,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   134,   135,   136,   137,   138,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   135,   136,   137,   138,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,  -222,  -222,  -222,  -222,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152
};

static const yytype_int16 yycheck[] =
{
      33,   183,   384,   385,   127,   128,    95,   319,   168,    20,
      94,    20,   312,     3,     3,     4,     5,     6,     7,     8,
       3,     3,     3,     3,    57,    58,   125,   372,    17,    18,
       3,     6,     6,    66,    67,    68,    25,   126,    76,    72,
      77,    77,    17,    96,   141,    34,    35,   125,   430,    56,
      88,   433,   434,     3,   126,   437,    88,    46,   125,    88,
      49,   160,    51,    52,    95,   162,    39,    73,    74,   178,
      88,    55,   144,    73,    74,   387,    83,     3,     5,   110,
     132,    88,     9,     8,   162,   117,   119,   210,   117,    39,
     123,    98,   252,   160,   127,   184,   129,   130,   131,   117,
     133,   134,   135,    23,   142,   138,   139,   160,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     420,   210,    42,   156,   155,   162,   162,   236,   160,   158,
      88,   120,   107,   107,   223,   119,   126,   246,   132,   111,
     158,   147,   175,   109,     0,   129,   177,   147,   159,   494,
     159,    77,   111,   276,   238,   315,   265,    99,   318,   117,
     193,   194,    88,   152,   153,   154,   155,   156,   157,   202,
     160,   160,    98,   296,   116,   141,   146,   160,   160,   160,
     160,    89,     9,    56,   217,   218,   159,   113,    96,   158,
     162,   503,   162,    20,     3,     4,     5,     6,     7,     8,
     148,   159,   160,   162,    90,   587,   146,   296,    17,    18,
      83,   300,   301,   302,   162,    88,    25,   139,   273,    92,
     275,   132,   162,     3,   455,    98,   349,   162,   610,   151,
     461,   141,   463,     3,    43,   152,   146,    46,   327,     3,
      49,     3,    51,    52,   159,   278,     3,   280,    47,   159,
       3,   284,   162,    78,     9,     3,     4,     5,     6,     7,
       8,    60,    61,     3,    89,   160,   299,   159,   160,    17,
      18,    96,   160,   521,   522,   160,   309,    25,   160,   527,
     160,   529,   160,   316,   339,    39,   341,   112,     3,   161,
     162,   100,    91,     3,   476,   328,   329,     3,    46,   332,
     126,    49,   160,    51,    52,   338,    26,     3,     4,     5,
       6,     7,     8,    13,   347,    15,    16,   350,   117,   161,
     162,    17,    18,   161,   162,   134,   125,   126,     3,    25,
      26,    26,    27,    28,    29,    30,   135,     3,    34,   138,
     161,   162,   375,   152,   153,   154,   155,   156,   157,   597,
      46,   599,   600,    49,   161,    51,    52,     4,     5,     6,
       7,   161,   162,    59,   161,   162,     3,    63,     3,     4,
       5,     6,     7,     8,   407,    24,    25,    26,    27,    28,
      29,    30,    17,    18,    95,   418,   419,    83,   161,   162,
      25,    26,   425,   426,   161,   162,   161,   162,     3,   147,
     161,   162,   161,   162,   152,   153,   154,   155,   156,   157,
     108,    46,   161,   162,    49,     3,    51,    52,   161,   162,
     161,   162,   118,   161,   162,   121,   122,   123,   161,   162,
      53,    54,   161,   162,    48,   161,   162,   161,   162,   307,
     308,   474,   475,   110,   477,     3,   479,   480,     3,     4,
       5,     6,     7,     8,   248,   249,   152,   153,   154,   155,
     156,   157,    17,    18,     3,     4,     5,     6,     7,     8,
      25,   423,   424,    87,   144,   161,   161,   161,    17,    18,
     161,    95,   161,   160,   160,    99,    25,   160,   160,    30,
      96,    46,   106,    96,    49,    96,    51,    52,    95,   109,
      95,     3,   116,    41,    20,   101,   160,    46,    94,   123,
      49,   111,    51,    52,    80,   161,   549,   152,   153,   154,
     155,   156,   157,   161,     3,   161,    79,    66,     3,     3,
       4,     5,     6,     7,     8,    23,    24,    25,    26,    27,
      28,    29,    30,    17,    18,     3,     4,     5,     6,     7,
       8,    25,   160,   442,   443,   444,   445,     3,   447,    17,
      18,   450,   451,   452,    96,    96,   160,    25,   457,   458,
     459,   126,    46,   462,     3,    49,     3,    51,    52,   161,
     161,     3,     4,     5,     6,     7,     8,   161,    46,   161,
     161,    49,    66,    51,    52,    17,    18,   152,   153,   154,
     155,   156,   157,    25,   161,   161,    41,    85,    66,    95,
     160,   160,   160,   152,   153,   154,   155,   156,   157,    20,
     160,   138,    20,   160,    46,   160,   160,    49,   161,    51,
      52,   160,   162,     3,     3,   160,    10,    11,    12,    13,
      14,    15,    16,    17,    66,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   160,    42,   160,
     160,   160,     3,     4,     5,     6,     7,     8,    20,     5,
       4,   162,     5,     5,   115,    92,    17,    18,   152,   153,
     154,   155,   156,   157,    25,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   152,   153,   154,   155,   156,   157,
       3,   161,   161,    77,   107,    46,     4,    96,    49,     5,
      51,    52,    13,    14,    15,    16,    17,   125,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     152,   153,   154,   155,   156,   157,    10,    11,    12,    13,
      14,    15,    16,    17,     4,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    17,     4,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     4,   162,
      10,    11,    12,    13,    14,    15,    16,    17,   162,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   152,   153,   154,   155,   156,   157,    10,    11,    12,
      13,    14,    15,    16,    17,    38,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,   161,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,   124,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    17,   162,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   289,   533,   418,   156,   261,   162,    79,   379,   162,
      10,    11,    12,    13,    14,    15,    16,    17,   305,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    44,   162,    10,    11,    12,    13,    14,    15,    16,
      17,   179,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    29,   113,   274,    57,    58,   480,
     380,   526,    62,   388,    64,    59,    -1,    -1,    -1,   162,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    81,    82,    -1,    84,    -1,    -1,   514,   515,   161,
     517,   518,   519,    -1,    -1,    -1,   523,   524,   525,    -1,
      -1,   528,    10,    11,    12,    13,    14,    15,    16,    17,
     161,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      17,   161,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    17,    -1,    -1,    -1,    -1,   149,
     150,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    36,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    50,    40,    -1,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    86,   133,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,   107,    97,    -1,    -1,    -1,   112,
     102,   103,   104,   105,    -1,    -1,   133,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,    -1,   127,   128,   140,   130,   131,
      -1,    -1,    -1,    -1,   136,   137,    -1,    -1,    -1,    -1,
      -1,   143,    -1,   145,    -1,    -1,    -1,   149,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    73,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,     3,    -1,    -1,
      -1,    37,    -1,    73,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    39,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    12,    13,    14,    15,    16,    17,
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
     172,   165,   175,   165,    66,   165,    96,     3,     3,    66,
     165,   214,   162,   209,   209,    73,   165,    79,   161,   166,
     165,   161,   161,   161,   161,   161,   161,   161,    41,    85,
     178,    95,   160,   160,   160,    20,    20,   159,   180,   165,
     160,   197,   224,   160,   160,   182,   182,   160,   234,   225,
      40,    42,    44,    45,    53,    67,    68,    69,    70,    72,
      75,    86,    93,    97,   102,   103,   104,   105,   114,   124,
     125,   127,   128,   130,   131,   136,   137,   143,   145,   149,
     232,    37,    65,   176,   162,   162,   138,    20,   161,   162,
     160,   165,   161,    57,    58,    62,    64,    81,    82,    84,
     149,   150,   175,   165,   179,     3,   200,   200,   200,   165,
     165,     3,   182,   161,   182,   182,   161,   161,   182,   160,
     228,   228,   228,   228,   228,   228,   160,   228,   228,   228,
      42,   229,   229,   228,   228,   228,   160,   229,   228,   229,
     160,   160,   227,   165,   165,   215,    66,   165,    66,   165,
     214,   161,   148,   177,   180,   161,   162,   161,   161,    20,
     161,   234,   161,   161,   161,     5,   230,   231,   230,   230,
       4,   233,   230,   230,   230,   231,   231,   230,   230,   230,
     233,   231,   230,   231,     5,     5,    17,    36,    50,    66,
      96,   107,   112,   140,   176,   161,   115,    92,   181,     3,
     165,   161,   162,   139,   151,    53,    54,   161,   162,   161,
     161,   161,   107,     4,     4,     5,     6,     7,    96,    96,
     160,   182,     5,   125,     4,   231,     4,   231,   231,   182,
     161,     4,   161
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
       4,     0,     1,     1,     0,     2,     0,     2,     0,     3,
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
#line 1932 "evoparser.tab.c"
    break;

  case 5: /* expr: NAME '.' NAME  */
#line 251 "evoparser.y"
                                                                                { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 1938 "evoparser.tab.c"
    break;

  case 6: /* expr: USERVAR  */
#line 252 "evoparser.y"
                                                                                { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 1944 "evoparser.tab.c"
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
#line 1964 "evoparser.tab.c"
    break;

  case 8: /* expr: INTNUM  */
#line 270 "evoparser.y"
    {
        emit("NUMBER %d", (yyvsp[0].intval));
        char buf[32];
        sprintf(buf, "%d", (yyvsp[0].intval));
        GetInsertions(buf);
    }
#line 1975 "evoparser.tab.c"
    break;

  case 9: /* expr: APPROXNUM  */
#line 277 "evoparser.y"
    {
        emit("FLOAT %g", (yyvsp[0].floatval));
        char buf[64];
        sprintf(buf, "%g", (yyvsp[0].floatval));
        GetInsertions(buf);
    }
#line 1986 "evoparser.tab.c"
    break;

  case 10: /* expr: BOOL  */
#line 283 "evoparser.y"
                                                                                { emit("BOOL %d", (yyvsp[0].intval)); }
#line 1992 "evoparser.tab.c"
    break;

  case 11: /* expr: expr '+' expr  */
#line 286 "evoparser.y"
                                                                                { emit("ADD"); }
#line 1998 "evoparser.tab.c"
    break;

  case 12: /* expr: expr '-' expr  */
#line 287 "evoparser.y"
                                                                                { emit("SUB"); }
#line 2004 "evoparser.tab.c"
    break;

  case 13: /* expr: expr '*' expr  */
#line 288 "evoparser.y"
                                                                                { emit("MUL"); }
#line 2010 "evoparser.tab.c"
    break;

  case 14: /* expr: expr '/' expr  */
#line 289 "evoparser.y"
                                                                                { emit("DIV"); }
#line 2016 "evoparser.tab.c"
    break;

  case 15: /* expr: expr '%' expr  */
#line 290 "evoparser.y"
                                                                                { emit("MOD"); }
#line 2022 "evoparser.tab.c"
    break;

  case 16: /* expr: expr MOD expr  */
#line 291 "evoparser.y"
                                                                                { emit("MOD"); }
#line 2028 "evoparser.tab.c"
    break;

  case 17: /* expr: '-' expr  */
#line 292 "evoparser.y"
                                                                                { emit("NEG"); }
#line 2034 "evoparser.tab.c"
    break;

  case 18: /* expr: expr ANDOP expr  */
#line 293 "evoparser.y"
                                                                                { emit("AND"); }
#line 2040 "evoparser.tab.c"
    break;

  case 19: /* expr: expr OR expr  */
#line 294 "evoparser.y"
                                                                                { emit("OR"); }
#line 2046 "evoparser.tab.c"
    break;

  case 20: /* expr: expr XOR expr  */
#line 295 "evoparser.y"
                                                                                { emit("XOR"); }
#line 2052 "evoparser.tab.c"
    break;

  case 21: /* expr: expr '|' expr  */
#line 296 "evoparser.y"
                                                                                { emit("BITOR"); }
#line 2058 "evoparser.tab.c"
    break;

  case 22: /* expr: expr '&' expr  */
#line 297 "evoparser.y"
                                                                                { emit("BITAND"); }
#line 2064 "evoparser.tab.c"
    break;

  case 23: /* expr: expr '^' expr  */
#line 298 "evoparser.y"
                                                                                { emit("BITXOR"); }
#line 2070 "evoparser.tab.c"
    break;

  case 24: /* expr: expr SHIFT expr  */
#line 299 "evoparser.y"
                                                                                { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2076 "evoparser.tab.c"
    break;

  case 25: /* expr: NOT expr  */
#line 300 "evoparser.y"
                                                                                { emit("NOT"); }
#line 2082 "evoparser.tab.c"
    break;

  case 26: /* expr: '!' expr  */
#line 301 "evoparser.y"
                                                                                { emit("NOT"); }
#line 2088 "evoparser.tab.c"
    break;

  case 27: /* expr: expr COMPARISON expr  */
#line 303 "evoparser.y"
    {
        emit("CMP %d", (yyvsp[-1].subtok));
    }
#line 2096 "evoparser.tab.c"
    break;

  case 28: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 307 "evoparser.y"
                                                                                { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2102 "evoparser.tab.c"
    break;

  case 29: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 308 "evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2108 "evoparser.tab.c"
    break;

  case 30: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 309 "evoparser.y"
                                                                                { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2114 "evoparser.tab.c"
    break;

  case 31: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 310 "evoparser.y"
                                                                                { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2120 "evoparser.tab.c"
    break;

  case 32: /* expr: expr IS NULLX  */
#line 313 "evoparser.y"
                                                                                { emit("ISNULL"); }
#line 2126 "evoparser.tab.c"
    break;

  case 33: /* expr: expr IS NOT NULLX  */
#line 314 "evoparser.y"
                                                                                { emit("ISNULL"); emit("NOT"); }
#line 2132 "evoparser.tab.c"
    break;

  case 34: /* expr: expr IS BOOL  */
#line 315 "evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2138 "evoparser.tab.c"
    break;

  case 35: /* expr: expr IS NOT BOOL  */
#line 316 "evoparser.y"
                                                                                { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2144 "evoparser.tab.c"
    break;

  case 36: /* expr: USERVAR ASSIGN expr  */
#line 317 "evoparser.y"
                                                                                { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2150 "evoparser.tab.c"
    break;

  case 37: /* expr: expr BETWEEN expr AND expr  */
#line 320 "evoparser.y"
                                                                                { emit("BETWEEN"); }
#line 2156 "evoparser.tab.c"
    break;

  case 38: /* val_list: expr  */
#line 323 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2162 "evoparser.tab.c"
    break;

  case 39: /* val_list: expr ',' val_list  */
#line 324 "evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2168 "evoparser.tab.c"
    break;

  case 40: /* opt_val_list: %empty  */
#line 327 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2174 "evoparser.tab.c"
    break;

  case 42: /* expr: expr IN '(' val_list ')'  */
#line 331 "evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2180 "evoparser.tab.c"
    break;

  case 43: /* expr: expr NOT IN '(' val_list ')'  */
#line 332 "evoparser.y"
                                                                                { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2186 "evoparser.tab.c"
    break;

  case 44: /* expr: expr IN '(' select_stmt ')'  */
#line 333 "evoparser.y"
                                                                                { emit("CMPANYSELECT 4"); }
#line 2192 "evoparser.tab.c"
    break;

  case 45: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 334 "evoparser.y"
                                                                                { emit("CMPALLSELECT 3"); }
#line 2198 "evoparser.tab.c"
    break;

  case 46: /* expr: EXISTS '(' select_stmt ')'  */
#line 335 "evoparser.y"
                                                                                { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2204 "evoparser.tab.c"
    break;

  case 47: /* expr: NAME '(' opt_val_list ')'  */
#line 339 "evoparser.y"
                                                                                { emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2210 "evoparser.tab.c"
    break;

  case 48: /* expr: FCOUNT '(' '*' ')'  */
#line 343 "evoparser.y"
                                                                                { emit("COUNTALL"); }
#line 2216 "evoparser.tab.c"
    break;

  case 49: /* expr: FCOUNT '(' expr ')'  */
#line 344 "evoparser.y"
                                                                                { emit(" CALL 1 COUNT"); }
#line 2222 "evoparser.tab.c"
    break;

  case 50: /* expr: FSUBSTRING '(' val_list ')'  */
#line 346 "evoparser.y"
                                                                                { emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2228 "evoparser.tab.c"
    break;

  case 51: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 347 "evoparser.y"
                                                                                { emit("CALL 2 SUBSTR"); }
#line 2234 "evoparser.tab.c"
    break;

  case 52: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 348 "evoparser.y"
                                                                                { emit("CALL 3 SUBSTR"); }
#line 2240 "evoparser.tab.c"
    break;

  case 53: /* expr: FTRIM '(' val_list ')'  */
#line 349 "evoparser.y"
                                                                                { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2246 "evoparser.tab.c"
    break;

  case 54: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 350 "evoparser.y"
                                                                                { emit("CALL 3 TRIM"); }
#line 2252 "evoparser.tab.c"
    break;

  case 55: /* trim_ltb: LEADING  */
#line 353 "evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2258 "evoparser.tab.c"
    break;

  case 56: /* trim_ltb: TRAILING  */
#line 354 "evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2264 "evoparser.tab.c"
    break;

  case 57: /* trim_ltb: BOTH  */
#line 355 "evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2270 "evoparser.tab.c"
    break;

  case 58: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 358 "evoparser.y"
                                                                                { emit("CALL 3 DATE_ADD"); }
#line 2276 "evoparser.tab.c"
    break;

  case 59: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 359 "evoparser.y"
                                                                                { emit("CALL 3 DATE_SUB"); }
#line 2282 "evoparser.tab.c"
    break;

  case 60: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 362 "evoparser.y"
                                                                                { emit("NUMBER 1"); }
#line 2288 "evoparser.tab.c"
    break;

  case 61: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 363 "evoparser.y"
                                                                                { emit("NUMBER 2"); }
#line 2294 "evoparser.tab.c"
    break;

  case 62: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 364 "evoparser.y"
                                                                                { emit("NUMBER 3"); }
#line 2300 "evoparser.tab.c"
    break;

  case 63: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 365 "evoparser.y"
                                                                                { emit("NUMBER 4"); }
#line 2306 "evoparser.tab.c"
    break;

  case 64: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 366 "evoparser.y"
                                                                                { emit("NUMBER 5"); }
#line 2312 "evoparser.tab.c"
    break;

  case 65: /* interval_exp: INTERVAL expr YEAR  */
#line 367 "evoparser.y"
                                                                                { emit("NUMBER 6"); }
#line 2318 "evoparser.tab.c"
    break;

  case 66: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 368 "evoparser.y"
                                                                                { emit("NUMBER 7"); }
#line 2324 "evoparser.tab.c"
    break;

  case 67: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 369 "evoparser.y"
                                                                                { emit("NUMBER 8"); }
#line 2330 "evoparser.tab.c"
    break;

  case 68: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 370 "evoparser.y"
                                                                                { emit("NUMBER 9"); }
#line 2336 "evoparser.tab.c"
    break;

  case 69: /* expr: CASE expr case_list END  */
#line 373 "evoparser.y"
                                                                                { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2342 "evoparser.tab.c"
    break;

  case 70: /* expr: CASE expr case_list ELSE expr END  */
#line 374 "evoparser.y"
                                                                                { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2348 "evoparser.tab.c"
    break;

  case 71: /* expr: CASE case_list END  */
#line 375 "evoparser.y"
                                                                                { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2354 "evoparser.tab.c"
    break;

  case 72: /* expr: CASE case_list ELSE expr END  */
#line 376 "evoparser.y"
                                                                                { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2360 "evoparser.tab.c"
    break;

  case 73: /* case_list: WHEN expr THEN expr  */
#line 379 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2366 "evoparser.tab.c"
    break;

  case 74: /* case_list: case_list WHEN expr THEN expr  */
#line 380 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2372 "evoparser.tab.c"
    break;

  case 75: /* expr: expr LIKE expr  */
#line 383 "evoparser.y"
                                                                                { emit("LIKE"); }
#line 2378 "evoparser.tab.c"
    break;

  case 76: /* expr: expr NOT LIKE expr  */
#line 384 "evoparser.y"
                                                                                { emit("LIKE"); emit("NOT"); }
#line 2384 "evoparser.tab.c"
    break;

  case 77: /* expr: expr REGEXP expr  */
#line 387 "evoparser.y"
                                                                                { emit("REGEXP"); }
#line 2390 "evoparser.tab.c"
    break;

  case 78: /* expr: expr NOT REGEXP expr  */
#line 388 "evoparser.y"
                                                                                { emit("REGEXP"); emit("NOT"); }
#line 2396 "evoparser.tab.c"
    break;

  case 79: /* expr: CURRENT_TIMESTAMP  */
#line 391 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2402 "evoparser.tab.c"
    break;

  case 80: /* expr: CURRENT_DATE  */
#line 392 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2408 "evoparser.tab.c"
    break;

  case 81: /* expr: CURRENT_TIME  */
#line 393 "evoparser.y"
                                                                                { emit("NOW"); }
#line 2414 "evoparser.tab.c"
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
#line 2426 "evoparser.tab.c"
    break;

  case 83: /* select_stmt: SELECT select_opts select_expr_list  */
#line 407 "evoparser.y"
                                                                                { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2432 "evoparser.tab.c"
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
#line 2444 "evoparser.tab.c"
    break;

  case 86: /* opt_where: WHERE expr  */
#line 422 "evoparser.y"
                                                                                { emit("WHERE"); }
#line 2450 "evoparser.tab.c"
    break;

  case 88: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 424 "evoparser.y"
                                                                                { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2456 "evoparser.tab.c"
    break;

  case 89: /* groupby_list: expr opt_asc_desc  */
#line 427 "evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2462 "evoparser.tab.c"
    break;

  case 90: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 428 "evoparser.y"
                                                                                { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2468 "evoparser.tab.c"
    break;

  case 91: /* opt_asc_desc: %empty  */
#line 431 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2474 "evoparser.tab.c"
    break;

  case 92: /* opt_asc_desc: ASC  */
#line 432 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2480 "evoparser.tab.c"
    break;

  case 93: /* opt_asc_desc: DESC  */
#line 433 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2486 "evoparser.tab.c"
    break;

  case 94: /* opt_with_rollup: %empty  */
#line 436 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2492 "evoparser.tab.c"
    break;

  case 95: /* opt_with_rollup: WITH ROLLUP  */
#line 437 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2498 "evoparser.tab.c"
    break;

  case 97: /* opt_having: HAVING expr  */
#line 441 "evoparser.y"
                                                                                { emit("HAVING"); }
#line 2504 "evoparser.tab.c"
    break;

  case 99: /* opt_orderby: ORDER BY groupby_list  */
#line 445 "evoparser.y"
                                                                                { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2510 "evoparser.tab.c"
    break;

  case 101: /* opt_limit: LIMIT expr  */
#line 448 "evoparser.y"
                                                                                { emit("LIMIT 1"); }
#line 2516 "evoparser.tab.c"
    break;

  case 102: /* opt_limit: LIMIT expr ',' expr  */
#line 449 "evoparser.y"
                                                                                { emit("LIMIT 2"); }
#line 2522 "evoparser.tab.c"
    break;

  case 104: /* opt_into_list: INTO column_list  */
#line 453 "evoparser.y"
                                                                                { emit("INTO %d", (yyvsp[0].intval)); }
#line 2528 "evoparser.tab.c"
    break;

  case 105: /* column_list: NAME  */
#line 456 "evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2534 "evoparser.tab.c"
    break;

  case 106: /* column_list: column_list ',' NAME  */
#line 457 "evoparser.y"
                                                                                { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2540 "evoparser.tab.c"
    break;

  case 107: /* select_opts: %empty  */
#line 460 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2546 "evoparser.tab.c"
    break;

  case 108: /* select_opts: select_opts ALL  */
#line 461 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2552 "evoparser.tab.c"
    break;

  case 109: /* select_opts: select_opts DISTINCT  */
#line 462 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2558 "evoparser.tab.c"
    break;

  case 110: /* select_opts: select_opts DISTINCTROW  */
#line 463 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2564 "evoparser.tab.c"
    break;

  case 111: /* select_opts: select_opts HIGH_PRIORITY  */
#line 464 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2570 "evoparser.tab.c"
    break;

  case 112: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 465 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2576 "evoparser.tab.c"
    break;

  case 113: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 466 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2582 "evoparser.tab.c"
    break;

  case 114: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 467 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2588 "evoparser.tab.c"
    break;

  case 115: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 468 "evoparser.y"
                                                                                { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[-1].intval) | 0200; }
#line 2594 "evoparser.tab.c"
    break;

  case 116: /* select_expr_list: select_expr  */
#line 471 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2600 "evoparser.tab.c"
    break;

  case 117: /* select_expr_list: select_expr_list ',' select_expr  */
#line 472 "evoparser.y"
                                                                                {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2606 "evoparser.tab.c"
    break;

  case 118: /* select_expr_list: '*'  */
#line 474 "evoparser.y"
    {
        emit("SELECTALL");
        (yyval.intval) = 3;
    }
#line 2615 "evoparser.tab.c"
    break;

  case 120: /* opt_as_alias: AS NAME  */
#line 481 "evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2621 "evoparser.tab.c"
    break;

  case 121: /* opt_as_alias: NAME  */
#line 482 "evoparser.y"
                                                                                { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2627 "evoparser.tab.c"
    break;

  case 123: /* table_references: table_reference  */
#line 486 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2633 "evoparser.tab.c"
    break;

  case 124: /* table_references: table_references ',' table_reference  */
#line 487 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2639 "evoparser.tab.c"
    break;

  case 127: /* table_factor: NAME opt_as_alias index_hint  */
#line 496 "evoparser.y"
    {
        emit("TABLE %s", (yyvsp[-2].strval));
        GetSelTableName((yyvsp[-2].strval));
        free((yyvsp[-2].strval));
    }
#line 2649 "evoparser.tab.c"
    break;

  case 128: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 501 "evoparser.y"
                                                                                { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2655 "evoparser.tab.c"
    break;

  case 129: /* table_factor: table_subquery opt_as NAME  */
#line 502 "evoparser.y"
                                                                                { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2661 "evoparser.tab.c"
    break;

  case 130: /* table_factor: '(' table_references ')'  */
#line 503 "evoparser.y"
                                                                                { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2667 "evoparser.tab.c"
    break;

  case 133: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 512 "evoparser.y"
                                                                                { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2673 "evoparser.tab.c"
    break;

  case 134: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 514 "evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2679 "evoparser.tab.c"
    break;

  case 135: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 516 "evoparser.y"
                                                                                { emit("JOIN %d", 200); }
#line 2685 "evoparser.tab.c"
    break;

  case 136: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 518 "evoparser.y"
                                                                                { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2691 "evoparser.tab.c"
    break;

  case 137: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 520 "evoparser.y"
                                                                                { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2697 "evoparser.tab.c"
    break;

  case 138: /* opt_inner_cross: %empty  */
#line 523 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2703 "evoparser.tab.c"
    break;

  case 139: /* opt_inner_cross: INNER  */
#line 524 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2709 "evoparser.tab.c"
    break;

  case 140: /* opt_inner_cross: CROSS  */
#line 525 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2715 "evoparser.tab.c"
    break;

  case 141: /* opt_outer: %empty  */
#line 528 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2721 "evoparser.tab.c"
    break;

  case 142: /* opt_outer: OUTER  */
#line 529 "evoparser.y"
                                                                                {(yyval.intval) = 4; }
#line 2727 "evoparser.tab.c"
    break;

  case 143: /* left_or_right: LEFT  */
#line 532 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2733 "evoparser.tab.c"
    break;

  case 144: /* left_or_right: RIGHT  */
#line 533 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 2739 "evoparser.tab.c"
    break;

  case 145: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 536 "evoparser.y"
                                                                                { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2745 "evoparser.tab.c"
    break;

  case 146: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 537 "evoparser.y"
                                                                                { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2751 "evoparser.tab.c"
    break;

  case 147: /* opt_left_or_right_outer: %empty  */
#line 538 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2757 "evoparser.tab.c"
    break;

  case 150: /* join_condition: ON expr  */
#line 545 "evoparser.y"
                                                                                { emit("ONEXPR"); }
#line 2763 "evoparser.tab.c"
    break;

  case 151: /* join_condition: USING '(' column_list ')'  */
#line 546 "evoparser.y"
                                                                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 2769 "evoparser.tab.c"
    break;

  case 152: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 551 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 2775 "evoparser.tab.c"
    break;

  case 153: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 553 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 2781 "evoparser.tab.c"
    break;

  case 154: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 555 "evoparser.y"
                                                                                { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 2787 "evoparser.tab.c"
    break;

  case 156: /* opt_for_join: FOR JOIN  */
#line 559 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 2793 "evoparser.tab.c"
    break;

  case 157: /* opt_for_join: %empty  */
#line 560 "evoparser.y"
            { (yyval.intval) = 0; }
#line 2799 "evoparser.tab.c"
    break;

  case 158: /* index_list: NAME  */
#line 563 "evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2805 "evoparser.tab.c"
    break;

  case 159: /* index_list: index_list ',' NAME  */
#line 564 "evoparser.y"
                                                                                { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2811 "evoparser.tab.c"
    break;

  case 160: /* table_subquery: '(' select_stmt ')'  */
#line 567 "evoparser.y"
                                                                                { emit("SUBQUERY"); }
#line 2817 "evoparser.tab.c"
    break;

  case 161: /* stmt: delete_stmt  */
#line 572 "evoparser.y"
    {
        emit("STMT");
        DeleteProcess();
    }
#line 2826 "evoparser.tab.c"
    break;

  case 162: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 580 "evoparser.y"
    {
        emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval));
        GetDelTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 2836 "evoparser.tab.c"
    break;

  case 163: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 587 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2842 "evoparser.tab.c"
    break;

  case 164: /* delete_opts: delete_opts QUICK  */
#line 588 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2848 "evoparser.tab.c"
    break;

  case 165: /* delete_opts: delete_opts IGNORE  */
#line 589 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2854 "evoparser.tab.c"
    break;

  case 166: /* delete_opts: %empty  */
#line 590 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2860 "evoparser.tab.c"
    break;

  case 167: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 594 "evoparser.y"
                                                                                { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2866 "evoparser.tab.c"
    break;

  case 168: /* delete_list: NAME opt_dot_star  */
#line 597 "evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2872 "evoparser.tab.c"
    break;

  case 169: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 598 "evoparser.y"
                                                                                { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2878 "evoparser.tab.c"
    break;

  case 172: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 603 "evoparser.y"
                                                                                        { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2884 "evoparser.tab.c"
    break;

  case 173: /* stmt: drop_table_stmt  */
#line 608 "evoparser.y"
    {
        emit("STMT");
        DropTableProcess();
    }
#line 2893 "evoparser.tab.c"
    break;

  case 174: /* drop_table_stmt: DROP TABLE NAME  */
#line 615 "evoparser.y"
    {
        emit("DROPTABLE %s", (yyvsp[0].strval));
        GetDropTableName((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 2903 "evoparser.tab.c"
    break;

  case 175: /* stmt: truncate_table_stmt  */
#line 624 "evoparser.y"
    {
        emit("STMT");
        TruncateTableProcess();
    }
#line 2912 "evoparser.tab.c"
    break;

  case 176: /* truncate_table_stmt: TRUNCATE TABLE NAME  */
#line 631 "evoparser.y"
    {
        emit("TRUNCATETABLE %s", (yyvsp[0].strval));
        GetDropTableName((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 2922 "evoparser.tab.c"
    break;

  case 177: /* stmt: insert_stmt  */
#line 639 "evoparser.y"
    {
        emit("STMT");
        InsertProcess();
    }
#line 2931 "evoparser.tab.c"
    break;

  case 178: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 646 "evoparser.y"
    {
        emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval));
        GetInsertionTableName((yyvsp[-4].strval));
        free((yyvsp[-4].strval));
    }
#line 2941 "evoparser.tab.c"
    break;

  case 180: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 654 "evoparser.y"
                                          { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2947 "evoparser.tab.c"
    break;

  case 181: /* insert_opts: %empty  */
#line 657 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 2953 "evoparser.tab.c"
    break;

  case 182: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 658 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2959 "evoparser.tab.c"
    break;

  case 183: /* insert_opts: insert_opts DELAYED  */
#line 659 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2965 "evoparser.tab.c"
    break;

  case 184: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 660 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2971 "evoparser.tab.c"
    break;

  case 185: /* insert_opts: insert_opts IGNORE  */
#line 661 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2977 "evoparser.tab.c"
    break;

  case 189: /* opt_col_names: '(' column_list ')'  */
#line 668 "evoparser.y"
                                                                                { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 2983 "evoparser.tab.c"
    break;

  case 190: /* insert_vals_list: '(' insert_vals ')'  */
#line 671 "evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2989 "evoparser.tab.c"
    break;

  case 191: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 672 "evoparser.y"
                                                                                { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2995 "evoparser.tab.c"
    break;

  case 192: /* insert_vals: expr  */
#line 675 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3001 "evoparser.tab.c"
    break;

  case 193: /* insert_vals: DEFAULT  */
#line 676 "evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = 1; }
#line 3007 "evoparser.tab.c"
    break;

  case 194: /* insert_vals: insert_vals ',' expr  */
#line 677 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3013 "evoparser.tab.c"
    break;

  case 195: /* insert_vals: insert_vals ',' DEFAULT  */
#line 678 "evoparser.y"
                                                                                { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3019 "evoparser.tab.c"
    break;

  case 196: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 682 "evoparser.y"
                                                                                { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3025 "evoparser.tab.c"
    break;

  case 197: /* insert_asgn_list: NAME COMPARISON expr  */
#line 685 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3031 "evoparser.tab.c"
    break;

  case 198: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 686 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3037 "evoparser.tab.c"
    break;

  case 199: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 687 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3043 "evoparser.tab.c"
    break;

  case 200: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 688 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; } emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3049 "evoparser.tab.c"
    break;

  case 201: /* stmt: replace_stmt  */
#line 694 "evoparser.y"
                                                                                { emit("STMT"); }
#line 3055 "evoparser.tab.c"
    break;

  case 202: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 700 "evoparser.y"
                                                                                { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3061 "evoparser.tab.c"
    break;

  case 203: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 705 "evoparser.y"
                                                                                { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3067 "evoparser.tab.c"
    break;

  case 204: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 710 "evoparser.y"
                                                                                { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3073 "evoparser.tab.c"
    break;

  case 205: /* stmt: update_stmt  */
#line 715 "evoparser.y"
    {
        emit("STMT");
        UpdateProcess();
    }
#line 3082 "evoparser.tab.c"
    break;

  case 206: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 722 "evoparser.y"
    {
        emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval));
    }
#line 3090 "evoparser.tab.c"
    break;

  case 207: /* update_opts: %empty  */
#line 727 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3096 "evoparser.tab.c"
    break;

  case 208: /* update_opts: insert_opts LOW_PRIORITY  */
#line 728 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3102 "evoparser.tab.c"
    break;

  case 209: /* update_opts: insert_opts IGNORE  */
#line 729 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3108 "evoparser.tab.c"
    break;

  case 210: /* update_asgn_list: NAME COMPARISON expr  */
#line 734 "evoparser.y"
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
#line 3123 "evoparser.tab.c"
    break;

  case 211: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 745 "evoparser.y"
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
#line 3138 "evoparser.tab.c"
    break;

  case 212: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 756 "evoparser.y"
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
#line 3153 "evoparser.tab.c"
    break;

  case 213: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 767 "evoparser.y"
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
#line 3168 "evoparser.tab.c"
    break;

  case 214: /* stmt: create_database_stmt  */
#line 780 "evoparser.y"
                                                                                { emit("STMT"); }
#line 3174 "evoparser.tab.c"
    break;

  case 215: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 784 "evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3180 "evoparser.tab.c"
    break;

  case 216: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 785 "evoparser.y"
                                                                                { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3186 "evoparser.tab.c"
    break;

  case 217: /* opt_if_not_exists: %empty  */
#line 788 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3192 "evoparser.tab.c"
    break;

  case 218: /* opt_if_not_exists: IF EXISTS  */
#line 789 "evoparser.y"
                                                                                { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; } (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3198 "evoparser.tab.c"
    break;

  case 219: /* stmt: create_table_stmt  */
#line 794 "evoparser.y"
    {
        emit("STMT");
        CreateTableProcess();
    }
#line 3207 "evoparser.tab.c"
    break;

  case 220: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 802 "evoparser.y"
    {
        emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval));
        GetTableName((yyvsp[-3].strval));
        free((yyvsp[-3].strval));
    }
#line 3217 "evoparser.tab.c"
    break;

  case 221: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 810 "evoparser.y"
                                                                                { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval)); free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3223 "evoparser.tab.c"
    break;

  case 222: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 815 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3229 "evoparser.tab.c"
    break;

  case 223: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 819 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3235 "evoparser.tab.c"
    break;

  case 224: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 824 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval)); free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3241 "evoparser.tab.c"
    break;

  case 225: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 828 "evoparser.y"
                                                                                { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval)); free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3247 "evoparser.tab.c"
    break;

  case 226: /* opt_temporary: %empty  */
#line 831 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3253 "evoparser.tab.c"
    break;

  case 227: /* opt_temporary: TEMPORARY  */
#line 832 "evoparser.y"
                                                                                { (yyval.intval) = 1;}
#line 3259 "evoparser.tab.c"
    break;

  case 228: /* create_col_list: create_definition  */
#line 835 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3265 "evoparser.tab.c"
    break;

  case 229: /* create_col_list: create_col_list ',' create_definition  */
#line 836 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3271 "evoparser.tab.c"
    break;

  case 230: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 839 "evoparser.y"
                                                                                { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3277 "evoparser.tab.c"
    break;

  case 231: /* create_definition: KEY '(' column_list ')'  */
#line 840 "evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3283 "evoparser.tab.c"
    break;

  case 232: /* create_definition: INDEX '(' column_list ')'  */
#line 841 "evoparser.y"
                                                                                { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3289 "evoparser.tab.c"
    break;

  case 233: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 842 "evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3295 "evoparser.tab.c"
    break;

  case 234: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 843 "evoparser.y"
                                                                                { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3301 "evoparser.tab.c"
    break;

  case 235: /* $@1: %empty  */
#line 846 "evoparser.y"
                                                                                { emit("STARTCOL"); }
#line 3307 "evoparser.tab.c"
    break;

  case 236: /* create_definition: $@1 NAME data_type column_atts  */
#line 848 "evoparser.y"
    {
        emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval));
        GetColumnNames((yyvsp[-2].strval));
        GetColumnSize((yyvsp[-1].intval));
        free((yyvsp[-2].strval));
    }
#line 3318 "evoparser.tab.c"
    break;

  case 237: /* column_atts: %empty  */
#line 856 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3324 "evoparser.tab.c"
    break;

  case 238: /* column_atts: column_atts NOT NULLX  */
#line 857 "evoparser.y"
                                                                                { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3330 "evoparser.tab.c"
    break;

  case 240: /* column_atts: column_atts DEFAULT STRING  */
#line 859 "evoparser.y"
                                                                                { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3336 "evoparser.tab.c"
    break;

  case 241: /* column_atts: column_atts DEFAULT INTNUM  */
#line 860 "evoparser.y"
                                                                                { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3342 "evoparser.tab.c"
    break;

  case 242: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 861 "evoparser.y"
                                                                                { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3348 "evoparser.tab.c"
    break;

  case 243: /* column_atts: column_atts DEFAULT BOOL  */
#line 862 "evoparser.y"
                                                                                { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3354 "evoparser.tab.c"
    break;

  case 244: /* column_atts: column_atts AUTO_INCREMENT  */
#line 863 "evoparser.y"
                                                                                { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3360 "evoparser.tab.c"
    break;

  case 245: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 864 "evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3366 "evoparser.tab.c"
    break;

  case 246: /* column_atts: column_atts UNIQUE KEY  */
#line 865 "evoparser.y"
                                                                                { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3372 "evoparser.tab.c"
    break;

  case 247: /* column_atts: column_atts PRIMARY KEY  */
#line 866 "evoparser.y"
                                                                                { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3378 "evoparser.tab.c"
    break;

  case 248: /* column_atts: column_atts KEY  */
#line 867 "evoparser.y"
                                                                                { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3384 "evoparser.tab.c"
    break;

  case 249: /* column_atts: column_atts COMMENT STRING  */
#line 868 "evoparser.y"
                                                                                { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3390 "evoparser.tab.c"
    break;

  case 250: /* opt_length: %empty  */
#line 871 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3396 "evoparser.tab.c"
    break;

  case 251: /* opt_length: '(' INTNUM ')'  */
#line 872 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval); }
#line 3402 "evoparser.tab.c"
    break;

  case 252: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 873 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3408 "evoparser.tab.c"
    break;

  case 253: /* opt_binary: %empty  */
#line 876 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3414 "evoparser.tab.c"
    break;

  case 254: /* opt_binary: BINARY  */
#line 877 "evoparser.y"
                                                                                { (yyval.intval) = 4000; }
#line 3420 "evoparser.tab.c"
    break;

  case 255: /* opt_uz: %empty  */
#line 880 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3426 "evoparser.tab.c"
    break;

  case 256: /* opt_uz: opt_uz UNSIGNED  */
#line 881 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3432 "evoparser.tab.c"
    break;

  case 257: /* opt_uz: opt_uz ZEROFILL  */
#line 882 "evoparser.y"
                                                                                { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3438 "evoparser.tab.c"
    break;

  case 259: /* opt_csc: opt_csc CHAR SET STRING  */
#line 886 "evoparser.y"
                                                                                { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3444 "evoparser.tab.c"
    break;

  case 260: /* opt_csc: opt_csc COLLATE STRING  */
#line 887 "evoparser.y"
                                                                                { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3450 "evoparser.tab.c"
    break;

  case 261: /* data_type: BIT opt_length  */
#line 891 "evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3456 "evoparser.tab.c"
    break;

  case 262: /* data_type: TINYINT opt_length opt_uz  */
#line 892 "evoparser.y"
                                                                                { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3462 "evoparser.tab.c"
    break;

  case 263: /* data_type: SMALLINT opt_length opt_uz  */
#line 893 "evoparser.y"
                                                                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3468 "evoparser.tab.c"
    break;

  case 264: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 894 "evoparser.y"
                                                                                { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3474 "evoparser.tab.c"
    break;

  case 265: /* data_type: INT opt_length opt_uz  */
#line 895 "evoparser.y"
                                                                                { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3480 "evoparser.tab.c"
    break;

  case 266: /* data_type: INTEGER opt_length opt_uz  */
#line 896 "evoparser.y"
                                                                                { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3486 "evoparser.tab.c"
    break;

  case 267: /* data_type: BIGINT opt_length opt_uz  */
#line 897 "evoparser.y"
                                                                                { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3492 "evoparser.tab.c"
    break;

  case 268: /* data_type: REAL opt_length opt_uz  */
#line 898 "evoparser.y"
                                                                                { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3498 "evoparser.tab.c"
    break;

  case 269: /* data_type: DOUBLE opt_length opt_uz  */
#line 899 "evoparser.y"
                                                                                { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3504 "evoparser.tab.c"
    break;

  case 270: /* data_type: FLOAT opt_length opt_uz  */
#line 900 "evoparser.y"
                                                                                { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3510 "evoparser.tab.c"
    break;

  case 271: /* data_type: DECIMAL opt_length opt_uz  */
#line 901 "evoparser.y"
                                                                                { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3516 "evoparser.tab.c"
    break;

  case 272: /* data_type: DATE  */
#line 902 "evoparser.y"
                                                                                { (yyval.intval) = 100001; }
#line 3522 "evoparser.tab.c"
    break;

  case 273: /* data_type: TIME  */
#line 903 "evoparser.y"
                                                                                { (yyval.intval) = 100002; }
#line 3528 "evoparser.tab.c"
    break;

  case 274: /* data_type: TIMESTAMP  */
#line 904 "evoparser.y"
                                                                                { (yyval.intval) = 100003; }
#line 3534 "evoparser.tab.c"
    break;

  case 275: /* data_type: DATETIME  */
#line 905 "evoparser.y"
                                                                                { (yyval.intval) = 100004; }
#line 3540 "evoparser.tab.c"
    break;

  case 276: /* data_type: YEAR  */
#line 906 "evoparser.y"
                                                                                { (yyval.intval) = 100005; }
#line 3546 "evoparser.tab.c"
    break;

  case 277: /* data_type: CHAR opt_length opt_csc  */
#line 907 "evoparser.y"
                                                                                { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3552 "evoparser.tab.c"
    break;

  case 278: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 908 "evoparser.y"
                                                                                { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3558 "evoparser.tab.c"
    break;

  case 279: /* data_type: BINARY opt_length  */
#line 909 "evoparser.y"
                                                                                { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3564 "evoparser.tab.c"
    break;

  case 280: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 910 "evoparser.y"
                                                                                { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3570 "evoparser.tab.c"
    break;

  case 281: /* data_type: TINYBLOB  */
#line 911 "evoparser.y"
                                                                                { (yyval.intval) = 160001; }
#line 3576 "evoparser.tab.c"
    break;

  case 282: /* data_type: BLOB  */
#line 912 "evoparser.y"
                                                                                { (yyval.intval) = 160002; }
#line 3582 "evoparser.tab.c"
    break;

  case 283: /* data_type: MEDIUMBLOB  */
#line 913 "evoparser.y"
                                                                                { (yyval.intval) = 160003; }
#line 3588 "evoparser.tab.c"
    break;

  case 284: /* data_type: LONGBLOB  */
#line 914 "evoparser.y"
                                                                                { (yyval.intval) = 160004; }
#line 3594 "evoparser.tab.c"
    break;

  case 285: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 915 "evoparser.y"
                                                                                { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3600 "evoparser.tab.c"
    break;

  case 286: /* data_type: TEXT opt_binary opt_csc  */
#line 916 "evoparser.y"
                                                                                { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3606 "evoparser.tab.c"
    break;

  case 287: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 917 "evoparser.y"
                                                                                { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3612 "evoparser.tab.c"
    break;

  case 288: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 918 "evoparser.y"
                                                                                { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3618 "evoparser.tab.c"
    break;

  case 289: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 919 "evoparser.y"
                                                                                { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3624 "evoparser.tab.c"
    break;

  case 290: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 920 "evoparser.y"
                                                                                { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3630 "evoparser.tab.c"
    break;

  case 291: /* enum_list: STRING  */
#line 923 "evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3636 "evoparser.tab.c"
    break;

  case 292: /* enum_list: enum_list ',' STRING  */
#line 924 "evoparser.y"
                                                                                { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3642 "evoparser.tab.c"
    break;

  case 293: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 928 "evoparser.y"
                                                                                { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3648 "evoparser.tab.c"
    break;

  case 294: /* opt_ignore_replace: %empty  */
#line 931 "evoparser.y"
                                                                                { (yyval.intval) = 0; }
#line 3654 "evoparser.tab.c"
    break;

  case 295: /* opt_ignore_replace: IGNORE  */
#line 932 "evoparser.y"
                                                                                { (yyval.intval) = 1; }
#line 3660 "evoparser.tab.c"
    break;

  case 296: /* opt_ignore_replace: REPLACE  */
#line 933 "evoparser.y"
                                                                                { (yyval.intval) = 2; }
#line 3666 "evoparser.tab.c"
    break;

  case 297: /* stmt: set_stmt  */
#line 937 "evoparser.y"
                                                                                { emit("STMT"); }
#line 3672 "evoparser.tab.c"
    break;

  case 301: /* set_expr: USERVAR COMPARISON expr  */
#line 943 "evoparser.y"
                                                                                { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; } emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3678 "evoparser.tab.c"
    break;

  case 302: /* set_expr: USERVAR ASSIGN expr  */
#line 944 "evoparser.y"
                                                                                { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3684 "evoparser.tab.c"
    break;


#line 3688 "evoparser.tab.c"

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

#line 947 "evoparser.y"

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
