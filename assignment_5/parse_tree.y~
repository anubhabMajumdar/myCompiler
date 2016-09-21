%{
#include <stdio.h>

char * id_type;
char * id_table;

%}

%union {char *strval;char *numval;};
%token INT FLOAT DOUBLE CHAR COMMA SEMICOLON EQUAL BRACKET_OPEN BRACKET_CLOSE PLUS MONUS DIV MULT IF ELSE CURLY_OPEN  CURLY_CLOSE GT LT WHILE BREAK CONTINUE
%token <strval>ID
%token <numval>NUMBER

%%


EXPRESSION:	DECLARATION_STATEMENT	//{printf("\n");}
		|EXPRESSION DECLARATION_STATEMENT	//{printf("\n");}
		|EXPRESSION CONDITIONAL
		|EXPRESSION ASSIGNMENT_STATEMENT	
		|EXPRESSION WHILELOOP
		;

DECLARATION_STATEMENT:	TYPE DECLARE
			;

TYPE:	INT	{id_type = "INT";}// printf("INT ");}
	|FLOAT	{id_type = "FLOAT";}// printf("FLOAT ");}
	|DOUBLE	{id_type = "DOUBLE";}// printf("DOUBLE ");}
	|CHAR	{id_type = "CHAR";}// printf("CHAR ");}
	;
	
DECLARE:	ID SEMICOLON	{id_func($1);}//printf("ID = %s\n",$1);}	
		|ID COMMA DECLARE	{id_func($1);}// printf("ID = %s\n",$1);}
		;

ASSIGNMENT_STATEMENT:	ID {check_id($1); push($1);} EQUAL {push("=");} ARITHMETIC_EXPRESSION SEMICOLON	{codegen_assign();}
			|ID {check_id($1); push($1);} EQUAL {push("=");} ARITHMETIC_EXPRESSION COMMA ASSIGNMENT_STATEMENT {codegen_assign();}
			|ARITHMETIC_EXPRESSION SEMICOLON 
			;


CONDITIONAL:	IF {l_index++;} BRACKET_OPEN IF_CONDITION BRACKET_CLOSE {if_func();} CURLY_OPEN IN_BRACES CURLY_CLOSE 			CONDITIONAL_ELSE 
		;
		

IF_CONDITION: ARITHMETIC_EXPRESSION
	      ;
		
CONDITIONAL_ELSE: {printf("goto L%d3\n", l_index);} ELSE {printf("L%d2:\n", l_index);} CURLY_OPEN IN_BRACES CURLY_CLOSE {printf("L%d3:\n", l_index); l_index--;}
	          | {printf("L%d2:\n", l_index); l_index--;}/*EPSILON*/ 
	     ;

WHILELOOP: WHILE {w_index++; } BRACKET_OPEN {printf("W%d0:\n", w_index);} ARITHMETIC_EXPRESSION BRACKET_CLOSE {printf("IF t%d \nifgoto W%d1\nelsegoto W%d2\nW%d1:\n", tint-1, w_index, w_index, w_index);} CURLY_OPEN IN_BRACES CURLY_CLOSE {printf("goto W%d0\nW%d2:\n", w_index, w_index); w_index--;} 	
	   ;	

	     	
IN_BRACES: CONTINUE SEMICOLON {printf("goto W%d0\n",w_index);} IN_BRACES
	   |BREAK SEMICOLON {printf("goto W%d2\n",w_index);} IN_BRACES
	   |ASSIGNMENT_STATEMENT
	   |CONDITIONAL IN_BRACES
	   |WHILELOOP IN_BRACES
	   |/*EPSILON*/
	   ;	

ARITHMETIC_EXPRESSION:	ARITHMETIC_EXPRESSION GT EQUAL {push(">=");} TERM	{codegen();}
			|ARITHMETIC_EXPRESSION LT EQUAL {push("<=");} TERM	{codegen();}
			|ARITHMETIC_EXPRESSION GT {push(">");} TERM	{codegen();}
			|ARITHMETIC_EXPRESSION LT {push("<");} TERM	{codegen();}
			|ARITHMETIC_EXPRESSION PLUS {push("+");} TERM	{codegen();}
			|ARITHMETIC_EXPRESSION MONUS {push("-");} TERM	 {codegen();}
			|TERM
			;

TERM:	TERM MULT {push("*");} FUNCTION	 {codegen();}
	|TERM DIV {push("/");} FUNCTION	 {codegen();}
	|FUNCTION
	;

FUNCTION:	BRACKET_OPEN ARITHMETIC_EXPRESSION BRACKET_CLOSE
		|NUMBER	{push($1);}
		|ID	{check_id($1); push($1);}
		;						
		
%%		

void yyerror(char *s)
{
fprintf(stderr,"%s\n",s);
return;
}

int main(void)
{
	initialize();
	
	//printf("Generating Intermidiate Code.....\n");
	
	yyparse();

	//printf("Parsing Successful! Generating symbol table.....\n");
	print_table();
	
	return 0;
}

/*--------------------------------------------------------------------------------------------*/

typedef struct entry
{
	char charecter[20];
	char *type;
	int empty;
	struct entry *add;
	struct entry *next;
}table ;
table table_pointer[26];
	 
initialize()
{
	int i;
	
	for (i=0;i<26;i++)
	{
		table_pointer[i].empty=1;
		table_pointer[i].add=NULL;
		table_pointer[i].next=NULL;
		table_pointer[i].type = malloc(10*sizeof(char));
	}
	
	id_table = malloc(sizeof(char));	
}


id_func(char *a)
{	
	
	int len, i;
	int char_val;
	
	len = strlen(a);
	char_val = 0;
	
	for (i=0;i<len;i++)	
	{
		char_val =char_val + (int)a[i];
	}
	
	char_val = char_val%26;
	
	
	if (table_pointer[char_val].empty==1)
	{
		for (i=0;i<len;i++)	
		{
			table_pointer[char_val].charecter[i] = a[i];
		}	
	
		table_pointer[char_val].add = &(table_pointer[char_val]);
		table_pointer[char_val].next = NULL;
		table_pointer[char_val].empty = 0;
		table_pointer[char_val].type = id_type;
		
	}
	
	else
	{
		table *new,*current;
		int repeat = 0;
		
		new = malloc(sizeof(table));
		
		current = &table_pointer[char_val];
		
		/*	if only one element present	*/
		if ((strcmp(current->charecter,a))==0)
			repeat = 1;
			
		while ((repeat==0) && (current->next!=NULL))
		{
			if ((strcmp(current->charecter,a))!=0)
			{	current = current->next;
				//printf("REPEAT\n");
			}
			else
			{
			
				repeat = 1;
				break;
			}		
		}
		
		/*	For last element	*/
		
		if ((strcmp(current->charecter,a)) == 0)
			repeat = 1;
		
		if (repeat == 1)
		{
			if((strcmp(id_type, current->type)) == 0)
				printf("\nERROR.\n%s redeclaration.\n",current->charecter);
			else	
				printf("\nERROR.\n%s of type %s already declared\n", current->charecter,current->type);	 
			
			exit(0);
		}
		
		else if (repeat == 0)
		{	for (i=0;i<len;i++)	
			{
				new->charecter[i] = a[i];
			}	
	
			new->next=NULL;
			current->next = new;
			new->add = new;
			new->empty=0;
			new->type = id_type;
		}

	}
}


print_table()
{
	int i = 0;
	
	//printf("Symbol Table:\n-------------\nType\tIdentifier\tAddress\n----\t----------\t-------\n");
	for (i=0;i<26;i++)
	{
		table *p;
		p = &(table_pointer[i]);
		
		while (p->empty==0)
		{
			//printf("%s\t%s\t\t%d\n",p->type, p->charecter, p->add);
			if (p->next!=NULL)
				p=p->next;
			else
				break;		
		}
	}
	//printf("\n");
	
}

/*-------------------------------------------------------------------------------------------------------------------*/

check_id(char *a)
{
	
	int len, i;
	int char_val;
	
	len = strlen(a);
	char_val = 0;
	
	for (i=0;i<len;i++)	
	{
		char_val =char_val + (int)a[i];
	}
	
	char_val = char_val%26;
		
		table *new,*current;
		int repeat = 0;
		
		new = malloc(sizeof(table));
		
		current = &table_pointer[char_val];
		
		/*	if only one element present	*/
		if ((strcmp(current->charecter,a))==0)
			repeat = 1;
			
		while ((repeat==0) && (current->next!=NULL))
		{
			if ((strcmp(current->charecter,a))!=0)
			{	current = current->next;
				//printf("REPEAT\n");
			}
			else
			{
			
				repeat = 1;
				break;
			}		
		}
		
		/*	For last element	*/
		
		if ((strcmp(current->charecter,a)) == 0)
			repeat = 1;
		
		if (repeat == 0)
		{
			printf("\nERROR!\nVariable %s is undeclared.\n\n",a);
			exit(0);
		}
}
		
assignment_func(char *id, int num)
{
	check_id(id);
	
	//printf("id checked\n");
	
	
}	
	
/*----------------------Intermidiate code Generation for arithmetic expression---------------------------------------*/

char st[100][25];
int top=0,ptr=0;
int tint=0; int tintar[200];
int label[20];
int lnum=0;
int ltop=0;
char temp[2]="t";
char i_[2]="0";
int l_index = 0;
int w_index = 0;

push(char *chr)
{
  strcpy(st[++top],chr);
  ptr++;
}

codegen()
{
    printf("t%d = %s",tint,st[top-2]);
    printnum(2);
    printf(" %s %s",st[top-1],st[top]);
    printnum(0);
    printf("\n");
    top-=2;ptr-=2;
    strcpy(st[top],"t");
    tintar[ptr]=tint;
    tint++;
}

codegen_umin()
{
    printf("t%d = -%s\n",tint,st[top]);
    printnum(0);
    top--;ptr--;
    strcpy(st[top],"t");
    tintar[ptr]=tint;
    tint++;
}

codegen_assign()
{
    printf("%s = ",st[top-2]);
    printnum(2);
    printf("%s",st[top]);
    printnum(0);
    printf("\n");
    top-=2;ptr-=2;
}

printnum(int n)
{
    if( strcmp(st[top-n],"t")==0)
    {
         printf("%d",tintar[ptr-n]);
    }
}


/*--------------------------------------------if else---------------------------------------------------------------*/	
	
if_func()
{
	printf("IF t%d\nifgoto L%d1\nelsegoto L%d2\nL%d1:\n", tint-1, l_index, l_index, l_index);	
}	
	
	
	
	
	
	
	

