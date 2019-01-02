/*
 *scanner.l
 *	
 *	Flex�����ļ�������scanner
*/

%{
/*
 *
 *���*{}*�еĳ��򽫱�ֱ��copy��lex.yy.c��ȥ�����Կ��Խ�Ҫ�õ���ͷ�ļ���
 *ȫ�ֱ���������ط����塣
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
 *ȫ�ֱ��������ǿ��Դ�yylval�л��ÿ��token�����ԡ�
 *�Ժ����������bison/yacc�Զ����ɣ������ʵ�����棬�����ֶ����塣
*/
YYSTYPE yylval;

/*
 *Global variable: yylloc
 *-----------------------
 *ȫ�ֱ��������ǿ��Դ�yylloc�л��ÿ��token��λ�����ԡ�
 *�Ժ�Ҳ��bison/yacc�Զ����ɡ�
*/
struct yyltype yylloc;

/* 
 *Macro: YY_USER_ACTION 
 *---------------------
 *flex�Լ�����ĺ꣬�����������ÿ��rule��action֮ǰ���У����ԣ�������ÿ��rule��
 *Ҫִ�����Ƶ�action�Ļ������������action������������С�
*/
static void DoBeforeEachAction(); 
#define YY_USER_ACTION DoBeforeEachAction();

%}
/*
 *�����ﶨ����ĸ�������Ϳ�ʼ����
*/

%%

%%

/*
 *Function yyerror()
 *------------------
 *���������Ϣ�����ʵ����ʹ��ReportError���������������޸ġ�
*/void yyerror(char *msg)
{
  ReportError(&yylloc, "%s", msg);
}

/*
 *Function yywrap()
 *----------------
 *���ļ����˽�����ִ����������������޸ġ�
*/
int yywrap()
{
	return (1);
}

/*
 * Function: DoBeforeEachAction()
 * ------------------------------
 * ����ΪYY_USER_ACTION�ĺ�����
 */
static void DoBeforeEachAction()
{
}