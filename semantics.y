%{
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include <stdlib.h>

    #define NMAX 1000

    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;

    void yyerror(char *s);
    int yylex();

    struct variable_structure
    {
        char identifier[NMAX];
        int variable_type;

        int simple_type;
        int simple_constant;

        int size_array;
        float array[NMAX];
        char array_string[NMAX][NMAX];
        bool initialized[NMAX];

        int number_of_parameters;
        int types_of_parameters[10];
    }variables[NMAX];

    void createEmptyVariable(int, char*);
    void createVariable(int, char*, struct variable_structure*);
    void createConstantVariable(char*, int, struct variable_structure*);

    int number_of_variables = 0;

%}

%start s

%union 
{
    char string[1000];
	int type; 
	double value; 
	char name[1000];
    struct variable_structure* data_structure; 
}     

%token OR LEQ AND GEQ EQEQ

%token REAL_EQUAL PLUS MINUS PRODUCT DIVIDE LS GE

%token PT DACA VEZI POATE ALTFEL FUNCTIE RASTIMP INTOARCE print 

%token <type> conservator plutitor tipu_meu integru bul litera fraza
%token <name> Valoare_Litera Valoare_Fraza

%token am_plecat

%token number number_r
%token<string> AIDI


/* New */
%type <type> TYPE
%type <data_structure> expression termen




%%


s : ;
/* Prob trebe pe aici line: line etc*/

program : lines { print_symtable(variable_structure, number_of_variables); printf("Program corect sintactic\n"); }

lines : line                    {;}
        | lines line            {;}
        ;

line : am_plecat ';'                    {exit(EXIT_SUCCESS);}
     | assignment ';'                   {;}
     | print expression ';'             {print_val($2);}
     ;

TYPE : plutitor {$$ = $1;}
     | integru {$$ = $1;}
     | bul {$$ = $1;}
     | litera {$$ = $1;}
     | fraza {$$ = $1;}
     ;

assignment : TYPE AIDI  {createEmptyVariable($1, $2); /*functie de creat variabila fara valoare*/ }
           | TYPE AIDI REAL_EQUAL expression {; /* de facut exp si functie de creat variabila cu valoare data de client*/ }
           | conservator TYPE AIDI REAL_EQUAL expression {;/*functie de facut variabila conservatoare*/}
           | TYPE AIDI '[' expression ']' {; /*functie de creat array*/}
           | AIDI REAL_EQUAL expression {;/* functie de update */}
           | AIDI '[' expression ']' REAL_EQUAL expression {;/* functie de update pentru array */}
           ;

expression : termen {$$ = $1;}
           | '(' expression ')' {$$ = $2;}
           | expression MINUS expression {;/* functie de facut scadere dupa tipu datelor*/}
           | expression PLUS expression {;/*same*/}
           | expression PRODUCT expression {;/*same*/}
           | expression DIVIDE expression {;/*same*/}
           | expression LEQ expression {;/*same*/}
           | expression GEQ expression {;/*same*/}
           | expression EQEQ expression {;/*same*/}
           | expression LS expression {;/*same*/}
           | expression GE expression {;/*same*/}
           | expression OR expression {;/*same*/}
           | expression AND expression {;/*same*/}
           ;

termen : AIDI {;/*ceva functie*/}
       ;


%%

int getIndex(char* identifier)
{
    for(int i = 0 ; i < number_of_variables ; ++i)
    {
        if(!strcmp(identifier, variables[i].identifier))
            return i;
    }
    return -1;
}

void createEmptyVariable(int type, char* identifier)
{
    if(getIndex(identifier) == -1)
    {
        printf("Variabila a mai fost declarata!\n");
        exit(0);
    }

    struct variable_structure *new_variable = variables + number_of_variables;

    sprintf(new_variable->identifier, "%s", identifier);
    new_variable->variable_type = type;

    if(type == fraza)
    {
        sprintf(new_variable->array_string[0], "%s", "");
    }
    else
    {
        new_variable->array[0] = 0;
    }

    ++number_of_variables;
}

void createVariable(int type, char* identifier, struct variable_structure* expression)
{
    if(getIndex(identifier) == -1)
    {
        printf("Variabila a mai fost declarata!\n");
        exit(0);
    }

    struct variable_structure *new_variable = variables + number_of_variables;

    sprintf(new_variable->identifier, "%s", identifier);
    new_variable->variable_type = type;
    new_variable->initialized[0] = true;

    if(type == fraza)
    {
        sprintf(new_variable->array_string[0], "%s", expression->array_string[0]);
    }
    else
    if(type == bul)
    {
        new_variable->array[0] = (expression->array[0] == 1);
    }
    else
    {
        new_variable->array[0] = expression->array[0];
    }

    if(strlen(new_variable->identifier) == 0)
        free(expression);
    ++number_of_variables;
}

void print_val(struct variable_structure* nod)
{
    int type = nod->variable_type;
    int n;

    switch(type)
    {
        case integru:
            if (nod->variable_type == 2)
            {
                n = nod->size_array;
                printf("{");

                for (int i = 0 ; i < n - 1 ; i++)
                    printf("%d, ", (int)nod->array[i]);
                printf("%d}\n", (int)nod->array[n - 1]);
                break;
            }
            if (nod->variable_type == 1)
                printf("%d\n", (int)nod->array[0]);
            break;
    }
}

void yyerror(char *s){
    printf("error: %s\n", s);
}
int main(int argc, char** argv)
{
    yyin = fopen(argv[1],"r");
    yyparse();
} 
