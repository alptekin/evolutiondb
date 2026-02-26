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

#ifndef YY_YY_PARSER_EVOPARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_EVOPARSER_TAB_H_INCLUDED
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
    BOOLEAN = 287,                 /* BOOLEAN  */
    BY = 288,                      /* BY  */
    BINARY = 289,                  /* BINARY  */
    BOTH = 290,                    /* BOTH  */
    BIGINT = 291,                  /* BIGINT  */
    BIT = 292,                     /* BIT  */
    CURRENT_TIMESTAMP = 293,       /* CURRENT_TIMESTAMP  */
    CREATE = 294,                  /* CREATE  */
    CROSS = 295,                   /* CROSS  */
    CASE = 296,                    /* CASE  */
    COMMENT = 297,                 /* COMMENT  */
    CURRENT_DATE = 298,            /* CURRENT_DATE  */
    CURRENT_TIME = 299,            /* CURRENT_TIME  */
    CHAR = 300,                    /* CHAR  */
    COLLATE = 301,                 /* COLLATE  */
    DATABASE = 302,                /* DATABASE  */
    DELAYED = 303,                 /* DELAYED  */
    DAY_HOUR = 304,                /* DAY_HOUR  */
    DAY_MICROSECOND = 305,         /* DAY_MICROSECOND  */
    DISTINCT = 306,                /* DISTINCT  */
    DELETE = 307,                  /* DELETE  */
    DROP = 308,                    /* DROP  */
    DAY_MINUTE = 309,              /* DAY_MINUTE  */
    DISTINCTROW = 310,             /* DISTINCTROW  */
    DAY_SECOND = 311,              /* DAY_SECOND  */
    DESC = 312,                    /* DESC  */
    DEFAULT = 313,                 /* DEFAULT  */
    DOUBLE = 314,                  /* DOUBLE  */
    DATETIME = 315,                /* DATETIME  */
    DECIMAL = 316,                 /* DECIMAL  */
    DATE = 317,                    /* DATE  */
    ESCAPED = 318,                 /* ESCAPED  */
    ENUM = 319,                    /* ENUM  */
    END = 320,                     /* END  */
    ELSE = 321,                    /* ELSE  */
    FLOAT = 322,                   /* FLOAT  */
    FORCE = 323,                   /* FORCE  */
    FROM = 324,                    /* FROM  */
    FULLTEXT = 325,                /* FULLTEXT  */
    FOR = 326,                     /* FOR  */
    GROUP = 327,                   /* GROUP  */
    HOUR_MINUTE = 328,             /* HOUR_MINUTE  */
    HOUR_MICROSECOND = 329,        /* HOUR_MICROSECOND  */
    HIGH_PRIORITY = 330,           /* HIGH_PRIORITY  */
    HOUR_SECOND = 331,             /* HOUR_SECOND  */
    HAVING = 332,                  /* HAVING  */
    INTEGER = 333,                 /* INTEGER  */
    INNER = 334,                   /* INNER  */
    IGNORE = 335,                  /* IGNORE  */
    INDEX = 336,                   /* INDEX  */
    IF = 337,                      /* IF  */
    INSERT = 338,                  /* INSERT  */
    INTO = 339,                    /* INTO  */
    INT = 340,                     /* INT  */
    INTERVAL = 341,                /* INTERVAL  */
    JOIN = 342,                    /* JOIN  */
    KEY = 343,                     /* KEY  */
    LONGTEXT = 344,                /* LONGTEXT  */
    LOW_PRIORITY = 345,            /* LOW_PRIORITY  */
    LEFT = 346,                    /* LEFT  */
    LEADING = 347,                 /* LEADING  */
    LIMIT = 348,                   /* LIMIT  */
    LONGBLOB = 349,                /* LONGBLOB  */
    MEDIUMTEXT = 350,              /* MEDIUMTEXT  */
    MEDIUMBLOB = 351,              /* MEDIUMBLOB  */
    MEDIUMINT = 352,               /* MEDIUMINT  */
    NATURAL = 353,                 /* NATURAL  */
    NULLX = 354,                   /* NULLX  */
    OUTER = 355,                   /* OUTER  */
    ON = 356,                      /* ON  */
    ORDER = 357,                   /* ORDER  */
    ONDUPLICATE = 358,             /* ONDUPLICATE  */
    PRIMARY = 359,                 /* PRIMARY  */
    QUICK = 360,                   /* QUICK  */
    REAL = 361,                    /* REAL  */
    ROLLUP = 362,                  /* ROLLUP  */
    RIGHT = 363,                   /* RIGHT  */
    REPLACE = 364,                 /* REPLACE  */
    SQL_SMALL_RESULT = 365,        /* SQL_SMALL_RESULT  */
    SCHEMA = 366,                  /* SCHEMA  */
    SOME = 367,                    /* SOME  */
    SQL_CALC_FOUND_ROWS = 368,     /* SQL_CALC_FOUND_ROWS  */
    SQL_BIG_RESULT = 369,          /* SQL_BIG_RESULT  */
    STRAIGHT_JOIN = 370,           /* STRAIGHT_JOIN  */
    SMALLINT = 371,                /* SMALLINT  */
    SET = 372,                     /* SET  */
    SELECT = 373,                  /* SELECT  */
    TINYTEXT = 374,                /* TINYTEXT  */
    TINYINT = 375,                 /* TINYINT  */
    TEMPORARY = 376,               /* TEMPORARY  */
    TEXT = 377,                    /* TEXT  */
    TIMESTAMP = 378,               /* TIMESTAMP  */
    TABLE = 379,                   /* TABLE  */
    THEN = 380,                    /* THEN  */
    TRAILING = 381,                /* TRAILING  */
    TRUNCATE = 382,                /* TRUNCATE  */
    TINYBLOB = 383,                /* TINYBLOB  */
    TIME = 384,                    /* TIME  */
    UPDATE = 385,                  /* UPDATE  */
    UNSIGNED = 386,                /* UNSIGNED  */
    UNIQUE = 387,                  /* UNIQUE  */
    USING = 388,                   /* USING  */
    USE = 389,                     /* USE  */
    VARCHAR = 390,                 /* VARCHAR  */
    VALUES = 391,                  /* VALUES  */
    VARBINARY = 392,               /* VARBINARY  */
    WHERE = 393,                   /* WHERE  */
    WHEN = 394,                    /* WHEN  */
    WITH = 395,                    /* WITH  */
    YEAR = 396,                    /* YEAR  */
    YEAR_MONTH = 397,              /* YEAR_MONTH  */
    ZEROFILL = 398,                /* ZEROFILL  */
    EXISTS = 399,                  /* EXISTS  */
    FSUBSTRING = 400,              /* FSUBSTRING  */
    FTRIM = 401,                   /* FTRIM  */
    FDATE_ADD = 402,               /* FDATE_ADD  */
    FDATE_SUB = 403,               /* FDATE_SUB  */
    FCOUNT = 404                   /* FCOUNT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser/evoparser.y"

	int intval;
	double floatval;
	char *strval;
	int subtok;

#line 220 "parser/evoparser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_EVOPARSER_TAB_H_INCLUDED  */
