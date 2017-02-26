/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 11 "parser.y" /* yacc.c:339  */


/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */
#include "scanner.h" // for yylex
#include "parser.h"
#include "errors.h"

void yyerror(const char *msg); // standard error-handling routine


#line 82 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_Void = 258,
    T_Bool = 259,
    T_Int = 260,
    T_Float = 261,
    T_Uint = 262,
    T_Bvec2 = 263,
    T_Bvec3 = 264,
    T_Bvec4 = 265,
    T_Ivec2 = 266,
    T_Ivec3 = 267,
    T_Ivec4 = 268,
    T_Uvec2 = 269,
    T_Uvec3 = 270,
    T_Uvec4 = 271,
    T_Vec2 = 272,
    T_Vec3 = 273,
    T_Vec4 = 274,
    T_Mat2 = 275,
    T_Mat3 = 276,
    T_Mat4 = 277,
    T_While = 278,
    T_For = 279,
    T_If = 280,
    T_Else = 281,
    T_Return = 282,
    T_Break = 283,
    T_Continue = 284,
    T_Do = 285,
    T_Switch = 286,
    T_Case = 287,
    T_Default = 288,
    T_In = 289,
    T_Out = 290,
    T_Const = 291,
    T_Uniform = 292,
    T_LeftParen = 293,
    T_RightParen = 294,
    T_LeftBracket = 295,
    T_RightBracket = 296,
    T_LeftBrace = 297,
    T_RightBrace = 298,
    T_Dot = 299,
    T_Comma = 300,
    T_Colon = 301,
    T_Semicolon = 302,
    T_Question = 303,
    T_LessEqual = 304,
    T_GreaterEqual = 305,
    T_EQ = 306,
    T_NE = 307,
    T_And = 308,
    T_Or = 309,
    T_Plus = 310,
    T_Star = 311,
    T_MulAssign = 312,
    T_DivAssign = 313,
    T_AddAssign = 314,
    T_SubAssign = 315,
    T_Equal = 316,
    T_LeftAngle = 317,
    T_RightAngle = 318,
    T_Dash = 319,
    T_Slash = 320,
    T_Inc = 321,
    T_Dec = 322,
    T_Identifier = 323,
    T_IntConstant = 324,
    T_FloatConstant = 325,
    T_BoolConstant = 326,
    T_FieldSelection = 327,
    LOWEST = 328,
    LOWER_THAN_ELSE = 329
  };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Int 260
#define T_Float 261
#define T_Uint 262
#define T_Bvec2 263
#define T_Bvec3 264
#define T_Bvec4 265
#define T_Ivec2 266
#define T_Ivec3 267
#define T_Ivec4 268
#define T_Uvec2 269
#define T_Uvec3 270
#define T_Uvec4 271
#define T_Vec2 272
#define T_Vec3 273
#define T_Vec4 274
#define T_Mat2 275
#define T_Mat3 276
#define T_Mat4 277
#define T_While 278
#define T_For 279
#define T_If 280
#define T_Else 281
#define T_Return 282
#define T_Break 283
#define T_Continue 284
#define T_Do 285
#define T_Switch 286
#define T_Case 287
#define T_Default 288
#define T_In 289
#define T_Out 290
#define T_Const 291
#define T_Uniform 292
#define T_LeftParen 293
#define T_RightParen 294
#define T_LeftBracket 295
#define T_RightBracket 296
#define T_LeftBrace 297
#define T_RightBrace 298
#define T_Dot 299
#define T_Comma 300
#define T_Colon 301
#define T_Semicolon 302
#define T_Question 303
#define T_LessEqual 304
#define T_GreaterEqual 305
#define T_EQ 306
#define T_NE 307
#define T_And 308
#define T_Or 309
#define T_Plus 310
#define T_Star 311
#define T_MulAssign 312
#define T_DivAssign 313
#define T_AddAssign 314
#define T_SubAssign 315
#define T_Equal 316
#define T_LeftAngle 317
#define T_RightAngle 318
#define T_Dash 319
#define T_Slash 320
#define T_Inc 321
#define T_Dec 322
#define T_Identifier 323
#define T_IntConstant 324
#define T_FloatConstant 325
#define T_BoolConstant 326
#define T_FieldSelection 327
#define LOWEST 328
#define LOWER_THAN_ELSE 329

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 41 "parser.y" /* yacc.c:355  */

    int integerConstant;
    bool boolConstant;
    double floatConstant;
    char identifier[MaxIdentLen+1]; // +1 for terminating null
    Decl *decl;
    FnDecl *funcDecl;
    List<Decl*> *declList;
    Type *typeDecl;
    TypeQualifier *typeQualifier;
    Expr *expression;
    VarDecl *varDecl;
    List<VarDecl *> *varDeclList;
    List<Stmt*> *stmtList;
    Stmt       *stmt;
    Operator *ops;
    Identifier *funcId;
    List<Expr*> *argList;

#line 290 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 321 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   386

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   135,   135,   151,   152,   163,   164,   175,   176,   179,
     185,   192,   193,   196,   201,   206,   212,   217,   222,   230,
     233,   234,   235,   236,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   251,   252,   255,   256,   259,   260,
     263,   264,   268,   269,   270,   271,   272,   273,   274,   277,
     281,   287,   292,   293,   296,   297,   298,   299,   302,   305,
     311,   314,   315,   316,   317,   320,   321,   324,   325,   328,
     331,   332,   335,   338,   339,   340,   343,   348,   353,   360,
     361,   366,   371,   376,   383,   384,   389,   396,   397,   402,
     409,   410,   415,   420,   425,   432,   433,   438,   445,   446,
     453,   454,   461,   462,   466,   472,   473,   474,   475,   476
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Int", "T_Float",
  "T_Uint", "T_Bvec2", "T_Bvec3", "T_Bvec4", "T_Ivec2", "T_Ivec3",
  "T_Ivec4", "T_Uvec2", "T_Uvec3", "T_Uvec4", "T_Vec2", "T_Vec3", "T_Vec4",
  "T_Mat2", "T_Mat3", "T_Mat4", "T_While", "T_For", "T_If", "T_Else",
  "T_Return", "T_Break", "T_Continue", "T_Do", "T_Switch", "T_Case",
  "T_Default", "T_In", "T_Out", "T_Const", "T_Uniform", "T_LeftParen",
  "T_RightParen", "T_LeftBracket", "T_RightBracket", "T_LeftBrace",
  "T_RightBrace", "T_Dot", "T_Comma", "T_Colon", "T_Semicolon",
  "T_Question", "T_LessEqual", "T_GreaterEqual", "T_EQ", "T_NE", "T_And",
  "T_Or", "T_Plus", "T_Star", "T_MulAssign", "T_DivAssign", "T_AddAssign",
  "T_SubAssign", "T_Equal", "T_LeftAngle", "T_RightAngle", "T_Dash",
  "T_Slash", "T_Inc", "T_Dec", "T_Identifier", "T_IntConstant",
  "T_FloatConstant", "T_BoolConstant", "T_FieldSelection", "LOWEST",
  "LOWER_THAN_ELSE", "$accept", "Program", "DeclList", "Decl",
  "Declaration", "FuncDecl", "ParameterList", "SingleDecl", "Initializer",
  "TypeQualify", "TypeDecl", "CompoundStatement", "StatementList",
  "Statement", "SingleStatement", "SelectionStmt", "SwitchStmt",
  "CaseStmt", "JumpStmt", "WhileStmt", "ForStmt", "PrimaryExpr",
  "FunctionCallExpr", "FunctionCallHeaderNoParameters",
  "FunctionCallHeaderWithParameters", "ArgumentList", "FunctionIdentifier",
  "PostfixExpr", "UnaryExpr", "MultiExpr", "AdditionExpr", "RelationExpr",
  "EqualityExpr", "LogicAndExpr", "LogicOrExpr", "Expression", "AssignOp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

#define YYPACT_NINF -119

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-119)))

#define YYTABLE_NINF -73

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     107,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,    12,   107,  -119,  -119,    21,
      -5,   355,   -12,  -119,  -119,   150,  -119,  -119,  -119,    13,
     -30,    76,    79,    92,   -34,    46,    85,    97,    93,    91,
      93,  -119,  -119,    93,    93,    93,    93,   101,  -119,  -119,
    -119,   100,    82,  -119,   205,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,   110,   113,   127,   -26,    62,
     -45,    -2,     2,    -6,   123,   -39,   133,   -37,    55,   120,
      93,    93,    93,    93,  -119,   143,  -119,  -119,    93,   145,
     315,   155,  -119,  -119,  -119,  -119,  -119,   -18,  -119,  -119,
    -119,  -119,    16,    93,   124,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,  -119,   126,    93,  -119,
      70,  -119,   161,  -119,  -119,   164,   157,   167,  -119,   168,
     315,  -119,  -119,  -119,   170,  -119,   171,  -119,  -119,  -119,
    -119,  -119,   -45,   -45,    -2,    -2,    -2,    -2,     2,     2,
      -6,   -29,   123,   172,  -119,  -119,   107,  -119,   315,    93,
     315,   189,  -119,    93,  -119,    93,  -119,  -119,  -119,   188,
     218,   315,  -119,   191,    93,   315,   260,   207,  -119,  -119,
     315,  -119
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    27,    24,    26,    28,    29,    30,    31,    32,
      33,    20,    21,    22,    23,     0,     2,     4,     5,     0,
       0,     0,     0,     1,     3,     0,     7,     6,     8,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    40,     0,     0,     0,     0,    60,    61,    62,
      63,     0,     0,    38,     0,    36,    39,    43,    44,    45,
      46,    47,    48,    73,    75,     0,     0,     0,    79,    84,
      87,    90,    95,    98,   100,   102,     0,    14,     0,     0,
       0,     0,     0,     0,    56,     0,    54,    55,     0,     0,
       0,     0,    82,    83,    80,    81,    41,    13,    35,    37,
      66,    65,    68,     0,     0,    76,    77,   108,   109,   106,
     107,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,     0,     9,
       0,    11,     0,    15,    19,     0,     0,     0,    57,     0,
       0,    53,    64,    67,    69,    70,     0,    78,   104,    85,
      86,    84,    88,    89,    94,    93,    91,    92,    96,    97,
      99,     0,   101,     0,    16,    10,     0,    17,     0,     0,
       0,     0,    52,     0,    74,     0,    18,    12,    58,     0,
      50,     0,    71,   103,     0,     0,     0,     0,    49,    51,
       0,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,   233,  -119,  -119,  -119,     0,   122,  -119,
      23,   232,    72,   -52,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,   -17,   -49,
      81,    24,   131,   130,  -118,   -33,  -119
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,   130,    51,   133,    21,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,   144,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    85,    99,   127,    40,    89,   161,    91,    78,   124,
      79,   113,    23,    84,   103,   125,    20,   175,   104,   143,
     114,    43,    79,    22,   128,   125,    92,    93,    94,    95,
      44,    80,    45,    46,    47,    48,    49,    50,   141,    22,
     105,   106,    28,    80,    29,   121,   122,   134,   135,   136,
     137,   117,   118,   115,    40,   139,    30,   183,     1,     2,
       3,     4,   116,    25,   119,   120,   152,   153,    26,   145,
     146,    43,     5,     6,     7,     8,     9,    10,   131,   148,
      44,    77,    45,    46,    47,    48,    49,    50,   172,    11,
      12,    13,    14,    86,   129,   134,   149,   150,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   165,
       1,     2,     3,     4,    81,   166,   178,    82,   180,   107,
     108,   109,   110,   111,     5,     6,     7,     8,     9,    10,
      83,    40,    87,   188,    99,    88,   179,    90,   191,   -72,
     182,    11,    12,    13,    14,   158,   159,    96,    43,   100,
      97,   187,   101,     1,     2,     3,     4,    44,   151,    45,
      46,    47,    48,    49,    50,   102,   177,     5,     6,     7,
       8,     9,    10,    31,    32,    33,   123,    34,    35,    36,
     126,    37,    38,    39,    11,    12,    13,    14,    40,   132,
     138,   140,    25,    41,   142,   163,   147,    42,   154,   155,
     156,   157,   167,   168,   169,    43,   170,   171,     1,     2,
       3,     4,   174,   176,    44,   173,    45,    46,    47,    48,
      49,    50,     5,     6,     7,     8,     9,    10,    31,    32,
      33,   181,    34,    35,    36,   184,    37,    38,    39,    11,
      12,    13,    14,    40,   185,   125,   190,    25,    98,    24,
     164,    27,    42,   186,   160,   162,     0,     0,     0,     0,
      43,     0,     0,     1,     2,     3,     4,     0,     0,    44,
       0,    45,    46,    47,    48,    49,    50,     5,     6,     7,
       8,     9,    10,    31,    32,    33,     0,    34,    35,    36,
       0,    37,    38,    39,    11,    12,    13,    14,    40,     0,
       0,     0,    25,   189,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     1,     2,
       3,     4,     0,     0,    44,     0,    45,    46,    47,    48,
      49,    50,     5,     6,     7,     8,     9,    10,    31,    32,
      33,     0,    34,    35,    36,     0,    37,    38,    39,    11,
      12,    13,    14,    40,     0,     0,     0,    25,     1,     2,
       3,     4,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,     5,     6,     7,     8,     9,    10,     0,    44,
       0,    45,    46,    47,    48,    49,    50
};

static const yytype_int16 yycheck[] =
{
       0,    34,    54,    40,    38,    38,   124,    40,    38,    48,
      40,    56,     0,    47,    40,    54,    16,    46,    44,     3,
      65,    55,    40,     0,    61,    54,    43,    44,    45,    46,
      64,    61,    66,    67,    68,    69,    70,    71,    90,    16,
      66,    67,    47,    61,    21,    51,    52,    80,    81,    82,
      83,    49,    50,    55,    38,    88,    68,   175,     3,     4,
       5,     6,    64,    42,    62,    63,   115,   116,    47,   102,
     103,    55,    17,    18,    19,    20,    21,    22,    78,   112,
      64,    68,    66,    67,    68,    69,    70,    71,   140,    34,
      35,    36,    37,    47,    39,   128,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    39,
       3,     4,     5,     6,    38,    45,   168,    38,   170,    57,
      58,    59,    60,    61,    17,    18,    19,    20,    21,    22,
      38,    38,    47,   185,   186,    38,   169,    46,   190,    38,
     173,    34,    35,    36,    37,   121,   122,    47,    55,    39,
      68,   184,    39,     3,     4,     5,     6,    64,   175,    66,
      67,    68,    69,    70,    71,    38,   166,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    53,    27,    28,    29,
      47,    31,    32,    33,    34,    35,    36,    37,    38,    69,
      47,    46,    42,    43,    39,    69,    72,    47,   117,   118,
     119,   120,    41,    39,    47,    55,    39,    39,     3,     4,
       5,     6,    41,    41,    64,    45,    66,    67,    68,    69,
      70,    71,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    42,    27,    28,    29,    47,    31,    32,    33,    34,
      35,    36,    37,    38,    26,    54,    39,    42,    43,    16,
     128,    19,    47,   181,   123,   125,    -1,    -1,    -1,    -1,
      55,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    64,
      -1,    66,    67,    68,    69,    70,    71,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    64,    -1,    66,    67,    68,    69,
      70,    71,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,     3,     4,
       5,     6,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    17,    18,    19,    20,    21,    22,    -1,    64,
      -1,    66,    67,    68,    69,    70,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    17,    18,    19,    20,    21,
      22,    34,    35,    36,    37,    76,    77,    78,    79,    80,
      82,    84,    85,     0,    78,    42,    47,    86,    47,    85,
      68,    23,    24,    25,    27,    28,    29,    31,    32,    33,
      38,    43,    47,    55,    64,    66,    67,    68,    69,    70,
      71,    82,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    68,    38,    40,
      61,    38,    38,    38,    47,   110,    47,    47,    38,   110,
      46,   110,   103,   103,   103,   103,    47,    68,    43,    88,
      39,    39,    38,    40,    44,    66,    67,    57,    58,    59,
      60,    61,   111,    56,    65,    55,    64,    49,    50,    62,
      63,    51,    52,    53,    48,    54,    47,    40,    61,    39,
      81,    82,    69,    83,   110,   110,   110,   110,    47,   110,
      46,    88,    39,     3,   100,   110,   110,    72,   110,   103,
     103,   103,   104,   104,   105,   105,   105,   105,   106,   106,
     107,   109,   108,    69,    83,    39,    45,    41,    39,    47,
      39,    39,    88,    45,    41,    46,    41,    82,    88,   110,
      88,    42,   110,   109,    47,    26,    87,   110,    88,    43,
      39,    88
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    82,    82,    82,    82,    83,
      84,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      90,    91,    92,    92,    93,    93,    93,    93,    94,    95,
      96,    96,    96,    96,    96,    97,    97,    98,    98,    99,
     100,   100,   101,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   104,   104,   104,   105,   105,   105,
     106,   106,   106,   106,   106,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   111,   111,   111,   111,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     2,     2,     4,
       5,     1,     3,     2,     3,     4,     5,     5,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     2,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     7,
       5,     7,     4,     3,     2,     2,     2,     3,     5,     9,
       1,     1,     1,     1,     3,     2,     2,     3,     2,     3,
       1,     3,     1,     1,     4,     1,     2,     2,     3,     1,
       2,     2,     2,     2,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     5,     3,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 135 "parser.y" /* yacc.c:1646  */
    { 
                                      (yylsp[0]); 
                                      /* pp2: The @1 is needed to convince 
                                       * yacc to set up yylloc. You can remove 
                                       * it once you have other uses of @n*/
                                      Program *program = new Program((yyvsp[0].declList));
                                      // if no errors, advance to next phase
                                      if (ReportError::NumErrors() == 0) {
                                          if ( IsDebugOn("dumpAST") ) {
                                            program->Print(0);
                                          }
                                          program->Check();
                                      }
                                    }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 151 "parser.y" /* yacc.c:1646  */
    { ((yyval.declList)=(yyvsp[-1].declList))->Append((yyvsp[0].decl)); }
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 152 "parser.y" /* yacc.c:1646  */
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[0].decl)); }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 163 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = (yyvsp[0].decl); }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 164 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].funcDecl)->SetFunctionBody((yyvsp[0].stmt)); (yyval.decl) = (yyvsp[-1].funcDecl); }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = (yyvsp[-1].funcDecl); }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval.decl) = (yyvsp[-1].varDecl); }
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 180 "parser.y" /* yacc.c:1646  */
    {
                            Identifier *id = new Identifier(yylloc, (const char *)(yyvsp[-2].identifier)); 
                            List<VarDecl *> *formals = new List<VarDecl *>;
                            (yyval.funcDecl) = new FnDecl(id, (yyvsp[-3].typeDecl), formals);
                         }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 186 "parser.y" /* yacc.c:1646  */
    {
                            Identifier *id = new Identifier(yylloc, (const char *)(yyvsp[-3].identifier)); 
                            (yyval.funcDecl) = new FnDecl(id, (yyvsp[-4].typeDecl), (yyvsp[-1].varDeclList));
                         }
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 192 "parser.y" /* yacc.c:1646  */
    { ((yyval.varDeclList) = new List<VarDecl *>)->Append((yyvsp[0].varDecl));  }
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 193 "parser.y" /* yacc.c:1646  */
    { ((yyval.varDeclList) = (yyvsp[-2].varDeclList))->Append((yyvsp[0].varDecl)); }
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 197 "parser.y" /* yacc.c:1646  */
    {
                            Identifier *id = new Identifier(yylloc, (const char *)(yyvsp[0].identifier)); 
                            (yyval.varDecl) = new VarDecl(id, (yyvsp[-1].typeDecl));
                         }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 202 "parser.y" /* yacc.c:1646  */
    {
                            Identifier *id = new Identifier(yylloc, (const char *)(yyvsp[0].identifier)); 
                            (yyval.varDecl) = new VarDecl(id, (yyvsp[-1].typeDecl), (yyvsp[-2].typeQualifier));
                         }
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 207 "parser.y" /* yacc.c:1646  */
    {
                            // incomplete: drop the initializer here
                            Identifier *id = new Identifier(yylloc, (const char *)(yyvsp[-2].identifier)); 
                            (yyval.varDecl) = new VarDecl(id, (yyvsp[-3].typeDecl), (yyvsp[0].expression));
                         }
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 213 "parser.y" /* yacc.c:1646  */
    {
                            Identifier *id = new Identifier(yylloc, (const char *)(yyvsp[-2].identifier)); 
                            (yyval.varDecl) = new VarDecl(id, (yyvsp[-3].typeDecl), (yyvsp[-4].typeQualifier), (yyvsp[0].expression));
                         }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 218 "parser.y" /* yacc.c:1646  */
    { 
                            Identifier *id = new Identifier((yylsp[-3]), (const char *)(yyvsp[-3].identifier));
                            (yyval.varDecl) = new VarDecl(id, new ArrayType((yylsp[-4]), (yyvsp[-4].typeDecl), (yyvsp[-1].integerConstant)));
                         }
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 223 "parser.y" /* yacc.c:1646  */
    { 
                            Identifier *id = new Identifier((yylsp[-3]), (yyvsp[-3].identifier));
                            (yyval.varDecl) = new VarDecl(id, new ArrayType((yylsp[-4]), (yyvsp[-4].typeDecl), (yyvsp[-1].integerConstant)), (yyvsp[-5].typeQualifier));
                         }
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval.typeQualifier) = TypeQualifier::inTypeQualifier;}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.typeQualifier) = TypeQualifier::outTypeQualifier;}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval.typeQualifier) = TypeQualifier::constTypeQualifier;}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 236 "parser.y" /* yacc.c:1646  */
    {(yyval.typeQualifier) = TypeQualifier::uniformTypeQualifier;}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 239 "parser.y" /* yacc.c:1646  */
    { (yyval.typeDecl) = Type::intType;    }
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 240 "parser.y" /* yacc.c:1646  */
    { (yyval.typeDecl) = Type::voidType;   }
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 241 "parser.y" /* yacc.c:1646  */
    { (yyval.typeDecl) = Type::floatType;  }
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 242 "parser.y" /* yacc.c:1646  */
    { (yyval.typeDecl) = Type::boolType;   }
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval.typeDecl) = Type::vec2Type;   }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 244 "parser.y" /* yacc.c:1646  */
    { (yyval.typeDecl) = Type::vec3Type;   }
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 245 "parser.y" /* yacc.c:1646  */
    { (yyval.typeDecl) = Type::vec4Type;   }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 246 "parser.y" /* yacc.c:1646  */
    { (yyval.typeDecl) = Type::mat2Type;   }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 247 "parser.y" /* yacc.c:1646  */
    { (yyval.typeDecl) = Type::mat3Type;   }
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval.typeDecl) = Type::mat4Type;   }
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new StmtBlock(new List<VarDecl*>, new List<Stmt *>); }
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 252 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new StmtBlock(new List<VarDecl*>, (yyvsp[-1].stmtList)); }
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 255 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmtList) = new List<Stmt*>)->Append((yyvsp[0].stmt)); }
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 256 "parser.y" /* yacc.c:1646  */
    { ((yyval.stmtList) = (yyvsp[-1].stmtList))->Append((yyvsp[0].stmt)); }
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 263 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new EmptyExpr();  }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 265 "parser.y" /* yacc.c:1646  */
    {
                                       (yyval.stmt) = new DeclStmt((yyvsp[-1].varDecl));
                                     }
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].expression); }
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 269 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 273 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 278 "parser.y" /* yacc.c:1646  */
    {
                                        (yyval.stmt) = new IfStmt((yyvsp[-4].expression), (yyvsp[-2].stmt), (yyvsp[0].stmt));
                                     }
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 282 "parser.y" /* yacc.c:1646  */
    {
                                        (yyval.stmt) = new IfStmt((yyvsp[-2].expression), (yyvsp[0].stmt), NULL);
                                     }
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 288 "parser.y" /* yacc.c:1646  */
    {
                                        (yyval.stmt) = new SwitchStmt((yyvsp[-4].expression), (yyvsp[-1].stmtList), NULL);
                                     }
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 292 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new Case((yyvsp[-2].expression), (yyvsp[0].stmt)); }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new Default((yyvsp[0].stmt)); }
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new BreakStmt(yylloc); }
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new ContinueStmt(yylloc); }
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new ReturnStmt(yylloc); }
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new ReturnStmt(yyloc, (yyvsp[-1].expression)); }
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new WhileStmt((yyvsp[-2].expression), (yyvsp[0].stmt)); }
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 306 "parser.y" /* yacc.c:1646  */
    {
                                    (yyval.stmt) = new ForStmt((yyvsp[-6].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmt));
                                 }
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 311 "parser.y" /* yacc.c:1646  */
    { Identifier *id = new Identifier(yylloc, (const char*)(yyvsp[0].identifier));
                                       (yyval.expression) = new VarExpr(yyloc, id);
                                     }
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new IntConstant(yylloc, (yyvsp[0].integerConstant)); }
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 315 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new FloatConstant(yylloc, (yyvsp[0].floatConstant)); }
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 316 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new BoolConstant(yylloc, (yyvsp[0].boolConstant)); }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression);}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 320 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 321 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 324 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new Call((yylsp[-2]), NULL, (yyvsp[-2].funcId), new List<Expr*>); }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new Call((yylsp[-1]), NULL, (yyvsp[-1].funcId), new List<Expr*>); }
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new Call((yylsp[-2]), NULL, (yyvsp[-2].funcId), (yyvsp[0].argList));}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 331 "parser.y" /* yacc.c:1646  */
    { ((yyval.argList) = new List<Expr*>)->Append((yyvsp[0].expression));}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 332 "parser.y" /* yacc.c:1646  */
    { ((yyval.argList) = (yyvsp[-2].argList))->Append((yyvsp[0].expression));}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 335 "parser.y" /* yacc.c:1646  */
    { (yyval.funcId) = new Identifier((yylsp[0]), (yyvsp[0].identifier)); }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 338 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 339 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new ArrayAccess((yylsp[-3]), (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 341 "parser.y" /* yacc.c:1646  */
    {
                                       }
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 344 "parser.y" /* yacc.c:1646  */
    {
                                          Operator *op = new Operator(yylloc, (const char *)(yyvsp[0].identifier));
                                          (yyval.expression) = new PostfixExpr((yyvsp[-1].expression), op);
                                       }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 349 "parser.y" /* yacc.c:1646  */
    {
                                          Operator *op = new Operator(yylloc, (const char *)(yyvsp[0].identifier));
                                          (yyval.expression) = new PostfixExpr((yyvsp[-1].expression), op);
                                       }
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 354 "parser.y" /* yacc.c:1646  */
    {
                                          Identifier *id = new Identifier(yylloc, (const char *)(yyvsp[0].identifier));
                                          (yyval.expression) = new FieldAccess((yyvsp[-2].expression), id);
                                       }
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 360 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 362 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr(op, (yyvsp[0].expression));
                           }
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 367 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr(op, (yyvsp[0].expression));
                           }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 372 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr(op, (yyvsp[0].expression));
                           }
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 377 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr(op, (yyvsp[0].expression));
                           }
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 383 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 385 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 390 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 396 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 398 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 403 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 409 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 411 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new RelationalExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 416 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new RelationalExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 421 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new RelationalExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 426 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new RelationalExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 432 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 434 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 439 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 445 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 447 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 453 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 455 "parser.y" /* yacc.c:1646  */
    {
                             Operator *op = new Operator(yylloc, (yyvsp[-1].identifier));
                             (yyval.expression) = new ArithmeticExpr((yyvsp[-2].expression), op, (yyvsp[0].expression));
                           }
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 461 "parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 463 "parser.y" /* yacc.c:1646  */
    {
                             (yyval.expression) = new ConditionalExpr((yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].expression));
                           }
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 467 "parser.y" /* yacc.c:1646  */
    {
                             (yyval.expression) = new AssignExpr((yyvsp[-2].expression), (yyvsp[-1].ops), (yyvsp[0].expression));
                           }
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 472 "parser.y" /* yacc.c:1646  */
    { (yyval.ops) = new Operator(yylloc, (yyvsp[0].identifier));   }
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 473 "parser.y" /* yacc.c:1646  */
    { (yyval.ops) = new Operator(yylloc, "+=");  }
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 474 "parser.y" /* yacc.c:1646  */
    { (yyval.ops) = new Operator(yylloc, "-=");  }
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 475 "parser.y" /* yacc.c:1646  */
    { (yyval.ops) = new Operator(yylloc, "*=");  }
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 476 "parser.y" /* yacc.c:1646  */
    { (yyval.ops) = new Operator(yylloc, "/=");  }
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2443 "y.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 479 "parser.y" /* yacc.c:1906  */


/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/* Function: InitParser
 * --------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global variable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void InitParser()
{
   PrintDebug("parser", "Initializing parser");
   yydebug = false;
}
