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
#include <stdio.h>     /* C declarations used in actions */
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

extern char* yytext;
extern FILE* yyin;
extern int yylineno;
int lineError = 0;

#define TYPE_NORMAL 1
#define TYPE_ARRAY 2
#define TYPE_FUNCTION 3

struct var {
	char id[100];
	int var_type;

	// normal type
	int type;
	int cnst;

	// array
	int arraySize;
	double array[100];
	char arrayStr[100][1000];
	int isInitilalized[100];
	
	// function
	int parameterTypes[10];
	int parameterNum;
};

struct parameter {
	int paramNum;
	int parameterTypes[10];
};

struct var* initializeVar();

#define BBLK "\e[1;30m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BMAG "\e[1;35m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"
#define RESET "\e[0m"

int totalVar = 0;
struct var variables[100];

struct var* temporaryPointNum(double, int);
struct var* temporaryPointStr(void*, int);
struct var* temporaryPointVar(char*);
struct var* temporaryPointArr(char*, struct var*);
struct var* temporaryPointFun(char*, struct parameter*);

void freeVar(struct var* v);
int getVariableIndex(char*);
void updateValue(char*, struct var*);
void FloatingPointException(int);
void pushVariable(char*, int, struct var*);
void pushVariableConst(char*, int, struct var*);
void pushEmptyVariable(char*, int);
void pushStructVariable(char*);
struct var* comp(struct var*, struct var*, int);
void printValue(struct var*);
void print_simbol_table(struct var*,int);

void pushArray(char*, int, struct var*);
void updateArrValue(char*, struct var*, struct var*);
void Eval_function(struct var*);

void pushParam(struct parameter*, int);
struct parameter* initializeParam(int);
void pushFunction(char*, int, struct parameter*);
char* defToDataType(int);

#line 155 "y.tab.c"

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
    String = 263,                  /* String  */
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
    String_Value = 277,            /* String_Value  */
    Character_Value = 278,         /* Character_Value  */
    exit_command = 279,            /* exit_command  */
    number = 280,                  /* number  */
    number_r = 281,                /* number_r  */
    IDENTIFIER = 282               /* IDENTIFIER  */
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
#define String 263
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
#define String_Value 277
#define Character_Value 278
#define exit_command 279
#define number 280
#define number_r 281
#define IDENTIFIER 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 85 "semantics.y"

	double num; 
	char string[1000]; 
	int type_id; 
	struct var* strct;
	struct parameter* funParam;

#line 270 "y.tab.c"

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
  YYSYMBOL_String = 8,                     /* String  */
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
  YYSYMBOL_String_Value = 22,              /* String_Value  */
  YYSYMBOL_Character_Value = 23,           /* Character_Value  */
  YYSYMBOL_exit_command = 24,              /* exit_command  */
  YYSYMBOL_number = 25,                    /* number  */
  YYSYMBOL_number_r = 26,                  /* number_r  */
  YYSYMBOL_IDENTIFIER = 27,                /* IDENTIFIER  */
  YYSYMBOL_28_ = 28,                       /* ';'  */
  YYSYMBOL_29_ = 29,                       /* '['  */
  YYSYMBOL_30_ = 30,                       /* ']'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_lines = 35,                     /* lines  */
  YYSYMBOL_line = 36,                      /* line  */
  YYSYMBOL_DATA_TYPE = 37,                 /* DATA_TYPE  */
  YYSYMBOL_assignment = 38,                /* assignment  */
  YYSYMBOL_exp = 39,                       /* exp  */
  YYSYMBOL_term = 40                       /* term  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  36
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  70

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


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
      31,    32,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    29,     2,    30,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   132,   132,   135,   136,   139,   140,   141,   144,   145,
     146,   147,   148,   151,   152,   153,   154,   155,   159,   160,
     161,   162,   163,   164,   166,   167,   168,   169,   170,   171,
     172,   176,   177,   178,   179,   180,   181
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
  "plutitor", "litera", "bul", "String", "conservator", "GEQ", "LEQ",
  "AND", "OR", "EQEQ", "LS", "GE", "PLUS", "MINUS", "PROD", "DIV", "EQUAL",
  "String_Value", "Character_Value", "exit_command", "number", "number_r",
  "IDENTIFIER", "';'", "'['", "']'", "'('", "')'", "$accept", "program",
  "lines", "line", "DATA_TYPE", "assignment", "exp", "term", YY_NULLPTR
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
     275,   276,   277,   278,   279,   280,   281,   282,    59,    91,
      93,    40,    41
};
#endif

#define YYPACT_NINF (-28)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,    14,   -28,   -28,   -28,   -28,   -28,    73,   -27,   -17,
      27,    26,   -28,    -1,    10,   -28,   -28,   -28,   -28,    15,
      14,   118,   -28,    16,   -28,    14,    14,   -28,   -28,    17,
     -28,    14,    44,    14,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,   -28,    28,   137,    55,    14,    76,
     -28,   -10,   -10,   -28,    36,   148,   -10,   -10,    85,    85,
      12,    12,    14,    30,    97,   -28,   137,    14,   -28,   137
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     8,     9,    10,    11,    12,     0,     0,     0,
       0,     2,     3,     0,     0,    36,    35,    33,    34,    31,
       0,     0,    18,     0,     6,     0,     0,     1,     4,    13,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,    16,     0,     0,     0,
      19,    29,    28,    24,    25,    30,    26,    27,    20,    21,
      22,    23,     0,     0,     0,    32,    14,     0,    15,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -28,   -28,   -28,    41,    75,   -28,   -20,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    11,    12,    13,    14,    21,    22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      32,    24,    35,    36,    25,    46,    47,    40,    41,    42,
      43,    49,    26,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    35,    36,    29,    27,    64,     1,
       2,     3,     4,     5,     6,     7,    15,    16,    30,    17,
      18,    19,    66,    45,    31,    20,    48,    69,    35,    62,
       8,    67,    28,     9,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    50,     2,     3,     4,
       5,     6,    23,     0,     0,    63,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    35,    36,     0,
       0,     0,     0,     0,    42,    43,    65,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,    44,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    33,    34,
      35,    36,     0,    38,    39,    40,    41,    42,    43
};

static const yytype_int8 yycheck[] =
{
      20,    28,    12,    13,    21,    25,    26,    17,    18,    19,
      20,    31,    29,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    12,    13,    27,     0,    48,     3,
       4,     5,     6,     7,     8,     9,    22,    23,    28,    25,
      26,    27,    62,    27,    29,    31,    29,    67,    12,    21,
      24,    21,    11,    27,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    32,     4,     5,     6,
       7,     8,     7,    -1,    -1,    30,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    20,    30,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    24,    27,
      34,    35,    36,    37,    38,    22,    23,    25,    26,    27,
      31,    39,    40,    37,    28,    21,    29,     0,    36,    27,
      28,    29,    39,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    28,    27,    39,    39,    29,    39,
      32,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    21,    30,    39,    30,    39,    21,    30,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    36,    37,    37,
      37,    37,    37,    38,    38,    38,    38,    38,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    40,    40,    40,    40,    40,    40
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     3,     1,     1,
       1,     1,     1,     2,     5,     5,     3,     6,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     4,     1,     1,     1,     1
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
  case 2: /* program: lines  */
#line 132 "semantics.y"
                { print_simbol_table(variables,totalVar);printf(BGRN "Program corect sintactic\n\n" RESET); }
#line 1349 "y.tab.c"
    break;

  case 3: /* lines: line  */
#line 135 "semantics.y"
                                                        {;}
#line 1355 "y.tab.c"
    break;

  case 4: /* lines: lines line  */
#line 136 "semantics.y"
                                                        {;}
#line 1361 "y.tab.c"
    break;

  case 5: /* line: assignment ';'  */
#line 139 "semantics.y"
                                                                                        {;}
#line 1367 "y.tab.c"
    break;

  case 6: /* line: exit_command ';'  */
#line 140 "semantics.y"
                                                                                                {exit(EXIT_SUCCESS);}
#line 1373 "y.tab.c"
    break;

  case 7: /* line: print exp ';'  */
#line 141 "semantics.y"
                                                                                                {printValue((yyvsp[-1].strct));}
#line 1379 "y.tab.c"
    break;

  case 8: /* DATA_TYPE: integru  */
#line 144 "semantics.y"
                                 {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1385 "y.tab.c"
    break;

  case 9: /* DATA_TYPE: plutitor  */
#line 145 "semantics.y"
                                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1391 "y.tab.c"
    break;

  case 10: /* DATA_TYPE: litera  */
#line 146 "semantics.y"
                                         {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1397 "y.tab.c"
    break;

  case 11: /* DATA_TYPE: bul  */
#line 147 "semantics.y"
                                                 {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1403 "y.tab.c"
    break;

  case 12: /* DATA_TYPE: String  */
#line 148 "semantics.y"
                                                 {(yyval.type_id) = (yyvsp[0].type_id);}
#line 1409 "y.tab.c"
    break;

  case 13: /* assignment: DATA_TYPE IDENTIFIER  */
#line 151 "semantics.y"
                                                                                {pushEmptyVariable((yyvsp[0].string), (yyvsp[-1].type_id));}
#line 1415 "y.tab.c"
    break;

  case 14: /* assignment: conservator DATA_TYPE IDENTIFIER EQUAL exp  */
#line 152 "semantics.y"
                                                                        {pushVariableConst((yyvsp[-2].string), (yyvsp[-3].type_id), (yyvsp[0].strct));}
#line 1421 "y.tab.c"
    break;

  case 15: /* assignment: DATA_TYPE IDENTIFIER '[' exp ']'  */
#line 153 "semantics.y"
                                                                                {pushArray((yyvsp[-3].string), (yyvsp[-4].type_id), (yyvsp[-1].strct));}
#line 1427 "y.tab.c"
    break;

  case 16: /* assignment: IDENTIFIER EQUAL exp  */
#line 154 "semantics.y"
                                                                                        {updateValue((yyvsp[-2].string), (yyvsp[0].strct));}
#line 1433 "y.tab.c"
    break;

  case 17: /* assignment: IDENTIFIER '[' exp ']' EQUAL exp  */
#line 155 "semantics.y"
                                                                                {updateArrValue((yyvsp[-5].string), (yyvsp[-3].strct), (yyvsp[0].strct));}
#line 1439 "y.tab.c"
    break;

  case 18: /* exp: term  */
#line 159 "semantics.y"
                                        {(yyval.strct) = (yyvsp[0].strct);}
#line 1445 "y.tab.c"
    break;

  case 19: /* exp: '(' exp ')'  */
#line 160 "semantics.y"
                                                {(yyval.strct) = (yyvsp[-1].strct);}
#line 1451 "y.tab.c"
    break;

  case 20: /* exp: exp PLUS exp  */
#line 161 "semantics.y"
                                    {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), PLUS);}
#line 1457 "y.tab.c"
    break;

  case 21: /* exp: exp MINUS exp  */
#line 162 "semantics.y"
                                    {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), MINUS);}
#line 1463 "y.tab.c"
    break;

  case 22: /* exp: exp PROD exp  */
#line 163 "semantics.y"
                                    {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), PROD);}
#line 1469 "y.tab.c"
    break;

  case 23: /* exp: exp DIV exp  */
#line 164 "semantics.y"
                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), DIV);}
#line 1475 "y.tab.c"
    break;

  case 24: /* exp: exp AND exp  */
#line 166 "semantics.y"
                                                {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), AND);}
#line 1481 "y.tab.c"
    break;

  case 25: /* exp: exp OR exp  */
#line 167 "semantics.y"
                                                {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), OR);}
#line 1487 "y.tab.c"
    break;

  case 26: /* exp: exp LS exp  */
#line 168 "semantics.y"
                                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), LS) ;}
#line 1493 "y.tab.c"
    break;

  case 27: /* exp: exp GE exp  */
#line 169 "semantics.y"
                                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), GE);}
#line 1499 "y.tab.c"
    break;

  case 28: /* exp: exp LEQ exp  */
#line 170 "semantics.y"
                                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), LEQ);}
#line 1505 "y.tab.c"
    break;

  case 29: /* exp: exp GEQ exp  */
#line 171 "semantics.y"
                                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), GEQ);}
#line 1511 "y.tab.c"
    break;

  case 30: /* exp: exp EQEQ exp  */
#line 172 "semantics.y"
                                                        {(yyval.strct) = comp((yyvsp[-2].strct), (yyvsp[0].strct), EQEQ);}
#line 1517 "y.tab.c"
    break;

  case 31: /* term: IDENTIFIER  */
#line 176 "semantics.y"
                                                                {(yyval.strct) = temporaryPointVar((yyvsp[0].string));}
#line 1523 "y.tab.c"
    break;

  case 32: /* term: IDENTIFIER '[' exp ']'  */
#line 177 "semantics.y"
                                                                {(yyval.strct) = temporaryPointArr((yyvsp[-3].string), (yyvsp[-1].strct));}
#line 1529 "y.tab.c"
    break;

  case 33: /* term: number  */
#line 178 "semantics.y"
                                                                {(yyval.strct) = temporaryPointNum((yyvsp[0].num), integru);}
#line 1535 "y.tab.c"
    break;

  case 34: /* term: number_r  */
#line 179 "semantics.y"
                                                                                {(yyval.strct) = temporaryPointNum((yyvsp[0].num), plutitor);}
#line 1541 "y.tab.c"
    break;

  case 35: /* term: Character_Value  */
#line 180 "semantics.y"
                                                                        {(yyval.strct) = temporaryPointStr((yyvsp[0].string), litera);}
#line 1547 "y.tab.c"
    break;

  case 36: /* term: String_Value  */
#line 181 "semantics.y"
                                                                        {(yyval.strct) = temporaryPointStr((yyvsp[0].string), String);}
#line 1553 "y.tab.c"
    break;


#line 1557 "y.tab.c"

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

#line 184 "semantics.y"

void pushStructVariable(char*id)
{
	int i = getVariableIndex(id);

	if (i != -1) {
		printf(BRED "The variable " BBLU "%s" BRED " was already declared here\n", id);
		exit(0);
	}

	struct var *v = variables + totalVar;
	
	sprintf(v->id, "%s", id);
	v->type = 0;

	totalVar++;
}

void pushFunction(char* id, int retType, struct parameter* p) {
	int i = getVariableIndex(id);

	if (i != -1) {
		printf(BRED "Name for function " BBLK "%s" BRED " was already taken.\n" RESET, id);
		exit(0);
	}

	struct var *v = variables + totalVar;
	
	sprintf(v->id, "%s", id);
	v->var_type = TYPE_FUNCTION;
	v->type = retType;
	v->parameterNum = p->paramNum;
	for (int i = 0; i < p->paramNum; i++) {
		v->parameterTypes[i] = p->parameterTypes[i];
	}

	free(p);
	totalVar++;
}

void pushParam(struct parameter* p, int type) {
	p->parameterTypes[p->paramNum++] = type;	
}

struct parameter* initializeParam(int type) {
	struct parameter *p = (struct parameter*)malloc(sizeof(struct parameter));
	if (type == 0) {
		p->paramNum = 0;
		return p;
	}

	p->paramNum = 1;
	p->parameterTypes[0] = type;

	return p;
}

void Eval_function(struct var* x)
{
  if(x->type == integru)
  		printf(BGRN "%d\n" RESET,(int)x->array[0]);
  else
  {
	  	printf(BYEL "Eval function must have an integer type parameter.\n" RESET);
		exit(0);
  }
   
}

void print_simbol_table(struct var* v,int n)
{
	FILE *fd;
	fd = fopen("symbol_table.txt", "w");
	if(fd == NULL)
	{
		char buffer[100];
		sprintf(buffer, "Nu pot deschide fisierul symbol_table.txt.");
		yyerror(buffer);
		exit(0);
	}
 	
 	for(int i=0;i<n;i++)
	{
	    if(v[i].var_type != TYPE_ARRAY && v[i].var_type != TYPE_FUNCTION)
		{
			fprintf(fd,"nume : %s  ",v[i].id);
			switch (v[i].type) {
			case integru:
				fprintf(fd, "tip = integru valoare = %d  ", (int)v[i].array[0]);
				break;
			case litera:
				fprintf(fd, "tip = litera valoare = '%c' ", (char)v[i].array[0]);
				break;
			case plutitor:
				fprintf(fd, "tip = plutitor valoare = %f ", (float)v[i].array[0]);
				break;
			case String:
				fprintf(fd, "tip = String valoare = \"%s\" ", (char*)v[i].arrayStr[0]);
				break;
			case bul:
				fprintf(fd, "tip = bul valoare = %d ", (int)v[i].array[0]);
				break;
			case 0:
				fprintf(fd, "tip = User Defined Type\n");
				break;
			default:
				break;
			}
			if(v[i].type!=0)
				if(v[i].cnst)
					fprintf(fd, "constant \n");
				else
					fprintf(fd, "not constant \n");
		}
		else if(v[i].var_type != TYPE_FUNCTION)
		{
			fprintf(fd,"nume : %s  ",v[i].id);
			switch (v[i].type) {
			case integru:
				fprintf(fd, "tip = integru Array ");
				for(int j=0;j<v[i].arraySize;j++)
				{
				 	fprintf(fd,"%s[%d] = %d  ", v[i].id, j, (int)v[i].array[j]);
				}
				break;
			case litera:
				fprintf(fd, "tip = Chraracter Array ");
				for(int j=0;j<v[i].arraySize;j++)
				{
				 	fprintf(fd,"%s[%d] = %c  ", v[i].id, j, (char)v[i].array[j]);
				}
				break;
			case plutitor:
				fprintf(fd, "tip = plutitor Array ");
				for(int j=0;j<v[i].arraySize;j++)
				{
				 	fprintf(fd,"%s[%d] = %f  ", v[i].id, j, (float)v[i].array[j]);
				}
				break;
			case String:
				fprintf(fd, "tip = String Array");
				for(int j=0;j<v[i].arraySize;j++)
				{
					fprintf(fd," %s[%d] = \"%s\" ", v[i].id, j, (char*)v[i].arrayStr[j]);
				}
				break;
			case bul:
				fprintf(fd, "tip = bul Array ");
				for(int j=0;j<v[i].arraySize;j++)
				{
				 	fprintf(fd,"%s[%d] = %d  ", v[i].id, j, (int)v[i].array[j]);
				}
				break;
			default:
				break;
			}
			fprintf(fd,"\n");
		}

	}
	fprintf(fd,"\n");
    for(int i=0;i<n;i++)
	{
		if(v[i].var_type == TYPE_FUNCTION)
		{
            fprintf(fd, "Function : ");
			fprintf(fd, "%s %s", defToDataType(v[i].type), v[i].id);
			int nr = v[i].parameterNum;
			if (nr != 0) 
			{   
				fprintf(fd,  " (");
				for (int j = 0; j < nr-1 ; j++)
				{
					fprintf(fd, "%s, ", defToDataType(v[i].parameterTypes[j]));
				}
				fprintf(fd, "%s", defToDataType(v[i].parameterTypes[nr-1]));
				fprintf(fd,  ") ");
			}
			else
			{
			 fprintf(fd, "();");
			}

			fprintf(fd, "\n");
			
		}
	}
}

struct var* temporaryPointNum(double val, int type) {
	struct var *v = initializeVar();

	v->array[0] = val;
	v->type = type;

	return v;
}

struct var* temporaryPointStr(void* val, int type) {
	struct var *v = initializeVar();

	v->type = type;

	if (type == String) {
		sprintf(v->arrayStr[0], "%s", (char*)val);
	} else {
		v->array[0] = ((char*)val)[0];
	}

	return v;
}

struct var* temporaryPointFun(char* id, struct parameter* pr) {
	int i = getVariableIndex(id);

	if (i == -1) {
		printf(BRED "Function " BYEL "%s" BRED " was not declared in this scope.\n", id);
		exit(0);
	}

	struct var* v = variables + i;

	if (v->var_type != TYPE_FUNCTION) {
		printf(BBLU "%s" BRED " should be a function, not a variable.\n" RESET, v->id);
		exit(0);
	}

	if (v->parameterNum != pr->paramNum) {
		printf(BRED "The number of variables should match for function " BBLU "%s" BRED ".\n" RESET, v->id);
		exit(0);
	}

	int n = v->parameterNum;

	int *funParams = v->parameterTypes;
	int *callParams = pr->parameterTypes;

	for (int i = 0; i < n; i++) {
		if (funParams[i] != callParams[i]) {
			printf(BBLU "%s" BRED " parameters should match function definition.\n" RESET, v->id);
			printf(BRED "Parameter " BMAG "%d" BRED " is " BBLU "%s" BBLU " but in definition is " BBLU "%s" BRED ".\n" RESET, i + 1, defToDataType(callParams[i]), defToDataType(funParams[i]));
			exit(0);
		}
	}

	v = initializeVar();
	v->type = integru;
	v->array[0] = 0;

	return v;
}

struct var* temporaryPointVar(char* id) {
	int i = getVariableIndex(id);

	if (i == -1) {
		printf(BYEL "%s" BRED " was not declared in this scope.\n", id);
		exit(0);
	}
	
	struct var* v = variables + i;
	
	if (v->var_type == TYPE_NORMAL && v->isInitilalized[0] == 0) {
		printf(BYEL "%s was not initialzied. The default value will be used. Line %d.\n" RESET, id, yylineno);
	}

	if (v->var_type == TYPE_FUNCTION) {
		v->array[0] = 0;
	}

	return v;
}

struct var* temporaryPointArr(char* id, struct var* node) {
	int i = getVariableIndex(id);

	if (i == -1) {
		printf(BYEL "%s" BRED " was not declared in this scope.\n", id);
		exit(0);
	}

	struct var *v = variables + i;

	if (v->var_type != TYPE_ARRAY) {
		printf(BRED "Varialbe " BBLU "%s" BRED " is not an array type.\n" RESET, v->id);
		exit(0);
	}

	if (node->type == String) {
		printf(BRED"This array type cannot be accessed with a string expression.\n" RESET);
		exit(0);
	}

	int n = (int)node->array[0];

	if (n < 0) {
		printf(BRED "Array index should be more than 0 but it's " BMAG "%d" BRED ".\n" RESET, n);
		exit(0);
	}

	if (n >= v->arraySize) {
		printf(BRED "Array size exceded for variable " BBLU "%s" BRED " from expression: " BMAG "%d" BRED ", where maximum index is " BMAG "%d" BRED ".\n" RESET, id, n, v->arraySize - 1);
		exit(0);
	}

	struct var *exp = initializeVar();

	exp->type = v->type;

	if (v->var_type == TYPE_ARRAY && v->isInitilalized[n] == 0) {
		printf(BYEL "%s[%d] was not initialzied. The default value will be used. Line %d.\n" RESET, id, n, yylineno);
	}

	if (v->type == String) {
		sprintf(exp->arrayStr[0], "%s", v->arrayStr[n]);
	} else if (v->type == bul) {
		exp->array[0] = v->array[n] != 0;
	} else {
		exp->array[0] = v->array[n];
	}

	return exp;
}

void freeVar(struct var* v) {
	if (strlen(v->id) == 0) {
		free(v);
	}
}

int getVariableIndex(char* varName) {
	for (int i = 0; i < totalVar; i++) {
		if (strcmp(varName, variables[i].id) == 0) {
			return i;
		}
	}

	return -1;
} 

void updateValue(char* id, struct var* exp) {
	int i = getVariableIndex(id);

	if (i == -1) {
		printf(BYEL "%s" BRED " was not declared in this scope.\n", id);
		exit(0);
	} 

	struct var *vr = variables + i;
	
	if (vr->var_type == TYPE_FUNCTION) {
		printf(BRED"Function " BBLU "%s" BRED " cannot be changed.\n" RESET, vr->id);
		exit(0);
	}

	if (vr->var_type == TYPE_ARRAY && exp->var_type != TYPE_ARRAY) {
		printf(BRED "Variable " BBLU "%s" BRED " is an array type but the expression is not.\n" RESET, vr->id);
		exit(0);
	}

	if (vr->var_type != TYPE_ARRAY && exp->var_type == TYPE_ARRAY) {
		printf(BRED "Variable " BBLU "%s" BRED " is a normal type but expression is an array.\n" RESET, vr->id);
		exit(0);
	}
	
	if (vr->type == String && exp->type != String || vr->type != String && exp->type == String) {
		printf(BRED "Data types should match.\n" RESET);
		exit(0);
	}
	
	if(vr->cnst)
	{
		printf(BRED "Constat variable " BBLU "%s" BRED " cannot be modified.\n", id);
		exit(0);
	} 

	if (vr->var_type == TYPE_ARRAY && exp->var_type == TYPE_ARRAY) {

		int n = vr->arraySize;
		int m = exp->arraySize;

		for (int i = 0; i < n && i < m; i++) {
			if (vr->type == String) {
				sprintf(vr->arrayStr[i], "%s", exp->arrayStr[i]);
			} else if (vr->type == bul) {
				vr->array[i] = exp->array[i] != 0;
			} else {
				vr->array[i] = exp->array[i];
			}
		}

		return;
	}

	vr->isInitilalized[0] = 1;
	if (vr->type == String) {
		sprintf(vr->arrayStr[0], "%s", exp->arrayStr[0]);
	} else if (vr->type == bul) {
		vr->array[0] = exp->array[0] != 0;
	} else {
		vr->array[0] = exp->array[0];
	}

}

void updateArrValue(char* id, struct var* exp_1, struct var* exp_2) {
	int i = getVariableIndex(id);

	if (i == -1) {
		printf(BYEL "%s" BRED " was not declared in this scope.\n" RESET , id);
		exit(0);
	}

	struct var *v = variables + i;

	if (v->var_type == TYPE_FUNCTION) {
		printf(BRED "Invalid expression for function " BBLU "%s" BRED ".\n" RESET, v->id);
		exit(0);
	}

	if (exp_1->type == String) {
		printf(BRED "This array type cannot be accessed with a string expression.\n" RESET);
		exit(0);
	}

	int n = (int)exp_1->array[0];

	if (n < 0) {
		printf(BRED "Array index should be more than " BMAG "0" BRED " but it's " BMAG "%d" BRED ".\n" RESET, n);
		exit(0);
	}

	if (n >= v->arraySize) {
		printf(BRED"Array size exceded for %s: %d, where maximum index is %d.\n" RESET, id, n, v->arraySize - 1);
		exit(0);
	}

	if (v->type == String && exp_2->type != String || v->type != String && exp_2->type == String) {
		printf(BRED "Data type should match for variable " BBLU "%s" BWHT "[" BMAG "%d" BWHT "]" BRED ".\n" RESET, id, n);
		exit(0);
	}

	v->isInitilalized[n] = 1;

	if (v->type == String) {
		sprintf(v->arrayStr[n], "%s", exp_2->arrayStr[0]);
	} else if (v->type == bul) {
		v->array[n] = exp_2->array[0] != 0;
	} else {
		v->array[n] = exp_2->array[0];
	}
}

void pushEmptyVariable(char* id, int type) {
	int i = getVariableIndex(id);

	if (i != -1) {
		printf(BRED "The variable " BBLU "%s" BRED " was already declared here\n", id);
		exit(0);
	}

	struct var *v = variables + totalVar;
	
	sprintf(v->id, "%s", id);
	v->type = type;

	if (type == String) {
		sprintf(v->arrayStr[0], "%s", "");
	} else {
		v->array[0] = 0;
	}

	totalVar++;
}

void pushVariable(char* id, int type, struct var* exp) {
	int i = getVariableIndex(id);

	if (i != -1) {
		printf(BRED "The variable " BBLU "%s" BRED " was already declared here\n", id);
		exit(0);
	}

	struct var *v = variables + totalVar;
	
	sprintf(v->id, "%s", id);
	v->type = type;
	v->isInitilalized[0] = 1;
	if (type == String) {
		sprintf(v->arrayStr[0], "%s", exp->arrayStr[0]);
	} else if (type == bul) {
		v->array[0] = exp->array[0] != 0;
	} else {
		v->array[0] = exp->array[0];
	}

	freeVar(exp);
	totalVar++;
}

void pushArray(char* id, int type, struct var* exp) {
	int i = getVariableIndex(id);

	if (i != -1) {
		printf(BRED "The variable " BBLU "%s" BRED " was already declared here\n", id);
		exit(0);
	}

	if (exp->type == String) {
		printf(BYEL "Array types cannot be declared with string expressions.\n" RESET);
		exit(0);
	}

	int n = (int)exp->array[0];

	if (n <= 0) {
		printf(BYEL "The array size should be at least 1.\n" RESET);
		exit(0);
	}

	struct var *v = variables + totalVar;

	if (v->type == String && exp->type != String || v->type != String && exp->type == String) {
		printf(BYEL "Data types should match.\n" RESET);
		exit(0);
	}

	sprintf(v->id, "%s", id);
	v->type = type;
	v->var_type = TYPE_ARRAY;
	v->arraySize = n;

	totalVar++;
}

void pushVariableConst(char* id, int type, struct var* exp) {
	int i = getVariableIndex(id);

	if (i != -1) {
		printf("The variable %s was already declared here\n", id);
		exit(0);
	}

	struct var *v = variables + totalVar;
	
	sprintf(v->id, "%s", id);
	v->type = type;

	if (type == String) {
		sprintf(v->arrayStr[0], "%s", exp->arrayStr[0]);
	} else if (type == bul) {
		v->array[0] = exp->array[0] != 0;
	} else {
		v->array[0] = exp->array[0];
	}
    v->cnst=1;
	v->isInitilalized[0] = 1;
	freeVar(exp);
	totalVar++;
}

struct var* comp(struct var* a, struct var* b, int op_type) {
	
	struct var* v = initializeVar();
	double c;

	int n;

	switch (op_type) {
	case PLUS:;
		if (a->type == String && b->type == String) {
			v->type = String;
			strcpy(v->arrayStr[0], "");
			strcat(v->arrayStr[0], a->arrayStr[0]);
			strcat(v->arrayStr[0], b->arrayStr[0]);
			break;
		}

		if (a->type != String && b->type == String) {
			v->type = String;
			strcpy(v->arrayStr[0], "");
			sprintf(v->arrayStr[0], "%f", (float)a->array[0]);
			strcat(v->arrayStr[0], b->arrayStr[0]);
			break;
		}

		if (a->type == String && b->type != String) {
			v->type = String;
			strcpy(v->arrayStr[0], "");

			strcat(v->arrayStr[0], a->arrayStr[0]);
			char bfr[10];
			sprintf(bfr, "%f", (float)b->array[0]);
			strcat(v->arrayStr[0], bfr);
			break;
		}

		if (a->type == litera) {
			v->type = litera;
			v->array[0] = (int)(a->array[0] + b->array[0]);
			break;
		}

		c = a->array[0] + b->array[0];

		if (c == (int)c) {
			v->type = integru;
			v->array[0] = (int)c;
		} else {
			v->type = plutitor;
			v->array[0] = c;
		}
		break;
	case MINUS:;

		if (a->type == litera) {
			v->type = litera;
			v->array[0] = (int)(a->array[0] - b->array[0]);
			break;
		}

		c = a->array[0] - b->array[0];

		if (c == (int)c) {
			v->type = integru;
			v->array[0] = (int)c;
		} else {
			v->type = plutitor;
			v->array[0] = c;
		}
		break;
	case PROD:;
		c = a->array[0] * b->array[0];

		if (c == (int)c) {
			v->type = integru;
			v->array[0] = (int)c;
		} else {
			v->type = plutitor;
			v->array[0] = c;
		}
		break;
	case DIV:;
	    double c = a->array[0] / b->array[0];
		if (c == (int)c) 
			v->type = integru;
		else
			v->type = plutitor;
		if (b->array[0] == 0) {
			printf(BRED "Division with 0 is not possible.\n" RESET);
			exit(0);
		}

	    c = a->array[0] / b->array[0];

		if (c == (int)c) { 
			v->type = integru;
			v->array[0] = (int)c;
		} else {
			v->type = plutitor;
			v->array[0] = c;
		}
		break;
	case LS:;
		if (a->type == String && b->type == String) {
			n = strcmp(a->arrayStr[0], b->arrayStr[0]);
			v->array[0] = n == -1;
		} else {
			v->array[0] = (int)(a->array[0] < b->array[0]);
		}
		v->type = integru;
		break;
	case LEQ:;
		if (a->type == String && b->type == String) {
			n = strcmp(a->arrayStr[0], b->arrayStr[0]);
			v->array[0] = n == -1 || n == 0;
		} else {
			v->array[0] = (int)(a->array[0] <= b->array[0]);
		}
		v->type = integru;
		break;
	case GE:;
		if (a->type == String && b->type == String) {
			n = strcmp(a->arrayStr[0], b->arrayStr[0]);
			v->array[0] = n == 1;
		} else {
			v->array[0] = (int)(a->array[0] > b->array[0]);
		}
		v->type = integru;
		break;
	case GEQ:;
		if (a->type == String && b->type == String) {
			n = strcmp(a->arrayStr[0], b->arrayStr[0]);
			v->array[0] = n == 1 || n == 0;
		} else {
			v->array[0] = (int)(a->array[0] >= b->array[0]);
		}
		v->type = integru;
		break;
	case EQEQ:;
		if (a->type == String && b->type == String) {
			n = strcmp(a->arrayStr[0], b->arrayStr[0]);
			v->array[0] = n == 0;
		} else {
			v->array[0] = (int)(a->array[0] == b->array[0]);
		}
		v->type = integru;
		break;
	}

	freeVar(a);
	freeVar(b);
	return v;
}


void printValue(struct var* node) {
	int type = node->type;
	int n;

	switch (type) {
	case integru:
		if (node->var_type == TYPE_ARRAY) {
			n = node->arraySize;
			printf("{");
			for (int i = 0; i < n - 1; i++) {
				printf("%d, ", (int)node->array[i]);
			}
			printf("%d", (int)node->array[n - 1]);
			printf("}\n");
			break;
		}
		if (node->var_type == TYPE_NORMAL)
			printf("%d\n", (int)node->array[0]);
		break;
	case litera:
		if (node->var_type == TYPE_ARRAY) {
			n = node->arraySize;
			printf("{");
			for (int i = 0; i < n - 1; i++) {
				printf("'%c', ", (char)node->array[i]);
			}
			printf("'%c'", (char)node->array[n - 1]);
			printf("}\n");
			break;
		}
		if (node->var_type == TYPE_NORMAL)
			printf("'%c'\n", (char)node->array[0]);
		break;
	case plutitor:
		if (node->var_type == TYPE_ARRAY) {
			n = node->arraySize;
			printf("{");
			for (int i = 0; i < n - 1; i++) {
				printf("%f, ", (float)node->array[i]);
			}
			printf("%f", (float)node->array[n - 1]);
			printf("}\n");
			break;
		}
		if (node->var_type == TYPE_NORMAL)
			printf("%f\n", (float)node->array[0]);
		break;
	case String:
		if (node->var_type == TYPE_ARRAY) {
			n = node->arraySize;
			printf("{");
			for (int i = 0; i < n - 1; i++) {
				printf("\"%s\", ", node->arrayStr[i]);
			}
			printf("\"%s\"", node->arrayStr[n - 1]);
			printf("}\n");
			break;
		}
		if (node->var_type == TYPE_NORMAL)
			printf("\"%s\"\n", node->arrayStr[0]);
		break;
	case bul:
		if (node->var_type == TYPE_ARRAY) {
			n = node->arraySize;
			printf("{");
			for (int i = 0; i < n - 1; i++) {
				printf("\"%d\", ", (int)node->array[i]);
			}
			printf("\"%d\"", (int)node->array[n - 1]);
			printf("}\n");
			break;
		}
		if (node->var_type == TYPE_NORMAL)
			printf("%d\n", (int)node->array[0]);
		break;
	default:
		break;
	}

	if (node->var_type == TYPE_FUNCTION) {
		printf("%s %s", defToDataType(node->type), node->id);
		n = node->parameterNum;
		if (n != 0) {
			printf(" -> {");
			for (int i = 0; i < n - 1; i++) {
				printf("%s, ", defToDataType(node->parameterTypes[i]));
			}
			printf("%s}", defToDataType(node->parameterTypes[n - 1]));
		}

		printf("\n");
	}

}

struct var* initializeVar() {
	struct var* v = (struct var*)malloc(sizeof(struct var));

	sprintf(v->id, "%s", "");
	sprintf(v->arrayStr[0], "%s", "");

	v->array[0] = 0;
	v->var_type = TYPE_NORMAL;
	v->type = 0;

	return v;
}

char* defToDataType(int n) {
	switch (n) {
	case bul:
		return "bul";
		break;
	case litera:
		return "Char";
		break;
	case integru:
		return "integru";
		break;
	case plutitor:
		return "plutitor";
		break;
	case String:
		return "String";
		break;
	}
	return "";
}

int main (void) {

	for (int i = 0; i < 100; i++) {
		variables[i].var_type = TYPE_NORMAL;
		variables[i].isInitilalized[0] = 0;
	}

    yyin = fopen("input.txt", "r");
	return yyparse();
}

void yyerror (char *s) 
{
	printf (BRED "Error: %s line %d\n" RESET, s, yylineno);
}
