%{
void yyerror (char *s);
int yylex();

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define TIP_VARIABILA 1
#define TIP_ARRAY 2
#define TIP_SUBRUTINA 3

extern char* yytext;
extern int yylineno;
extern FILE* yyin;


struct var {
	char id[100];
    char scope[100];
	int tip_variable;

	int type;
	int conservativ;

	int dimensiune_array;
	double array[100];
	char array_fraze[100][1000];
	int e_initializat[100];
	
	int tipuri_parametri[10];
	int numar_parametri;
};

struct parameter {
	int numar_parametri;
	int tipuri_parametri[10];
};

struct var* init_variabila();

int total_variabile = 0;
struct var variabile[100];

struct var* pointer_nr(double, int);
struct var* pointer_fraza(void*, int);
struct var* pointer_variabila(char*);
struct var* pointer_array(char*, struct var*);
struct var* pointer_subrutina(char*, struct parameter*);

void elibereaza_variabila(struct var* v);
int ia_index_variabila(char*);
void actualizeaza_valoarea(char*, struct var*);
void exceptie_plutitor(int);
void impinge_variabila(char*, int, struct var*);
void impinge_variabila_conservatoare(char*, int, struct var*);
void impinge_variabila_goala(char*, int);
void impinge_variabila_structurata(char*);
struct var* compara_variabile(struct var*, struct var*, int);
void printeaza_variabile(struct var*, struct var*);
void creaza_tabel_simboluri(struct var*,int);

void impinge_in_array(char*, int, struct var*);
void actualizeaza_in_array(char*, struct var*, struct var*);
void functie_evaluare(struct var*);

void impinge_parametru(struct parameter*, int);
struct parameter* initializeaza_parametru(int);
void impinge_functie(char*, int, struct parameter*);
char* definite_la_tip_date(int);
%}

%union {
	double num; 
	char string[1000]; 
	int type_id; 
	struct var* strct;
	struct parameter* param_functie;
}     

%start s

%token print

%token INCEPE_DECL TERMINA_DECL INCEPE_MAIN TERMINA_MAIN INCEPE_DECL_FUN TERMINA_DECL_FUN

%type <type_id> TIP_DATA
%token <type_id> integru plutitor litera bul fraza
%token conservator

%token GEQ LEQ AND OR EQEQ LS GE
%token PLUS MINUS PROD DIV EQUAL


%token dak pt rastimp
%type<num> tip_bloc tipuri_bloc bloc_functie
%token altfel

%token subrutina ofera defineste_tip
%type<num> FUNCTION

%token <string> valoare_fraza valoare_litera

%type <type_id> parametru
%type<param_functie> lista_param mai_multi_param lista_apelare_functie parametri_apelare

%token vezi

%token culcat
%token <num> number number_r
%token <string> AIDI
%type <num> linie_decl linie_principala declarari

%type <strct> exp term 

%type <num> asignare

%nonassoc dak altfel

%right EQUAL

%left EQEQ
%left GEQ LEQ LS GE

%left MINUS PLUS
%left DIV PROD


%left OR
%left AND

%%

s   : decl decl_functii main                                 { creaza_tabel_simboluri(variabile,total_variabile);printf( "Program corect sintactic\n" ); }
    | decl main                                             { creaza_tabel_simboluri(variabile,total_variabile);printf( "Program corect sintactic\n" ); }
    | main                                                  { creaza_tabel_simboluri(variabile,total_variabile);printf( "Program corect sintactic\n" ); }
	; 

decl    : INCEPE_DECL declarari TERMINA_DECL
        ;

declarari   	: linie_decl		 			{;}
				| declarari linie_decl			{;}
				;

decl_functii    : INCEPE_DECL_FUN decl_fun TERMINA_DECL_FUN
                ;

decl_fun    : linie_decl_fun                    {;}
            | decl_fun linie_decl_fun           {;}
            ;

linie_decl_fun  : FUNCTION                                   {;}
                | defineste_tip '{' ELEMENTE '}' AIDI ';'    {impinge_variabila_structurata($5);}
                ;

main    : INCEPE_MAIN principala TERMINA_MAIN
        ;

principala  : linie_principala                  {;}
            | principala linie_principala       {;}
            ;

linie_principala    : culcat ';'                        {exit(EXIT_SUCCESS);}
                    | print '(' exp ',' exp ')' ';'				{printeaza_variabile($3, $5);}
                    | IF_ST                             {;}
                    | FOR_ST                            {;}
                    | WHILE_ST                          {;}
                    | vezi '(' exp ')' ';'              {functie_evaluare($3);}
                    ;
linie_decl  : asignare ';'                               {;}
            ;

ELEMENTE : TIP_DATA AIDI ';' ELEMENTE	        {;}
		 |										{;}
		 ;

TIP_DATA   : integru   	            {$$ = $1;}
			| plutitor			    {$$ = $1;}
			| litera 	            {$$ = $1;}
			| bul 	 		        {$$ = $1;}
			| fraza		            {$$ = $1;}
			;
asignare    : TIP_DATA AIDI	 					    {impinge_variabila_goala($2, $1);}
			| TIP_DATA AIDI EQUAL exp  			    {impinge_variabila($2, $1, $4);}
			| conservator TIP_DATA AIDI EQUAL exp  	{impinge_variabila_conservatoare($3, $2, $5);}

			| TIP_DATA AIDI '[' exp ']' 			{impinge_in_array($2, $1, $4);}

			| AIDI EQUAL exp   					    {actualizeaza_valoarea($1, $3);}
			| AIDI '[' exp ']' EQUAL exp			{actualizeaza_in_array($1, $3, $6);}
			;

exp    	: term                     	                {$$ = $1;}
     	| '(' exp ')'			   	                {$$ = $2;}
       	| exp PLUS exp                              {$$ = compara_variabile($1, $3, PLUS);}
       	| exp MINUS exp                             {$$ = compara_variabile($1, $3, MINUS);}
       	| exp PROD exp                              {$$ = compara_variabile($1, $3, PROD);}
        | exp DIV exp          	   	                {$$ = compara_variabile($1, $3, DIV);}
        | print '(' exp ',' exp ')' ';'				{printeaza_variabile($3, $5);}
		| exp AND exp              	                {$$ = compara_variabile($1, $3, AND);}
		| exp OR exp               	                {$$ = compara_variabile($1, $3, OR);}
		| exp LS exp 				                {$$ = compara_variabile($1, $3, LS) ;}
		| exp GE exp 				                {$$ = compara_variabile($1, $3, GE);}
		| exp LEQ exp 				                {$$ = compara_variabile($1, $3, LEQ);}
		| exp GEQ exp 				                {$$ = compara_variabile($1, $3, GEQ);}
		| exp EQEQ exp 				                {$$ = compara_variabile($1, $3, EQEQ);}
		;


term	: AIDI						                {$$ = pointer_variabila($1);} 
		| AIDI '[' exp ']'			                {$$ = pointer_array($1, $3);}
		| AIDI '(' lista_apelare_functie ')' 	    {$$ = pointer_subrutina($1, $3);}
   		| number                			        {$$ = pointer_nr($1, integru);}
		| number_r							        {$$ = pointer_nr($1, plutitor);}
		| valoare_litera					        {$$ = pointer_fraza($1, litera);}
		| valoare_fraza						        {$$ = pointer_fraza($1, fraza);}
        ;

lista_apelare_functie	: parametri_apelare			{$$ = $1;}
				        |							{$$ = initializeaza_parametru(0);}
				        ;

parametri_apelare   : exp						        {$$ = initializeaza_parametru($1->type);}
				    | parametri_apelare ',' exp	        {impinge_parametru($$, $3->type);}
				    ;

IF_ST   : dak '(' exp ')' '{' tipuri_bloc '}'
        | dak '(' exp ')' '{' tipuri_bloc '}' altfel '{' tipuri_bloc '}'
        ;

FOR_ST  : pt '(' AIDI EQUAL exp ';' exp ';' AIDI EQUAL exp ')' '{' tipuri_bloc '}'
        ;

WHILE_ST    : rastimp '(' exp ')' '{' tipuri_bloc '}'
            ;

tipuri_bloc  : tip_bloc 					        {;}
			| tipuri_bloc tip_bloc
			;

tip_bloc 	: asignare ';'			    {;}
			| exp        ';'			{;}
			| print '(' exp ',' exp ')' ';'				{printeaza_variabile($3, $5);}
			| IF_ST 						{;}
			;

FUNCTION 	: TIP_DATA subrutina AIDI '(' lista_param ')' bloc_functie 		    {impinge_functie($3, $1, $5);}
			;

lista_param : mai_multi_param													{$$ = $1;}
			| 																    {$$ = initializeaza_parametru(0);}
			;

mai_multi_param : parametru													    {$$ = initializeaza_parametru($1);}
			    | mai_multi_param ',' parametru									    {impinge_parametru($$, $3);}
			    ;

parametru   : TIP_DATA AIDI											            {$$ = $1;}
			;


bloc_functie	: '{' tipuri_bloc ofera exp ';' '}' 		{;}
			    | '{' ofera exp ';' '}'				{;}
			    ;

%%

struct var *pointer_array(char *id, struct var *node)
{
    int identifier;
    if ((identifier = ia_index_variabila(id)) == -1)
    {
        printf("%s nu a fost declarat.\n", id);
        exit(0);
    }

    struct var *variabila = variabile + identifier;

    if (variabila->tip_variable != TIP_ARRAY)
    {
        printf("Viariabila %s nu e array.\n", variabila->id);
        exit(0);
    }

    if (node->type == fraza)
    {
        printf("Problema array: expresie tip fraza.\n");
        exit(0);
    }

    int n = (int)node->array[0];

    if (n < 0)
    {
        printf("Array-u nu accepta index negativ %d.\n", n);
        exit(0);
    }

    if (n >= variabila->dimensiune_array)
    {
        printf("S-a depasit size-ul maxim pentru variabila %s \n", id);
        exit(0);
    }

    struct var *exp = init_variabila();

    exp->type = variabila->type;

    if (variabila->tip_variable == TIP_ARRAY && variabila->e_initializat[n] == 0)
    {
        printf("%s[%d] nu a fost initializat. Valoarea predefinita va fi folosita. Linia %d.\n", id, n, yylineno);
    }

    if (variabila->type == fraza)
    {
        sprintf(exp->array_fraze[0], "%s", variabila->array_fraze[n]);
    }
    else if (variabila->type == bul)
    {
        exp->array[0] = variabila->array[n] != 0;
    }
    else
    {
        exp->array[0] = variabila->array[n];
    }

    return exp;
}

void creaza_tabel_simboluri(struct var *variabila, int n)
{
    FILE *fd;
    fd = fopen("symbol_table.txt", "w");
    if (fd == NULL)
    {
        char buffer[100];
        sprintf(buffer, "Nu pot deschide fisierul symbol_table.txt.");
        yyerror(buffer);
        exit(0);
    }

    for (int i = 0; i < n; ++i)
    {
        if (variabila[i].tip_variable != TIP_ARRAY && variabila[i].tip_variable != TIP_SUBRUTINA)
        {
            fprintf(fd, "nume : %s  ", variabila[i].id);
            switch (variabila[i].type)
            {
                case integru:
                    fprintf(fd, "tip = integru valoare = %d  ", (int)variabila[i].array[0]);
                    break;

                case litera:
                    fprintf(fd, "tip = litera valoare = '%c' ", (char)variabila[i].array[0]);
                    break;

                case plutitor:
                    fprintf(fd, "tip = plutitor valoare = %f ", (float)variabila[i].array[0]);
                    break;

                case fraza:
                    fprintf(fd, "tip = fraza valoare = \"%s\" ", (char *)variabila[i].array_fraze[0]);
                    break;

                case bul:
                    fprintf(fd, "tip = bul valoare = %d ", (int)variabila[i].array[0]);
                    break;

                case 0:
                    fprintf(fd, "tip = definit de utilizator\n");
                    break;

                default:
                    break;
            }
            if (variabila[i].type != 0)
                if (variabila[i].conservativ)
                    fprintf(fd, "constanta \n");
                else
                    fprintf(fd, "nu e constanta \n");
        }
        else if (variabila[i].tip_variable != TIP_SUBRUTINA)
        {
            fprintf(fd, "nume : %s  ", variabila[i].id);
            switch (variabila[i].type)
            {
                case integru:
                    fprintf(fd, "tip = array de integru");
                    for (int j = 0; j < variabila[i].dimensiune_array; ++j)
                    {
                        fprintf(fd, "%s[%d] = %d  ", variabila[i].id, j, (int)variabila[i].array[j]);
                    }
                    break; 

                case litera:
                    fprintf(fd, "tip = array de litera");
                    for (int j = 0; j < variabila[i].dimensiune_array; ++j)
                    {
                        fprintf(fd, "%s[%d] = %c  ", variabila[i].id, j, (char)variabila[i].array[j]);
                    }
                    break;

                case plutitor:
                    fprintf(fd, "tip = array de plutitor");
                    for (int j = 0; j < variabila[i].dimensiune_array; ++j)
                    {
                        fprintf(fd, "%s[%d] = %f  ", variabila[i].id, j, (float)variabila[i].array[j]);
                    }
                    break;

                case fraza:
                    fprintf(fd, "tip = array de fraza");
                    for (int j = 0; j < variabila[i].dimensiune_array; ++j)
                    {
                        fprintf(fd, " %s[%d] = \"%s\" ", variabila[i].id, j, (char *)variabila[i].array_fraze[j]);
                    }
                    break;

                case bul:
                    fprintf(fd, "tip = array de bul");
                    for (int j = 0; j < variabila[i].dimensiune_array; ++j)
                    {
                        fprintf(fd, "%s[%d] = %d  ", variabila[i].id, j, (int)variabila[i].array[j]);
                    }
                    break;
                default:
                    break;
            }
            fprintf(fd, "\n");
        }
    }
    fprintf(fd, "\n");
    for (int i = 0; i < n; ++i)
    {
        if (variabila[i].tip_variable == TIP_SUBRUTINA)
        {
            fprintf(fd, "Functia : ");
            fprintf(fd, "%s %s", definite_la_tip_date(variabila[i].type), variabila[i].id);
            int nr = variabila[i].numar_parametri;
            if (nr != 0)
            {
                fprintf(fd, " (");
                for (int j = 0; j < nr - 1; ++j)
                {
                    fprintf(fd, "%s, ", definite_la_tip_date(variabila[i].tipuri_parametri[j]));
                }
                fprintf(fd, "%s", definite_la_tip_date(variabila[i].tipuri_parametri[nr - 1]));
                fprintf(fd, ") ");
            }
            else
            {
                fprintf(fd, "();");
            }

            fprintf(fd, "\n");
        }
    }
}
struct var *pointer_variabila(char *id)
{
    int identifier;
    if ((identifier = ia_index_variabila(id)) == -1)
    {
        printf("%s nu a fost declarat in acest scope.\n", id);
        exit(0);
    }

    struct var *variabila = variabile + identifier;

    if (variabila->tip_variable == TIP_VARIABILA && variabila->e_initializat[0] == 0)
    {
        printf("%s nu a fost initializat. Vom folosi o valoare arbitrara. La linia %d.\n", id, yylineno);
    }

    if (variabila->tip_variable == TIP_SUBRUTINA)
    {
        variabila->array[0] = 0;
    }

    return variabila;
}

struct var *pointer_subrutina(char *id, struct parameter *pr)
{
    int identifier;
    if ((identifier = ia_index_variabila(id)) == -1)
    {
        printf("Functia %s nu a fost declarata in acest scop.\n", id);
        exit(0);
    }

    struct var *variabila = variabile + identifier;

    if (variabila->tip_variable != TIP_SUBRUTINA)
    {
        printf("%s nu e o variabila, e o functie.\n", variabila->id);
        exit(0);
    }

    if (variabila->numar_parametri != pr->numar_parametri)
    {
        printf("Nu se respecta numarul de variabile %s.\n", variabila->id);
        exit(0);
    }

    int n = variabila->numar_parametri;

    int *funParams = variabila->tipuri_parametri;
    int *callParams = pr->tipuri_parametri;

    for (int i = 0; i < n; ++i)
    {
        if (funParams[i] != callParams[i])
        {
            printf("%s nu respecta tipul de date.\n", variabila->id);
            printf("Parametrul %d e %s dar trebuie sa fie %s.\n", i + 1, definite_la_tip_date(callParams[i]), definite_la_tip_date(funParams[i]));
            exit(0);
        }
    }

    variabila = init_variabila();
    variabila->type = integru;
    variabila->array[0] = 0;

    return variabila;
}

void impinge_functie(char *id, int retType, struct parameter *p)
{
    for (int i = 0; i < total_variabile; ++i)
    {
        if (strcmp(id, variabile[i].id) == 0)
        {
            if(variabile[i].type == retType && variabile[i].numar_parametri == p->numar_parametri)
            {
                printf("Mai exista o functie numita %s cu acelasi numar de parametri si acelasi tip de date.\n", id);
                exit(0);
            }
        }
    }

    struct var *new_variable = variabile + total_variabile;

    sprintf(new_variable->id, "%s", id);
    new_variable->tip_variable = TIP_SUBRUTINA;
    new_variable->type = retType;
    new_variable->numar_parametri = p->numar_parametri;
    for (int i = 0; i < p->numar_parametri; ++i)
    {
        new_variable->tipuri_parametri[i] = p->tipuri_parametri[i];
    }

    free(p);
    ++total_variabile;
}
void functie_evaluare(struct var *x)
{
    if (x->type == integru)
        printf("%d\n", (int)x->array[0]);
    else
    {
        printf("Tipul trebuie sa fie integru.\n");
        exit(0);
    }
}
int ia_index_variabila(char *varName)
{
    for (int i = 0; i < total_variabile; ++i)
    {
        if (strcmp(varName, variabile[i].id) == 0)
        {
            return i;
        }
    }

    return -1;
}
struct var *pointer_fraza(void *val, int type)
{
    struct var *variabila = init_variabila();

    variabila->type = type;

    if (type == fraza)
    {
        sprintf(variabila->array_fraze[0], "%s", (char *)val);
    }
    else
    {
        variabila->array[0] = ((char *)val)[0];
    }

    return variabila;
}

void impinge_parametru(struct parameter *p, int type)
{
    p->tipuri_parametri[p->numar_parametri++] = type;
}

struct parameter *initializeaza_parametru(int type)
{
    struct parameter *new_parameter = (struct parameter *)malloc(sizeof(struct parameter));
    if (type == 0)
    {
        new_parameter->numar_parametri = 0;
        return new_parameter;
    }

    new_parameter->numar_parametri = 1;
    new_parameter->tipuri_parametri[0] = type;

    return new_parameter;
}

void printeaza_variabile(struct var *node, struct var *node2)
{
    char msg[1000];
    bzero(msg, sizeof(msg));

    int type = node->type;
    int n;
    // Pentru node

    switch (type)
    {
        case fraza:
            if (node->tip_variable == TIP_VARIABILA)
            {
                strcat(msg, node->array_fraze[0]);
            }
            else
            {
                printf("EROARE: Sintaxa print-ului este: Fraza + integru/plutitor/etc\n");
                exit(0);
            }
                //printf("\"%s\"\n", node->array_fraze[0]);
            break;

        default:
            printf("EROARE: Sintaxa print-ului este: Fraza + integru/plutitor/etc\n");
            exit(0);
            break;
    }

    if (strcmp(node->array_fraze[0], " Rezultat if:") == 0)
    {
        printf("​");
    }
    else
    {

    printf("%s", msg);
    type = node2->type;

    switch (type)
    {
        case integru:
            if (node2->tip_variable == TIP_ARRAY)
            {
                n = node2->dimensiune_array;
                printf("{");
                for (int index = 0; index < n - 1; ++index)
                {
                    printf("%d, ", (int)node2->array[index]);
                }
                printf("%d", (int)node2->array[n - 1]);
                printf("}\n");
                break;
            }
            if (node2->tip_variable == TIP_VARIABILA)
                printf("%d\n", (int)node2->array[0]);
            break;

        case plutitor:
            if (node2->tip_variable == TIP_ARRAY)
            {
                
                n = node2->dimensiune_array;
                printf("{");
                for (int index = 0; index < n - 1; ++index)
                {
                    printf("%f, ", (float)node2->array[index]);
                }
                printf("%f", (float)node2->array[n - 1]);
                printf("}\n");
                break;
            }
            if (node2->tip_variable == TIP_VARIABILA)
                printf("%f\n", (float)node2->array[0]);
            break;

        case bul:
            if (node2->tip_variable == TIP_ARRAY)
            {
                n = node2->dimensiune_array;
                printf("{");
                for (int index = 0; index < n - 1; ++index)
                {
                    printf("\"%d\", ", (int)node2->array[index]);
                }
                printf("\"%d\"", (int)node2->array[n - 1]);
                printf("}\n");
                break;
            }
            if (node2->tip_variable == TIP_VARIABILA)
                printf("%d\n", (int)node2->array[0]);
            break;

        case litera:
            if (node2->tip_variable == TIP_ARRAY)
            {
                n = node2->dimensiune_array;
                printf("{");
                for (int index = 0; index < n - 1; ++index)
                {
                    printf("'%c', ", (char)node2->array[index]);
                }
                printf("'%c'", (char)node2->array[n - 1]);
                printf("}\n");
                break;
            }
            if (node2->tip_variable == TIP_VARIABILA)
                printf("'%c'\n", (char)node2->array[0]);
            break;

        case fraza:
            if (node2->tip_variable == TIP_ARRAY)
            {
                n = node2->dimensiune_array;
                printf("{");
                for (int index = 0; index < n - 1; ++index)
                {
                    printf("\"%s\", ", node2->array_fraze[index]);
                }
                printf("\"%s\"", node2->array_fraze[n - 1]);
                printf("}\n");
                break;
            }
            if (node2->tip_variable == TIP_VARIABILA)
                printf("\"%s\"\n", node2->array_fraze[0]);
            break;

        default:
            break;
    }

    if (node2->tip_variable == TIP_SUBRUTINA)
    {
        printf("%s %s", definite_la_tip_date(node2->type), node2->id);
        n = node2->numar_parametri;
        if (n != 0)
        {
            printf(" -> {");
            for (int index = 0; index < n - 1; ++index)
            {
                printf("%s, ", definite_la_tip_date(node2->tipuri_parametri[index]));
            }
            printf("%s}", definite_la_tip_date(node2->tipuri_parametri[n - 1]));
        }

        printf("\n");
    }
    }
}

struct var *pointer_nr(double val, int type)
{
    struct var *variabila = init_variabila();

    variabila->array[0] = val;
    variabila->type = type;

    return variabila;
}

void elibereaza_variabila(struct var *variabila)
{
    if (strlen(variabila->id) == 0)
    {
        free(variabila);
    }
}

void impinge_variabila_structurata(char *id)
{
    if (ia_index_variabila(id) != -1)
    {
        printf("Variabila %s a fost declarata\n", id);
        exit(0);
    }

    struct var *new_variable = variabile + total_variabile;

    sprintf(new_variable->id, "%s", id);
    new_variable->type = 0;

    ++total_variabile;
}

void impinge_variabila_goala(char *id, int type)
{
    if (ia_index_variabila(id) != -1)
    {
        printf("Variabila %s a fost declarata anterior.\n", id);
        exit(0);
    }

    struct var *variable = variabile + total_variabile;

    sprintf(variable->id, "%s", id);
    variable->type = type;

    if (type == fraza)
    {
        sprintf(variable->array_fraze[0], "%s", "");
    }
    else
    {
        variable->array[0] = 0;
    }

    ++total_variabile;
}

void impinge_variabila(char *id, int type, struct var *exp)
{
    if (ia_index_variabila(id) != -1)
    {
        printf("Variabila %s a fost deja declarata.\n", id);
        exit(0);
    }

    struct var *variable = variabile + total_variabile;

    sprintf(variable->id, "%s", id);
    variable->type = type;
    variable->e_initializat[0] = 1;
    if (type == fraza)
    {
        sprintf(variable->array_fraze[0], "%s", exp->array_fraze[0]);
    }
    else if (type == bul)
    {
        variable->array[0] = exp->array[0] != 0;
    }
    else
    {
        variable->array[0] = exp->array[0];
    }

    elibereaza_variabila(exp);
    ++total_variabile;
}

void actualizeaza_valoarea(char *id, struct var *exp)
{
    int identifier;
    if ((identifier = ia_index_variabila(id)) == -1)
    {
        printf("%s nu a fost declarata.\n", id);
        exit(0);
    }

    struct var *vr = variabile + identifier;

    if (vr->tip_variable == TIP_SUBRUTINA)
    {
        printf("Functia %s nu poate fi modificata.\n", vr->id);
        exit(0);
    }

    if (vr->tip_variable == TIP_ARRAY && exp->tip_variable != TIP_ARRAY)
    {
        printf("Variabila %s e un array, dar expresia nu e.\n", vr->id);
        exit(0);
    }

    if (vr->tip_variable != TIP_ARRAY && exp->tip_variable == TIP_ARRAY)
    {
        printf("Variabila %s nu e array.\n", vr->id);
        exit(0);
    }

    if (vr->type == fraza && exp->type != fraza || vr->type != fraza && exp->type == fraza)
    {
        printf("Tipu de date trebuie sa fie la fel.\n");
        exit(0);
    }

    if (vr->conservativ)
    {
        printf("Variabila %s e constanta.\n", id);
        exit(0);
    }

    if (vr->tip_variable == TIP_ARRAY && exp->tip_variable == TIP_ARRAY)
    {

        int n = vr->dimensiune_array;
        int m = exp->dimensiune_array;

        for (int i = 0; i < n && i < m; ++i)
        {
            if (vr->type == fraza)
            {
                sprintf(vr->array_fraze[i], "%s", exp->array_fraze[i]);
            }
            else if (vr->type == bul)
            {
                vr->array[i] = exp->array[i] != 0;
            }
            else
            {
                vr->array[i] = exp->array[i];
            }
        }

        return;
    }

    vr->e_initializat[0] = 1;
    if (vr->type == fraza)
    {
        sprintf(vr->array_fraze[0], "%s", exp->array_fraze[0]);
    }
    else if (vr->type == bul)
    {
        vr->array[0] = exp->array[0] != 0;
    }
    else
    {
        vr->array[0] = exp->array[0];
    }
}

void impinge_variabila_conservatoare(char *id, int type, struct var *exp)
{
    if (ia_index_variabila(id) != -1)
    {
        printf("Variabila %s a fost declarata anterior.\n", id);
        exit(0);
    }

    struct var *variable = variabile + total_variabile;

    sprintf(variable->id, "%s", id);
    variable->type = type;

    if (type == fraza)
    {
        sprintf(variable->array_fraze[0], "%s", exp->array_fraze[0]);
    }
    else if (type == bul)
    {
        variable->array[0] = exp->array[0] != 0;
    }
    else
    {
        variable->array[0] = exp->array[0];
    }
    variable->conservativ = 1;
    variable->e_initializat[0] = 1;
    elibereaza_variabila(exp);
    ++total_variabile;
}

void impinge_in_array(char *id, int type, struct var *exp)
{
    if (ia_index_variabila(id) != -1)
    {
        printf("Variabila %s a fost declarata anterior.\n", id);
        exit(0);
    }

    if (exp->type == fraza)
    {
        printf("Tipurile array nu pot fi declarate folosing o expresie de tip fraza.\n");
        exit(0);
    }

    int n = (int)exp->array[0];

    if (n <= 0)
    {
        printf("Dimnesiunea unui array trebuie sa fie macar 1.\n");
        exit(0);
    }

    struct var *variable = variabile + total_variabile;

    if (variable->type == fraza && exp->type != fraza || variable->type != fraza && exp->type == fraza)
    {
        printf("Tipurile de date ar trebui sa fie aceleasi.\n");
        exit(0);
    }

    sprintf(variable->id, "%s", id);

    variable->type = type;
    variable->tip_variable = TIP_ARRAY;
    variable->dimensiune_array = n;

    ++total_variabile;
}


void actualizeaza_in_array(char *id, struct var *first_expression, struct var *second_expression)
{
    int identifier;
    if ((identifier = ia_index_variabila(id)) == -1)
    {
        printf("%s nu a fost declarat in acest scope.\n", id);
        exit(0);
    }

    struct var *variable = variabile + identifier;

    if (variable->tip_variable == TIP_SUBRUTINA)
    {
        printf("Expresie invalida pentru functia: \"%s\".\n", variable->id);
        exit(0);
    }

    if (first_expression->type == fraza)
    {
        printf("Array-ul nu poate fi accesat cu o expresie tip \"fraza\".\n");
        exit(0);
    }

    int n = (int)first_expression->array[0];

    if (n < 0)
    {
        printf("Index-ul array-ului ar trebui sa fie mai mare decat 0, dar este: %d.\n", n);
        exit(0);
    }

    if (n >= variable->dimensiune_array)
    {
        printf("Dimensiunea array-ului depasita pentru array-ul %s: %d, unde index-ul maxim este: %d.\n", id, n, variable->dimensiune_array - 1);
        exit(0);
    }

    if (variable->type == fraza && second_expression->type != fraza || variable->type != fraza && second_expression->type == fraza)
    {
        printf("Tipul de date ar trebui sa fie acelasi pentru: %s[%d].\n", id, n);
        exit(0);
    }

    variable->e_initializat[n] = 1;

    if (variable->type == fraza)
    {
        sprintf(variable->array_fraze[n], "%s", second_expression->array_fraze[0]);
    }
    else if (variable->type == bul)
    {
        variable->array[n] = second_expression->array[0] != 0;
    }
    else
    {
        variable->array[n] = second_expression->array[0];
    }
}

struct var *compara_variabile(struct var *first_var, struct var *second_var, int tip_op)
{

    struct var *variable = init_variabila();
    double c;

    int n;

    switch (tip_op)
    {
        case PLUS:
            if (first_var->type == fraza && second_var->type == fraza)
            {
                variable->type = fraza;
                strcpy(variable->array_fraze[0], "");
                strcat(variable->array_fraze[0], first_var->array_fraze[0]);
                strcat(variable->array_fraze[0], second_var->array_fraze[0]);
                break;
            }

            if (first_var->type != fraza && second_var->type == fraza)
            {
                variable->type = fraza;
                strcpy(variable->array_fraze[0], "");
                sprintf(variable->array_fraze[0], "%f", (float)first_var->array[0]);
                strcat(variable->array_fraze[0], second_var->array_fraze[0]);
                break;
            }

            if (first_var->type == fraza && second_var->type != fraza)
            {
                variable->type = fraza;
                strcpy(variable->array_fraze[0], "");

                strcat(variable->array_fraze[0], first_var->array_fraze[0]);
                char bfr[10];
                sprintf(bfr, "%f", (float)second_var->array[0]);
                strcat(variable->array_fraze[0], bfr);
                break;
            }

            if (first_var->type == litera)
            {
                variable->type = litera;
                variable->array[0] = (int)(first_var->array[0] + second_var->array[0]);
                break;
            }

            c = first_var->array[0] + second_var->array[0];

            if (c == (int)c)
            {
                variable->type = integru;
                variable->array[0] = (int)c;
            }
            else
            {
                variable->type = plutitor;
                variable->array[0] = c;
            }
            break;
        case MINUS:

            if (first_var->type == litera)
            {
                variable->type = litera;
                variable->array[0] = (int)(first_var->array[0] - second_var->array[0]);
                break;
            }

            c = first_var->array[0] - second_var->array[0];

            if (c == (int)c)
            {
                variable->type = integru;
                variable->array[0] = (int)c;
            }
            else
            {
                variable->type = plutitor;
                variable->array[0] = c;
            }
            break;
        case PROD:
            c = first_var->array[0] * second_var->array[0];

            if (c == (int)c)
            {
                variable->type = integru;
                variable->array[0] = (int)c;
            }
            else
            {
                variable->type = plutitor;
                variable->array[0] = c;
            }
            break;
        case DIV:
            c = first_var->array[0] / second_var->array[0];
            if (c == (int)c)
                variable->type = integru;
            else
                variable->type = plutitor;
            if (second_var->array[0] == 0)
            {
                printf("Impartirea la 0 este imposibila.\n");
                exit(0);
            }

            c = first_var->array[0] / second_var->array[0];

            if (c == (int)c)
            {
                variable->type = integru;
                variable->array[0] = (int)c;
            }
            else
            {
                variable->type = plutitor;
                variable->array[0] = c;
            }
            break;
        case LS:
            if (first_var->type == fraza && second_var->type == fraza)
            {
                n = strcmp(first_var->array_fraze[0], second_var->array_fraze[0]);
                variable->array[0] = n == -1;
            }
            else
            {
                variable->array[0] = (int)(first_var->array[0] < second_var->array[0]);
            }
            variable->type = integru;
            break;
        case LEQ:
            if (first_var->type == fraza && second_var->type == fraza)
            {
                n = strcmp(first_var->array_fraze[0], second_var->array_fraze[0]);
                variable->array[0] = n == -1 || n == 0;
            }
            else
            {
                variable->array[0] = (int)(first_var->array[0] <= second_var->array[0]);
            }
            variable->type = integru;
            break;
        case GE:
            if (first_var->type == fraza && second_var->type == fraza)
            {
                n = strcmp(first_var->array_fraze[0], second_var->array_fraze[0]);
                variable->array[0] = n == 1;
            }
            else
            {
                variable->array[0] = (int)(first_var->array[0] > second_var->array[0]);
            }
            variable->type = integru;
            break;
        case GEQ:
            if (first_var->type == fraza && second_var->type == fraza)
            {
                n = strcmp(first_var->array_fraze[0], second_var->array_fraze[0]);
                variable->array[0] = n == 1 || n == 0;
            }
            else
            {
                variable->array[0] = (int)(first_var->array[0] >= second_var->array[0]);
            }
            variable->type = integru;
            break;
        case EQEQ:
            if (first_var->type == fraza && second_var->type == fraza)
            {
                n = strcmp(first_var->array_fraze[0], second_var->array_fraze[0]);
                variable->array[0] = n == 0;
            }
            else
            {
                variable->array[0] = (int)(first_var->array[0] == second_var->array[0]);
            }
            variable->type = integru;
            break;
    }

    elibereaza_variabila(first_var);
    elibereaza_variabila(second_var);
    return variable;
}

struct var *init_variabila()
{
    struct var *variable = (struct var *)malloc(sizeof(struct var));

    sprintf(variable->id, "%s", "");
    sprintf(variable->array_fraze[0], "%s", "");

    variable->array[0] = 0;
    variable->tip_variable = TIP_VARIABILA;
    variable->type = 0;

    return variable;
}

char *definite_la_tip_date(int n)
{
    switch (n)
    {
        case bul:
            return "bul";
            break;
        case litera:
            return "litera";
            break;
        case integru:
            return "integru";
            break;
        case plutitor:
            return "plutitor";
            break;
        case fraza:
            return "fraza";
            break;
    }
    return "";
}

int main(void)
{

    for (int index = 0; index < 100; ++index)
    {
        variabile[index].tip_variable = TIP_VARIABILA;
        variabile[index].e_initializat[0] = 0;
    }

    yyin = fopen("input.txt", "r");
    return yyparse();
}

void yyerror(char *s)
{
    printf("Eroare: %s la linia %d\n", s, yylineno);
}
