%{
#include <string.h>
#include <stdio.h>

int yylex();
void yyerror (char *error);

%}

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
"plutitor"                         	{yylval.type_id = plutitor; return plutitor;}
"tipu_meu"                          {return tipu_meu;}
"integru"              	        	{yylval.type_id = integru; return integru;}
"litera"                          	{yylval.type_id = litera; return litera;}
"fraza"                        	    {yylval.type_id = fraza; return fraza;}
"print"				            	{return print;}
"bul"                          	    {yylval.type_id = bul; return bul;}

[a-zA-Z][a-zA-Z_0-9]*	            {strcpy(yylval.string, yytext); return AIDI;}
[0]|[-]?[1-9][0-9]*     	        {yylval.num = atoi(yytext); return numar;}
[0]|[-]?[1-9][0-9]*\.[0-9]+         {yylval.num = atof(yytext); return numar_real;}
['].[']                 	        {yytext[2] = '\0'; strcpy(yylval.string, yytext + 1); return valoare_litera;}
["][^\"]*["]                	    {strcpy(yylval.string, yytext + 1); yylval.string[strlen(yytext)] = '\0'; return valoare_fraza;}
[ \t]                  		        ;
[\n]                    	        {yylineno++;}
[-+=*/{};,\[\]]                     {return yytext[0];}
.                       	        {ECHO; yyerror ("caracter dubios"); printf("%s\n", yytext);}

"/*" {BEGIN comment;}
<comment>.|\n ;
<comment>"*/" {BEGIN 0;}

%%
int yywrap (void) {return 1;}
