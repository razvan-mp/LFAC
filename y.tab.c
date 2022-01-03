/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "semantics.y"

void yyerror (char *s);
int yylex();
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char* yytext;
extern FILE* yyin;
extern int yylineno;

#define TIP_VARIABILA 1
#define TIP_ARRAY 2
#define TIP_SUBRUTINA 3

struct var {
	char id[100];
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
void printeaza_variabile(struct var*);
void creaza_tabel_simboluri(struct var*,int);

void impinge_in_array(char*, int, struct var*);
void actualizeaza_in_array(char*, struct var*, struct var*);
void functie_evaluare(struct var*);

void impinge_parametru(struct parameter*, int);
struct parameter* initializeaza_parametru(int);
void impinge_functie(char*, int, struct parameter*);
char* definite_la_tip_date(int);

#line 140 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    print = 258,                   /* print  */
    integru = 259,                 /* integru  */
    plutitor = 260,                /* plutitor  */
    litera = 261,                  /* litera  */
    bul = 262,                     /* bul  */
    fraza = 263,                   /* fraza  */
    conservator = 264,             /* conservator  */
    GEQ = 265,                     /* GEQ  */
    LEQ = 266,                     /* LEQ  */
    AND = 267,                     /* AND  */
    OR = 268,                      /* OR  */
    EQEQ = 269,                    /* EQEQ  */
    LS = 270,                      /* LS  */
    GE = 271,                      /* GE  */
    PLUS = 272,                    /* PLUS  */
    MINUS = 273,                   /* MINUS  */
    PROD = 274,                    /* PROD  */
    DIV = 275,                     /* DIV  */
    EQUAL = 276,                   /* EQUAL  */
    dak = 277,                     /* dak  */
    rastimp = 278,                 /* rastimp  */
    pt = 279,                      /* pt  */
    altfel = 280,                  /* altfel  */
    poate = 281,                   /* poate  */
    subrutina = 282,               /* subrutina  */
    ofera = 283,                   /* ofera  */
    defineste_tip = 284,           /* defineste_tip  */
    valoare_fraza = 285,           /* valoare_fraza  */
    valoare_litera = 286,          /* valoare_litera  */
    vezi = 287,                    /* vezi  */
    culcat = 288,                  /* culcat  */
    number = 289,                  /* number  */
    number_r = 290,                /* number_r  */
    AIDI = 291                     /* AIDI  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define print 258
#define integru 259
#define plutitor 260
#define litera 261
#define bul 262
#define fraza 263
#define conservator 264
#define GEQ 265
#define LEQ 266
#define AND 267
#define OR 268
#define EQEQ 269
#define LS 270
#define GE 271
#define PLUS 272
#define MINUS 273
#define PROD 274
#define DIV 275
#define EQUAL 276
#define dak 277
#define rastimp 278
#define pt 279
#define altfel 280
#define poate 281
#define subrutina 282
#define ofera 283
#define defineste_tip 284
#define valoare_fraza 285
#define valoare_litera 286
#define vezi 287
#define culcat 288
#define number 289
#define number_r 290
#define AIDI 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 70 "semantics.y"

	double num; 
	char string[1000]; 
	int type_id; 
	struct var* strct;
	struct parameter* param_functie;

#line 273 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_print = 3,                      /* print  */
  YYSYMBOL_integru = 4,                    /* integru  */
  YYSYMBOL_plutitor = 5,                   /* plutitor  */
  YYSYMBOL_litera = 6,                     /* litera  */
  YYSYMBOL_bul = 7,                        /* bul  */
  YYSYMBOL_fraza = 8,                      /* fraza  */
  YYSYMBOL_conservator = 9,                /* conservator  */
  YYSYMBOL_GEQ = 10,                       /* GEQ  */
  YYSYMBOL_LEQ = 11,                       /* LEQ  */
  YYSYMBOL_AND = 12,                       /* AND  */
  YYSYMBOL_OR = 13,                        /* OR  */
  YYSYMBOL_EQEQ = 14,                      /* EQEQ  */
  YYSYMBOL_LS = 15,                        /* LS  */
  YYSYMBOL_GE = 16,                        /* GE  */
  YYSYMBOL_PLUS = 17,                      /* PLUS  */
  YYSYMBOL_MINUS = 18,                     /* MINUS  */
  YYSYMBOL_PROD = 19,                      /* PROD  */
  YYSYMBOL_DIV = 20,                       /* DIV  */
  YYSYMBOL_EQUAL = 21,                     /* EQUAL  */
  YYSYMBOL_dak = 22,                       /* dak  */
  YYSYMBOL_rastimp = 23,                   /* rastimp  */
  YYSYMBOL_pt = 24,                        /* pt  */
  YYSYMBOL_altfel = 25,                    /* altfel  */
  YYSYMBOL_poate = 26,                     /* poate  */
  YYSYMBOL_subrutina = 27,                 /* subrutina  */
  YYSYMBOL_ofera = 28,                     /* ofera  */
  YYSYMBOL_defineste_tip = 29,             /* defineste_tip  */
  YYSYMBOL_valoare_fraza = 30,             /* valoare_fraza  */
  YYSYMBOL_valoare_litera = 31,            /* valoare_litera  */
  YYSYMBOL_vezi = 32,                      /* vezi  */
  YYSYMBOL_culcat = 33,                    /* culcat  */
  YYSYMBOL_number = 34,                    /* number  */
  YYSYMBOL_number_r = 35,                  /* number_r  */
  YYSYMBOL_AIDI = 36,                      /* AIDI  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* '('  */
  YYSYMBOL_39_ = 39,                       /* ')'  */
  YYSYMBOL_40_ = 40,                       /* '{'  */
  YYSYMBOL_41_ = 41,                       /* '}'  */
  YYSYMBOL_42_ = 42,                       /* '['  */
  YYSYMBOL_43_ = 43,                       /* ']'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_declarari = 47,                 /* declarari  */
  YYSYMBOL_linie = 48,                     /* linie  */
  YYSYMBOL_ELEMENTE = 49,                  /* ELEMENTE  */
  YYSYMBOL_TIP_DATA = 50,                  /* TIP_DATA  */
  YYSYMBOL_asignare = 51,                  /* asignare  */
  YYSYMBOL_exp = 52,                       /* exp  */
  YYSYMBOL_term = 53,                      /* term  */
  YYSYMBOL_lista_apelare_functie = 54,     /* lista_apelare_functie  */
  YYSYMBOL_parametri_apelare = 55,         /* parametri_apelare  */
  YYSYMBOL_stat = 56,                      /* stat  */
  YYSYMBOL_ELSE_ = 57,                     /* ELSE_  */
  YYSYMBOL_ELIF_S = 58,                    /* ELIF_S  */
  YYSYMBOL_ELIF_ = 59,                     /* ELIF_  */
  YYSYMBOL_bloc_cod = 60,                  /* bloc_cod  */
  YYSYMBOL_tipuri_bloc = 61,               /* tipuri_bloc  */
  YYSYMBOL_tip_bloc = 62,                  /* tip_bloc  */
  YYSYMBOL_FUNCTION = 63,                  /* FUNCTION  */
  YYSYMBOL_lista_param = 64,               /* lista_param  */
  YYSYMBOL_more_params = 65,               /* more_params  */
  YYSYMBOL_parametru = 66,                 /* parametru  */
  YYSYMBOL_smtm_fun = 67                   /* smtm_fun  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   575

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,    39,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   130,   130,   133,   134,   137,   138,   139,   140,   141,
     142,   143,   146,   147,   150,   151,   152,   153,   154,   157,
     158,   160,   162,   164,   165,   169,   170,   171,   172,   173,
     174,   176,   177,   178,   179,   180,   181,   182,   186,   187,
     188,   189,   190,   191,   192,   195,   196,   199,   200,   203,
     204,   205,   206,   207,   208,   211,   214,   215,   218,   221,
     222,   225,   226,   229,   230,   231,   232,   237,   240,   241,
     244,   245,   248,   252,   253
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "print", "integru",
  "plutitor", "litera", "bul", "fraza", "conservator", "GEQ", "LEQ", "AND",
  "OR", "EQEQ", "LS", "GE", "PLUS", "MINUS", "PROD", "DIV", "EQUAL", "dak",
  "rastimp", "pt", "altfel", "poate", "subrutina", "ofera",
  "defineste_tip", "valoare_fraza", "valoare_litera", "vezi", "culcat",
  "number", "number_r", "AIDI", "';'", "'('", "')'", "'{'", "'}'", "'['",
  "']'", "','", "$accept", "program", "declarari", "linie", "ELEMENTE",
  "TIP_DATA", "asignare", "exp", "term", "lista_apelare_functie",
  "parametri_apelare", "stat", "ELSE_", "ELIF_S", "ELIF_", "bloc_cod",
  "tipuri_bloc", "tip_bloc", "FUNCTION", "lista_param", "more_params",
  "parametru", "smtm_fun", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    59,    40,    41,
     123,   125,    91,    93,    44
};
#endif

#define YYPACT_NINF (-122)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     252,   100,  -122,  -122,  -122,  -122,  -122,     9,   -29,   -26,
       7,     2,    32,    34,   -15,    23,   252,  -122,   -17,    36,
    -122,  -122,  -122,  -122,  -122,  -122,   -13,   100,   421,  -122,
      45,   100,   100,    46,     9,   100,  -122,   100,   100,  -122,
    -122,    51,   -14,  -122,   100,   100,   298,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,  -122,    67,
     309,   339,    75,    56,    64,   350,   181,    47,    65,   100,
     100,   181,    74,    60,   108,  -122,   274,   274,  -122,    98,
     217,   274,   274,    72,    72,    20,    20,   100,    76,    76,
     100,    78,    80,    95,   112,     9,   181,   253,  -122,   100,
    -122,   181,    71,    15,  -122,   432,   102,     9,  -122,   100,
     105,   103,   109,  -122,  -122,   181,   100,   -20,  -122,   116,
     118,   460,  -122,   141,  -122,    76,   119,  -122,    15,  -122,
     100,  -122,  -122,   181,  -122,   121,     9,   471,   100,  -122,
    -122,  -122,  -122,  -122,   100,  -122,  -122,   499,   180,  -122,
    -122,  -122,   287,   380,   120,   100,   216,   112,    76,   137,
     510,   100,  -122,   100,   125,   538,   391,  -122,   126,    76,
    -122,  -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     0,     0,
       8,     9,    44,    43,    41,    42,    38,     0,     0,    25,
       0,     0,     0,     0,    13,     0,     6,     0,     0,     1,
       4,     0,    19,     5,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,    47,     0,    45,     0,    26,    36,    35,    31,    32,
      37,    33,    34,    27,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    20,     0,    40,     0,
      39,    21,     0,    49,    53,     0,     0,    13,    10,     0,
       0,     0,    68,    70,    22,    48,     0,    38,    60,     0,
       0,     0,    66,     0,    61,     0,     0,    51,    52,    56,
       0,    11,    12,    24,    72,     0,     0,     0,     0,    63,
      64,    59,    62,    55,     0,    50,    57,     0,     0,    67,
      71,    65,     0,     0,     0,     0,     0,    39,     0,     0,
       0,     0,    58,     0,     0,     0,     0,    74,     0,     0,
      73,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,   143,    61,     4,     5,    -1,  -122,  -122,
    -122,     8,    41,  -122,    42,   -86,    25,  -121,  -122,  -122,
    -122,    38,  -122
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    15,    16,    17,    63,   119,   120,   121,    29,    72,
      73,   122,   127,   128,   129,   103,   123,   124,    21,   111,
     112,   113,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      28,    37,   142,   104,    18,    19,    37,    69,    20,    31,
      41,    30,    32,     2,     3,     4,     5,     6,    44,    42,
      18,    19,   138,    39,    20,    44,    46,    38,    70,    45,
      60,    61,    49,    50,    65,   142,    66,    67,    64,   143,
     125,   126,    34,    71,    74,    33,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    96,    97,
      35,    36,   162,    43,   116,     2,     3,     4,     5,     6,
       7,    59,    62,   171,    49,    50,   101,    68,    87,   105,
      94,    56,    57,     8,     9,    10,    90,    91,   115,   110,
      92,    22,    23,    95,    99,    24,    25,   117,   133,    27,
      49,    64,   118,    98,   106,   137,   102,   107,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,   147,
      22,    23,   108,   109,    24,    25,    26,   152,    27,   131,
     110,   134,   135,   153,   116,     2,     3,     4,     5,     6,
       7,   100,    42,   136,   160,   139,   159,   144,   163,    40,
     165,   148,   166,     8,     9,    10,   167,   170,   132,   145,
     146,    22,    23,   156,   150,    24,    25,   117,     0,    27,
       0,     0,   141,   116,     2,     3,     4,     5,     6,     7,
       0,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     8,     9,    10,     0,     0,     0,   155,     0,
      22,    23,     0,     0,    24,    25,   117,     0,    27,   116,
       2,     3,     4,     5,     6,     7,     0,    47,    48,    49,
      50,     0,    52,    53,    54,    55,    56,    57,     8,     9,
      10,     0,     0,     0,   161,     0,    22,    23,     0,     0,
      24,    25,   117,     0,    27,     1,     2,     3,     4,     5,
       6,     7,     0,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,     8,     9,    10,     0,     0,     0,
       0,    11,     0,     0,    12,    13,    49,    50,    14,     0,
       0,    54,    55,    56,    57,     0,   114,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
     157,     0,     0,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,     0,   158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     169,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     0,     0,     0,     0,     0,   140,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   151,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168
};

static const yytype_int16 yycheck[] =
{
       1,    21,   123,    89,     0,     0,    21,    21,     0,    38,
      27,     7,    38,     4,     5,     6,     7,     8,    38,    36,
      16,    16,    42,     0,    16,    38,    27,    42,    42,    42,
      31,    32,    12,    13,    35,   156,    37,    38,    34,   125,
      25,    26,    40,    44,    45,    38,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    69,    70,
      38,    37,   158,    37,     3,     4,     5,     6,     7,     8,
       9,    36,    36,   169,    12,    13,    87,    36,    21,    90,
      43,    19,    20,    22,    23,    24,    21,    41,    99,    95,
      36,    30,    31,    38,    44,    34,    35,    36,   109,    38,
      12,   107,    41,    39,    36,   116,    40,    37,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   130,
      30,    31,    37,    21,    34,    35,    36,   138,    38,    37,
     136,    36,    39,   144,     3,     4,     5,     6,     7,     8,
       9,    43,    36,    44,   155,    37,    36,    38,    21,    16,
     161,    40,   163,    22,    23,    24,    41,    41,   107,   128,
     128,    30,    31,   148,   136,    34,    35,    36,    -1,    38,
      -1,    -1,    41,     3,     4,     5,     6,     7,     8,     9,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    22,    23,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,    -1,    -1,    34,    35,    36,    -1,    38,     3,
       4,     5,     6,     7,     8,     9,    -1,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    22,    23,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,    -1,
      34,    35,    36,    -1,    38,     3,     4,     5,     6,     7,
       8,     9,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    22,    23,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    33,    12,    13,    36,    -1,
      -1,    17,    18,    19,    20,    -1,    43,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    22,    23,
      24,    29,    32,    33,    36,    46,    47,    48,    50,    51,
      56,    63,    30,    31,    34,    35,    36,    38,    52,    53,
      50,    38,    38,    38,    40,    38,    37,    21,    42,     0,
      48,    27,    36,    37,    38,    42,    52,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    37,    36,
      52,    52,    36,    49,    50,    52,    52,    52,    36,    21,
      42,    52,    54,    55,    52,    39,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    21,    39,    39,
      21,    41,    36,    39,    43,    38,    52,    52,    39,    44,
      43,    52,    40,    60,    60,    52,    36,    37,    37,    21,
      50,    64,    65,    66,    43,    52,     3,    36,    41,    50,
      51,    52,    56,    61,    62,    25,    26,    57,    58,    59,
      37,    37,    49,    52,    36,    39,    44,    52,    42,    37,
      37,    41,    62,    60,    38,    57,    59,    52,    40,    67,
      66,    37,    52,    52,    37,    28,    61,    43,    39,    36,
      52,    28,    60,    21,    37,    52,    52,    41,    37,    39,
      41,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    49,    49,    50,    50,    50,    50,    50,    51,
      51,    51,    51,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    56,
      56,    56,    56,    56,    56,    57,    58,    58,    59,    60,
      60,    61,    61,    62,    62,    62,    62,    63,    64,    64,
      65,    65,    66,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     3,     1,     1,
       5,     6,     4,     0,     1,     1,     1,     1,     1,     2,
       4,     5,     5,     3,     6,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     4,
       4,     1,     1,     1,     1,     1,     0,     1,     3,     5,
       7,     6,     6,     5,    13,     2,     1,     2,     5,     3,
       2,     1,     2,     2,     2,     3,     1,     7,     1,     0,
       1,     3,     2,     6,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: declarari  */
#line 130 "semantics.y"
                    { creaza_tabel_simboluri(variabile,total_variabile);printf( "Program corect sintactic\n" ); }
#line 1517 "y.tab.c"
    break;

  case 3: /* declarari: linie  */
#line 133 "semantics.y"
                                                                {;}
#line 1523 "y.tab.c"
    break;

  case 4: /* declarari: declarari linie  */
#line 134 "semantics.y"
                                                                                {;}
#line 1529 "y.tab.c"
    break;

  case 5: /* linie: asignare ';'  */
#line 137 "semantics.y"
                                                                                {;}
#line 1535 "y.tab.c"
    break;

  case 6: /* linie: culcat ';'  */
#line 138 "semantics.y"
                                                                                        {exit(EXIT_SUCCESS);}
#line 1541 "y.tab.c"
    break;

  case 7: /* linie: print exp ';'  */
#line 139 "semantics.y"
                                                                                                {printeaza_variabile((yyvsp[-1].strct));}
#line 1547 "y.tab.c"
    break;

  case 8: /* linie: stat  */
#line 140 "semantics.y"
                                                                                                        {;}
#line 1553 "y.tab.c"
    break;

  case 9: /* linie: FUNCTION  */
#line 141 "semantics.y"
                                                                                                        {;}
#line 1559 "y.tab.c"
    break;

  case 10: /* linie: vezi '(' exp ')' ';'  */
#line 142 "semantics.y"
                                                                                {functie_evaluare((yyvsp[-2].strct));}
#line 1565 "y.tab.c"
    break;

  case 11: /* linie: defineste_tip '{' ELEMENTE '}' AIDI ';'  */
#line 143 "semantics.y"
                                                            {impinge_variabila_structurata((yyvsp[-1].string));}
#line 1571 "y.tab.c"
    break;

  case 12: /* ELEMENTE: TIP_DATA AIDI ';' ELEMENTE  */
#line 146 "semantics.y"
                                        {;}
#line 1577 "y.tab.c"
    break;

  case 13: /* ELEMENTE: %empty  */
#line 147 "semantics.y"
                                                                                                {;}
#line 1583 "y.tab.c"
    break;

  case 14: /* TIP_DATA: integru  */
#line 150 "semantics.y"
                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1589 "y.tab.c"
    break;

  case 15: /* TIP_DATA: plutitor  */
#line 151 "semantics.y"
                                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1595 "y.tab.c"
    break;

  case 16: /* TIP_DATA: litera  */
#line 152 "semantics.y"
                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1601 "y.tab.c"
    break;

  case 17: /* TIP_DATA: bul  */
#line 153 "semantics.y"
                                                 {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1607 "y.tab.c"
    break;

  case 18: /* TIP_DATA: fraza  */
#line 154 "semantics.y"
                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1613 "y.tab.c"
    break;

  case 19: /* asignare: TIP_DATA AIDI  */
#line 157 "semantics.y"
                                                                        {impinge_variabila_goala((yyvsp[0].string), (yyvsp[-1].type_id));}
#line 1619 "y.tab.c"
    break;

  case 20: /* asignare: TIP_DATA AIDI EQUAL exp  */
#line 158 "semantics.y"
                                                                        {impinge_variabila((yyvsp[-2].string), (yyvsp[-3].type_id), (yyvsp[0].strct));}
#line 1625 "y.tab.c"
    break;

  case 21: /* asignare: conservator TIP_DATA AIDI EQUAL exp  */
#line 160 "semantics.y"
                                                                {impinge_variabila_conservatoare((yyvsp[-2].string), (yyvsp[-3].type_id), (yyvsp[0].strct));}
#line 1631 "y.tab.c"
    break;

  case 22: /* asignare: TIP_DATA AIDI '[' exp ']'  */
#line 162 "semantics.y"
                                                                        {impinge_in_array((yyvsp[-3].string), (yyvsp[-4].type_id), (yyvsp[-1].strct));}
#line 1637 "y.tab.c"
    break;

  case 23: /* asignare: AIDI EQUAL exp  */
#line 164 "semantics.y"
                                                                                {actualizeaza_valoarea((yyvsp[-2].string), (yyvsp[0].strct));}
#line 1643 "y.tab.c"
    break;

  case 24: /* asignare: AIDI '[' exp ']' EQUAL exp  */
#line 165 "semantics.y"
                                                                        {actualizeaza_in_array((yyvsp[-5].string), (yyvsp[-3].strct), (yyvsp[0].strct));}
#line 1649 "y.tab.c"
    break;

  case 25: /* exp: term  */
#line 169 "semantics.y"
                                        {(yyval.strct) = (yyvsp[0].strct);}
#line 1655 "y.tab.c"
    break;

  case 26: /* exp: '(' exp ')'  */
#line 170 "semantics.y"
                                                {(yyval.strct) = (yyvsp[-1].strct);}
#line 1661 "y.tab.c"
    break;

  case 27: /* exp: exp PLUS exp  */
#line 171 "semantics.y"
                                    {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), PLUS);}
#line 1667 "y.tab.c"
    break;

  case 28: /* exp: exp MINUS exp  */
#line 172 "semantics.y"
                                    {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), MINUS);}
#line 1673 "y.tab.c"
    break;

  case 29: /* exp: exp PROD exp  */
#line 173 "semantics.y"
                                    {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), PROD);}
#line 1679 "y.tab.c"
    break;

  case 30: /* exp: exp DIV exp  */
#line 174 "semantics.y"
                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), DIV);}
#line 1685 "y.tab.c"
    break;

  case 31: /* exp: exp AND exp  */
#line 176 "semantics.y"
                                                {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), AND);}
#line 1691 "y.tab.c"
    break;

  case 32: /* exp: exp OR exp  */
#line 177 "semantics.y"
                                                {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), OR);}
#line 1697 "y.tab.c"
    break;

  case 33: /* exp: exp LS exp  */
#line 178 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), LS) ;}
#line 1703 "y.tab.c"
    break;

  case 34: /* exp: exp GE exp  */
#line 179 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), GE);}
#line 1709 "y.tab.c"
    break;

  case 35: /* exp: exp LEQ exp  */
#line 180 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), LEQ);}
#line 1715 "y.tab.c"
    break;

  case 36: /* exp: exp GEQ exp  */
#line 181 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), GEQ);}
#line 1721 "y.tab.c"
    break;

  case 37: /* exp: exp EQEQ exp  */
#line 182 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), EQEQ);}
#line 1727 "y.tab.c"
    break;

  case 38: /* term: AIDI  */
#line 186 "semantics.y"
                                                        {(yyval.strct) = pointer_variabila((yyvsp[0].string));}
#line 1733 "y.tab.c"
    break;

  case 39: /* term: AIDI '[' exp ']'  */
#line 187 "semantics.y"
                                                        {(yyval.strct) = pointer_array((yyvsp[-3].string), (yyvsp[-1].strct));}
#line 1739 "y.tab.c"
    break;

  case 40: /* term: AIDI '(' lista_apelare_functie ')'  */
#line 188 "semantics.y"
                                                        {(yyval.strct) = pointer_subrutina((yyvsp[-3].string), (yyvsp[-1].param_functie));}
#line 1745 "y.tab.c"
    break;

  case 41: /* term: number  */
#line 189 "semantics.y"
                                                                {(yyval.strct) = pointer_nr((yyvsp[0].num), integru);}
#line 1751 "y.tab.c"
    break;

  case 42: /* term: number_r  */
#line 190 "semantics.y"
                                                                                {(yyval.strct) = pointer_nr((yyvsp[0].num), plutitor);}
#line 1757 "y.tab.c"
    break;

  case 43: /* term: valoare_litera  */
#line 191 "semantics.y"
                                                                        {(yyval.strct) = pointer_fraza((yyvsp[0].string), litera);}
#line 1763 "y.tab.c"
    break;

  case 44: /* term: valoare_fraza  */
#line 192 "semantics.y"
                                                                        {(yyval.strct) = pointer_fraza((yyvsp[0].string), fraza);}
#line 1769 "y.tab.c"
    break;

  case 45: /* lista_apelare_functie: parametri_apelare  */
#line 195 "semantics.y"
                                                                {(yyval.param_functie) = (yyvsp[0].param_functie);}
#line 1775 "y.tab.c"
    break;

  case 46: /* lista_apelare_functie: %empty  */
#line 196 "semantics.y"
                                                                                        {(yyval.param_functie) = initializeaza_parametru(0);}
#line 1781 "y.tab.c"
    break;

  case 47: /* parametri_apelare: exp  */
#line 199 "semantics.y"
                                                                {(yyval.param_functie) = initializeaza_parametru((yyvsp[0].strct)->type);}
#line 1787 "y.tab.c"
    break;

  case 48: /* parametri_apelare: parametri_apelare ',' exp  */
#line 200 "semantics.y"
                                                                {impinge_parametru((yyval.param_functie), (yyvsp[0].strct)->type);}
#line 1793 "y.tab.c"
    break;

  case 49: /* stat: dak '(' exp ')' bloc_cod  */
#line 203 "semantics.y"
                                                                {;}
#line 1799 "y.tab.c"
    break;

  case 50: /* stat: dak '(' exp ')' bloc_cod ELIF_S ELSE_  */
#line 204 "semantics.y"
                                                                {;}
#line 1805 "y.tab.c"
    break;

  case 51: /* stat: dak '(' exp ')' bloc_cod ELSE_  */
#line 205 "semantics.y"
                                                                {;}
#line 1811 "y.tab.c"
    break;

  case 52: /* stat: dak '(' exp ')' bloc_cod ELIF_S  */
#line 206 "semantics.y"
                                                                {;}
#line 1817 "y.tab.c"
    break;

  case 53: /* stat: rastimp '(' exp ')' bloc_cod  */
#line 207 "semantics.y"
                                                                {;}
#line 1823 "y.tab.c"
    break;

  case 54: /* stat: pt '(' AIDI EQUAL exp ';' exp ';' AIDI EQUAL exp ')' bloc_cod  */
#line 208 "semantics.y"
                                                                                                                {;}
#line 1829 "y.tab.c"
    break;

  case 55: /* ELSE_: altfel bloc_cod  */
#line 211 "semantics.y"
                                                                        {;}
#line 1835 "y.tab.c"
    break;

  case 58: /* ELIF_: poate '(' exp ')' bloc_cod  */
#line 218 "semantics.y"
                                                                {;}
#line 1841 "y.tab.c"
    break;

  case 59: /* bloc_cod: '{' tipuri_bloc '}'  */
#line 221 "semantics.y"
                                                                {;}
#line 1847 "y.tab.c"
    break;

  case 60: /* bloc_cod: '{' '}'  */
#line 222 "semantics.y"
                                                                                {;}
#line 1853 "y.tab.c"
    break;

  case 61: /* tipuri_bloc: tip_bloc  */
#line 225 "semantics.y"
                                                                {;}
#line 1859 "y.tab.c"
    break;

  case 63: /* tip_bloc: asignare ';'  */
#line 229 "semantics.y"
                                                {;}
#line 1865 "y.tab.c"
    break;

  case 64: /* tip_bloc: exp ';'  */
#line 230 "semantics.y"
                                                                {;}
#line 1871 "y.tab.c"
    break;

  case 65: /* tip_bloc: print exp ';'  */
#line 231 "semantics.y"
                                                                {printeaza_variabile((yyvsp[-1].strct));}
#line 1877 "y.tab.c"
    break;

  case 66: /* tip_bloc: stat  */
#line 232 "semantics.y"
                                                                        {;}
#line 1883 "y.tab.c"
    break;

  case 67: /* FUNCTION: TIP_DATA subrutina AIDI '(' lista_param ')' smtm_fun  */
#line 237 "semantics.y"
                                                                                {impinge_functie((yyvsp[-4].string), (yyvsp[-6].type_id), (yyvsp[-2].param_functie));}
#line 1889 "y.tab.c"
    break;

  case 68: /* lista_param: more_params  */
#line 240 "semantics.y"
                                                                                                                                {(yyval.param_functie) = (yyvsp[0].param_functie);}
#line 1895 "y.tab.c"
    break;

  case 69: /* lista_param: %empty  */
#line 241 "semantics.y"
                                                                                                                                                        {(yyval.param_functie) = initializeaza_parametru(0);}
#line 1901 "y.tab.c"
    break;

  case 70: /* more_params: parametru  */
#line 244 "semantics.y"
                                                                                                                        {(yyval.param_functie) = initializeaza_parametru((yyvsp[0].type_id));}
#line 1907 "y.tab.c"
    break;

  case 71: /* more_params: more_params ',' parametru  */
#line 245 "semantics.y"
                                                                                                                        {impinge_parametru((yyval.param_functie), (yyvsp[0].type_id));}
#line 1913 "y.tab.c"
    break;

  case 72: /* parametru: TIP_DATA AIDI  */
#line 248 "semantics.y"
                                                                                                                {(yyval.type_id) = (yyvsp[-1].type_id);}
#line 1919 "y.tab.c"
    break;

  case 73: /* smtm_fun: '{' tipuri_bloc ofera exp ';' '}'  */
#line 252 "semantics.y"
                                                                {;}
#line 1925 "y.tab.c"
    break;

  case 74: /* smtm_fun: '{' ofera exp ';' '}'  */
#line 253 "semantics.y"
                                                                        {;}
#line 1931 "y.tab.c"
    break;


#line 1935 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 256 "semantics.y"


struct var *pointer_array(char *id, struct var *node)
{
    int index = ia_index_variabila(id);

    if (index == -1)
    {
        printf("%s"
               " nu a fost declarat in acest scop.\n",
               id);
        exit(0);
    }

    struct var *variabila = variabile + index;

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

    for (int i = 0; i < n; i++)
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
                fprintf(fd, "tip = User Defined Type\n");
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
                for (int j = 0; j < variabila[i].dimensiune_array; j++)
                {
                    fprintf(fd, "%s[%d] = %d  ", variabila[i].id, j, (int)variabila[i].array[j]);
                }
                break;
            case litera:
                fprintf(fd, "tip = array de litera");
                for (int j = 0; j < variabila[i].dimensiune_array; j++)
                {
                    fprintf(fd, "%s[%d] = %c  ", variabila[i].id, j, (char)variabila[i].array[j]);
                }
                break;
            case plutitor:
                fprintf(fd, "tip = array de plutitor");
                for (int j = 0; j < variabila[i].dimensiune_array; j++)
                {
                    fprintf(fd, "%s[%d] = %f  ", variabila[i].id, j, (float)variabila[i].array[j]);
                }
                break;
            case fraza:
                fprintf(fd, "tip = array de fraza");
                for (int j = 0; j < variabila[i].dimensiune_array; j++)
                {
                    fprintf(fd, " %s[%d] = \"%s\" ", variabila[i].id, j, (char *)variabila[i].array_fraze[j]);
                }
                break;
            case bul:
                fprintf(fd, "tip = array de bul");
                for (int j = 0; j < variabila[i].dimensiune_array; j++)
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
    int index = ia_index_variabila(id);

    if (index == -1)
    {
        printf("%s"
               " nu a fost declarat in acest scop.\n",
               id);
        exit(0);
    }

    struct var *variabila = variabile + index;

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
    int index = ia_index_variabila(id);

    if (index == -1)
    {
        printf("Functia %s nu a fost declarata in acest scop.\n", id);
        exit(0);
    }

    struct var *variabila = variabile + index;

    if (variabila->tip_variable != TIP_SUBRUTINA)
    {
        printf("%s nu e o variabila, e o functie.\n", variabila->id);
        exit(0);
    }

    if (variabila->numar_parametri != pr->numar_parametri)
    {
        printf("Respecta numarul de variabile %s.\n", variabila->id);
        exit(0);
    }

    int n = variabila->numar_parametri;

    int *funParams = variabila->tipuri_parametri;
    int *callParams = pr->tipuri_parametri;

    for (int i = 0; i < n; i++)
    {
        if (funParams[i] != callParams[i])
        {
            printf("%s respecta tipu de date.\n", variabila->id);
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
    int index = ia_index_variabila(id);

    if (index != -1)
    {
        printf("Numele functiei %s a mai fost utilizat.\n", id);
        exit(0);
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
    total_variabile++;
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
    for (int i = 0; i < total_variabile; i++)
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

void printeaza_variabile(struct var *node)
{
    int type = node->type;
    int n;

    switch (type)
    {
    case integru:
        if (node->tip_variable == TIP_ARRAY)
        {
            n = node->dimensiune_array;
            printf("{");
            for (int index = 0; index < n - 1; index++)
            {
                printf("%d, ", (int)node->array[index]);
            }
            printf("%d", (int)node->array[n - 1]);
            printf("}\n");
            break;
        }
        if (node->tip_variable == TIP_VARIABILA)
            printf("%d\n", (int)node->array[0]);
        break;
    case plutitor:
        if (node->tip_variable == TIP_ARRAY)
        {
            n = node->dimensiune_array;
            printf("{");
            for (int index = 0; index < n - 1; index++)
            {
                printf("%f, ", (float)node->array[index]);
            }
            printf("%f", (float)node->array[n - 1]);
            printf("}\n");
            break;
        }
        if (node->tip_variable == TIP_VARIABILA)
            printf("%f\n", (float)node->array[0]);
        break;
    case bul:
        if (node->tip_variable == TIP_ARRAY)
        {
            n = node->dimensiune_array;
            printf("{");
            for (int index = 0; index < n - 1; index++)
            {
                printf("\"%d\", ", (int)node->array[index]);
            }
            printf("\"%d\"", (int)node->array[n - 1]);
            printf("}\n");
            break;
        }
        if (node->tip_variable == TIP_VARIABILA)
            printf("%d\n", (int)node->array[0]);
        break;
    case litera:
        if (node->tip_variable == TIP_ARRAY)
        {
            n = node->dimensiune_array;
            printf("{");
            for (int index = 0; index < n - 1; index++)
            {
                printf("'%c', ", (char)node->array[index]);
            }
            printf("'%c'", (char)node->array[n - 1]);
            printf("}\n");
            break;
        }
        if (node->tip_variable == TIP_VARIABILA)
            printf("'%c'\n", (char)node->array[0]);
        break;
    case fraza:
        if (node->tip_variable == TIP_ARRAY)
        {
            n = node->dimensiune_array;
            printf("{");
            for (int index = 0; index < n - 1; index++)
            {
                printf("\"%s\", ", node->array_fraze[index]);
            }
            printf("\"%s\"", node->array_fraze[n - 1]);
            printf("}\n");
            break;
        }
        if (node->tip_variable == TIP_VARIABILA)
            printf("\"%s\"\n", node->array_fraze[0]);
        break;
    default:
        break;
    }

    if (node->tip_variable == TIP_SUBRUTINA)
    {
        printf("%s %s", definite_la_tip_date(node->type), node->id);
        n = node->numar_parametri;
        if (n != 0)
        {
            printf(" -> {");
            for (int index = 0; index < n - 1; index++)
            {
                printf("%s, ", definite_la_tip_date(node->tipuri_parametri[index]));
            }
            printf("%s}", definite_la_tip_date(node->tipuri_parametri[n - 1]));
        }

        printf("\n");
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
    int index = ia_index_variabila(id);

    if (index != -1)
    {
        printf("Variabila %s a fost declarata\n", id);
        exit(0);
    }

    struct var *new_variable = variabile + total_variabile;

    sprintf(new_variable->id, "%s", id);
    new_variable->type = 0;

    total_variabile++;
}

void impinge_variabila_goala(char *id, int type)
{
    int identifier = ia_index_variabila(id);

    if (identifier != -1)
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

    total_variabile++;
}

void impinge_variabila(char *id, int type, struct var *exp)
{
    int identifier = ia_index_variabila(id);

    if (identifier != -1)
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
    total_variabile++;
}


void actualizeaza_valoarea(char *id, struct var *exp)
{
    int index = ia_index_variabila(id);

    if (index == -1)
    {
        printf("%s nu a fost declarata.\n", id);
        exit(0);
    }

    struct var *vr = variabile + index;

    if (vr->tip_variable == TIP_SUBRUTINA)
    {
        printf("Functia %s nu poate fi stearsa.\n", vr->id);
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

        for (int i = 0; i < n && i < m; i++)
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
    int identifier = ia_index_variabila(id);

    if (identifier != -1)
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
    total_variabile++;
}

void impinge_in_array(char *id, int type, struct var *exp)
{
    int identifier = ia_index_variabila(id);

    if (identifier != -1)
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

    total_variabile++;
}


void actualizeaza_in_array(char *id, struct var *first_expression, struct var *second_expression)
{
    int identifier = ia_index_variabila(id);

    if (identifier == -1)
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
    case PLUS:;
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
    case MINUS:;

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
    case PROD:;
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
    case DIV:;
        double c = first_var->array[0] / second_var->array[0];
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
    case LS:;
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
    case LEQ:;
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
    case GE:;
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
    case GEQ:;
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
    case EQEQ:;
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

    for (int index = 0; index < 100; index++)
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
