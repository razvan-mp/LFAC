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
void printeaza_variabile(struct var*);
void creaza_tabel_simboluri(struct var*,int);

void impinge_in_array(char*, int, struct var*);
void actualizeaza_in_array(char*, struct var*, struct var*);
void functie_evaluare(struct var*);

void impinge_parametru(struct parameter*, int);
struct parameter* initializeaza_parametru(int);
void impinge_functie(char*, int, struct parameter*);
char* definite_la_tip_date(int);

#line 142 "y.tab.c"

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
    INCEPE_DECL = 259,
    TERMINA_DECL = 260,
    INCEPE_MAIN = 261,
    TERMINA_MAIN = 262,
    integru = 263,
    plutitor = 264,
    litera = 265,
    bul = 266,
    fraza = 267,
    conservator = 268,
    GEQ = 269,
    LEQ = 270,
    AND = 271,
    OR = 272,
    EQEQ = 273,
    LS = 274,
    GE = 275,
    PLUS = 276,
    MINUS = 277,
    PROD = 278,
    DIV = 279,
    EQUAL = 280,
    dak = 281,
    altfel = 282,
    subrutina = 283,
    ofera = 284,
    defineste_tip = 285,
    valoare_fraza = 286,
    valoare_litera = 287,
    vezi = 288,
    culcat = 289,
    number = 290,
    number_r = 291,
    AIDI = 292
  };
#endif
/* Tokens.  */
#define print 258
#define INCEPE_DECL 259
#define TERMINA_DECL 260
#define INCEPE_MAIN 261
#define TERMINA_MAIN 262
#define integru 263
#define plutitor 264
#define litera 265
#define bul 266
#define fraza 267
#define conservator 268
#define GEQ 269
#define LEQ 270
#define AND 271
#define OR 272
#define EQEQ 273
#define LS 274
#define GE 275
#define PLUS 276
#define MINUS 277
#define PROD 278
#define DIV 279
#define EQUAL 280
#define dak 281
#define altfel 282
#define subrutina 283
#define ofera 284
#define defineste_tip 285
#define valoare_fraza 286
#define valoare_litera 287
#define vezi 288
#define culcat 289
#define number 290
#define number_r 291
#define AIDI 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 73 "semantics.y"

	double num; 
	char string[1000]; 
	int type_id; 
	struct var* strct;
	struct parameter* param_functie;

#line 276 "y.tab.c"

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   551

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

#define YYUNDEFTOK  2
#define YYMAXUTOK   292


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
      39,    40,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   134,   134,   135,   136,   139,   142,   143,   146,   149,
     150,   153,   154,   155,   156,   157,   160,   161,   162,   164,
     165,   168,   169,   170,   171,   172,   175,   176,   178,   180,
     182,   183,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   203,   204,   205,   206,
     207,   208,   209,   212,   213,   216,   217,   220,   221,   224,
     225,   228,   229,   230,   231,   232,   233,   234,   235,   238,
     239,   242,   243,   244,   245,   250,   253,   254,   257,   258,
     261,   265,   266
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "print", "INCEPE_DECL", "TERMINA_DECL",
  "INCEPE_MAIN", "TERMINA_MAIN", "integru", "plutitor", "litera", "bul",
  "fraza", "conservator", "GEQ", "LEQ", "AND", "OR", "EQEQ", "LS", "GE",
  "PLUS", "MINUS", "PROD", "DIV", "EQUAL", "dak", "altfel", "subrutina",
  "ofera", "defineste_tip", "valoare_fraza", "valoare_litera", "vezi",
  "culcat", "number", "number_r", "AIDI", "';'", "'('", "')'", "'{'",
  "'}'", "'['", "']'", "','", "$accept", "s", "decl", "declarari", "main",
  "principala", "linie_principala", "linie_decl", "ELEMENTE", "TIP_DATA",
  "asignare", "exp", "term", "lista_apelare_functie", "parametri_apelare",
  "IF_ST", "ST1", "exp_2", "tipuri_bloc", "tip_bloc", "FUNCTION",
  "lista_param", "mai_multi_param", "parametru", "bloc_functie", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    59,    40,
      41,   123,   125,    91,    93,    44
};
# endif

#define YYPACT_NINF (-108)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    71,   206,     2,     1,  -108,  -108,  -108,  -108,  -108,
    -108,   213,   -26,   -13,   116,  -108,   -15,    -1,  -108,    68,
       7,    22,    24,   194,  -108,    27,    29,  -108,  -108,  -108,
      28,   213,    68,    68,  -108,  -108,    33,    -7,  -108,    68,
    -108,  -108,  -108,  -108,   -34,    68,   363,  -108,    68,    68,
    -108,  -108,  -108,  -108,    13,    35,    38,   516,   230,    39,
      68,    68,   374,    68,    68,   314,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,  -108,   527,    45,
      47,   325,    68,    51,    60,    16,   213,   516,   241,  -108,
     516,    49,    61,   272,  -108,   115,   115,  -108,    94,   256,
     115,   115,    96,    96,    18,    18,    68,    68,    68,    68,
      68,    68,    68,    37,    76,   516,    78,   213,    68,    81,
      82,    88,  -108,  -108,  -108,    68,  -108,     3,   458,    83,
     -12,   336,   480,   489,   516,  -108,   103,  -108,  -108,  -108,
     516,  -108,   101,   213,   516,   120,   147,  -108,  -108,    37,
      68,    68,    72,   111,   399,  -108,   159,  -108,   113,   410,
     435,    68,  -108,  -108,    68,  -108,  -108,   446,   110,   283,
     471,  -108,    16,   119,  -108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     0,     0,     3,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     6,     0,     0,    17,     0,
       0,     0,     0,     0,     9,     0,     0,    14,     1,     2,
       0,    20,     0,     0,     5,     7,     0,    26,    16,     0,
      52,    51,    49,    50,    46,     0,     0,    32,     0,     0,
      12,     8,    10,    11,     0,     0,     0,    30,     0,     0,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,    32,
       0,     0,     0,     0,     0,     0,    77,    27,     0,    38,
      55,     0,    53,     0,    33,    44,    43,    39,    40,    45,
      41,    42,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,    20,     0,     0,
       0,    76,    78,    29,    48,     0,    47,    44,    43,    39,
      40,    45,    41,    42,    60,    59,     0,    15,    18,    19,
      31,    80,     0,     0,    56,    58,     0,    75,    79,     0,
       0,     0,    46,     0,     0,    74,     0,    69,     0,     0,
       0,     0,    71,    72,     0,    70,    57,    73,     0,     0,
       0,    82,    47,     0,    81
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,  -108,  -108,   160,  -108,   140,   151,    57,     0,
      -2,   -16,   118,  -108,  -108,  -107,    26,  -108,  -108,    21,
    -108,  -108,  -108,    44,  -108
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    14,     5,    23,    24,    15,    55,    25,
      17,   134,    47,    91,    92,    27,   136,    80,   156,   157,
      18,   120,   121,   122,   147
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    16,    28,    46,    68,    63,   135,     2,     1,    64,
       2,    30,    32,    36,    16,    31,    57,    58,    60,    68,
      69,    26,    37,    62,    73,    74,    75,    76,   -66,    65,
      33,    56,    78,    81,    68,    69,    61,    38,    82,   155,
      39,   118,   135,   -64,    87,    88,    48,    90,    93,   155,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    49,    50,    20,    37,    54,   115,    53,    40,    41,
      59,    39,    42,    43,    44,    84,    45,    83,    86,     6,
       7,     8,     9,    10,    11,   -68,   119,   113,   116,   124,
     127,   128,   129,   130,   131,   132,   133,    32,   117,    40,
      41,    12,   140,    42,    43,    44,   125,    45,    13,   144,
      68,    63,    68,    69,   137,   161,   138,    56,   141,    75,
      76,    34,   142,   -67,     6,     7,     8,     9,    10,    11,
     154,    68,    69,   143,   159,   160,    73,    74,    75,    76,
     154,   145,   146,   119,   153,   169,    12,   149,   170,   162,
     150,   166,   171,    13,   153,     6,     7,     8,     9,    10,
      11,   174,   150,    52,    29,    35,    79,     6,     7,     8,
       9,    10,    11,    20,   139,   158,   151,   165,    40,    41,
       0,     0,    42,    43,   152,    20,    45,   148,   164,     0,
      40,    41,     0,     0,    42,    43,   152,    19,    45,     0,
       0,    51,     6,     7,     8,     9,    10,    11,     0,    19,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
      20,     6,     7,     8,     9,    10,     0,    21,    22,     0,
       0,    13,    20,     0,     0,     0,     0,     0,     0,    21,
      22,     0,     0,    13,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
      66,    67,    68,    69,    85,    71,    72,    73,    74,    75,
      76,     0,     0,     0,     0,   123,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   172,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      66,    67,    68,    69,    94,    71,    72,    73,    74,    75,
      76,     0,     0,     0,     0,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,     0,     0,   163,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,     0,     0,   168,    68,    69,     0,     0,     0,    73,
      74,    75,    76,     0,   -38,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    68,    69,   -63,     0,
       0,    73,    74,    75,    76,    68,    69,     0,     0,   173,
      73,    74,    75,    76,     0,     0,     0,     0,     0,     0,
     -61,     0,     0,     0,     0,     0,     0,     0,     0,   -62,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,   106,   107,   108,   109,   110,   111,   112,    73,    74,
      75,    76
};

static const yytype_int16 yycheck[] =
{
       2,     1,     0,    19,    16,    39,   113,     6,     4,    43,
       6,    11,    25,    28,    14,    41,    32,    33,    25,    16,
      17,    23,    37,    39,    21,    22,    23,    24,    40,    45,
      43,    31,    48,    49,    16,    17,    43,    38,    25,   146,
       3,    25,   149,    40,    60,    61,    39,    63,    64,   156,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    39,    38,    26,    37,    37,    82,    38,    31,    32,
      37,     3,    35,    36,    37,    37,    39,    42,    39,     8,
       9,    10,    11,    12,    13,    40,    86,    40,    37,    40,
     106,   107,   108,   109,   110,   111,   112,    25,    38,    31,
      32,    30,   118,    35,    36,    37,    45,    39,    37,   125,
      16,    39,    16,    17,    38,    43,    38,   117,    37,    23,
      24,     5,    40,    40,     8,     9,    10,    11,    12,    13,
     146,    16,    17,    45,   150,   151,    21,    22,    23,    24,
     156,    38,    41,   143,   146,   161,    30,    27,   164,    38,
       3,    38,    42,    37,   156,     8,     9,    10,    11,    12,
      13,    42,     3,    23,     4,    14,    48,     8,     9,    10,
      11,    12,    13,    26,   117,   149,    29,   156,    31,    32,
      -1,    -1,    35,    36,    37,    26,    39,   143,    29,    -1,
      31,    32,    -1,    -1,    35,    36,    37,     3,    39,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,     3,
      -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,    13,
      26,     8,     9,    10,    11,    12,    -1,    33,    34,    -1,
      -1,    37,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    -1,    37,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    44,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    44,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      14,    15,    16,    17,    40,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    38,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    38,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    16,    17,    40,    -1,
      -1,    21,    22,    23,    24,    16,    17,    -1,    -1,    38,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     6,    47,    48,    50,     8,     9,    10,    11,
      12,    13,    30,    37,    49,    53,    55,    56,    66,     3,
      26,    33,    34,    51,    52,    55,    56,    61,     0,    50,
      55,    41,    25,    43,     5,    53,    28,    37,    38,     3,
      31,    32,    35,    36,    37,    39,    57,    58,    39,    39,
      38,     7,    52,    38,    37,    54,    55,    57,    57,    37,
      25,    43,    57,    39,    43,    57,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    38,    57,    58,
      63,    57,    25,    42,    37,    44,    39,    57,    57,    38,
      57,    59,    60,    57,    40,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    14,    15,    16,    17,
      18,    19,    20,    40,    40,    57,    37,    38,    25,    55,
      67,    68,    69,    44,    40,    45,    44,    57,    57,    57,
      57,    57,    57,    57,    57,    61,    62,    38,    38,    54,
      57,    37,    40,    45,    57,    38,    41,    70,    69,    27,
       3,    29,    37,    56,    57,    61,    64,    65,    62,    57,
      57,    43,    38,    38,    29,    65,    38,    38,    38,    57,
      57,    42,    44,    38,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    47,    48,    49,    49,    50,    51,
      51,    52,    52,    52,    52,    52,    53,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      64,    65,    65,    65,    65,    66,    67,    67,    68,    68,
      69,    70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     3,     1,     2,     3,     1,
       2,     2,     2,     3,     1,     5,     2,     1,     6,     4,
       0,     1,     1,     1,     1,     1,     2,     4,     5,     5,
       3,     6,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     4,     4,     1,
       1,     1,     1,     1,     0,     1,     3,     9,     6,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       2,     2,     2,     3,     1,     7,     1,     0,     1,     3,
       2,     6,     5
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
#line 134 "semantics.y"
                { creaza_tabel_simboluri(variabile,total_variabile);printf( "Program corect sintactic\n" ); }
#line 1644 "y.tab.c"
    break;

  case 6:
#line 142 "semantics.y"
                                                                {;}
#line 1650 "y.tab.c"
    break;

  case 7:
#line 143 "semantics.y"
                                                                        {;}
#line 1656 "y.tab.c"
    break;

  case 9:
#line 149 "semantics.y"
                                                {;}
#line 1662 "y.tab.c"
    break;

  case 10:
#line 150 "semantics.y"
                                                {;}
#line 1668 "y.tab.c"
    break;

  case 11:
#line 153 "semantics.y"
                                                        {;}
#line 1674 "y.tab.c"
    break;

  case 12:
#line 154 "semantics.y"
                                                        {exit(EXIT_SUCCESS);}
#line 1680 "y.tab.c"
    break;

  case 13:
#line 155 "semantics.y"
                                                        {printeaza_variabile((yyvsp[-1].strct));}
#line 1686 "y.tab.c"
    break;

  case 14:
#line 156 "semantics.y"
                                                          {;}
#line 1692 "y.tab.c"
    break;

  case 15:
#line 157 "semantics.y"
                                                        {;}
#line 1698 "y.tab.c"
    break;

  case 16:
#line 160 "semantics.y"
                                                        {;}
#line 1704 "y.tab.c"
    break;

  case 17:
#line 161 "semantics.y"
                                                        {;}
#line 1710 "y.tab.c"
    break;

  case 18:
#line 162 "semantics.y"
                                                        {impinge_variabila_structurata((yyvsp[-1].string));}
#line 1716 "y.tab.c"
    break;

  case 19:
#line 164 "semantics.y"
                                        {;}
#line 1722 "y.tab.c"
    break;

  case 20:
#line 165 "semantics.y"
                                                                                                {;}
#line 1728 "y.tab.c"
    break;

  case 21:
#line 168 "semantics.y"
                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1734 "y.tab.c"
    break;

  case 22:
#line 169 "semantics.y"
                                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1740 "y.tab.c"
    break;

  case 23:
#line 170 "semantics.y"
                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1746 "y.tab.c"
    break;

  case 24:
#line 171 "semantics.y"
                                                 {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1752 "y.tab.c"
    break;

  case 25:
#line 172 "semantics.y"
                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1758 "y.tab.c"
    break;

  case 26:
#line 175 "semantics.y"
                                                                        {impinge_variabila_goala((yyvsp[0].string), (yyvsp[-1].type_id));}
#line 1764 "y.tab.c"
    break;

  case 27:
#line 176 "semantics.y"
                                                                        {impinge_variabila((yyvsp[-2].string), (yyvsp[-3].type_id), (yyvsp[0].strct));}
#line 1770 "y.tab.c"
    break;

  case 28:
#line 178 "semantics.y"
                                                                {impinge_variabila_conservatoare((yyvsp[-2].string), (yyvsp[-3].type_id), (yyvsp[0].strct));}
#line 1776 "y.tab.c"
    break;

  case 29:
#line 180 "semantics.y"
                                                                        {impinge_in_array((yyvsp[-3].string), (yyvsp[-4].type_id), (yyvsp[-1].strct));}
#line 1782 "y.tab.c"
    break;

  case 30:
#line 182 "semantics.y"
                                                                                {actualizeaza_valoarea((yyvsp[-2].string), (yyvsp[0].strct));}
#line 1788 "y.tab.c"
    break;

  case 31:
#line 183 "semantics.y"
                                                                        {actualizeaza_in_array((yyvsp[-5].string), (yyvsp[-3].strct), (yyvsp[0].strct));}
#line 1794 "y.tab.c"
    break;

  case 32:
#line 186 "semantics.y"
                                        {(yyval.strct) = (yyvsp[0].strct);}
#line 1800 "y.tab.c"
    break;

  case 33:
#line 187 "semantics.y"
                                                {(yyval.strct) = (yyvsp[-1].strct);}
#line 1806 "y.tab.c"
    break;

  case 34:
#line 188 "semantics.y"
                                    {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), PLUS);}
#line 1812 "y.tab.c"
    break;

  case 35:
#line 189 "semantics.y"
                                    {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), MINUS);}
#line 1818 "y.tab.c"
    break;

  case 36:
#line 190 "semantics.y"
                                    {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), PROD);}
#line 1824 "y.tab.c"
    break;

  case 37:
#line 191 "semantics.y"
                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), DIV);}
#line 1830 "y.tab.c"
    break;

  case 38:
#line 192 "semantics.y"
                                    {printeaza_variabile((yyvsp[-1].strct));}
#line 1836 "y.tab.c"
    break;

  case 39:
#line 193 "semantics.y"
                                                {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), AND);}
#line 1842 "y.tab.c"
    break;

  case 40:
#line 194 "semantics.y"
                                                {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), OR);}
#line 1848 "y.tab.c"
    break;

  case 41:
#line 195 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), LS) ;}
#line 1854 "y.tab.c"
    break;

  case 42:
#line 196 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), GE);}
#line 1860 "y.tab.c"
    break;

  case 43:
#line 197 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), LEQ);}
#line 1866 "y.tab.c"
    break;

  case 44:
#line 198 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), GEQ);}
#line 1872 "y.tab.c"
    break;

  case 45:
#line 199 "semantics.y"
                                                        {(yyval.strct) = compara_variabile((yyvsp[-2].strct), (yyvsp[0].strct), EQEQ);}
#line 1878 "y.tab.c"
    break;

  case 46:
#line 203 "semantics.y"
                                                        {(yyval.strct) = pointer_variabila((yyvsp[0].string));}
#line 1884 "y.tab.c"
    break;

  case 47:
#line 204 "semantics.y"
                                                        {(yyval.strct) = pointer_array((yyvsp[-3].string), (yyvsp[-1].strct));}
#line 1890 "y.tab.c"
    break;

  case 48:
#line 205 "semantics.y"
                                                        {(yyval.strct) = pointer_subrutina((yyvsp[-3].string), (yyvsp[-1].param_functie));}
#line 1896 "y.tab.c"
    break;

  case 49:
#line 206 "semantics.y"
                                                                {(yyval.strct) = pointer_nr((yyvsp[0].num), integru);}
#line 1902 "y.tab.c"
    break;

  case 50:
#line 207 "semantics.y"
                                                                                {(yyval.strct) = pointer_nr((yyvsp[0].num), plutitor);}
#line 1908 "y.tab.c"
    break;

  case 51:
#line 208 "semantics.y"
                                                                        {(yyval.strct) = pointer_fraza((yyvsp[0].string), litera);}
#line 1914 "y.tab.c"
    break;

  case 52:
#line 209 "semantics.y"
                                                                        {(yyval.strct) = pointer_fraza((yyvsp[0].string), fraza);}
#line 1920 "y.tab.c"
    break;

  case 53:
#line 212 "semantics.y"
                                                                {(yyval.param_functie) = (yyvsp[0].param_functie);}
#line 1926 "y.tab.c"
    break;

  case 54:
#line 213 "semantics.y"
                                                                                                {(yyval.param_functie) = initializeaza_parametru(0);}
#line 1932 "y.tab.c"
    break;

  case 55:
#line 216 "semantics.y"
                                                                                {(yyval.param_functie) = initializeaza_parametru((yyvsp[0].strct)->type);}
#line 1938 "y.tab.c"
    break;

  case 56:
#line 217 "semantics.y"
                                                                        {impinge_parametru((yyval.param_functie), (yyvsp[0].strct)->type);}
#line 1944 "y.tab.c"
    break;

  case 69:
#line 238 "semantics.y"
                                                                        {;}
#line 1950 "y.tab.c"
    break;

  case 71:
#line 242 "semantics.y"
                                                    {;}
#line 1956 "y.tab.c"
    break;

  case 72:
#line 243 "semantics.y"
                                                                {;}
#line 1962 "y.tab.c"
    break;

  case 73:
#line 244 "semantics.y"
                                                                {printeaza_variabile((yyvsp[-1].strct));}
#line 1968 "y.tab.c"
    break;

  case 74:
#line 245 "semantics.y"
                                                                                {;}
#line 1974 "y.tab.c"
    break;

  case 75:
#line 250 "semantics.y"
                                                                                        {impinge_functie((yyvsp[-4].string), (yyvsp[-6].type_id), (yyvsp[-2].param_functie));}
#line 1980 "y.tab.c"
    break;

  case 76:
#line 253 "semantics.y"
                                                                                                                                {(yyval.param_functie) = (yyvsp[0].param_functie);}
#line 1986 "y.tab.c"
    break;

  case 77:
#line 254 "semantics.y"
                                                                                                                                                        {(yyval.param_functie) = initializeaza_parametru(0);}
#line 1992 "y.tab.c"
    break;

  case 78:
#line 257 "semantics.y"
                                                                                                                                {(yyval.param_functie) = initializeaza_parametru((yyvsp[0].type_id));}
#line 1998 "y.tab.c"
    break;

  case 79:
#line 258 "semantics.y"
                                                                                                                        {impinge_parametru((yyval.param_functie), (yyvsp[0].type_id));}
#line 2004 "y.tab.c"
    break;

  case 80:
#line 261 "semantics.y"
                                                                                                                {(yyval.type_id) = (yyvsp[-1].type_id);}
#line 2010 "y.tab.c"
    break;

  case 81:
#line 265 "semantics.y"
                                                                {;}
#line 2016 "y.tab.c"
    break;

  case 82:
#line 266 "semantics.y"
                                                                        {;}
#line 2022 "y.tab.c"
    break;


#line 2026 "y.tab.c"

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
#line 269 "semantics.y"


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
