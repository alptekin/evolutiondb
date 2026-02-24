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
    DROP = 307,                    /* DROP  */
    DAY_MINUTE = 308,              /* DAY_MINUTE  */
    DISTINCTROW = 309,             /* DISTINCTROW  */
    DAY_SECOND = 310,              /* DAY_SECOND  */
    DESC = 311,                    /* DESC  */
    DEFAULT = 312,                 /* DEFAULT  */
    DOUBLE = 313,                  /* DOUBLE  */
    DATETIME = 314,                /* DATETIME  */
    DECIMAL = 315,                 /* DECIMAL  */
    DATE = 316,                    /* DATE  */
    ESCAPED = 317,                 /* ESCAPED  */
    ENUM = 318,                    /* ENUM  */
    END = 319,                     /* END  */
    ELSE = 320,                    /* ELSE  */
    FLOAT = 321,                   /* FLOAT  */
    FORCE = 322,                   /* FORCE  */
    FROM = 323,                    /* FROM  */
    FULLTEXT = 324,                /* FULLTEXT  */
    FOR = 325,                     /* FOR  */
    GROUP = 326,                   /* GROUP  */
    HOUR_MINUTE = 327,             /* HOUR_MINUTE  */
    HOUR_MICROSECOND = 328,        /* HOUR_MICROSECOND  */
    HIGH_PRIORITY = 329,           /* HIGH_PRIORITY  */
    HOUR_SECOND = 330,             /* HOUR_SECOND  */
    HAVING = 331,                  /* HAVING  */
    INTEGER = 332,                 /* INTEGER  */
    INNER = 333,                   /* INNER  */
    IGNORE = 334,                  /* IGNORE  */
    INDEX = 335,                   /* INDEX  */
    IF = 336,                      /* IF  */
    INSERT = 337,                  /* INSERT  */
    INTO = 338,                    /* INTO  */
    INT = 339,                     /* INT  */
    INTERVAL = 340,                /* INTERVAL  */
    JOIN = 341,                    /* JOIN  */
    KEY = 342,                     /* KEY  */
    LONGTEXT = 343,                /* LONGTEXT  */
    LOW_PRIORITY = 344,            /* LOW_PRIORITY  */
    LEFT = 345,                    /* LEFT  */
    LEADING = 346,                 /* LEADING  */
    LIMIT = 347,                   /* LIMIT  */
    LONGBLOB = 348,                /* LONGBLOB  */
    MEDIUMTEXT = 349,              /* MEDIUMTEXT  */
    MEDIUMBLOB = 350,              /* MEDIUMBLOB  */
    MEDIUMINT = 351,               /* MEDIUMINT  */
    NATURAL = 352,                 /* NATURAL  */
    NULLX = 353,                   /* NULLX  */
    OUTER = 354,                   /* OUTER  */
    ON = 355,                      /* ON  */
    ORDER = 356,                   /* ORDER  */
    ONDUPLICATE = 357,             /* ONDUPLICATE  */
    PRIMARY = 358,                 /* PRIMARY  */
    QUICK = 359,                   /* QUICK  */
    REAL = 360,                    /* REAL  */
    ROLLUP = 361,                  /* ROLLUP  */
    RIGHT = 362,                   /* RIGHT  */
    REPLACE = 363,                 /* REPLACE  */
    SQL_SMALL_RESULT = 364,        /* SQL_SMALL_RESULT  */
    SCHEMA = 365,                  /* SCHEMA  */
    SOME = 366,                    /* SOME  */
    SQL_CALC_FOUND_ROWS = 367,     /* SQL_CALC_FOUND_ROWS  */
    SQL_BIG_RESULT = 368,          /* SQL_BIG_RESULT  */
    STRAIGHT_JOIN = 369,           /* STRAIGHT_JOIN  */
    SMALLINT = 370,                /* SMALLINT  */
    SET = 371,                     /* SET  */
    SELECT = 372,                  /* SELECT  */
    TINYTEXT = 373,                /* TINYTEXT  */
    TINYINT = 374,                 /* TINYINT  */
    TEMPORARY = 375,               /* TEMPORARY  */
    TEXT = 376,                    /* TEXT  */
    TIMESTAMP = 377,               /* TIMESTAMP  */
    TABLE = 378,                   /* TABLE  */
    THEN = 379,                    /* THEN  */
    TRAILING = 380,                /* TRAILING  */
    TINYBLOB = 381,                /* TINYBLOB  */
    TIME = 382,                    /* TIME  */
    UPDATE = 383,                  /* UPDATE  */
    UNSIGNED = 384,                /* UNSIGNED  */
    UNIQUE = 385,                  /* UNIQUE  */
    USING = 386,                   /* USING  */
    USE = 387,                     /* USE  */
    VARCHAR = 388,                 /* VARCHAR  */
    VALUES = 389,                  /* VALUES  */
    VARBINARY = 390,               /* VARBINARY  */
    WHERE = 391,                   /* WHERE  */
    WHEN = 392,                    /* WHEN  */
    WITH = 393,                    /* WITH  */
    YEAR = 394,                    /* YEAR  */
    YEAR_MONTH = 395,              /* YEAR_MONTH  */
    ZEROFILL = 396,                /* ZEROFILL  */
    EXISTS = 397,                  /* EXISTS  */
    FSUBSTRING = 398,              /* FSUBSTRING  */
    FTRIM = 399,                   /* FTRIM  */
    FDATE_ADD = 400,               /* FDATE_ADD  */
    FDATE_SUB = 401,               /* FDATE_SUB  */
    FCOUNT = 402                   /* FCOUNT  */
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

#line 218 "evoparser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_EVOPARSER_TAB_H_INCLUDED  */
