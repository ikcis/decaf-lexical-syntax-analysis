/*
 *declaration.cpp
 *delcaration类的实现。
 *pp1需要你来实现它
*/
#include "declaration.h"
#include <stdio.h>
#include <string.h>


Declaration::Declaration(const char *str,int lineNum,int num)
{
}

const char * Declaration::GetName()
{
	return "good";
}

int Declaration::GetLineFound()
{
	return 0;

}
int Declaration::GetOccurrences()
{
	return 0;
}

void Declaration::IncrementOccurrences()
{
}

/*
 *Print()
 *------
 *由main.c调用，注意控制输出格式，使得你的输出和例子中的输出保持一致。
*/
void Declaration::Print()
{
}	