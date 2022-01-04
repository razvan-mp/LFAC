/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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

#line 141 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

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

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    print = 258,
    integru = 259,
    plutitor = 260,
    litera = 261,
    bul = 262,
    fraza = 263,
    conservator = 264,
    GEQ = 265,
    LEQ = 266,
    AND = 267,
    OR = 268,
    EQEQ = 269,
    LS = 270,
    GE = 271,
    PLUS = 272,
    MINUS = 273,
    PROD = 274,
    DIV = 275,
    EQUAL = 276,
    dak = 277,
    rastimp = 278,
    pt = 279,
    altfel = 280,
    poate = 281,
    subrutina = 282,
    ofera = 283,
    defineste_tip = 284,
    valoare_fraza = 285,
    valoare_litera = 286,
    vezi = 287,
    culcat = 288,
    number = 289,
    number_r = 290,
    AIDI = 291
  };
#endif
/* Tokens.  */
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
#line 72 "semantics.y"

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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

#define YYUNDEFTOK  2
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       0,   132,   132,   135,   136,   139,   140,   141,   142,   143,
     144,   145,   148,   149,   152,   153,   154,   155,   156,   159,
     160,   162,   164,   166,   167,   171,   172,   173,   174,   175,
     176,   178,   179,   180,   181,   182,   183,   184,   188,   189,
     190,   191,   192,   193,   194,   197,   198,   201,   202,   205,
     206,   207,   208,   209,   210,   213,   216,   217,   220,   223,
     224,   227,   228,   231,   232,   233,   234,   239,   242,   243,
     246,   247,   250,   254,   255
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "print", "integru", "plutitor", "litera",
  "bul", "fraza", "conservator", "GEQ", "LEQ", "AND", "OR", "EQEQ", "LS",
  "GE", "PLUS", "MINUS", "PROD", "DIV", "EQUAL", "dak", "rastimp", "pt",
  "altfel", "poate", "subrutina", "ofera", "defineste_tip",
  "valoare_fraza", "valoare_litera", "vezi", "culcat", "number",
  "number_r", "AIDI", "';'", "'('", "')'", "'{'", "'}'", "'['", "']'",
  "','", "$accept", "program", "declarari", "linie", "ELEMENTE",
  "TIP_DATA", "asignare", "exp", "term", "lista_apelare_functie",
  "parametri_apelare", "drp", "ELSE_", "ELIF_S", "ELIF_", "bloc_cod",
  "tipuri_bloc", "tip_bloc", "FUNCTION", "lista_param", "more_params",
  "parametru", "bloc_functie", YY_NULLPTR
};
#endif

# ifdef YYPRINT
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
# endif

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
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    63,   119,   120,   121,    29,    72,
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 132 "semantics.y"
                    { creaza_tabel_simboluri(variabile,total_variabile);printf( "Program corect sintactic\n" ); }
#line 1642 "y.tab.c"
    break;

  case 3:
#line 135 "semantics.y"
                                                                {;}
#line 1648 "y.tab.c"
    break;

  case 4:
#line 136 "semantics.y"
                                                                                {;}
#line 1654 "y.tab.c"
    break;

  case 5:
#line 139 "semantics.y"
                                                                                {;}
#line 1660 "y.tab.c"
    break;

  case 6:
#line 140 "semantics.y"
                                                                                        {exit(EXIT_SUCCESS);}
#line 1666 "y.tab.c"
    break;

  case 7:
#line 141 "semantics.y"
                                                                                                {printeaza_variabile((yyvsp[-1].strct));}
#line 1672 "y.tab.c"
    break;

  case 8:
#line 142 "semantics.y"
                                                                                                        {;}
#line 1678 "y.tab.c"
    break;

  case 9:
#line 143 "semantics.y"
                                                                                                        {;}
#line 1684 "y.tab.c"
    break;

  case 10:
#line 144 "semantics.y"
                                                                                {functie_evaluare((yyvsp[-2].strct));}
#line 1690 "y.tab.c"
    break;

  case 11:
#line 145 "semantics.y"
                                                            {impinge_variabila_structurata((yyvsp[-1].string));}
#line 1696 "y.tab.c"
    break;

  case 12:
#line 148 "semantics.y"
                                        {;}
#line 1702 "y.tab.c"
    break;

  case 13:
#line 149 "semantics.y"
                                                                                                {;}
#line 1708 "y.tab.c"
    break;

  case 14:
#line 152 "semantics.y"
                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1714 "y.tab.c"
    break;

  case 15:
#line 153 "semantics.y"
                                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1720 "y.tab.c"
    break;

  case 16:
#line 154 "semantics.y"
                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1726 "y.tab.c"
    break;

  case 17:
#line 155 "semantics.y"
                                                 {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1732 "y.tab.c"
    break;

  case 18:
#line 156 "semantics.y"
                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1738 "y.tab.c"
    break;

  case 19:
#line 159 "semantics.y"
                                                                        {impinge_variabila_goala((yyvsp[0].string), (yyvsp[-1].type_id));}
#line 1744 "y.tab.c"
    break;

  case 20:
#line 160 "semantics.y"
                                                                        {impinge_variabila((yyvsp[-2].string), (yyvsp[-3].type_id), (yyvsp[0].strct));}
#line 1750 "y.tab.c"
    break;

  case 21:
#line 162 "semantics.y"
                                                                {impinge_variabila_conservatoare((yyvsp[-2].string), (yyvsp[-3].type_id), (yyvsp[0].strct));}
#line 1756 "y.tab.c"
    break;

  case 22:
#line 164 "semantics.y"
                                                                        {impinge_in_array((yyvsp[-3].string), (yyvsp[-4].type_id), (yyvsp[-1].strct));}
#line 1762 "y.tab.c"
    break;

  case 23:
#line 166 "semantics.y"
                                                                                {actualizeaza_valoarea((yyvsp[-2].string), (yyvsp[0].strct));}
#line 1768 "y.tab.c"
    break;

  case 24:
#line 167 "semantics.y"
                                                                        {actualizeaza_in_array((yyvsp[-5].string), (yyvsp[-3].strct), (yyvsp[0].strct));}
#line 1774 "y.tab.c"
    break;

  case 25:
#line 171 "semantics.y"
                                        {(yyval.strct) = (yyvsp[0].strct);}
#line 1780 "y.tab.c"
    break;

  case 26:
#line 172 "semantics.y"
                                                {(yyval.strct) = (yyvsp[-1].strct);}
#line 1786 "y.tab.c"
    break;

  case 27:
#line 173 "semantics.y"
                                    {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), PLUS);}
#line 1792 "y.tab.c"
    break;

  case 28:
#line 174 "semantics.y"
                                    {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), MINUS);}
#line 1798 "y.tab.c"
    break;

  case 29:
#line 175 "semantics.y"
                                    {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), PROD);}
#line 1804 "y.tab.c"
    break;

  case 30:
#line 176 "semantics.y"
                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), DIV);}
#line 1810 "y.tab.c"
    break;

  case 31:
#line 178 "semantics.y"
                                                {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), AND);}
#line 1816 "y.tab.c"
    break;

  case 32:
#line 179 "semantics.y"
                                                {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), OR);}
#line 1822 "y.tab.c"
    break;

  case 33:
#line 180 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), LS) ;}
#line 1828 "y.tab.c"
    break;

  case 34:
#line 181 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), GE);}
#line 1834 "y.tab.c"
    break;

  case 35:
#line 182 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), LEQ);}
#line 1840 "y.tab.c"
    break;

  case 36:
#line 183 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), GEQ);}
#line 1846 "y.tab.c"
    break;

  case 37:
#line 184 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), EQEQ);}
#line 1852 "y.tab.c"
    break;

  case 38:
#line 188 "semantics.y"
                                                        {(yyval.strct) = pointer_variabila((yyvsp[0].string));}
#line 1858 "y.tab.c"
    break;

  case 39:
#line 189 "semantics.y"
                                                        {(yyval.strct) = pointer_array((yyvsp[-3].string), (yyvsp[-1].strct));}
#line 1864 "y.tab.c"
    break;

  case 40:
#line 190 "semantics.y"
                                                        {(yyval.strct) = pointer_subrutina((yyvsp[-3].string), (yyvsp[-1].param_functie));}
#line 1870 "y.tab.c"
    break;

  case 41:
#line 191 "semantics.y"
                                                                {(yyval.strct) = pointer_nr((yyvsp[0].num), integru);}
#line 1876 "y.tab.c"
    break;

  case 42:
#line 192 "semantics.y"
                                                                                {(yyval.strct) = pointer_nr((yyvsp[0].num), plutitor);}
#line 1882 "y.tab.c"
    break;

  case 43:
#line 193 "semantics.y"
                                                                        {(yyval.strct) = pointer_fraza((yyvsp[0].string), litera);}
#line 1888 "y.tab.c"
    break;

  case 44:
#line 194 "semantics.y"
                                                                        {(yyval.strct) = pointer_fraza((yyvsp[0].string), fraza);}
#line 1894 "y.tab.c"
    break;

  case 45:
#line 197 "semantics.y"
                                                                {(yyval.param_functie) = (yyvsp[0].param_functie);}
#line 1900 "y.tab.c"
    break;

  case 46:
#line 198 "semantics.y"
                                                                                        {(yyval.param_functie) = initializeaza_parametru(0);}
#line 1906 "y.tab.c"
    break;

  case 47:
#line 201 "semantics.y"
                                                                {(yyval.param_functie) = initializeaza_parametru((yyvsp[0].strct)->type);}
#line 1912 "y.tab.c"
    break;

  case 48:
#line 202 "semantics.y"
                                                                {impinge_parametru((yyval.param_functie), (yyvsp[0].strct)->type);}
#line 1918 "y.tab.c"
    break;

  case 49:
#line 205 "semantics.y"
                                                                {;}
#line 1924 "y.tab.c"
    break;

  case 50:
#line 206 "semantics.y"
                                                                {;}
#line 1930 "y.tab.c"
    break;

  case 51:
#line 207 "semantics.y"
                                                                {;}
#line 1936 "y.tab.c"
    break;

  case 52:
#line 208 "semantics.y"
                                                                {;}
#line 1942 "y.tab.c"
    break;

  case 53:
#line 209 "semantics.y"
                                                                {;}
#line 1948 "y.tab.c"
    break;

  case 54:
#line 210 "semantics.y"
                                                                                                                {;}
#line 1954 "y.tab.c"
    break;

  case 55:
#line 213 "semantics.y"
                                                                        {;}
#line 1960 "y.tab.c"
    break;

  case 58:
#line 220 "semantics.y"
                                                                {;}
#line 1966 "y.tab.c"
    break;

  case 59:
#line 223 "semantics.y"
                                                                    {;}
#line 1972 "y.tab.c"
    break;

  case 60:
#line 224 "semantics.y"
                                                                                        {;}
#line 1978 "y.tab.c"
    break;

  case 61:
#line 227 "semantics.y"
                                                                        {;}
#line 1984 "y.tab.c"
    break;

  case 63:
#line 231 "semantics.y"
                                                    {;}
#line 1990 "y.tab.c"
    break;

  case 64:
#line 232 "semantics.y"
                                                                {;}
#line 1996 "y.tab.c"
    break;

  case 65:
#line 233 "semantics.y"
                                                                {printeaza_variabile((yyvsp[-1].strct));}
#line 2002 "y.tab.c"
    break;

  case 66:
#line 234 "semantics.y"
                                                                        {;}
#line 2008 "y.tab.c"
    break;

  case 67:
#line 239 "semantics.y"
                                                                                        {impinge_functie((yyvsp[-4].string), (yyvsp[-6].type_id), (yyvsp[-2].param_functie));}
#line 2014 "y.tab.c"
    break;

  case 68:
#line 242 "semantics.y"
                                                                                                                                {(yyval.param_functie) = (yyvsp[0].param_functie);}
#line 2020 "y.tab.c"
    break;

  case 69:
#line 243 "semantics.y"
                                                                                                                                                        {(yyval.param_functie) = initializeaza_parametru(0);}
#line 2026 "y.tab.c"
    break;

  case 70:
#line 246 "semantics.y"
                                                                                                                        {(yyval.param_functie) = initializeaza_parametru((yyvsp[0].type_id));}
#line 2032 "y.tab.c"
    break;

  case 71:
#line 247 "semantics.y"
                                                                                                                        {impinge_parametru((yyval.param_functie), (yyvsp[0].type_id));}
#line 2038 "y.tab.c"
    break;

  case 72:
#line 250 "semantics.y"
                                                                                                                {(yyval.type_id) = (yyvsp[-1].type_id);}
#line 2044 "y.tab.c"
    break;

  case 73:
#line 254 "semantics.y"
                                                                {;}
#line 2050 "y.tab.c"
    break;

  case 74:
#line 255 "semantics.y"
                                                                        {;}
#line 2056 "y.tab.c"
    break;


#line 2060 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 258 "semantics.y"


struct var *pointer_array(char *id, struct var *node)
{
    int identifier;
    if ((identifier = ia_index_variabila(id)) == -1)
    {
        printf("%s nu a fost declarat in acest scop.\n", id);
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
        printf("%s nu a fost declarat in acest scop.\n", id);
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
        printf("Respecta numarul de variabile %s.\n", variabila->id);
        exit(0);
    }

    int n = variabila->numar_parametri;

    int *funParams = variabila->tipuri_parametri;
    int *callParams = pr->tipuri_parametri;

    for (int i = 0; i < n; ++i)
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
    if (ia_index_variabila(id) != -1)
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
                for (int index = 0; index < n - 1; ++index)
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
                for (int index = 0; index < n - 1; ++index)
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
                for (int index = 0; index < n - 1; ++index)
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
                for (int index = 0; index < n - 1; ++index)
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
                for (int index = 0; index < n - 1; ++index)
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
            for (int index = 0; index < n - 1; ++index)
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
