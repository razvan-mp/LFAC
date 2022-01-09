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
    integru = 263,
    plutitor = 264,
    litera = 265,
    bul = 266,
    fraza = 267,
    conservator = 268,
    GEQ = 269,
    LEQ = 270,
    AND = 271,
    OR = 272,
    EQEQ = 273,
    LS = 274,
    GE = 275,
    PLUS = 276,
    MINUS = 277,
    PROD = 278,
    DIV = 279,
    EQUAL = 280,
    dak = 281,
    altfel = 282,
    subrutina = 283,
    ofera = 284,
    defineste_tip = 285,
    valoare_fraza = 286,
    valoare_litera = 287,
    vezi = 288,
    culcat = 289,
    number = 290,
    number_r = 291,
    AIDI = 292
  };
#endif
/* Tokens.  */
#define print 258
#define INCEPE_DECL 259
#define TERMINA_DECL 260
#define INCEPE_MAIN 261
#define TERMINA_MAIN 262
#define integru 263
#define plutitor 264
#define litera 265
#define bul 266
#define fraza 267
#define conservator 268
#define GEQ 269
#define LEQ 270
#define AND 271
#define OR 272
#define EQEQ 273
#define LS 274
#define GE 275
#define PLUS 276
#define MINUS 277
#define PROD 278
#define DIV 279
#define EQUAL 280
#define dak 281
#define altfel 282
#define subrutina 283
#define ofera 284
#define defineste_tip 285
#define valoare_fraza 286
#define valoare_litera 287
#define vezi 288
#define culcat 289
#define number 290
#define number_r 291
#define AIDI 292

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

#line 139 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
