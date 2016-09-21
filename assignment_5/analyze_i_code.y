%{
#include <stdio.h>
%}

%union {char *strval;char *numval;char *labelval;};

%token INT FLOAT DOUBLE CHAR COMMA SEMICOLON EQUAL BRACKET_OPEN BRACKET_CLOSE PLUS MONUS DIV MULT IF ELSE CURLY_OPEN  CURLY_CLOSE GT LT WHILE BREAK CONTINUE GOTO EGOTO IGOTO 

%token EQUAL 
%token <strval>ID
%token <numval>NUMBER
%token <labelval>LABEL

%%

LINES:	LINES ASSIGN
	|LINES ARITHMATIC
	|LINES GOT_LABEL
	|LINES CONDITION
	|/*EPSILON*/
	;

ASSIGN:	LINES ID EQUAL ID	{print_assign($2, $4);}
	|LINES ID EQUAL NUMBER	{print_assign_immediate($2, atoi($4));}
	;

ARITHMATIC :	LINES ID EQUAL ID OP ID	{print_arithmatic($2, $4, $6);}	 
		|LINES ID EQUAL ID OP NUMBER 	{print_const_arihmetic($2, $4, atoi($6));}
		|LINES ID EQUAL ID RELOP ID	{print_relation($4, $6);}	 
		|LINES ID EQUAL ID RELOP NUMBER	{print_const_relation($4, atoi($6));}	 
		;

OP:	PLUS	{operand = "+";}
	|MONUS	{operand = "-";}
	|MULT	{operand = "*";}
	|DIV	{operand = "/";}
	;			

RELOP:	LT	{operand = "<";}
	|GT	{operand = ">";}
	;
	
GOT_LABEL:	LINES LABEL	{printf("ORG %s\n", $2);}
		;
		
CONDITION:	IF ID {decide_jump();} 
		|IGOTO ID {printf("%s\n", $2);}
		|EGOTO ID {printf("JMP %s\n", $2);}
		|GOTO ID	{printf("JMP %s\n",$2);}
		;		


%%


char *operand;
int line = 0;

int main(void)
{
	
	printf("SUB A\n");
	
	yyparse();
	
	printf("\n");
	return 0;
}	

yyerror(char *s)
{
	printf("%s\n", s);
}



print_arithmatic(char *x, char *y, char *z)
{
	
	printf("LXI H, %s\n",  y);
	printf("MOV A, M\n");
	printf("LXI H, %s\n", z);
	printf("MOV B, M\n");
	if (strcmp(operand,"+") == 0)
		printf("ADD ");
		
	else if (strcmp(operand,"-") == 0)
		printf("SUB ");
		
	else if (strcmp(operand,"*") == 0)
		printf("MULT ");
	
	else if (strcmp(operand,"/") == 0)
		printf("DIV ");
		
	printf("B\n");
	
	printf("LXI H, %s\n",  x);
	
	printf("MOV M, A\n");
	
}


print_assign(char *x, char *y)
{

	printf("LXI H, %s\n", y);
	printf("MOV A, M\n");
	printf("LXI H, %s\n",  x);
	printf("MOV M, A\n");
	
}


print_assign_immediate(char *x, int y)
{

	printf("LXI A, %d\n", y);
	printf("LXI H, %s\n", x);
	printf("MOV M, A\n");
	
}


print_relation(char *x, char *y)
{
	printf("COMP(%s, %s)\n", x, y);
	
}

print_const_relation(char *x, int y)
{
	printf("COMP(%s, %d)\n", x, y);
	
}


decide_jump()
{
	if (strcmp(operand,">")==0)
		printf("JNZ ");
	else
		printf("JZ ");	
}

print_const_arihmetic(char *x, char *y, int num)
{
	printf("LXI H, %s\n",  y);
	printf("MOV A, M\n");
	printf("MVI B, %d\n", num);
	if (strcmp(operand,"+") == 0)
		printf("ADD ");
		
	else if (strcmp(operand,"-") == 0)
		printf("SUB ");
		
	else if (strcmp(operand,"*") == 0)
		printf("MULT ");
	
	else if (strcmp(operand,"/") == 0)
		printf("DIV ");
		
	printf("B\n");
	
	printf("LXI H, %s\n",  x);
	
	printf("MOV M, A\n");
}

