/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_EVOPARSER_TAB_H_INCLUDED
# define YY_YY_EVOPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NAME = 258,                    /* NAME  */
    STRING = 259,                  /* STRING  */
    INTNUM = 260,                  /* INTNUM  */
    BOOL = 261,                    /* BOOL  */
    APPROXNUM = 262,               /* APPROXNUM  */
    USERVAR = 263,                 /* USERVAR  */
    ASSIGN = 264,                  /* ASSIGN  */
    OR = 265,                      /* OR  */
    XOR = 266,                     /* XOR  */
    ANDOP = 267,                   /* ANDOP  */
    IN = 268,                      /* IN  */
    IS = 269,                      /* IS  */
    LIKE = 270,                    /* LIKE  */
    REGEXP = 271,                  /* REGEXP  */
    NOT = 272,                     /* NOT  */
    BETWEEN = 273,                 /* BETWEEN  */
    COMPARISON = 274,              /* COMPARISON  */
    SHIFT = 275,                   /* SHIFT  */
    MOD = 276,                     /* MOD  */
    UMINUS = 277,                  /* UMINUS  */
    ALTER = 278,                   /* ALTER  */
    ADD = 279,                     /* ADD  */
    ALL = 280,                     /* ALL  */
    ANY = 281,                     /* ANY  */
    AUTO_INCREMENT = 282,          /* AUTO_INCREMENT  */
    ASC = 283,                     /* ASC  */
    AND = 284,                     /* AND  */
    AS = 285,                      /* AS  */
    BLOB = 286,                    /* BLOB  */
    BY = 287,                      /* BY  */
    BINARY = 288,                  /* BINARY  */
    BOTH = 289,                    /* BOTH  */
    BIGINT = 290,                  /* BIGINT  */
    BIT = 291,                     /* BIT  */
    CURRENT_TIMESTAMP = 292,       /* CURRENT_TIMESTAMP  */
    CREATE = 293,                  /* CREATE  */
    CROSS = 294,                   /* CROSS  */
    CASE = 295,                    /* CASE  */
    COMMENT = 296,                 /* COMMENT  */
    CURRENT_DATE = 297,            /* CURRENT_DATE  */
    CURRENT_TIME = 298,            /* CURRENT_TIME  */
    CHAR = 299,                    /* CHAR  */
    COLLATE = 300,                 /* COLLATE  */
    DATABASE = 301,                /* DATABASE  */
    DELAYED = 302,                 /* DELAYED  */
    DAY_HOUR = 303,                /* DAY_HOUR  */
    DAY_MICROSECOND = 304,         /* DAY_MICROSECOND  */
    DISTINCT = 305,                /* DISTINCT  */
    DELETE = 306,                  /* DELETE  */
    DAY_MINUTE = 307,              /* DAY_MINUTE  */
    DISTINCTROW = 308,             /* DISTINCTROW  */
    DAY_SECOND = 309,              /* DAY_SECOND  */
    DESC = 310,                    /* DESC  */
    DEFAULT = 311,                 /* DEFAULT  */
    DOUBLE = 312,                  /* DOUBLE  */
    DATETIME = 313,                /* DATETIME  */
    DECIMAL = 314,                 /* DECIMAL  */
    DATE = 315,                    /* DATE  */
    ESCAPED = 316,                 /* ESCAPED  */
    ENUM = 317,                    /* ENUM  */
    END = 318,                     /* END  */
    ELSE = 319,                    /* ELSE  */
    FLOAT = 320,                   /* FLOAT  */
    FORCE = 321,                   /* FORCE  */
    FROM = 322,                    /* FROM  */
    FULLTEXT = 323,                /* FULLTEXT  */
    FOR = 324,                     /* FOR  */
    GROUP = 325,                   /* GROUP  */
    HOUR_MINUTE = 326,             /* HOUR_MINUTE  */
    HOUR_MICROSECOND = 327,        /* HOUR_MICROSECOND  */
    HIGH_PRIORITY = 328,           /* HIGH_PRIORITY  */
    HOUR_SECOND = 329,             /* HOUR_SECOND  */
    HAVING = 330,                  /* HAVING  */
    INTEGER = 331,                 /* INTEGER  */
    INNER = 332,                   /* INNER  */
    IGNORE = 333,                  /* IGNORE  */
    INDEX = 334,                   /* INDEX  */
    IF = 335,                      /* IF  */
    INSERT = 336,                  /* INSERT  */
    INTO = 337,                    /* INTO  */
    INT = 338,                     /* INT  */
    INTERVAL = 339,                /* INTERVAL  */
    JOIN = 340,                    /* JOIN  */
    KEY = 341,                     /* KEY  */
    LONGTEXT = 342,                /* LONGTEXT  */
    LOW_PRIORITY = 343,            /* LOW_PRIORITY  */
    LEFT = 344,                    /* LEFT  */
    LEADING = 345,                 /* LEADING  */
    LIMIT = 346,                   /* LIMIT  */
    LONGBLOB = 347,                /* LONGBLOB  */
    MEDIUMTEXT = 348,              /* MEDIUMTEXT  */
    MEDIUMBLOB = 349,              /* MEDIUMBLOB  */
    MEDIUMINT = 350,               /* MEDIUMINT  */
    NATURAL = 351,                 /* NATURAL  */
    NULLX = 352,                   /* NULLX  */
    OUTER = 353,                   /* OUTER  */
    ON = 354,                      /* ON  */
    ORDER = 355,                   /* ORDER  */
    ONDUPLICATE = 356,             /* ONDUPLICATE  */
    PRIMARY = 357,                 /* PRIMARY  */
    QUICK = 358,                   /* QUICK  */
    REAL = 359,                    /* REAL  */
    ROLLUP = 360,                  /* ROLLUP  */
    RIGHT = 361,                   /* RIGHT  */
    REPLACE = 362,                 /* REPLACE  */
    SQL_SMALL_RESULT = 363,        /* SQL_SMALL_RESULT  */
    SCHEMA = 364,                  /* SCHEMA  */
    SOME = 365,                    /* SOME  */
    SQL_CALC_FOUND_ROWS = 366,     /* SQL_CALC_FOUND_ROWS  */
    SQL_BIG_RESULT = 367,          /* SQL_BIG_RESULT  */
    STRAIGHT_JOIN = 368,           /* STRAIGHT_JOIN  */
    SMALLINT = 369,                /* SMALLINT  */
    SET = 370,                     /* SET  */
    SELECT = 371,                  /* SELECT  */
    TINYTEXT = 372,                /* TINYTEXT  */
    TINYINT = 373,                 /* TINYINT  */
    TEMPORARY = 374,               /* TEMPORARY  */
    TEXT = 375,                    /* TEXT  */
    TIMESTAMP = 376,               /* TIMESTAMP  */
    TABLE = 377,                   /* TABLE  */
    THEN = 378,                    /* THEN  */
    TRAILING = 379,                /* TRAILING  */
    TINYBLOB = 380,                /* TINYBLOB  */
    TIME = 381,                    /* TIME  */
    UPDATE = 382,                  /* UPDATE  */
    UNSIGNED = 383,                /* UNSIGNED  */
    UNIQUE = 384,                  /* UNIQUE  */
    USING = 385,                   /* USING  */
    USE = 386,                     /* USE  */
    VARCHAR = 387,                 /* VARCHAR  */
    VALUES = 388,                  /* VALUES  */
    VARBINARY = 389,               /* VARBINARY  */
    WHERE = 390,                   /* WHERE  */
    WHEN = 391,                    /* WHEN  */
    WITH = 392,                    /* WITH  */
    YEAR = 393,                    /* YEAR  */
    YEAR_MONTH = 394,              /* YEAR_MONTH  */
    ZEROFILL = 395,                /* ZEROFILL  */
    EXISTS = 396,                  /* EXISTS  */
    FSUBSTRING = 397,              /* FSUBSTRING  */
    FTRIM = 398,                   /* FTRIM  */
    FDATE_ADD = 399,               /* FDATE_ADD  */
    FDATE_SUB = 400,               /* FDATE_SUB  */
    FCOUNT = 401                   /* FCOUNT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "evoparser.y"

	int intval;
	double floatval;
	char *strval;
	int subtok;

#line 217 "evoparser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_EVOPARSER_TAB_H_INCLUDED  */
