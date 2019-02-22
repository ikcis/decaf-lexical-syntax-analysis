# decaf-lexical-syntax-analysis

## 词法分析

用flex工具生成一个扫描程序，对Decaf语言编写的源程序从左至右逐个字符进行扫描，产生一个单词序列，用以进行下一阶段的语法分析。

## 语法分析工作

用bison工具生成一个语法分析程序，对词法分析输出的单词符号串（终结符串）进行自底向上的分析，并依次输出用来进行归约的语法规则。
