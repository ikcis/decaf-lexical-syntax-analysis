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


extern YYSTYPE yylval;
