/*
 *scanner.l
 *	
 *	Flex输入文件，生成scanner
*/

%{
/*
 *
 *这个*{}*中的程序将被直接copy到lex.yy.c中去，所以可以将要用到的头文件和
 *全局变量在这个地方定义。
 *
*/
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include <malloc.h>
#include <string.h>
#include "scanner.h"
#include "hashtable.h"
#include "utility.h"

/*
 *Global variable: yylval
 *-----------------------
 *全局变量，我们可以从yylval中获得每个token的属性。
 *以后这个变量由bison/yacc自动生成，在这个实验里面，我们手动定义。
*/
YYSTYPE yylval;

/*
 *Global variable: yylloc
 *-----------------------
 *全局变量，我们可以从yylloc中获得每个token的位置属性。
 *以后也由bison/yacc自动生成。
*/
struct yyltype yylloc;

/* 
 *Macro: YY_USER_ACTION 
 *---------------------
 *flex自己定义的宏，这个函数将在每个rule的action之前运行，所以，如果你的每个rule都
 *要执行类似的action的话，不妨把这个action放在这个函数中。
*/
static void DoBeforeEachAction(); 
#define YY_USER_ACTION DoBeforeEachAction();

%}
/*
 *在这里定义你的辅助定义和开始条件
*/

%%

%%

/*
 *Function yyerror()
 *------------------
 *输出错误信息，这个实验中使用ReportError来代替它。不用修改。
*/void yyerror(char *msg)
{
  ReportError(&yylloc, "%s", msg);
}

/*
 *Function yywrap()
 *----------------
 *当文件到了结束后执行这个函数，不用修改。
*/
int yywrap()
{
	return (1);
}

/*
 * Function: DoBeforeEachAction()
 * ------------------------------
 * 定义为YY_USER_ACTION的函数。
 */
static void DoBeforeEachAction()
{
}