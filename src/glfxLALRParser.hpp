/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_GLFX_SRC_GLFXLALRPARSER_HPP_INCLUDED
# define YY_GLFX_SRC_GLFXLALRPARSER_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int glfxdebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     UNIFORM = 258,
     SHADER = 259,
     PROGRAM = 260,
     INTERFACE = 261,
     IDENTIFIER = 262,
     STORAGEQ = 263,
     GL_FRAGDEPTH = 264,
     SHADER_COMMAND = 265,
     SET_RASTERIZER_COMMAND = 266,
     SET_DEPTH_COMMAND = 267,
     SET_BLEND_COMMAND = 268,
     LP = 269,
     RP = 270,
     LB = 271,
     RB = 272,
     LESS_THAN = 273,
     GRTR_THAN = 274,
     SC = 275,
     COMMA = 276,
     COLON = 277,
     INPUT_SEMANTIC = 278,
     EQUALS = 279,
     NUM = 280,
     INCLUDE = 281,
     SAMPLER = 282,
     FLOAT = 283,
     LEFT_SQ = 284,
     RIGHT_SQ = 285,
     LAYOUT = 286,
     LINE = 287,
     TECHNIQUE = 288,
     PASS = 289,
     GROUP = 290,
     RENDER_STATE_DECL = 291,
     QUOTED_STRING = 292,
     SHADER_LINE = 293,
     SHADER_TYPE = 294,
     COMPILE_SHADER = 295,
     STRUCT = 296,
     DEFINE = 297,
     MACRO_DEFINITION = 298,
     EOL = 299,
     DECL_SHADER = 300,
     PROFILE = 301,
     CS_LAYOUT = 302,
     RW_TEXTURE3D_FLOAT4 = 303,
     TEXTURE2DMS = 304
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE glfxlval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int glfxparse (void *YYPARSE_PARAM);
#else
int glfxparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int glfxparse (void);
#else
int glfxparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_GLFX_SRC_GLFXLALRPARSER_HPP_INCLUDED  */
