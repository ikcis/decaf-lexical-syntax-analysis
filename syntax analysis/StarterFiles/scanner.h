/*
 * scanner.h
 * ---------------
 *不要修改此文件，这个文件定义了一些lex.yy.c用到的常量和函数.
 */

#ifndef _H_scanner
#define _H_scanner


extern char *yytext;     // Text of lexeme just scanned

int yylex(void);         // Defined in the generated lex.yy.c file
void Inityylex();        // Defined in scanner.l user subroutine section
const char *GetLineNumbered(int number); 
 
#endif
