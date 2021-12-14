%{
    #include <stdio.h>
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;
%}

%start s

%union 
{
	int type; 
	double value; 
	char name[1000]; 
}     

%token OR LEQ AND GEQ EQEQ

%token REAL_EQUAL PLUS MINUS PRODUCT DIVIDE LS GE

%token PT DACA VEZI POATE ALTFEL FUNCTIE RASTIMP INTOARCE print 

%token <type> conservator plutitor tipu_meu integru bul litera fraza
%token <name> Valoare_Litera Valoare_Fraza

%token am_plecat

%token AIDI number number_r




%%
s : ;
%%
void yyerror(char *s){
    printf("error: %s\n", s);
}
int main(int argc, char** argv)
{
    yyin = fopen(argv[1],"r");
    yyparse();
} 
