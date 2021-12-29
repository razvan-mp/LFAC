%{
#include "semantics.tab.h"

#include <string.h>
#include <stdio.h>

int yylex();
void yyerror (char *error);

%}

%x comment
%option noyywrap

%%

"||"                    	        {return OR;}
"<="                            	{return LEQ;}
"&&"                    	        {return AND;}
">="                    	        {return GEQ;}
"=="                    	        {return EQEQ;}

"="                             	{return REAL_EQUAL;}
"+"                             	{return PLUS;}
"-"                             	{return MINUS;}
"*"                             	{return PRODUCT;}
"/"                             	{return DIVIDE;}
"<"                             	{return LS;}
">"                             	{return GE;}

"pt"                                {return PT;}
"daca"                            	{return DACA;}
"vezi"                              {return VEZI;}
"poate"                  	        {return POATE;}
"altfel"                  	        {return ALTFEL;}
"functie"                   	    {return FUNCTIE;}
"rastimp"                           {return RASTIMP;}
"intoarce"                	        {return INTOARCE;}

"conservator"                       {return conservator;}
"am_plecat"				   	        {return am_plecat;}
"plutitor"                         	{yylval.type = plutitor; return plutitor;}
"tipu_meu"                          {return tipu_meu;}
"integru"              	        	{yylval.type = integru; return integru;}
"litera"                          	{yylval.type = litera; return litera;}
"fraza"                        	    {yylval.type = fraza; return fraza;}
"print"				            	{return print;}
"bul"                          	    {yylval.type = bul; return bul;}

[a-zA-Z][a-zA-Z_0-9]*	            {strcpy(yylval.name, yytext); return AIDI;}
[0]|[-]?[1-9][0-9]*     	        {yylval.value = atoi(yytext); return number;}
[0]|[-]?[1-9][0-9]*\.[0-9]+         {yylval.value = atof(yytext); return number_r;}
['].[']                 	        {yytext[2] = '\0'; strcpy(yylval.name, yytext + 1); return Valoare_Litera;}
["][^\"]*["]                	    {strcpy(yylval.name, yytext + 1); yylval.name[strlen(yytext)] = '\0'; return Valoare_Fraza;}
[ \t]                  		        ;
[\n]                    	        {yylineno++;}
[-+=*/{};,\[\]]                     {return yytext[0];}
.                       	        {ECHO; yyerror ("caracter dubios"); printf("%s\n", yytext);}

"/*" {BEGIN comment;}
<comment>.|\n ;
<comment>"*/" {BEGIN 0;}

%%
