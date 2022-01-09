/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    print = 258,
    INCEPE_DECL = 259,
    TERMINA_DECL = 260,
    INCEPE_MAIN = 261,
    TERMINA_MAIN = 262,
    INCEPE_DECL_FUN = 263,
    TERMINA_DECL_FUN = 264,
    integru = 265,
    plutitor = 266,
    litera = 267,
    bul = 268,
    fraza = 269,
    conservator = 270,
    GEQ = 271,
    LEQ = 272,
    AND = 273,
    OR = 274,
    EQEQ = 275,
    LS = 276,
    GE = 277,
    PLUS = 278,
    MINUS = 279,
    PROD = 280,
    DIV = 281,
    EQUAL = 282,
    dak = 283,
    pt = 284,
    rastimp = 285,
    altfel = 286,
    subrutina = 287,
    ofera = 288,
    defineste_tip = 289,
    valoare_fraza = 290,
    valoare_litera = 291,
    vezi = 292,
    culcat = 293,
    number = 294,
    number_r = 295,
    AIDI = 296
  };
#endif
/* Tokens.  */
#define print 258
#define INCEPE_DECL 259
#define TERMINA_DECL 260
#define INCEPE_MAIN 261
#define TERMINA_MAIN 262
#define INCEPE_DECL_FUN 263
#define TERMINA_DECL_FUN 264
#define integru 265
#define plutitor 266
#define litera 267
#define bul 268
#define fraza 269
#define conservator 270
#define GEQ 271
#define LEQ 272
#define AND 273
#define OR 274
#define EQEQ 275
#define LS 276
#define GE 277
#define PLUS 278
#define MINUS 279
#define PROD 280
#define DIV 281
#define EQUAL 282
#define dak 283
#define pt 284
#define rastimp 285
#define altfel 286
#define subrutina 287
#define ofera 288
#define defineste_tip 289
#define valoare_fraza 290
#define valoare_litera 291
#define vezi 292
#define culcat 293
#define number 294
#define number_r 295
#define AIDI 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 73 "semantics.y"

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
