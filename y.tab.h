/* A Bison parser, made by GNU Bison 3.7.6.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    print = 258,                   /* print  */
    integru = 259,                 /* integru  */
    plutitor = 260,                /* plutitor  */
    litera = 261,                  /* litera  */
    bul = 262,                     /* bul  */
    fraza = 263,                   /* fraza  */
    conservator = 264,             /* conservator  */
    GEQ = 265,                     /* GEQ  */
    LEQ = 266,                     /* LEQ  */
    AND = 267,                     /* AND  */
    OR = 268,                      /* OR  */
    EQEQ = 269,                    /* EQEQ  */
    LS = 270,                      /* LS  */
    GE = 271,                      /* GE  */
    PLUS = 272,                    /* PLUS  */
    MINUS = 273,                   /* MINUS  */
    PROD = 274,                    /* PROD  */
    DIV = 275,                     /* DIV  */
    EQUAL = 276,                   /* EQUAL  */
    dak = 277,                     /* dak  */
    rastimp = 278,                 /* rastimp  */
    pt = 279,                      /* pt  */
    altfel = 280,                  /* altfel  */
    poate = 281,                   /* poate  */
    subrutina = 282,               /* subrutina  */
    ofera = 283,                   /* ofera  */
    defineste_tip = 284,           /* defineste_tip  */
    valoare_fraza = 285,           /* valoare_fraza  */
    valoare_litera = 286,          /* valoare_litera  */
    vezi = 287,                    /* vezi  */
    culcat = 288,                  /* culcat  */
    number = 289,                  /* number  */
    number_r = 290,                /* number_r  */
    AIDI = 291                     /* AIDI  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define print 258
#define integru 259
#define plutitor 260
#define litera 261
#define bul 262
#define fraza 263
#define conservator 264
#define GEQ 265
#define LEQ 266
#define AND 267
#define OR 268
#define EQEQ 269
#define LS 270
#define GE 271
#define PLUS 272
#define MINUS 273
#define PROD 274
#define DIV 275
#define EQUAL 276
#define dak 277
#define rastimp 278
#define pt 279
#define altfel 280
#define poate 281
#define subrutina 282
#define ofera 283
#define defineste_tip 284
#define valoare_fraza 285
#define valoare_litera 286
#define vezi 287
#define culcat 288
#define number 289
#define number_r 290
#define AIDI 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 72 "semantics.y"

	double num; 
	char string[1000]; 
	int type_id; 
	struct var* strct;
	struct parameter* param_functie;

#line 147 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
