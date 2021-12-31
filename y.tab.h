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
    OR = 258,                      /* OR  */
    LEQ = 259,                     /* LEQ  */
    AND = 260,                     /* AND  */
    GEQ = 261,                     /* GEQ  */
    EQEQ = 262,                    /* EQEQ  */
    REAL_EQUAL = 263,              /* REAL_EQUAL  */
    PLUS = 264,                    /* PLUS  */
    MINUS = 265,                   /* MINUS  */
    PRODUCT = 266,                 /* PRODUCT  */
    DIVIDE = 267,                  /* DIVIDE  */
    LS = 268,                      /* LS  */
    GE = 269,                      /* GE  */
    PT = 270,                      /* PT  */
    DACA = 271,                    /* DACA  */
    VEZI = 272,                    /* VEZI  */
    POATE = 273,                   /* POATE  */
    ALTFEL = 274,                  /* ALTFEL  */
    FUNCTIE = 275,                 /* FUNCTIE  */
    RASTIMP = 276,                 /* RASTIMP  */
    INTOARCE = 277,                /* INTOARCE  */
    print = 278,                   /* print  */
    conservator = 279,             /* conservator  */
    plutitor = 280,                /* plutitor  */
    tipu_meu = 281,                /* tipu_meu  */
    integru = 282,                 /* integru  */
    bul = 283,                     /* bul  */
    litera = 284,                  /* litera  */
    fraza = 285,                   /* fraza  */
    Valoare_Litera = 286,          /* Valoare_Litera  */
    Valoare_Fraza = 287,           /* Valoare_Fraza  */
    am_plecat = 288,               /* am_plecat  */
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
#define OR 258
#define LEQ 259
#define AND 260
#define GEQ 261
#define EQEQ 262
#define REAL_EQUAL 263
#define PLUS 264
#define MINUS 265
#define PRODUCT 266
#define DIVIDE 267
#define LS 268
#define GE 269
#define PT 270
#define DACA 271
#define VEZI 272
#define POATE 273
#define ALTFEL 274
#define FUNCTIE 275
#define RASTIMP 276
#define INTOARCE 277
#define print 278
#define conservator 279
#define plutitor 280
#define tipu_meu 281
#define integru 282
#define bul 283
#define litera 284
#define fraza 285
#define Valoare_Litera 286
#define Valoare_Fraza 287
#define am_plecat 288
#define number 289
#define number_r 290
#define AIDI 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 44 "semantics.y"

    char string[1000];
	int type; 
	double value; 
	char name[1000];
    struct variable_structure* data_structure; 

#line 147 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
