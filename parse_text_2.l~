%{
char * id_type;
char * id_table;
%}

letter [a-zA-Z]
digit [0-9]
alfa [a-zA-Z0-9_]
whitesp [ \t\n]

%%

{digit}+ literal_func(yytext);

break printf("BREAK "); 
char id_type="CHAR";
const printf("CONSTATNT ");
do printf("DO ");
else printf("ELSE ");
long printf("LONG ");
return printf("RETURN ");
int id_type="INT";
float id_type="FLOAT";
double id_type="DOUBLE";
sizeof printf("SIZEOF ");
while printf("WHILE ");
for printf("FOR ");
if printf("IF ");
main printf("MAIN ");

[+] printf("PLUS ");
[-] printf("MONUS ");
[*] printf("MULT ");
[/] printf("DIV ");
[<] printf("LT ");
[>] printf("GT ");
[=] printf("EQUAL ");
[==]+ printf("EQUAL_EQUAL ");
[&&]+ printf("AND ");
[||]+ printf("OR ");
[!] printf("NOT ");

[a-zA-Z]([a-zA-Z]|[0-9])* id_func(yytext);

[,] printf("COMMA ");
[;] printf("SEMICOLON ");
[(] printf("FIRST_BRACKET_OPEN ");
[)] printf("FIRST_BRACKET_CLOSED ");
[{] printf("CURLY_BRACKET_OPEN ");
[}] printf("CURLY_BRACKET_CLOSED ");

%%

main()
{
	initialize();
	//initialize_l_table();
	yylex();
	print_table();
	//print_l_table();		
	
}

yywrap()
{

}

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
	printf("(ID-->%s) ",a);
	//printf("%d",strlen(a));
	
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
			
		while (current->next!=NULL)
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
		
		if ((strcmp(current->charecter,a))==0)
			repeat = 1;
		
		if (repeat == 0)
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
	
	printf("Symbol Table:\n-------------\nType\tIdentifier\tAddress\n----\t----------\t-------\n");
	for (i=0;i<26;i++)
	{
		table *p;
		p = &(table_pointer[i]);
		
		while (p->empty==0)
		{
			printf("%s\t%s\t\t%d\n",p->type, p->charecter, p->add);
			if (p->next!=NULL)
				p=p->next;
			else
				break;		
		}
	}
	printf("\n");
	
}


/*---------------------------------------------------------------------------------------------------------------------*/
/*
typedef struct literal_table
{
	int value;
	int empty;
	char *type;
	struct literal_table *add;
	struct literal_table *next;
}l_table ;
l_table l_table_pointer[26];
	 
initialize_l_table()
{
	int i;
	
	for (i=0;i<10;i++)
	{
		l_table_pointer[i].empty=1;
		l_table_pointer[i].add=NULL;
		l_table_pointer[i].next=NULL;
		l_table_pointer[i].type=NULL;
	}	
}

*/

literal_func(char *add)
{	
	int a = ((int)add)-'0';
	
	printf("(LITERAL-->%s )",add);
}/*	//printf("%s",a);
	
	int len, i;
	int char_val;
	
	char_val = a%10;
	
	if (l_table_pointer[char_val].empty==1)
	{
		l_table_pointer[char_val].value = a;
		l_table_pointer[char_val].add = &(l_table_pointer[char_val]);
		l_table_pointer[char_val].next = NULL;
		l_table_pointer[char_val].empty = 0;
		l_table_pointer[char_val].type = id_type;
		//print_table();
	}
	
	else
	{
		l_table *new,*current;
		
		new =malloc(sizeof(table));
		
		current = &l_table_pointer[char_val];
		
		while (current->next!=NULL)
		{
			current = current->next;
		}
		
		new->value = a;
		
		new->next=NULL;
		current->next = new;
		new->add = new;
		new->empty=0;
		new->type = id_type;
		//print_table();
	}
}


print_l_table()
{
	int i = 0;
	
	printf("Literal Table:\n-------------\nType\tLiteral\t\tAddress\n----------\t-------\n");
	for (i=0;i<10;i++)
	{
		l_table *p;
		p = &(l_table_pointer[i]);
		
		while (p->empty==0)
		{
			printf("%s\t%d\t\t%d\n",p->type, p->value,p->add);
			if (p->next!=NULL)
				p=p->next;
			else
				break;		
		}
	}
	printf("\n");
	
}



*/








