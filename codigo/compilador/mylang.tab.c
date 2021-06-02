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
TablaSimbolos tabla(tablasDatos, tablasDatos.funcDir, tablasDatos.clasesDir, quad, mapa);



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
#define YYLAST   196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  161
/* YYNRULES -- Number of states.  */
#define YYNSTATES  263

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
      28,    29,    30,    42,    45,    46,    49,    50,    53,    54,
      57,    60,    62,    63,    64,    70,    71,    76,    77,    78,
      85,    86,    87,    91,    92,    95,    96,    98,   100,   102,
     104,   106,   109,   111,   112,   113,   114,   115,   116,   132,
     134,   135,   137,   139,   140,   146,   147,   150,   151,   152,
     153,   154,   163,   166,   167,   168,   175,   176,   179,   180,
     181,   182,   183,   192,   193,   197,   198,   201,   202,   203,
     214,   215,   221,   222,   223,   224,   235,   236,   237,   238,
     252,   258,   261,   264,   265,   267,   269,   275,   276,   280,
     283,   284,   285,   292,   294,   295,   299,   300,   304,   305,
     306,   310,   311,   315,   316,   319,   322,   323,   325,   326,
     330,   331,   335,   336,   340,   341,   342,   346,   347,   351,
     352,   356,   357,   358,   363,   365,   366,   370,   373,   374,
     375,   382,   383,   386,   387,   390,   391,   392,   397,   398,
     400,   402,   404,   407,   408,   410,   412,   414,   416,   418,
     420,   422
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      49,     0,    -1,    -1,    -1,     3,    47,    50,    33,    52,
       4,    37,    38,    51,    39,   156,    40,    -1,    53,    52,
      -1,    -1,    54,    -1,    60,    -1,    75,    -1,    -1,    -1,
      12,    47,    55,    57,    33,    39,    58,    59,    40,    56,
      33,    -1,    13,    47,    -1,    -1,    14,    61,    -1,    -1,
      15,    75,    -1,    -1,    16,    61,    -1,    63,    62,    -1,
      61,    -1,    -1,    -1,    74,    64,    34,    65,    33,    -1,
      -1,    47,    66,    67,    72,    -1,    -1,    -1,    41,    68,
      43,    69,    70,    42,    -1,    -1,    -1,    35,    71,    43,
      -1,    -1,    35,    65,    -1,    -1,    22,    -1,    23,    -1,
      24,    -1,    73,    -1,    47,    -1,    77,    76,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    83,    47,    78,
      37,    79,    84,    80,    38,    33,    82,    81,    39,   156,
      40,    -1,    60,    -1,    -1,    73,    -1,    21,    -1,    -1,
      73,    34,    47,    85,    86,    -1,    -1,    35,    84,    -1,
      -1,    -1,    -1,    -1,    47,    88,    91,    25,    89,   123,
      90,    33,    -1,    36,    47,    -1,    -1,    -1,    41,    92,
     123,    93,    94,    42,    -1,    -1,    35,   123,    -1,    -1,
      -1,    -1,    -1,    47,    96,    37,    97,    99,    38,    98,
      33,    -1,    -1,   123,   100,   101,    -1,    -1,    35,    99,
      -1,    -1,    -1,     5,    37,   123,    38,   103,     6,    39,
     156,    40,   104,    -1,    -1,     7,   105,    39,   156,    40,
      -1,    -1,    -1,    -1,     8,   107,    37,   123,    38,   108,
       9,    39,   156,    40,    -1,    -1,    -1,    -1,    10,    47,
      25,   123,   110,    11,   123,   111,     9,   112,    39,   156,
      40,    -1,    19,    37,   114,    38,    33,    -1,   116,   115,
      -1,    35,   114,    -1,    -1,    46,    -1,   123,    -1,    18,
      37,   118,    38,    33,    -1,    -1,    47,   119,   120,    -1,
      35,   118,    -1,    -1,    -1,    20,    37,   123,    38,   122,
      33,    -1,   124,    -1,    -1,   128,   125,   126,    -1,    -1,
      31,   127,   123,    -1,    -1,    -1,   132,   129,   130,    -1,
      -1,    30,   131,   128,    -1,    -1,   135,   133,    -1,   134,
     135,    -1,    -1,    32,    -1,    -1,   140,   136,   137,    -1,
      -1,    26,   138,   135,    -1,    -1,    27,   139,   135,    -1,
      -1,    -1,   145,   141,   142,    -1,    -1,    29,   143,   140,
      -1,    -1,    28,   144,   140,    -1,    -1,    -1,    37,   146,
     124,    38,    -1,   155,    -1,    -1,    47,   147,   148,    -1,
     152,   153,    -1,    -1,    -1,    41,   149,   123,   150,   151,
      42,    -1,    -1,    35,   123,    -1,    -1,    36,    47,    -1,
      -1,    -1,    37,   154,    99,    38,    -1,    -1,    43,    -1,
      44,    -1,    45,    -1,   157,   156,    -1,    -1,    87,    -1,
      95,    -1,   117,    -1,   113,    -1,   102,    -1,   106,    -1,
     109,    -1,   121,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    44,    43,    47,    48,    50,    51,    52,
      54,    54,    54,    56,    57,    59,    60,    62,    63,    65,
      67,    69,    70,    72,    72,    74,    74,    76,    76,    76,
      77,    79,    79,    80,    82,    83,    85,    86,    87,    89,
      90,    92,    94,    95,    97,    97,    98,    99,    97,   101,
     102,   104,   105,   107,   107,   108,   110,   111,   113,   113,
     114,   113,   116,   117,   117,   117,   119,   121,   122,   124,
     124,   125,   124,   127,   127,   128,   130,   131,   133,   133,
     135,   135,   136,   138,   138,   138,   141,   141,   141,   141,
     144,   146,   148,   149,   151,   152,   154,   156,   156,   158,
     159,   161,   161,   163,   165,   165,   167,   167,   168,   170,
     170,   172,   172,   173,   175,   177,   178,   180,   182,   182,
     184,   184,   185,   185,   186,   188,   188,   190,   190,   191,
     191,   192,   194,   194,   195,   196,   196,   198,   199,   199,
     199,   201,   203,   204,   206,   207,   209,   209,   211,   213,
     214,   215,   217,   218,   220,   221,   222,   223,   224,   225,
     226,   227
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
  "DECLARACIONES", "DECLARACION", "CLASE", "@3", "@4", "HEREDA",
  "ATRIBUTOS", "METODOS", "VARIABLES", "VARS", "VARS_", "VAR", "@5",
  "VAR_IDS", "@6", "ARR", "@7", "@8", "ARR_", "@9", "VAR_IDS_",
  "TIPO_SIMPLE", "TIPO_VAR", "FUNCIONES", "FUNCIONES_", "FUNCION", "@10",
  "@11", "@12", "@13", "FUNC_VARIABLES", "TIPO_RET", "PARAMETROS", "@14",
  "PARAMETROS_", "ASIGNACION", "@15", "@16", "@17", "ASIG", "@18", "@19",
  "ASIG_", "LLAMADA_VOID", "@20", "@21", "@22", "FUNC_PARAM", "@23",
  "FUNC_PARAM_", "DECISION", "@24", "DECISION_", "@25", "CONDICIONAL",
  "@26", "@27", "NOCONDICIONAL", "@28", "@29", "@30", "ESCRITURA",
  "PRINTABLE", "PRINTABLE_", "E", "LECTURA", "READABLE", "@31",
  "READABLE_", "RETORNO", "@32", "EXP", "EXP_Q", "@33", "EXP_", "@34",
  "T_EXP", "@35", "T_EXP_", "@36", "G_EXP", "G_EXP_", "OPER_REL", "M_EXP",
  "@37", "M_EXP_", "@38", "@39", "T", "@40", "T_", "@41", "@42", "F",
  "@43", "@44", "ID_A", "@45", "@46", "ID_ARR", "ID_ATTR", "LLAMADA_RET",
  "@47", "CTE", "ESTATUTOS", "ESTATUTO", 0
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
      55,    56,    54,    57,    57,    58,    58,    59,    59,    60,
      61,    62,    62,    64,    63,    66,    65,    68,    69,    67,
      67,    71,    70,    70,    72,    72,    73,    73,    73,    74,
      74,    75,    76,    76,    78,    79,    80,    81,    77,    82,
      82,    83,    83,    85,    84,    84,    86,    86,    88,    89,
      90,    87,    91,    92,    93,    91,    91,    94,    94,    96,
      97,    98,    95,   100,    99,    99,   101,   101,   103,   102,
     105,   104,   104,   107,   108,   106,   110,   111,   112,   109,
     113,   114,   115,   115,   116,   116,   117,   119,   118,   120,
     120,   122,   121,   123,   125,   124,   127,   126,   126,   129,
     128,   131,   130,   130,   132,   133,   133,   134,   136,   135,
     138,   137,   139,   137,   137,   141,   140,   143,   142,   144,
     142,   142,   146,   145,   145,   147,   145,   148,   149,   150,
     148,   148,   151,   151,   152,   152,   154,   153,   153,   155,
     155,   155,   156,   156,   157,   157,   157,   157,   157,   157,
     157,   157
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,    12,     2,     0,     1,     1,     1,
       0,     0,    11,     2,     0,     2,     0,     2,     0,     2,
       2,     1,     0,     0,     5,     0,     4,     0,     0,     6,
       0,     0,     3,     0,     2,     0,     1,     1,     1,     1,
       1,     2,     1,     0,     0,     0,     0,     0,    15,     1,
       0,     1,     1,     0,     5,     0,     2,     0,     0,     0,
       0,     8,     2,     0,     0,     6,     0,     2,     0,     0,
       0,     0,     8,     0,     3,     0,     2,     0,     0,    10,
       0,     5,     0,     0,     0,    10,     0,     0,     0,    13,
       5,     2,     2,     0,     1,     1,     5,     0,     3,     2,
       0,     0,     6,     1,     0,     3,     0,     3,     0,     0,
       3,     0,     3,     0,     2,     2,     0,     1,     0,     3,
       0,     3,     0,     3,     0,     0,     3,     0,     3,     0,
       3,     0,     0,     4,     1,     0,     3,     2,     0,     0,
       6,     0,     2,     0,     2,     0,     0,     4,     0,     1,
       1,     1,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     6,     0,     0,     0,
       0,     6,     7,     8,     9,    43,    10,    36,    37,    38,
      40,    19,    22,    39,    23,    52,    51,     0,     0,     5,
      42,    41,    14,    21,    20,     0,    44,     0,     0,     0,
       0,     0,     3,    13,     0,    25,     0,    45,     0,    16,
      30,    24,    55,   153,     0,    18,    27,    35,     0,    46,
       0,    83,     0,     0,     0,     0,    58,   154,   155,   158,
     159,   160,   157,   156,   161,     0,   153,    15,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    66,     0,     4,   152,    17,    11,    28,    34,    53,
       0,   132,   149,   150,   151,   135,     0,   103,   104,   109,
     116,   118,   125,   134,     0,     0,    97,     0,    94,     0,
      93,    95,     0,     0,    63,     0,    70,     0,    33,    57,
      50,     0,   141,    78,   108,   113,   117,   114,     0,   124,
     131,     0,    86,   100,     0,     0,     0,    91,   101,    62,
       0,    59,    75,    12,    31,     0,    55,    54,    49,    47,
       0,     0,   138,   136,   148,     0,   106,   105,   111,   110,
     115,   120,   122,   119,   129,   127,   126,    84,     0,     0,
      98,    96,    90,    92,     0,    64,     0,     0,    73,     0,
      29,    56,     0,   133,   144,     0,   146,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,   102,    68,
      60,    71,    77,    32,   153,   139,    75,   153,   107,   112,
     121,   123,   130,   128,     0,    87,     0,     0,     0,     0,
      75,    74,     0,   143,     0,     0,   153,     0,    67,    65,
      61,    72,    76,    48,     0,     0,   147,    82,     0,    88,
     142,   140,    80,    79,    85,     0,     0,   153,   153,     0,
       0,    89,    81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    48,    10,    11,    12,    32,   127,    39,
      55,    79,    13,    21,    34,    22,    35,    46,    50,    57,
      80,   128,   155,   189,    82,    23,    24,    14,    31,    15,
      41,    52,    84,   192,   159,    27,    59,   129,   157,    67,
      91,   186,   228,   125,   150,   209,   227,    68,    92,   152,
     229,   187,   212,   231,    69,   165,   253,   256,    70,    86,
     205,    71,   178,   237,   255,    72,   119,   147,   120,    73,
     117,   143,   180,    74,   184,   188,   107,   134,   167,   199,
     108,   135,   169,   200,   109,   137,   138,   110,   139,   173,
     201,   202,   111,   140,   176,   204,   203,   112,   131,   132,
     163,   195,   233,   245,   164,   197,   216,   113,    75,    76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -207
static const yytype_int16 yypact[] =
{
       6,   -35,    37,  -207,  -207,    29,     2,   -22,    -7,    31,
      35,     2,  -207,  -207,  -207,    47,  -207,  -207,  -207,  -207,
    -207,  -207,    -7,  -207,  -207,  -207,  -207,    18,    33,  -207,
    -207,  -207,    58,  -207,  -207,    38,  -207,    36,    26,    42,
      34,    39,  -207,  -207,    40,  -207,    44,  -207,    41,    64,
      43,  -207,    25,     3,    -7,    67,  -207,    48,    51,  -207,
      49,  -207,    45,    50,    52,    53,    54,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,    55,     3,  -207,    47,    56,
      57,    34,  -207,    46,    59,    -2,    61,    63,    60,   -17,
      -2,    10,    62,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
      68,  -207,  -207,  -207,  -207,  -207,    66,  -207,  -207,  -207,
      70,  -207,  -207,  -207,    -2,    -2,  -207,    71,  -207,    72,
      73,  -207,    75,    74,  -207,    69,  -207,    78,    79,    80,
      89,    -2,    -3,  -207,    86,    76,  -207,  -207,    -2,    30,
      32,    81,  -207,    83,    87,    91,   -17,  -207,  -207,  -207,
      -2,  -207,    -2,  -207,  -207,    84,    25,  -207,  -207,  -207,
      90,    82,  -207,  -207,    85,   119,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,   116,    60,
    -207,  -207,  -207,  -207,    97,  -207,    -2,    93,  -207,    92,
    -207,  -207,    94,  -207,  -207,    -2,  -207,  -207,    95,    -2,
      -2,    -2,    -2,    -2,    -2,   123,    -2,  -207,  -207,   101,
    -207,  -207,   102,  -207,     3,  -207,    -2,     3,  -207,  -207,
    -207,  -207,  -207,  -207,   100,  -207,    -2,    98,   109,   111,
      -2,  -207,   105,   112,   108,   110,     3,   140,  -207,  -207,
    -207,  -207,  -207,  -207,    -2,   113,  -207,   144,   114,  -207,
    -207,  -207,  -207,  -207,  -207,   117,   118,     3,     3,   122,
     124,  -207,  -207
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,  -207,  -207,  -207,   141,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,    23,   -18,  -207,  -207,  -207,    77,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,    -8,  -207,   -12,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,     7,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -206,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,    13,  -207,  -207,  -207,
     -14,  -207,  -207,  -207,  -207,   -83,    65,  -207,  -207,  -207,
     -34,  -207,  -207,  -207,  -207,  -207,  -207,  -133,  -207,  -207,
    -207,  -207,  -145,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,   -76,  -207
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -146
static const yytype_int16 yytable[] =
{
      94,    26,   106,    30,    33,   170,   121,   122,    60,     1,
     234,    61,     3,    62,     7,    17,    18,    19,     8,     9,
     101,    63,    64,    65,   242,    16,   102,   103,   104,   118,
     105,   141,   142,   161,  -145,   101,    77,     4,   162,    28,
      20,   102,   103,   104,    58,   105,   123,    17,    18,    19,
      66,   124,    25,    17,    18,    19,   171,   172,   222,   223,
     174,   175,     6,   121,     9,    36,    95,   185,   220,   221,
      37,    38,    40,    43,    42,    44,    47,    51,    54,    49,
      53,    45,    78,    81,    56,    83,    85,    88,   115,    89,
      90,   -69,    87,    99,   151,    93,    96,   100,   114,   126,
      97,   130,   136,   210,   133,     8,   168,   116,   146,   144,
     145,   153,   215,   148,   154,   156,   218,   166,   179,   177,
     181,   149,   196,   225,   182,   198,   190,   206,   193,   194,
     208,   211,   224,   214,   217,   213,   226,   230,   232,   236,
     239,   235,   240,   238,   241,   243,   246,   244,    58,   249,
     247,   252,    29,   158,   254,   251,   257,   258,    98,   183,
     248,   250,   261,   191,   262,   207,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,   260,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160
};

static const yytype_int16 yycheck[] =
{
      76,     9,    85,    15,    22,   138,    89,    90,     5,     3,
     216,     8,    47,    10,    12,    22,    23,    24,    16,    17,
      37,    18,    19,    20,   230,    47,    43,    44,    45,    46,
      47,   114,   115,    36,    37,    37,    54,     0,    41,     4,
      47,    43,    44,    45,    52,    47,    36,    22,    23,    24,
      47,    41,    21,    22,    23,    24,    26,    27,   203,   204,
      28,    29,    33,   146,    17,    47,    78,   150,   201,   202,
      37,    13,    34,    47,    38,    33,    37,    33,    14,    39,
      39,    47,    15,    35,    41,    34,    37,    37,    25,    37,
      37,    37,    47,    47,    25,    40,    40,    38,    37,    37,
      43,    33,    32,   186,    38,    16,    30,    47,    35,    38,
      38,    33,   195,    38,    35,    35,   199,    31,    35,    38,
      33,    47,    37,   206,    33,     6,    42,    11,    38,    47,
      33,    38,     9,    39,    39,    43,    35,    35,   214,    39,
      42,   217,    33,   226,    33,    40,    38,    35,   156,     9,
      40,     7,    11,   130,    40,    42,    39,    39,    81,   146,
     236,   244,    40,   156,    40,   179,   200,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   257,   258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,    47,     0,    50,    33,    12,    16,    17,
      52,    53,    54,    60,    75,    77,    47,    22,    23,    24,
      47,    61,    63,    73,    74,    21,    73,    83,     4,    52,
      75,    76,    55,    61,    62,    64,    47,    37,    13,    57,
      34,    78,    38,    47,    33,    47,    65,    37,    51,    39,
      66,    33,    79,    39,    14,    58,    41,    67,    73,    84,
       5,     8,    10,    18,    19,    20,    47,    87,    95,   102,
     106,   109,   113,   117,   121,   156,   157,    61,    15,    59,
      68,    35,    72,    34,    80,    37,   107,    47,    37,    37,
      37,    88,    96,    40,   156,    75,    40,    43,    65,    47,
      38,    37,    43,    44,    45,    47,   123,   124,   128,   132,
     135,   140,   145,   155,    37,    25,    47,   118,    46,   114,
     116,   123,   123,    36,    41,    91,    37,    56,    69,    85,
      33,   146,   147,    38,   125,   129,    32,   133,   134,   136,
     141,   123,   123,   119,    38,    38,    35,   115,    38,    47,
      92,    25,    97,    33,    35,    70,    35,    86,    60,    82,
     124,    36,    41,   148,   152,   103,    31,   126,    30,   130,
     135,    26,    27,   137,    28,    29,   142,    38,   110,    35,
     120,    33,    33,   114,   122,   123,    89,    99,   123,    71,
      42,    84,    81,    38,    47,   149,    37,   153,     6,   127,
     131,   138,   139,   144,   143,   108,    11,   118,    33,    93,
     123,    38,   100,    43,    39,   123,   154,    39,   123,   128,
     135,   135,   140,   140,     9,   123,    35,    94,    90,    98,
      35,   101,   156,   150,    99,   156,    39,   111,   123,    42,
      33,    33,    99,    40,    35,   151,    38,    40,   156,     9,
     123,    42,     7,   104,    40,   112,   105,    39,    39,   156,
     156,    40,    40
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
    { tabla.saveTempsUsed(); quad.clearQuad(); ;}
    break;

  case 8:
#line 51 "mylang.y"
    { tabla.saveGlobalVars(); ;}
    break;

  case 10:
#line 54 "mylang.y"
    { tabla.addClass((yyvsp[(2) - (2)].strval)) ;}
    break;

  case 11:
#line 54 "mylang.y"
    { tabla.endCurrentClassDeclaration(); ;}
    break;

  case 15:
#line 59 "mylang.y"
    { tabla.addVarsToClass(); ;}
    break;

  case 23:
#line 72 "mylang.y"
    { tabla.saveCurrentVarType((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 25:
#line 74 "mylang.y"
    { tabla.addVarToList((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 27:
#line 76 "mylang.y"
    { tabla.addFirstArrNode(); ;}
    break;

  case 28:
#line 76 "mylang.y"
    { tabla.storeDimSize((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 29:
#line 76 "mylang.y"
    { tabla.endArrNode(); ;}
    break;

  case 31:
#line 79 "mylang.y"
    { tabla.addArrNode(); ;}
    break;

  case 32:
#line 79 "mylang.y"
    { tabla.storeDimSize((yyvsp[(3) - (3)].intval)); ;}
    break;

  case 44:
#line 97 "mylang.y"
    { tabla.createFunc((yyvsp[(3) - (3)].strval), (yyvsp[(2) - (3)].strval)); tabla.addFuncGlobalVar(); ;}
    break;

  case 45:
#line 97 "mylang.y"
    { tabla.initParameterVars(); ;}
    break;

  case 46:
#line 98 "mylang.y"
    { tabla.addParameterVarsToDir(); ;}
    break;

  case 47:
#line 99 "mylang.y"
    { tabla.addCurrLVarsToDir(); tabla.addFuncCont(); ;}
    break;

  case 48:
#line 99 "mylang.y"
    { tabla.addEndFunc(); ;}
    break;

  case 53:
#line 107 "mylang.y"
    { tabla.addParameterVar((yyvsp[(3) - (3)].strval), (yyvsp[(1) - (3)].strval)); ;}
    break;

  case 58:
#line 113 "mylang.y"
    { quad.addOperand((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 59:
#line 113 "mylang.y"
    { quad.addOperatorAsig((yyvsp[(4) - (4)].strval)); ;}
    break;

  case 60:
#line 114 "mylang.y"
    { quad.removeFromStackAssign(); ;}
    break;

  case 62:
#line 116 "mylang.y"
    { quad.checkValidAttribute((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 63:
#line 117 "mylang.y"
    { quad.verifyArrayDimensions(); ;}
    break;

  case 64:
#line 117 "mylang.y"
    { quad.getArrayDimensionResult(); ;}
    break;

  case 65:
#line 118 "mylang.y"
    { quad.addArrayQuads(); ;}
    break;

  case 67:
#line 121 "mylang.y"
    { quad.getArrayDimensionResult(); ;}
    break;

  case 69:
#line 124 "mylang.y"
    { tabla.verifyVoidFunction((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 70:
#line 124 "mylang.y"
    { tabla.generateEra(); ;}
    break;

  case 71:
#line 125 "mylang.y"
    { tabla.verifyLastParam(); tabla.addGoSub(); ;}
    break;

  case 73:
#line 127 "mylang.y"
    { tabla.verifyParameterType(); tabla.moveToNextParam(); ;}
    break;

  case 78:
#line 133 "mylang.y"
    { quad.addGotoIf(); ;}
    break;

  case 79:
#line 133 "mylang.y"
    { quad.addDecisionEnd(); ;}
    break;

  case 80:
#line 135 "mylang.y"
    { quad.addGotoElse(); ;}
    break;

  case 83:
#line 138 "mylang.y"
    { quad.addWhileCheckpoint(); ;}
    break;

  case 84:
#line 138 "mylang.y"
    { quad.addGotoWhile(); ;}
    break;

  case 85:
#line 139 "mylang.y"
    { quad.addConditionalEnd(); ;}
    break;

  case 86:
#line 141 "mylang.y"
    { quad.addLoopCounter((yyvsp[(2) - (4)].strval)); ;}
    break;

  case 87:
#line 141 "mylang.y"
    { quad.addLoopLimit(); ;}
    break;

  case 88:
#line 141 "mylang.y"
    { quad.addGotoFor(); ;}
    break;

  case 89:
#line 142 "mylang.y"
    { quad.addNonConditionalEnd((yyvsp[(2) - (13)].strval)); ;}
    break;

  case 94:
#line 151 "mylang.y"
    { quad.addWriteStr((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 95:
#line 152 "mylang.y"
    { quad.addWriteExp(); ;}
    break;

  case 97:
#line 156 "mylang.y"
    { quad.addRead((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 101:
#line 161 "mylang.y"
    { tabla.saveReturnValue(); ;}
    break;

  case 104:
#line 165 "mylang.y"
    { quad.removeFromStackOr(); ;}
    break;

  case 106:
#line 167 "mylang.y"
    { quad.addOperatorOr((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 109:
#line 170 "mylang.y"
    { quad.removeFromStackAnd(); ;}
    break;

  case 111:
#line 172 "mylang.y"
    { quad.addOperatorAnd((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 115:
#line 177 "mylang.y"
    { quad.removeFromStackRel(); ;}
    break;

  case 117:
#line 180 "mylang.y"
    { quad.addOperatorRel((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 118:
#line 182 "mylang.y"
    { quad.removeFromStackPlusMinus(); ;}
    break;

  case 120:
#line 184 "mylang.y"
    { quad.addOperatorPlusMinus((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 122:
#line 185 "mylang.y"
    { quad.addOperatorPlusMinus((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 125:
#line 188 "mylang.y"
    { quad.removeFromStackMultDiv(); ;}
    break;

  case 127:
#line 190 "mylang.y"
    { quad.addOperatorMultDiv((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 129:
#line 191 "mylang.y"
    { quad.addOperatorMultDiv((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 132:
#line 194 "mylang.y"
    { quad.addFalseBottom(); ;}
    break;

  case 133:
#line 194 "mylang.y"
    { quad.removeFalseBottom(); ;}
    break;

  case 135:
#line 196 "mylang.y"
    { quad.addOperand((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 138:
#line 199 "mylang.y"
    { quad.verifyArrayDimensions(); ;}
    break;

  case 139:
#line 199 "mylang.y"
    { quad.getArrayDimensionResult(); ;}
    break;

  case 140:
#line 200 "mylang.y"
    { quad.addArrayQuads(); ;}
    break;

  case 142:
#line 203 "mylang.y"
    { quad.getArrayDimensionResult(); ;}
    break;

  case 144:
#line 206 "mylang.y"
    { quad.checkValidAttribute((yyvsp[(2) - (2)].strval)); ;}
    break;

  case 146:
#line 209 "mylang.y"
    { tabla.verifyFunction(); tabla.generateEra(); ;}
    break;

  case 147:
#line 210 "mylang.y"
    { tabla.verifyLastParam(); tabla.addGoSub(); tabla.addReturnValue(); ;}
    break;

  case 149:
#line 213 "mylang.y"
    { quad.addConstOperand(std::to_string((yyvsp[(1) - (1)].intval)), "int"); ;}
    break;

  case 150:
#line 214 "mylang.y"
    { quad.addConstOperand(std::to_string((yyvsp[(1) - (1)].floatval)), "float"); ;}
    break;

  case 151:
#line 215 "mylang.y"
    { quad.addConstOperand(std::to_string((yyvsp[(1) - (1)].charval)), "char"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2037 "mylang.tab.c"
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


#line 230 "mylang.y"
 

int main() {
	yyparse();
}

void yyerror(char* s) {
	std::cout << "Syntax error on line " << lineno << std::endl;
}

