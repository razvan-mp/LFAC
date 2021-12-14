%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
void yyerror(char *eroare);
int yylex();


%}

%start program

%token AIDI

%token print
%token plutitor tipu_meu integru litera fraza bul
%token conservator am_plecat
%token PT DACA VEZI POATE ALTFEL RASTIMP
%token FUNCTIE INTOARCE
%token REAL_EQUAL PLUS MINUS PRODUCT DIVIDE LS GE
%token OR LEQ AND GEQ EQEQ

%token numar
%token numar_real
%token valoare_litera
%token valoare_fraza