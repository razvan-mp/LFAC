%{
#include <stdio.h>
#include <string.h>

#include "y.tab.h"

void yyerror (char *s);
int yylex();

%}
%%

"print"				            	{return print;}
"culcat"				   	        {return culcat;}
"integru"              	        	{yylval.type_id = integru; return integru;}
"plutitor"                         	{yylval.type_id = plutitor; return plutitor;}
"litera"                          	{yylval.type_id = litera; return litera;}
"fraza"                        	    {yylval.type_id = fraza; return fraza;}
"bul"                          	    {yylval.type_id = bul; return bul;}
"conservator"                       {return conservator;}

"<="                            	{return LEQ;}
">="                    	        {return GEQ;}
"&&"                    	        {return AND;}
"||"                    	        {return OR;}
"=="                    	        {return EQEQ;}

"="                             	{return EQUAL;}
"+"                             	{return PLUS;}
"-"                             	{return MINUS;}
"*"                             	{return PROD;}
"/"                             	{return DIV;}
"<"                             	{return LS;}
">"                             	{return GE;}

"pt"                                {return pt;}
"rastimp"                           {return rastimp;}
"dak"                               {return dak;}
"poate"                             {return poate;}
"altfel"                            {return altfel;}
"vezi"                              {return vezi;}
"subrutina"                         {return subrutina;}
"ofera"                             {return ofera;}
"defineste_tip"                     {return defineste_tip;}

[#].*[#]                            {;}
[()<>]                  	        {return yytext[0];}
[a-zA-Z]+([a-zA-Z]*[_]*[0-9]*)*	    {strcpy(yylval.string, yytext); return AIDI;}
["][^\"]*["]                	    {strcpy(yylval.string, yytext + 1); yylval.string[strlen(yytext + 1) - 1] = '\0'; return valoare_fraza;}
['].[']                 	        {yytext[2] = '\0'; strcpy(yylval.string, yytext + 1); return valoare_litera;}
[0]|[-]?[1-9][0-9]*     	        {yylval.num = atoi(yytext); return number;}
[0]|[-]?[1-9][0-9]*\.[0-9]+         {yylval.num = atof(yytext); return number_r;}
[ \t]                  		        ;
[\n]                    	        {yylineno++;}
[-+=*/{};,\[\]]                     {return yytext[0];}
.                       	        {ECHO; yyerror ("Caracter dubios"); printf("%s\n", yytext);}

%%
int yywrap (void) {return 1;}