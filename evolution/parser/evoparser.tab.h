/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     BOOLEAN = 287,
     BY = 288,
     BINARY = 289,
     BOTH = 290,
     BIGINT = 291,
     BIT = 292,
     CONSTRAINT = 293,
     CURRENT_TIMESTAMP = 294,
     CREATE = 295,
     CASCADE = 296,
     CROSS = 297,
     CASE = 298,
     CHECK = 299,
     COMMENT = 300,
     CURRENT_DATE = 301,
     CURRENT_TIME = 302,
     CHAR = 303,
     COLLATE = 304,
     DATABASE = 305,
     DISABLE = 306,
     DOMAIN = 307,
     DELAYED = 308,
     DAY_HOUR = 309,
     DAY_MICROSECOND = 310,
     DISTINCT = 311,
     DELETE = 312,
     DROP = 313,
     DAY_MINUTE = 314,
     DISTINCTROW = 315,
     DAY_SECOND = 316,
     DESC = 317,
     DEFAULT = 318,
     DOUBLE = 319,
     DATETIME = 320,
     DECIMAL = 321,
     DATE = 322,
     ENABLE = 323,
     ESCAPED = 324,
     ENUM = 325,
     END = 326,
     ELSE = 327,
     EXPLAIN = 328,
     FLOAT = 329,
     FORCE = 330,
     FOREIGN = 331,
     FROM = 332,
     FULLTEXT = 333,
     FOR = 334,
     GROUP = 335,
     HOUR_MINUTE = 336,
     HOUR_MICROSECOND = 337,
     HIGH_PRIORITY = 338,
     HOUR_SECOND = 339,
     HAVING = 340,
     INTEGER = 341,
     INNER = 342,
     IGNORE = 343,
     INDEX = 344,
     IF = 345,
     INSERT = 346,
     INTO = 347,
     INT = 348,
     INTERVAL = 349,
     JOIN = 350,
     KEY = 351,
     LONGTEXT = 352,
     LOW_PRIORITY = 353,
     LEFT = 354,
     LEADING = 355,
     LIMIT = 356,
     OFFSET = 357,
     LONGBLOB = 358,
     MEDIUMTEXT = 359,
     MEDIUMBLOB = 360,
     MEDIUMINT = 361,
     NATURAL = 362,
     NULLX = 363,
     OUTER = 364,
     ON = 365,
     ORDER = 366,
     ONDUPLICATE = 367,
     PRIMARY = 368,
     QUICK = 369,
     REAL = 370,
     RECLAIM = 371,
     REFERENCES = 372,
     RENAME = 373,
     RESTRICT = 374,
     ROLLUP = 375,
     RIGHT = 376,
     REPLACE = 377,
     SQL_SMALL_RESULT = 378,
     SCHEMA = 379,
     SOME = 380,
     SQL_CALC_FOUND_ROWS = 381,
     SQL_BIG_RESULT = 382,
     STRAIGHT_JOIN = 383,
     SMALLINT = 384,
     SET = 385,
     SELECT = 386,
     TINYTEXT = 387,
     TINYINT = 388,
     TO = 389,
     TEMPORARY = 390,
     TEXT = 391,
     TIMESTAMP = 392,
     TABLE = 393,
     THEN = 394,
     TRAILING = 395,
     TRUNCATE = 396,
     TINYBLOB = 397,
     TIME = 398,
     UPDATE = 399,
     UNSIGNED = 400,
     UNIQUE = 401,
     UUID = 402,
     USING = 403,
     USE = 404,
     VALIDATE = 405,
     VARCHAR = 406,
     VALUES = 407,
     VARBINARY = 408,
     WHERE = 409,
     WHEN = 410,
     WITH = 411,
     YEAR = 412,
     YEAR_MONTH = 413,
     ZEROFILL = 414,
     EXISTS = 415,
     FSUBSTRING = 416,
     FTRIM = 417,
     FDATE_ADD = 418,
     FDATE_SUB = 419,
     FCOUNT = 420,
     FSUM = 421,
     FAVG = 422,
     FMIN = 423,
     FMAX = 424,
     FUPPER = 425,
     FLOWER = 426,
     FLENGTH = 427,
     FCONCAT = 428,
     FREPLACE = 429,
     FCOALESCE = 430,
     FGEN_RANDOM_UUID = 431,
     FGEN_RANDOM_UUID_V7 = 432,
     FSNOWFLAKE_ID = 433
   };
#endif
/* Tokens.  */
#define NAME 258
#define STRING 259
#define INTNUM 260
#define BOOL 261
#define APPROXNUM 262
#define USERVAR 263
#define ASSIGN 264
#define OR 265
#define XOR 266
#define ANDOP 267
#define REGEXP 268
#define LIKE 269
#define IS 270
#define IN 271
#define NOT 272
#define BETWEEN 273
#define COMPARISON 274
#define SHIFT 275
#define MOD 276
#define UMINUS 277
#define ALTER 278
#define ADD 279
#define ALL 280
#define ANY 281
#define AUTO_INCREMENT 282
#define ASC 283
#define AND 284
#define AS 285
#define BLOB 286
#define BOOLEAN 287
#define BY 288
#define BINARY 289
#define BOTH 290
#define BIGINT 291
#define BIT 292
#define CONSTRAINT 293
#define CURRENT_TIMESTAMP 294
#define CREATE 295
#define CASCADE 296
#define CROSS 297
#define CASE 298
#define CHECK 299
#define COMMENT 300
#define CURRENT_DATE 301
#define CURRENT_TIME 302
#define CHAR 303
#define COLLATE 304
#define DATABASE 305
#define DISABLE 306
#define DOMAIN 307
#define DELAYED 308
#define DAY_HOUR 309
#define DAY_MICROSECOND 310
#define DISTINCT 311
#define DELETE 312
#define DROP 313
#define DAY_MINUTE 314
#define DISTINCTROW 315
#define DAY_SECOND 316
#define DESC 317
#define DEFAULT 318
#define DOUBLE 319
#define DATETIME 320
#define DECIMAL 321
#define DATE 322
#define ENABLE 323
#define ESCAPED 324
#define ENUM 325
#define END 326
#define ELSE 327
#define EXPLAIN 328
#define FLOAT 329
#define FORCE 330
#define FOREIGN 331
#define FROM 332
#define FULLTEXT 333
#define FOR 334
#define GROUP 335
#define HOUR_MINUTE 336
#define HOUR_MICROSECOND 337
#define HIGH_PRIORITY 338
#define HOUR_SECOND 339
#define HAVING 340
#define INTEGER 341
#define INNER 342
#define IGNORE 343
#define INDEX 344
#define IF 345
#define INSERT 346
#define INTO 347
#define INT 348
#define INTERVAL 349
#define JOIN 350
#define KEY 351
#define LONGTEXT 352
#define LOW_PRIORITY 353
#define LEFT 354
#define LEADING 355
#define LIMIT 356
#define OFFSET 357
#define LONGBLOB 358
#define MEDIUMTEXT 359
#define MEDIUMBLOB 360
#define MEDIUMINT 361
#define NATURAL 362
#define NULLX 363
#define OUTER 364
#define ON 365
#define ORDER 366
#define ONDUPLICATE 367
#define PRIMARY 368
#define QUICK 369
#define REAL 370
#define RECLAIM 371
#define REFERENCES 372
#define RENAME 373
#define RESTRICT 374
#define ROLLUP 375
#define RIGHT 376
#define REPLACE 377
#define SQL_SMALL_RESULT 378
#define SCHEMA 379
#define SOME 380
#define SQL_CALC_FOUND_ROWS 381
#define SQL_BIG_RESULT 382
#define STRAIGHT_JOIN 383
#define SMALLINT 384
#define SET 385
#define SELECT 386
#define TINYTEXT 387
#define TINYINT 388
#define TO 389
#define TEMPORARY 390
#define TEXT 391
#define TIMESTAMP 392
#define TABLE 393
#define THEN 394
#define TRAILING 395
#define TRUNCATE 396
#define TINYBLOB 397
#define TIME 398
#define UPDATE 399
#define UNSIGNED 400
#define UNIQUE 401
#define UUID 402
#define USING 403
#define USE 404
#define VALIDATE 405
#define VARCHAR 406
#define VALUES 407
#define VARBINARY 408
#define WHERE 409
#define WHEN 410
#define WITH 411
#define YEAR 412
#define YEAR_MONTH 413
#define ZEROFILL 414
#define EXISTS 415
#define FSUBSTRING 416
#define FTRIM 417
#define FDATE_ADD 418
#define FDATE_SUB 419
#define FCOUNT 420
#define FSUM 421
#define FAVG 422
#define FMIN 423
#define FMAX 424
#define FUPPER 425
#define FLOWER 426
#define FLENGTH 427
#define FCONCAT 428
#define FREPLACE 429
#define FCOALESCE 430
#define FGEN_RANDOM_UUID 431
#define FGEN_RANDOM_UUID_V7 432
#define FSNOWFLAKE_ID 433




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "parser/evoparser.y"
{
	int intval;
	double floatval;
	char *strval;
	int subtok;
	struct ExprNode *exprval;
}
/* Line 1529 of yacc.c.  */
#line 413 "parser/evoparser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

