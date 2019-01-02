%{

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <process.h>    
#include "scanner.h"

%}

%start Program

%token T_Void T_Bool T_Int T_Double T_String T_Class 
%token T_LessEqual T_GreaterEqual T_Equal T_NotEqual
%token T_And T_Or T_Null T_Extends T_This
%token T_While T_For T_If T_Else T_Return T_Break
%token T_Identifier
%token T_StringConstant T_IntConstant T_DoubleConstant T_BoolConstant
%token T_New T_NewArray T_Print T_ReadInteger T_ReadLine

%union 
{       
  int integerConstant;
  int boolConstant;
  const char *stringConstant;
  double doubleConstant;
  char identifier[128];
}

%right '='
%left '+' '-' '*' '/' '%'
%nonassoc LOWER_THEN_ELSE
%nonassoc T_Else
%left '<' '>'
%left '.'
%left '(' ')'
%left '{' '}'
%left '[' ']'
%right '^'
%left T_And T_Or
%left T_LessEqual T_GreaterEqual T_Equal T_NotEqual

%%

	 
Program     	:		DeclList                                            			
						{ printf("Program -> DeclList\n"); @1 }; 

DeclList    	:		DeclList Decl                                       			
						{ printf("DeclList -> DeclList Decl\n");}
            	|                                                         				
            			{ printf("DeclList ->\n");};

Decl        	: 		VariableDecl                                        			
						{ printf("Decl -> VaruableDecl\n");}
            	|		ClassDefn                                           			
            			{ printf("Decl -> ClassDefn\n");}
            	|		FunctionDefn                                        			
            			{ printf("Decl -> FunctionDefn\n");}
            	|		FunctionDecl                                        			
            			{ printf("Decl -> FunctionDecl\n");};

VariableDecl	:		Variable ';'                                        			
						{ printf("VariableDecl -> Variable\n");};

VariableList 	:    	VariableList ',' Variable     									
						{ printf("VariableList -> VariableList , Variable\n");}
                |    	Variable                            							
                		{ printf("VariableList -> Variable\n");};

Variable    	:		Type T_Identifier                                   			
						{ printf("Variable -> Type identifier\n");};

Type        	:		T_Int                                               			
						{ printf("Type -> Int\n");}               
            	|		T_Double                                            			
            			{ printf("Type -> Double\n");}                  
            	|		T_Bool                                              			
            			{ printf("Type -> Bool\n");}                  
            	|		T_String                                           				
            			{ printf("Type -> String\n");}                    
            	|		T_Void                                              			
            			{ printf("Type -> Void\n");}                   
            	|		T_Class T_Identifier                                			
            			{ printf("Type -> class identifier\n");}               
            	|		Type '[' ']'                                        			
            			{ printf("Type -> Type[]\n");};

FunctionDecl	:		Type T_Identifier '(' Formals ')' ';'              				
						{ printf("FunctionDecl -> Identifier\n");};

FunctionDefn    :       Type T_Identifier '(' Formals ')' StmtBlock                     
						{ printf("FunctionDefn -> Type identifier ( Formals ) StmtBlock\n");};

Formals     	:		VariableList                                   					
						{ printf("Formals -> Variable+,\n");}   
            	|                                                         				
            			{ printf("Formals ->\n");};

ClassDefn   	:		T_Class T_Identifier OptExtends '{' Fieldlist '}'              	
						{ printf("ClassDefn -> class identifier OptExtends { FieldList }\n");};

OptExtends   	:    	T_Extends T_Identifier  										
						{ printf("OptExtends -> extends identifier\n"); }
                |                                        								
                		{ printf("OptExtends ->\n");};

Fieldlist		:		Fieldlist Field                                     			
						{ printf("Fieldlist -> Fieldlist Field\n");}               
            	|                                                         				
            			{ printf("Fieldlist ->\n");};

Field       	:		VariableDecl                            						
						{ printf("Field -> VariableDecl\n");}               
            	|		FunctionDecl                            						
            			{ printf("Field -> FunctionDecl\n");}               
            	|		FunctionDefn                            						
            			{ printf("Field -> FunctionDefn\n");};

StmtBlock   	:		'{' Stmtlist '}'                        						
						{ printf("StmtBlock -> { StmtList }\n");};

Stmtlist    	:		Stmtlist Stmt                           						
						{ printf("Stmtlist -> Stmtlist Stmt\n");}
            	|                                               						
            			{ printf("Stmtlist ->\n");};

Stmt        	:		VariableDecl                            						
						{ printf("Stmt -> VariableDecl\n");}               
           	 	|		SimpleStmt ';'                          						
           	 			{ printf("Stmt -> SimpleStmt;\n");}               
            	|		IfStmt                                  						
            			{ printf("Stmt -> IfStmt\n");}               
            	|		WhileStmt                               						
            			{ printf("Stmt -> WhileStmt\n");}               
            	|		ForStmt                                 						
            			{ printf("Stmt -> ForStmt\n");}               
            	|		ReturnStmt ';'                          						
            			{ printf("Stmt -> ReturnStmt；\n");}               
            	|		PrintStmt ';'                          							
            			{ printf("Stmt -> PrintStmt;\n");}               
            	|		StmtBlock                               						
            			{ printf("Stmt -> StmtBlock\n");};

SimpleStmt  	:		LValue '=' Expr                       							
						{ printf("SimpleStmt -> LValue = Expr\n");}
            	|		Expr                                    						
            			{ printf("SimpleStmt -> Expr\n");}
            	|	                                        							
            			{ printf("SimpleStmt -> \n");};

LValue      	:		OptReceiver T_Identifier                                   		
						{ printf("LValue -> OptReceiver identifier\n");}
            	| 		Expr '[' Expr ']'                                               
            			{ printf(" LValue -> [ Expr ]\n");};


OptReceiver     :       Expr '.'                                                       
						{ printf("OptReceiver -> Expr .\n");}
                |                                                                       
                		{ printf("OptReceiver ->\n");};


Call        	:		OptReceiver T_Identifier '(' Actuals ')'                    	
						{ printf("Call -> OptReceiver identifier ( Actuals )\n");};

Actuals         :       ExprList                                                        
						{ printf("Actuals -> ExprList\n");}  
                |                                                                       
                		{ printf("Actuals ->\n");};

ExprList        :       ExprList ',' Expr                                               
						{ printf("ExprList -> ExprList , Expr\n"); }
                |       Expr                                                            
                		{ printf("ExprList -> Expr\n"); };


ForStmt     	:		T_For '(' SimpleStmt ';' BoolExpr ';' SimpleStmt ')' Stmt       
						{ printf("ForStmt -> For (SimpleStmt ; BoolExpr ; SimpleStmt ) Stmt\n");};

WhileStmt   	:		T_While '(' BoolExpr ')' Stmt                                  	
						{ printf("WhileStmt -> While ( BoolExpr ) Stmt\n");};

IfStmt      	:		T_If '(' BoolExpr ')' Stmt OptElse                  			
						{ printf("IfStmt -> if ( BoolExpr ) Stmt OptElse\n");}; 

OptElse         :    	T_Else Stmt                   									
						{ printf("OptElse -> else Stmt\n"); }
                |    	%prec LOWER_THEN_ELSE  											
                		{ printf("OptElse ->\n"); };

ReturnStmt  	:		T_Return                          								
						{ printf("ReturnStmt -> Return\n");}
            	|		T_Return Expr                     								
            			{ printf("ReturnStmt -> Return Expr\n");};

PrintStmt   	:		T_Print '(' ExprList ')'          								
						{ printf("PrintStmt -> Print ( ExprList )\n");};

BoolExpr    	:		Expr                              								
						{ printf("BoolExpr -> Expr\n");};

Expr         	:  		Constant                            							
						{ printf("Expr -> Constant\n");}
             	|  		LValue                              							
             			{ printf("Expr -> LValue\n");}                                                                 
             	|  		T_This                              							
             			{ printf("Expr -> this\n");}                                                
             	| 		Call                                							
             			{ printf("Expr -> Call\n");}                                                
             	|  		'(' Expr ')'                        							
             			{ printf("Expr -> ( Expr )\n");}                                                 
             	|  		Expr '+' Expr                       							
             			{ printf("Expr -> Expr + Expr\n");}                                                 
             	|  		Expr '-' Expr                       							
             			{ printf("Expr -> Expr - Expr\n");}                                                 
             	|  		Expr '*' Expr                       							
             			{ printf("Expr -> Expr * Expr\n");}                                                 
             	|  		Expr '/' Expr                       							
             			{ printf("Expr -> Expr / Expr\n");}                                                 
             	|  		Expr '%' Expr                       							
             			{ printf("Expr -> Expr %% Expr\n");}                                                
             	|  		'-' Expr            			    							
             			{ printf("Expr -> - Expr\n");}                                  
             	|  		Expr '<' Expr                       							
             			{ printf("Expr -> Expr < Expr\n");}                                                 
             	|  		Expr T_LessEqual Expr               							
             			{ printf("Expr -> Expr <= Expr\n");}                                                
             	|  		Expr '>' Expr                       							
             			{ printf("Expr -> Expr > Expr\n");}                                                 
             	|  		Expr T_GreaterEqual Expr            							
             			{ printf("Expr -> Expr >= Expr\n");}                                                
             	|  		Expr T_Equal Expr                   							
             			{ printf("Expr -> Expr == Expr\n");}                                                
             	|  		Expr T_NotEqual Expr                							
             			{ printf("Expr -> Expr != Expr\n");}                                                
             	|  		Expr T_And Expr                     							
             			{ printf("Expr -> Expr && Expr\n");}                                                
             	|  		Expr T_Or Expr                      							
             			{ printf("Expr -> Expr || Expr\n");}                                                
             	|  		'!' Expr                            							
             			{ printf("Expr -> ! Expr\n");}                                              
             	|  		T_ReadInteger '(' ')'               							
             			{ printf("Expr -> ReadInteger ( )\n");}                                                 
             	|  		T_ReadLine '(' ')'                  							
             			{ printf("Expr -> ReadLine ( )\n");}                                                
             	|  		T_New '(' T_Identifier ')'          							
             			{ printf("Expr -> New ( identifier )\n");}                                              
             	|  		T_NewArray '(' Expr ',' Type ')'    							
             			{ printf("Expr -> NewArray ( Expr , Type )\n");};                              
             
Constant     	:  		T_IntConstant       											
						{ printf("Constant -> intConstant\n");}
             	|  		T_DoubleConstant    											
             			{ printf("Constant -> doubleConstant\n");}                                              
             	|  		T_BoolConstant      											
             			{ printf("Constant -> boolConstant\n");}                                                
             	|  		T_StringConstant    											
             			{ printf("Constant -> stringConstant\n");}                                              
             	|  		T_Null              											
             			{ printf("Constant -> null\n");};

%% 

void Inityyparse(void)
{
}
