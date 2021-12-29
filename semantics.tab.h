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

#ifndef YY_YY_SEMANTICS_TAB_H_INCLUDED
# define YY_YY_SEMANTICS_TAB_H_INCLUDED
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
    OR = 258,
    LEQ = 259,
    AND = 260,
    GEQ = 261,
    EQEQ = 262,
    REAL_EQUAL = 263,
    PLUS = 264,
    MINUS = 265,
    PRODUCT = 266,
    DIVIDE = 267,
    LS = 268,
    GE = 269,
    PT = 270,
    DACA = 271,
    VEZI = 272,
    POATE = 273,
    ALTFEL = 274,
    FUNCTIE = 275,
    RASTIMP = 276,
    INTOARCE = 277,
    print = 278,
    conservator = 279,
    plutitor = 280,
    tipu_meu = 281,
    integru = 282,
    bul = 283,
    litera = 284,
    fraza = 285,
    Valoare_Litera = 286,
    Valoare_Fraza = 287,
    am_plecat = 288,
    AIDI = 289,
    number = 290,
    number_r = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "semantics.y"

	int type; 
	double value; 
	char name[1000]; 

#line 100 "semantics.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SEMANTICS_TAB_H_INCLUDED  */