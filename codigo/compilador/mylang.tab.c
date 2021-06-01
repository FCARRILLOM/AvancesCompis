/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     programa = 258,
     principal = 259,
     si = 260,
     entonces = 261,
     sino = 262,
     mientras = 263,
     hacer = 264,
     desde = 265,
     hasta = 266,
     clase = 267,
     hereda = 268,
     atributos = 269,
     metodos = 270,
     variables = 271,
     funcion = 272,
     lee = 273,
     escribe = 274,
     regresa = 275,
     n_void = 276,
     n_int = 277,
     n_float = 278,
     n_char = 279,
     asignador = 280,
     mas = 281,
     menos = 282,
     divi = 283,
     mult = 284,
     op_and = 285,
     op_or = 286,
     op_rel = 287,
     punto_coma = 288,
     dos_puntos = 289,
     coma = 290,
     punto = 291,
     l_paren = 292,
     r_paren = 293,
     l_brace = 294,
     r_brace = 295,
     l_bracket = 296,
     r_bracket = 297,
     cte_int = 298,
     cte_float = 299,
     cte_char = 300,
     cte_string = 301,
     id_ = 302
   };
#endif
/* Tokens.  */
#define programa 258
#define principal 259
#define si 260
#define entonces 261
#define sino 262
#define mientras 263
#define hacer 264
#define desde 265
#define hasta 266
#define clase 267
#define hereda 268
#define atributos 269
#define metodos 270
#define variables 271
#define funcion 272
#define lee 273
#define escribe 274
#define regresa 275
#define n_void 276
#define n_int 277
#define n_float 278
#define n_char 279
#define asignador 280
#define mas 281
#define menos 282
#define divi 283
#define mult 284
#define op_and 285
#define op_or 286
#define op_rel 287
#define punto_coma 288
#define dos_puntos 289
#define coma 290
#define punto 291
#define l_paren 292
#define r_paren 293
#define l_brace 294
#define r_brace 295
#define l_bracket 296
#define r_bracket 297
#define cte_int 298
#define cte_float 299
#define cte_char 300
#define cte_string 301
#define id_ 302




/* Copy the first part of user declarations.  */
#line 1 "mylang.y"

#include <iostream>
#include <string>

extern int yylex();
extern int lineno;
void yyerror(char*s);

#include "TablaSimbolos.h"
#include "Quad.h"
#include "MapaMemoria.h"
#include "TablasDatos.h"
 
TablasDatos tablasDatos;
MapaMemoria mapa;

Quad quad(tablasDatos, mapa);
TablaSimbolos tabla(tablasDatos, tablasDatos.funcDir, quad, mapa);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 22 "mylang.y"
{
  int intval;
  char charval;
  float floatval;
  char* strval;
}
/* Line 193 of yacc.c.  */
#line 218 "mylang.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 231 "mylang.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNRULES -- Number of states.  */
#define YYNSTATES  255

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,    18,    21,    22,    24,    26,
      28,    38,    41,    42,    45,    46,    49,    50,    53,    56,
      58,    59,    60,    66,    67,    72,    73,    74,    81,    82,
      83,    87,    88,    91,    92,    94,    96,    98,   100,   102,
     105,   107,   108,   109,   110,   111,   112,   128,   130,   131,
     133,   135,   136,   142,   143,   146,   147,   148,   149,   150,
     159,   162,   163,   164,   171,   172,   175,   176,   177,   178,
     179,   189,   190,   191,   199,   202,   203,   204,   208,   209,
     212,   213,   214,   225,   226,   232,   233,   234,   235,   246,
     247,   248,   249,   263,   269,   272,   275,   276,   278,   280,
     286,   287,   291,   294,   295,   296,   303,   305,   306,   310,
     311,   315,   316,   317,   321,   322,   326,   327,   330,   333,
     334,   336,   337,   341,   342,   346,   347,   351,   352,   353,
     357,   358,   362,   363,   367,   368,   369,   374,   376,   377,
     381,   383,   385,   387,   389,   392,   393,   395,   397,   399,
     401,   403,   405,   407
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      49,     0,    -1,    -1,    -1,     3,    47,    50,    33,    52,
       4,    37,    38,    51,    39,   151,    40,    -1,    53,    52,
      -1,    -1,    54,    -1,    58,    -1,    73,    -1,    12,    47,
      55,    33,    39,    56,    57,    40,    33,    -1,    13,    47,
      -1,    -1,    14,    59,    -1,    -1,    15,    73,    -1,    -1,
      16,    59,    -1,    61,    60,    -1,    59,    -1,    -1,    -1,
      72,    62,    34,    63,    33,    -1,    -1,    47,    64,    65,
      70,    -1,    -1,    -1,    41,    66,    43,    67,    68,    42,
      -1,    -1,    -1,    35,    69,    43,    -1,    -1,    35,    63,
      -1,    -1,    22,    -1,    23,    -1,    24,    -1,    71,    -1,
      47,    -1,    75,    74,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    81,    47,    76,    37,    77,    82,    78,
      38,    33,    80,    79,    39,   151,    40,    -1,    58,    -1,
      -1,    71,    -1,    21,    -1,    -1,    71,    34,    47,    83,
      84,    -1,    -1,    35,    82,    -1,    -1,    -1,    -1,    -1,
      47,    86,    89,    25,    87,   125,    88,    33,    -1,    36,
      47,    -1,    -1,    -1,    41,    90,   125,    91,    92,    42,
      -1,    -1,    35,   125,    -1,    -1,    -1,    -1,    -1,    47,
      94,   100,    37,    95,   101,    38,    96,    33,    -1,    -1,
      -1,    47,    98,   100,    37,    99,   101,    38,    -1,    36,
      47,    -1,    -1,    -1,   125,   102,   103,    -1,    -1,    35,
     101,    -1,    -1,    -1,     5,    37,   125,    38,   105,     6,
      39,   151,    40,   106,    -1,    -1,     7,   107,    39,   151,
      40,    -1,    -1,    -1,    -1,     8,   109,    37,   125,    38,
     110,     9,    39,   151,    40,    -1,    -1,    -1,    -1,    10,
      47,    25,   125,   112,    11,   125,   113,     9,   114,    39,
     151,    40,    -1,    19,    37,   116,    38,    33,    -1,   118,
     117,    -1,    35,   116,    -1,    -1,    46,    -1,   125,    -1,
      18,    37,   120,    38,    33,    -1,    -1,    47,   121,   122,
      -1,    35,   120,    -1,    -1,    -1,    20,    37,   125,    38,
     124,    33,    -1,   126,    -1,    -1,   130,   127,   128,    -1,
      -1,    31,   129,   125,    -1,    -1,    -1,   134,   131,   132,
      -1,    -1,    30,   133,   130,    -1,    -1,   137,   135,    -1,
     136,   137,    -1,    -1,    32,    -1,    -1,   142,   138,   139,
      -1,    -1,    26,   140,   137,    -1,    -1,    27,   141,   137,
      -1,    -1,    -1,   147,   143,   144,    -1,    -1,    29,   145,
     142,    -1,    -1,    28,   146,   142,    -1,    -1,    -1,    37,
     148,   126,    38,    -1,   150,    -1,    -1,    47,   149,    89,
      -1,    97,    -1,    43,    -1,    44,    -1,    45,    -1,   152,
     151,    -1,    -1,    85,    -1,    93,    -1,   119,    -1,   115,
      -1,   104,    -1,   108,    -1,   111,    -1,   123,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    44,    43,    47,    48,    50,    51,    52,
      54,    56,    57,    59,    60,    62,    63,    65,    67,    69,
      70,    72,    72,    74,    74,    76,    76,    76,    77,    79,
      79,    80,    82,    83,    85,    86,    87,    89,    90,    92,
      94,    95,    97,    97,    98,    99,    97,   101,   102,   104,
     105,   107,   107,   108,   110,   111,   113,   113,   114,   113,
     116,   117,   117,   117,   119,   121,   122,   124,   124,   125,
     124,   127,   127,   127,   130,   131,   133,   133,   134,   136,
     137,   139,   139,   141,   141,   142,   144,   144,   144,   147,
     147,   147,   147,   150,   152,   154,   155,   157,   158,   160,
     162,   162,   164,   165,   167,   167,   169,   171,   171,   173,
     173,   174,   176,   176,   178,   178,   179,   181,   183,   184,
     186,   188,   188,   190,   190,   191,   191,   192,   194,   194,
     196,   196,   197,   197,   198,   200,   200,   201,   202,   202,
     203,   205,   206,   207,   209,   210,   212,   213,   214,   215,
     216,   217,   218,   219
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "programa", "principal", "si",
  "entonces", "sino", "mientras", "hacer", "desde", "hasta", "clase",
  "hereda", "atributos", "metodos", "variables", "funcion", "lee",
  "escribe", "regresa", "n_void", "n_int", "n_float", "n_char",
  "asignador", "mas", "menos", "divi", "mult", "op_and", "op_or", "op_rel",
  "punto_coma", "dos_puntos", "coma", "punto", "l_paren", "r_paren",
  "l_brace", "r_brace", "l_bracket", "r_bracket", "cte_int", "cte_float",
  "cte_char", "cte_string", "id_", "$accept", "PROGRAMA", "@1", "@2",
  "DECLARACIONES", "DECLARACION", "CLASE", "HEREDA", "ATRIBUTOS",
  "METODOS", "VARIABLES", "VARS", "VARS_", "VAR", "@3", "VAR_IDS", "@4",
  "ARR", "@5", "@6", "ARR_", "@7", "VAR_IDS_", "TIPO_SIMPLE", "TIPO_VAR",
  "FUNCIONES", "FUNCIONES_", "FUNCION", "@8", "@9", "@10", "@11",
  "FUNC_VARIABLES", "TIPO_RET", "PARAMETROS", "@12", "PARAMETROS_",
  "ASIGNACION", "@13", "@14", "@15", "ASIG", "@16", "@17", "ASIG_",
  "LLAMADA_VOID", "@18", "@19", "@20", "LLAMADA_RET", "@21", "@22",
  "FUNC_", "FUNC_PARAM", "@23", "FUNC_PARAM_", "DECISION", "@24",
  "DECISION_", "@25", "CONDICIONAL", "@26", "@27", "NOCONDICIONAL", "@28",
  "@29", "@30", "ESCRITURA", "PRINTABLE", "PRINTABLE_", "E", "LECTURA",
  "READABLE", "@31", "READABLE_", "RETORNO", "@32", "EXP", "EXP_Q", "@33",
  "EXP_", "@34", "T_EXP", "@35", "T_EXP_", "@36", "G_EXP", "G_EXP_",
  "OPER_REL", "M_EXP", "@37", "M_EXP_", "@38", "@39", "T", "@40", "T_",
  "@41", "@42", "F", "@43", "@44", "CTE", "ESTATUTOS", "ESTATUTO", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    50,    51,    49,    52,    52,    53,    53,    53,
      54,    55,    55,    56,    56,    57,    57,    58,    59,    60,
      60,    62,    61,    64,    63,    66,    67,    65,    65,    69,
      68,    68,    70,    70,    71,    71,    71,    72,    72,    73,
      74,    74,    76,    77,    78,    79,    75,    80,    80,    81,
      81,    83,    82,    82,    84,    84,    86,    87,    88,    85,
      89,    90,    91,    89,    89,    92,    92,    94,    95,    96,
      93,    98,    99,    97,   100,   100,   102,   101,   101,   103,
     103,   105,   104,   107,   106,   106,   109,   110,   108,   112,
     113,   114,   111,   115,   116,   117,   117,   118,   118,   119,
     121,   120,   122,   122,   124,   123,   125,   127,   126,   129,
     128,   128,   131,   130,   133,   132,   132,   134,   135,   135,
     136,   138,   137,   140,   139,   141,   139,   139,   143,   142,
     145,   144,   146,   144,   144,   148,   147,   147,   149,   147,
     147,   150,   150,   150,   151,   151,   152,   152,   152,   152,
     152,   152,   152,   152
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,    12,     2,     0,     1,     1,     1,
       9,     2,     0,     2,     0,     2,     0,     2,     2,     1,
       0,     0,     5,     0,     4,     0,     0,     6,     0,     0,
       3,     0,     2,     0,     1,     1,     1,     1,     1,     2,
       1,     0,     0,     0,     0,     0,    15,     1,     0,     1,
       1,     0,     5,     0,     2,     0,     0,     0,     0,     8,
       2,     0,     0,     6,     0,     2,     0,     0,     0,     0,
       9,     0,     0,     7,     2,     0,     0,     3,     0,     2,
       0,     0,    10,     0,     5,     0,     0,     0,    10,     0,
       0,     0,    13,     5,     2,     2,     0,     1,     1,     5,
       0,     3,     2,     0,     0,     6,     1,     0,     3,     0,
       3,     0,     0,     3,     0,     3,     0,     2,     2,     0,
       1,     0,     3,     0,     3,     0,     3,     0,     0,     3,
       0,     3,     0,     3,     0,     0,     4,     1,     0,     3,
       1,     1,     1,     1,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     6,     0,     0,     0,
       0,     6,     7,     8,     9,    41,    12,    34,    35,    36,
      38,    17,    20,    37,    21,    50,    49,     0,     0,     5,
      40,    39,     0,     0,    19,    18,     0,    42,     0,    11,
       0,     0,     0,     3,    14,    23,     0,    43,     0,     0,
      16,    28,    22,    53,   145,    13,     0,     0,    25,    33,
       0,    44,     0,    86,     0,     0,     0,     0,    56,   146,
     147,   150,   151,   152,   149,   148,   153,     0,   145,    15,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    75,     4,   144,    10,    26,    32,    51,
       0,   135,   141,   142,   143,   138,   140,     0,   106,   107,
     112,   119,   121,   128,   137,     0,     0,   100,     0,    97,
       0,    96,    98,     0,     0,    61,     0,     0,     0,    31,
      55,    48,     0,    75,    64,    81,   111,   116,   120,   117,
       0,   127,   134,     0,    89,   103,     0,     0,     0,    94,
     104,    60,     0,    57,    74,    68,    29,     0,    53,    52,
      47,    45,     0,     0,   139,     0,   109,   108,   114,   113,
     118,   123,   125,   122,   132,   130,   129,    87,     0,     0,
     101,    99,    93,    95,     0,    62,     0,    78,     0,    27,
      54,     0,   136,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,   105,    66,    58,     0,    76,    30,
     145,    78,   145,   110,   115,   124,   126,   133,   131,     0,
      90,     0,     0,     0,    69,    80,     0,     0,     0,   145,
       0,    65,    63,    59,     0,    78,    77,    46,    73,    85,
       0,    91,    70,    79,    83,    82,    88,     0,     0,   145,
     145,     0,     0,    92,    84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    48,    10,    11,    12,    33,    50,    57,
      13,    21,    35,    22,    36,    46,    51,    59,    81,   129,
     157,   188,    83,    23,    24,    14,    31,    15,    42,    53,
      85,   191,   161,    27,    61,   130,   159,    69,    92,   186,
     223,   126,   152,   205,   222,    70,    93,   187,   234,   106,
     133,   211,   128,   207,   225,   236,    71,   165,   245,   248,
      72,    87,   201,    73,   178,   230,   247,    74,   120,   149,
     121,    75,   118,   145,   180,    76,   184,   208,   108,   136,
     167,   195,   109,   137,   169,   196,   110,   139,   140,   111,
     141,   173,   197,   198,   112,   142,   176,   200,   199,   113,
     132,   134,   114,    77,    78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -208
static const yytype_int16 yypact[] =
{
      26,    -5,    36,  -208,  -208,    13,    18,     1,   -10,    30,
      58,    18,  -208,  -208,  -208,    46,    54,  -208,  -208,  -208,
    -208,  -208,   -10,  -208,  -208,  -208,  -208,    22,    34,  -208,
    -208,  -208,    23,    39,  -208,  -208,    40,  -208,    35,  -208,
      37,    28,    41,  -208,    63,  -208,    47,  -208,    42,   -10,
      64,    43,  -208,    33,     0,  -208,    46,    45,  -208,    48,
      52,  -208,    50,  -208,    44,    51,    53,    55,    56,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,    49,     0,  -208,
      61,    57,    28,  -208,    59,    60,    -4,    62,    70,    65,
     -22,    -4,     8,    67,  -208,  -208,  -208,  -208,  -208,  -208,
      68,  -208,  -208,  -208,  -208,   -20,  -208,    66,  -208,  -208,
    -208,    73,  -208,  -208,  -208,    -4,    -4,  -208,    69,  -208,
      71,    75,  -208,    76,    72,  -208,    83,    74,    78,    81,
      82,    80,    -4,    67,     8,  -208,    89,    92,  -208,  -208,
      -4,    32,    -2,    85,  -208,    90,    91,    93,   -22,  -208,
    -208,  -208,    -4,  -208,  -208,  -208,  -208,    86,    33,  -208,
    -208,  -208,    95,    94,  -208,   107,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,   116,    65,
    -208,  -208,  -208,  -208,    96,  -208,    -4,    -4,    87,  -208,
    -208,    97,  -208,  -208,    99,    -4,    -4,    -4,    -4,    -4,
      -4,    88,    -4,  -208,  -208,   100,  -208,   101,  -208,  -208,
       0,    -4,     0,  -208,  -208,  -208,  -208,  -208,  -208,   102,
    -208,    -4,    98,   109,  -208,   108,   104,   110,   105,     0,
     137,  -208,  -208,  -208,   114,    -4,  -208,  -208,  -208,   142,
     112,  -208,  -208,  -208,  -208,  -208,  -208,   115,   117,     0,
       0,   113,   118,  -208,  -208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -208,  -208,  -208,  -208,   144,  -208,  -208,  -208,  -208,  -208,
     -49,   -11,  -208,  -208,  -208,    77,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,    -8,  -208,    -6,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,    -1,  -208,  -208,  -208,  -208,  -208,
    -208,    27,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,    29,  -207,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,    12,  -208,
    -208,  -208,   -16,  -208,  -208,  -208,  -208,   -84,    38,  -208,
    -208,  -208,   -32,  -208,  -208,  -208,  -208,  -208,  -208,  -137,
    -208,  -208,  -208,  -208,  -134,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,   -78,  -208
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -72
static const yytype_int16 yytable[] =
{
      95,    26,   107,   170,   227,    62,   122,   123,    63,    30,
      64,    34,    17,    18,    19,   101,   -71,   -71,    65,    66,
      67,   102,   103,   104,   119,   105,   174,   175,   243,     1,
       7,   143,   144,   101,     8,     9,     4,    20,    55,   102,
     103,   104,     3,   105,   124,    60,     6,    68,    16,   125,
      79,    25,    17,    18,    19,    17,    18,    19,   171,   172,
     215,   216,    28,     9,   122,   217,   218,    32,   185,    37,
      39,    38,    40,    43,    41,    45,    44,    49,    47,    56,
      52,    54,   160,    82,    58,    80,    84,    86,    89,    94,
      90,    88,    91,   -67,    96,   116,     8,   219,   100,   115,
      97,   131,   206,   127,   135,   138,    99,   146,   153,   147,
     148,   213,   117,   194,   150,   155,   156,   158,   220,   151,
     166,   154,   168,   177,   181,   179,   182,   202,   189,   204,
     209,   193,   226,   192,   228,   221,   210,   231,   212,   224,
     232,   229,   233,   235,   237,   239,   241,   242,   238,   244,
      60,   240,   246,   253,   249,    29,   250,   190,   254,    98,
     183,   164,   163,   203,   214,     0,     0,     0,     0,     0,
     162,   251,   252
};

static const yytype_int16 yycheck[] =
{
      78,     9,    86,   140,   211,     5,    90,    91,     8,    15,
      10,    22,    22,    23,    24,    37,    36,    37,    18,    19,
      20,    43,    44,    45,    46,    47,    28,    29,   235,     3,
      12,   115,   116,    37,    16,    17,     0,    47,    49,    43,
      44,    45,    47,    47,    36,    53,    33,    47,    47,    41,
      56,    21,    22,    23,    24,    22,    23,    24,    26,    27,
     197,   198,     4,    17,   148,   199,   200,    13,   152,    47,
      47,    37,    33,    38,    34,    47,    39,    14,    37,    15,
      33,    39,   131,    35,    41,    40,    34,    37,    37,    40,
      37,    47,    37,    37,    33,    25,    16,     9,    38,    37,
      43,    33,   186,    36,    38,    32,    47,    38,    25,    38,
      35,   195,    47,     6,    38,    37,    35,    35,   202,    47,
      31,    47,    30,    38,    33,    35,    33,    11,    42,    33,
      43,    37,   210,    38,   212,    35,    39,   221,    39,    38,
      42,    39,    33,    35,    40,    40,     9,    33,    38,     7,
     158,   229,    40,    40,    39,    11,    39,   158,    40,    82,
     148,   134,   133,   179,   196,    -1,    -1,    -1,    -1,    -1,
     132,   249,   250
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,    47,     0,    50,    33,    12,    16,    17,
      52,    53,    54,    58,    73,    75,    47,    22,    23,    24,
      47,    59,    61,    71,    72,    21,    71,    81,     4,    52,
      73,    74,    13,    55,    59,    60,    62,    47,    37,    47,
      33,    34,    76,    38,    39,    47,    63,    37,    51,    14,
      56,    64,    33,    77,    39,    59,    15,    57,    41,    65,
      71,    82,     5,     8,    10,    18,    19,    20,    47,    85,
      93,   104,   108,   111,   115,   119,   123,   151,   152,    73,
      40,    66,    35,    70,    34,    78,    37,   109,    47,    37,
      37,    37,    86,    94,    40,   151,    33,    43,    63,    47,
      38,    37,    43,    44,    45,    47,    97,   125,   126,   130,
     134,   137,   142,   147,   150,    37,    25,    47,   120,    46,
     116,   118,   125,   125,    36,    41,    89,    36,   100,    67,
      83,    33,   148,    98,   149,    38,   127,   131,    32,   135,
     136,   138,   143,   125,   125,   121,    38,    38,    35,   117,
      38,    47,    90,    25,    47,    37,    35,    68,    35,    84,
      58,    80,   126,   100,    89,   105,    31,   128,    30,   132,
     137,    26,    27,   139,    28,    29,   144,    38,   112,    35,
     122,    33,    33,   116,   124,   125,    87,    95,    69,    42,
      82,    79,    38,    37,     6,   129,   133,   140,   141,   146,
     145,   110,    11,   120,    33,    91,   125,   101,   125,    43,
      39,    99,    39,   125,   130,   137,   137,   142,   142,     9,
     125,    35,    92,    88,    38,   102,   151,   101,   151,    39,
     113,   125,    42,    33,    96,    35,   103,    40,    38,    40,
     151,     9,    33,   101,     7,   106,    40,   114,   107,    39,
      39,   151,   151,    40,    40
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 43 "mylang.y"
    { quad.savePrincipalLoc(); tabla.addPrincipalFunc((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 3:
#line 44 "mylang.y"
    { quad.addGotoPrincipalLoc(); ;}
    break;

  case 4:
#line 45 "mylang.y"
    { tabla.saveTempsUsed(); tabla.printData(); quad.clearQuad(); mapa.printData(); ;}
    break;

  case 8:
#line 51 "mylang.y"
    { tabla.saveGlobalVars(); ;}
    break;

  case 21:
#line 72 "mylang.y"
    { tabla.saveCurrentVarType((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 23:
#line 74 "mylang.y"
    { tabla.addVarToList((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 25:
#line 76 "mylang.y"
    { tabla.addFirstArrNode(); ;}
    break;

  case 26:
#line 76 "mylang.y"
    { tabla.storeDimSize((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 27:
#line 76 "mylang.y"
    { tabla.endArrNode(); ;}
    break;

  case 29:
#line 79 "mylang.y"
    { tabla.addArrNode(); ;}
    break;

  case 30:
#line 79 "mylang.y"
    { tabla.storeDimSize((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 42:
#line 97 "mylang.y"
    { tabla.createFunc((yyvsp[(3) - (3)].strval), (yyvsp[(2) - (3)].strval)); tabla.addFuncGlobalVar(); ;}
    break;

  case 43:
#line 97 "mylang.y"
    { tabla.initParameterVars(); ;}
    break;

  case 44:
#line 98 "mylang.y"
    { tabla.addParameterVarsToDir(); ;}
    break;

  case 45:
#line 99 "mylang.y"
    { tabla.addCurrLVarsToDir(); tabla.addFuncCont(); ;}
    break;

  case 46:
#line 99 "mylang.y"
    { tabla.addEndFunc(); ;}
    break;

  case 51:
#line 107 "mylang.y"
    { tabla.addParameterVar((yyvsp[(3) - (3)].strval), (yyvsp[(1) - (3)].strval)); ;}
    break;

  case 56:
#line 113 "mylang.y"
    { quad.addOperand((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 57:
#line 113 "mylang.y"
    { quad.addOperatorAsig((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 58:
#line 114 "mylang.y"
    { quad.removeFromStackAssign(); ;}
    break;

  case 61:
#line 117 "mylang.y"
    { quad.verifyArrayDimensions(); ;}
    break;

  case 62:
#line 117 "mylang.y"
    { quad.getArrayDimensionResult(); ;}
    break;

  case 63:
#line 118 "mylang.y"
    { quad.addArrayQuads(); ;}
    break;

  case 65:
#line 121 "mylang.y"
    { quad.getArrayDimensionResult(); ;}
    break;

  case 67:
#line 124 "mylang.y"
    { tabla.verifyFunction((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 68:
#line 124 "mylang.y"
    { tabla.generateEra(); ;}
    break;

  case 69:
#line 125 "mylang.y"
    { tabla.verifyLastParam(); tabla.addGoSub(); ;}
    break;

  case 71:
#line 127 "mylang.y"
    { tabla.verifyFunction((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 72:
#line 127 "mylang.y"
    { tabla.generateEra(); ;}
    break;

  case 73:
#line 128 "mylang.y"
    { tabla.verifyLastParam(); tabla.addGoSub(); ;}
    break;

  case 76:
#line 133 "mylang.y"
    { tabla.verifyParameterType(); tabla.moveToNextParam(); ;}
    break;

  case 81:
#line 139 "mylang.y"
    { quad.addGotoIf(); ;}
    break;

  case 82:
#line 139 "mylang.y"
    { quad.addDecisionEnd(); ;}
    break;

  case 83:
#line 141 "mylang.y"
    { quad.addGotoElse(); ;}
    break;

  case 86:
#line 144 "mylang.y"
    { quad.addWhileCheckpoint(); ;}
    break;

  case 87:
#line 144 "mylang.y"
    { quad.addGotoWhile(); ;}
    break;

  case 88:
#line 145 "mylang.y"
    { quad.addConditionalEnd(); ;}
    break;

  case 89:
#line 147 "mylang.y"
    { quad.addLoopCounter((yyvsp[(2) - (4)].strval)); ;}
    break;

  case 90:
#line 147 "mylang.y"
    { quad.addLoopLimit(); ;}
    break;

  case 91:
#line 147 "mylang.y"
    { quad.addGotoFor(); ;}
    break;

  case 92:
#line 148 "mylang.y"
    { quad.addNonConditionalEnd((yyvsp[(2) - (13)].strval)); ;}
    break;

  case 97:
#line 157 "mylang.y"
    { quad.addWriteStr((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 98:
#line 158 "mylang.y"
    { quad.addWriteExp(); ;}
    break;

  case 100:
#line 162 "mylang.y"
    { quad.addRead((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 104:
#line 167 "mylang.y"
    { tabla.saveReturnValue(); ;}
    break;

  case 107:
#line 171 "mylang.y"
    { quad.removeFromStackOr(); ;}
    break;

  case 109:
#line 173 "mylang.y"
    { quad.addOperatorOr((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 112:
#line 176 "mylang.y"
    { quad.removeFromStackAnd(); ;}
    break;

  case 114:
#line 178 "mylang.y"
    { quad.addOperatorAnd((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 118:
#line 183 "mylang.y"
    { quad.removeFromStackRel(); ;}
    break;

  case 120:
#line 186 "mylang.y"
    { quad.addOperatorRel((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 121:
#line 188 "mylang.y"
    { quad.removeFromStackPlusMinus(); ;}
    break;

  case 123:
#line 190 "mylang.y"
    { quad.addOperatorPlusMinus((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 125:
#line 191 "mylang.y"
    { quad.addOperatorPlusMinus((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 128:
#line 194 "mylang.y"
    { quad.removeFromStackMultDiv(); ;}
    break;

  case 130:
#line 196 "mylang.y"
    { quad.addOperatorMultDiv((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 132:
#line 197 "mylang.y"
    { quad.addOperatorMultDiv((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 135:
#line 200 "mylang.y"
    { quad.addFalseBottom(); ;}
    break;

  case 136:
#line 200 "mylang.y"
    { quad.removeFalseBottom(); ;}
    break;

  case 138:
#line 202 "mylang.y"
    { quad.addOperand((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 140:
#line 203 "mylang.y"
    { tabla.addReturnValue(); ;}
    break;

  case 141:
#line 205 "mylang.y"
    { quad.addConstOperand(std::to_string((yyvsp[(1) - (1)].intval)), "int"); ;}
    break;

  case 142:
#line 206 "mylang.y"
    { quad.addConstOperand(std::to_string((yyvsp[(1) - (1)].floatval)), "float"); ;}
    break;

  case 143:
#line 207 "mylang.y"
    { quad.addConstOperand(std::to_string((yyvsp[(1) - (1)].charval)), "char"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1988 "mylang.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 222 "mylang.y"
 

int main() {
	yyparse();
}

void yyerror(char* s) {
	std::cout << "Syntax error on line " << lineno << std::endl;
}

