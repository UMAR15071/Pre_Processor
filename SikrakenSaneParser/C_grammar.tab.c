/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "C_grammar.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include "utils.h"
#include "handle_typedefs.h"

extern int yylex();
extern int yylineno;

extern FILE *yyin;
extern char *yytext;
extern int typedef_flag;

char pl_file_uri[_MAX_PATH];
FILE* pl_file;

void yyerror(const char*);
void my_exit(int);				//attempts to close handles and delete generated files prior to caling exit(int);

int debugMode = 0;				//flag to indicate if we are in debug mode set by by -d command line switch

#line 95 "C_grammar.tab.c"

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

#include "C_grammar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPEDEF_NAME = 4,               /* TYPEDEF_NAME  */
  YYSYMBOL_I_CONSTANT = 5,                 /* I_CONSTANT  */
  YYSYMBOL_F_CONSTANT = 6,                 /* F_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_FUNC_NAME = 8,                  /* FUNC_NAME  */
  YYSYMBOL_SIZEOF = 9,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 10,                    /* PTR_OP  */
  YYSYMBOL_INC_OP = 11,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 12,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 13,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 14,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 15,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 16,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 17,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 18,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 19,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 20,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 21,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 22,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 23,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 24,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 25,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 26,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 27,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 28,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 29,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 30,                 /* OR_ASSIGN  */
  YYSYMBOL_ENUMERATION_CONSTANT = 31,      /* ENUMERATION_CONSTANT  */
  YYSYMBOL_TYPEDEF = 32,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 33,                    /* EXTERN  */
  YYSYMBOL_STATIC = 34,                    /* STATIC  */
  YYSYMBOL_AUTO = 35,                      /* AUTO  */
  YYSYMBOL_REGISTER = 36,                  /* REGISTER  */
  YYSYMBOL_INLINE = 37,                    /* INLINE  */
  YYSYMBOL_CONST = 38,                     /* CONST  */
  YYSYMBOL_RESTRICT = 39,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 40,                  /* VOLATILE  */
  YYSYMBOL_BOOL = 41,                      /* BOOL  */
  YYSYMBOL_CHAR = 42,                      /* CHAR  */
  YYSYMBOL_SHORT = 43,                     /* SHORT  */
  YYSYMBOL_INT = 44,                       /* INT  */
  YYSYMBOL_LONG = 45,                      /* LONG  */
  YYSYMBOL_SIGNED = 46,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 47,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 48,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 49,                    /* DOUBLE  */
  YYSYMBOL_VOID = 50,                      /* VOID  */
  YYSYMBOL_COMPLEX = 51,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 52,                 /* IMAGINARY  */
  YYSYMBOL_STRUCT = 53,                    /* STRUCT  */
  YYSYMBOL_UNION = 54,                     /* UNION  */
  YYSYMBOL_ENUM = 55,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 56,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 57,                      /* CASE  */
  YYSYMBOL_DEFAULT = 58,                   /* DEFAULT  */
  YYSYMBOL_IF = 59,                        /* IF  */
  YYSYMBOL_ELSE = 60,                      /* ELSE  */
  YYSYMBOL_SWITCH = 61,                    /* SWITCH  */
  YYSYMBOL_WHILE = 62,                     /* WHILE  */
  YYSYMBOL_DO = 63,                        /* DO  */
  YYSYMBOL_FOR = 64,                       /* FOR  */
  YYSYMBOL_GOTO = 65,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 66,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 67,                     /* BREAK  */
  YYSYMBOL_RETURN = 68,                    /* RETURN  */
  YYSYMBOL_ALIGNAS = 69,                   /* ALIGNAS  */
  YYSYMBOL_ALIGNOF = 70,                   /* ALIGNOF  */
  YYSYMBOL_ATOMIC = 71,                    /* ATOMIC  */
  YYSYMBOL_GENERIC = 72,                   /* GENERIC  */
  YYSYMBOL_NORETURN = 73,                  /* NORETURN  */
  YYSYMBOL_STATIC_ASSERT = 74,             /* STATIC_ASSERT  */
  YYSYMBOL_THREAD_LOCAL = 75,              /* THREAD_LOCAL  */
  YYSYMBOL_76_ = 76,                       /* '('  */
  YYSYMBOL_77_ = 77,                       /* ')'  */
  YYSYMBOL_78_ = 78,                       /* ','  */
  YYSYMBOL_79_ = 79,                       /* ':'  */
  YYSYMBOL_80_ = 80,                       /* '['  */
  YYSYMBOL_81_ = 81,                       /* ']'  */
  YYSYMBOL_82_ = 82,                       /* '.'  */
  YYSYMBOL_83_ = 83,                       /* '{'  */
  YYSYMBOL_84_ = 84,                       /* '}'  */
  YYSYMBOL_85_ = 85,                       /* '&'  */
  YYSYMBOL_86_ = 86,                       /* '*'  */
  YYSYMBOL_87_ = 87,                       /* '+'  */
  YYSYMBOL_88_ = 88,                       /* '-'  */
  YYSYMBOL_89_ = 89,                       /* '~'  */
  YYSYMBOL_90_ = 90,                       /* '!'  */
  YYSYMBOL_91_ = 91,                       /* '/'  */
  YYSYMBOL_92_ = 92,                       /* '%'  */
  YYSYMBOL_93_ = 93,                       /* '<'  */
  YYSYMBOL_94_ = 94,                       /* '>'  */
  YYSYMBOL_95_ = 95,                       /* '^'  */
  YYSYMBOL_96_ = 96,                       /* '|'  */
  YYSYMBOL_97_ = 97,                       /* '?'  */
  YYSYMBOL_98_ = 98,                       /* '='  */
  YYSYMBOL_99_ = 99,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 100,                 /* $accept  */
  YYSYMBOL_primary_expression = 101,       /* primary_expression  */
  YYSYMBOL_constant = 102,                 /* constant  */
  YYSYMBOL_enumeration_constant = 103,     /* enumeration_constant  */
  YYSYMBOL_string = 104,                   /* string  */
  YYSYMBOL_generic_selection = 105,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 106,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 107,      /* generic_association  */
  YYSYMBOL_postfix_expression = 108,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 109, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 110,         /* unary_expression  */
  YYSYMBOL_unary_operator = 111,           /* unary_operator  */
  YYSYMBOL_cast_expression = 112,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 113, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 114,      /* additive_expression  */
  YYSYMBOL_shift_expression = 115,         /* shift_expression  */
  YYSYMBOL_relational_expression = 116,    /* relational_expression  */
  YYSYMBOL_equality_expression = 117,      /* equality_expression  */
  YYSYMBOL_and_expression = 118,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 119,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 120,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 121,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 122,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 123,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 124,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 125,      /* assignment_operator  */
  YYSYMBOL_expression = 126,               /* expression  */
  YYSYMBOL_constant_expression = 127,      /* constant_expression  */
  YYSYMBOL_declaration = 128,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 129,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 130,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 131,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 132,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 133,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 134, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 135,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 136,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 137,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 138, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 139,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 140,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 141,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 142,          /* enumerator_list  */
  YYSYMBOL_enumerator = 143,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 144,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 145,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 146,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 147,      /* alignment_specifier  */
  YYSYMBOL_declarator = 148,               /* declarator  */
  YYSYMBOL_direct_declarator = 149,        /* direct_declarator  */
  YYSYMBOL_pointer = 150,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 151,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 152,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 153,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 154,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 155,          /* identifier_list  */
  YYSYMBOL_type_name = 156,                /* type_name  */
  YYSYMBOL_abstract_declarator = 157,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 158, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 159,              /* initializer  */
  YYSYMBOL_initializer_list = 160,         /* initializer_list  */
  YYSYMBOL_designation = 161,              /* designation  */
  YYSYMBOL_designator_list = 162,          /* designator_list  */
  YYSYMBOL_designator = 163,               /* designator  */
  YYSYMBOL_static_assert_declaration = 164, /* static_assert_declaration  */
  YYSYMBOL_statement = 165,                /* statement  */
  YYSYMBOL_labeled_statement = 166,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 167,       /* compound_statement  */
  YYSYMBOL_block_item_list = 168,          /* block_item_list  */
  YYSYMBOL_block_item = 169,               /* block_item  */
  YYSYMBOL_expression_statement = 170,     /* expression_statement  */
  YYSYMBOL_selection_statement = 171,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 172,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 173,           /* jump_statement  */
  YYSYMBOL_translation_unit = 174,         /* translation_unit  */
  YYSYMBOL_external_declaration = 175,     /* external_declaration  */
  YYSYMBOL_function_definition = 176,      /* function_definition  */
  YYSYMBOL_declaration_list = 177          /* declaration_list  */
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
typedef yytype_int16 yy_state_t;

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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2597

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  480

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


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
       2,     2,     2,    90,     2,     2,     2,    92,    85,     2,
      76,    77,    86,    87,    78,    88,    82,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    99,
      93,    98,    94,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    96,    84,    89,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    60,    61,    62,    63,    67,    68,    69,
      73,    77,    78,    82,    86,    87,    91,    92,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   109,   110,
     114,   115,   116,   117,   118,   119,   120,   124,   125,   126,
     127,   128,   129,   133,   134,   138,   139,   140,   141,   145,
     146,   147,   151,   152,   153,   157,   158,   159,   160,   161,
     165,   166,   167,   171,   172,   176,   177,   181,   182,   186,
     187,   191,   192,   196,   197,   201,   202,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   220,   221,
     225,   229,   233,   241,   247,   254,   260,   267,   273,   275,
     277,   279,   281,   283,   288,   294,   304,   311,   323,   327,
     328,   329,   330,   331,   335,   336,   338,   339,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     361,   362,   363,   367,   368,   372,   373,   377,   378,   379,
     383,   384,   385,   386,   390,   391,   395,   396,   397,   401,
     402,   403,   404,   405,   409,   410,   414,   415,   419,   423,
     426,   429,   432,   438,   439,   443,   444,   448,   455,   464,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   486,   493,   499,   505,   511,   517,   527,
     528,   532,   533,   537,   538,   539,   543,   544,   548,   549,
     553,   554,   555,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   583,   584,   585,   589,   590,   591,
     592,   596,   600,   601,   605,   606,   610,   614,   615,   616,
     617,   618,   619,   623,   624,   625,   629,   630,   634,   635,
     639,   640,   644,   645,   649,   650,   651,   655,   656,   657,
     658,   659,   660,   664,   665,   666,   667,   668,   672,   673,
     677,   678,   682,   683,   687,   688
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPEDEF_NAME", "I_CONSTANT", "F_CONSTANT", "STRING_LITERAL",
  "FUNC_NAME", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('", "')'", "','", "':'",
  "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'='", "';'",
  "$accept", "primary_expression", "constant", "enumeration_constant",
  "string", "generic_selection", "generic_assoc_list",
  "generic_association", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-370)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2265,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,    26,    -8,     9,  -370,    18,
    -370,  -370,    28,  2370,  2370,  -370,    39,  -370,  -370,  2370,
    2370,  2370,  -370,  2108,  -370,  -370,   -56,    46,   950,  2526,
    1739,  -370,    45,   175,  -370,   -40,  -370,   877,    74,    79,
    -370,  -370,    34,  2422,  -370,  -370,  -370,  -370,  -370,    46,
    -370,    47,   -54,  -370,  -370,  -370,  -370,  -370,  -370,  1760,
    1781,  1781,  -370,    61,    71,   950,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,   172,  -370,  1739,  -370,
      82,   -30,    20,   124,   208,   103,    64,    73,   181,    -1,
    -370,   132,  2526,   109,  2526,   142,   168,   178,   176,  -370,
    -370,  -370,   175,    45,  -370,   457,  1500,  -370,    28,  -370,
    2052,  2161,  1022,    74,  2422,  1947,  -370,    72,  -370,    88,
    1739,    29,  -370,   950,  -370,   950,  -370,  -370,  2526,  1739,
     450,  -370,  -370,   150,   195,   271,  -370,  -370,  1521,  1739,
     273,  -370,  1739,  1739,  1739,  1739,  1739,  1739,  1739,  1739,
    1739,  1739,  1739,  1739,  1739,  1739,  1739,  1739,  1739,  1739,
    1739,  -370,  -370,  1895,  1043,   101,  -370,   122,  -370,  -370,
    -370,   275,  -370,  -370,  -370,  -370,   191,   206,  1739,   211,
     218,   219,   220,   719,   221,   295,   200,   202,   761,  -370,
    -370,   -39,  -370,  -370,  -370,  -370,   577,  -370,  -370,  -370,
    -370,  -370,  1479,  -370,  -370,  -370,  -370,  -370,  -370,    76,
     227,   228,  -370,   155,  1349,  -370,   224,   226,  1131,  1999,
    -370,  -370,  1739,  -370,    50,  -370,   231,    32,  -370,  -370,
    -370,  -370,   234,   238,   242,   249,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  1739,  -370,  1739,
    1609,  -370,  -370,   157,  -370,   -25,  -370,  -370,  -370,  -370,
      82,    82,   -30,   -30,    20,    20,    20,    20,   124,   124,
     208,   103,    64,    73,   181,   158,  -370,   253,   256,  1349,
    -370,   254,   257,  1152,   122,  2213,  1240,   260,   719,   255,
     719,  1739,  1739,  1739,   277,   666,   241,  -370,  -370,  -370,
      66,  -370,  -370,  -370,  1739,   340,  -370,   121,  1500,   -57,
    -370,  1840,  -370,    77,  -370,  -370,  2317,  -370,   341,   264,
    1349,  -370,  -370,  1739,  -370,   265,   267,  -370,  -370,   117,
    -370,  1739,  -370,   266,   266,  -370,  2474,  -370,  -370,  1479,
    -370,  -370,  1739,  -370,  1739,  -370,  -370,   270,  1349,  -370,
    -370,  1739,  -370,   274,  -370,   279,  1349,  -370,   276,   278,
    1261,   259,  -370,   719,  -370,   161,   165,   182,   284,   808,
     808,  -370,  -370,   280,  -370,  1370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,   281,   282,  -370,  -370,  -370,  -370,
     286,   185,  -370,   287,   123,  -370,  -370,  -370,   288,   289,
    -370,  -370,   290,  1349,  -370,  -370,  1739,  -370,   291,  -370,
    -370,   719,   719,   719,  1739,  1630,  1651,  -370,  -370,  -370,
    1500,  -370,  -370,  1739,  -370,  2474,  1739,  1391,  -370,  -370,
    -370,  -370,   292,   293,  -370,   308,  -370,  -370,   187,   719,
     190,   719,   193,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
     719,   283,  -370,   719,  -370,   719,  -370,  -370,  -370,  -370
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   129,   108,   109,   110,   112,   113,   163,   159,   160,
     161,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   133,   134,     0,     0,   162,   164,     0,
     111,   271,     0,    95,    97,   127,     0,   128,   126,    99,
     101,   103,    93,     0,   268,   270,   153,     0,     0,     0,
       0,   169,     0,   186,    91,     0,   104,   107,   168,     0,
      94,    96,   132,     0,    98,   100,   102,     1,   269,     0,
      10,   157,     0,   154,     2,     7,     8,    11,    12,     0,
       0,     0,     9,     0,     0,     0,    37,    38,    39,    40,
      41,    42,    18,     3,     4,     6,    30,    43,     0,    45,
      49,    52,    55,    60,    63,    65,    67,    69,    71,    73,
      90,     0,   141,   199,   143,     0,     0,     0,     0,   162,
     187,   185,   184,     0,    92,     0,     0,   274,     0,   273,
       0,     0,     0,   167,     0,     0,   135,     0,   139,     0,
       0,     0,   149,     0,    34,     0,    31,    32,     0,     0,
      43,    75,    88,     0,     0,     0,    24,    25,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   140,     0,     0,   201,   198,   202,   142,   165,
     158,     0,   170,   188,   183,   105,   107,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   246,
     252,     0,   250,   251,   237,   238,     0,   248,   239,   240,
     241,   242,     0,   226,   106,   275,   272,   196,   181,   195,
       0,   190,   191,     0,     0,   171,    38,     0,     0,     0,
     130,   136,     0,   137,     0,   144,   148,     0,   151,   156,
     150,   155,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    77,     0,     5,     0,
       0,    23,    20,     0,    28,     0,    22,    46,    47,    48,
      50,    51,    53,    54,    58,    59,    56,    57,    61,    62,
      64,    66,    68,    70,    72,     0,   220,     0,     0,     0,
     204,    38,     0,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   264,   265,   266,
       0,   253,   247,   249,     0,     0,   228,     0,     0,     0,
     232,     0,   193,   201,   194,   180,     0,   182,     0,     0,
       0,   172,   179,     0,   178,    38,     0,   131,   146,     0,
     138,     0,   152,    35,     0,    36,     0,    76,    89,     0,
      44,    21,     0,    19,     0,   221,   203,     0,     0,   205,
     211,     0,   210,     0,   222,     0,     0,   212,    38,     0,
       0,     0,   243,     0,   245,     0,     0,     0,     0,     0,
       0,   263,   267,     0,   235,     0,   224,   227,   231,   233,
     189,   192,   197,   174,     0,     0,   175,   177,   145,   147,
       0,     0,    14,     0,     0,    29,    74,   207,     0,     0,
     209,   223,     0,     0,   213,   219,     0,   218,     0,   236,
     244,     0,     0,     0,     0,     0,     0,   234,   225,   230,
       0,   173,   176,     0,    13,     0,     0,     0,    26,   206,
     208,   215,     0,     0,   216,   255,   256,   257,     0,     0,
       0,     0,     0,   229,    17,    15,    16,    27,   214,   217,
       0,     0,   261,     0,   259,     0,   254,   258,   262,   260
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -370,  -370,  -370,  -370,  -370,  -370,  -370,   -69,  -370,  -370,
     243,  -370,   -29,    84,   111,    52,   114,   203,   201,   209,
     207,   210,  -370,   -38,   -59,  -370,   -82,   -22,   -49,    11,
    -370,   268,  -370,   -42,  -370,  -370,   245,  -115,   -23,  -370,
      41,  -370,   311,  -124,  -370,   -48,  -370,  -370,   -18,   -50,
     -51,  -119,  -113,  -370,    56,  -370,    -2,   -91,  -169,  -122,
      35,  -369,  -370,    67,   -27,   -33,  -370,    31,  -370,   177,
    -260,  -370,  -370,  -370,  -370,   352,  -370,  -370
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    92,    93,    71,    94,    95,   411,   412,    96,   273,
     150,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   151,   152,   267,   211,   111,    31,   128,
      55,    56,    33,    34,    35,    36,   135,   136,   113,   244,
     245,    37,    72,    73,    38,    39,    40,    41,   118,    58,
      59,   122,   297,   231,   232,   233,   413,   298,   187,   326,
     327,   328,   329,   330,    42,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    43,    44,    45,   130
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     114,   114,   121,   153,   224,   120,   112,   112,   127,   133,
     110,    32,   110,   238,    57,   114,   304,   251,   230,   179,
     241,   112,   186,   324,   141,   325,   440,    69,   117,    46,
     142,    51,    70,   167,   168,    70,   138,   114,   123,   269,
     137,   398,    62,   112,    60,    61,   115,   116,    51,    70,
      64,    65,    66,   269,    32,   390,   363,   165,   166,   124,
     321,   153,   185,   153,   114,   303,   114,   223,    48,   161,
     112,   194,   112,   237,   193,    51,   212,   275,   440,    51,
      51,   225,    51,   154,   120,    49,   114,   114,   129,   182,
     255,   188,   112,   112,    50,   114,   180,   114,   295,   274,
     114,   112,   110,   112,    52,   196,   112,   138,   138,    47,
     196,   137,   137,   250,    53,   340,   352,   134,   249,   246,
      51,    52,    63,   251,   241,   302,   320,    54,   349,   435,
     436,    53,   185,   277,   278,   279,   120,   148,   334,   169,
     170,   252,   229,   253,   269,   140,   254,   149,    52,   350,
     131,   242,   331,   331,   132,    52,   184,   184,    53,   176,
     110,   226,    53,   223,   304,   392,   247,   212,   162,   177,
     314,   243,   248,   163,   164,   339,   309,   183,   333,   346,
     368,   184,   155,   156,   157,   183,   120,   380,   175,   184,
     193,   114,   375,    52,   229,    53,   242,   112,   305,   395,
     178,   447,   306,    53,   110,   396,   397,   448,   357,   181,
     358,   332,   138,     8,     9,    10,   137,   171,   172,   189,
     348,   284,   285,   286,   287,   173,   174,   268,   269,   385,
     386,   387,   337,   338,   361,   362,   269,   364,   431,   269,
     367,   360,   432,   269,   373,   190,   119,   379,   158,   280,
     281,   120,   159,   192,   160,   193,   191,   423,   120,   433,
     269,    53,   444,   445,   471,   269,   389,   473,   269,   223,
     475,   269,   270,   439,   271,   382,   276,   384,   282,   283,
     333,   404,   307,   133,   405,   308,   110,   288,   289,   126,
     310,    97,   193,    97,   311,   312,   313,   315,   316,   317,
     223,   318,   393,   415,   335,   341,   336,   342,   114,   418,
     351,   353,   419,   110,   112,   354,   229,   422,   463,   355,
     193,   428,   144,   146,   147,   439,   416,   356,   120,   409,
     365,   246,   193,   366,   383,   369,   223,   381,   370,   388,
     391,    97,   229,   394,   402,   403,   406,   229,   407,   359,
     430,   417,   458,   460,   462,   420,   421,   424,   429,   425,
     434,   437,   441,   442,   452,   443,   446,   453,   470,   449,
     450,   451,   454,   468,   469,   193,   465,   291,   290,   239,
     139,   223,   477,    97,   464,   293,   292,   466,   223,   294,
     408,   195,   401,   323,   414,    68,   399,   114,   455,   456,
     457,     0,     0,   112,     0,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,     0,     0,     0,   472,     0,   474,     0,
       0,     0,     0,     0,     0,     0,     0,   476,     0,     0,
     478,    97,   479,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     197,     1,    75,    76,    77,    78,    79,     0,    80,    81,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,     0,     0,     0,    97,     0,     0,    82,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    97,   198,   199,   200,     0,   201,   202,
     203,   204,   205,   206,   207,   208,    26,    83,    27,    84,
      28,    29,    30,    85,     0,     0,     0,     0,     0,     0,
     125,   209,    86,    87,    88,    89,    90,    91,   266,     0,
       0,     0,     0,     0,     0,     0,   210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     197,     1,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,    82,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,   198,   199,   200,     0,   201,   202,
     203,   204,   205,   206,   207,   208,    26,    83,    27,    84,
      28,    29,    30,    85,     0,     0,     0,     0,     0,     0,
     125,   322,    86,    87,    88,    89,    90,    91,     0,    74,
       1,    75,    76,    77,    78,    79,   210,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   197,     0,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,    26,    83,    27,    84,    28,
      29,    30,    85,     0,     0,     0,     0,     0,     0,     0,
      82,    86,    87,    88,    89,    90,    91,     0,     0,     0,
       0,     0,     0,     0,    74,   210,    75,    76,    77,    78,
      79,     0,    80,    81,     0,     0,   198,   199,   200,     0,
     201,   202,   203,   204,   205,   206,   207,   208,     0,    83,
       0,    84,    82,     0,     0,    85,     0,     0,     0,     0,
       0,     0,   125,     0,    86,    87,    88,    89,    90,    91,
       0,    74,     0,    75,    76,    77,    78,    79,   210,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,    84,     0,     0,     0,    85,     0,    82,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
     319,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
      84,     1,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,   210,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,    74,     1,    75,    76,    77,    78,    79,
     125,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,    27,    84,     0,     0,    74,    85,    75,    76,    77,
      78,    79,     0,    80,    81,    86,    87,    88,    89,    90,
      91,     0,     0,     0,     0,     0,    74,     0,    75,    76,
      77,    78,    79,    82,    80,    81,   234,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,     0,   299,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    83,   119,    84,     0,     0,     0,    85,     0,
       0,     0,     0,   235,     0,     0,     0,    86,   236,    88,
      89,    90,    91,    83,   119,    84,     0,     0,     0,    85,
       0,     0,     0,     0,   300,     0,     0,     0,    86,   301,
      88,    89,    90,    91,    74,     0,    75,    76,    77,    78,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,    75,    76,    77,
      78,    79,    82,    80,    81,   343,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,     0,   371,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,    83,   119,    84,     0,     0,     0,    85,     0,     0,
       0,     0,   344,     0,     0,     0,    86,   345,    88,    89,
      90,    91,    83,   119,    84,     0,     0,     0,    85,     0,
       0,     0,     0,   372,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    74,     0,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,    75,    76,    77,    78,
      79,    82,    80,    81,   376,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,   426,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
      83,   119,    84,     0,     0,     0,    85,     0,     0,     0,
       0,   377,     0,     0,     0,    86,   378,    88,    89,    90,
      91,    83,   119,    84,     0,     0,     0,    85,     0,     0,
       0,     0,   427,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,     0,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,    74,     0,    75,    76,    77,    78,
      79,    82,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
     119,    84,    82,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
      83,     0,    84,     0,     0,     0,    85,     0,     0,     0,
     324,     0,   325,   222,   438,    86,    87,    88,    89,    90,
      91,    83,     0,    84,     0,     0,     0,    85,     0,     0,
       0,   324,     0,   325,   222,   467,    86,    87,    88,    89,
      90,    91,    74,     0,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,    75,    76,    77,    78,
      79,    82,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,    84,    82,     0,     0,    85,     0,     0,     0,   324,
       0,   325,   222,     0,    86,    87,    88,    89,    90,    91,
      83,     0,    84,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,   222,     0,    86,    87,    88,    89,    90,
      91,    83,     0,    84,     0,     0,     0,    85,   272,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,     0,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,    75,    76,    77,    78,
      79,    82,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,    84,    82,     0,     0,    85,     0,     0,     0,     0,
       0,     0,   359,     0,    86,    87,    88,    89,    90,    91,
      83,     0,    84,     0,     0,     0,    85,   459,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,    83,     0,    84,     0,     0,     0,    85,   461,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,     0,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,    75,    76,    77,    78,
      79,    82,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,    84,    82,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
      83,     0,    84,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,    51,     1,    86,    87,    88,    89,    90,
      91,    83,     0,    84,     0,     0,     0,   145,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,   331,   296,     0,     0,
     184,     0,     0,     0,     0,     0,    53,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,   183,   296,     0,     0,   184,     0,     0,     0,     0,
       0,    53,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   240,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    67,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   227,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     0,    30,     0,   228,     0,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,     0,
     374,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   400,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       1,     0,   410,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      48,    49,    53,    85,   126,    53,    48,    49,    57,    59,
      48,     0,    50,   132,    32,    63,   185,   141,   131,    20,
     135,    63,   113,    80,    78,    82,   395,    83,    50,     3,
      84,     3,     3,    13,    14,     3,    63,    85,    78,    78,
      63,    98,     3,    85,    33,    34,    48,    49,     3,     3,
      39,    40,    41,    78,    43,   315,    81,    87,    88,    99,
      99,   143,   113,   145,   112,   184,   114,   126,    76,    98,
     112,   122,   114,   132,   122,     3,   125,   159,   447,     3,
       3,   130,     3,    85,   132,    76,   134,   135,    57,   112,
     149,   114,   134,   135,    76,   143,    97,   145,   180,   158,
     148,   143,   140,   145,    76,   123,   148,   134,   135,    83,
     128,   134,   135,    84,    86,   234,    84,    83,   140,   137,
       3,    76,    83,   247,   239,   184,   208,    99,    78,   389,
     390,    86,   183,   162,   163,   164,   184,    76,   229,    15,
      16,   143,   131,   145,    78,    98,   148,    76,    76,    99,
      76,    79,    76,    76,    80,    76,    80,    80,    86,    95,
     198,   130,    86,   222,   333,    99,    78,   216,    86,    96,
     203,    99,    84,    91,    92,   234,   198,    76,   229,   238,
     299,    80,    10,    11,    12,    76,   234,   306,    85,    80,
     238,   239,   305,    76,   183,    86,    79,   239,    76,    78,
      19,    78,    80,    86,   242,    84,   328,    84,   267,    77,
     269,   229,   239,    38,    39,    40,   239,    93,    94,    77,
     242,   169,   170,   171,   172,    17,    18,    77,    78,   311,
     312,   313,    77,    78,    77,    78,    78,    79,    77,    78,
     299,   270,    77,    78,   303,    77,    71,   306,    76,   165,
     166,   299,    80,    77,    82,   303,    78,   376,   306,    77,
      78,    86,    77,    78,    77,    78,   315,    77,    78,   328,
      77,    78,    77,   395,     3,   308,     3,   310,   167,   168,
     331,   340,     7,   333,   343,    79,   324,   173,   174,    98,
      79,    48,   340,    50,    76,    76,    76,    76,     3,    99,
     359,    99,   324,   362,    77,    81,    78,    81,   356,   368,
      79,    77,   371,   351,   356,    77,   305,   376,   440,    77,
     368,   380,    79,    80,    81,   447,   364,    78,   376,   351,
      77,   349,   380,    77,    79,    81,   395,    77,    81,    62,
      99,    98,   331,     3,     3,    81,    81,   336,    81,    83,
     383,    81,   434,   435,   436,    81,    77,    81,    99,    81,
      76,    81,    81,    81,   423,    79,    79,   426,    60,    81,
      81,    81,    81,    81,    81,   423,   445,   176,   175,   134,
      69,   440,    99,   140,   443,   178,   177,   446,   447,   179,
     349,   123,   336,   216,   359,    43,   329,   445,   431,   432,
     433,    -1,    -1,   445,    -1,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,    -1,    -1,    -1,   459,    -1,   461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,
     473,   198,   475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,   242,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   270,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   364,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,     3,
       4,     5,     6,     7,     8,     9,    99,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     3,    -1,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    99,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    72,    31,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
      -1,     3,    -1,     5,     6,     7,     8,     9,    99,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,     4,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,     3,     4,     5,     6,     7,     8,     9,
      83,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,     3,    76,     5,     6,     7,
       8,     9,    -1,    11,    12,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,
       7,     8,     9,    31,    11,    12,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     3,    -1,     5,     6,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    31,    11,    12,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,     3,    -1,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    31,    11,    12,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,    -1,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      31,    11,    12,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    31,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    31,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     3,    -1,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      31,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    31,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    31,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    82,    83,    -1,    85,    86,    87,    88,    89,    90,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    89,
      90,    70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,    -1,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      31,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    31,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    31,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
      70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,    -1,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      31,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    31,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    31,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    85,    86,    87,    88,    89,
      90,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    76,    77,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       4,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   128,   129,   132,   133,   134,   135,   141,   144,   145,
     146,   147,   164,   174,   175,   176,     3,    83,    76,    76,
      76,     3,    76,    86,    99,   130,   131,   148,   149,   150,
     129,   129,     3,    83,   129,   129,   129,     0,   175,    83,
       3,   103,   142,   143,     3,     5,     6,     7,     8,     9,
      11,    12,    31,    70,    72,    76,    85,    86,    87,    88,
      89,    90,   101,   102,   104,   105,   108,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   127,   133,   138,   145,   156,   156,   127,   148,    71,
     145,   150,   151,    78,    99,    83,    98,   128,   129,   167,
     177,    76,    80,   149,    83,   136,   137,   138,   164,   142,
      98,    78,    84,    76,   110,    76,   110,   110,    76,    76,
     110,   123,   124,   126,   156,    10,    11,    12,    76,    80,
      82,   112,    86,    91,    92,    87,    88,    13,    14,    15,
      16,    93,    94,    17,    18,    85,    95,    96,    19,    20,
      97,    77,   138,    76,    80,   150,   157,   158,   138,    77,
      77,    78,    77,   145,   150,   131,   148,     3,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    67,    68,    84,
      99,   126,   128,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    83,   124,   159,   128,   167,     3,    77,   129,
     152,   153,   154,   155,    34,    81,    86,   124,   151,   136,
      84,   137,    79,    99,   139,   140,   148,    78,    84,   127,
      84,   143,   156,   156,   156,   124,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    98,   125,    77,    78,
      77,     3,    77,   109,   124,   126,     3,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     117,   118,   119,   120,   121,   126,    77,   152,   157,    34,
      81,    86,   124,   151,   158,    76,    80,     7,    79,   127,
      79,    76,    76,    76,   165,    76,     3,    99,    99,    99,
     126,    99,    84,   169,    80,    82,   159,   160,   161,   162,
     163,    76,   148,   150,   157,    77,    78,    77,    78,   124,
     151,    81,    81,    34,    81,    86,   124,    84,   127,    78,
      99,    79,    84,    77,    77,    77,    78,   124,   124,    83,
     112,    77,    78,    81,    79,    77,    77,   124,   151,    81,
      81,    34,    81,   124,    77,   152,    34,    81,    86,   124,
     151,    77,   165,    79,   165,   126,   126,   126,    62,   128,
     170,    99,    99,   127,     3,    78,    84,   159,    98,   163,
      56,   154,     3,    81,   124,   124,    81,    81,   140,   127,
      58,   106,   107,   156,   160,   124,   123,    81,   124,   124,
      81,    77,   124,   151,    81,    81,    34,    81,   124,    99,
     165,    77,    77,    77,    76,   170,   170,    81,    84,   159,
     161,    81,    81,    79,    77,    78,    79,    78,    84,    81,
      81,    81,   124,   124,    81,   165,   165,   165,   126,    77,
     126,    77,   126,   159,   124,   107,   124,    84,    81,    81,
      60,    77,   165,    77,   165,    77,   165,    99,   165,   165
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   141,   142,   142,   143,   143,   144,   145,
     145,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   150,   150,   150,   151,   151,   152,
     152,   153,   153,   154,   154,   154,   155,   155,   156,   156,
     157,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   160,   160,   160,
     160,   161,   162,   162,   163,   163,   164,   165,   165,   165,
     165,   165,   165,   166,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   171,   172,   172,   172,
     172,   172,   172,   173,   173,   173,   173,   173,   174,   174,
     175,   175,   176,   176,   177,   177
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     1,     4,
       5,     5,     6,     2,     1,     3,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     1,     2,
       1,     1,     1,     2,     7,     5,     5,     5,     7,     6,
       7,     6,     7,     3,     2,     2,     2,     3,     1,     2,
       1,     1,     4,     3,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 91: /* declaration: declaration_specifiers ';'  */
#line 230 "C_grammar.y"
                {fprintf(pl_file, "declaration([%s])\n", (yyvsp[-1].id));
		 free((yyvsp[-1].id));
		}
#line 2048 "C_grammar.tab.c"
    break;

  case 92: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 234 "C_grammar.y"
          {if (typedef_flag == 1) {	//we were processing typedef declarations
	     typedef_flag = 0;
	   }
	   fprintf(pl_file, "declaration([%s], [%s])\n", (yyvsp[-2].id), (yyvsp[-1].id));
	   free((yyvsp[-2].id));
	   free((yyvsp[-1].id));
	  }
#line 2060 "C_grammar.tab.c"
    break;

  case 93: /* declaration: static_assert_declaration  */
#line 242 "C_grammar.y"
                {fprintf(pl_file, "static_assert_declaration\n");
		}
#line 2067 "C_grammar.tab.c"
    break;

  case 94: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 248 "C_grammar.y"
                {size_t const size = strlen(", ") + strlen((yyvsp[-1].id)) + strlen((yyvsp[0].id)) + 1;
		 (yyval.id) = (char*)malloc(size);
		 sprintf_s((yyval.id), size, "%s, %s", (yyvsp[-1].id), (yyvsp[0].id));
		 free((yyvsp[-1].id));
		 free((yyvsp[0].id));
		}
#line 2078 "C_grammar.tab.c"
    break;

  case 95: /* declaration_specifiers: storage_class_specifier  */
#line 255 "C_grammar.y"
                {size_t const size = strlen((yyvsp[0].id)) + 1;
		 (yyval.id) = (char*)malloc(size);
		 strcpy_s((yyval.id), size, (yyvsp[0].id));
		 free((yyvsp[0].id));
		}
#line 2088 "C_grammar.tab.c"
    break;

  case 96: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 261 "C_grammar.y"
                {size_t const size = strlen(", ") + strlen((yyvsp[-1].id)) + strlen((yyvsp[0].id)) + 1;
		 (yyval.id) = (char*)malloc(size);
		 sprintf_s((yyval.id), size, "%s, %s", (yyvsp[-1].id), (yyvsp[0].id));
		 free((yyvsp[-1].id));
		 free((yyvsp[0].id));
		}
#line 2099 "C_grammar.tab.c"
    break;

  case 97: /* declaration_specifiers: type_specifier  */
#line 268 "C_grammar.y"
                {size_t const size = strlen((yyvsp[0].id)) + 1;
		 (yyval.id) = (char*)malloc(size);
		 strcpy_s((yyval.id), size, (yyvsp[0].id));
		 free((yyvsp[0].id));
		}
#line 2109 "C_grammar.tab.c"
    break;

  case 98: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 274 "C_grammar.y"
{ simple_str_lit_copy(&(yyval.id), "type_qualifier declaration_specifiers"); }
#line 2115 "C_grammar.tab.c"
    break;

  case 99: /* declaration_specifiers: type_qualifier  */
#line 276 "C_grammar.y"
{ simple_str_lit_copy(&(yyval.id), "type_qualifier"); }
#line 2121 "C_grammar.tab.c"
    break;

  case 100: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 278 "C_grammar.y"
{ simple_str_lit_copy(&(yyval.id), "function_specifier declaration_specifiers"); }
#line 2127 "C_grammar.tab.c"
    break;

  case 101: /* declaration_specifiers: function_specifier  */
#line 280 "C_grammar.y"
{ simple_str_lit_copy(&(yyval.id), "function_specifier"); }
#line 2133 "C_grammar.tab.c"
    break;

  case 102: /* declaration_specifiers: alignment_specifier declaration_specifiers  */
#line 282 "C_grammar.y"
{ simple_str_lit_copy(&(yyval.id), "alignment_specifier declaration_specifiers"); }
#line 2139 "C_grammar.tab.c"
    break;

  case 103: /* declaration_specifiers: alignment_specifier  */
#line 284 "C_grammar.y"
{ simple_str_lit_copy(&(yyval.id), "alignment_specifier"); }
#line 2145 "C_grammar.tab.c"
    break;

  case 104: /* init_declarator_list: init_declarator  */
#line 289 "C_grammar.y"
                {size_t const size = strlen((yyvsp[0].id)) + 1;
		 (yyval.id) = (char*)malloc(size);
	     strcpy_s((yyval.id), size, (yyvsp[0].id));
         free((yyvsp[0].id));
		}
#line 2155 "C_grammar.tab.c"
    break;

  case 105: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 295 "C_grammar.y"
                {size_t const size = strlen(", ") + strlen((yyvsp[-2].id)) + strlen((yyvsp[0].id)) + 1;
	     (yyval.id) = (char*)malloc(size);
		 sprintf_s((yyval.id), size, "%s, %s", (yyvsp[-2].id), (yyvsp[0].id));
	     free((yyvsp[-2].id));
	     free((yyvsp[0].id));
		}
#line 2166 "C_grammar.tab.c"
    break;

  case 106: /* init_declarator: declarator '=' initializer  */
#line 305 "C_grammar.y"
          {size_t const size = strlen("initialised(, )") + strlen((yyvsp[-2].id)) + strlen((yyvsp[0].id)) + 1;
	   (yyval.id) = (char*)malloc(size);
	   sprintf_s((yyval.id), size, "initialised(%s, %s)", (yyvsp[-2].id), (yyvsp[0].id));
	   free((yyvsp[-2].id));
	   //free($3);
	  }
#line 2177 "C_grammar.tab.c"
    break;

  case 107: /* init_declarator: declarator  */
#line 312 "C_grammar.y"
          {if (typedef_flag == 1) {// we are parsing one typedef declaration
		 add_typedef_name((yyvsp[0].id));
	   }
	   size_t const size = strlen((yyvsp[0].id)) + 1;
	   (yyval.id) = (char*)malloc(size);
	   strcpy_s((yyval.id), size, (yyvsp[0].id));
	   free((yyvsp[0].id));
	  }
#line 2190 "C_grammar.tab.c"
    break;

  case 108: /* storage_class_specifier: TYPEDEF  */
#line 324 "C_grammar.y"
                {simple_str_lit_copy(&(yyval.id), "typedef");
         typedef_flag = 1;
	    }
#line 2198 "C_grammar.tab.c"
    break;

  case 109: /* storage_class_specifier: EXTERN  */
#line 327 "C_grammar.y"
        { simple_str_lit_copy(&(yyval.id), "extern"); }
#line 2204 "C_grammar.tab.c"
    break;

  case 110: /* storage_class_specifier: STATIC  */
#line 328 "C_grammar.y"
        { simple_str_lit_copy(&(yyval.id), "static"); }
#line 2210 "C_grammar.tab.c"
    break;

  case 111: /* storage_class_specifier: THREAD_LOCAL  */
#line 329 "C_grammar.y"
              { simple_str_lit_copy(&(yyval.id), "thread_local"); }
#line 2216 "C_grammar.tab.c"
    break;

  case 112: /* storage_class_specifier: AUTO  */
#line 330 "C_grammar.y"
      { simple_str_lit_copy(&(yyval.id), "auto"); }
#line 2222 "C_grammar.tab.c"
    break;

  case 113: /* storage_class_specifier: REGISTER  */
#line 331 "C_grammar.y"
          { simple_str_lit_copy(&(yyval.id), "register"); }
#line 2228 "C_grammar.tab.c"
    break;

  case 114: /* type_specifier: VOID  */
#line 335 "C_grammar.y"
              { simple_str_lit_copy(&(yyval.id), "void"); }
#line 2234 "C_grammar.tab.c"
    break;

  case 115: /* type_specifier: CHAR  */
#line 337 "C_grammar.y"
{ simple_str_lit_copy(&(yyval.id), "char"); }
#line 2240 "C_grammar.tab.c"
    break;

  case 116: /* type_specifier: SHORT  */
#line 338 "C_grammar.y"
       { simple_str_lit_copy(&(yyval.id), "short"); }
#line 2246 "C_grammar.tab.c"
    break;

  case 117: /* type_specifier: INT  */
#line 340 "C_grammar.y"
 { simple_str_lit_copy(&(yyval.id), "int"); }
#line 2252 "C_grammar.tab.c"
    break;

  case 118: /* type_specifier: LONG  */
#line 341 "C_grammar.y"
      { simple_str_lit_copy(&(yyval.id), "long"); }
#line 2258 "C_grammar.tab.c"
    break;

  case 119: /* type_specifier: FLOAT  */
#line 342 "C_grammar.y"
       { simple_str_lit_copy(&(yyval.id), "float"); }
#line 2264 "C_grammar.tab.c"
    break;

  case 120: /* type_specifier: DOUBLE  */
#line 343 "C_grammar.y"
        { simple_str_lit_copy(&(yyval.id), "double"); }
#line 2270 "C_grammar.tab.c"
    break;

  case 121: /* type_specifier: SIGNED  */
#line 344 "C_grammar.y"
        { simple_str_lit_copy(&(yyval.id), "signed"); }
#line 2276 "C_grammar.tab.c"
    break;

  case 122: /* type_specifier: UNSIGNED  */
#line 345 "C_grammar.y"
          { simple_str_lit_copy(&(yyval.id), "unsigned"); }
#line 2282 "C_grammar.tab.c"
    break;

  case 123: /* type_specifier: BOOL  */
#line 346 "C_grammar.y"
      { simple_str_lit_copy(&(yyval.id), "bool"); }
#line 2288 "C_grammar.tab.c"
    break;

  case 124: /* type_specifier: COMPLEX  */
#line 347 "C_grammar.y"
         { simple_str_lit_copy(&(yyval.id), "complex"); }
#line 2294 "C_grammar.tab.c"
    break;

  case 125: /* type_specifier: IMAGINARY  */
#line 348 "C_grammar.y"
           { simple_str_lit_copy(&(yyval.id), "imaginary"); }
#line 2300 "C_grammar.tab.c"
    break;

  case 126: /* type_specifier: atomic_type_specifier  */
#line 349 "C_grammar.y"
                       { simple_str_lit_copy(&(yyval.id), "atomic_type_specifier"); }
#line 2306 "C_grammar.tab.c"
    break;

  case 127: /* type_specifier: struct_or_union_specifier  */
#line 350 "C_grammar.y"
                           { simple_str_lit_copy(&(yyval.id), "struct_or_union_specifier"); }
#line 2312 "C_grammar.tab.c"
    break;

  case 128: /* type_specifier: enum_specifier  */
#line 351 "C_grammar.y"
                { simple_str_lit_copy(&(yyval.id), "enum_specifier"); }
#line 2318 "C_grammar.tab.c"
    break;

  case 129: /* type_specifier: TYPEDEF_NAME  */
#line 353 "C_grammar.y"
                {size_t const size = strlen((yyvsp[0].id)) + 1;
		 (yyval.id) = (char*)malloc(size);
		 strcpy_s((yyval.id), size, (yyvsp[0].id));
		 free((yyvsp[0].id));
		}
#line 2328 "C_grammar.tab.c"
    break;

  case 159: /* type_qualifier: CONST  */
#line 424 "C_grammar.y"
                {simple_str_lit_copy(&(yyval.id), "const");
		}
#line 2335 "C_grammar.tab.c"
    break;

  case 160: /* type_qualifier: RESTRICT  */
#line 427 "C_grammar.y"
                {simple_str_lit_copy(&(yyval.id), "restrict");
		}
#line 2342 "C_grammar.tab.c"
    break;

  case 161: /* type_qualifier: VOLATILE  */
#line 430 "C_grammar.y"
                {simple_str_lit_copy(&(yyval.id), "volatile");
		}
#line 2349 "C_grammar.tab.c"
    break;

  case 162: /* type_qualifier: ATOMIC  */
#line 433 "C_grammar.y"
                { simple_str_lit_copy(&(yyval.id), "atomic");
		}
#line 2356 "C_grammar.tab.c"
    break;

  case 167: /* declarator: pointer direct_declarator  */
#line 449 "C_grammar.y"
          {size_t const size = strlen("()") + strlen((yyvsp[-1].id)) + strlen((yyvsp[0].id)) + 1;
       (yyval.id) = (char*)malloc(size);
       sprintf_s((yyval.id), size, "%s(%s)", (yyvsp[-1].id), (yyvsp[0].id));
	   free((yyvsp[-1].id));
	   free((yyvsp[0].id));
      }
#line 2367 "C_grammar.tab.c"
    break;

  case 168: /* declarator: direct_declarator  */
#line 456 "C_grammar.y"
          {size_t const size = strlen((yyvsp[0].id)) + 1;
       (yyval.id) = (char*)malloc(size);
       strcpy_s((yyval.id), size, (yyvsp[0].id));
       free((yyvsp[0].id));
      }
#line 2377 "C_grammar.tab.c"
    break;

  case 169: /* direct_declarator: IDENTIFIER  */
#line 465 "C_grammar.y"
                {size_t const size = strlen((yyvsp[0].id)) + 1;
	     (yyval.id) = (char*)malloc(size);
		 strcpy_s((yyval.id), size, (yyvsp[0].id));
	     free((yyvsp[0].id));
		}
#line 2387 "C_grammar.tab.c"
    break;

  case 170: /* direct_declarator: '(' declarator ')'  */
#line 470 "C_grammar.y"
                                                {simple_str_lit_copy(&(yyval.id), "D1");}
#line 2393 "C_grammar.tab.c"
    break;

  case 171: /* direct_declarator: direct_declarator '[' ']'  */
#line 471 "C_grammar.y"
                                                {simple_str_lit_copy(&(yyval.id), "D2"); }
#line 2399 "C_grammar.tab.c"
    break;

  case 172: /* direct_declarator: direct_declarator '[' '*' ']'  */
#line 472 "C_grammar.y"
                                        {simple_str_lit_copy(&(yyval.id), "D3"); }
#line 2405 "C_grammar.tab.c"
    break;

  case 173: /* direct_declarator: direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'  */
#line 473 "C_grammar.y"
                                                                                     {simple_str_lit_copy(&(yyval.id), "D4"); }
#line 2411 "C_grammar.tab.c"
    break;

  case 174: /* direct_declarator: direct_declarator '[' STATIC assignment_expression ']'  */
#line 474 "C_grammar.y"
                                                                {simple_str_lit_copy(&(yyval.id), "D5"); }
#line 2417 "C_grammar.tab.c"
    break;

  case 175: /* direct_declarator: direct_declarator '[' type_qualifier_list '*' ']'  */
#line 475 "C_grammar.y"
                                                           {simple_str_lit_copy(&(yyval.id), "D6"); }
#line 2423 "C_grammar.tab.c"
    break;

  case 176: /* direct_declarator: direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'  */
#line 476 "C_grammar.y"
                                                                                    {simple_str_lit_copy(&(yyval.id), "D7"); }
#line 2429 "C_grammar.tab.c"
    break;

  case 177: /* direct_declarator: direct_declarator '[' type_qualifier_list assignment_expression ']'  */
#line 477 "C_grammar.y"
                                                                             {simple_str_lit_copy(&(yyval.id), "D8"); }
#line 2435 "C_grammar.tab.c"
    break;

  case 178: /* direct_declarator: direct_declarator '[' type_qualifier_list ']'  */
#line 478 "C_grammar.y"
                                                       {simple_str_lit_copy(&(yyval.id), "D9"); }
#line 2441 "C_grammar.tab.c"
    break;

  case 179: /* direct_declarator: direct_declarator '[' assignment_expression ']'  */
#line 479 "C_grammar.y"
                                                         {simple_str_lit_copy(&(yyval.id), "D10"); }
#line 2447 "C_grammar.tab.c"
    break;

  case 180: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 480 "C_grammar.y"
                                                       {simple_str_lit_copy(&(yyval.id), "D11"); }
#line 2453 "C_grammar.tab.c"
    break;

  case 181: /* direct_declarator: direct_declarator '(' ')'  */
#line 481 "C_grammar.y"
                                   {simple_str_lit_copy(&(yyval.id), "D12"); }
#line 2459 "C_grammar.tab.c"
    break;

  case 182: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 482 "C_grammar.y"
                                                   {simple_str_lit_copy(&(yyval.id), "D13"); }
#line 2465 "C_grammar.tab.c"
    break;

  case 183: /* pointer: '*' type_qualifier_list pointer  */
#line 487 "C_grammar.y"
                {size_t const size = strlen("pointer???(, )") + strlen((yyvsp[-1].id)) + strlen((yyvsp[0].id)) + 1;
	     (yyval.id) = (char*)malloc(size);
	     sprintf_s((yyval.id), size, "pointer???(%s, %s)", (yyvsp[-1].id), (yyvsp[0].id));
		 free((yyvsp[-1].id));
		 free((yyvsp[0].id));
		}
#line 2476 "C_grammar.tab.c"
    break;

  case 184: /* pointer: '*' type_qualifier_list  */
#line 494 "C_grammar.y"
                {size_t const size = strlen("pointer()") + strlen((yyvsp[0].id)) + 1;
	     (yyval.id) = (char*)malloc(size);
	     sprintf_s((yyval.id), size, "pointer(%s)", (yyvsp[0].id));
	     free((yyvsp[0].id));
		}
#line 2486 "C_grammar.tab.c"
    break;

  case 185: /* pointer: '*' pointer  */
#line 500 "C_grammar.y"
                {size_t const size = strlen("pointer()") + strlen((yyvsp[0].id)) + 1;
		 (yyval.id) = (char*)malloc(size);
		 sprintf_s((yyval.id), size, "pointer(%s)", (yyvsp[0].id));
		 free((yyvsp[0].id));
		}
#line 2496 "C_grammar.tab.c"
    break;

  case 186: /* pointer: '*'  */
#line 506 "C_grammar.y"
                {simple_str_lit_copy(&(yyval.id), "pointer"); 
		}
#line 2503 "C_grammar.tab.c"
    break;

  case 187: /* type_qualifier_list: type_qualifier  */
#line 512 "C_grammar.y"
                {size_t const size = strlen((yyvsp[0].id)) + 1;
		 (yyval.id) = (char*)malloc(size);
		 strcpy_s((yyval.id), size, (yyvsp[0].id));
		 free((yyvsp[0].id));
		}
#line 2513 "C_grammar.tab.c"
    break;

  case 188: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 518 "C_grammar.y"
                {size_t const size = strlen(", ") + strlen((yyvsp[-1].id)) + strlen((yyvsp[0].id)) + 1;
	     (yyval.id) = (char*)malloc(size);
	     sprintf_s((yyval.id), size, "%s, %s", (yyvsp[-1].id), (yyvsp[0].id));
	     free((yyvsp[-1].id));
		 free((yyvsp[0].id));
		}
#line 2524 "C_grammar.tab.c"
    break;


#line 2528 "C_grammar.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 691 "C_grammar.y"

int main(int argc, char *argv[]) {			//argc is the total number of strings in the argv array
	char C_file_path[_MAX_PATH];				//directory where the C and .i files are
	char filename_no_ext[_MAX_PATH];
	char i_file_uri[_MAX_PATH];
	FILE *i_file;

	strcpy_s(C_file_path, 3, ".\\");				//default path for input file is current directory, overwrite with -p on command line
	for (int i = 1; i <= argc - 1; i++) {	//processing command line arguments
		if (argv[i][0] == '-') {
			switch (argv[i][1]) {
			case 'h':
				printf("Usage: .\\sikraken_parser [OPTION]... [FILE]\nParse a C file to Prolog terms.\n\n-h\t Display help information\n-p\t Path to the .c/.i file (DEFAULT: Current Directory ('.'))\n\nExamples:\n\t.\\LilyParser -p\".\" get_sign \n\t.\\LilyParser get_sign \n\t.\\LilyParser -p\"C:/Parser/\" sign \n");
				exit(0);
			case 'p':	//path to the .i pre-processed input C file
				if (_access(&argv[i][2], 0) == -1) {    //checks if it is a valid directory
					fprintf(stderr, "Sikraken parser error: the indicated source path (via -p switch): %s , cannot be accessed\n", &argv[i][2]);
					exit(1);
				}
				strcpy_s(C_file_path, _MAX_PATH, &argv[i][2]);
				break;
			case 'd':
				debugMode = 1;	//we are in debug mode : will affect output of warnings amongst other things
				break;
			default:
				fprintf(stderr, "Sikraken parser: Unsupported flag '-%s', ignoring.\n", argv[i]);
			}
		}
		else {	//must be the filename to analyse
			argv[i][strlen(argv[i]) - 2] = '\0';	//cut the out ".c"
			strcpy_s(filename_no_ext, _MAX_PATH, argv[i]);
		}
	}
	sprintf_s(i_file_uri, _MAX_PATH, "%s%s.i", C_file_path, filename_no_ext);
	if (fopen_s(&i_file, i_file_uri, "r") != 0) {
		fprintf(stderr, ".i file could opened to read at: %s\n", i_file_uri);
		exit(EXIT_FAILURE);
	}
	yyin = i_file;	//set the input to the parser
	sprintf_s(pl_file_uri, _MAX_PATH, "%s%s.pl", C_file_path, filename_no_ext);
	if (fopen_s(&pl_file, pl_file_uri, "w") != 0) {
		fprintf(stderr, ".pl file could created for write at: %s\n", pl_file_uri);
		exit(EXIT_FAILURE);
	}
	if (yyparse() != 0) {
		fprintf(stderr, "Parsing failed.\n");
		exit(EXIT_FAILURE);
	}
	fclose(pl_file);
	fclose(i_file);
	my_exit(EXIT_SUCCESS);
}


//handles parsing errors: since the C input file is the output of a C pre-processor it is unlikely to be every called
//in fact it is only useful if the syntax rules are wrong or if .i file has been generated manually: i.e. during development
void yyerror(const char* s) {
	fprintf(stderr, "Internal parsing error, yyerror called on line %d with message \"%s\" on token %d\n", yylineno, s, yychar);
}

void my_exit(int exit_code) {			//exits and performs some tidying up if not in debug mode
  if (!debugMode) {
    if (yyin) fclose(yyin);
    if (pl_file) fclose(pl_file);
    if (_access(pl_file_uri, 0) != -1) remove(pl_file_uri);
  }
  if (exit_code == EXIT_SUCCESS) fprintf(stderr, "Sikraken parsing success, wrote %s", pl_file_uri);
  exit(exit_code);
}
