/*
 * scanner.h
 * ---------------
 *��Ҫ�޸Ĵ��ļ�������ļ�������һЩlex.yy.c�õ��ĳ����ͺ���.
 */

#ifndef _H_scanner
#define _H_scanner


extern char *yytext;     // Text of lexeme just scanned

int yylex(void);         // Defined in the generated lex.yy.c file
void Inityylex();        // Defined in scanner.l user subroutine section
const char *GetLineNumbered(int number); 
 
#endif
