
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define YYLSP_NEEDED

#define	T_Void	258
#define	T_Bool	259
#define	T_Int	260
#define	T_Double	261
#define	T_String	262
#define	T_Class	263
#define	T_LessEqual	264
#define	T_GreaterEqual	265
#define	T_Equal	266
#define	T_NotEqual	267
#define	T_And	268
#define	T_Or	269
#define	T_Null	270
#define	T_Extends	271
#define	T_This	272
#define	T_While	273
#define	T_For	274
#define	T_If	275
#define	T_Else	276
#define	T_Return	277
#define	T_Break	278
#define	T_Identifier	279
#define	T_StringConstant	280
#define	T_IntConstant	281
#define	T_DoubleConstant	282
#define	T_BoolConstant	283
#define	T_New	284
#define	T_NewArray	285
#define	T_Print	286
#define	T_ReadInteger	287
#define	T_ReadLine	288
#define	LOWER_THEN_ELSE	289

#line 1 "parser.y"


#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <process.h>    
#include "scanner.h"


#line 35 "parser.y"
typedef union 
{       
  int integerConstant;
  int boolConstant;
  const char *stringConstant;
  double doubleConstant;
  char identifier[128];
} YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		164
#define	YYFLAG		-32768
#define	YYNTBASE	54

#define YYTRANSLATE(x) ((unsigned)(x) <= 289 ? yytranslate[x] : 86)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    53,     2,     2,     2,    39,     2,     2,    44,
    45,    37,    35,    52,    36,    43,    38,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,    51,    41,
    34,    42,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    48,     2,    49,    50,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    46,     2,    47,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    40
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     5,     6,     8,    10,    12,    14,    17,    21,
    23,    26,    28,    30,    32,    34,    36,    39,    43,    50,
    57,    59,    60,    67,    70,    71,    74,    75,    77,    79,
    81,    85,    88,    89,    91,    94,    96,    98,   100,   103,
   106,   108,   112,   114,   115,   118,   123,   126,   127,   133,
   135,   136,   140,   142,   152,   158,   165,   168,   169,   171,
   174,   179,   181,   183,   185,   187,   189,   193,   197,   201,
   205,   209,   213,   216,   220,   224,   228,   232,   236,   240,
   244,   248,   251,   255,   259,   264,   271,   273,   275,   277,
   279
};

static const short yyrhs[] = {    55,
     0,    55,    56,     0,     0,    57,     0,    64,     0,    62,
     0,    61,     0,    59,    51,     0,    58,    52,    59,     0,
    59,     0,    60,    24,     0,     5,     0,     6,     0,     4,
     0,     7,     0,     3,     0,     8,    24,     0,    60,    48,
    49,     0,    60,    24,    44,    63,    45,    51,     0,    60,
    24,    44,    63,    45,    68,     0,    58,     0,     0,     8,
    24,    65,    46,    66,    47,     0,    16,    24,     0,     0,
    66,    67,     0,     0,    57,     0,    61,     0,    62,     0,
    46,    69,    47,     0,    69,    70,     0,     0,    57,     0,
    71,    51,     0,    79,     0,    78,     0,    77,     0,    81,
    51,     0,    82,    51,     0,    68,     0,    72,    34,    84,
     0,    84,     0,     0,    73,    24,     0,    84,    48,    84,
    49,     0,    84,    43,     0,     0,    73,    24,    44,    75,
    45,     0,    76,     0,     0,    76,    52,    84,     0,    84,
     0,    19,    44,    71,    51,    83,    51,    71,    45,    70,
     0,    18,    44,    83,    45,    70,     0,    20,    44,    83,
    45,    70,    80,     0,    21,    70,     0,     0,    22,     0,
    22,    84,     0,    31,    44,    76,    45,     0,    84,     0,
    85,     0,    72,     0,    17,     0,    74,     0,    44,    84,
    45,     0,    84,    35,    84,     0,    84,    36,    84,     0,
    84,    37,    84,     0,    84,    38,    84,     0,    84,    39,
    84,     0,    36,    84,     0,    84,    41,    84,     0,    84,
     9,    84,     0,    84,    42,    84,     0,    84,    10,    84,
     0,    84,    11,    84,     0,    84,    12,    84,     0,    84,
    13,    84,     0,    84,    14,    84,     0,    53,    84,     0,
    32,    44,    45,     0,    33,    44,    45,     0,    29,    44,
    24,    45,     0,    30,    44,    84,    52,    60,    45,     0,
    26,     0,    27,     0,    28,     0,    25,     0,    15,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    47,    50,    52,    55,    57,    59,    61,    64,    67,    69,
    72,    75,    77,    79,    81,    83,    85,    87,    90,    93,
    96,    98,   101,   104,   106,   109,   111,   114,   116,   118,
   121,   124,   126,   129,   131,   133,   135,   137,   139,   141,
   143,   146,   148,   150,   153,   155,   159,   161,   165,   168,
   170,   173,   175,   179,   182,   185,   188,   190,   193,   195,
   198,   201,   204,   206,   208,   210,   212,   214,   216,   218,
   220,   222,   224,   226,   228,   230,   232,   234,   236,   238,
   240,   242,   244,   246,   248,   250,   253,   255,   257,   259,
   261
};

static const char * const yytname[] = {   "$","error","$undefined.","T_Void",
"T_Bool","T_Int","T_Double","T_String","T_Class","T_LessEqual","T_GreaterEqual",
"T_Equal","T_NotEqual","T_And","T_Or","T_Null","T_Extends","T_This","T_While",
"T_For","T_If","T_Else","T_Return","T_Break","T_Identifier","T_StringConstant",
"T_IntConstant","T_DoubleConstant","T_BoolConstant","T_New","T_NewArray","T_Print",
"T_ReadInteger","T_ReadLine","'='","'+'","'-'","'*'","'/'","'%'","LOWER_THEN_ELSE",
"'<'","'>'","'.'","'('","')'","'{'","'}'","'['","']'","'^'","';'","','","'!'",
"Program","DeclList","Decl","VariableDecl","VariableList","Variable","Type",
"FunctionDecl","FunctionDefn","Formals","ClassDefn","OptExtends","Fieldlist",
"Field","StmtBlock","Stmtlist","Stmt","SimpleStmt","LValue","OptReceiver","Call",
"Actuals","ExprList","ForStmt","WhileStmt","IfStmt","OptElse","ReturnStmt","PrintStmt",
"BoolExpr","Expr","Constant",""
};
#endif

static const short yyr1[] = {     0,
    54,    55,    55,    56,    56,    56,    56,    57,    58,    58,
    59,    60,    60,    60,    60,    60,    60,    60,    61,    62,
    63,    63,    64,    65,    65,    66,    66,    67,    67,    67,
    68,    69,    69,    70,    70,    70,    70,    70,    70,    70,
    70,    71,    71,    71,    72,    72,    73,    73,    74,    75,
    75,    76,    76,    77,    78,    79,    80,    80,    81,    81,
    82,    83,    84,    84,    84,    84,    84,    84,    84,    84,
    84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
    84,    84,    84,    84,    84,    84,    85,    85,    85,    85,
    85
};

static const short yyr2[] = {     0,
     1,     2,     0,     1,     1,     1,     1,     2,     3,     1,
     2,     1,     1,     1,     1,     1,     2,     3,     6,     6,
     1,     0,     6,     2,     0,     2,     0,     1,     1,     1,
     3,     2,     0,     1,     2,     1,     1,     1,     2,     2,
     1,     3,     1,     0,     2,     4,     2,     0,     5,     1,
     0,     3,     1,     9,     5,     6,     2,     0,     1,     2,
     4,     1,     1,     1,     1,     1,     3,     3,     3,     3,
     3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
     3,     2,     3,     3,     4,     6,     1,     1,     1,     1,
     1
};

static const short yydefact[] = {     3,
     1,    16,    14,    12,    13,    15,     0,     2,     4,     0,
     0,     7,     6,     5,    17,     8,    11,     0,     0,     0,
    22,    18,    24,    27,     0,    21,    10,     0,     0,     0,
    17,     0,    11,     0,    23,    28,    29,    30,    26,     9,
    33,    19,    20,    44,    91,    65,     0,     0,     0,    48,
    90,    87,    88,    89,     0,     0,     0,     0,     0,    48,
    48,    31,    48,    34,    41,    32,     0,    64,     0,    66,
    38,    37,    36,     0,     0,    43,    63,    48,    44,    48,
    64,    60,     0,    48,    48,     0,     0,    73,     0,    82,
    35,    48,    45,    39,    40,    48,    48,    48,    48,    48,
    48,    48,    48,    48,    48,    48,    48,    48,    47,    48,
     0,    62,     0,     0,     0,     0,     0,    53,    83,    84,
    67,    42,    48,    75,    77,    78,    79,    80,    81,    68,
    69,    70,    71,    72,    74,    76,     0,    44,    48,    44,
    85,     0,    61,    48,     0,    50,    46,    55,     0,    58,
     0,    52,    49,    44,    44,    56,    86,     0,    57,    44,
    54,     0,     0,     0
};

static const short yydefgoto[] = {   162,
     1,     8,    64,    26,    10,    28,    12,    13,    29,    14,
    20,    30,    39,    65,    44,    66,    67,    81,    69,    70,
   145,   117,    71,    72,    73,   156,    74,    75,   111,    76,
    77
};

static const short yypact[] = {-32768,
    81,-32768,-32768,-32768,-32768,-32768,   -12,-32768,-32768,   -38,
   -15,-32768,-32768,-32768,   -11,-32768,   -18,   -22,     4,    -9,
   158,-32768,-32768,-32768,    24,    -3,-32768,    23,    35,    16,
-32768,   158,-32768,   -35,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   101,-32768,-32768,    32,    37,    48,   275,
-32768,-32768,-32768,-32768,    52,    59,    66,    69,    70,   349,
   349,-32768,   349,-32768,-32768,-32768,    39,    88,    91,-32768,
-32768,-32768,-32768,    73,    84,   237,-32768,   349,   305,   349,
-32768,   237,   112,   349,   349,    93,    94,   245,   197,   237,
-32768,   349,    96,-32768,-32768,   349,   349,   349,   349,   349,
   349,   349,   349,   349,   349,   349,   349,   349,-32768,   349,
    97,   237,    92,    99,   104,    31,    30,   237,-32768,-32768,
-32768,   237,   327,-32768,-32768,-32768,-32768,    90,    90,   245,
   245,   245,   245,   245,   251,   251,   180,   152,   349,   152,
-32768,   158,-32768,   349,   105,   100,-32768,-32768,    95,   130,
    46,   237,-32768,   305,   152,-32768,-32768,   108,-32768,   152,
-32768,   168,   173,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,     1,-32768,   -14,    -1,   145,   156,-32768,-32768,
-32768,-32768,-32768,   153,-32768,  -130,   -76,   -43,-32768,-32768,
-32768,    72,-32768,-32768,-32768,-32768,-32768,-32768,   -74,   -46,
-32768
};


#define	YYLAST		402


static const short yytable[] = {    11,
    68,     9,   113,    82,    19,   114,    27,   148,    17,   150,
    41,    15,    16,    88,    89,    42,    90,    40,     2,     3,
     4,     5,     6,    25,   159,    21,    22,    23,    11,   161,
    36,   112,    18,   112,   -25,    68,    24,   116,   118,    96,
    97,    98,    99,   100,   101,   122,    33,    31,    32,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,    35,   137,   149,   102,   103,   104,   105,   106,
    18,   107,   108,   109,   143,    78,   118,   158,   110,    34,
    79,   144,   142,     2,     3,     4,     5,     6,     7,    91,
   157,    80,   112,    18,    68,    83,    68,   152,    96,    97,
    98,    99,    84,     2,     3,     4,     5,     6,    25,    85,
    68,    68,    86,    87,    93,    45,    68,    46,    47,    48,
    49,    92,    50,    94,   -48,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    95,   115,    60,   119,   120,   123,
   151,   138,   139,   140,    61,   154,    41,    62,   141,   153,
   155,   144,   160,    63,     2,     3,     4,     5,     6,    25,
     2,     3,     4,     5,     6,    25,    45,   163,    46,    47,
    48,    49,   164,    50,    37,   -48,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    38,    43,    60,    96,    97,
    98,    99,   100,   101,   146,    61,     0,    41,     0,     0,
     0,     0,     0,     0,    63,    96,    97,    98,    99,   100,
   101,     0,     0,     0,   102,   103,   104,   105,   106,     0,
   107,   108,   109,     0,     0,     0,     0,   110,   147,     0,
     0,   102,   103,   104,   105,   106,     0,   107,   108,   109,
     0,   121,     0,     0,   110,    96,    97,    98,    99,   100,
   101,     0,     0,    96,    97,    98,    99,   100,   101,    96,
    97,    98,    99,   100,   101,     0,     0,     0,     0,     0,
     0,   102,   103,   104,   105,   106,     0,   107,   108,   109,
     0,     0,     0,     0,   110,   107,   108,   109,     0,    45,
     0,    46,   110,   109,     0,     0,     0,     0,   110,    51,
    52,    53,    54,    55,    56,     0,    58,    59,     0,     0,
    60,     0,     0,     0,     0,     0,     0,     0,    61,    45,
     0,    46,     0,     0,     0,   -59,     0,    63,   -48,    51,
    52,    53,    54,    55,    56,     0,    58,    59,     0,     0,
    60,    45,     0,    46,     0,     0,     0,     0,    61,     0,
     0,    51,    52,    53,    54,    55,    56,    63,    58,    59,
     0,     0,    60,    45,     0,    46,     0,     0,     0,     0,
    61,   -51,     0,    51,    52,    53,    54,    55,    56,    63,
    58,    59,     0,     0,    60,     0,     0,     0,     0,     0,
     0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
     0,    63
};

static const short yycheck[] = {     1,
    44,     1,    79,    50,    16,    80,    21,   138,    24,   140,
    46,    24,    51,    60,    61,    51,    63,    32,     3,     4,
     5,     6,     7,     8,   155,    44,    49,    24,    30,   160,
    30,    78,    48,    80,    46,    79,    46,    84,    85,     9,
    10,    11,    12,    13,    14,    92,    24,    24,    52,    96,
    97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
   107,   108,    47,   110,   139,    35,    36,    37,    38,    39,
    48,    41,    42,    43,    45,    44,   123,   154,    48,    45,
    44,    52,    52,     3,     4,     5,     6,     7,     8,    51,
    45,    44,   139,    48,   138,    44,   140,   144,     9,    10,
    11,    12,    44,     3,     4,     5,     6,     7,     8,    44,
   154,   155,    44,    44,    24,    15,   160,    17,    18,    19,
    20,    34,    22,    51,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    51,    24,    36,    45,    45,    44,
   142,    45,    51,    45,    44,    51,    46,    47,    45,    45,
    21,    52,    45,    53,     3,     4,     5,     6,     7,     8,
     3,     4,     5,     6,     7,     8,    15,     0,    17,    18,
    19,    20,     0,    22,    30,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    30,    34,    36,     9,    10,
    11,    12,    13,    14,   123,    44,    -1,    46,    -1,    -1,
    -1,    -1,    -1,    -1,    53,     9,    10,    11,    12,    13,
    14,    -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,
    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,
    -1,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
    -1,    45,    -1,    -1,    48,     9,    10,    11,    12,    13,
    14,    -1,    -1,     9,    10,    11,    12,    13,    14,     9,
    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
    -1,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
    -1,    -1,    -1,    -1,    48,    41,    42,    43,    -1,    15,
    -1,    17,    48,    43,    -1,    -1,    -1,    -1,    48,    25,
    26,    27,    28,    29,    30,    -1,    32,    33,    -1,    -1,
    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    15,
    -1,    17,    -1,    -1,    -1,    51,    -1,    53,    24,    25,
    26,    27,    28,    29,    30,    -1,    32,    33,    -1,    -1,
    36,    15,    -1,    17,    -1,    -1,    -1,    -1,    44,    -1,
    -1,    25,    26,    27,    28,    29,    30,    53,    32,    33,
    -1,    -1,    36,    15,    -1,    17,    -1,    -1,    -1,    -1,
    44,    45,    -1,    25,    26,    27,    28,    29,    30,    53,
    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    53
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Bob Corbett and Richard Stallman

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */


#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc)
#include <alloca.h>
#else /* not sparc */
#if (defined (MSDOS) || defined(WIN32)) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#define YYLEX		yylex(&yylval, &yylloc)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_bcopy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_bcopy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_bcopy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif


#line 169 "bison.simple"
int
yyparse()
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
#ifdef YYLSP_NEEDED
		 &yyls1, size * sizeof (*yylsp),
#endif
		 &yystacksize);

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_bcopy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_bcopy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_bcopy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 48 "parser.y"
{ printf("Program -> DeclList\n"); yylsp[0] ;
    break;}
case 2:
#line 51 "parser.y"
{ printf("DeclList -> DeclList Decl\n");;
    break;}
case 3:
#line 53 "parser.y"
{ printf("DeclList ->\n");;
    break;}
case 4:
#line 56 "parser.y"
{ printf("Decl -> VaruableDecl\n");;
    break;}
case 5:
#line 58 "parser.y"
{ printf("Decl -> ClassDefn\n");;
    break;}
case 6:
#line 60 "parser.y"
{ printf("Decl -> FunctionDefn\n");;
    break;}
case 7:
#line 62 "parser.y"
{ printf("Decl -> FunctionDecl\n");;
    break;}
case 8:
#line 65 "parser.y"
{ printf("VariableDecl -> Variable\n");;
    break;}
case 9:
#line 68 "parser.y"
{ printf("VariableList -> VariableList , Variable\n");;
    break;}
case 10:
#line 70 "parser.y"
{ printf("VariableList -> Variable\n");;
    break;}
case 11:
#line 73 "parser.y"
{ printf("Variable -> Type identifier\n");;
    break;}
case 12:
#line 76 "parser.y"
{ printf("Type -> Int\n");;
    break;}
case 13:
#line 78 "parser.y"
{ printf("Type -> Double\n");;
    break;}
case 14:
#line 80 "parser.y"
{ printf("Type -> Bool\n");;
    break;}
case 15:
#line 82 "parser.y"
{ printf("Type -> String\n");;
    break;}
case 16:
#line 84 "parser.y"
{ printf("Type -> Void\n");;
    break;}
case 17:
#line 86 "parser.y"
{ printf("Type -> class identifier\n");;
    break;}
case 18:
#line 88 "parser.y"
{ printf("Type -> Type[]\n");;
    break;}
case 19:
#line 91 "parser.y"
{ printf("FunctionDecl -> Identifier\n");;
    break;}
case 20:
#line 94 "parser.y"
{ printf("FunctionDefn -> Type identifier ( Formals ) StmtBlock\n");;
    break;}
case 21:
#line 97 "parser.y"
{ printf("Formals -> Variable+,\n");;
    break;}
case 22:
#line 99 "parser.y"
{ printf("Formals ->\n");;
    break;}
case 23:
#line 102 "parser.y"
{ printf("ClassDefn -> class identifier OptExtends { FieldList }\n");;
    break;}
case 24:
#line 105 "parser.y"
{ printf("OptExtends -> extends identifier\n"); ;
    break;}
case 25:
#line 107 "parser.y"
{ printf("OptExtends ->\n");;
    break;}
case 26:
#line 110 "parser.y"
{ printf("Fieldlist -> Fieldlist Field\n");;
    break;}
case 27:
#line 112 "parser.y"
{ printf("Fieldlist ->\n");;
    break;}
case 28:
#line 115 "parser.y"
{ printf("Field -> VariableDecl\n");;
    break;}
case 29:
#line 117 "parser.y"
{ printf("Field -> FunctionDecl\n");;
    break;}
case 30:
#line 119 "parser.y"
{ printf("Field -> FunctionDefn\n");;
    break;}
case 31:
#line 122 "parser.y"
{ printf("StmtBlock -> { StmtList }\n");;
    break;}
case 32:
#line 125 "parser.y"
{ printf("Stmtlist -> Stmtlist Stmt\n");;
    break;}
case 33:
#line 127 "parser.y"
{ printf("Stmtlist ->\n");;
    break;}
case 34:
#line 130 "parser.y"
{ printf("Stmt -> VariableDecl\n");;
    break;}
case 35:
#line 132 "parser.y"
{ printf("Stmt -> SimpleStmt;\n");;
    break;}
case 36:
#line 134 "parser.y"
{ printf("Stmt -> IfStmt\n");;
    break;}
case 37:
#line 136 "parser.y"
{ printf("Stmt -> WhileStmt\n");;
    break;}
case 38:
#line 138 "parser.y"
{ printf("Stmt -> ForStmt\n");;
    break;}
case 39:
#line 140 "parser.y"
{ printf("Stmt -> ReturnStmt；\n");;
    break;}
case 40:
#line 142 "parser.y"
{ printf("Stmt -> PrintStmt;\n");;
    break;}
case 41:
#line 144 "parser.y"
{ printf("Stmt -> StmtBlock\n");;
    break;}
case 42:
#line 147 "parser.y"
{ printf("SimpleStmt -> LValue = Expr\n");;
    break;}
case 43:
#line 149 "parser.y"
{ printf("SimpleStmt -> Expr\n");;
    break;}
case 44:
#line 151 "parser.y"
{ printf("SimpleStmt -> \n");;
    break;}
case 45:
#line 154 "parser.y"
{ printf("LValue -> OptReceiver identifier\n");;
    break;}
case 46:
#line 156 "parser.y"
{ printf(" LValue -> [ Expr ]\n");;
    break;}
case 47:
#line 160 "parser.y"
{ printf("OptReceiver -> Expr .\n");;
    break;}
case 48:
#line 162 "parser.y"
{ printf("OptReceiver ->\n");;
    break;}
case 49:
#line 166 "parser.y"
{ printf("Call -> OptReceiver identifier ( Actuals )\n");;
    break;}
case 50:
#line 169 "parser.y"
{ printf("Actuals -> ExprList\n");;
    break;}
case 51:
#line 171 "parser.y"
{ printf("Actuals ->\n");;
    break;}
case 52:
#line 174 "parser.y"
{ printf("ExprList -> ExprList , Expr\n"); ;
    break;}
case 53:
#line 176 "parser.y"
{ printf("ExprList -> Expr\n"); ;
    break;}
case 54:
#line 180 "parser.y"
{ printf("ForStmt -> For (SimpleStmt ; BoolExpr ; SimpleStmt ) Stmt\n");;
    break;}
case 55:
#line 183 "parser.y"
{ printf("WhileStmt -> While ( BoolExpr ) Stmt\n");;
    break;}
case 56:
#line 186 "parser.y"
{ printf("IfStmt -> if ( BoolExpr ) Stmt OptElse\n");;
    break;}
case 57:
#line 189 "parser.y"
{ printf("OptElse -> else Stmt\n"); ;
    break;}
case 58:
#line 191 "parser.y"
{ printf("OptElse ->\n"); ;
    break;}
case 59:
#line 194 "parser.y"
{ printf("ReturnStmt -> Return\n");;
    break;}
case 60:
#line 196 "parser.y"
{ printf("ReturnStmt -> Return Expr\n");;
    break;}
case 61:
#line 199 "parser.y"
{ printf("PrintStmt -> Print ( ExprList )\n");;
    break;}
case 62:
#line 202 "parser.y"
{ printf("BoolExpr -> Expr\n");;
    break;}
case 63:
#line 205 "parser.y"
{ printf("Expr -> Constant\n");;
    break;}
case 64:
#line 207 "parser.y"
{ printf("Expr -> LValue\n");;
    break;}
case 65:
#line 209 "parser.y"
{ printf("Expr -> this\n");;
    break;}
case 66:
#line 211 "parser.y"
{ printf("Expr -> Call\n");;
    break;}
case 67:
#line 213 "parser.y"
{ printf("Expr -> ( Expr )\n");;
    break;}
case 68:
#line 215 "parser.y"
{ printf("Expr -> Expr + Expr\n");;
    break;}
case 69:
#line 217 "parser.y"
{ printf("Expr -> Expr - Expr\n");;
    break;}
case 70:
#line 219 "parser.y"
{ printf("Expr -> Expr * Expr\n");;
    break;}
case 71:
#line 221 "parser.y"
{ printf("Expr -> Expr / Expr\n");;
    break;}
case 72:
#line 223 "parser.y"
{ printf("Expr -> Expr %% Expr\n");;
    break;}
case 73:
#line 225 "parser.y"
{ printf("Expr -> - Expr\n");;
    break;}
case 74:
#line 227 "parser.y"
{ printf("Expr -> Expr < Expr\n");;
    break;}
case 75:
#line 229 "parser.y"
{ printf("Expr -> Expr <= Expr\n");;
    break;}
case 76:
#line 231 "parser.y"
{ printf("Expr -> Expr > Expr\n");;
    break;}
case 77:
#line 233 "parser.y"
{ printf("Expr -> Expr >= Expr\n");;
    break;}
case 78:
#line 235 "parser.y"
{ printf("Expr -> Expr == Expr\n");;
    break;}
case 79:
#line 237 "parser.y"
{ printf("Expr -> Expr != Expr\n");;
    break;}
case 80:
#line 239 "parser.y"
{ printf("Expr -> Expr && Expr\n");;
    break;}
case 81:
#line 241 "parser.y"
{ printf("Expr -> Expr || Expr\n");;
    break;}
case 82:
#line 243 "parser.y"
{ printf("Expr -> ! Expr\n");;
    break;}
case 83:
#line 245 "parser.y"
{ printf("Expr -> ReadInteger ( )\n");;
    break;}
case 84:
#line 247 "parser.y"
{ printf("Expr -> ReadLine ( )\n");;
    break;}
case 85:
#line 249 "parser.y"
{ printf("Expr -> New ( identifier )\n");;
    break;}
case 86:
#line 251 "parser.y"
{ printf("Expr -> NewArray ( Expr , Type )\n");;
    break;}
case 87:
#line 254 "parser.y"
{ printf("Constant -> intConstant\n");;
    break;}
case 88:
#line 256 "parser.y"
{ printf("Constant -> doubleConstant\n");;
    break;}
case 89:
#line 258 "parser.y"
{ printf("Constant -> boolConstant\n");;
    break;}
case 90:
#line 260 "parser.y"
{ printf("Constant -> stringConstant\n");;
    break;}
case 91:
#line 262 "parser.y"
{ printf("Constant -> null\n");;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 442 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  for (x = 0; x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = 0; x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 264 "parser.y"
 

void Inityyparse(void)
{
}
